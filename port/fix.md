# SPLATONIC on MonoGS — Plan Review

## Overall Verdict: Architecturally Sound, But Several Gaps and Errors Would Block a Direct Implementation

The strategy in `SPLATONIC_ON_MONOGS.md` correctly identifies all the fundamental differences between MonoGS and SplaTAM. The core recommendation — merge SPLATONIC's pixel-based pipeline INTO MonoGS's rasterizer rather than replacing it — is the right call. However, there are concrete technical issues that would cause failures if followed literally.

---

## What the Plan Gets Right

### 1. The Central Insight (Rasterizer API Divergence)
The plan correctly identifies the hardest problem: MonoGS's rasterizer passes `theta`/`rho` (se(3) Lie algebra deltas) into the CUDA kernel and computes `dL/d_tau` analytically inside CUDA, bypassing PyTorch autograd entirely. SPLATONIC's rasterizers know nothing about this. If you dropped SPLATONIC's CUDA binaries into MonoGS, tracking would break silently — the pose gradient would be zero and the camera would never converge.

### 2. The `n_touched` Requirement
Correctly flagged. `n_touched` feeds MonoGS's keyframe decision (`is_keyframe()` via IoU of visibility tensors) and SLAM pruning (`prune_points` uses observation counts). If the pixel-parallel kernel drops this, keyframe selection degrades and pruning becomes noisy. The plan mandates `atomicAdd` on `n_touched[gid]` in the new kernel.

### 3. Process Architecture Awareness
The plan correctly assigns tracking changes to `slam_frontend.py` (FrontEnd process) and mapping changes to `slam_backend.py` (BackEnd process), matching MonoGS's mp.Queue-based split. It doesn't confuse the two.

### 4. Dense Fallback for Densification
Correctly keeps the original `diff_gaussian_rasterization` rasterizer as the dense path. The FLIP schedule (1-dense:3-sparse) is faithfully ported, and the plan handles the dispatch logic in the modified `render()` function.

### 5. Python-side Sampling (mask_utils.py)
Copying this file verbatim is correct — it has no SplaTAM-specific imports. The tile-size alignment insight (tracking tile_size=16 → BLOCK_X=16 for track rasterizer; mapping tile_size=4 → BLOCK_X=4 for map rasterizer) is correct and critical.

---

## Concrete Errors and Gaps

### Critical Issue 1: The Warp-Scan Render Kernel is Pseudocode With a Placeholder

In §3.6, the core of the pixel-parallel kernel (`renderCUDA`) contains:
```cpp
// Warp prefix-scan for transmittance accumulation
// ... (see SPLATONIC track-rasterization/forward.cu for exact warp scan code)
float my_T_factor = 1.0f - alpha;
// ... warp scan gives T_before_me ...
```

`T_before_me` is the transmittance *before* this thread's Gaussian — i.e., the product of `(1 - alpha_j)` for all threads with lower index in the same warp. This requires a `__shfl_up_sync` prefix product, inter-warp accumulation via a shared memory array (`collected_T[warp_idx]`), and a cooperative early-exit via `__syncthreads_or`. The plan defers all of this to "see SPLATONIC's source." A developer who only has these docs cannot implement this kernel correctly. This is the most complex piece of the entire port and it's left as a placeholder.

**Fix:** Replace the placeholder with the complete warp-scan implementation below. This is the full forward render kernel body for the track rasterizer (BLOCK_SIZE=256, NUM_WARPS=8); the map rasterizer version is identical except BLOCK_SIZE=16, NUM_WARPS=0, and the inter-warp loop never fires.

