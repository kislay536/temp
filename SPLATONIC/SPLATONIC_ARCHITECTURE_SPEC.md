# SPLATONIC — Developer Architecture Specification

> **Audience**: Developers who already understand SplaTAM and want to port SPLATONIC's optimizations to another 3DGS-SLAM system. This document only describes the implementation differences; it does not re-explain unmodified SplaTAM logic.

---

## Table of Contents

1. [Repository Layout and File Map](#1-repository-layout-and-file-map)
2. [Execution Entry Points](#2-execution-entry-points)
3. [Design 1 — Adaptive Sparse Pixel Sampling](#3-design-1--adaptive-sparse-pixel-sampling)
4. [Design 2 — Pixel-Based Rendering](#4-design-2--pixel-based-rendering)
5. [Design 3 — Gaussian-Parallel Rasterization](#5-design-3--gaussian-parallel-rasterization)
6. [Design 4 — Preemptive Alpha Checking](#6-design-4--preemptive-alpha-checking)
7. [New Data Structures](#7-new-data-structures)
8. [Loss Function Changes](#8-loss-function-changes)
9. [Mapping Iteration Scheduling](#9-mapping-iteration-scheduling)
10. [Tracking Data Flow](#10-tracking-data-flow)
11. [Mapping Data Flow](#11-mapping-data-flow)
12. [CUDA Kernel Reference](#12-cuda-kernel-reference)
13. [Module Summary Table](#13-module-summary-table)
14. [Porting Checklist](#14-porting-checklist)

---

## 1. Repository Layout and File Map

```
SPLATONIC/
├── scripts/
│   ├── splatam.py                    # Original SplaTAM baseline (UNCHANGED)
│   └── splatam_sparse.py             # SPLATONIC entry point (NEW)
│
├── utils/
│   ├── mask_utils.py                 # NEW — sparse pixel sampling logic
│   ├── loss_utils.py                 # NEW — sparse SSIM computation
│   ├── common_utils.py               # MODIFIED — adds ModuleTimer for profiling
│   └── (all other utils unchanged)
│
├── track-rasterization/              # NEW — pixel-based rasterizer for tracking
│   ├── cuda_rasterizer/
│   │   ├── config.h                  # BLOCK_X=16, BLOCK_Y=16, MAX_NUM_RENDERED=4M
│   │   ├── auxiliary.h               # shared constants and math helpers
│   │   ├── forward.cu                # preprocessCUDA + renderCUDAPure
│   │   ├── backward.cu               # renderCUDA backward
│   │   └── rasterizer_impl.cu        # Rasterizer::forward / backward orchestration
│   └── rasterize_points.cu           # PyTorch extension binding
│
├── map-rasterization/                # NEW — pixel-based rasterizer for mapping
│   ├── cuda_rasterizer/
│   │   ├── config.h                  # BLOCK_X=4, BLOCK_Y=4, MAX_NUM_RENDERED=16M
│   │   ├── auxiliary.h               # same constants
│   │   ├── forward.cu                # preprocessCUDA + renderCUDA (lighter kernel)
│   │   ├── backward.cu               # renderCUDA backward
│   │   └── rasterizer_impl.cu        # orchestration
│   └── rasterize_points.cu           # PyTorch extension binding
│
└── diff-gaussian-rasterization-w-depth/  # Original tile-based rasterizer (UNCHANGED)
                                          # Still used for densification silhouette renders
```

### What is completely unchanged

- All dataset loaders (`datasets/`)
- All SLAM helpers (`utils/slam_helpers.py`, `utils/slam_external.py`)
- Gaussian parameterization: `means3D`, `rgb_colors`, `unnorm_rotations`, `logit_opacities`, `log_scales`, `cam_unnorm_rots`, `cam_trans`
- Pose optimization logic, optimizer setup, keyframe selection, densification, pruning
- `add_new_gaussians()`, `initialize_params()`, `initialize_camera_pose()`
- The original `splatam.py` is kept intact as a reference baseline

---

## 2. Execution Entry Points

| Script | Rasterizer | Pixel strategy |
|---|---|---|
| `scripts/splatam.py` | `diff_gaussian_rasterization` (tile-based) | full image every iteration |
| `scripts/splatam_sparse.py` | `track_rasterization` / `map_rasterization` | sparse pixel mask |

**Import difference** (`splatam_sparse.py:40-42`):

```python
# splatam.py
from diff_gaussian_rasterization import GaussianRasterizer as Renderer

# splatam_sparse.py
from diff_gaussian_rasterization import GaussianRasterizer as Renderer   # still used for densification
from track_rasterization import GaussianRasterizer as TrackRenderer
from map_rasterization import GaussianRasterizer as MapRenderer
```

The original `Renderer` is kept for the `add_new_gaussians()` call (full silhouette render needed for densification). Everything else switches to `TrackRenderer` or `MapRenderer`.

---

## 3. Design 1 — Adaptive Sparse Pixel Sampling

**File**: `utils/mask_utils.py`

### 3.1 Tracking: Uniform Random Tile Sampling

**Function**: `generate_random_mask()` — `mask_utils.py:95`

```python
def generate_random_mask(image_size, tile_size=16, device="cuda") -> (mask, offsets, sorted_coords):
```

**Algorithm**:
1. Partition the image into non-overlapping `tile_size × tile_size` tiles (default 16×16 for tracking).
2. Within each tile, pick one uniformly random pixel (independent per tile).
3. Return a boolean mask `(H, W)`, an `offsets` prefix-sum array, and `sorted_coords` (pixel (x,y) sorted by tile index).

**Scale**: For a 480×640 image with tile_size=16:
- Number of tiles = 30 × 40 = 1,200
- Total sampled pixels = 1,200 (out of 307,200) ≈ **256× reduction**

**Call site** (`splatam_sparse.py:880`):
```python
image_shape = color.shape[1:3]
pixel_mask, pixel_range, pixel_coords = generate_random_mask(image_shape, tile_size=16, device='cuda')
```

The mask is generated **once per frame** before the tracking optimization loop, and the **same mask is reused for all tracking iterations** of that frame. Regenerating per-iteration would be more aggressive but the code holds it fixed.

### 3.2 Mapping: Adaptive Texture-Based Sampling

**Function**: `adaptive_random_sampling()` — `mask_utils.py:47`

```python
def adaptive_random_sampling(image, num_samples, epsilon=0.001, sobel_kernel_size=3) -> mask:
```

**Algorithm**:
1. Compute Sobel gradient magnitude map `G` from the color image (converts RGB to luminance first).
2. Normalize `G` to `[0,1]`, add `epsilon` to ensure non-zero probability everywhere.
3. Build a CDF from the flattened probability map.
4. Sample `num_samples` pixel indices using inverse CDF (`torch.searchsorted`).
5. Return a boolean mask `(H, W)`.

**Effect**: High-texture regions (edges, fine detail) are sampled with proportionally higher probability. Flat uniform regions are sampled rarely but not excluded (epsilon prevents this).

**Call site** (`splatam_sparse.py:1062-1063`):
```python
num_samples = (iter_color.shape[1] // 4) * (iter_color.shape[2] // 4)
pixel_mask = adaptive_random_sampling(iter_color, num_samples)
```

`num_samples = (H/4) × (W/4)` = 1/16 of total pixels. For 480×640: 120×160 = 19,200 pixels.

### 3.3 Mask-to-CUDA Data Structure Conversion

**Function**: `get_pixel_info()` — `mask_utils.py:123`

```python
def get_pixel_info(mask, tile_size=16) -> (offsets: int32, sorted_coords: int32):
```

This converts a boolean mask into the two arrays consumed by the CUDA rasterizer:

**`offsets`** — shape `(num_tiles + 1,)`, dtype `int32`
- `offsets[tile_id]` = start index in `sorted_coords` for tile `tile_id`
- `offsets[tile_id+1] - offsets[tile_id]` = number of sampled pixels in that tile
- Computed as a prefix sum over per-tile pixel counts

**`sorted_coords`** — shape `(N, 2)`, dtype `int32`, layout `(x, y)`
- The (x, y) coordinates of all `N` sampled pixels, sorted so pixels in the same tile are contiguous
- Sorting key: `tile_row * num_tiles_w + tile_col`

**Call site** (`splatam_sparse.py:253-255`):
```python
if tracking:
    pixel_range, pixel_coords = get_pixel_info(pixel_mask)           # tile_size=16
elif mapping:
    pixel_range, pixel_coords = get_pixel_info(pixel_mask, tile_size=4)  # tile_size=4
```

The `tile_size` here must match the `BLOCK_X × BLOCK_Y` of the corresponding rasterizer:
- Tracking: `get_pixel_info(..., tile_size=16)` → `track-rasterization` with `BLOCK_X=16, BLOCK_Y=16`
- Mapping: `get_pixel_info(..., tile_size=4)` → `map-rasterization` with `BLOCK_X=4, BLOCK_Y=4`

**Why tile-sorted**: The preprocessing CUDA kernel looks up pixels by their tile ID (`pixel_range[tile_id]`). Pixels within the same tile must be contiguous in `sorted_coords` for this lookup to work.

---

## 4. Design 2 — Pixel-Based Rendering

### 4.1 Original Tile-Based Pipeline (SplaTAM)

```
All P Gaussians
    └─ preprocessCUDA: project, compute 2D cov, compute SH color
    └─ duplicateWithKeys: for each Gaussian, emit (tile_id | depth, gaussian_id) for every tile it covers
    └─ Sort by key (CUB radix sort)
    └─ identifyTileRanges: mark per-tile start/end in sorted list
    └─ renderCUDA: 1 block = 1 tile, 1 thread = 1 pixel, iterate all Gaussians in tile
```

### 4.2 SPLATONIC Pixel-Based Pipeline

```
All P Gaussians + N sampled pixels
    └─ preprocessCUDA (MODIFIED):
           project + compute 2D cov + compute SH color (same as before)
           + for each tile in the Gaussian's bounding rect:
               look up sampled pixels in that tile via pixel_range[tile_id]
               for each sampled pixel, compute power = log_opacity - 0.5*(conic ⋅ d²)
               if power > -5.54 (above alpha threshold): emit (pixel_idx | depth, gaussian_id+power)
    └─ Sort by key (CUB radix sort)  ← now keyed by pixel_idx, not tile_id
    └─ identifyTileRanges (reused): now marks per-PIXEL start/end (pixel takes the role of tile)
    └─ renderCUDAPure / renderCUDA: 1 block = 1 PIXEL, BLOCK_SIZE threads cooperate
```

The `duplicateWithKeys` kernel is **eliminated**. Key generation is fused into `preprocessCUDA`.

### 4.3 Key Generation in preprocessCUDA

The critical section in `track-rasterization/cuda_rasterizer/forward.cu:284-351`:

```cuda
// After projecting a Gaussian and computing its tile bounding rect:
for(int j = 0; j < rect_info.w; j += 32) {     // iterate over tiles in bounding rect
    int tile_id = y * grid.x + x;
    pixel_idx_start = pixel_range[tile_id];
    pixel_num = pixel_range[tile_id+1] - pixel_idx_start;  // pixels in this tile

    while(__ballot_sync(~0, pixel_num > 0)) {   // iterate over sampled pixels in tile
        fetch_idx = pixel_idx_start + pixel_num - 1;
        int2 pix_coord = pixel_coords[fetch_idx];
        float power = -0.5f*(conic.x*d.x*d.x + conic.z*d.y*d.y) - conic.y*d.x*d.y;
        power = log_opacity + power;             // total log-space blending weight

        int valid = power > -5.54126354516f;     // alpha threshold (preemptive culling)

        if (valid) {
            // key = pixel_idx | depth_bits (upper 32 bits = pixel_idx)
            uint64_t key = fetch_idx;
            key <<= 32;
            key |= depth_bits;
            gaussian_keys_unsorted[offset]   = key;
            gaussian_values_unsorted[offset] = {gaussian_id, power_as_int};
        }
        pixel_num--;
    }
}
```

Sorting this by key gives a list where all (Gaussian, pixel) pairs for one pixel are contiguous, sorted front-to-back by depth. The render kernel then dispatches one CUDA block per pixel to read its range.

### 4.4 rendervar Changes

`pixel_range` and `pixel_coords` are added to the `rendervar` dict before calling the renderer (`splatam_sparse.py:263-266`):

```python
rendervar['pixel_range'] = pixel_range
rendervar['pixel_coords'] = pixel_coords
depth_sil_rendervar['pixel_range'] = pixel_range
depth_sil_rendervar['pixel_coords'] = pixel_coords
```

The Python-side `GaussianRasterizer.__call__()` in the extension passes these to the CUDA forward function signature:

```c
// rasterize_points.cu forward signature (track and map versions)
RasterizeGaussiansCUDA(
    ...,
    const torch::Tensor& pixel_range,   // NEW
    const torch::Tensor& pixel_coords,  // NEW
    ...)
```

---

## 5. Design 3 — Gaussian-Parallel Rasterization

### 5.1 Launch Configuration

The render kernel is launched as:

```cuda
// rasterizer_impl.cu:400-415
FORWARD::render(
    num_pixel_h,   // number of CUDA blocks = number of sampled pixels
    block,         // dim3(BLOCK_X, BLOCK_Y, 1) threads per block = BLOCK_SIZE threads per pixel
    ...)
```

- **One block per sampled pixel** (block index = pixel index in sorted_coords)
- **BLOCK_SIZE threads per block** cooperate to process that pixel's Gaussian list

### 5.2 Thread Configuration per Mode

| Mode | BLOCK_X | BLOCK_Y | BLOCK_SIZE | NUM_WARPS | Threads/pixel |
|---|---|---|---|---|---|
| Tracking (`track-rasterization`) | 16 | 16 | 256 | 8 | 256 |
| Mapping (`map-rasterization`) | 4 | 4 | 16 | 0* | 16 |

\* NUM_WARPS = BLOCK_SIZE/32 = 0 for mapping; the mapping kernel runs in single-partial-warp mode where warp_idx=0 for all 16 threads, and the inter-warp reduction branch (`warp_idx == NUM_WARPS-1`) never fires.

### 5.3 Forward Render Kernel — Warp-Level T Accumulation

The render kernel (`renderCUDAPure` for tracking, `renderCUDA` for mapping) processes Gaussians in batches of `BLOCK_SIZE`:

```cuda
for (int i = 0; i < rounds; i++) {
    // Each thread fetches one Gaussian from the sorted list
    int coll_id = point_list[range.x + progress].x;
    float alpha = min(0.99f, exp(power));          // alpha for this Gaussian

    // Warp-level prefix scan to compute per-thread T (transmittance before this Gaussian)
    cur_T = 1 - alpha;
    for (int offset = 1; offset < 32; offset *= 2) {
        float tmp = __shfl_up_sync(~0, cur_T, offset);
        if (lane >= offset) cur_T *= tmp;          // prefix product within warp
    }
    T = collected_T[warp_idx];                     // T from previous warps
    cur_T *= T;                                    // full prefix transmittance
    T = cur_T * (1 - alpha);                       // T after this Gaussian

    // Color blending
    C[ch] += features[coll_id * C + ch] * cur_T * alpha;

    // Preemptive alpha check
    done = !in_range || T < 0.0001f;
    if (__syncthreads_or(done)) break;
}
```

This prefix-scan replaces the sequential `T *= (1-alpha)` loop of the original per-pixel, single-thread rasterizer. All `BLOCK_SIZE` threads process different Gaussians simultaneously, then combine results.

### 5.4 Backward Render Kernel

The backward kernel (`renderCUDA` in `backward.cu`) runs the same one-block-per-pixel dispatch. It traverses Gaussians in reverse (from `range.y - 1` down to `range.x`), accumulating gradients with the same warp-level scan idiom for `T`. Atomic adds propagate gradients to per-Gaussian buffers (`dL_dmean2D`, `dL_dconic2D`, `dL_dopacity`, `dL_dcolors`).

---

## 6. Design 4 — Preemptive Alpha Checking

Alpha culling appears at two separate stages:

### 6.1 During Key Generation (Preprocessing)

In `preprocessCUDA` (`forward.cu:329`):

```cuda
float power = -0.5f*(conic_o.x*d.x*d.x + conic_o.z*d.y*d.y) - conic_o.y*d.x*d.y;
power = log_opacity + power;   // total log-space contribution
int valid = power > -5.54126354516f;   // equivalent to alpha > exp(-5.54) ≈ 0.004
```

`lowest_alpha_coeff = 5.54126354515842` is defined in `auxiliary.h:41`. Gaussians whose combined log-opacity at a sampled pixel falls below this threshold are **not added to the sorted list at all**. This eliminates them from consideration without any sorting overhead.

### 6.2 During Rendering (Transmittance Saturation)

In the forward render kernel:

```cuda
done = !in_range || T < 0.0001f;
if (__syncthreads_or(done)) break;
```

When accumulated transmittance `T` drops below `0.0001` (pixel is 99.99% opaque), the entire block exits the Gaussian loop early. `__syncthreads_or` ensures cooperative exit — if any thread is done, all threads in the block break.

### 6.3 During Backward (n_contrib Limit)

In the backward kernel (`backward.cu:431`):

```cuda
range.y = range.x + n_contrib[pix_id];
```

The backward pass only iterates up to `n_contrib[pix_id]` Gaussians — exactly how many the forward pass consumed before hitting the `T < 0.0001` condition. Gaussians beyond this point have zero gradient contribution, so skipping them is mathematically exact.

---

## 7. New Data Structures

### 7.1 pixel_mask — `(H, W)` bool tensor

- Generated once per tracking frame or once per mapping iteration
- `True` at selected pixel positions, `False` everywhere else
- Used to intersect with the depth/silhouette validity mask before loss computation

### 7.2 pixel_range — `(num_tiles + 1,)` int32 tensor

- Prefix-sum array: `pixel_range[t]` = start index of tile `t` in `pixel_coords`
- The final entry `pixel_range[num_tiles]` = total number of sampled pixels N
- The CUDA kernel reads this to find which sampled pixels belong to a tile

### 7.3 pixel_coords — `(N, 2)` int32 tensor

- (x, y) coordinates of N sampled pixels, sorted by tile index
- Pixels in the same tile are contiguous
- The preprocessing kernel indexes into this to find the (x, y) of each sampled pixel

### 7.4 gaussian_keys_unsorted / gaussian_values_unsorted — CUDA device buffers

- Keys: `uint64_t` — upper 32 bits = pixel index in sorted_coords, lower 32 bits = depth as float bits
- Values: `int2` — `.x` = Gaussian index, `.y` = power (log-alpha) as `int` via `__float_as_int`
- These replace the tile-based `(tile_id | depth, gaussian_id)` pairs used in the original rasterizer
- Sorted by CUB `DeviceRadixSort::SortPairs` → result is `point_list` (sorted by pixel then depth)

### 7.5 ranges — `(N,)` uint2 tensor

- `ranges[pixel_idx].x` = start, `ranges[pixel_idx].y` = end of this pixel's Gaussians in `point_list`
- Produced by `identifyTileRanges` (same kernel as original, now operating over pixel indices instead of tile indices)

### 7.6 n_contrib — `(H * W,)` uint32 tensor

- Stores how many Gaussians actually contributed to each pixel before early termination
- Indexed by flat pixel id `W * pix.y + pix.x`
- Used in backward to limit reverse traversal

### 7.7 novelty — `(H * W,)` bool tensor

- `variables['novelty']` set by `add_new_gaussians()` — marks pixels that had no Gaussian coverage
- For sparse mapping: `pixel_mask = pixel_mask | iter_unseen.reshape(pixel_mask.shape)` ensures newly-visible regions are always included in the sparse sample
- Stored per keyframe as `keyframe_list[i]['novelty']` — `splatam_sparse.py:1147`

---

## 8. Loss Function Changes

### 8.1 Tracking Loss

`get_sparse_loss()` vs `get_loss()` (`splatam_sparse.py:217` vs `386`):

**Pixel mask intersection** (tracking, `splatam_sparse.py:301-302`):
```python
if pixel_mask is not None:
    mask = mask & pixel_mask
```

The depth and RGB losses are already computed as masked reductions (`.sum()` over boolean mask), so applying `pixel_mask` here simply restricts the loss to sampled pixels. The loss value is a sum (not mean) for tracking — this preserves gradient magnitude scaling.

**No other change**: gradient computation, optimizer, and pose update are identical to the baseline.

### 8.2 Mapping Loss — Sparse Image Loss

For mapping with sparse pixels (`splatam_sparse.py:322-325`):

```python
color_mask = torch.tile(pixel_mask, (3, 1, 1))
losses['im'] = (0.8 * l1_loss_v1(im[color_mask], curr_data['im'][color_mask])
              + 0.2 * (1.0 - calc_ssim_shuffled_packed(im, curr_data['im'], pixel_mask)))
```

Standard SSIM cannot be computed on a non-contiguous set of pixels (it requires a 2D spatial neighborhood). SPLATONIC introduces `calc_ssim_shuffled_packed()` (`loss_utils.py:69`):

**Algorithm**:
1. Extract `N` selected pixel coordinates from `mask.nonzero()`.
2. Randomly shuffle the `N` indices, then concatenate original + shuffled → `2N` rows.
3. Crop to `patch_height × patch_width` (hardcoded `patch_height=64`).
4. Gather pixel values at those flat indices from both images.
5. Reshape to `(C, 64, patch_width)` synthetic image patches.
6. Compute standard SSIM on these synthetic patches.

This gives a meaningful structural similarity score on sparse pixels by packing them into a contiguous synthetic image before convolving the Gaussian SSIM window.

### 8.3 Full Dense Render Still Used in Mapping

The first iteration of each keyframe's mapping cycle uses the original dense `Renderer` (not the sparse one):

```python
if counter == 0:
    loss = get_loss(params, iter_data, ...)   # full dense Renderer
else:
    loss = get_sparse_loss(params, iter_data, ..., pixel_mask=pixel_mask)  # sparse MapRenderer
```

This ensures at least one full-resolution gradient signal per keyframe per mapping round.

---

## 9. Mapping Iteration Scheduling

**FLIP constant** (`splatam_sparse.py:822`): `FLIP = 4`

For each mapping iteration, a keyframe is selected and its `counter` is checked:

| Source | counter value | Renderer | Loss function |
|---|---|---|---|
| Current frame | 0 (hardcoded) | Dense `Renderer` | `get_loss()` full |
| Keyframe | 0 (every FLIP-th call) | Dense `Renderer` | `get_loss()` full |
| Keyframe | 1, 2, 3 | Sparse `MapRenderer` | `get_sparse_loss()` with adaptive mask |

The counter increments mod FLIP each time a keyframe is selected: `counter = (counter + 1) % FLIP`. Effect: each keyframe gets a full dense render 1/4 of the time and a sparse render 3/4 of the time.

**Novelty augmentation** (`splatam_sparse.py:1065-1066`):
```python
if iter_unseen is not None:
    pixel_mask = pixel_mask | iter_unseen.reshape(pixel_mask.shape)
```

Pixels marked as unseen (no Gaussian coverage) from the current mapping round are always added to the sparse sample, regardless of gradient magnitude. This ensures newly added Gaussians receive supervision.

---

## 10. Tracking Data Flow

```
Frame t arrives
  │
  ├─ generate_random_mask(image_shape, tile_size=16)
  │     → pixel_mask (H×W bool), pixel_range (num_tiles+1,), pixel_coords (N,2)
  │
  └─ for iter in range(num_iters_tracking):
        │
        ├─ transform_to_frame(params, t, gaussians_grad=False, camera_grad=True)
        │
        ├─ transformed_params2rendervar(...)
        │     rendervar['pixel_range'] = pixel_range
        │     rendervar['pixel_coords'] = pixel_coords
        │
        ├─ TrackRenderer(**rendervar)
        │     → CUDA: preprocessCUDA (project + key generation over N pixels)
        │     → CUB radix sort by (pixel_idx | depth)
        │     → renderCUDAPure (256 threads per pixel, warp-scan T accumulation)
        │     → returns sparse (H×W) color and depth images
        │
        ├─ loss = |rendered_color - gt_color|[pixel_mask & depth_mask].sum()
        │       + |rendered_depth - gt_depth|[pixel_mask & depth_mask].sum()
        │
        ├─ loss.backward()
        │     → CUDA: renderCUDA backward (pixel-based, warp-scan gradients)
        │     → gradients flow to camera_pose parameters only
        │
        └─ optimizer.step()  (pose only)
```

---

## 11. Mapping Data Flow

```
Mapping trigger (every map_every frames)
  │
  ├─ add_new_gaussians() using full Renderer (unchanged)
  │     → variables['novelty'] = non_presence_mask (bool H×W)
  │
  └─ for iter in range(num_iters_mapping):
        │
        ├─ select keyframe (random from window)
        │
        ├─ if counter == 0 (full render):
        │     get_loss(... Renderer ...) → dense gradient
        │
        └─ else (sparse render):
              adaptive_random_sampling(iter_color, num_samples=(H//4)*(W//4))
              │     → pixel_mask (H×W, texture-weighted)
              │
              pixel_mask |= iter_unseen (novelty regions always included)
              │
              get_pixel_info(pixel_mask, tile_size=4)
              │     → pixel_range (num_tiles+1,), pixel_coords (N,2)
              │
              MapRenderer(**rendervar with pixel_range, pixel_coords)
              │     → CUDA: preprocessCUDA (project + key generation)
              │     → sort by (pixel_idx | depth)
              │     → renderCUDA (16 threads per pixel)
              │     → sparse (H×W) color and depth images
              │
              loss = 0.8 * L1(im[mask], gt[mask])
                   + 0.2 * (1 - SSIM_shuffled_packed(im, gt, mask))
              │
              loss.backward() → MapRenderer backward
              │     → gradients flow to Gaussian parameters
              │
              prune / densify / optimizer.step()
```

---

## 12. CUDA Kernel Reference

### 12.1 `preprocessCUDA` (both rasterizers, `forward.cu`)

**Grid**: `(P + 255) / 256` blocks, 256 threads/block  
**Inputs**: Gaussian parameters, view/proj matrices, `pixel_range`, `pixel_coords`  
**Outputs**: `gaussian_keys_unsorted`, `gaussian_values_unsorted`, `radii`, `depths`, `conic_opacity`, `rgb`

**Per-Gaussian work** (thread idx = Gaussian idx):
1. Near cull: skip if `p_view.z <= 0.2`
2. Project to screen: compute `point_image` and `2D covariance conic`
3. Compute bounding rect over tile grid
4. For each tile in rect: look up `pixel_range[tile_id]` to find sampled pixels
5. For each sampled pixel: compute `power = log_opacity - 0.5 * conic ⋅ d²`
6. If `power > -5.54`: emit key-value pair (pixel-based, fused with alpha culling)

**Shared memory** (256 floats): `collected_xy`, `collected_conic_o`, `collected_rect_info`, `collected_d_idx`  
All valid-Gaussian data is stored in shared memory before the warp-parallel key emission loop.

### 12.2 `renderCUDAPure` (track rasterizer, `forward.cu:381`)

**Grid**: `num_sampled_pixels` blocks, `(BLOCK_X=16, BLOCK_Y=16)` threads  
**Purpose**: Forward alpha-compositing for one pixel per block, 256 threads cooperate  
**Key operations**:
- `pix = pixel_coords[block.group_index().x]` — look up actual pixel coordinates
- Warp prefix-scan on `cur_T = (1 - alpha)` products to compute each thread's transmittance
- `done = T < 0.0001f` → preemptive early exit
- Output: `out_color[pix_id]`, `out_depth[pix_id]`, `final_T[pix_id]`, `n_contrib[pix_id]`

### 12.3 `renderCUDA` (map rasterizer forward, `forward.cu:380`)

Same as `renderCUDAPure` but launched with `BLOCK_SIZE=16` threads per block. Structurally identical; differences:
- With 16 threads, all in warp 0, `NUM_WARPS=0`, the inter-warp T accumulation never fires
- Operates on a single partial warp — less Gaussian parallelism, suited to the coarser tile_size=4 sampling

### 12.4 `renderCUDA` backward (both rasterizers, `backward.cu:399`)

**Grid**: `num_sampled_pixels` blocks, same thread count as forward  
**Key operations**:
- `range.y = range.x + n_contrib[pix_id]` — limits backward to only Gaussians the forward visited
- Traverses Gaussian list in reverse (highest depth first)
- Warp prefix-scan computes `cur_T` for each thread's gradient weight
- `atomicAdd` accumulates `dL_dmean2D`, `dL_dconic2D`, `dL_dopacity`, `dL_dcolor` per Gaussian

### 12.5 `identifyTileRanges` (both rasterizers, `rasterizer_impl.cu:183`)

**Unchanged kernel** — repurposed to identify per-pixel ranges instead of per-tile ranges. Keys are now sorted by pixel index instead of tile ID, but the kernel's logic (detect key transitions in the sorted list) is identical.

---

## 13. Module Summary Table

| Component | File | Role | Changed vs SplaTAM |
|---|---|---|---|
| Main SLAM loop | `scripts/splatam_sparse.py` | orchestrates all SPLATONIC modifications | NEW |
| Tracking sampler | `utils/mask_utils.py:95` | random one-pixel-per-tile mask | NEW |
| Mapping sampler | `utils/mask_utils.py:47` | texture-weighted adaptive sampling | NEW |
| Mask converter | `utils/mask_utils.py:123` | bool mask → (offsets, sorted_coords) | NEW |
| Sparse SSIM | `utils/loss_utils.py:69` | SSIM on non-contiguous pixel sets | NEW |
| Sparse loss | `splatam_sparse.py:217` | `get_sparse_loss()` with mask integration | NEW |
| Track rasterizer config | `track-rasterization/cuda_rasterizer/config.h` | BLOCK_X=16, BLOCK_Y=16, MAX=4M | NEW |
| Map rasterizer config | `map-rasterization/cuda_rasterizer/config.h` | BLOCK_X=4, BLOCK_Y=4, MAX=16M | NEW |
| Pixel key generation | `{track,map}-rasterization/cuda_rasterizer/forward.cu` | fused in preprocessCUDA | NEW |
| Forward render kernel | `{track,map}-rasterization/cuda_rasterizer/forward.cu` | one block per pixel, warp-scan T | NEW |
| Backward render kernel | `{track,map}-rasterization/cuda_rasterizer/backward.cu` | same dispatch, n_contrib limit | NEW |
| Tile-based rasterizer | `diff-gaussian-rasterization-w-depth/` | used only for densification | UNCHANGED |
| SLAM algorithm | `utils/slam_helpers.py`, `utils/slam_external.py` | pose/map optimization | UNCHANGED |
| Keyframe selection | `utils/keyframe_selection.py` | overlap-based selection | UNCHANGED |
| Gaussian parameters | `params` dict | means3D, colors, rots, opacities, scales | UNCHANGED |
| Pose representation | `cam_unnorm_rots`, `cam_trans` | quaternion + translation | UNCHANGED |

---

## 14. Porting Checklist

To implement SPLATONIC optimizations in another 3DGS-SLAM system:

### Python side

- [ ] Implement `generate_random_mask(image_shape, tile_size)` — one random pixel per tile
- [ ] Implement `adaptive_random_sampling(image, num_samples)` — Sobel-weighted CDF sampling
- [ ] Implement `get_pixel_info(mask, tile_size)` — produces `(offsets, sorted_coords)` for CUDA
- [ ] Implement `calc_ssim_shuffled_packed(im1, im2, mask)` — SSIM on sparse pixel set
- [ ] Add `pixel_range` and `pixel_coords` to the renderer's input argument dict
- [ ] Add `variables['novelty']` to union with mapping pixel mask
- [ ] Implement the FLIP scheduling (1/FLIP full renders, rest sparse) for mapping keyframes
- [ ] In `get_sparse_loss()`, apply `pixel_mask` to the depth/silhouette validity mask before loss reduction

### CUDA side — two rasterizer instances (track + map)

- [ ] **config.h**: set `BLOCK_X`, `BLOCK_Y`, `MAX_NUM_RENDERED` independently for each
  - Track: `BLOCK_X=BLOCK_Y=16`, `MAX_NUM_RENDERED=4000000`
  - Map: `BLOCK_X=BLOCK_Y=4`, `MAX_NUM_RENDERED=16000000`
- [ ] **preprocessCUDA**: replace `duplicateWithKeys` logic with fused key generation
  - Accept `pixel_range` and `pixel_coords` arrays
  - For each valid Gaussian, iterate over its tile bounding rect
  - For each tile, look up sampled pixels via `pixel_range[tile_id]`
  - For each sampled pixel, compute `power = log_opacity - 0.5 * conic ⋅ d²`
  - If `power > -lowest_alpha_coeff (-5.54)`, emit `(pixel_idx << 32 | depth_bits, {gaussian_id, power_as_int})`
- [ ] **Sort**: change sort bit width — upper bits now encode pixel index (instead of tile ID)
- [ ] **renderCUDA (forward)**: change dispatch from `num_tiles` blocks to `num_sampled_pixels` blocks
  - Each block reads its pixel coordinates from `pixel_coords[block.group_index().x]`
  - Use `BLOCK_SIZE` threads cooperating per pixel with warp prefix-scan for T
  - Early termination: `done = T < 0.0001f`, cooperative via `__syncthreads_or`
- [ ] **renderCUDA (backward)**: same dispatch; cap backward depth at `n_contrib[pix_id]`
- [ ] **PyTorch binding** (`rasterize_points.cu`): add `pixel_range` and `pixel_coords` tensor arguments to both forward and backward signatures
- [ ] Keep `identifyTileRanges` kernel unchanged — it operates on the key transition boundary logic which is the same

### Invariants to verify

- [ ] Sparse tracking loss reduces to the same formula as dense loss when the mask covers all pixels
- [ ] Gradients through the sparse renderer are identical to dense renderer on sampled pixels
- [ ] `pixel_range` tile size matches `BLOCK_X × BLOCK_Y` of the rasterizer (mismatch → wrong pixel-to-tile mapping)
- [ ] `MAX_NUM_RENDERED` is large enough for `num_sampled_pixels × average_gaussians_per_pixel`
- [ ] Novelty pixels always appear in the mapping mask (prevents unsupervised Gaussians)

---

## Appendix: Key Constants

| Constant | Value | Location | Meaning |
|---|---|---|---|
| `BLOCK_X` (track) | 16 | `track-rasterization/config.h` | Threads per block in X (= tile width) |
| `BLOCK_Y` (track) | 16 | `track-rasterization/config.h` | Threads per block in Y (= tile height) |
| `BLOCK_X` (map) | 4 | `map-rasterization/config.h` | Threads per block in X (= tile width) |
| `BLOCK_Y` (map) | 4 | `map-rasterization/config.h` | Threads per block in Y (= tile height) |
| `MAX_NUM_RENDERED` (track) | 4,000,000 | `track-rasterization/config.h` | Max (Gaussian, pixel) pairs |
| `MAX_NUM_RENDERED` (map) | 16,000,000 | `map-rasterization/config.h` | Max (Gaussian, pixel) pairs |
| `lowest_alpha_coeff` | 5.54126354515842 | `auxiliary.h:41` | Alpha culling threshold (`exp(-5.54) ≈ 0.004`) |
| `FLIP` | 4 | `splatam_sparse.py:822` | Full-render every N-th keyframe iteration |
| Tracking tile size | 16 | `splatam_sparse.py:880` | Pixels per tile for random tracking mask |
| Mapping tile size (pixel_info) | 4 | `splatam_sparse.py:255` | Pixels per tile for mapping mask conversion |
| Mapping sample fraction | 1/16 | `splatam_sparse.py:1062` | `(H//4)*(W//4)` samples out of H×W |
| T saturation threshold | 0.0001 | `forward.cu:480` | Early termination when pixel is opaque |
