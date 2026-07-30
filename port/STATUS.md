# SPLATONIC-on-MonoGS Port — Status

Last updated: 2026-07-31

Roadmap: `port/MILESTONE_PLAN_V3.md`. This document is a snapshot of what has
been done, what changed where, and what is still open. It is not itself a
plan — treat `MILESTONE_PLAN_V3.md` as the specification and this file as
the log.

---

## 1. Where we are, in one paragraph

Milestones 1–3 (Python-side SPLATONIC integration into MonoGS, plus
integration testing INT1–INT3) are complete and verified. Milestone 4
(CUDA rasterizer changes) is in progress: the interface-only stage
(CU1.1–CU1.3, CU2) and the first kernel-signature stage (CU3.1) are
implemented and committed. CU3.2 (the first milestone that touches actual
`.cu` implementation logic in `rasterizer_impl.cu`) has **not** been
implemented yet — two roadmap gaps were found during pre-implementation
review and are in the process of being resolved in the roadmap itself
before any code is written.

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
| CU3.2 | Bind key buffers to `BinningState`, allocate `num_rendered_ptr`, fix sequencing (`rasterizer_impl.cu`) | ⛔ **Blocked** — roadmap clarification in progress (see §5) |
| CU3.3–CU9.2 | Kernel body rewrite, dispatch, Python bindings, backward pass | Not started |

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

### Not yet touched
- `rasterizer_impl.cu` (both rasterizers) — CU3.2 target, no edits yet
- `rasterizer_impl.h` (both rasterizers) — `GeometryState`/`BinningState` structs unchanged
- `backward.cu`, `backward.h` — untouched, CU8 territory
- `rasterize_points.cu`, `ext.cpp` — untouched, CU6 territory
- `submodules/diff-gaussian-rasterization/` — the original dense MonoGS rasterizer, verified untouched at every step and must stay that way

### Roadmap document
- `port/MILESTONE_PLAN_V3.md` — CU3.2/CU4.3 text revised twice this session (see §5); **currently has uncommitted changes**

---

## 4. Git ledger

**Tags:**
- `milestone-2-python`
- `milestone-3-integration`
- `milestone-4a-cuda-interfaces` (CU1.1–CU1.3)

**Commits (most recent first):**
```
7eec8aa feat(cuda-preprocess): add pixel key params to preprocessCUDA signature   [CU3.1]
538ebe9 cu update                                                                  [roadmap: CU3.2 ownership fix, part 1]
a311b02 feat(cuda-interface): add lowest_alpha_coeff to auxiliary.h (CU2)         [CU2]
909a46c feat(cuda-interface): add pixel_coords/num_pixels to FORWARD::render      [CU1.3]
6e7d93e feat(cuda-interface): add pixel key params to FORWARD::preprocess         [CU1.2]
63c8771 feat(cuda-interface): add pixel_range/pixel_coords to rasterizer.h        [CU1.1]
c81d27a fix: update evo trajectory alignment API for evo v1.37                    [INT1]
bc3fb9e feat: wire FLIP schedule into BackEnd.map                                 [P6]
```

**Uncommitted right now:**
- `port/MILESTONE_PLAN_V3.md` — the second CU3.2/CU4.3 roadmap fix (moving `BinningState` static sizing from CU4.3 into CU3.2, narrowing CU4.3 to dead-`GeometryState`-allocation cleanup). Applied to disk, not yet committed — no instruction to commit it has been given yet.

---

## 5. Why CU3.2 hasn't started: two roadmap gaps found and handled

Before touching `rasterizer_impl.cu`, a first CU3.2 implementation attempt was
made and **stopped deliberately** rather than guessing at an ambiguous
instruction. Two real issues surfaced under review:

**Gap 1 — buffer ownership contradiction (resolved, applied to disk).**
CU3.2 originally said `gaussian_keys_unsorted`/`gaussian_values_unsorted`
belonged to a new `GeometryState` allocation (raw `cudaMalloc`, no matching
`cudaFree`); CU4.2 said the same buffers were `BinningState`'s existing
`point_list_keys_unsorted`/`point_list_unsorted` fields. Resolved: CU3.2 now
explicitly states `BinningState` ownership, matching CU4.2, with no new
allocation.

**Gap 2 — milestone-boundary conflict (resolved, applied to disk).**
Fixing Gap 1 exposed a second problem: CU3.2 requires moving
`BinningState::fromChunk()` to *before* `FORWARD::preprocess()`, but that's
only safe once `BinningState` is statically sized (`MAX_NUM_RENDERED`) —
and the roadmap had that sizing change parked in CU4.3, five sub-milestones
later, with nothing in between making it possible. Resolved: the static
sizing change now lives in CU3.2 itself (one atomic edit with the
sequencing move); CU4.3 is narrowed to just the resulting dead
`GeometryState` field cleanup (retitled `Remove Dead GeometryState
Allocations`).

**Gap 3 — `Rasterizer::forward()` signature never updated (proposed, NOT yet applied).**
A subsequent "review everything" pass found a third gap: `rasterizer.h`
(CU1.1, already committed) declares `pixel_range`/`pixel_coords` on
`Rasterizer::forward()`, but no milestone anywhere in the roadmap ever
updates that function's actual *definition* in `rasterizer_impl.cu` to
match — confirmed by grepping the entire document for every occurrence of
`Rasterizer::forward(`. Without this, the `FORWARD::preprocess()` call site
that CU3.2 is supposed to wire has no local variable to supply for two of
its five new parameters. A minimal fix — adding a third numbered item to
CU3.2 that adds these two parameters to `Rasterizer::forward()`'s
definition and passes them through — has been **drafted as a diff but not
yet applied**, pending approval.

---

## 6. Immediate next steps

1. Decide on and apply the Gap 3 clarification (add item 3 to CU3.2).
2. Commit the roadmap changes currently sitting uncommitted in
   `port/MILESTONE_PLAN_V3.md`.
3. Implement CU3.2 for real: in `rasterizer_impl.cu` (both rasterizers),
   move + statically size `BinningState::fromChunk()`, bind
   `gaussian_keys_unsorted`/`gaussian_values_unsorted` to its fields, add
   `pixel_range`/`pixel_coords` to `Rasterizer::forward()`'s signature, and
   allocate/zero `num_rendered_dev`.
4. Continue to CU3.3 onward per `MILESTONE_PLAN_V3.md`.

Nothing in this document authorizes skipping ahead — CU3.2 remains
un-implemented until the Gap 3 decision is made.
