# SPLATONIC-on-MonoGS Port — Status

Last updated: 2026-08-02 (Milestone 4b closed — CU3.1–CU3.7 done, tagged `milestone-4b-cuda-preprocess`)

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
4b (CU1–CU3, the interface + preprocess stage) is now fully closed.** Work
continues downstream into CU4 (dispatch) and beyond.

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
| CU4.1–CU9.2 | Dispatch, sparse forward/backward kernels, Python bindings, activation | Not started |

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
- `forward.cu` — **(CU3.4/CU3.5/CU3.6, new this update, uncommitted)**: appended after `conic_opacity[idx] = ...` (the spot CU3.3's deletion vacated):
  - CU3.4: `for (tile_y in rect_min.y..rect_max.y) for (tile_x in rect_min.x..rect_max.x)` computing `tile_id`, looking up `[pstart,pend) = pixel_range[tile_id..tile_id+1]`, and an inner `for (k in pstart..pend)` reading `pixel_coords[k]`
  - CU3.5 (**as fixed, not as originally drafted in the roadmap — see Gap 4 below**): `d = pix - point_image` (pixel-space, not `p_proj`/NDC), `power = -0.5*(mahalanobis quadratic form)`, `power += logf(opacities[idx])`, cull with `if (power <= -lowest_alpha_coeff) continue;`
  - CU3.6: pack `key = (uint64_t)(uint32_t)k << 32 | depth_bits`, `slot = atomicAdd(num_rendered_ptr, 1)`, overflow guard `if (slot >= MAX_NUM_RENDERED) return;`, write `gaussian_keys_unsorted[slot]`/`gaussian_values_unsorted[slot]`
  - Verified byte-identical between `track-rasterization` and `map-rasterization` after every edit

### Not yet touched
- `rasterizer_impl.h` (both rasterizers) — `GeometryState`/`BinningState` structs unchanged
- `backward.cu`, `backward.h` — untouched, CU8 territory
- `rasterize_points.cu`, `ext.cpp` — untouched, CU6 territory
- `submodules/diff-gaussian-rasterization/` — the original dense MonoGS rasterizer, verified untouched at every step and must stay that way

### Roadmap document
- `port/MILESTONE_PLAN_V3.md` — CU3.2/CU4.3 clarification committed (`91dd31d`). Note: the separately-drafted "Gap 3" clarification (adding an explicit `Rasterizer::forward()` signature-update item to CU3.2's text) was **not** applied to the roadmap file itself — it was authorized directly via explicit task instruction instead and implemented as described above. The roadmap text does not yet reflect this; consider folding it in for future readers.
- `port/MILESTONE_PLAN_V3.md` — **(Gap 4, new this update, uncommitted)**: CU3.5's code block, comments, and review checklist rewritten to fix the two bugs described in §5. This is a correction to CU3.5's own text, not a scope/ownership/sequencing change — no milestone renumbered, no new milestone added.

---

## 4. Git ledger

**Tags:**
- `milestone-2-python`
- `milestone-3-integration`
- `milestone-4a-cuda-interfaces` (CU1.1–CU1.3)
- `milestone-4b-cuda-preprocess` (CU1–CU3, i.e. all of CU3.1–CU3.7 — **new this update**)

**Commits (most recent first):**
```
<pending> test(cuda-preprocess): validate preprocessCUDA key generation         [CU3.7 — port/tests/ harness]
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

## 5. Roadmap gaps found and resolved (Gaps 1–4)

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

## 7. Immediate next steps

1. **Commit CU3.4, CU3.5 (with the Gap 4 fix), CU3.6, and the roadmap's
   Gap 4 clarification** — all implemented and verified this update, none
   committed yet (see §4 for the suggested split and commit messages).
2. (Optional, cosmetic) Fold the Gap 3 clarification into
   `MILESTONE_PLAN_V3.md`'s CU3.2 text so the roadmap document itself
   reflects what was actually authorized and built.
3. Continue to **CU3.7** (`Compile + Unit Test preprocessCUDA`,
   tag `milestone-4b-cuda-preprocess`) — the roadmap's own version of the
   Checkpoint A verification already performed in §6b above; decide
   whether to formalize `test_preprocess.cu` into a committed
   `port/tests/` regression test or treat CU3.7 as satisfied by this
   session's harness run.
4. The `FORWARD::render()` and `rasterize_points.cu` build failures are
   expected to persist, unresolved, through CU3.7 and CU4.1–CU4.4 — they
   only clear once CU4.5 and CU6.1 land.
