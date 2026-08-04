# Codex Findings: MonoGS SPLATONIC Port

Date: 2026-08-04

Scope: static review of the MonoGS SPLATONIC port against the working SplaTAM/SPLATONIC reference. I treated SPLATONIC as an optimization layer: it may sparsify the rendered pixels used for loss gradients, but it must not violate MonoGS bookkeeping semantics or the SPLATONIC rasterizer architecture.

## Guardrails Used

- Sparse tracking/map renders may be used for optimization losses, but sampled-only tensors must not be consumed later as dense MonoGS state.
- MonoGS keyframe selection, keyframe depth initialization, pruning, opacity reset, and densification bookkeeping require whole-image visibility/depth semantics unless explicitly redesigned.
- SPLATONIC reference behavior for tracking is one sampled pixel per 16x16 tile; mapping is a 4x4-tile sparse renderer with about 1/16 image sampling plus novelty/unseen pixels.
- SPLATONIC CUDA contracts must preserve `theta`/`rho` pose derivatives, `n_touched`, `BACKWARD::preprocess`, dense fallback behavior, and the sparse rasterizer tile constants.

## Findings

### P0: Sparse tracking output is reused as dense MonoGS bookkeeping

Evidence:
- The sparse track rasterizer writes only sampled pixels: `MonoGS/track-rasterization/cuda_rasterizer/forward.cu:322` uses one block per sampled pixel, and `MonoGS/track-rasterization/cuda_rasterizer/forward.cu:508` / `:516` write `out_color`, `out_depth`, and `out_opacity` only at `pix_id`.
- The C++ bridge initializes all unsampled pixels to zero: `MonoGS/track-rasterization/rasterize_points.cu:71` to `:75`.
- MonoGS then treats that sparse render package as dense state: `median_depth` is computed from the last tracking render at `MonoGS/utils/slam_frontend.py:456`; keyframe overlap uses `render_pkg["n_touched"]` at `MonoGS/utils/slam_frontend.py:742`; new keyframe depth seeding uses `render_pkg["depth"]` and `render_pkg["opacity"]` at `MonoGS/utils/slam_frontend.py:776` to `:780`.
- `add_new_keyframe()` fills every invalid or unseen depth with sparse-render statistics at `MonoGS/utils/slam_frontend.py:91` to `:102`.

Impact:
- This violates both guardrails: SPLATONIC optimization tensors leak into MonoGS dense state.
- Keyframe insertion and overlap can be decided from sampled visibility instead of full visibility.
- Keyframe depth initialization can be dominated by zeros/invalid sparse pixels, then filled with the median/std of only the sampled valid pixels.
- This is a plausible root cause for bad MonoGS quality even if sparse pose gradients are correct.

Probable fix:
- After the sparse tracking optimization loop converges, run a dense no-grad render for bookkeeping. Use that dense package for `median_depth`, `curr_visibility`, and `add_new_keyframe(depth, opacity)`.
- Keep sparse renders only for the tracking loss gradients.

### P0: Motion-prior fusion makes the final render package stale

Evidence:
- `tracking()` renders inside the optimization loop, then optionally modifies the camera pose with `viewpoint.update_RT(R_fused, viewpoint.T)` at `MonoGS/utils/slam_frontend.py:439` to `:454`.
- Immediately after that pose change, `self.median_depth = get_median_depth(depth, opacity)` still uses the pre-fusion render at `MonoGS/utils/slam_frontend.py:456`.
- The same stale `render_pkg` is returned to the caller and later used for visibility and keyframe depth.

Impact:
- With `tracking_motion_prior_alpha > 0`, the returned pose and returned render package describe different camera states.
- This can corrupt the exact MonoGS mechanisms that decide when to add keyframes and how to initialize them.

Probable fix:
- Apply motion-prior fusion before the final bookkeeping render, or re-render after `viewpoint.update_RT()`.
- The final render package returned by `tracking()` must correspond to the final camera pose.

### P1: Sparse `n_touched` is used for visibility, pruning, and opacity decisions