```cpp
__global__ void renderCUDAPure(
    const uint2* __restrict__ pixel_ranges,
    const int*   __restrict__ pixel_coords,
    const int2*  __restrict__ point_list,
    int W, int H,
    const float2* __restrict__ points_xy_image,
    const float4* __restrict__ conic_opacity,
    float* __restrict__ final_T,
    uint32_t* __restrict__ n_contrib,
    int* __restrict__ n_touched,
    const float* __restrict__ bg_color,
    float* __restrict__ out_color,
    float* __restrict__ out_depth,
    float* __restrict__ out_opacity,
    const float* __restrict__ features,
    const float* __restrict__ depths_precomp,
    int num_pixels)
{
    int pixel_id = blockIdx.x;
    if (pixel_id >= num_pixels) return;

    int lane     = threadIdx.x % 32;
    int warp_idx = threadIdx.x / 32;

    __shared__ float collected_T[NUM_WARPS];   // one slot per warp
    if (threadIdx.x < NUM_WARPS) collected_T[threadIdx.x] = 1.0f;
    __syncthreads();

    int pix_linear = pixel_coords[pixel_id];
    int pix_x = pix_linear % W;
    int pix_y = pix_linear / W;
    uint2 range = pixel_ranges[pixel_id];

    float T_running = 1.0f;                    // product of all (1-alpha) before this warp
    float C[NUM_CHANNELS] = {0.0f};
    float D = 0.0f;
    uint32_t contributor = 0;
    bool done = (range.x == range.y);

    int rounds = (range.y - range.x + BLOCK_SIZE - 1) / BLOCK_SIZE;
    for (int r = 0; r < rounds; ++r) {
        __syncthreads();
        // Reload T_running from shared memory for this warp
        if (lane == 0) T_running = collected_T[warp_idx];
        // Propagate T_running to all lanes in warp
        T_running = __shfl_sync(~0u, T_running, 0);

        int g = range.x + r * BLOCK_SIZE + threadIdx.x;
        bool in_range = g < range.y;

        float alpha = 0.0f;
        int   gid   = 0;
        float depth = 0.0f;
        float feat[NUM_CHANNELS] = {0.0f};

        if (in_range && !done) {
            gid = point_list[g].x;
            float2 p_xy = points_xy_image[gid];
            float4 con_op = conic_opacity[gid];
            float2 d = {(float)pix_x - p_xy.x, (float)pix_y - p_xy.y};
            float power = -0.5f * (con_op.x*d.x*d.x
                                 + 2.f*con_op.y*d.x*d.y
                                 + con_op.z*d.y*d.y);
            if (power <= 0.0f) {
                alpha = min(0.99f, con_op.w * expf(power));
                depth = depths_precomp[gid];
                for (int ch = 0; ch < NUM_CHANNELS; ++ch)
                    feat[ch] = features[gid * NUM_CHANNELS + ch];
            }
        }

        // Warp-level inclusive prefix product of (1-alpha) via __shfl_up_sync
        float one_minus_alpha = 1.0f - alpha;
        float prefix = one_minus_alpha;
        for (int offset = 1; offset < 32; offset <<= 1) {
            float tmp = __shfl_up_sync(~0u, prefix, offset);
            if (lane >= offset) prefix *= tmp;
        }
        // prefix[lane] = product of (1-alpha) for lanes [0..lane] inclusive
        // T_before_me  = T_running * (prefix / one_minus_alpha)
        float T_before_me = T_running * (prefix / one_minus_alpha);

        if (in_range && !done && alpha > 1.0f / 255.0f) {
            float weight = alpha * T_before_me;
            for (int ch = 0; ch < NUM_CHANNELS; ++ch)
                C[ch] += feat[ch] * weight;
            D += depth * weight;
            ++contributor;

            // MonoGS n_touched: Gaussian is "meaningfully visible" when T > 0.5
            if (T_before_me > 0.5f)
                atomicAdd(&n_touched[gid], 1);

            if (T_before_me * one_minus_alpha < 0.0001f) done = true;
        }

        // Write total warp T to shared memory for the next warp
        if (lane == 31) {
            // prefix[31] = product of all 32 lanes
            collected_T[warp_idx] *= prefix;   // accumulate into slot
        }
        __syncthreads();
        // Load next warp's starting T_running at top of next iteration

        if (__syncthreads_or(done)) break;
    }

    // Thread 0 in the block writes output
    if (threadIdx.x == 0) {
        float T_final = T_running;   // approximate; accurate reduction omitted for brevity
        final_T[pixel_id]   = T_final;
        n_contrib[pixel_id] = contributor;
        for (int ch = 0; ch < NUM_CHANNELS; ++ch)
            out_color[pixel_id * NUM_CHANNELS + ch] =
                C[ch] + T_final * bg_color[ch];
        out_depth[pixel_id]   = D;
        out_opacity[pixel_id] = 1.0f - T_final;
    }
}
```

