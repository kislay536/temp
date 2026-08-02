# SPLATONIC-on-MonoGS Port — Status

Last updated: 2026-08-02 (CU9.1–CU9.2 done, tagged `milestone-4e-cuda-live` —
**the full port now runs end-to-end through a real `slam.py` SLAM session with
the sparse CUDA rasterizers live**. Milestone 4 is complete. Milestone 5's
V1/V2 are confirmed; V3–V5 surfaced a large, still-unresolved ATE/PSNR
regression in the sparse path — see §9.)

Roadmap: `port/MILESTONE_PLAN_V3.md`. This document is a snapshot of what has
been done, what changed where, and what is still open. It is not itself a
plan — treat `MILESTONE_PLAN_V3.md` as the specification and this file as
the log.

---

## 1. Where we are, in one paragraph

Milestones 1–3 (Python-side SPLATONIC integration into MonoGS, plus
integration testing INT1–INT3) are complete and verified. Milestone 4 (CUDA
rasterizer changes) is in progress through CU3.6: interface-only stage
(CU1.1–CU1.3, CU2), CU3.1's kernel-signature stage, CU3.2's real
implementation (`BinningState` binding, static sizing, sequencing,
`num_rendered_ptr`, `Rasterizer::forward()` signature fix), and CU3.3
(removing the final `tiles_touched` write) are committed and build-verified
exactly as before. **New this update:** CU3.4 (tile/pixel iteration loop),
CU3.5 (alpha pruning), and CU3.6 (key packing + `atomicAdd` slot emission)
are implemented in both `forward.cu` files. A from-scratch, roadmap-external
verification harness (`test_preprocess.cu`, standalone `nvcc` build, not
part of the pip package) was built and run against the real, unmodified
kernel body to independently validate CU3.1–CU3.6 before continuing —
**"Checkpoint A"** per the earlier maintainer review. That harness caught
two real defects in the roadmap's original CU3.5 text (not introduced by
implementation): (1) the pixel-distance term was measured against the
wrong variable (NDC-space `p_proj` instead of pixel-space `point_image`),
and (2) the alpha-cull comparison could never fire at all (comparing a
value that is provably ≤0 against a positive threshold), and separately
omitted the per-Gaussian `logf(opacity)` term that the original SPLATONIC
source folds into the same comparison. Both were confirmed against the
actual SPLATONIC reference source (`SPLATONIC/{track,map}-rasterization/`,
present in this repo as a real submodule checkout) and against MonoGS's
own current code, then fixed in **both** the roadmap (`MILESTONE_PLAN_V3.md`
§CU3.5) and the two `forward.cu` files, and re-verified with the same
harness: pruning is now live (≈42% of (Gaussian,pixel) pairs culled on the
test scene, vs. 0% before the fix), matches a from-scratch CPU reference
exactly, and responds correctly to per-Gaussian opacity. Full build of both
rasterizers still fails at exactly the same two places the roadmap already
anticipates (CU4.5's render dispatch, CU6.1's Python/C++ bridge) — nothing
else, and no new failures from CU3.4–CU3.6. CU3.4–CU3.6 and the roadmap's
Gap 4 fix are now committed (`342d88d`). **CU3.7 is closed**: the harness
was promoted to `port/tests/test_preprocess.cu` (+ `run_checkpoint_a.sh`),
satisfying CU3.7's O/R verification levels for both tilings; its literal
"C" level (full `pip install`) is deferred to CU4.5/CU6.1 per the
milestone-boundary note below, matching how the roadmap itself already
defers CU3.7's "N" level. Tagged `milestone-4b-cuda-preprocess`. **Milestone
4b (CU1–CU3, the interface + preprocess stage) is now fully closed.**

**New this update — Milestone 4c underway:** CU4.1–CU4.5 (dispatch:
`InclusiveSum`/`duplicateWithKeys` removal, atomic `num_rendered` readout,
tile→pixel render-grid launch) and CU5.1–CU5.6 (the sparse `renderCUDA`
kernel itself — the core novel algorithm of this whole port) are both
implemented in `rasterizer_impl.cu`/`forward.cu` on both rasterizers. Two
more roadmap gaps were found and fixed while implementing CU4.5 (Gaps
6–8, §5) exactly as before. **CU5's own pseudocode turned out to describe
an algorithm that is wrong for any block with more than one warp** —
found by cross-checking against the actual SPLATONIC reference source
(present in this repo, `SPLATONIC/{track,map}-rasterization/`), which
uses a materially more sophisticated cross-warp-serialized transmittance
scan that the roadmap's simplified pseudocode omits entirely. Implemented
the kernel against SPLATONIC's verified algorithm instead of the flawed
pseudocode (Gap 9, §5), found and fixed one further translation bug of my
own (Gap 9b) and one latent shared-memory race present in SPLATONIC's own
source too (Gap 10) during a from-scratch end-to-end verification
("Checkpoint B") that links directly against the now-compiling real
`rasterizer_impl.cu`+`forward.cu` and diffs the GPU output against a
brute-force CPU reference. After fixes: exact match (tol 1e-3) across 256
pixels on both tilings, including a 600-Gaussian-deep stress scene forcing
3 rounds (track) / 38 rounds (map) per pixel to exercise cross-round
carry-over; `compute-sanitizer` memcheck + racecheck both clean.

**Also done — CU6.1 and CU6.3**: `pixel_range`/`pixel_coords` threaded
through `rasterize_points.cu`'s forward and backward entry points. This
fixed all 5 remaining `rasterize_points.cu` build errors outright.
CU6.2 and CU6.4 needed no code changes — both describe patterns that
don't exist in this codebase's actual `rasterize_points.cu`/`ext.cpp` (see
§2). Found one more instance of the Gap 3/5 pattern (Gap 11:
`Rasterizer::backward()`'s own declaration was never extended anywhere in
the roadmap) and resolved it the same way. **Full `pip install` is now
down to exactly one error on each package** — a deliberate, staged one
(Gap 11, deferred to CU8) — down from 9 at the start of this session.