Evidence:
- Frontend keyframe visibility comes directly from the tracking render's `n_touched`: `MonoGS/utils/slam_frontend.py:742`.
- Backend mapping rebuilds `occ_aware_visibility` from `n_touched_acm` at `MonoGS/utils/slam_backend.py:294` to `:298`.
- In sparse map iterations, `n_touched_acm` is produced from sparse sampled pixels at `MonoGS/utils/slam_backend.py:208` to `:232`, not from a dense visibility pass.
- Pruning then consumes this visibility at `MonoGS/utils/slam_backend.py:302` to `:323`.

Impact:
- MonoGS expects visibility to describe whether each Gaussian was visible in the view/window, not whether it hit one of the sampled pixels.
- Sparse visibility can undercount visible Gaussians and cause incorrect keyframe overlap, pruning, and accumulated observation counts.

Probable fix:
- Do not update `occ_aware_visibility`, keyframe overlap, pruning, or reset visibility from sparse `n_touched`.
- Use dense bookkeeping renders for those paths, or keep the last dense visibility and only refresh it on dense iterations.

### P1: Opacity reset can reset every Gaussian on sparse mapping iterations

Evidence:
- On sparse map iterations, `visibility_filter_acm` is not appended because the sparse branch only appends `n_touched_acm`: `MonoGS/utils/slam_backend.py:208` to `:232`.
- Opacity reset is unconditional with respect to dense/sparse mode: `MonoGS/utils/slam_backend.py:357` to `:362`.
- `reset_opacity_nonvisible()` first sets every opacity target to 0.4 and only restores entries from the provided visibility filters: `MonoGS/gaussian_splatting/scene/gaussian_model.py:367` to `:375`.

Impact:
- If `iteration_count % gaussian_reset == 0` lands on a sparse mapping iteration, `visibility_filter_acm` can be empty and the reset changes all Gaussians instead of only non-visible ones.
- This is a direct MonoGS architecture violation and can destabilize mapping quality.

Probable fix:
- Gate opacity reset on `use_dense and visibility_filter_acm`.
- Alternatively defer reset until the next dense mapping pass with valid dense visibility filters.

### P1: Mapping sampler density and map buffer no longer match the SPLATONIC reference

Evidence:
- MonoGS sparse mapping uses `num_sparse = max(64, (H * W) // 64)` at `MonoGS/utils/slam_backend.py:211` and `:266`.
- The SplaTAM/SPLATONIC reference uses `(H // 4) * (W // 4)`, about 1/16 of the image, at `SPLATONIC/scripts/splatam_sparse.py:1062`.
- MonoGS map rasterizer keeps `BLOCK_X=4`, `BLOCK_Y=4`, but reduces `MAX_NUM_RENDERED` to `1000000`: `MonoGS/map-rasterization/cuda_rasterizer/config.h:16` to `:26`.
- The reference map rasterizer uses `MAX_NUM_RENDERED 16000000`: `SPLATONIC/map-rasterization/cuda_rasterizer/config.h:16` to `:19`.

Impact:
- MonoGS mapping gets roughly 4x less sparse supervision than the working SplaTAM reference.
- The smaller static pair buffer is a deployment guardrail violation: it may be fine for a 4GB local experiment, but it is not equivalent to the reference and risks silently dropping emitted Gaussian/pixel pairs in denser scenes.

Probable fix:
- Restore reference sampling density for quality validation: `(H // 4) * (W // 4)`.
- Restore `MAX_NUM_RENDERED=16000000` for non-4GB runs, or make the reduced buffer an explicit low-VRAM configuration with overflow diagnostics.

### P1: SPLATONIC novelty/unseen-pixel mapping is not ported

Evidence:
- The reference stores a novelty mask from new-Gaussian insertion at `SPLATONIC/scripts/splatam_sparse.py:556` to `:599`.
- During sparse mapping, the reference unions adaptive samples with novelty/unseen pixels at `SPLATONIC/scripts/splatam_sparse.py:1065` to `:1066`.
- MonoGS sparse mapping only samples adaptively and calls `get_pixel_info()` at `MonoGS/utils/slam_backend.py:211` to `:215` and `:266` to `:270`.