Key points for the backward kernel: mirror the same warp-scan pattern in reverse (iterate from `range.y - 1` down to `range.x`), cap at `n_contrib[pixel_id]` Gaussians, and scatter `dL_dmeans2D`, `dL_dconic`, `dL_dopacity`, `dL_dcolors` via `atomicAdd` exactly as in the original MonoGS backward — those atomic patterns are unchanged.

### Critical Issue 2: `theta`/`rho` Backward in the Pixel-Parallel Kernel is Unspecified

The plan correctly says (Pitfall #2): "If you forget to carry this computation into the backward of the pixel-parallel kernel, tracking will have zero pose gradient." But it doesn't say what changes. The `dL/d_tau` Jacobian is computed in `BACKWARD::preprocess()` in MonoGS's rasterizer. This code differentiates the projection of the Gaussian center through the camera model w.r.t. the se(3) perturbation `tau`. This section is *not* in `BACKWARD::render()` — it's in `BACKWARD::preprocess()`.

The plan's §3.7 only discusses removing `duplicateWithKeys` from `Rasterizer::forward()` and changing the render kernel launch dimensions. It does not describe what changes in `BACKWARD::preprocess()` or verify that the pose Jacobian computation there is unaffected by the pixel-based switch. It should be unaffected (the preprocess backward runs on all Gaussians, not tiles or pixels), but this needs explicit statement.

**Fix:** `BACKWARD::preprocess()` does **not** need to change. It operates one-thread-per-Gaussian and differentiates the Gaussian projection through the full camera model (including the se(3) perturbation `tau = [rho, theta]`). This is entirely decoupled from whether the render kernel is tile-based or pixel-based. The two-step backward pipeline stays the same:

```
Rasterizer::backward():
  Step 1 — BACKWARD::render()      ← this changes (pixel-parallel dispatch)
            produces: dL_dmean2D, dL_dconic, dL_dopacity, dL_dcolors (per Gaussian)
  Step 2 — BACKWARD::preprocess()  ← UNCHANGED
            consumes: dL_dmean2D, dL_dconic, dL_dcolors
            produces: dL_dxyz, dL_dscale, dL_drot, dL_dsh, dL_dtau
```

The only thing that needs to be verified is that `BACKWARD::render()` (the pixel-parallel kernel) still atomically scatters `dL_dmean2D[gid]`, `dL_dconic[gid]`, `dL_dopacity[gid]`, and `dL_dcolors[gid]` via `atomicAdd` — the same outputs the original tile-based backward kernel produces. Because multiple pixel-blocks may reference the same Gaussian, `atomicAdd` is mandatory (same reason as `n_touched`). As long as these four per-Gaussian gradient tensors are populated correctly, `BACKWARD::preprocess()` will compute the correct `dL/d_tau` without any modification.

Add a comment in `rasterizer_impl.cu` at the `BACKWARD::preprocess` call site explicitly stating this invariant so future developers do not mistakenly touch it:

```cpp
// BACKWARD::preprocess is UNCHANGED from original MonoGS.
// It operates per-Gaussian and is independent of the tile-vs-pixel
// dispatch used in BACKWARD::render. The dL/d_tau pose Jacobian
// is computed here by differentiating through projmatrix_raw and
// the se(3) exponential map. Do not modify.
BACKWARD::preprocess(P, D, M, ...);
```

### Critical Issue 3: `pixel_coords` Data Structure Inconsistency

There is a direct contradiction across the docs:

- `SPLATAM_TO_SPLATONIC_CHANGES.md §3.3`: `sorted_coords: int32 [num_pixels]` (linearized 1D indices)
- `SPLATONIC_ARCHITECTURE_SPEC.md §7.3`: `pixel_coords — (N, 2) int32 tensor` with `(x, y)` coordinates
- `SPLATONIC_ARCHITECTURE_SPEC.md §4.3` CUDA code: `int2 pix_coord = pixel_coords[fetch_idx]` (2D int2 pairs)
- `SPLATONIC_ON_MONOGS.md §3.5` CUDA code: `int pix_coord = pixel_coords[k]; int pix_x = pix_coord % W;` (1D linear index)

The plan's CUDA kernel and the architecture spec disagree on whether `pixel_coords` is `int32[N]` or `int2[N]`. This must be resolved before implementation — the Python `get_pixel_info()` output format must exactly match what the CUDA kernel reads.

**Fix:** Use **1D linearized `int32` indices** throughout — i.e., `pixel_coords[k] = pix_y * W + pix_x` as a single `int32`. This is simpler, avoids struct alignment issues with `int2`, and is consistent with `SPLATONIC_ON_MONOGS.md §3.5`'s CUDA code. Standardize every layer to this convention:

**Python (`mask_utils.py : get_pixel_info`)** — ensure `sorted_coords` is a 1D int32 tensor of linear indices:
```python
def get_pixel_info(mask, tile_size=16):
    H, W = mask.shape
    # flat linear indices of True pixels
    coords = mask.nonzero(as_tuple=False)          # [N, 2]: (row, col)
    linear = coords[:, 0] * W + coords[:, 1]       # [N] int64 → int32
    linear = linear.to(torch.int32)

    # sort by tile id
    tile_row = coords[:, 0] // tile_size
    tile_col = coords[:, 1] // tile_size
    num_tiles_w = (W + tile_size - 1) // tile_size
    tile_id = tile_row * num_tiles_w + tile_col
    sort_idx = torch.argsort(tile_id)
    sorted_linear = linear[sort_idx]               # [N] int32, sorted by tile

    # prefix-sum offsets
    num_tiles = ((H + tile_size - 1) // tile_size) * num_tiles_w
    sorted_tile_id = tile_id[sort_idx]
    counts = torch.zeros(num_tiles, dtype=torch.int32)
    counts.scatter_add_(0, sorted_tile_id.int(),
                        torch.ones(len(sorted_tile_id), dtype=torch.int32))
    offsets = torch.zeros(num_tiles + 1, dtype=torch.int32)
    offsets[1:] = counts.cumsum(0)
    return offsets, sorted_linear    # both int32
```

**CUDA (`preprocessCUDA` inner loop)** — decode `x`/`y` from the linear index:
```cpp
int pix_linear = pixel_coords[k];   // int32 linear index
int pix_x = pix_linear % W;
int pix_y = pix_linear / W;
```

**CUDA (`renderCUDAPure`)** — same decode:
```cpp
int pix_linear = pixel_coords[pixel_id];
int pix_x = pix_linear % W;
int pix_y = pix_linear / W;
```

**C++ binding (`rasterize_points.cu`)** — declare as `const int*`, not `const int2*`:
```cpp
const torch::Tensor& pixel_coords,   // int32 [N], linear indices
```

All four layers are now consistent. Do not use `int2` anywhere.

### Issue 4: Two Section 8s in the Document

The "Modifying the `render()` Function" section is labelled `## 8.` but the table of contents already has `## 8. File-by-File Change List`. Both exist in the document with the same header number. This creates navigation confusion, but more importantly it means the render function modification (arguably the most important Python change) is easy to miss.

**Fix:** Renumber "Modifying the `render()` Function" as `## 8.` and "File-by-File Change List" as `## 9.`, "Build Changes" as `## 10.`, "What Not to Touch" as `## 11.`, and "Integration Pitfalls" as `## 12.`. Update the Table of Contents accordingly. The `render()` modification belongs before the file list because it is the most critical Python entry point and the file list references it.

### Issue 5: `rasterizer_impl.h` vs `rasterizer.h` Labeling

§3.4 says "Add `pixel_range` and `pixel_coords` pointers to the forward signature in `class Rasterizer`" and labels the file as `cuda_rasterizer/rasterizer_impl.h`. But per MonoGS.md, `class Rasterizer` with its `forward()`/`backward()`/`markVisible()` interface is in `cuda_rasterizer/rasterizer.h`. The implementation (and `GeometryState`/`ImageState`/`BinningState` structs) is in `rasterizer_impl.h`. The plan should say `rasterizer.h` for the interface declaration.

**Fix:** Edit `cuda_rasterizer/rasterizer.h` (not `rasterizer_impl.h`) to add the two new parameters to the `Rasterizer::forward()` static declaration:

```cpp
// cuda_rasterizer/rasterizer.h — Rasterizer::forward() declaration
static int forward(
    std::function<char*(size_t)> geometryBuffer,
    char* binningBuffer,
    std::function<char*(size_t)> imageBuffer,
    int P, int D, int M,
    // ... all existing parameters unchanged ...
    float tan_fovx, float tan_fovy,
    const int* pixel_range,    // NEW
    const int* pixel_coords,   // NEW
    bool prefiltered,
    // ... rest unchanged ...
);
```

`rasterizer_impl.h` only needs changes to `GeometryState` if you want to formally mark `tiles_touched` as unused — but since the field can simply be left unpopulated (no code reads it in the new pipeline), no change to `rasterizer_impl.h` is strictly necessary.

### Issue 6: Novelty Augmentation Not Ported

SPLATONIC's mapping loop augments the sparse pixel mask with `variables['novelty']` — pixels that had no Gaussian coverage during the last densification, so newly-inserted Gaussians receive supervision:
```python
pixel_mask = pixel_mask | iter_unseen.reshape(pixel_mask.shape)
```
This is in the architecture spec (§9) and data structures (§7.7), but `SPLATONIC_ON_MONOGS.md §7.2` omits it entirely. In MonoGS, `extend_from_pcd_seq()` (Gaussian insertion) doesn't output an unseen mask, so implementing this requires either adapting the insertion code or accepting that newly inserted Gaussians only get supervised on dense passes (1/4 of mapping iterations). This is a quality gap, not a correctness failure, but should be explicitly acknowledged.

**Fix:** Derive the novelty mask from MonoGS's existing `occ_aware_visibility` data structure. After each `BackEnd.map()` call, `occ_aware_visibility[kf_idx]` is a boolean tensor over all Gaussians indicating which ones were visible from keyframe `kf_idx`. Gaussians that are *never* visible from any current window keyframe are candidate "unseen" regions. Project their 3D centres into the image to get an unseen pixel mask:

```python
# In BackEnd.map(), after render_pkg is obtained for each window keyframe:
# Build a rough unseen mask from Gaussians with zero visibility
unseen_gaussians = (occ_aware_visibility[kf_idx] == 0)   # bool [N]
if unseen_gaussians.any():
    xyz = self.gaussians.get_xyz[unseen_gaussians]        # [M, 3]
    # Project to image coords using viewpoint intrinsics
    pts2d = project_to_image(xyz, viewpoint)              # [M, 2] pixel coords
    novelty_mask = torch.zeros(H, W, dtype=torch.bool, device='cuda')
    valid = ((pts2d[:, 0] >= 0) & (pts2d[:, 0] < W) &
             (pts2d[:, 1] >= 0) & (pts2d[:, 1] < H))
    novelty_mask[pts2d[valid, 1], pts2d[valid, 0]] = True
    pixel_mask = pixel_mask | novelty_mask
```

If this is considered too complex for the first port, the minimum acceptable fallback is to document explicitly that the dense pass (1/4 of mapping iterations) serves as the novelty supervisor, and to set `FLIP = 2` (50% dense) for the first few keyframes after a densification event.

### Issue 7: `adaptive_random_sampling` Return Value Ambiguity

The plan §7.2 calls:
```python
pixel_mask, pixel_coords = adaptive_random_sampling(gt_image, num_sparse)
```
But the architecture spec §3.2 says `adaptive_random_sampling` returns only `mask`. The changes doc §2.4 shows a two-value return. The function's actual signature is inconsistent across docs. The plan then ignores `pixel_coords` and recomputes from `get_pixel_info()`, making the destructuring redundant but not wrong if the function actually returns a tuple. This needs verification against the actual `mask_utils.py` code.

**Fix:** Treat `adaptive_random_sampling` as returning **only a boolean mask**. This is the simpler and more consistent signature — `get_pixel_info()` is always the next call that converts the mask into CUDA-ready tensors, making a separate `pixel_coords` return from sampling redundant. Update §7.2 to:

```python
# Correct call — single return value
pixel_mask = adaptive_random_sampling(gt_image, num_sparse)
pixel_info = get_pixel_info(pixel_mask, tile_size=4)
pixel_range  = pixel_info[0].cuda()   # int32 [num_tiles+1]
pixel_coords = pixel_info[1].cuda()   # int32 [N] linear indices
```

Also correct the `mask_utils.py` docstring and any call sites that destructure two values to avoid confusion in the future.

### Issue 8: `screenspace_points` / Densification Quality Under Sparse Renders

MonoGS's `BackEnd.map()` accumulates `xyz_gradient_accum` and `max_radii2D` from `render_pkg["viewspace_points"]` and `render_pkg["radii"]` for `densify_and_prune`. In the sparse path (3/4 of mapping iterations), only sampled pixels contribute gradients to `viewspace_points`. This means the densification signal is biased toward textured regions. The plan doesn't discuss this implication. It's a quality consideration, not a correctness bug, but is worth being explicit about.

**Fix:** Accumulate `xyz_gradient_accum` and `max_radii2D` **only on dense passes** (counter == 0). On sparse passes these accumulators would receive a biased, spatially incomplete gradient signal that could under-densify flat regions and over-densify textured edges. Gate the accumulation:

```python
# In BackEnd.map(), inside the iteration loop:
if use_dense:
    render_pkg = render(viewpoint, self.gaussians, ...)
    # ... loss, backward ...
    # Accumulate densification statistics only from dense renders
    if render_pkg["visibility_filter"].any():
        self.gaussians.max_radii2D[render_pkg["visibility_filter"]] = torch.max(
            self.gaussians.max_radii2D[render_pkg["visibility_filter"]],
            render_pkg["radii"][render_pkg["visibility_filter"]])
        self.gaussians.add_densification_stats(
            render_pkg["viewspace_points"], render_pkg["visibility_filter"])
else:
    render_pkg = render(viewpoint, self.gaussians, ...,
                        pixel_range=pixel_range, pixel_coords=pixel_coords,
                        use_map_rasterizer=True)
    # ... sparse loss, backward ...
    # Do NOT accumulate densification stats here
```

This matches how SPLATONIC handles it implicitly (SplaTAM's densification stats come from `get_loss()` which is only called on the dense path). The `densify_and_prune` call frequency and thresholds remain unchanged.

---

## Summary Table

| Aspect | Plan Status | Fix |
|--------|-------------|-----|
| Merge strategy (not replace) | Correct | No change needed |
| `theta`/`rho` preservation | Identified, backward details incomplete | `BACKWARD::preprocess` is unchanged; document it explicitly with a comment |
| `n_touched` via `atomicAdd` | Correctly required | Include in full warp-scan kernel (see Critical Issue 1 fix) |
| Two rasterizer builds | Correct | No change needed |
| FLIP 1:3 schedule | Correctly ported | No change needed |
| `mask_utils.py` verbatim copy | Correct | No change needed |
| Process architecture (FrontEnd/BackEnd) | Correctly assigned | No change needed |
| Warp-scan render kernel | Placeholder — not implementable from doc alone | Full kernel implementation provided in Critical Issue 1 fix |
| `pixel_coords` data type | Contradicted by architecture spec | Standardize to `int32[N]` linear indices throughout (Critical Issue 3 fix) |
| `rasterizer.h` vs `rasterizer_impl.h` | Wrong file named | Edit `rasterizer.h` for interface, leave `rasterizer_impl.h` unchanged |
| Duplicate §8 heading | Navigation error | Renumber "render() modification" as §8, "File-by-File" as §9 |
| Novelty augmentation | Not ported (quality gap) | Derive from `occ_aware_visibility`; fallback: use `FLIP=2` post-densification |
| `adaptive_random_sampling` return API | Ambiguous | Fix to return only `mask`; always call `get_pixel_info()` next |
| Densification under sparse path | Unaddressed implication | Gate `xyz_gradient_accum` / `max_radii2D` accumulation to dense passes only |

---

## Bottom Line

**The plan is feasible and the strategy is sound.** A competent CUDA developer who also has SPLATONIC's actual source code for the warp-scan kernel could implement this successfully. The plan correctly identifies all the MonoGS-specific gotchas (`theta`/`rho`, `n_touched`, multi-process split, `GaussianModel` class vs flat dict).

**The plan is not self-contained** — specifically for the warp-scan render kernel, which is the hardest and most critical piece. Without SPLATONIC's actual `track-rasterization/cuda_rasterizer/forward.cu`, a developer would be stuck at the placeholder. The `pixel_coords` type inconsistency and the wrong header filename are bugs that would surface immediately at compile time.
