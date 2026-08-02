# SPLATONIC-on-MonoGS Port — Status

Last updated: 2026-08-02 (CU4.1–CU4.5, CU5.1–CU5.6, and CU6.1/CU6.3 done; full `pip install` down to 1 expected error; Milestone 4b closed, Milestone 4c in progress)

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
| CU6.1 | Add `pixel_range`/`pixel_coords` to `RasterizeGaussiansCUDA` (`rasterize_points.cu`/`.h`) | ✅ Done, **uncommitted** — this fixed all 5 pre-existing `rasterize_points.cu` errors |
| CU6.2 | Switch to static binning buffer in forward | ✅ **Already satisfied** — the "old" pattern CU6.2 describes doesn't exist in this codebase (sizing already happens inside `Rasterizer::forward()` itself, made static back in CU3.2); no change needed |
| CU6.3 | Add `pixel_coords` to `RasterizeGaussiansBackwardCUDA` + `Rasterizer::backward()` | ✅ Done **with the `rasterizer.h` declaration also extended** (Gap 11, see §5), **uncommitted** — introduces one new, expected, staged build error (`rasterizer_impl.cu`'s `Rasterizer::backward()` definition now mismatches; deferred to CU8, matching Gap 3/5's precedent) |
| CU6.4 | Update `ext.cpp` pybind registrations | ✅ **Already satisfied** — `ext.cpp` binds bare function pointers with no named-argument list, so it auto-adapts to the updated C++ signatures; no change needed |
| CU7.1–CU9.2 | Autograd wiring, sparse backward kernel, activation | Not started |

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
- `rasterize_points.h`/`.cu` — **(CU6.1/CU6.3, new this update, uncommitted)**: `RasterizeGaussiansCUDA` gains `pixel_range`/`pixel_coords` tensor params (extracted to raw `int*` and threaded into the `Rasterizer::forward()` call between `tan_fovy` and `prefiltered`, matching `rasterizer.h`'s declared order); `RasterizeGaussiansBackwardCUDA` gains `pixel_coords`, threaded into `Rasterizer::backward()`. CU6.2 and CU6.4 needed no changes (see milestone table §2)
- `cuda_rasterizer/rasterizer.h` — **(Gap 11, new this update, uncommitted)**: `Rasterizer::backward()` declaration gains `const int* pixel_coords` after `tan_fovx, tan_fovy`

### Not yet touched
- `rasterizer_impl.h` (both rasterizers) — `GeometryState`/`BinningState` structs unchanged
- `backward.cu`, `backward.h` — untouched, CU8 territory
- `ext.cpp` — no change needed (see CU6.4 in §2)
- `rasterizer_impl.cu`'s `Rasterizer::backward()` **definition** — deliberately left mismatched against the new declaration (Gap 11, staged break, resolved in CU8)
- `submodules/diff-gaussian-rasterization/` — the original dense MonoGS rasterizer, verified untouched at every step and must stay that way

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

## 5. Roadmap gaps found and resolved (Gaps 1–11)

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
migration" pattern used successfully since CU1.1. Expect a "Gap 12"
(`BACKWARD::render()`'s own wrapper likely needs the same treatment
CU5.1 gave `FORWARD::render()`) to surface when CU8 is implemented.

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

## 7. Immediate next steps

1. **Commit CU6.1/CU6.3** (`rasterize_points.h`/`.cu` pixel param
   threading, `rasterizer.h`'s Gap 11 declaration fix) — implemented and
   verified this update, not committed yet.
2. **CU5.8** (regression test on dense MonoGS — a real tracking loop
   compared against the dense baseline) genuinely needs a live `slam.py`
   run with a real dataset and the dispatch switch wired up enough to
   invoke the sparse path, which isn't possible until CU7/CU9 land.
   Deferred; Checkpoint B (§6e) is the strongest available substitute for
   now (exact numerical match against a brute-force reference).
3. Continue to **CU7.1–CU7.5** (autograd wiring): add pixel args to
   `_RasterizeGaussians.forward()`/`backward()`, `ctx.save_for_backward`,
   `GaussianRasterizer.forward()`, end-to-end Python forward+backward test.
4. Then **CU8 (sparse backward kernel — apply the same SPLATONIC
   cross-reference rigor used for CU5, since backward is at least as
   algorithmically delicate as forward; also close Gap 11 by updating
   `rasterizer_impl.cu`'s `Rasterizer::backward()` definition and likely a
   "Gap 12" `BACKWARD::render()` wrapper fix mirroring CU5.1's)**, **CU9
   (activate the dispatch switch + smoke test)**, and **Milestone 5
   (validation)**.
5. (Optional, cosmetic) Fold the Gap 3 clarification into
   `MILESTONE_PLAN_V3.md`'s CU3.2 text so the roadmap document itself
   reflects what was actually authorized and built.
