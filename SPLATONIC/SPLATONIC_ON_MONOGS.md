# Implementing SPLATONIC on MonoGS

_A developer implementation guide for porting the four SPLATONIC optimizations onto the MonoGS codebase. Assumes you have read `SPLATONIC_ARCHITECTURE_SPEC.md` and `MonoGS/MonoGS.md`. This document does not repeat algorithm explanations — it explains what to change, in which file, at which line, and what integration complications to expect._

**Contents:**
[1. Structural Differences](#1-structural-differences-monogs-vs-splatam) · [2. Integration Strategy](#2-integration-strategy) · [3. Rasterizer Changes](#3-rasterizer-changes-the-hardest-part) · [4. Sparse Pixel Sampling](#4-sparse-pixel-sampling) · [5. Loss Function Changes](#5-loss-function-changes) · [6. Tracking Loop Changes](#6-tracking-loop-changes) · [7. Mapping Loop Changes](#7-mapping-loop-changes) · [8. File-by-File Change List](#8-file-by-file-change-list) · [9. Build Changes](#9-build-changes) · [10. What Not to Touch](#10-what-not-to-touch)

---

## 1. Structural Differences: MonoGS vs SplaTAM

Before describing what to change, you need to understand where MonoGS differs from SplaTAM in the areas that SPLATONIC modifies. Porting SPLATONIC naively by copying SplaTAM changes will break MonoGS.

### 1.1 The Rasterizer API Divergence

This is the most important difference.

**SplaTAM rasterizer call:**
```python
Renderer(raster_settings)(means3D=..., means2D=..., colors_precomp=..., ...)
# Returns: (color, radii, depth)
# Backward: standard PyTorch autograd through projection matrix
```

**MonoGS rasterizer call** (`gaussian_splatting/gaussian_renderer/__init__.py:130`):
```python
rendered_image, radii, depth, opacity, n_touched = rasterizer(
    means3D=..., means2D=..., shs=...,
    theta=viewpoint_camera.cam_rot_delta,   # ← MonoGS exclusive
    rho=viewpoint_camera.cam_trans_delta,   # ← MonoGS exclusive
    ...)
# Returns: (color, radii, depth, opacity, n_touched)
# Backward: CUDA kernel computes dL/d_tau analytically (Lie algebra Jacobian)
```

MonoGS extends the rasterizer to accept `theta` (rotation delta, 3-vector in se(3)) and `rho` (translation delta) and computes the gradient w.r.t. the pose tangent vector entirely inside CUDA, bypassing PyTorch autograd for pose gradients. This analytic Jacobian is the core technical contribution of MonoGS.

**SPLATONIC's rasterizers do not have `theta`/`rho`** — they were built on SplaTAM which does not use Lie-algebra parameterization. You cannot drop SPLATONIC's CUDA binaries into MonoGS without losing the pose Jacobian, which would break tracking convergence.

### 1.2 Process Architecture

MonoGS splits into a `FrontEnd` process (tracking) and a `BackEnd` process (mapping), communicating via `mp.Queue`. SplaTAM is single-process. SPLATONIC changes belong in both halves of MonoGS.

### 1.3 Gaussian Representation

| | SplaTAM | MonoGS |
|--|---------|--------|
| Storage | flat dict of `nn.Parameter` | `GaussianModel` class with `_xyz`, `_opacity`, etc. |
| Render input | `rendervar` dict (passed via `**`) | `pc: GaussianModel` object (with `.get_xyz` etc.) |
| Opacity | raw logit (`logit_opacities`) | `get_opacity` applies `sigmoid` on read |
| Scale | log-space (`log_scales`) | `get_scaling` applies `exp` on read |

SPLATONIC's `get_sparse_loss()` builds a `rendervar` dict before calling the renderer. In MonoGS you do not build `rendervar` — the `render()` function extracts attributes directly from `GaussianModel`. The sparse pixel injection must happen differently.

### 1.4 Render Function Signature

MonoGS's `render()` in `gaussian_splatting/gaussian_renderer/__init__.py` does not accept `pixel_range`/`pixel_coords`. You must modify it to accept these optional arguments and forward them through to the CUDA extension.

### 1.5 `n_touched` Output

MonoGS's rasterizer already outputs `n_touched` (per-Gaussian integer touch count used for keyframe selection and SLAM pruning). SPLATONIC's rasterizers do not output `n_touched` — they were designed for SplaTAM which doesn't use it. If you lose `n_touched`, MonoGS's keyframe selection and pruning both break. You must ensure the ported rasterizer still produces this tensor.

---

## 2. Integration Strategy

Given the rasterizer API divergence, the recommended approach is:

**Merge the SPLATONIC pixel-based pipeline INTO MonoGS's rasterizer**, rather than replacing MonoGS's rasterizer with SPLATONIC's. This preserves `theta`/`rho` handling and `n_touched` output while adding the pixel-based pipeline, preemptive alpha checking, and Gaussian-parallel rendering.

The four SPLATONIC changes decompose cleanly:

| Design | What to change | Difficulty |
|--------|---------------|-----------|
| Adaptive sparse pixel sampling | Python only (`utils/slam_utils.py`, `utils/slam_frontend.py`, `utils/slam_backend.py`) | Low |
| Pixel-based rendering | CUDA: `forward.cu`, `rasterizer_impl.cu` + Python: `render()` signature | High |
| Gaussian-parallel rendering | CUDA: `forward.cu` render kernel only | Medium |
| Preemptive alpha checking | CUDA: `auxiliary.h`, `forward.cu` `preprocessCUDA` | Low |

Implement in this order: (4) then (3) then (2) then (1). The CUDA changes are the critical path; the Python changes are straightforward once the CUDA pipeline is correct.

---

## 3. Rasterizer Changes (The Hardest Part)

**All changes in this section go in `submodules/diff-gaussian-rasterization/`.**

You will create TWO new rasterizer builds — one for tracking, one for mapping — each in their own directory, exactly as SPLATONIC does with `track-rasterization/` and `map-rasterization/`. However, each must be extended beyond SPLATONIC's version to include MonoGS's `theta`/`rho` and `n_touched` features.

### 3.1 Create `track-rasterization/` from MonoGS's rasterizer

```bash
cp -r MonoGS/submodules/diff-gaussian-rasterization MonoGS/track-rasterization
cp -r MonoGS/submodules/diff-gaussian-rasterization MonoGS/map-rasterization
```

Then apply the SPLATONIC CUDA changes to each copy as described below.

### 3.2 `track-rasterization/cuda_rasterizer/config.h`

**Change `BLOCK_X` and `BLOCK_Y`** — their meaning changes from tile dimensions to per-pixel thread counts:

```cpp
// BEFORE (MonoGS default)
#define BLOCK_X 16
#define BLOCK_Y 16

// AFTER (SPLATONIC track rasterizer)
#define BLOCK_X 16
#define BLOCK_Y 16
// BLOCK_SIZE is now 16*16=256 threads per pixel (not per tile)
// The numeric values are the same; only the semantic meaning changes
// MAX_NUM_RENDERED sets the pre-allocated sort buffer size
#define MAX_NUM_RENDERED 4000000
```

For `map-rasterization/cuda_rasterizer/config.h`:
```cpp
#define BLOCK_X 4
#define BLOCK_Y 4
#define MAX_NUM_RENDERED 16000000
```

### 3.3 `cuda_rasterizer/auxiliary.h`

Add the preemptive alpha threshold constant. Place it near the top of the file, after the existing `#include` statements:

```cpp
// Minimum power threshold for Gaussian key emission.
// If power > this value, Gaussian contributes < 0.4% alpha → skip.
const float lowest_alpha_coeff = 5.54126354515842f;
```

### 3.4 `cuda_rasterizer/rasterizer_impl.h`

**Add `pixel_range` and `pixel_coords` pointers to the forward signature** in `class Rasterizer`:

```cpp
// In rasterizer.h, Rasterizer::forward() declaration
static int forward(
    std::function<char*(size_t)> geometryBuffer,
    char* binningBuffer,
    std::function<char*(size_t)> imageBuffer,
    int P, int D, int M,
    const float* background,
    int width, int height,
    const float* means3D,
    const float* shs,
    const float* colors_precomp,
    const float* opacities,
    const float* scales,
    const float scale_modifier,
    const float* rotations,
    const float* cov3D_precomp,
    const float* viewmatrix,
    const float* projmatrix,
    const float* projmatrix_raw,   // MonoGS addition — keep
    const float* campos,
    float tan_fovx, float tan_fovy,
    const int* pixel_range,         // NEW: prefix-sum offsets into pixel_coords
    const int* pixel_coords,        // NEW: sorted pixel linear indices per tile
    bool prefiltered,
    float* out_color,
    float* out_depth,
    float* out_opacity,             // MonoGS addition — keep
    int* radii,
    int* n_touched,                 // MonoGS addition — MUST KEEP
    int* num_rendered,
    const float* theta,             // MonoGS addition — MUST KEEP
    const float* rho);              // MonoGS addition — MUST KEEP
```

### 3.5 `cuda_rasterizer/forward.cu` — `preprocessCUDA`

This is the core change. Replace the tile-fan-out logic with fused pixel key generation.

**Find the section in `preprocessCUDA` that currently sets `tiles_touched[idx]`** and replaces it with this block:

```cpp
// REMOVE THIS (SplaTAM / original MonoGS):
//   tiles_touched[idx] = (rect_max.x - rect_min.x) * (rect_max.y - rect_min.y);

// ADD THIS (SPLATONIC pixel key generation):
// Iterate over tiles covered by this Gaussian.
// For each tile, iterate over sampled pixels in that tile (from pixel_range/pixel_coords).
// Emit a sort key (pixel_idx << 32 | depth_bits) per Gaussian-pixel pair.
for (int tile_y = rect_min.y; tile_y < rect_max.y; ++tile_y) {
    for (int tile_x = rect_min.x; tile_x < rect_max.x; ++tile_x) {
        int tile_id = tile_y * tile_grid.x + tile_x;
        int pstart = pixel_range[tile_id];
        int pend   = pixel_range[tile_id + 1];
        for (int k = pstart; k < pend; ++k) {
            int pix_coord = pixel_coords[k];
            int pix_x = pix_coord % W;
            int pix_y = pix_coord / W;

            // Evaluate Gaussian power at this pixel
            float2 pix_f = {(float)pix_x, (float)pix_y};
            float2 d = {pix_f.x - p_proj.x, pix_f.y - p_proj.y};
            float power = -0.5f * (conic.x * d.x * d.x
                                 + 2.0f * conic.y * d.x * d.y
                                 + conic.z * d.y * d.y);

            // Preemptive alpha check
            if (power > lowest_alpha_coeff) continue;

            // Emit sort key: upper 32 bits = pixel index, lower 32 = depth bits
            uint32_t depth_bits = *((uint32_t*)&depths[idx]);
            uint32_t pix_idx = (uint32_t)(pix_y * W + pix_x);
            uint64_t key = ((uint64_t)pix_idx << 32) | (uint64_t)depth_bits;
            int slot = atomicAdd(num_rendered_ptr, 1);
            if (slot >= MAX_NUM_RENDERED) break;   // safety guard
            gaussian_keys_unsorted[slot] = key;
            gaussian_values_unsorted[slot] = idx;  // Gaussian index
        }
    }
}
```

**Important:** The `pixel_range` and `pixel_coords` pointers must be added to `preprocessCUDA`'s parameter list. The function is called from `Rasterizer::forward()` in `rasterizer_impl.cu` — update the call site there too.

**Keep all existing `preprocessCUDA` logic** that is not the tile-fan-out: frustum culling, projection, covariance, SH evaluation, `projmatrix_raw` use for `campos` correction (MonoGS addition), `theta`/`rho` Jacobian storage (MonoGS addition). Only the key-emission block changes.

### 3.6 `cuda_rasterizer/forward.cu` — Render Kernel

**Replace `renderCUDA` (the existing per-tile kernel) with a pixel-parallel version.**

The existing kernel has signature:
```cpp
// ONE CUDA block per 16×16 tile; 256 threads each handle one pixel
__global__ void renderCUDA(...)
```

Replace with:
```cpp
// ONE CUDA block per sampled pixel; BLOCK_SIZE=256 (track) or 16 (map) threads on same pixel
__global__ void renderCUDA(
    const uint2* __restrict__ pixel_ranges,  // [num_pixels]: per-pixel Gaussian range
    const int*   __restrict__ pixel_coords,  // [num_pixels]: pixel linear index
    const int2*  __restrict__ point_list,    // sorted (gaussian_id) list
    int W, int H,
    const float2* __restrict__ points_xy_image,
    const float4* __restrict__ conic_opacity,
    float* __restrict__ final_T,
    uint32_t* __restrict__ n_contrib,
    int* __restrict__ n_touched,     // MonoGS: must still be updated
    const float* __restrict__ bg_color,
    float* __restrict__ out_color,
    float* __restrict__ out_depth,
    float* __restrict__ out_opacity,
    const float* __restrict__ features,
    const float* __restrict__ depths_precomp)
{
    int pixel_id = blockIdx.x;       // one block per sampled pixel
    if (pixel_id >= num_pixels) return;

    int pix_linear = pixel_coords[pixel_id];
    int pix_x = pix_linear % W;
    int pix_y = pix_linear / W;
    uint2 range = pixel_ranges[pixel_id];

    // Warp prefix-scan for transmittance accumulation
    float T = 1.0f;
    float C[NUM_CHANNELS] = {0.0f};
    float D = 0.0f;

    // All BLOCK_SIZE threads cooperate over the Gaussian range for this pixel
    for (int g = range.x + threadIdx.x; g < range.y; g += BLOCK_SIZE) {
        int gid = point_list[g].x;   // Gaussian index
        float2 p_xy = points_xy_image[gid];
        float4 con_op = conic_opacity[gid];
        float2 d = {(float)pix_x - p_xy.x, (float)pix_y - p_xy.y};
        float power = -0.5f * (con_op.x*d.x*d.x + 2.f*con_op.y*d.x*d.y + con_op.z*d.y*d.y);
        if (power > 0.0f) continue;
        float alpha = min(0.99f, con_op.w * expf(power));

        // Warp prefix-scan: each thread needs the running T at its position
        // Use __shfl_up_sync to propagate partial (1-alpha) products across threads
        // ... (see SPLATONIC track-rasterization/forward.cu for exact warp scan code)
        float my_T_factor = 1.0f - alpha;
        // ... warp scan gives T_before_me ...

        for (int ch = 0; ch < NUM_CHANNELS; ++ch)
            C[ch] += features[gid * NUM_CHANNELS + ch] * alpha * T_before_me * T;
        D += depths_precomp[gid] * alpha * T_before_me * T;

        // n_touched update (MonoGS requirement — preserve)
        if (T * T_before_me > 0.5f)
            atomicAdd(&n_touched[gid], 1);
    }

    // Reduce across threads in block and write output
    // ... block reduction then thread 0 writes out_color, out_depth, out_opacity
}
```

**Key requirement for MonoGS compatibility — preserve `n_touched` updates.** The original MonoGS render kernel increments `n_touched[gid]` when transmittance at that pixel exceeds 0.5. This visibility signal drives keyframe selection and SLAM pruning throughout MonoGS. The pixel-parallel kernel must replicate this increment with `atomicAdd`.

**For the warp prefix-scan implementation**, copy the exact `__shfl_up_sync` / `__shfl_down_sync` / `__syncthreads_or` code from SPLATONIC's `track-rasterization/cuda_rasterizer/forward.cu`. The warp math is the same regardless of MonoGS vs SplaTAM context.

### 3.7 `cuda_rasterizer/rasterizer_impl.cu` — Pipeline Orchestration

**Remove the `duplicateWithKeys` step** and the prefix-sum over `tiles_touched`.

Find the section in `Rasterizer::forward()` that does:
```cpp
// SplaTAM/MonoGS: count, prefix-sum, fan-out
CudaRasterizer::Rasterizer::forward(...) {
    // Step 1: preprocess
    FORWARD::preprocess(...);
    
    // Step 2: prefix-sum over tiles_touched  ← REMOVE THIS
    cub::DeviceScan::InclusiveSum(..., geomState.tiles_touched, ..., P);
    
    // Step 3: duplicate with keys  ← REMOVE THIS (now fused into preprocess)
    duplicateWithKeys<<<...>>>(P, ..., geomState.point_offsets, ...);
    
    // Step 4: sort
    cub::DeviceRadixSort::SortPairs(...);
    
    // Step 5: identify ranges
    identifyTileRanges<<<...>>>(num_rendered, ...);
    
    // Step 6: render
    FORWARD::render<<<(grid), block>>>(...);
}
```

**After modification:**
```cpp
CudaRasterizer::Rasterizer::forward(...,
    const int* pixel_range,    // NEW
    const int* pixel_coords,   // NEW
    ...) {
    
    // Step 1: preprocess (now fused with key generation)
    FORWARD::preprocess(..., pixel_range, pixel_coords, ...);
    
    // num_rendered is now set atomically inside preprocessCUDA
    // Retrieve it: cudaMemcpy(&num_rendered_host, num_rendered_dev, ...)
    
    // Step 2: sort (pixel-indexed keys instead of tile-indexed)
    cub::DeviceRadixSort::SortPairs(...);
    
    // Step 3: identify per-pixel ranges (same kernel, unchanged)
    identifyTileRanges<<<...>>>(num_rendered, ...);
    
    // Step 4: render (pixel-parallel)
    // grid = (num_sampled_pixels, 1, 1) NOT (tile_grid_x, tile_grid_y, 1)
    int num_pixels = /* total sampled pixels, derived from pixel_range */ ;
    FORWARD::render<<<num_pixels, block>>>(..., pixel_ranges, pixel_coords, ...);
}
```

**Change the render kernel launch dimensions:**
- Old: `dim3 grid((W + BLOCK_X - 1) / BLOCK_X, (H + BLOCK_Y - 1) / BLOCK_Y, 1)`
- New: `int num_pixels = ... ; /* launch */` `renderCUDA<<<num_pixels, BLOCK_SIZE>>>`

The grid is 1D over pixels (each block = one pixel), not 2D over tiles.

### 3.8 `rasterize_points.cu` — C++ Entry Functions

Add `pixel_range` and `pixel_coords` tensor arguments to both forward and backward entry points, and pass them through to the CUDA engine:

```cpp
// Forward (add after tan_fovy):
const torch::Tensor& pixel_range,   // NEW: int32 [num_tiles+1]
const torch::Tensor& pixel_coords,  // NEW: int32 [num_pixels]

// Inside RasterizeGaussiansCUDA, after the P!=0 check:
num_pixel = CudaRasterizer::Rasterizer::forward(
    ...,
    tan_fovx, tan_fovy,
    pixel_range.contiguous().data<int>(),   // NEW
    pixel_coords.contiguous().data<int>(),  // NEW
    ...);
```

```cpp
// Backward — pixel_coords needed for backward pixel iteration:
const torch::Tensor& pixel_coords,  // NEW
// Pass to Rasterizer::backward(...)
```

**Also add static buffer pre-allocation.** MonoGS allocates the binning buffer dynamically; SPLATONIC pre-allocates via `MAX_NUM_RENDERED`. Use the SPLATONIC approach to avoid `cudaMalloc` latency:

```cpp
// Replace dynamic binningBuffer sizing with:
torch::Tensor binningBuffer = torch::empty(
    {(signed long)getBinningBufferSize(MAX_NUM_RENDERED)},
    options.device(device));
```

### 3.9 `diff_gaussian_rasterization/__init__.py` — Python Autograd Bridge

Add `pixel_range` and `pixel_coords` to the `_RasterizeGaussians` forward/backward and to `GaussianRasterizer.forward()`:

```python
class _RasterizeGaussians(torch.autograd.Function):
    @staticmethod
    def forward(ctx, means3D, means2D, sh, colors_precomp, opacities,
                scales, rotations, cov3Ds_precomp,
                theta, rho,
                pixel_range, pixel_coords,  # NEW
                raster_settings):
        args = (
            raster_settings.bg,
            means3D, colors_precomp, opacities, scales, rotations,
            raster_settings.scale_modifier, cov3Ds_precomp,
            raster_settings.viewmatrix, raster_settings.projmatrix,
            raster_settings.projmatrix_raw,
            raster_settings.tanfovx, raster_settings.tanfovy,
            pixel_range, pixel_coords,  # NEW: passed before image dims
            raster_settings.image_height, raster_settings.image_width,
            sh, raster_settings.sh_degree, raster_settings.campos,
            raster_settings.prefiltered, raster_settings.debug,
        )
        num_rendered, color, radii, geomBuffer, binningBuffer, imgBuffer, \
            depth, opacity, n_touched = _C.rasterize_gaussians(*args)
        
        ctx.save_for_backward(colors_precomp, means3D, scales, rotations,
                              cov3Ds_precomp, radii, sh,
                              geomBuffer, binningBuffer, imgBuffer,
                              pixel_coords)  # NEW: save for backward
        ctx.num_rendered = num_rendered
        ctx.raster_settings = raster_settings
        return color, radii, depth, opacity, n_touched
    
    @staticmethod
    def backward(ctx, grad_color, grad_radii, grad_depth, grad_opacity, grad_n_touched):
        num_rendered = ctx.num_rendered
        raster_settings = ctx.raster_settings
        colors_precomp, means3D, scales, rotations, cov3Ds_precomp, radii, sh, \
            geomBuffer, binningBuffer, imgBuffer, pixel_coords = ctx.saved_tensors
        
        args = (raster_settings.bg, means3D, radii, colors_precomp, scales,
                rotations, raster_settings.scale_modifier, cov3Ds_precomp,
                raster_settings.viewmatrix, raster_settings.projmatrix,
                raster_settings.projmatrix_raw,
                raster_settings.tanfovx, raster_settings.tanfovy,
                pixel_coords,        # NEW
                grad_color, grad_depth, sh, raster_settings.sh_degree,
                raster_settings.campos, geomBuffer, num_rendered,
                binningBuffer, imgBuffer, raster_settings.debug)
        
        grad_means2D, grad_colors_precomp, grad_opacities, grad_means3D, \
            grad_cov3Ds_precomp, grad_sh, grad_scales, grad_rotations, grad_tau \
            = _C.rasterize_gaussians_backward(*args)
        
        # MonoGS pose Jacobian extraction (unchanged):
        grad_tau = torch.sum(grad_tau.view(-1, 6), dim=0)
        grad_rho   = grad_tau[:3].view(1, -1)
        grad_theta = grad_tau[3:].view(1, -1)
        
        return (grad_means3D, grad_means2D, grad_sh, grad_colors_precomp,
                grad_opacities, grad_scales, grad_rotations, grad_cov3Ds_precomp,
                grad_theta, grad_rho,
                None, None,  # pixel_range, pixel_coords — no grad
                None)        # raster_settings — no grad
```

### 3.10 Two Separate Builds

Both `track-rasterization/` and `map-rasterization/` must be installed as separate Python packages. The `setup.py` in each must use a **different package name** to avoid conflicts:

```python
# track-rasterization/setup.py
setup(
    name="track_rasterization",
    packages=find_packages(),
    package_dir={"track_rasterization": "diff_gaussian_rasterization"},
    ...
)

# map-rasterization/setup.py
setup(
    name="map_rasterization",
    packages=find_packages(),
    package_dir={"map_rasterization": "diff_gaussian_rasterization"},
    ...
)
```

Install both:
```bash
pip install -e MonoGS/track-rasterization/
pip install -e MonoGS/map-rasterization/
```

---

## 4. Sparse Pixel Sampling

These are pure Python additions with no MonoGS-specific complications.

### 4.1 Add `utils/mask_utils.py`

Copy `SPLATONIC/utils/mask_utils.py` verbatim into `MonoGS/utils/mask_utils.py`. The file has no SplaTAM-specific imports and works identically in MonoGS.

Contents (from SPLATONIC — no changes required):
- `compute_gradient_mag(image)` — Sobel gradient magnitude
- `adaptive_random_sampling(image, num_samples, epsilon=0.001)` — gradient-weighted CDF sampling for mapping
- `generate_random_mask(image_size, tile_size=16)` — uniform 1-per-tile mask for tracking
- `get_pixel_info(mask, tile_size=16)` — converts bool mask to `(offsets, sorted_coords)` tensors

**Note on gradient computation:** MonoGS already has `utils/slam_utils.py:image_gradient()` which uses Scharr filters (same as SPLATONIC's Sobel-based `compute_gradient_mag`). You may optionally replace `compute_gradient_mag` with a call to MonoGS's existing `image_gradient()` for code consolidation, but it is not required — both produce gradient magnitude images.

---

## 5. Loss Function Changes

### 5.1 Add `calc_ssim_shuffled_packed` to `gaussian_splatting/utils/loss_utils.py`

Append this function after the existing `l1_loss` and `ssim` implementations:

```python
def calc_ssim_shuffled_packed(img1, img2, mask, window_size=4, stride=4):
    """
    SSIM on a sparse set of pixels defined by a boolean mask.
    Pixels are extracted, shuffled, and packed into a synthetic 2D patch
    so that standard 2D SSIM can be applied without requiring spatial adjacency.
    """
    # Extract masked pixels: [3, N]
    pix1 = img1[:, mask]
    pix2 = img2[:, mask]
    N = pix1.shape[1]
    if N < 64:
        return l1_loss(pix1, pix2)   # fallback for very sparse masks
    
    # Shuffle (randomize spatial ordering)
    perm = torch.randperm(N, device=img1.device)
    pix1_shuffled = pix1[:, perm]
    pix2_shuffled = img2[:, mask][:, perm]
    
    # Concatenate original + shuffled: [3, 2N]
    combined1 = torch.cat([pix1, pix1_shuffled], dim=1)
    combined2 = torch.cat([pix2, pix2_shuffled], dim=1)
    
    # Reshape to synthetic 2D patch: [1, 3, 64, 2N/64]
    H_synth = 64
    W_synth = combined1.shape[1] // H_synth
    combined1 = combined1[:, :H_synth * W_synth].reshape(1, 3, H_synth, W_synth)
    combined2 = combined2[:, :H_synth * W_synth].reshape(1, 3, H_synth, W_synth)
    
    return ssim(combined1, combined2)
```

**Where to use it:** In `utils/slam_utils.py:get_loss_mapping_rgb()` and `get_loss_mapping_rgbd()` (see §7).

---

## 6. Tracking Loop Changes

**File:** `utils/slam_frontend.py`

### 6.1 Modify `FrontEnd.tracking()`

The tracking loop calls `render()` and then `get_loss_tracking()`. You need to inject a sparse pixel mask.

**Add imports at top of `slam_frontend.py`:**
```python
from utils.mask_utils import generate_random_mask, get_pixel_info
from track_rasterization import GaussianRasterizer as TrackRasterizer
```

**Inside `FrontEnd.tracking()`, before the tracking iteration loop:**
```python
# Generate sparse pixel mask once per frame (reused across all tracking iters)
H = viewpoint.image_height
W = viewpoint.image_width
pixel_mask, _, _ = generate_random_mask((H, W), tile_size=16)
pixel_info = get_pixel_info(pixel_mask, tile_size=16)
pixel_range = pixel_info[0].cuda()
pixel_coords = pixel_info[1].cuda()
```

**Modify the `render()` call inside the tracking loop:**
```python
# Replace:
render_pkg = render(viewpoint, self.gaussians, self.pipeline_params, self.background)

# With:
render_pkg = render(viewpoint, self.gaussians, self.pipeline_params, self.background,
                    pixel_range=pixel_range, pixel_coords=pixel_coords,
                    use_track_rasterizer=True)
```

**Modify `get_loss_tracking()` call to restrict loss to sampled pixels:**
```python
# Replace:
loss = get_loss_tracking(config, image, depth, opacity, viewpoint)

# With:
loss = get_loss_tracking_sparse(config, image, depth, opacity, viewpoint,
                                pixel_mask=pixel_mask)
```

### 6.2 Add `get_loss_tracking_sparse()` to `utils/slam_utils.py`

```python
def get_loss_tracking_sparse(config, image, depth, opacity, viewpoint, pixel_mask=None):
    """
    Tracking loss computed only at sampled pixels.
    Falls back to dense loss if pixel_mask is None.
    """
    if pixel_mask is None:
        return get_loss_tracking(config, image, depth, opacity, viewpoint)
    
    image_ab = torch.exp(viewpoint.exposure_a) * image + viewpoint.exposure_b
    gt_image = viewpoint.original_image.cuda()
    
    # Apply grad_mask intersection with pixel_mask
    combined_mask = pixel_mask & viewpoint.grad_mask[0]
    
    if config["Training"]["monocular"]:
        # RGB-only tracking loss at sampled pixels
        l1 = opacity[:, combined_mask] * torch.abs(
            image_ab[:, combined_mask] - gt_image[:, combined_mask])
        return l1.mean()
    else:
        # RGB-D tracking loss at sampled pixels
        alpha = config["Training"].get("alpha", 0.95)
        rgb_loss = torch.abs(image_ab[:, combined_mask] - gt_image[:, combined_mask]).mean()
        gt_depth = torch.from_numpy(viewpoint.depth).to(
            dtype=torch.float32, device=image.device)
        depth_mask = (gt_depth > 0) & combined_mask[0]
        depth_loss = torch.abs(depth[0, depth_mask] - gt_depth[depth_mask]).mean()
        return alpha * rgb_loss + (1.0 - alpha) * depth_loss
```

---

## 7. Mapping Loop Changes

**File:** `utils/slam_backend.py`

### 7.1 Add Imports

```python
from utils.mask_utils import adaptive_random_sampling, get_pixel_info
from map_rasterization import GaussianRasterizer as MapRasterizer
from gaussian_splatting.utils.loss_utils import calc_ssim_shuffled_packed
```

### 7.2 Modify `BackEnd.map()`

The mapping loop in `BackEnd.map()` currently does:
```python
for iteration in range(iters):
    viewpoint = keyframe_list[random_kf_idx]
    render_pkg = render(viewpoint, self.gaussians, ...)
    loss_mapping += get_loss_mapping(config, ...)
```

**Replace with FLIP-scheduled sparse/dense passes:**

```python
FLIP = 4   # 1 dense : 3 sparse ratio

for iteration in range(iters):
    viewpoint = keyframe_list[random_kf_idx]
    
    use_dense = (iteration % FLIP == 0)
    
    if use_dense:
        # Dense render — same as original MonoGS
        render_pkg = render(viewpoint, self.gaussians,
                           self.pipeline_params, self.background)
        image = render_pkg["render"]
        depth = render_pkg["depth"]
        opacity = render_pkg["opacity"]
        loss_mapping += get_loss_mapping(config, image, depth, opacity, viewpoint)
    else:
        # Sparse render — SPLATONIC path
        gt_image = viewpoint.original_image.cuda()
        num_sparse = compute_num_sparse_pixels(gt_image)  # e.g., H*W // 64
        
        pixel_mask, pixel_coords = adaptive_random_sampling(gt_image, num_sparse)
        pixel_info = get_pixel_info(pixel_mask, tile_size=4)
        pixel_range = pixel_info[0].cuda()
        pixel_coords_t = pixel_info[1].cuda()
        
        render_pkg = render(viewpoint, self.gaussians,
                           self.pipeline_params, self.background,
                           pixel_range=pixel_range,
                           pixel_coords=pixel_coords_t,
                           use_map_rasterizer=True)
        
        image = render_pkg["render"]
        depth = render_pkg["depth"]
        opacity = render_pkg["opacity"]
        loss_mapping += get_loss_mapping_sparse(config, image, depth, opacity,
                                               viewpoint, pixel_mask=pixel_mask)
    
    # Isotropic regularization — unchanged from MonoGS
    scaling = self.gaussians.get_scaling
    isotropic_loss = torch.abs(scaling - scaling.mean(dim=1, keepdim=True))
    loss_mapping += 10 * isotropic_loss.mean()
```

**Helper function:**
```python
def compute_num_sparse_pixels(image):
    H, W = image.shape[1], image.shape[2]
    return max(64, (H * W) // 64)   # ~1.6% of pixels
```

### 7.3 Add `get_loss_mapping_sparse()` to `utils/slam_utils.py`

```python
def get_loss_mapping_sparse(config, image, depth, opacity, viewpoint, pixel_mask=None):
    """
    Mapping loss at sparse pixels. Uses shuffled SSIM for photometric term.
    """
    if pixel_mask is None:
        return get_loss_mapping(config, image, depth, opacity, viewpoint)
    
    image_ab = torch.exp(viewpoint.exposure_a) * image + viewpoint.exposure_b
    gt_image = viewpoint.original_image.cuda()
    
    rgb_boundary_threshold = config["Training"]["rgb_boundary_threshold"]
    rgb_mask = (gt_image.sum(dim=0) > rgb_boundary_threshold).unsqueeze(0)
    valid_mask = pixel_mask & rgb_mask[0]
    
    # L1 loss at sparse pixels
    l1 = torch.abs(image_ab[:, valid_mask] - gt_image[:, valid_mask]).mean()
    
    # Shuffled SSIM on sparse pixels
    lambda_dssim = config["opt_params"].get("lambda_dssim", 0.2)
    ssim_val = calc_ssim_shuffled_packed(image_ab, gt_image, valid_mask)
    
    rgb_loss = (1.0 - lambda_dssim) * l1 + lambda_dssim * (1.0 - ssim_val)
    
    if config["Training"]["monocular"]:
        return rgb_loss
    
    # Depth loss at sparse pixels
    alpha = config["Training"].get("alpha", 0.95)
    gt_depth = torch.from_numpy(viewpoint.depth).to(
        dtype=torch.float32, device=image.device)
    depth_mask_2d = (gt_depth > 0) & valid_mask
    if depth_mask_2d.any():
        depth_loss = torch.abs(depth[0, depth_mask_2d] - gt_depth[depth_mask_2d]).mean()
    else:
        depth_loss = torch.tensor(0.0, device=image.device)
    
    return alpha * rgb_loss + (1.0 - alpha) * depth_loss
```

---

## 8. Modifying the `render()` Function

**File:** `gaussian_splatting/gaussian_renderer/__init__.py`

This is the Python-level render function that MonoGS calls from both FrontEnd and BackEnd. It must be modified to accept and forward the optional sparse pixel arguments, and to dispatch to the appropriate rasterizer.

```python
from track_rasterization import GaussianRasterizer as TrackRasterizer
from map_rasterization import GaussianRasterizer as MapRasterizer
from diff_gaussian_rasterization import GaussianRasterizer as DenseRasterizer

def render(viewpoint_camera, pc, pipe, bg_color, scaling_modifier=1.0,
           override_color=None, mask=None,
           pixel_range=None, pixel_coords=None,     # NEW
           use_track_rasterizer=False,               # NEW
           use_map_rasterizer=False):                # NEW
    
    # ... (existing screenspace_points, raster_settings setup unchanged) ...
    
    # Select rasterizer
    if use_track_rasterizer and pixel_range is not None:
        from track_rasterization import GaussianRasterizer
    elif use_map_rasterizer and pixel_range is not None:
        from map_rasterization import GaussianRasterizer
    else:
        from diff_gaussian_rasterization import GaussianRasterizer   # original dense
    
    rasterizer = GaussianRasterizer(raster_settings=raster_settings)
    
    # ... (existing means3D, scales, shs setup unchanged) ...
    
    # Render — pass pixel args when using sparse rasterizers
    if pixel_range is not None:
        rendered_image, radii, depth, opacity, n_touched = rasterizer(
            means3D=means3D, means2D=means2D, shs=shs, colors_precomp=colors_precomp,
            opacities=opacity, scales=scales, rotations=rotations,
            cov3D_precomp=cov3D_precomp,
            theta=viewpoint_camera.cam_rot_delta,
            rho=viewpoint_camera.cam_trans_delta,
            pixel_range=pixel_range,       # NEW
            pixel_coords=pixel_coords,     # NEW
        )
    else:
        # Original dense path — unchanged
        rendered_image, radii, depth, opacity, n_touched = rasterizer(
            means3D=means3D, means2D=means2D, shs=shs, colors_precomp=colors_precomp,
            opacities=opacity, scales=scales, rotations=rotations,
            cov3D_precomp=cov3D_precomp,
            theta=viewpoint_camera.cam_rot_delta,
            rho=viewpoint_camera.cam_trans_delta,
        )
    
    return {
        "render": rendered_image,
        "viewspace_points": screenspace_points,
        "visibility_filter": radii > 0,
        "radii": radii,
        "depth": depth,
        "opacity": opacity,
        "n_touched": n_touched,    # MonoGS requirement — always return
    }
```

**Important:** The `pixel_range`/`pixel_coords` kwargs must be added to the `GaussianRasterizer.forward()` method in each rasterizer's `__init__.py`. They are forwarded into `rasterize_gaussians()` which forwards them into `_RasterizeGaussians.apply()`. See §3.9 for the autograd bridge changes.

---

## 8. File-by-File Change List

| File | Action | Description |
|------|--------|-------------|
| `MonoGS/track-rasterization/` | **Create** (copy from MonoGS rasterizer) | Tracking rasterizer: 256 threads/pixel, 4M key buffer |
| `MonoGS/map-rasterization/` | **Create** (copy from MonoGS rasterizer) | Mapping rasterizer: 16 threads/pixel, 16M key buffer |
| `*/cuda_rasterizer/config.h` | **Modify** | Add `MAX_NUM_RENDERED`; change `BLOCK_X/Y` semantics |
| `*/cuda_rasterizer/auxiliary.h` | **Modify** | Add `lowest_alpha_coeff = 5.54126354515842f` |
| `*/cuda_rasterizer/forward.cu preprocessCUDA` | **Modify** | Replace tile-fan-out with fused pixel key gen + preemptive α cull |
| `*/cuda_rasterizer/forward.cu renderCUDA` | **Modify** | Replace per-tile kernel with per-pixel + warp prefix-scan |
| `*/cuda_rasterizer/backward.cu renderCUDA` | **Modify** | One-block-per-pixel; warp prefix-scan for backward T |
| `*/cuda_rasterizer/rasterizer_impl.cu` | **Modify** | Remove prefix-sum + `duplicateWithKeys`; pass pixel args; pixel-grid launch |
| `*/rasterize_points.cu` | **Modify** | Add `pixel_range`/`pixel_coords` args; static buffer |
| `*/diff_gaussian_rasterization/__init__.py` | **Modify** | Add `pixel_range`/`pixel_coords` through autograd bridge |
| `*/setup.py` | **Modify** | Use `track_rasterization` / `map_rasterization` as package name |
| `utils/mask_utils.py` | **Create** | Copy from SPLATONIC verbatim |
| `gaussian_splatting/utils/loss_utils.py` | **Modify** | Add `calc_ssim_shuffled_packed()` |
| `gaussian_splatting/gaussian_renderer/__init__.py` | **Modify** | Add `pixel_range`/`pixel_coords`/`use_track_rasterizer`/`use_map_rasterizer` args; dispatch to correct rasterizer |
| `utils/slam_utils.py` | **Modify** | Add `get_loss_tracking_sparse()` and `get_loss_mapping_sparse()` |
| `utils/slam_frontend.py` | **Modify** | Generate pixel mask before tracking loop; call sparse render/loss |
| `utils/slam_backend.py` | **Modify** | Add FLIP scheduling; call sparse render/loss for non-dense passes |

---

## 9. Build Changes

**Install order matters** — install MonoGS's original rasterizer first (it is also modified as the dense fallback), then the two new ones:

```bash
# From MonoGS root directory:

# 1. The original MonoGS dense rasterizer (already installed but may need rebuild)
pip install -e submodules/diff-gaussian-rasterization/

# 2. Track rasterizer (256 threads/pixel)
pip install -e track-rasterization/

# 3. Map rasterizer (16 threads/pixel)
pip install -e map-rasterization/
```

Each directory must have its own `setup.py` with a unique `name` field. The directory name must match the `package_dir` mapping so that `from track_rasterization import GaussianRasterizer` resolves correctly.

**Verify installation:**
```python
from diff_gaussian_rasterization import GaussianRasterizer   # dense
from track_rasterization import GaussianRasterizer           # track sparse
from map_rasterization import GaussianRasterizer             # map sparse
```

---

## 10. What Not to Touch

The following MonoGS components need no changes for SPLATONIC integration:

| Component | Reason |
|-----------|--------|
| `gaussian_splatting/scene/gaussian_model.py` | Gaussian parameters, Adam state surgery, densification/pruning — no rendering changes affect this |
| `utils/camera_utils.py` | `Camera` class, `cam_rot_delta`/`cam_trans_delta`, `SE3_exp` — SPLATONIC does not change camera parameterization |
| `utils/pose_utils.py` | `update_pose()`, `SE3_exp()`, `SO3_exp()` — Lie algebra math unchanged |
| `utils/keyframe_selection.py` / `FrontEnd.is_keyframe()` | Keyframe criteria use `n_touched` which is preserved by the ported rasterizer |
| `FrontEnd.add_to_window()` | Window management — unchanged |
| `BackEnd.map()` isotropic loss | `10 * mean(|s - mean(s)|)` — MonoGS-specific regularization, keep as-is |
| `utils/multiprocessing_utils.py` | Process utilities — unchanged |
| `utils/eval_utils.py` | Evaluation (ATE, PSNR/SSIM/LPIPS) — runs dense renders only, unchanged |
| `slam.py` | Process setup, queue creation, top-level SLAM class — unchanged |
| `gui/` | Visualisation — unchanged |
| `utils/dataset.py` | All dataset loaders — unchanged |
| `utils/config_utils.py` | YAML config loading — unchanged |
| YAML config files | No new config keys required; FLIP=4 and sparse pixel counts can be added if tuning is needed |

---

## 11. Integration Pitfalls

**1. Losing `n_touched` in the pixel-parallel kernel**

The pixel-parallel render kernel processes Gaussians across multiple threads in a single block. The `n_touched[gid]` increment must use `atomicAdd` because multiple pixel-blocks may reference the same Gaussian simultaneously. If you use a non-atomic write, `n_touched` values will be corrupted and MonoGS's keyframe selection and SLAM pruning will malfunction silently.

**2. `theta`/`rho` backward missing from pixel-parallel kernel**

MonoGS computes `dL/d_tau` (gradient w.r.t. se(3) pose tangent) inside the CUDA backward kernel. If you forget to carry this computation into the backward of the pixel-parallel kernel, tracking will have zero pose gradient and converge immediately without moving the camera. Check that `grad_tau` is accumulated in the backward kernel and returned through the C++ interface.

**3. Pixel mask alignment with tile grid**

`generate_random_mask()` generates one pixel per 16×16 tile. The `get_pixel_info()` function sorts pixels by tile index, matching the `BLOCK_X=16, BLOCK_Y=16` layout of the track rasterizer. If you use tile_size=16 for tracking but compile the track rasterizer with `BLOCK_X=4, BLOCK_Y=4`, the pixel ranges will not align with the CUDA block structure and you will get wrong outputs or out-of-bounds accesses. Match `tile_size` in `get_pixel_info()` to `BLOCK_X * BLOCK_Y` in the rasterizer's `config.h`.

**4. `MAX_NUM_RENDERED` overflow**

`preprocessCUDA` uses `atomicAdd` to claim sort key slots. If the number of emitted keys exceeds `MAX_NUM_RENDERED`, the atomic will overflow into garbage memory. Set `MAX_NUM_RENDERED` conservatively high (4M for tracking, 16M for mapping) and add a guard:
```cpp
int slot = atomicAdd(num_rendered_ptr, 1);
if (slot >= MAX_NUM_RENDERED) return;   // silently drop excess keys
```
In practice, with typical Gaussian counts and sparse pixel sets, 4M is sufficient for tracking; 16M covers dense mapping passes.

**5. The dense path must use the original MonoGS rasterizer**

The FLIP schedule runs 1/4 of mapping iterations as dense renders. These dense renders must use the original MonoGS rasterizer (`from diff_gaussian_rasterization import GaussianRasterizer`) because it accepts no `pixel_range`/`pixel_coords` args. The track/map rasterizers require non-None `pixel_range` — passing None will crash inside the CUDA kernel. The dispatch logic in `render()` (§8) handles this automatically via the `use_track_rasterizer`/`use_map_rasterizer` flags.

**6. Exposure correction must apply before sparse masking**

`get_loss_mapping_sparse()` must apply `exp(exposure_a) * image + exposure_b` to the rendered image before masking. If the mask is applied before exposure correction, the loss receives uncorrected pixel values and exposure parameters will not learn.