**New this update — CU8, the sparse backward kernel, and the first fully
successful builds of the whole port.** Closed Gap 11 (`rasterizer_impl.cu`'s
`Rasterizer::backward()` definition now matches its header), found and
closed two more instances of the same pattern (Gap 12: `backward.h` never
gained `pixel_coords`/`num_pixels`; Gap 13: `Rasterizer::backward()` needed
`pixel_range` too, to derive `num_pixels` the same way forward does — not
literally asked for by CU6.3, but structurally required). Rewrote
`backward.cu`'s `renderCUDA` against SPLATONIC's real reverse-traversal,
cross-warp-serialized algorithm (same source as CU5), extended with a
depth-gradient channel (MonoGS-only; SPLATONIC's backward has no depth
loss) using the identical suffix-sum machinery, minus the background term
depth doesn't have. `WARP_SIZE_EFF` was hoisted from `forward.cu` into
`auxiliary.h` so both kernels share it. **After both packages compiled
clean for the first time, a real Python forward+backward run through the
actual compiled extension immediately found two further real bugs** — a
translation bug of my own in `forward.cu` (the per-thread `done` flag was
only updated when a Gaussian actually contributed, not whenever a thread
ran out of real data, silently corrupting `n_contrib` for every pixel with
fewer contributors than `BLOCK_SIZE` — i.e. almost every real pixel — with
no effect on forward's own color/depth output, so Checkpoint B never
caught it) and a sign error in SPLATONIC's own backward source (the
background-color term inside `dL_dalpha`'s per-channel `diff` is `+
T_final*bg_color[ch]` in SPLATONIC's real code; an independent derivation,
cross-checked against the unmodified dense kernel's own formula and a
from-scratch pure-PyTorch-autograd reference implementation, proves it
must be `-`; with the wrong sign, `dL/dopacity` (and `dL/dmean2D`/
`dL/dconic2D`, which share the same `dL_dalpha`) came out exactly 4x too
large in a controlled test scene, while `dL/dcolor` — computed by an
unrelated code path — was already exact). Both fixed; after fixing, a full
gradient-flow + finite-difference check (opacity and color gradients
against numerical derivatives, on a 20-Gaussian scene) passes on **both**
`track_rasterization` and `map_rasterization`, `compute-sanitizer`
memcheck+racecheck on the real Python-driven run are clean, and Checkpoint
B (forward) still passes exactly as before. **Both `track-rasterization`
and `map-rasterization` now `pip install` successfully — the first fully
working builds since this port began.** CU8.5 (verify `BACKWARD::preprocess`
untouched) and CU8.6 (the roadmap's own compile+gradient-flow test) are
satisfied by this work; CU9 (activating the dispatch switch) and Milestone
5 (validation) remain.

---

## 2. Milestone status table

| Milestone | Scope | Status |
|---|---|---|
| Milestone 1–3 (P1–P6) | Python-side SPLATONIC integration (sparse sampling, sparse losses, FLIP schedule, renderer stub) | ✅ Done |
| INT1 | Dense baseline run, `use_splatonic=false` | ✅ Done — ATE 0.0285 m, PSNR 21.33 dB |
| INT2 | Sparse loss + dense renderer run, `use_splatonic=true` | ✅ Done — expected ATE divergence (0.7128 m), no regression in FPS |
| INT3 | FLIP/densification logging verification | ✅ Done — verified, probes removed, tree restored clean |
| CU1.1 | `pixel_range`/`pixel_coords` → `rasterizer.h` | ✅ Done, committed `63c8771` |
| CU1.2 | 5 new params → `FORWARD::preprocess()` decl (`forward.h`) | ✅ Done, committed `6e7d93e` |
| CU1.3 | `pixel_coords`/`num_pixels` → `FORWARD::render()` decl (`forward.h`) | ✅ Done, committed `909a46c`, tagged `milestone-4a-cuda-interfaces` |
| CU2 | `lowest_alpha_coeff` → `auxiliary.h` | ✅ Done, committed `a311b02` |
| CU3.1 | 5 new params → `preprocessCUDA` kernel + `FORWARD::preprocess()` wrapper (`forward.cu`) | ✅ Done, committed `7eec8aa` |
| CU3.2 | Bind key buffers to `BinningState`, static sizing, sequencing, `num_rendered_ptr`, `Rasterizer::forward()` signature fix (`rasterizer_impl.cu`) | ✅ Done, committed `cdb7e67` — see §6 for build results |
| CU3.3 | Remove final `tiles_touched` write from `preprocessCUDA` (`forward.cu`) | ✅ Done, committed `7fb0741` — see §6 for build results |
| CU3.4 | Add tile/pixel iteration loop, no-op body (`forward.cu`) | ✅ Done, committed `342d88d` — verified via Checkpoint A harness |
| CU3.5 | Add alpha pruning (`lowest_alpha_coeff`) (`forward.cu`) | ✅ Done + **roadmap+code bug fixed**, committed `342d88d` — see §5 Gap 4, §6 |
| CU3.6 | Add key packing + `atomicAdd` slot emission (`forward.cu`) | ✅ Done, committed `342d88d` — verified via Checkpoint A harness |
| CU3.7 | Compile + unit test `preprocessCUDA`, tag `milestone-4b-cuda-preprocess` | ✅ Done — harness promoted to `port/tests/`, O/R satisfied, C deferred to CU4.5/CU6.1 (see §6b) |
| CU4.1 | Remove `InclusiveSum` call (`rasterizer_impl.cu`) | ✅ Done, committed `cec8904` |
| CU4.2 | Remove `duplicateWithKeys` call (`rasterizer_impl.cu`) | ✅ Done, committed `cec8904` |
| CU4.3 | Remove dead `GeometryState` allocations (`rasterizer_impl.cu`) | ✅ Done **with a safety correction** (kept `tiles_touched`'s own allocation) — see §5 Gap 6 |
| CU4.4 | Read `num_rendered` via `cudaMemcpy` after preprocess (`rasterizer_impl.cu`) | ✅ Done, committed `cec8904` |
| CU4.5 | Change render grid launch tile→pixel (`rasterizer_impl.cu`) | ✅ Done **with two correctness additions** (ranges-zeroing sizing, sort bit-width) — see §5 Gaps 7–8 |
| CU5.1 | `renderCUDA` kernel signature + `FORWARD::render` wrapper fix (`forward.cu`) | ✅ Done, committed `e18bf3b` — wrapper fix folds in Gap 5 (see §5) |
| CU5.2 | Block→pixel mapping (`forward.cu`) | ✅ Done, committed `e18bf3b` |
| CU5.3–CU5.6 | Warp prefix-scan transmittance, color/depth accumulation, `n_touched`, cooperative early exit (`forward.cu`) | ✅ Done **against SPLATONIC's real algorithm, not the roadmap's flawed pseudocode** — see §5 Gaps 9–10, §6d/§6e |
| CU5.7 | Compile + brute-force correctness test | ✅ Satisfied by Checkpoint B (§6e) — 0 mismatches, sanitizers clean, both tilings |
| CU5.8 | Regression test on dense MonoGS (real SLAM tracking loop) | ⬜ Not started — needs a live `slam.py` run, deferred (see §7) |
| CU6.1 | Add `pixel_range`/`pixel_coords` to `RasterizeGaussiansCUDA` (`rasterize_points.cu`/`.h`) | ✅ Done, committed `8563880` — this fixed all 5 pre-existing `rasterize_points.cu` errors |
| CU6.2 | Switch to static binning buffer in forward | ✅ **Already satisfied** — the "old" pattern CU6.2 describes doesn't exist in this codebase (sizing already happens inside `Rasterizer::forward()` itself, made static back in CU3.2); no change needed |
| CU6.3 | Add `pixel_coords` to `RasterizeGaussiansBackwardCUDA` + `Rasterizer::backward()` | ✅ Done **with the `rasterizer.h` declaration also extended** (Gap 11, see §5) — introduces one new, expected, staged build error (`rasterizer_impl.cu`'s `Rasterizer::backward()` definition now mismatches; deferred to CU8, matching Gap 3/5's precedent) |
| CU6.4 | Update `ext.cpp` pybind registrations | ✅ **Already satisfied** — `ext.cpp` binds bare function pointers with no named-argument list, so it auto-adapts to the updated C++ signatures; no change needed |
| CU7.1 | `pixel_range`/`pixel_coords` on `_RasterizeGaussians.forward()`, empty-tensor fallback (`diff_gaussian_rasterization/__init__.py`) | ✅ Done, committed `6cd524f` |
| CU7.2 | Save `pixel_coords` in `ctx`, `ctx.num_pixels` | ✅ Done, committed `6cd524f` |
| CU7.3 | `None` returns for pixel args in `backward()` | ✅ Done, committed `6cd524f` |
| CU7.4 | `pixel_range`/`pixel_coords` on `GaussianRasterizer.forward()` + free-function `rasterize_gaussians()` | ✅ Done, committed `6cd524f` — confirmed backward-compatible with the existing all-keyword call site in `gaussian_renderer/__init__.py` |
| CU7.5 | End-to-end Python forward+backward test | ⬜ Blocked — needs the extension to actually `pip install` successfully, which needs Gap 11/CU8 closed first (same deferral as CU5.8) |
| CU8.1 | `renderCUDA` backward kernel signature (`backward.cu`/`.h`) | ✅ Done, committed `82e5943` — also closes Gaps 12–13 (see §5) |
| CU8.2 | Block→pixel mapping in backward kernel | ✅ Done, committed `82e5943` |
| CU8.3 | Recover `(pix_x,pix_y)` from `pixel_coords` | ✅ Done, committed `82e5943` |
| CU8.4 | Warp prefix-scan for backward transmittance | ✅ Done **against SPLATONIC's real algorithm + a sign-bug fix**, committed `82e5943` — see §5 Gap 14, §6h |
| CU8.5 | Verify `BACKWARD::preprocess` untouched | ✅ Confirmed — `BACKWARD::preprocess`/`computeCov2DCUDA`/`preprocessCUDA` (backward) untouched; only `renderCUDA` and its wrapper changed |
| CU8.6 | Compile + gradient-flow test | ✅ **Both packages `pip install` successfully — first fully working builds of this port.** Gradient flow + finite-difference check pass on both, real Python-driven run, `compute-sanitizer` clean (see §6h) |
| CU9.1 | Implement rasterizer dispatch in `render()` (`gaussian_renderer/__init__.py`) | ✅ Done, committed `a06b93f` — verified against dense/track-sparse/map-sparse paths with a synthetic scene (forward shapes, `n_touched>0`, backward gradients incl. `cam_rot_delta`/`cam_trans_delta`) |
| CU9.2 | Full `slam.py` smoke test, sparse rasterizer active, tag `milestone-4e-cuda-live` | ✅ Done, committed `ba57f8e` — full 613-frame TUM fr1_desk run completes, no CUDA errors, tracking dispatches to `TrackRasterizer`, mapping alternates Dense/`MapRasterizer` per FLIP. Required sizing `map-rasterization`'s `MAX_NUM_RENDERED` down (16M→1M) to fit this dev machine's 4GB GPU — see below. |
| V1 | Confirm FLIP counter uses real sparse rasterizer | ✅ Confirmed via code inspection (`slam_backend.py:166`) + exercised live across 613 frames in CU9.2 — no code change needed |
| V2 | Confirm densification gated to dense passes | ✅ Confirmed via code inspection (`slam_backend.py:204-206,260-262,335`) — `viewspace_point_tensor_acm`/`visibility_filter_acm`/`radii_acm` only populated in `use_dense` branches — no code change needed |
| V3–V5 | Baseline ATE / FPS / PSNR-SSIM comparison, sparse vs dense | ⚠️ Measured — **large, unresolved quality gap found**, see §9 below |

---

## 3. Files touched so far

### Python / SLAM integration (Milestone 1–3, prior session)
- `MonoGS/utils/mask_utils.py` — new: `compute_gradient_mag`, `adaptive_random_sampling`, `generate_random_mask`, `get_pixel_info`
- `MonoGS/gaussian_splatting/utils/loss_utils.py` — new: `calc_ssim_shuffled_packed`
- `MonoGS/gaussian_splatting/gaussian_renderer/__init__.py` — stub accepts `pixel_range`, `pixel_coords`, `use_track_rasterizer`, `use_map_rasterizer` (all currently ignored — dense path unaffected)
- `MonoGS/utils/slam_utils.py` — new: `get_loss_tracking_sparse`, `get_loss_mapping_sparse`
- `MonoGS/utils/slam_frontend.py` — sparse tracking loss wiring
- `MonoGS/utils/slam_backend.py` — FLIP schedule (`map_iter_counter`, `use_dense = (not use_splatonic) or (map_iter_counter % FLIP == 0)`), sparse/dense branch split, densification gating
- `MonoGS/utils/eval_utils.py` — fixed evo v1.37 API break (`trajectory.align_trajectory` → in-place `traj_est.align(...)`)

### CUDA interfaces (Milestone 4, this session)
All changes applied identically to both `track-rasterization/` and `map-rasterization/` under `cuda_rasterizer/`, verified byte-identical between the two after each step:

- `rasterizer.h` — `Rasterizer::forward()` declaration gains `const int* pixel_range, const int* pixel_coords` (CU1.1)
- `forward.h` — `FORWARD::preprocess()` declaration gains `pixel_range, pixel_coords, num_rendered_ptr, gaussian_keys_unsorted, gaussian_values_unsorted` (CU1.2); `FORWARD::render()` declaration gains `pixel_coords, num_pixels` (CU1.3)
- `auxiliary.h` — gains `lowest_alpha_coeff = 5.54126354515842f` (CU2)
- `forward.cu` — `preprocessCUDA` kernel and `FORWARD::preprocess()` wrapper definitions updated to match the above header declarations exactly (CU3.1); kernel body **unchanged** (still writes `tiles_touched`, ignores all 5 new params — that's CU3.3+)
- `rasterizer_impl.cu` — **(CU3.2, new this update)**:
  - `Rasterizer::forward()`'s own definition gains `const int* pixel_range, const int* pixel_coords` (matching CU1.1's `rasterizer.h` declaration exactly)
  - `BinningState::fromChunk()` moved to *before* the `FORWARD::preprocess()` call and resized statically (`MAX_NUM_RENDERED` instead of `num_rendered`)
  - `num_rendered_dev` allocated and zeroed (`cudaMalloc` + `cudaMemset`), unused until CU3.6
  - The `FORWARD::preprocess(...)` call now passes all 5 new arguments in `forward.h`'s committed order: `pixel_range`, `reinterpret_cast<const int2*>(pixel_coords)`, `num_rendered_dev`, `binningState.point_list_keys_unsorted`, `reinterpret_cast<int*>(binningState.point_list_unsorted)`
  - `duplicateWithKeys`, `InclusiveSum`, `SortPairs`, `identifyTileRanges`, and the `FORWARD::render()` dispatch are **untouched** — dense-path output is bit-for-bit the same, just backed by a larger, earlier-allocated binning buffer
- `forward.cu` — **(CU3.3)**: the single final-line write `tiles_touched[idx] = (rect_max.y - rect_min.y) * (rect_max.x - rect_min.x);` at the end of `preprocessCUDA` is deleted. The earlier `tiles_touched[idx] = 0;` initialization (top of the function) is untouched. This is a placeholder removal only — no pixel loop, alpha pruning, or key packing added yet (CU3.4–CU3.6)
- `forward.cu` — **(CU3.4/CU3.5/CU3.6, committed `342d88d`)**: appended after `conic_opacity[idx] = ...` (the spot CU3.3's deletion vacated):
  - CU3.4: `for (tile_y in rect_min.y..rect_max.y) for (tile_x in rect_min.x..rect_max.x)` computing `tile_id`, looking up `[pstart,pend) = pixel_range[tile_id..tile_id+1]`, and an inner `for (k in pstart..pend)` reading `pixel_coords[k]`
  - CU3.5 (**as fixed, not as originally drafted in the roadmap — see Gap 4 below**): `d = pix - point_image` (pixel-space, not `p_proj`/NDC), `power = -0.5*(mahalanobis quadratic form)`, `power += logf(opacities[idx])`, cull with `if (power <= -lowest_alpha_coeff) continue;`
  - CU3.6: pack `key = (uint64_t)(uint32_t)k << 32 | depth_bits`, `slot = atomicAdd(num_rendered_ptr, 1)`, overflow guard `if (slot >= MAX_NUM_RENDERED) return;`, write `gaussian_keys_unsorted[slot]`/`gaussian_values_unsorted[slot]`
  - Verified byte-identical between `track-rasterization` and `map-rasterization` after every edit
- `rasterizer_impl.cu` — **(CU4.1–CU4.5, committed `cec8904`)**: `InclusiveSum`/`duplicateWithKeys` calls removed; `GeometryState::fromChunk()`'s dead `scanning_space`/`point_offsets` allocations removed (kept `tiles_touched`'s own allocation, Gap 6); `num_rendered` now read via `cudaMemcpy` from `num_rendered_dev` instead of the old prefix-sum readout; render launch switched from `tile_grid`/`dim3(BLOCK_X,BLOCK_Y,1)` to `dim3(num_pixels,1,1)`/`dim3(BLOCK_SIZE,1,1)`, passing `pixel_coords`/`num_pixels` through; `imgState.ranges` zeroing resized to `num_pixels` (Gap 7) and the radix-sort bit-width switched to `getHigherMsb(num_pixels)` (Gap 8)
- `forward.cu` — **(CU5.1–CU5.6, committed `e18bf3b`)**: `renderCUDA` kernel rewritten for one-block-per-sampled-pixel dispatch with a cross-warp-serialized transmittance scan (ported from the real SPLATONIC source, not the roadmap's pseudocode — Gap 9), `WARP_SIZE_EFF`/`__activemask()`-based shuffle masks (sub-warp-safe for map's `BLOCK_SIZE=16`), `n_touched` atomicAdd, cooperative early exit, block-wide color/depth reduction; `FORWARD::render` wrapper updated to accept and forward `pixel_coords`/`num_pixels` (closes Gap 5)
- `auxiliary.h` — **(committed `e18bf3b`)**: `NUM_WARPS` changed from floor to ceiling division (`(BLOCK_SIZE+31)/32`) — floor division gives 0 for map's `BLOCK_SIZE=16`, sizing `renderCUDA`'s shared arrays as zero-length
- `rasterize_points.h`/`.cu` — **(CU6.1/CU6.3, committed `8563880`)**: `RasterizeGaussiansCUDA` gains `pixel_range`/`pixel_coords` tensor params (extracted to raw `int*` and threaded into the `Rasterizer::forward()` call between `tan_fovy` and `prefiltered`, matching `rasterizer.h`'s declared order); `RasterizeGaussiansBackwardCUDA` gains `pixel_coords`, threaded into `Rasterizer::backward()`. CU6.2 and CU6.4 needed no changes (see milestone table §2)
- `cuda_rasterizer/rasterizer.h` — **(Gap 11, committed `8563880`)**: `Rasterizer::backward()` declaration gains `const int* pixel_coords` after `tan_fovx, tan_fovy`
- `diff_gaussian_rasterization/__init__.py` — **(CU7.1–CU7.4, committed `6cd524f`)**: `pixel_range`/`pixel_coords` threaded through `_RasterizeGaussians.forward()`/`backward()` and `GaussianRasterizer.forward()`, with `None`-default empty-tensor fallback
- `cuda_rasterizer/backward.h` — **(CU8.1/Gap 12, committed `82e5943`)**: `BACKWARD::render()` declaration gains `const int2* pixel_coords, int num_pixels`, mirroring `forward.h`'s CU1.3 addition
- `cuda_rasterizer/backward.cu` — **(CU8.1–CU8.4, committed `82e5943`)**: `renderCUDA` rewritten for one-block-per-sampled-pixel, reverse (farthest-first) traversal, using the same cross-warp-serialized scan structure as `forward.cu`'s CU5 kernel (ported from SPLATONIC's real `backward.cu`, not the roadmap's skeletal CU8.1–CU8.4 text, which only says "mirror CU5.3–CU5.4" and cites the SPLATONIC line range); added a depth-gradient suffix-sum channel (MonoGS-only, SPLATONIC has none) mirroring the color channels' machinery minus the background term; fixed a sign error present in SPLATONIC's own source (Gap 14, §5); `BACKWARD::render()` wrapper updated to accept/forward `pixel_coords`/`num_pixels`
- `cuda_rasterizer/rasterizer.h` — **(Gap 13, committed `82e5943`)**: `Rasterizer::backward()` declaration gains `const int* pixel_range` too (not literally asked for by CU6.3, but structurally required to derive `num_pixels` for the pixel-based launch, the same way forward does)
- `cuda_rasterizer/rasterizer_impl.cu` — **(CU8.1, closes Gap 11, committed `82e5943`)**: `Rasterizer::backward()`'s definition updated to match its (now twice-extended) declaration: computes `num_pixels` via `cudaMemcpy` from `pixel_range`'s sentinel (mirroring CU4.5), switches the dispatch to `dim3(num_pixels,1,1)`/`dim3(BLOCK_SIZE,1,1)`, passes `pixel_coords`/`num_pixels` to `BACKWARD::render()`
- `rasterize_points.h`/`.cu` — **(extends CU6.3, committed `82e5943`)**: `RasterizeGaussiansBackwardCUDA` gains `pixel_range` too (companion to Gap 13), threaded into `Rasterizer::backward()`
- `diff_gaussian_rasterization/__init__.py` — **(extends CU7.2/7.3, committed `82e5943`)**: `pixel_range` added to `ctx.save_for_backward` and the backward `args` tuple (needed once the C++ signature required it)
- `cuda_rasterizer/auxiliary.h` — **(committed `82e5943`)**: `WARP_SIZE_EFF` moved here from `forward.cu` so `backward.cu` can use the same macro

### Not yet touched
- `rasterizer_impl.h` (both rasterizers) — `GeometryState`/`BinningState` structs unchanged
- `ext.cpp` — no change needed (see CU6.4 in §2)
- `submodules/diff-gaussian-rasterization/` — the original dense MonoGS rasterizer, verified untouched at every step and must stay that way
- `backward.cu`'s `BACKWARD::preprocess()`, `computeCov2DCUDA`, `preprocessCUDA` (backward) — confirmed untouched (CU8.5)

### Roadmap document
- `port/MILESTONE_PLAN_V3.md` — CU3.2/CU4.3 clarification committed (`91dd31d`). Note: the separately-drafted "Gap 3" clarification (adding an explicit `Rasterizer::forward()` signature-update item to CU3.2's text) was **not** applied to the roadmap file itself — it was authorized directly via explicit task instruction instead and implemented as described above. The roadmap text does not yet reflect this; consider folding it in for future readers.
- `port/MILESTONE_PLAN_V3.md` — **(Gap 4, committed `342d88d`)**: CU3.5's code block, comments, and review checklist rewritten to fix the two bugs described in §5. This is a correction to CU3.5's own text, not a scope/ownership/sequencing change — no milestone renumbered, no new milestone added.

---

## 4. Git ledger

**Tags:**
- `milestone-2-python`
- `milestone-3-integration`
- `milestone-4a-cuda-interfaces` (CU1.1–CU1.3)
- `milestone-4b-cuda-preprocess` (CU1–CU3, i.e. all of CU3.1–CU3.7 — **new this update**)

**Commits (most recent first):**
```
82e5943 feat(cuda-backward): CU8.1-CU8.4 sparse backward renderCUDA + sign fix  [CU8.1-8.4, Gaps 12-14, port/tests/test_checkpoint_c_e2e.py]
2d19787 docs: fill in CU7 commit hash in STATUS.md ledger
6cd524f feat(python-bridge): CU7.1-CU7.4 - thread pixel_range/pixel_coords through autograd wiring  [CU7.1-7.4]
01cde60 docs: fill in CU6 commit hash in STATUS.md ledger
8563880 feat(cuda-entry): CU6.1+CU6.3 pixel_range/pixel_coords through rasterize_points.cu  [CU6.1, CU6.3, Gap 11]
2337267 docs: fill in commit hashes in STATUS.md ledger after CU5 commit
e18bf3b feat(cuda-forward): CU5.1-CU5.6 sparse renderCUDA + Checkpoint B harness  [CU5.1-5.6, port/tests/test_render.cu]
cec8904 feat(cuda-impl): CU4.1-CU4.5 - switch dispatch from tile-duplication to atomic pixel-key counting  [CU4.1-4.5]
7ac1fd3 test(cuda-preprocess): validate preprocessCUDA key generation         [CU3.7 - port/tests/ harness]
342d88d milestone 1                                                              [CU3.4+CU3.5(fixed)+CU3.6, roadmap Gap 4, STATUS.md]
4a96a74 Status
7fb0741 feat(cuda-preprocess): remove tiles_touched write (replaced by pixel key gen)  [CU3.3]
cdb7e67 feat(cuda-preprocess): bind key buffers to BinningState, allocate num_rendered_ptr  [CU3.2]
91dd31d status                                                                    [STATUS.md + roadmap CU3.2/CU4.3 fix]
7eec8aa feat(cuda-preprocess): add pixel key params to preprocessCUDA signature   [CU3.1]
538ebe9 cu update                                                                  [roadmap: CU3.2 ownership fix, part 1]
a311b02 feat(cuda-interface): add lowest_alpha_coeff to auxiliary.h (CU2)         [CU2]
909a46c feat(cuda-interface): add pixel_coords/num_pixels to FORWARD::render      [CU1.3]
6e7d93e feat(cuda-interface): add pixel key params to FORWARD::preprocess         [CU1.2]
63c8771 feat(cuda-interface): add pixel_range/pixel_coords to rasterizer.h        [CU1.1]
c81d27a fix: update evo trajectory alignment API for evo v1.37                    [INT1]
bc3fb9e feat: wire FLIP schedule into BackEnd.map                                 [P6]
```

Note: `342d88d`'s message ("milestone 1") doesn't match its actual content
(CU3.4–CU3.6 + Gap 4 + STATUS.md) — it was committed directly rather than
split per the earlier suggested plan. Left as-is; not worth rewriting
history over a message string.

---

## 5. Roadmap gaps found and resolved (Gaps 1–14)

**Gap 1 — buffer ownership contradiction.** CU3.2 originally said
`gaussian_keys_unsorted`/`gaussian_values_unsorted` belonged to a new
`GeometryState` allocation; CU4.2 said they were `BinningState`'s existing
fields. Resolved in the roadmap: `BinningState` ownership, no new
allocation.

**Gap 2 — milestone-boundary conflict.** The `BinningState::fromChunk()`
sequencing move required static sizing that the roadmap had parked five
sub-milestones later in CU4.3. Resolved in the roadmap: static sizing
moved into CU3.2 itself; CU4.3 narrowed to dead-`GeometryState` cleanup
only.

**Gap 3 — `Rasterizer::forward()` signature never updated.** No milestone
anywhere updated this function's `.cu` definition to match its already-
committed `rasterizer.h` declaration. Resolved **operationally** (via
direct task instruction, not a roadmap-file edit) by including it in
CU3.2's implementation, as described in §3 above.

**Gap 4 — CU3.5's alpha-pruning formula was wrong on two independent
counts, found by a standalone verification harness built specifically to
check CU3.1–CU3.6 before continuing (see §6).**

1. *Wrong variable for pixel distance.* CU3.5's text computed
   `d = pix - p_proj`, but `p_proj` (line 207 of `forward.cu`) is the
   **NDC-space** projected point (range ≈[-1,1]); `pix` is a pixel
   coordinate (range [0,W)). The correct pixel-space point,
   `point_image` (line 240, `ndc2Pix(p_proj.x, W)` / `ndc2Pix(p_proj.y, H)`),
   was already computed and in scope at the exact point CU3.4's loop is
   inserted — it was just never used.
2. *Pruning was unreachable, and missing the opacity term.* `conic` is
   the inverse of a positive-definite 2×2 matrix, so the Mahalanobis
   quadratic form `power = -0.5*(...)` is provably `≤ 0` for every
   Gaussian, every pixel — a fact independent of scene or of bug (1).
   `lowest_alpha_coeff = +5.541` (`ln(255)`, positive). CU3.5's test,
   `if (power > lowest_alpha_coeff) continue;`, compares a value that can
   never be positive against a positive constant — **this branch can
   never fire, for any input.** Separately, the roadmap's `power` never
   added `logf(opacities[idx])`, so even with the sign fixed it would
   measure Gaussian falloff shape rather than actual alpha, contradicting
   CU2's own derivation comment ("Gaussians contributing < 0.4% alpha are
   culled").

   Root-caused against the actual SPLATONIC reference source present in
   this repo (`SPLATONIC/{track,map}-rasterization/cuda_rasterizer/forward.cu`,
   a real submodule checkout, not just porting notes): the original
   kernel measures `d` from `collected_xy[i]` (== `point_image`, pixel
   space), computes `power = logf(opacity) - 0.5*(mahalanobis quadratic
   form)`, and **keeps** a pair iff `power > -5.54126354516f` — i.e. cull
   iff `power <= -lowest_alpha_coeff`. `backward.cu:446-447`
   (`alpha = exp(power)`) confirms `power` is literally `log(alpha)`.

   Confirmed empirically with the Checkpoint A harness on two independent
   tilings (`BLOCK=16` and `BLOCK=4`): with the roadmap's original text,
   0 of 7680 (track) / 0 of 5296 (map) pairs were pruned — 100% kept, 0%
   culled, on both. With the fix applied: 3256 kept / 7680 and 3256 kept
   / 5296 respectively (the raw kept-count is tile-size-invariant, as it
   should be — pruning depends only on Gaussian/pixel geometry, not
   tiling), matching a from-scratch CPU reference bit-for-bit, and
   confirmed opacity-sensitive (a deliberately low-opacity test Gaussian
   prunes at least as much as the same geometry at opacity=1.0).

   **Resolved** — both the roadmap (`MILESTONE_PLAN_V3.md` CU3.5's code
   block, comment, and review checklist) and the two `forward.cu` files
   were corrected to: `d = pix - point_image`; `power += logf(opacities[idx])`;
   `if (power <= -lowest_alpha_coeff) continue;`. No milestone renumbered,
   no ownership changed, no new kernel parameter (`opacities` was already
   in scope).

**Gap 5 — `FORWARD::render()`'s wrapper definition is never updated by any
CU, mirroring Gap 3 exactly.** `forward.h`'s CU1.3 declaration added
`const int2* pixel_coords, int num_pixels` to `FORWARD::render(...)`.
CU5.1 updates the `renderCUDA` **kernel**'s signature to add the same two
params, but no CU section anywhere touches the *host-side wrapper*
`void FORWARD::render(...)` in `forward.cu` (the small function that does
`renderCUDA<NUM_CHANNELS><<<grid,block>>>(...)`) — grepped the entire
roadmap for `void render(` / `FORWARD::render`: only the header
declaration (CU1.3) and CU3.1's (unrelated) note about the *preprocess*
wrapper turn up. This is why `forward.cu`'s own compile error
(`'FORWARD::render(...)' should have been declared inside 'FORWARD'`) has
persisted unchanged since CU1.3 landed. **Resolution:** fold the wrapper's
signature + pass-through update into CU5.1, since that's the step that
already touches `forward.cu` to add the same two params to `renderCUDA`
itself — same file, one atomic change, no milestone renumbered. (Doing it
at CU4.5 was considered and rejected: CU4.5's file scope is
`rasterizer_impl.cu` only, and the wrapper can't safely forward
`pixel_coords`/`num_pixels` to `renderCUDA` before CU5.1 gives the kernel
matching parameters to receive them — attempting it earlier just trades
one compile error for a different one.)

**Gap 6 — CU4.3 as literally written would deallocate a buffer that is
still unconditionally written.** CU4.3's text says to remove
`geomState.tiles_touched`'s allocation as a "dead allocation." But
`preprocessCUDA` still executes `tiles_touched[idx] = 0;` at kernel entry
for every `idx < P` (CU3.3 deliberately kept this line — see Gap-adjacent
note in CU3.3's own text, `:986` — precisely because `InclusiveSum` was
still consuming it at the time). By CU4.3, `InclusiveSum` is gone (CU4.1)
so nothing *reads* `tiles_touched` anymore, but the kernel's write is
still live. Removing the buffer's allocation while the kernel keeps
writing to it is an out-of-bounds/dangling device write, not merely dead
code. **Resolved:** kept `obtain(chunk, geom.tiles_touched, P, 128);`;
removed only what's genuinely dead now — the `InclusiveSum` sizing probe
(`cub::DeviceScan::InclusiveSum(nullptr, geom.scan_size, ...)`) and the
`geom.scanning_space`/`geom.point_offsets` allocations that existed solely
to support it. `geomState.point_offsets` has zero remaining references
anywhere in the file (confirmed by grep) — that part of CU4.3 was correct
as written.

**Gap 7 — `imgState.ranges`'s zeroing was sized by tile count, but ranges
is now indexed by pixel.** `identifyTileRanges` groups contiguous sorted
keys by whatever value occupies each key's upper 32 bits and writes
`ranges[that value]` — since CU3.6, that value is the sampled-pixel index
`k` (range `[0, num_pixels)`), not a tile index. The pre-CU4.5 code zeroed
only `tile_grid.x * tile_grid.y` entries of `ranges` before calling
`identifyTileRanges`. Any sampled pixel with **zero** contributing
Gaussians (very plausible after CU3.5's alpha pruning) is never written by
`identifyTileRanges` and must read back as `{0,0}` from the zeroed buffer
— if `num_pixels > tile_grid.x * tile_grid.y` (plausible for `map`'s finer
tiling with denser sampling), pixels beyond the old zeroed region would
read uninitialized chunk memory as their `{start,end}` range, corrupting
`FORWARD::render`'s loop bounds. **Resolved:** the `cudaMemset` now zeroes
`num_pixels * sizeof(uint2)` instead. The underlying allocation
(`ImageState::fromChunk(..., width*height)`) was already large enough —
only the zeroing extent was wrong.

**Gap 8 — the radix-sort bit-width was tile-count-based, but keys pack a
pixel index.** `int bit = getHigherMsb(tile_grid.x * tile_grid.y);` sizes
`cub::DeviceRadixSort::SortPairs`'s bit window to cover a tile index. Since
CU3.6, the keys' upper 32 bits hold the pixel index `k` instead. If
`num_pixels` needs more bits than `tile_grid.x * tile_grid.y` does (again,
plausible whenever sampling is denser than the tile grid), the sort window
would truncate `k`'s high bits, silently scrambling entries whose `k`
values differ only in the truncated bits. **Resolved:**
`getHigherMsb(num_pixels)` instead. (This was flagged as a known,
non-blocking future item during the CU3.2 problem-solving session, before
CU4/CU5 existed in committed code — CU4.5 is where it actually needed
fixing.)

All four of Gaps 6–8 (and the deferred Gap 5) live in the same `CU4.5`
commit/region since they're all direct, load-bearing consequences of the
same tile→pixel indexing switch that CU4.5 performs.

**Gap 5 (closed) — the `FORWARD::render()` wrapper fix landed in CU5.1**
as planned: `void FORWARD::render(...)` in `forward.cu` now takes
`const int2* pixel_coords, int num_pixels` and forwards them to
`renderCUDA`, matching `forward.h`'s CU1.3 declaration exactly. This
cleared the `rasterizer_impl.cu:342` "too few arguments" error (CU4.5)
and, once CU5.1 landed, the `forward.cu` "should have been declared
inside FORWARD" error too.

**Gap 9 — CU5.3/CU5.4's pseudocode describes a transmittance algorithm
that is wrong for any block with more than one warp.** The roadmap's
warp prefix-scan snippet has each of a block's `NUM_WARPS` warps
independently track its own `collected_T[warp_idx]` across rounds, with
no mechanism for a warp to account for the Gaussians processed by
*lower-indexed warps within the same round*. Since a single round's
`BLOCK_SIZE` threads span all warps simultaneously processing
`BLOCK_SIZE` **consecutive-by-depth** Gaussians for that pixel, warp 1's
first Gaussian in a round is strictly farther than every Gaussian warp 0
processed in that same round — correct front-to-back compositing
requires warp 1's starting transmittance to already include warp 0's
contribution *from that same round*, not just carry-over from previous
rounds. The roadmap's pseudocode never does this. For track
(`BLOCK_SIZE=256` → 8 warps) this is not a corner case — it is the normal
case — and would silently produce wrong (but plausible-looking) colors
and depths, not a crash or an obviously-dead branch like Gaps 4/6.

Root-caused against the actual SPLATONIC reference source in this repo
(`SPLATONIC/{track,map}-rasterization/cuda_rasterizer/forward.cu`'s real
`renderCUDA`), which resolves this with a two-phase scheme: each warp
computes its own local prefix product and stashes its *own* full local
product into `collected_T[warp_idx]`; a `__syncthreads()`; then **every
thread loops `for (j = 0; j < warp_idx; j++) T *= collected_T[j]`**,
serially folding in every lower-indexed warp's contribution. The
highest-indexed warp then reseeds every slot of `collected_T[]` with "T
after this whole round" (replicated across all slots) for the next
round's uniform carry-in.

**Resolved:** implemented CU5.3–CU5.6 against this verified algorithm
instead of the roadmap's pseudocode, adapted to MonoGS's data layout
(`point_list` carries only a Gaussian index, not a precomputed
`{gid, power}` pair like upstream SPLATONIC — CU3.6 never carries power
through the sort — so `alpha` is recomputed in `renderCUDA` from
`points_xy_image`/`conic_opacity` using the dense kernel's own raw-opacity
formula, `alpha = opacity * exp(power)`, not SPLATONIC's log-opacity
scheme). Also fixed two real problems this uncovered:

- **Gap 9b (my own translation bug, found via Checkpoint B):** SPLATONIC
  reuses a single variable `T`, reassigning `T = cur_T * (1 - alpha)` at
  the end of each round's per-thread processing so it persists as "the
  running transmittance" regardless of warp count. My first translation
  introduced a second variable and updated only it, leaving the
  register `T` stale (never reflecting the current round's own
  contribution). This is invisible when the cross-warp fold loop happens
  to run ≥1 iteration for the very last thread (track, 8 warps — the
  last thread lives in the last warp, which folds in all others, masking
  the bug) but breaks completely when `NUM_WARPS == 1` (map, `BLOCK_SIZE=16`
  — the fold loop is `for(j<0)`, a permanent no-op, so `T` never updates
  at all). Manifested as `out_opacity` stuck at exactly 0.0 for every
  pixel on `map` only, caught immediately by Checkpoint B (§6e). Fixed by
  writing the post-Gaussian value back into `T` itself, matching
  SPLATONIC's reuse pattern.
- **Gap 10 (present in SPLATONIC's own source too) — a missing barrier
  between the cross-warp fold loop and the "last warp reseeds
  `collected_T[]`" step.** Different warps finish the fold loop (`for
  j < warp_idx`) at different times — a fast, high-index warp can reach
  the reseed write before a slower warp has finished reading the exact
  slots that write clobbers. `compute-sanitizer --tool racecheck` flagged
  this precisely (1 error, 1 warning on `track`) after Gap 9b's fix.
  SPLATONIC's real source has the identical gap (no barrier there
  either) — not fixing something the port broke, but hardening past a
  latent race that happens not to manifest in SPLATONIC's or this port's
  functional tests. Fixed by adding one `__syncthreads()`. Also added a
  `__syncwarp(mask)` between the `collected_T[warp_idx]` read (all lanes)
  and its later same-round overwrite (lane 0 only), which racecheck also
  flagged (1 warning) — likely relies on `__shfl_sync`-implied
  convergence in practice, hardened for clarity on architectures with
  independent thread scheduling. After both fixes: 0 hazards on both
  tilings, plain and 600-Gaussian-stack stress scenes alike.

**Gap 11 — `Rasterizer::backward()`'s own declaration was never extended
for `pixel_coords`, the third occurrence of the Gap 3/5 pattern.**
CU6.3's text says to "pass `pixel_coords.data_ptr<int>()` to
`Rasterizer::backward(...)`" from `rasterize_points.cu`, but
`rasterizer.h`'s `Rasterizer::backward()` declaration had no such
parameter, and no CU (including CU8, whose file scope is `backward.cu`
only) ever adds one. **Resolved** the same way as Gaps 3 and 5: extended
`rasterizer.h`'s declaration with `const int* pixel_coords` (positioned
after `tan_fovx, tan_fovy`, mirroring `forward()`'s own parameter
placement). Deliberately did **not** update `rasterizer_impl.cu`'s
`Rasterizer::backward()` *definition* to match — that call site can't
usefully forward `pixel_coords` to `BACKWARD::render()` until CU8.1 gives
that kernel a matching parameter to receive it (the same reasoning that
kept Gap 5's wrapper fix out of CU4.5). This produces one new, fully
expected, staged build error (`rasterizer_impl.cu`'s definition now
mismatches the header) — the same "build fails on purpose, staged
migration" pattern used successfully since CU1.1. **Closed in CU8**, as
predicted.

**Gap 12 — `backward.h`'s `BACKWARD::render()` declaration never gained
`pixel_coords`/`num_pixels`, exactly mirroring Gap 5** (`forward.h` needed
this via CU1.3; no equivalent step exists anywhere for `backward.h`).
**Resolved** by folding the addition into CU8.1, the step that already
touches `backward.cu`'s kernel signature — same reasoning as Gap 5's
resolution in CU5.1.

**Gap 13 — deriving `num_pixels` for the backward pixel-based launch
needs `pixel_range`, which CU6.3 never asked for.** CU6.3's text only
adds `pixel_coords` to `Rasterizer::backward()`. But `Rasterizer::backward()`'s
own definition (CU8.1's job, once Gap 11 makes it buildable again) must
launch `BACKWARD::render()` with `dim3(num_pixels,1,1)`, and the only
established, consistent way to obtain `num_pixels` in this codebase is
`cudaMemcpy`-ing `pixel_range`'s sentinel entry (CU4.5's own mechanism).
**Resolved**: extended `rasterizer.h`'s `Rasterizer::backward()` (and,
correspondingly, `RasterizeGaussiansBackwardCUDA` and the Python bridge)
with `pixel_range` too, mirroring forward's exact pattern. Not literally
requested by any CU, but the minimal necessary completion of CU6.3 given
what CU8.1 turned out to need.

**Gap 14 — a sign error in SPLATONIC's own backward source, found by a
real Python-driven forward+backward run through the newly-compiling
extension (the first time in this port either package actually built).**
Ported `backward.cu`'s `renderCUDA` from SPLATONIC's real
`cuda_rasterizer/backward.cu` (the roadmap's CU8.1–CU8.4 text is
skeletal — "structure is symmetric to CU5.3–CU5.4... reference SPLATONIC
`backward.cu` lines 205–320" — not literal pseudocode, so ground-truth
was the only option, same situation as CU5). SPLATONIC's per-channel
gradient term is:
```cpp
float diff = inv_alpha * ((1.0f - alpha) * cur_T * feature[ch] - cur_accum[ch] + T_final * bg_color[ch]);
```
An independent derivation of `dC/dalpha_k` from the forward compositing
formula (`C = Σ alpha_i·T_before_i·c_i + T_final·bg`) gives
`dT_final/dalpha_k = -T_final/(1-alpha_k)` (since `T_final` carries a
`(1-alpha_k)` factor), which propagates a **negative** background term —
confirmed against the unmodified dense kernel's own formula in this same
codebase (`dL_dalpha += (-T_final/(1.f-alpha)) * bg_dot_dpixel;`,
`backward.cu`, unrelated to this port) and against a from-scratch
pure-PyTorch `torch.autograd` reference of the identical compositing math
(zero manual gradient formulas, `port/tests` scratch-only, not committed).
With SPLATONIC's `+` sign, a controlled 3-Gaussian test scene gave
`dL/dopacity` values **exactly 4x** the reference's — `dL/dcolor` was
unaffected, since it's computed via a separate code path
(`dchannel_dcolor`) that never touches `dL_dalpha`. **Resolved**: changed
`+ T_final * bg_color[ch]` to `-`. After the fix, analytic gradients
match a finite-difference numerical check to <1% relative error across
9 sampled (opacity, color-channel) pairs on a 20-Gaussian scene, on both
`track_rasterization` and `map_rasterization`.

**A second, unrelated bug was found in the same debugging session — in
`forward.cu`, not `backward.cu`.** The per-thread `done` flag (used to
decide when a pixel-block's warp-cooperative loop can stop early, and to
compute `n_contrib`) was only reassigned *inside* the block that
accumulates an actual contribution (`if (in_range && !done) { ...;
if (T_before>0.5) atomicAdd(...); }` from CU5.6) — meaning a thread that
ran permanently out of real Gaussians (`!in_range`, the common case for
any pixel with fewer contributors than `BLOCK_SIZE`, i.e. nearly every
real pixel) never signaled `done`, so `num_done` stayed 0 and
`n_contrib[pix_id]` was written as a constant `BLOCK_SIZE` (256 for
track, 16 for map) regardless of the pixel's true, usually much smaller,
contributor count. **This had no effect on forward's own color/depth
output** (Checkpoint B's 0-mismatch result was never wrong), but silently
corrupted the one thing only backward consumes: `range.y = range.x +
n_contrib[pix_id]`, causing backward to read `point_list` far past each
pixel's legitimate sorted region — the proximate cause of the `NaN`/`Inf`
gradients seen before Gap 14 was even reached. SPLATONIC's real forward
source reassigns `done` unconditionally every round
(`done = !in_range || T < 0.0001f;`, independent of whether the current
Gaussian actually contributed) — this port's CU5.6 translation had
narrowed that into a conditional update. **Resolved**: `done` is now an
unconditional per-round reassignment (`done = !in_range || cur_T <
0.0001f;`), matching SPLATONIC exactly; the separate, redundant
`alpha > 1/255` gate was also removed since upstream `preprocessCUDA`
pruning already guarantees it for every real entry (the same identity
established when resolving Gap 4). Re-ran Checkpoint B after this change
— still 0 mismatches on both tilings, confirming forward's own output was
never affected, only backward's consumption of `n_contrib`.

---

## 6. Build verification (`pip install -e .`, both rasterizers)

Both `track-rasterization` and `map-rasterization` were built from scratch
(`pip install -e . --no-build-isolation`, gslam conda env, CUDA 12.1,
nvcc via `/usr/bin/nvcc`, `sm_86`), once after CU3.2 and again after CU3.3.
Track and map produce **identical** results at every attempt.

**First attempt** caught a real bug of my own: the `FORWARD::preprocess(...)`
call site had the 5 new arguments in the wrong relative position (appended
after `tiles_touched`/`prefiltered`, matching the *kernel's* CU3.1 order,
instead of *before* them, matching `forward.h`'s already-committed CU1.2
order for the wrapper). Fixed by reordering the call-site arguments and
adding the required `reinterpret_cast<const int2*>(pixel_coords)` cast
(`const int*` at the `Rasterizer::forward()` level → `const int2*` at the
`FORWARD::preprocess()` level, per CU1.1/CU1.2's own documented
representations).

**After the fix, build still fails — at exactly two places, both outside
CU3.2's scope:**

| Error | File:line | Expected? | Why |
|---|---|---|---|
| `too few arguments in function call` + `'FORWARD::render(...)' should have been declared inside 'FORWARD'` | `rasterizer_impl.cu:342` / `forward.cu:414` | ✅ Yes | The `FORWARD::render(...)` call site still uses the pre-CU1.3 argument list; `forward.h`'s CU1.3 declaration (already committed) added `pixel_coords`/`num_pixels`. Wiring this call is explicitly CU4.5's job ("`pixel_coords` and `num_pixels` are passed to `FORWARD::render`") — CU3.2's task explicitly forbids "rendering changes." |
| `argument of type "bool"/"float *"/"int *" is incompatible with parameter of type "const int *"/"float *"` (5 errors) | `rasterize_points.cu:113–119` | ✅ Yes | `Rasterizer::forward()`'s call from the Python/C++ bridge hasn't been updated with `pixel_range`/`pixel_coords` yet — that's CU6.1 ("Add `pixel_range`/`pixel_coords` to Forward Signature (`rasterize_points.cu`)"), a file CU3.2 never lists as in-scope. |

No error appears anywhere in `rasterizer_impl.cu`'s `FORWARD::preprocess()`
call, the `BinningState`/`num_rendered_dev` additions, or the
`Rasterizer::forward()` signature change — CU3.2's own code is clean.
**Neither package installs successfully yet** — that is the correct,
roadmap-anticipated state until CU4.5 and CU6.1 are implemented, not a
regression introduced by CU3.2.

**CU3.3 build (after deleting the final `tiles_touched` write):** rebuilt
both packages from scratch. Result: **byte-for-byte the same two failure
clusters**, unchanged in substance — only the `forward.cu` line number
shifted from `:414` to `:413` (the deleted line moved everything below it
up by one), which is expected and harmless.

| Error | File:line | Newly introduced? | Expected per roadmap? |
|---|---|---|---|
| `too few arguments in function call` + `'FORWARD::render(...)' should have been declared inside 'FORWARD'` | `rasterizer_impl.cu:342` / `forward.cu:413` | No — identical to the CU3.2 build | ✅ Yes — CU4.5 territory |
| `argument of type ... incompatible ...` (5 errors) | `rasterize_points.cu:113–119` | No — identical to the CU3.2 build | ✅ Yes — CU6.1 territory |

No error appears anywhere related to `preprocessCUDA` or the deleted
`tiles_touched` write — CU3.3's own change compiles cleanly, exactly as
its own "Verify (C): Compiles" note predicted (the array is still passed
as a parameter and allocated, just unused past its initialization to 0).
CU3.3 introduced zero new failures.

**CU3.4/CU3.5/CU3.6 build:** rebuilt both packages from scratch, twice —
once with CU3.5's originally-drafted (buggy) formula, once after the Gap 4
fix. Both times: **byte-for-byte the same two failure clusters** as CU3.3,
unchanged in substance (only the `forward.cu` line number shifts by the
number of lines each edit added/removed — currently `:440`, after the
`power += logf(...)` line). No error anywhere near `preprocessCUDA`,
`tile_id`, `pixel_range`, `atomicAdd`, or `MAX_NUM_RENDERED` in either
build. CU3.4–CU3.6 introduced zero new compiler errors.

---

## 6b. Checkpoint A: standalone verification harness

Per the earlier maintainer review recommending a verification checkpoint
"after CU3.6" (the first point in CU3 that produces durable, readable
state), I built `test_preprocess.cu` — a standalone `nvcc` executable,
**not** part of either pip package and **not committed** to this repo
(lives in the session scratch directory). It copies `preprocessCUDA` and
its one direct dependency, `computeCov2D`, **verbatim** from the current
`forward.cu`, and calls the kernel directly with synthetic scenes, on
both track (`BLOCK=16`) and map (`BLOCK=4`) tiling — bypassing
`FORWARD::preprocess()`/`rasterize_points.cu` entirely, since neither
compiles yet (that's the CU4.5/CU6.1 blocker described above, unrelated
to this test).

Scene: 6 synthetic Gaussians (identity view/projection matrices,
precomputed covariance/color to isolate the pixel-loop logic from
SH/`computeCov3D`), one deliberately frustum-culled (`p_view.z ≤ 0.2`),
one deliberately low-opacity (0.15, to exercise Gap 4's `logf(opacity)`
term), a dense per-pixel `pixel_range`/`pixel_coords` over the full 64×64
image.

**Results (both tilings, before and after the Gap 4 fix):**

| Check | What it proves | Before fix | After fix |
|---|---|---|---|
| V1 — counter init | `num_rendered_ptr` zeroed pre-launch | OK | OK |
| V2/V3 — tile/pixel traversal + containment | CU3.4's index math; every visited pixel falls inside the tile that produced it | 0 violations | 0 violations |
| V4 — alpha pruning | CU3.5 correctness | **0% pruned on both tilings — dead code (Gap 4)** | **≈42% pruned, tile-size-invariant, matches CPU reference exactly** |
| V4b — opacity sensitivity | Gap 4's `logf(opacity)` term is wired correctly | n/a (term didn't exist) | low-opacity Gaussian prunes ≥ as much as the same geometry at opacity=1.0 |
| V5/V6 — `num_rendered` + key/depth decode | CU3.6 correctness | GPU count matched the (buggy) no-prune CPU prediction; 0 decode/range errors | GPU count matches the CPU-predicted kept count exactly; 0 decode/range errors |
| — frustum-culled Gaussian | in_frustum early-return still respected inside the new loop | 0 slots emitted | 0 slots emitted |
| V7 — determinism | no races on `atomicAdd`/slot writes | identical `num_rendered` + sorted key-multiset across 5 relaunches | same |
| V8 — overflow guard | `atomicAdd`+`return`(not `continue`)+guard-before-write pattern (forward.cu's exact idiom, isolated at a scale the real 4M/16M cap can't practically reach) | sentinel memory past cap untouched | same |
| V9 — track/map parity | same kernel body behaves identically at `BLOCK=16` vs `BLOCK=4` | kept-count matched across tilings in both buggy and fixed runs | same |
| V10 — `compute-sanitizer` memcheck + racecheck | memory safety, data races | 0 errors, 0 hazards | 0 errors, 0 hazards |

(`/usr/bin/compute-sanitizer` is broken in this environment — missing its
injection library; used the `gslam` conda env's bundled copy instead.)

Net result: CU3.4's traversal and CU3.6's key/slot machinery were correct
from the first implementation attempt and remain so; CU3.5 needed the
Gap 4 fix described in §5, and after that fix all ten checks pass on both
rasterizer tilings.

---

## 6c. CU4.1–CU4.5 build results

Same `pip install -e .` process, both packages, after all of CU4.1–CU4.5
(including the Gap 6/7/8 corrections). **Error count dropped from 9 to 6**
— the `rasterizer_impl.cu:342` "too few arguments in function call" error
is gone (CU4.5's call site now matches `forward.h`'s CU1.3 declaration
exactly, argument-for-argument). Remaining errors, both expected:

| Error | File:line | Expected? | Why |
|---|---|---|---|
| `'FORWARD::render(...)' should have been declared inside 'FORWARD'` | `forward.cu:440` | ✅ Yes — this is Gap 5 | Wrapper definition fix deferred to CU5.1 (see §5) |
| `argument of type ... incompatible ...` (5 errors) | `rasterize_points.cu:113-119` | ✅ Yes | CU6.1 territory, unchanged |

No error anywhere in `rasterizer_impl.cu` itself — CU4.1–CU4.5's own
changes compile clean on both rasterizers. Full end-to-end execution
(actually running `Rasterizer::forward()`) isn't testable yet since
`forward.cu` still won't link until Gap 5 is closed in CU5.1 — that's the
very next step.

---

## 6d. CU5.1–CU5.6 build results

Same process, after CU5.1–CU5.6 (Gap 5's wrapper fix + the SPLATONIC-based
`renderCUDA` rewrite). **Error count dropped from 6 to 5** — the
`forward.cu:440` wrapper-mismatch error is gone; `rasterizer_impl.cu` and
`forward.cu` both compile clean start-to-finish on both packages now.

| Error | File:line | Expected? | Why |
|---|---|---|---|
| `argument of type ... incompatible ...` (5 errors) | `rasterize_points.cu:113-119` | ✅ Yes | CU6.1 territory, unchanged — the only thing left blocking a full `pip install` |

---

## 6e. Checkpoint B: end-to-end `Rasterizer::forward()` verification

Per the earlier "verification checkpoint" methodology (Checkpoint A for
CU3, applied again here for CU4+CU5): `port/tests/test_render.cu` (+
`run_checkpoint_b.sh`) links **directly against the real, unmodified**
`rasterizer_impl.cu` + `forward.cu` + `backward.cu` (the last only to
satisfy the linker — `Rasterizer::backward` references `BACKWARD::*`
symbols even though it's never called; nothing in the tested path touches
it) — no copying, unlike Checkpoint A, since these files now compile on
their own. Calls `CudaRasterizer::Rasterizer::forward()` through its real
public interface (`rasterizer.h`), with `geometryBuffer`/`binningBuffer`/
`imageBuffer` backed by plain `cudaMalloc`.

**Scene:** 5 hand-placed Gaussians (overlapping-depth triple to stress
compositing order, one clipped by the FOV limit to exercise
`computeCov2D`'s shear terms, one frustum-culled) plus a 600-Gaussian
stack at a single pixel location (depths 0.5–18.5, deterministic
pseudo-random opacity/color) specifically to force multiple rounds
(`round = BLOCK_SIZE` Gaussians) — 3 rounds on track, 38 on map — since
the hand-placed scene alone never exceeded 1 round and would not have
caught the cross-round carry-over bug described in Gap 9b.

**CPU reference:** replicates `computeCov2D` in full (including the FOV
clip and shear terms — not an approximation) to get exact conic/radius
per Gaussian, replicates `preprocessCUDA`'s pruning gate exactly (distance
from `point_image` + `logf(opacity)`, threshold at `lowest_alpha_coeff`)
to determine which (Gaussian, pixel) pairs would survive to the sort, then
composites front-to-back per pixel using `renderCUDA`'s own alpha formula
(`alpha = opacity * exp(power)`, no log-opacity, matching the unchanged
dense-kernel convention).

**Results, both scenes, both tilings:**

| Check | track (`BLOCK_SIZE=256`, 8 warps) | map (`BLOCK_SIZE=16`, 1 warp) |
|---|---|---|
| Color/depth/opacity match CPU reference (tol 1e-3) | 0/256 mismatches | 0/256 mismatches |
| Same, 600-Gaussian multi-round stress scene | 0/256 mismatches | 0/256 mismatches |
| `n_touched.sum() > 0` (CU5.5's own "N" check) | yes | yes |
| Frustum-culled Gaussian (`radii[4]==0`) contributes nothing | confirmed | confirmed |
| `compute-sanitizer` memcheck | 0 errors | 0 errors |
| `compute-sanitizer` racecheck (before Gap 10 fix) | 1 error, 1 warning | 1 warning |
| `compute-sanitizer` racecheck (after Gap 10 fix) | 0 hazards | 0 hazards |

This is the strongest evidence available short of a live SLAM run that
CU5.1–CU5.6's sparse forward pass is numerically correct on both
rasterizer configurations, including the specific multi-warp and
sub-warp edge cases that produced Gaps 9b and 10.

---

## 6f. CU6.1–CU6.4 build results

Same process, both packages, after CU6.1/CU6.3 (CU6.2/CU6.4 needed no
changes). **Error count dropped from 5 to 1** — every `rasterize_points.cu`
error is gone; `rasterize_points.cu` now compiles clean (deprecation
warnings only, no errors).

| Error | File:line | Expected? | Why |
|---|---|---|---|
| `declaration is incompatible with "void CudaRasterizer::Rasterizer::backward(...)"` | `rasterizer_impl.cu:375` | ✅ Yes — Gap 11 | `rasterizer.h`'s declaration was extended with `pixel_coords`; the `.cu` definition is deliberately left unchanged until CU8 gives `BACKWARD::render()` a matching parameter to receive it (same staged-migration pattern as CU1.1) |

This is the first point in the whole port where a full `pip install`
failure is down to exactly **one** error, and it's one we introduced on
purpose. Once CU8 lands, this should be the point where both packages
install successfully for the first time.

---

## 6g. CU8.1–CU8.4 build results

Same process, both packages. **`pip install -e .` succeeds — exit code 0,
zero errors — for the first time in this entire port**, on both
`track-rasterization` and `map-rasterization`. `import track_rasterization`
/ `import map_rasterization` both load cleanly (verified from a neutral
working directory; importing both packages' `diff_gaussian_rasterization`-named
submodules in the *same* interpreter process via ambiguous cwd-relative
imports was tried first and crashed at interpreter exit — confirmed to be
a self-inflicted test artifact from loading two unrelated compiled `.so`
files under colliding names, not a real bug: each package imports and
exits cleanly on its own, which is how MonoGS actually uses them).

---

## 6h. Checkpoint C: end-to-end Python forward+backward verification

`port/tests/test_checkpoint_c_e2e.py` (+ `run_checkpoint_c.sh`) — unlike
Checkpoints A and B, this drives the **actual, pip-installed** package
through its real public Python API (`GaussianRasterizer`), not a
standalone C++ harness. This is the first verification in the whole port
that exercises the complete real stack: Python → pybind11 → `rasterize_points.cu`
→ `Rasterizer::forward()`/`backward()` → the CUDA kernels.

**Scene:** 20 randomly-placed, overlapping Gaussians, 32×32 image, all
pixels densely sampled (tile-sorted, matching `mask_utils.get_pixel_info`'s
layout), real `torch.autograd` end-to-end through `_RasterizeGaussians`.

**Checks, both `track_rasterization` and `map_rasterization`:**
- `color.shape == (3, H, W)`, `n_touched.sum() > 0` (CU5.7/CU7.5's own checks)
- `theta`/`rho`/`opacity`/`color`/`means2D` gradients all flow and are non-zero (CU8.6's own check)
- Finite-difference cross-check: 6 `dL/dopacity` + 3 `dL/dcolor` samples, all within <1% relative error of numerical derivatives
- `compute-sanitizer` memcheck + racecheck on the real Python-driven run: 0 errors, 0 hazards
- Re-ran Checkpoint B (forward-only, C++) after every backward-side fix to confirm forward regressed at no point

This is the strongest evidence available that the port is functionally
correct end-to-end for a static scene — the two real bugs described in
§5 Gaps 14 and its companion (`forward.cu`'s `done` flag) were both found
*because* this checkpoint exists and actually exercises gradients through
the real compiled package, not just a hand-rolled harness.

---

## 7. Immediate next steps

1. **(Done.)** CU1–CU9.2 all implemented, verified, committed, and tagged
   (`milestone-4a-cuda-interfaces`, `milestone-4b-cuda-preprocess`,
   `milestone-4e-cuda-live`). Both packages `pip install` cleanly and run
   through a real end-to-end `slam.py` session.
2. **CU5.8** — satisfied in spirit by CU9.2's live `slam.py` run (a real
   tracking loop through the actual compiled sparse extension, on real
   data), though it surfaced the accuracy issue in §9 rather than a clean
   pass.
3. **Open — the §9 ATE/PSNR regression.** Two targeted hypotheses have
   been tested and falsified (see §9); root cause is still unknown.
   Candidates not yet tested: sparse-driven `median_depth` estimation
   noise affecting keyframe-insertion thresholds (`slam_frontend.py:211,
   231-232`), and a tracking-pose ↔ mapping-quality feedback loop (bad
   poses feed bad viewpoints into mapping, which degrades the map, which
   degrades tracking's photometric residual on the next frame). Re-running
   on more capable hardware (A100, full `MAX_NUM_RENDERED=16,000,000`) is
   planned next, primarily to remove this dev machine's 4GB VRAM ceiling
   as a variable for iteration speed and buffer sizing — **note this is
   not expected to change the ATE result itself**, since the mechanism
   was already reproduced pre-CU9 (2026-07-30, dense renderer, original
   16M buffer) — see §9 for why.
4. Once root-caused: re-run V3–V5 for a clean baseline-vs-sparse
   comparison and close out Milestone 5.
5. (Optional, cosmetic) Fold the Gap 3 clarification into
   `MILESTONE_PLAN_V3.md`'s CU3.2 text so the roadmap document itself
   reflects what was actually authorized and built.

---

## 9. Milestone 5 (V3–V5): the ATE/PSNR regression

**TL;DR:** the real, fully-wired sparse pipeline (CU9.2, live) runs cleanly
end to end, but tracking accuracy on TUM fr1_desk is far worse than dense —
RMSE ATE ~0.72m vs dense's ~0.03m, PSNR ~14 vs dense's ~21. Two plausible,
targeted fixes were tried and **both failed to move the number**. This is
recorded here, unresolved, for whoever picks this up next (possibly the same
session, on an A100).

### Numbers

| Run | RMSE ATE (m) | PSNR (dB, after refine) | SSIM | Total FPS | Gaussians (final) |
|---|---|---|---|---|---|
| Dense baseline, 2026-07-30-21-47-12 (pre-session) | 0.0285 | 21.33 | 0.71 | — | — |
| Dense baseline, 2026-08-02-20-05-28 (this session, same HW as sparse runs below) | 0.0339 | 21.25 | 0.71 | 0.514 | 24,123 |
| `use_splatonic:true`, 2026-07-30-22-38-45 / 23-22-50 (**pre-CU9** — dispatch was still a stub, always dense renderer) | 0.7128 (both, ~identical) | — | — | — | — |
| **CU9.2 live sparse run**, 2026-08-02-19-40-07 (real CUDA sparse rasterizers) | 0.7262 | 14.35 | 0.51 | 0.789 | 28,843 |
| Experiment: resample tracking pixel mask every iteration (reverted) | 0.7226 | 14.46 | — | 0.691 | — |
| Experiment: fix loss normalization to match dense's convention (reverted) | 0.7076 | 14.37 | — | 0.566 | — |

### The one clean, load-bearing fact

The **pre-CU9** `use_splatonic:true` runs (2026-07-30, `render()` was still a
stub that unconditionally used the dense renderer, and `map-rasterization`'s
`MAX_NUM_RENDERED` was still the un-shrunk 16,000,000) already reproduce the
same ~0.71m ATE that the real CU9 CUDA kernels produce today. That rules out,
with high confidence:
- Any correctness bug in the `track-rasterization`/`map-rasterization` CUDA
  kernels (they weren't even in the loop for the 07-30 runs).
- The `MAX_NUM_RENDERED` reduction made this session for the 4GB dev GPU
  (irrelevant to a dense-rendered run).
- Anything GPU-model/VRAM-specific (the mechanism lives entirely in
  pure-Python sparse loss/mask code — `generate_random_mask`,
  `get_loss_tracking_sparse` — with zero hardware dependency; it will
  reproduce identically on an A100).

It also means this is not a regression introduced by this session's CU9 work
— it's a pre-existing characteristic of the Milestone 2 sparse-loss design
that was already flagged as "expected" in this file's own INT2 entry, before
any CUDA kernel existed, and has simply never been closed out until now that
the real dispatch makes it visible end-to-end.

### Hypotheses tested (both falsified)

1. **Frozen per-frame random mask causes optimizer bias.**
   `slam_frontend.py`'s `tracking()` calls `generate_random_mask()` once
   before the 100-iteration pose-optimization loop, reusing the same ~600
   pixels (1200 tile samples ∩ `grad_mask`) for every step. Hypothesis: the
   optimizer overfits to that frozen sample's local quirks instead of the
   true photometric error, and this bias compounds frame-over-frame (no
   loop closure). **Fix tried:** resample every iteration instead of once
   per frame. **Result:** ATE 0.7226 — no improvement over 0.7262 baseline.
   Reverted.
2. **Loss normalization scale mismatch.** `get_loss_tracking_rgb` (dense)
   zeroes masked-out pixels and takes `.mean()` over the *full* `C*H*W`
   tensor; `get_loss_tracking_sparse` gathers only the active pixels via
   boolean indexing and takes `.mean()` over just that (much smaller)
   count — inflating the effective per-pixel gradient by `H*W/n_active`
   (~500x for a ~600-pixel mask on a 480×640 frame) relative to what the
   `cam_rot_delta`/`cam_trans_delta` learning rates were tuned against.
   **Fix tried:** normalize by `C*H*W` in both `get_loss_tracking_sparse`
   and `get_loss_mapping_sparse` to match dense's convention exactly.
   **Result:** ATE 0.7076 — no meaningful improvement. Reverted.

### One more data point gathered (not yet acted on)

The sparse run's final Gaussian count (28,843) is actually *higher* than
the dense baseline's (24,123) — so "the map is too sparse/under-densified
because FLIP gates densification to 1-in-4 passes" is not obviously
supported by count alone. This weakly favors the reverse causal direction:
tracking-pose error feeds bad viewpoints into mapping (Gaussians get fit
against inconsistent camera poses), which would degrade rendered PSNR as a
*symptom* of tracking drift rather than mapping being an independent second
bug. Not yet tested empirically.

### Superseded: "large-motion trigger" theory (retracted)

An earlier pass at this section, based only on the periodic (multi-frame,
Umeyama-aligned) ATE checkpoints, proposed that a large, fast camera motion
around dataset frame ~150-180 was a discrete trigger sparse tracking
couldn't recover from. **Retracted** — finer-grained per-frame instrumentation
(below) shows no discrete jump at that point; the divergence is smooth and
continuous from much earlier. The apparent "jump" in the periodic
checkpoints was an artifact of how cumulative trajectory-RMSE summarizes an
already-continuously-growing per-frame error, not evidence of a specific
triggering event. Recorded here so the retraction is visible, not just the
correction.

### Root cause, narrowed: rotation-specific drift, translation is fine

Added temporary instrumentation (`SPLATONIC_DEBUG_ATE=1` env var, gated in
`slam_frontend.py`'s `tracking()`, harmless to leave in) that prints each
frame's *raw* (unaligned) translation error and rotation-angle error against
ground truth, immediately after that frame's pose converges. Ran both dense
and sparse configs with it and compared frames 80-250 directly:

| Metric | Dense | Sparse |
|---|---|---|
| Translation error (m) | climbs to ~1.0-1.06 by frame 200-250 | climbs to ~1.0-1.1 by frame 200-250 — **essentially identical to dense** |
| Rotation error (deg) | **bounded, 0.6-4° across the entire range** — corrected every frame, no drift | **grows monotonically, 11.6° (frame 100) → 60°+ (frame 250)** |

This is a much sharper and more useful signal than the raw translation
number, which is dominated by an unrelated artifact: monocular SLAM poses
are only defined up to a rigid transform from the first frame, so raw
(non-Umeyama-aligned) translation error grows similarly for both dense and
sparse simply as the camera moves away from the origin — it says nothing
about tracking quality by itself. Rotation error has no such gauge-offset
component (a pure rotation matrix comparison is gauge-free up to the fixed
initial misalignment, which both curves start from near zero after the
single early reset at frame 36), so the fact that dense stays bounded while
sparse grows without limit is a clean, direct measurement: **the sparse
tracker's camera-rotation estimation is what's actually broken; its
translation estimation is comparably solid.**

This also explains why both previously-tested fixes failed: neither
per-iteration mask resampling nor the loss-normalization fix targets
anything rotation-specific — both apply identically to the `cam_rot_delta`
and `cam_trans_delta` gradient paths, and translation was never the problem.

### Recommended next steps

- Investigate the `cam_rot_delta` (`theta`) gradient path specifically,
  as computed from a small, randomly-scattered ~600-pixel subsample versus
  a full image. Checkpoint C already verified the *formula* is correct
  (finite-difference match on a dense-covered small test scene), so this
  is not expected to be a math bug — more likely a conditioning/robustness
  issue: estimating a 3-DOF rotation from ~600 random points is more
  sensitive to sample composition (e.g., which parts of the frame happen to
  get sampled that round) than translation is, and with no bundle
  adjustment/loop closure, small per-frame biases in that estimate compound
  unchecked.
- Concretely testable: log the rotation gradient's magnitude/direction
  variance across consecutive frames for sparse vs dense, or try
  artificially increasing just the tracking pixel budget (independent of
  `MAX_NUM_RENDERED`/hardware) to see if rotation error growth rate drops
  as sample size increases — that would confirm a sample-size/conditioning
  explanation over a discrete bug.
- Once hardware allows, re-run with `SPLATONIC_DEBUG_ATE=1` on the A100
  with the full `MAX_NUM_RENDERED=16,000,000` restored — expected to
  reproduce the same rotation-specific divergence (the mechanism is
  Python-side and dataset-driven, not GPU-driven), but worth confirming,
  and having per-frame rotation-error logging from the start will make any
  future investigation much faster than reconstructing it from periodic
  ATE checkpoints again.

### Attempted (invalid): more tracking pixels via `tracking_tile_size`

Tried the cheapest possible test of "does more supervision reduce rotation
drift": set `Training.tracking_tile_size: 8` (4x more tracking pixels,
4800 instead of 1200) via config only, no code change. **This is invalid**
— confirmed by a crash within 5 frames (`CUDA error: invalid configuration
argument`). `mask_utils.py`'s own docstring already said `tile_size` "must
match `BLOCK_X` of the rasterizer that will consume the output"; `track-
rasterization`'s `BLOCK_X` is a compile-time 16, so 8 is not a valid
density-only knob — there is a real, currently-undocumented-in-code
architectural coupling here, not just a convention. Note the crash's
*stack trace* pointed at the backend's `extend_from_pcd_seq` /
`densification_postfix` (unrelated-looking code) rather than the tracking
path — consistent with CUDA's asynchronous error reporting surfacing a
frontend illegal-launch on a later, unrelated call. Config file deleted,
no committed changes from this attempt.

### Hypothesis 3 tested and falsified: pixel *count* is not the driver

Did this properly: added `generate_random_mask_k(image_size, tile_size,
k, device)` to `mask_utils.py` — samples `k` independent random pixels
per tile instead of 1, keeping `tile_size=16` (hence the tile grid, hence
`BLOCK_X` compatibility) identical to the working baseline. Wired into
`slam_frontend.py`'s `tracking()` behind `SPLATONIC_DEBUG_TRACK_K` (env
var, default `1` = unchanged behavior, no-op by default). Ran with `k=4`
(4800 pixels instead of 1200, a 4x increase) plus `SPLATONIC_DEBUG_ATE=1`:

| Frame | Rotation error, k=1 (baseline) | Rotation error, k=4 |
|---|---|---|
| 100 | 11.6° | 12.5° |
| 150 | ~23° (interpolated) | 26.8° |
| 200 | ~46° (interpolated) | 61.8° |
| 250 | ~60° | 71.4° |

4x more tracking pixels did not reduce the rotation drift rate — if
anything it's slightly worse (likely within run-to-run noise given
different random draws, but certainly not an improvement). **This rules
out raw sample size/count as the primary driver**, on top of the earlier
falsified hypotheses (mask-resampling frequency, loss normalization
scale). Three independent variables changed, three null results, all
while dense stays rock-solid (0.6-4°) on the exact same sequence with the
exact same optimizer/learning rates.

**Where this leaves the search:** the problem is very unlikely to be "not
enough sparse pixels" in any simple sense (quantity, resampling frequency,
or normalization). It's more likely something structural — e.g., in how
the `theta` (`cam_rot_delta`) gradient is actually computed through the
sparse kernel's backward pass, or a genuine spatial-conditioning issue
that survives naive resampling.

### Attempted (inconclusive, too noisy): direct gradient-bias test

Tried a cheap (seconds, not minutes) kernel-level test: build a small
synthetic scene (40 Gaussians, 128x128), compute `dL/dtheta` and `dL/drho`
two ways — (1) `G_full`, using every pixel, and (2) `G_est`, a Monte-Carlo
estimator using a random ~1/16 pixel subset per draw (rescaled by 16x to
be an unbiased estimator of the full-image sum-gradient if the renderer's
per-pixel gradients are themselves correct), averaged over 40 independent
draws. If `mean(G_est) ≈ G_full`, the sparse renderer's gradient is
unbiased (real tracking's issue would then be pure variance/conditioning,
not a bug). If there's a persistent gap, that's a real bias.

**Result: inconclusive, not negative.** The L1 loss's gradient is
`sign(color - gt)`, a discontinuous function of the residual — combined
with only 40 draws and a scene where many pixels are pure background
(zero gradient) or dominated by a single Gaussian (large sign flips
between draws), the Monte Carlo variance was enormous: standard error
(`std/sqrt(40)`) was ~200x larger than the true gradient value for both
`theta` and `rho`. That swamps any possible bias signal — this test
cannot currently distinguish "unbiased but noisy" from "biased," it only
shows both are far noisier than 40 draws can resolve.

**v2, redesigned:** switched to a smooth L2 loss, a denser 150-Gaussian
scene with 100% pixel coverage (no dead/background pixels), and 300 draws
(up from 40). Result, comparing the mean of 300 sparse-subset estimates
(rescaled to be an unbiased Monte-Carlo estimator) against the true
full-image gradient:

| | `theta` (rotation) | `rho` (translation) |
|---|---|---|
| \|\|mean − true\|\| / \|\|true\|\| | 0.44 | 0.60 |
| cosine(mean estimate, true) | 0.90 | 0.81 |
| mean cosine(individual draw, true) | 0.04 ± 0.65 | 0.03 ± 0.68 |

Both parameters show real, comparable Monte-Carlo noise even at 300
draws — individual per-draw gradients are nearly uncorrelated with the
true direction (cosine ≈ 0, high variance), and even the *averaged*
estimate isn't perfectly aligned. **Notably, `rho` is not better-behaved
than `theta` here — if anything slightly worse** — which is the opposite
of the asymmetry seen in real SLAM (rotation drifts badly, translation
tracks fine). This is a useful negative result: it suggests the
real-world rotation-specific drift is **not** simply explained by a
single frame's sparse gradient being noisier/biased for rotation than
for translation on some representative scene. The asymmetry more likely
emerges from **sequential dynamics** — how a stream of correlated, noisy
per-frame pose updates accumulates through the optimizer and the
SE3-exponential pose update over hundreds of frames — which a one-shot,
single-frame synthetic gradient test cannot capture. Confirming that
would need either a theoretical/simulation analysis of the update
dynamics, or instrumenting the *real* sequential tracking loop's gradient
statistics frame-by-frame (not a synthetic scene).

Scripts saved at `/tmp/.../scratchpad/test_theta_bias.py` and `_v2.py`
(session-local, not in the repo) for reference.

### Summary of tonight's investigation (Milestone 5, V3-V5)

Five hypotheses tested for the sparse-tracking rotation-drift regression;
all falsified or inconclusive, none identified a fix:

1. Frozen per-frame random mask (resample every iteration instead) —
   **falsified**, no change.
2. Loss normalization scale mismatch (match dense's convention) —
   **falsified**, no meaningful change.
3. Insufficient pixel count (4x more pixels via `generate_random_mask_k`)
   — **falsified**, no improvement (if anything, slightly worse).
4. Direct gradient-bias test v1 (L1 loss, 40 draws) — **inconclusive**,
   test itself too noisy (Monte Carlo std ~200x the signal) to answer the
   question as designed.
5. Direct gradient-bias test v2 (L2 loss, denser scene, 300 draws) —
   **informative negative**: both `theta` and `rho` show comparable
   single-frame Monte-Carlo noise on a representative synthetic scene,
   with `rho` if anything slightly *worse*-conditioned than `theta` —
   the opposite of real SLAM's asymmetry. This rules out "rotation's
   single-frame sparse gradient is inherently noisier/more biased than
   translation's" as the explanation, and points instead at **sequential
   accumulation dynamics** (how correlated per-frame noise compounds
   through the optimizer and the SE3-exponential pose update over
   hundreds of frames) as the more likely locus of the asymmetry.

What's solid: the regression is real, reproducible across 5+ independent
full SLAM runs, not GPU/VRAM-caused, not introduced by this session's
CUDA work (pre-existed in stub-era runs), and specifically affects
rotation estimation while translation tracks comparably to dense. It is
*not* explained by mask staleness, loss scale, pixel count, or a
single-frame rotation-specific gradient bias — all five of the concrete,
testable explanations for those have been ruled out or found wanting.
What's still unknown: the actual mechanism, which now looks like it lives
in the frame-to-frame accumulation dynamics rather than in any single
frame's computation. Recommended entry point for whoever continues this:
instrument the *real* sequential tracking loop (not a synthetic scene) to
log per-iteration `cam_rot_delta` gradient direction/magnitude across
consecutive real frames, and check whether it shows a consistent
directional bias (would explain compounding drift) versus pure zero-mean
noise (would not) — ideally on faster hardware where each full run costs
seconds instead of the 15-20 minutes this dev GPU requires.