Impact:
- Newly inserted or poorly represented regions are not guaranteed to receive sparse mapping supervision.
- Dense mapping iterations still help, but this is not the same SPLATONIC mapping architecture as the working reference.

Probable fix:
- Port a MonoGS equivalent of the novelty/unseen mask and OR it into the sparse mapping `pixel_mask`.
- If that is intentionally deferred, increase dense mapping frequency around new keyframes and document the deviation.

### P2: Sparse monocular tracking loss does not apply MonoGS RGB boundary masking

Evidence:
- Dense monocular tracking masks invalid/border pixels using `rgb_boundary_threshold` and `viewpoint.grad_mask`: `MonoGS/utils/slam_utils.py:63` to `:71`.
- Sparse monocular tracking only applies `pixel_mask & viewpoint.grad_mask[0]`: `MonoGS/utils/slam_utils.py:142` to `:150`.
- The RGB boundary threshold is only applied in the RGB-D sparse branch at `MonoGS/utils/slam_utils.py:153` to `:158`.

Impact:
- Sparse tracking can optimize against black/border/invalid RGB pixels that dense MonoGS deliberately suppresses.
- This changes the tracking objective, especially for monocular rotation where small biased residuals can dominate.

Probable fix:
- In the monocular sparse branch, include `rgb_mask = gt_image.sum(dim=0) > rgb_boundary_threshold` and use `valid = pixel_mask & viewpoint.grad_mask[0].bool() & rgb_mask`.

### P2: Sparse losses can produce NaNs on empty valid masks

Evidence:
- Sparse monocular tracking calls `.mean()` over `image_ab[:, combined_mask]` with no `combined_mask.any()` guard: `MonoGS/utils/slam_utils.py:146` to `:150`.
- Sparse mapping calls `.mean()` over `image_ab[:, valid_mask]` with no `valid_mask.any()` guard: `MonoGS/utils/slam_utils.py:189` to `:195`.
- `get_median_depth()` also calls `valid_depth.median()` without an empty-valid guard at `MonoGS/utils/slam_utils.py:221` to `:224`.

Impact:
- A frame/tile mask that selects no valid RGB/depth pixels can produce NaN loss or NaN median depth.
- This can make tracking and keyframe thresholds fail non-locally.

Probable fix:
- Add explicit empty-mask handling: resample, fall back to dense for that frame, or return a zero loss with a diagnostic counter where appropriate.
- Add an empty guard in `get_median_depth()` and return a previous/fallback median depth.

### P2: Gradient-at-truth diagnostic accumulates stale camera gradients

Evidence:
- `_debug_gradient_at_truth()` runs an exposure-only fit that calls `loss.backward()` repeatedly at `MonoGS/utils/slam_frontend.py:154` to `:177`.
- The optimizer only owns exposure parameters, so camera gradients can accumulate on `cam_rot_delta` / `cam_trans_delta`.
- The diagnostic then measures a final camera gradient without clearing those stale grads first at `MonoGS/utils/slam_frontend.py:185` to `:201`.

Impact:
- Any conclusions based on `DBG_GRAD_TRUTH` magnitudes/directions are unreliable until this is fixed.
- This does not prove the runtime port is wrong by itself, but it can mislead root-cause analysis.

Probable fix:
- Clear `cam_rot_delta.grad`, `cam_trans_delta.grad`, and exposure grads before the final dense/sparse gradient measurement and between dense/sparse diagnostic runs.

### P2: Sparse RGB-D branches are broken for MonoGS depth storage

Evidence:
- Dense RGB-D loss correctly converts numpy depth using `torch.from_numpy(viewpoint.depth).to(...)`: `MonoGS/utils/slam_utils.py:79` to `:81` and `:119` to `:121`.
- Sparse RGB-D tracking/mapping call `viewpoint.depth.cuda()` at `MonoGS/utils/slam_utils.py:160` to `:163` and `:200` to `:204`.

Impact:
- If SPLATONIC is enabled for RGB-D MonoGS runs, these branches can crash.
- If the intended scope is monocular only, this is a documented limitation rather than the main quality root cause.

Probable fix:
- Use the same numpy-to-torch conversion as dense RGB-D loss.

### P2: Sparse rasterizer leaks a device allocation per forward

