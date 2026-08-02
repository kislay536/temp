# SPLATONIC-on-MonoGS Port — Status

Last updated: 2026-07-31 (post CU3.3)

Roadmap: `port/MILESTONE_PLAN_V3.md`. This document is a snapshot of what has
been done, what changed where, and what is still open. It is not itself a
plan — treat `MILESTONE_PLAN_V3.md` as the specification and this file as
the log.

---

## 1. Where we are, in one paragraph

Milestones 1–3 (Python-side SPLATONIC integration into MonoGS, plus
integration testing INT1–INT3) are complete and verified. Milestone 4 (CUDA
rasterizer changes) is in progress through CU3.3: interface-only stage
(CU1.1–CU1.3, CU2), the first kernel-signature stage (CU3.1), the first
real implementation stage (CU3.2 — `BinningState` binding, static sizing,
sequencing, `num_rendered_ptr`, and the `Rasterizer::forward()` signature
fix), and now CU3.3 (removing `preprocessCUDA`'s final `tiles_touched`
write, clearing the way for CU3.4's pixel loop) are implemented, committed,
and build-verified. A full build of both rasterizers has been attempted
after both CU3.2 and CU3.3; both times it fails at exactly the same two
places the roadmap already anticipates (CU4.5's render dispatch and CU6.1's
Python/C++ bridge) — nothing else, and no new failures. Both rasterizer
packages have not been successfully installed yet; that is expected until
CU4.5/CU6 land.

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
| CU3.4–CU9.2 | Pixel iteration, alpha pruning, key packing, dispatch, Python bindings, backward pass | Not started |

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
- `forward.cu` — **(CU3.3, new this update)**: the single final-line write `tiles_touched[idx] = (rect_max.y - rect_min.y) * (rect_max.x - rect_min.x);` at the end of `preprocessCUDA` is deleted. The earlier `tiles_touched[idx] = 0;` initialization (top of the function) is untouched. This is a placeholder removal only — no pixel loop, alpha pruning, or key packing added yet (CU3.4–CU3.6)

### Not yet touched
- `rasterizer_impl.h` (both rasterizers) — `GeometryState`/`BinningState` structs unchanged
- `backward.cu`, `backward.h` — untouched, CU8 territory
- `rasterize_points.cu`, `ext.cpp` — untouched, CU6 territory
- `submodules/diff-gaussian-rasterization/` — the original dense MonoGS rasterizer, verified untouched at every step and must stay that way

### Roadmap document
- `port/MILESTONE_PLAN_V3.md` — CU3.2/CU4.3 clarification committed (`91dd31d`). Note: the separately-drafted "Gap 3" clarification (adding an explicit `Rasterizer::forward()` signature-update item to CU3.2's text) was **not** applied to the roadmap file itself — it was authorized directly via explicit task instruction instead and implemented as described above. The roadmap text does not yet reflect this; consider folding it in for future readers.

---

## 4. Git ledger

**Tags:**
- `milestone-2-python`
- `milestone-3-integration`
- `milestone-4a-cuda-interfaces` (CU1.1–CU1.3)

**Commits (most recent first):**
```
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

**Uncommitted right now:** `port/STATUS.md` only (this file itself is being
updated as part of documenting CU3.3; the code and roadmap are fully
committed as of `7fb0741`).

---

## 5. Roadmap gaps found and resolved (Gaps 1–3)

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

---

## 7. Immediate next steps

1. (Optional, cosmetic) Fold the Gap 3 clarification into
   `MILESTONE_PLAN_V3.md`'s CU3.2 text so the roadmap document itself
   reflects what was actually authorized and built.
2. Continue to CU3.4 (`Add Pixel Iteration Loop (No Alpha Pruning Yet)`)
   per `MILESTONE_PLAN_V3.md` — adds the tile/pixel index loop at the spot
   `tiles_touched[idx] = ...` used to occupy, with a no-op placeholder
   body (still no alpha pruning or key packing; those are CU3.5–CU3.6).
3. The `FORWARD::render()` and `rasterize_points.cu` build failures are
   expected to persist, unresolved, through CU3.4–CU3.7 and CU4.1–CU4.4 —
   they only clear once CU4.5 and CU6.1 land.