Evidence:
- Both sparse rasterizer implementations allocate `num_rendered_dev` with `cudaMalloc()` at `MonoGS/track-rasterization/cuda_rasterizer/rasterizer_impl.cu:273` to `:275` and `MonoGS/map-rasterization/cuda_rasterizer/rasterizer_impl.cu:273` to `:275`.
- There is no matching `cudaFree()` in those files.

Impact:
- Repeated sparse tracking/mapping forwards leak a small CUDA allocation each time.
- Long sequences can accumulate avoidable device memory pressure.

Probable fix:
- Free `num_rendered_dev` before return on all paths, or make it part of the existing reusable buffer/chunk state.

### P3: Latent renderer mask branch returns undefined `n_touched`

Evidence:
- The `mask is not None` branch unpacks only `rendered_image, radii, depth, opacity` at `MonoGS/gaussian_splatting/gaussian_renderer/__init__.py:129` to `:141`.
- The function always returns `"n_touched": n_touched` at `MonoGS/gaussian_splatting/gaussian_renderer/__init__.py:159` to `:166`.

Impact:
- Current `rg` usage did not show active callers using `render(..., mask=...)`, so this is latent.
- If a future MonoGS path uses a Gaussian mask, it will fail.

Probable fix:
- Return a masked/full-sized `n_touched`, or set it to `None` and ensure callers handle that branch.

### P3: Sparse autograd context stores an incorrect/dead pixel count

Evidence:
- `MonoGS/track-rasterization/diff_gaussian_rasterization/__init__.py` and the map equivalent set `ctx.num_pixels = pixel_coords.shape[0] // 2`.
- Current `pixel_coords` is an `(N, 2)` int32 tensor matching the SPLATONIC reference, so this value is half of `N`.
- The C++ backward path appears to derive the true count from `pixel_range`, so this looks dead today.

Impact:
- Low current impact, but it is confusing and can become a bug if later code starts using `ctx.num_pixels`.

Probable fix:
- Change it to `pixel_coords.shape[0]` or remove it if unused.

### P3: Debug dense-frame parser does not match documented usage

Evidence:
- `SPLATONIC_DEBUG_FORCE_DENSE_FRAMES` is parsed as comma-separated integers only at `MonoGS/utils/slam_frontend.py:352` to `:356`.
- Port docs mention range-style values such as `200-215`.

Impact:
- A documented debug command can fail or silently not test the intended frames, depending on the input shape.

Probable fix:
- Support ranges in the parser, or update the docs to comma-separated frame ids only.

## Confirmed OK / Lower-Risk Areas

- `pixel_coords` as `(N, 2)` int32 matches the current SPLATONIC mask utility shape; do not treat that as a live root cause.
- Track rasterizer constants match the reference (`BLOCK_X=16`, `BLOCK_Y=16`, `MAX_NUM_RENDERED=4000000`).
- The main render dispatch preserves dense fallback when no sparse pixel range is passed.
- `theta` and `rho` are threaded through the renderer call sites.
- Dense densification stats are gated to dense mapping passes through `viewspace_point_tensor_acm`, `visibility_filter_acm`, and `radii_acm`; the opacity reset and pruning paths are the unsafe parts.
- Sparse tracking samples once per frame and reuses the same mask during the tracking iterations, matching the reference pattern.

## Recommended Fix Order

1. Add a final dense no-grad bookkeeping render after tracking, after any motion-prior fusion, and use it for `median_depth`, keyframe visibility, and keyframe depth seeding.
2. Stop using sparse `n_touched` for pruning, keyframe overlap, and opacity reset. Gate/defer opacity reset to dense passes.
3. Restore reference mapping density and map `MAX_NUM_RENDERED` for quality validation; keep low-VRAM settings as an explicit experiment only.
4. Port the novelty/unseen-pixel union into MonoGS sparse mapping.
5. Fix sparse loss masks/NaN guards and the `DBG_GRAD_TRUTH` instrumentation, then rerun the rotation-drift diagnostics.
6. Clean up RGB-D sparse branches, CUDA allocation lifetime, and latent renderer/autograd bookkeeping bugs.
