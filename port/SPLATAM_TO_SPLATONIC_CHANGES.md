# SplaTAM → SPLATONIC: Complete Change Log

_A developer-level audit of every addition, removal, and modification made when transforming the SplaTAM codebase into SPLATONIC. Assumes you already know what SplaTAM does; this document only explains what changed, why, and what performance benefit it delivers. Sections follow the SplaTAM repository structure from `SplaTAM.md`._

**Contents:**
[1. Repository Structure](#1-repository-structure) · [2. Entry Point Script](#2-entry-point-script-scripts) · [3. Utilities](#3-utilities-utils) · [4. Rasterizer — Design Overview](#4-rasterizer--design-overview) · [5. Rasterizer — Python Binding Layer](#5-rasterizer--python-binding-layer) · [6. Rasterizer — CUDA Implementation](#6-rasterizer--cuda-implementation) · [7. Configuration Constants](#7-configuration-constants) · [8. What Was Not Changed](#8-what-was-not-changed) · [9. Change Summary Table](#9-change-summary-table)

---

## 1. Repository Structure

### Original SplaTAM Layout

```
scripts/splatam.py
utils/common_utils.py
utils/eval_helpers.py
utils/keyframe_selection.py
utils/loss_utils.py          ← calc_ssim (dense image pair)
utils/slam_external.py
utils/slam_helpers.py
diff-gaussian-rasterization-w-depth/   ← single rasterizer
    cuda_rasterizer/
        config.h             (BLOCK_X=16, BLOCK_Y=16 = tile dimensions)
        forward.cu           (preprocessCUDA + renderCUDA)
        backward.cu
        rasterizer_impl.cu
    rasterize_points.cu
    diff_gaussian_rasterization/__init__.py
datasets/
configs/
```

### SPLATONIC Layout

```
scripts/
    splatam.py               ← UNCHANGED (kept as reference baseline)
    splatam_sparse.py        ← NEW: SPLATONIC entry point

utils/
    common_utils.py          ← unchanged
    eval_helpers.py          ← unchanged
    keyframe_selection.py    ← unchanged
    loss_utils.py            ← MODIFIED: added calc_ssim_shuffled_packed()
    mask_utils.py            ← NEW: sparse pixel sampling
    slam_external.py         ← unchanged
    slam_helpers.py          ← unchanged

track-rasterization/         ← NEW: replaces diff-gaussian-rasterization-w-depth/ for tracking
    cuda_rasterizer/
        config.h             (BLOCK_X=16, BLOCK_Y=16 = threads per pixel, not tile dims)
        forward.cu           (preprocessCUDA fused with pixel key gen + renderCUDAPure)
        backward.cu          (pixel-parallel backward)
        rasterizer_impl.cu   (pixel-indexed sort pipeline)
        auxiliary.h          (lowest_alpha_coeff added)
    rasterize_points.cu      (pixel_range/pixel_coords tensor args added)
    diff_gaussian_rasterization/__init__.py (pixel_range/pixel_coords forwarded)

map-rasterization/           ← NEW: separate rasterizer for mapping
    cuda_rasterizer/
        config.h             (BLOCK_X=4, BLOCK_Y=4 = 16 threads per pixel)
        forward.cu           (same pixel key gen, renderCUDA with single warp)
        backward.cu
        rasterizer_impl.cu
        auxiliary.h
    rasterize_points.cu
    diff_gaussian_rasterization/__init__.py

datasets/                    ← unchanged
configs/                     ← unchanged
```

**What changed and why:** The single `diff-gaussian-rasterization-w-depth/` directory is replaced by two specialized rasterizers. This is mandatory because tracking and mapping require different thread-parallelism trade-offs: tracking renders a fixed small set of pixels (one per 16×16 tile) and can afford 256 threads per pixel, while mapping renders a larger adaptive set and uses 16 threads per pixel to fit more concurrent pixels. A single rasterizer cannot express both configurations simultaneously without recompilation.

---

## 2. Entry Point Script (`scripts/`)

### `scripts/splatam.py` — Kept Unchanged

SplaTAM's original `splatam.py` is retained verbatim as the dense baseline. It uses only `from diff_gaussian_rasterization import GaussianRasterizer as Renderer` and calls `get_loss()` every iteration for both tracking and mapping.

**Nothing in this file was modified.** It remains the comparison baseline.

### `scripts/splatam_sparse.py` — Added (Primary SPLATONIC Entry Point)

This is a heavily modified fork of `splatam.py`. The structural SLAM logic (frame loop, keyframe selection, densification, optimizer setup, checkpoint saving) is unchanged. Every change is localized to the render path and the loss function.

#### 2.1 Import Changes

| SplaTAM (`splatam.py`) | SPLATONIC (`splatam_sparse.py`) |
|---|---|
| `from diff_gaussian_rasterization import GaussianRasterizer as Renderer` | `from track_rasterization import GaussianRasterizer as TrackRenderer` |
| — | `from map_rasterization import GaussianRasterizer as MapRenderer` |
| — | `from utils.mask_utils import generate_random_mask, adaptive_random_sampling, get_pixel_info` |

**Why:** One renderer per mode because they compile with different `BLOCK_X/Y` constants and expose different call signatures (with `pixel_range`/`pixel_coords`). The mask utilities implement the sparse pixel sampling logic.

#### 2.2 `get_loss()` → `get_sparse_loss()` (line 217)

**SplaTAM `get_loss()`:**
```python
def get_loss(params, curr_data, variables, iter_time_idx, loss_weights,
             use_sil_for_loss, sil_thres, use_l1, ignore_outlier_depth_loss, tracking=False,
             mapping=False, do_ba=False, plot_dir=None, visualize_tracking_loss=False, ...):
    # transforms Gaussians, builds rendervar, calls Renderer(cam)(**rendervar)
    # computes L1+SSIM loss on full H×W images
```

**SPLATONIC `get_sparse_loss()`:**
```python
def get_sparse_loss(params, curr_data, variables, iter_time_idx, loss_weights,
                    use_sil_for_loss, sil_thres, use_l1, ignore_outlier_depth_loss,
                    pixel_mask=None, pixel_info=None,
                    tracking=False, mapping=False, ...):
    # additionally injects into rendervar:
    rendervar['pixel_range'] = pixel_info[0]   # int32 [num_pixels+1]: per-pixel Gaussian range
    rendervar['pixel_coords'] = pixel_info[1]  # int32 [num_pixels]: pixel (x,y) packed
    # dispatches to TrackRenderer (tracking=True) or MapRenderer (mapping=True)
    # computes loss only over the sampled pixels (pixel_mask)
```

**Key diffs in `get_sparse_loss()`:**
1. **`pixel_mask` and `pixel_info` parameters** — pass the current-frame pixel subset into the function. If `pixel_mask` is None the function degrades to a full-image dense render (used for the FLIP dense pass).
2. **`rendervar` augmentation** — `pixel_range` and `pixel_coords` are new keys that the CUDA `preprocessCUDA` kernel reads to enumerate which pixels to generate keys for.
3. **Renderer selection** — `TrackRenderer` used when `tracking=True`, `MapRenderer` used when `mapping=True`. SplaTAM used a single `Renderer` everywhere.
4. **Loss masking** — after render, the RGB and depth loss are computed only at positions where `pixel_mask == True`, using indexing into the flattened image tensor rather than a full-image mean.
5. **SSIM on sparse pixels** — calls `calc_ssim_shuffled_packed(img1, img2, pixel_mask)` instead of `calc_ssim(img1, img2)`. See §3.2.

**Performance benefit:** Avoiding a full H×W render for every tracking and most mapping iterations is the primary throughput improvement. The sparse render operates only on a ≪H×W subset of pixels, proportionally reducing both CUDA kernel work and memory traffic.

#### 2.3 Tracking Loop Changes (line 880)

**SplaTAM tracking loop:**
```python
for iter in range(num_tracking_iter):
    loss, variables, losses = get_loss(params, curr_data, variables, ...)
```

**SPLATONIC tracking loop:**
```python
# Once per frame, before the tracking loop:
pixel_mask, pixel_offsets, pixel_sorted_coords = generate_random_mask(
    (image_height, image_width), tile_size=16)
pixel_info = get_pixel_info(pixel_mask, tile_size=16)

for iter in range(num_tracking_iter):
    loss, variables, losses = get_sparse_loss(params, curr_data, variables,
        pixel_mask=pixel_mask, pixel_info=pixel_info, tracking=True, ...)
```

**What was added:**
- `generate_random_mask()` called **once per frame** before the inner loop — generates a fixed uniform subset (one pixel per 16×16 tile). The mask is reused across all tracking iterations for the same frame, reducing the sampling overhead to a one-time cost.
- `get_pixel_info()` converts the bool mask into the sorted `(offsets, coords)` representation consumed by the CUDA kernel.

**Performance benefit:** Tracking renders ~(H×W)/(16×16) ≈ 1/256 of all pixels per iteration. The rest of the tracking optimization (pose gradient from the CUDA backward pass) is unchanged.

#### 2.4 Mapping Loop Changes (lines 822–870)

**SplaTAM mapping loop:**
```python
for iter in range(num_mapping_iter):
    loss, variables, losses = get_loss(params, curr_data, variables, ..., mapping=True)
```

**SPLATONIC mapping loop:**
```python
FLIP = 4          # one dense render per FLIP iters
counter = 0       # always 0 for current frame (dense), cycles for keyframes

for iter in range(num_mapping_iter):
    if counter == 0:
        # Dense render path — same as original SplaTAM
        loss, variables, losses = get_loss(params, curr_data, variables,
            ..., mapping=True)
        counter = (counter + 1) % FLIP
    else:
        # Sparse render path
        pixel_mask, pixel_coords = adaptive_random_sampling(
            curr_data['im'], num_samples=num_sparse_pixels)
        pixel_info = get_pixel_info(pixel_mask, tile_size=4)
        loss, variables, losses = get_sparse_loss(params, curr_data, variables,
            pixel_mask=pixel_mask, pixel_info=pixel_info, mapping=True, ...)
        counter = (counter + 1) % FLIP
```

**What was added/changed:**
- `FLIP = 4` constant — controls the dense/sparse schedule ratio (1 dense : 3 sparse).
- `counter` variable — cycles the schedule. The current frame always gets `counter=0` (full dense render); keyframes cycle `0→1→2→3→0`.
- `adaptive_random_sampling()` called **per iteration** for sparse passes — samples pixels weighted by Sobel gradient magnitude (more samples in textured regions). Unlike tracking, each mapping sparse pass gets a freshly drawn pixel set to cover more of the image over multiple iterations.
- `get_pixel_info()` with `tile_size=4` — mapping uses 4×4 pixel tiles (matching the `MapRenderer`'s `BLOCK_X=4, BLOCK_Y=4`).

**Performance benefit:** Keyframe mapping runs 3/4 of iterations as sparse renders, reducing per-iteration cost while the 1/4 dense pass ensures the loss landscape is anchored to the full image at least occasionally. The novelty mask (newly-seen pixels) is always included in the sparse sample, ensuring newly observed geometry receives gradient signal.

---

## 3. Utilities (`utils/`)

### 3.1 `utils/mask_utils.py` — Added (New File)

This file does not exist in SplaTAM. It contains all sparse pixel sampling logic.

#### `compute_gradient_mag(image)` (line 1)

```python
def compute_gradient_mag(image: torch.Tensor) -> torch.Tensor:
    # Sobel kernel convolution → gradient magnitude per pixel
```

Computes per-pixel gradient magnitude using a 3×3 Sobel filter via `F.conv2d`. Used internally by `adaptive_random_sampling()` to bias sampling toward textured regions.

**Why:** Pixels in homogeneous regions (flat walls, ceilings) carry no pose or geometry information. Sampling proportional to gradient magnitude concentrates optimization budget on informative pixels.

#### `adaptive_random_sampling(image, num_samples, epsilon=0.001)` (line 47)

```python
def adaptive_random_sampling(image, num_samples, epsilon=0.001):
    # 1. compute gradient magnitude
    # 2. build CDF: p(pixel) ∝ grad_mag + epsilon
    # 3. sample num_samples pixels without replacement via inverse CDF
    # returns (pixel_mask [H,W bool], pixel_coords [num_samples, 2])
```

Used for **mapping** sparse passes. The `epsilon` floor ensures every pixel has non-zero probability (prevents complete exclusion of flat regions).

**Why gradient-weighted:** Mapping optimizes Gaussian shape, colour, and position; these are best constrained at pixels where rendered and ground-truth images have structural differences — which are concentrated at edges and texture boundaries.

#### `generate_random_mask(image_size, tile_size=16)` (line 95)

```python
def generate_random_mask(image_size, tile_size=16):
    # Partitions image into tile_size×tile_size non-overlapping tiles
    # Samples exactly one random pixel per tile
    # Returns (mask [H,W bool], offsets [int32], sorted_coords [int32])
```

Used for **tracking** sparse passes. Uniform one-pixel-per-tile sampling ensures coverage across the whole image (unlike purely random sampling, which clusters around image centre).

**Why tile_size=16:** Matches `track-rasterization`'s `BLOCK_X=16, BLOCK_Y=16` configuration. Each CUDA block handles exactly one pixel, and the sampling grid aligns to the same 16×16 tile structure.

#### `get_pixel_info(mask, tile_size=16)` (line 123)

```python
def get_pixel_info(mask, tile_size=16):
    # Converts a bool mask to:
    #   offsets:       int32 [num_tiles+1]   (prefix-sum of per-tile pixel counts)
    #   sorted_coords: int32 [num_pixels]    (pixel linear indices sorted by tile)
    # Returns (offsets, sorted_coords)
```

The `offsets` and `sorted_coords` tensors are passed as `pixel_range` and `pixel_coords` into the CUDA kernel. The CUDA `preprocessCUDA` iterates over `sorted_coords[offsets[tile] : offsets[tile+1]]` for each tile when generating pixel-indexed Gaussian keys. The tile_size=4 variant is used for mapping (to match `MapRenderer`).

**Why this representation:** The CUDA kernel needs to enumerate pixels in tile order (not image-row order) because the sort key embeds the pixel index directly, and pixels must be assigned to CUDA blocks (one block per pixel) whose launch grid is 1D over pixel indices. Pre-sorting by tile maps cleanly to a 1D grid launch.

### 3.2 `utils/loss_utils.py` — Modified

**SplaTAM `calc_ssim(img1, img2)`:** Computes SSIM over a full H×W image pair using a 2D sliding Gaussian window. Requires spatially contiguous pixels.

**SPLATONIC addition — `calc_ssim_shuffled_packed(img1, img2, mask, window_size=4, stride=4)`** (line 69):

```python
def calc_ssim_shuffled_packed(img1, img2, mask, window_size=4, stride=4):
    # 1. Extract N masked pixels from img1, img2 → shape [3, N]
    # 2. Randomly shuffle the N indices (shuffled copy)
    # 3. Concatenate original + shuffled → shape [3, 2N]
    # 4. Reshape into a 2D patch: [3, 64, 2N/64]   (64 synthetic rows)
    # 5. Compute standard 2D SSIM on this synthetic patch
    # Returns scalar SSIM value
```

**Why this is necessary:** Standard 2D SSIM requires a spatially contiguous image. Sparse pixels from `pixel_mask` are scattered across the image and cannot be directly laid out as a 2D array that SSIM can meaningfully process (the structural similarity between non-adjacent pixels is undefined). The shuffle-and-pack approach creates a synthetic 2D patch whose local statistics approximate the global statistics of the sampled pixels, allowing SSIM to be computed without requiring spatial adjacency.

**Why shuffle:** Without shuffling, the packed patch would group nearby pixels together (since they are extracted in raster-scan order). Shuffling randomizes the patch structure so that the synthetic rows don't accidentally correlate with image structure, making SSIM less sensitive to patch layout artifacts.

**Performance benefit (indirect):** Enables SSIM loss in the sparse mapping path. Without this, sparse mapping would be limited to L1 loss, which is less effective at enforcing photometric consistency.

---

## 4. Rasterizer — Design Overview

This is the central architectural change. SplaTAM used a **tile-based** rasterizer; SPLATONIC uses a **pixel-based** rasterizer.

### SplaTAM Tile-Based Pipeline

```
preprocessCUDA (one thread / Gaussian)
  → project Gaussian → record tiles_touched count
  
prefix-sum over tiles_touched → point_offsets

duplicateWithKeys (one thread / Gaussian)
  → for each tile covered: emit (tile_id<<32 | depth, gaussian_id) key

cub::DeviceRadixSort::SortPairs
  → sorted by (tile_id, depth) — Gaussians grouped by tile, front-to-back within tile

identifyTileRanges
  → tile_ranges[tile] = [start, end) in sorted list

renderCUDA (one CUDA block / tile)
  → 16×16=256 threads cooperatively blend Gaussians for 256 pixels in tile
```

**Bottleneck:** The `duplicateWithKeys` step "fans out" each Gaussian into one key per covered tile — a Gaussian covering K tiles creates K entries. For large Gaussians this is memory-intensive and load-imbalanced.

### SPLATONIC Pixel-Based Pipeline

```
preprocessCUDA (one thread / Gaussian × one pixel per tile in sample)
  → project Gaussian → for each sampled pixel in covered tiles:
       if power > lowest_alpha_coeff: skip (preemptive α check)
       emit (pixel_idx<<32 | depth_bits, {gaussian_id, power_as_int}) key

cub::DeviceRadixSort::SortPairs
  → sorted by (pixel_idx, depth) — Gaussians grouped by pixel, front-to-back within pixel

identifyTileRanges (unchanged kernel, now interprets "tile" as "pixel")
  → pixel_ranges[pixel] = [start, end) in sorted list

renderCUDAPure / renderCUDA (one CUDA block / pixel)
  → BLOCK_SIZE=256 (track) or 16 (map) threads blend Gaussians for ONE pixel
  → warp prefix-scan accumulates transmittance T across threads
```

**What was eliminated:** The `duplicateWithKeys` kernel is gone entirely. Key generation is fused into `preprocessCUDA`.

**What changed about the sort keys:** SplaTAM sort key = `tile_id << 32 | depth_bits`. SPLATONIC sort key = `pixel_idx << 32 | depth_bits`. The depth encoding is unchanged; only the upper 32 bits change from tile index to pixel index.

**What `identifyTileRanges` does now:** Finds the `[start, end)` range in the sorted list for each pixel index. The kernel source is identical — it searches for key transitions in the sorted array. The only semantic difference is that the 32-bit upper field now indexes pixels instead of tiles.

---

## 5. Rasterizer — Python Binding Layer

### `rasterize_points.cu` / `diff_gaussian_rasterization/__init__.py`

**SplaTAM signature:**
```cpp
// rasterize_points.cu
RasterizeGaussiansCUDA(background, means3D, colors, opacity, scales, rotations,
                       scale_modifier, cov3D_precomp, viewmatrix, projmatrix,
                       tan_fovx, tan_fovy,
                       image_height, image_width,
                       sh, degree, campos, prefiltered)
```

```python
# __init__.py
_C.rasterize_gaussians(bg, means3D, colors_precomp, opacities, scales,
                       rotations, scale_modifier, cov3Ds_precomp,
                       viewmatrix, projmatrix, tanfovx, tanfovy,
                       image_height, image_width, sh, sh_degree, campos, prefiltered)
```

**SPLATONIC signature (track-rasterization and map-rasterization):**
```cpp
// rasterize_points.cu — two new arguments
RasterizeGaussiansCUDA(...,
                       tan_fovx, tan_fovy,
                       pixel_range,    // NEW: int* [num_pixels+1]
                       pixel_coords,   // NEW: int* [num_pixels]
                       image_height, image_width, ...)
```

```python
# __init__.py — two new tensor arguments forwarded through
_C.rasterize_gaussians(..., tanfovx, tanfovy,
                       pixel_range,   # NEW: torch.Tensor int32
                       pixel_coords,  # NEW: torch.Tensor int32
                       image_height, image_width, ...)
```

**What changed in `rasterize_points.cu`:**
- `getBinningBufferSize(num_rendered)` uses `MAX_NUM_RENDERED` (from `config.h`) as the pre-allocated buffer size instead of dynamically sizing the buffer at forward time. This is a static pre-allocation that avoids `cudaMalloc` latency during inference.
- `RasterizeGaussiansCUDA` passes `pixel_range` and `pixel_coords` raw pointers down to `CudaRasterizer::Rasterizer::forward()`.
- Return value includes `num_pixel` (integer count of rendered pixels) instead of `num_rendered` (Gaussian-instance count after fan-out). This changes what the Python layer uses as the `num_rendered` context variable for the backward pass.

**What changed in backward (`RasterizeGaussiansBackwardCUDA`):**
- Accepts `pixel_coords` instead of no pixel argument — needed because the backward kernel also iterates over sampled pixels.
- `num_pixel` (not `num_rendered` tile-instances) passed as the loop bound.

**Why these changes affect backward:** The backward pass reconstructs the sorted Gaussian list from the saved `binningBuffer` and traverses it in reverse. With pixel-indexed keys, the backward must know which pixel each bucket covers, which requires `pixel_coords`.

---

## 6. Rasterizer — CUDA Implementation

### 6.1 `auxiliary.h` — Modified

**SplaTAM `auxiliary.h`:** Standard math helpers — `ndc2Pix`, `getRect`, `transformPoint4x3/4x4`, `in_frustum`, `sigmoid`.

**SPLATONIC `auxiliary.h` addition:**
```cpp
// track-rasterization/cuda_rasterizer/auxiliary.h
const float lowest_alpha_coeff = 5.54126354515842f;
```

This constant is the threshold for preemptive alpha checking. A Gaussian's contribution to a pixel is `alpha = sigmoid(opacity) * exp(-power)` where `power = 0.5 * (conic quadratic form)`. If `power > lowest_alpha_coeff`, then `exp(-power) < exp(-5.54) ≈ 0.004`, making `alpha < 0.004`. Such contributions are below the visibility threshold used in rendering, so the Gaussian is culled at **key generation time** — no sort key is emitted.

**Why this is a CUDA constant and not a Python-side filter:** The culling happens inside `preprocessCUDA` during the key generation loop, before any data leaves the GPU. Moving it to Python would require reading all projected Gaussians back to CPU.

**Performance benefit:** Eliminates from the sort and render pipeline all Gaussians that would contribute less than ~0.4% alpha to any sampled pixel. This is the "preemptive alpha checking" design point — it reduces the number of sort keys by culling at generation, not after sort.

### 6.2 `forward.cu` — Heavily Modified

#### `preprocessCUDA` (one thread per Gaussian)

**SplaTAM `preprocessCUDA`:**
```cpp
// One thread per Gaussian
void preprocessCUDA(...) {
    // project Gaussian to screen → mean2D, conic_opacity
    // compute tile rect [min_tile, max_tile)
    // tiles_touched[id] = (max_tile.x - min_tile.x) * (max_tile.y - min_tile.y)
    // store projected data for renderCUDA
}
// Key generation is done separately by duplicateWithKeys kernel
```

**SPLATONIC `preprocessCUDA`** (fused key generation):
```cpp
// One thread per Gaussian
void preprocessCUDA(...,
    const int* pixel_range,     // NEW: prefix sums over sampled pixels per tile
    const int* pixel_coords,    // NEW: sampled pixel (x,y) sorted by tile
    int* __restrict__ num_rendered_ptr, ...) {
    
    // project Gaussian → mean2D, conic_opacity (same as SplaTAM)
    // compute tile rect (same)
    
    // NEW: instead of recording tiles_touched, iterate over sampled pixels in rect:
    for (int tile = min_tile; tile < max_tile; tile++) {
        for (int k = pixel_range[tile]; k < pixel_range[tile+1]; k++) {
            int px = pixel_coords[k] % W;
            int py = pixel_coords[k] / W;
            // evaluate Gaussian power at this pixel
            float power = /* conic quadratic form at (px, py) */;
            if (power > lowest_alpha_coeff) continue;  // preemptive α cull
            // emit key: (pixel_idx << 32 | depth_bits, {gaussian_id, power_as_int})
            gaussian_keys_unsorted[atomicAdd(num_rendered_ptr, 1)] = make_uint64(...);
            gaussian_values_unsorted[...] = {id, (int)power};
        }
    }
}
```

**What was removed:** The `tiles_touched[id]` counter. No more prefix-sum over Gaussian tile counts, no `duplicateWithKeys` call.

**What was added:** An inner loop over sampled pixels in each covered tile, Gaussian power evaluation at each pixel, the `lowest_alpha_coeff` early-exit check, and atomic key emission directly from `preprocessCUDA`.

**Why fused:** The SplaTAM pipeline required two passes — one to count tiles per Gaussian (prefix-sum), one to emit keys. Fusing into one pass eliminates the prefix-sum and the `duplicateWithKeys` kernel. It also makes the preemptive cull structurally natural (the power is computed as a byproduct of key generation, so the threshold check costs nothing extra).

#### `renderCUDAPure` — Added (Track Rasterizer)

**SplaTAM `renderCUDA` (one block per tile, N_THREADS = BLOCK_X*BLOCK_Y = 256):**
```cpp
// BLOCK = 16×16 = 256 threads, each handles one pixel in the tile
__global__ void renderCUDA(...) {
    int pix_id = blockIdx.x * blockDim.x + threadIdx.x;  // flat pixel index
    int pix_x = pix_id % W;
    int pix_y = pix_id / W;
    // thread iterates over Gaussians in tile's sorted range
    // each thread accumulates its own pixel's color independently
    // shared memory used for batched Gaussian loading only
}
```

**SPLATONIC `renderCUDAPure` (one block per pixel, N_THREADS = 256):**
```cpp
// BLOCK = 256 threads, all working on ONE pixel
__global__ void renderCUDAPure(...) {
    int pixel_id = blockIdx.x;                     // one block per sampled pixel
    int pix_x = pixel_coords[pixel_id] % W;
    int pix_y = pixel_coords[pixel_id] / W;
    auto range = pixel_ranges[pixel_id];           // Gaussian range for this pixel
    
    // Threads in this block share Gaussians: thread i processes Gaussian range.x + i
    // Multiple threads contribute partial transmittance factors to the SAME pixel
    
    // Warp prefix-scan for transmittance:
    for (int batch = 0; batch < (range.y - range.x + BLOCK_SIZE - 1) / BLOCK_SIZE; batch++) {
        int g_id = range.x + batch * BLOCK_SIZE + threadIdx.x;
        float my_alpha = /* evaluate Gaussian at pixel */;
        float my_T_factor = (1.0f - my_alpha);
        
        // Warp prefix-scan: each thread needs product of (1-alpha) for all prior threads
        float T_prefix = warp_prefix_product(my_T_factor);  // via __shfl_up_sync
        float T_before_me = T_prefix / my_T_factor;
        
        color_contrib[ch] += feature[ch] * my_alpha * T_before_me * T_running;
        T_running *= warp_total_T;  // update running product across warps
        
        if (T_running < 0.0001f) {
            int vote = __syncthreads_or(1);
            if (vote) break;  // early exit: all threads in block agree pixel is saturated
        }
    }
    
    // Thread 0 writes final pixel color (reduction across all threads)
    if (threadIdx.x == 0) out_color[pix_id] = final_color;
}
```

**What was removed from the render kernel:**
- Per-tile shared-memory loading of Gaussian data in batches (the old 256-Gaussian batch loop in shared memory).
- The outer loop over tiles (`blockIdx.y` dimension).
- The condition `if (done) continue` per-thread early exit (replaced by `__syncthreads_or` full-block exit).

**What was added:**
- Warp prefix-scan (`__shfl_up_sync`) to compute the cumulative transmittance product across threads in the same warp — needed because multiple threads contribute to the same pixel and each needs to know the transmittance accumulated by all threads before it.
- Inter-warp accumulation via `collected_T[warp_idx]` shared array — after each warp completes, it writes its total T factor; the next warp reads all prior warp factors to get its running T.
- `__syncthreads_or(done)` for early block-wide exit — ensures all threads in the block stop as soon as any thread observes T < 0.0001.

**Performance benefit (Gaussian-parallel rendering):** In SplaTAM, each of the 256 threads in a block handled a different pixel but shared Gaussian loading. In SPLATONIC, all 256 threads work on a single pixel but process different Gaussians in parallel. This is beneficial because the number of Gaussians per pixel can be large (thousands), while the number of Gaussians per tile in the original scheme was the same count but processed serially by each thread. The new approach exposes that serial Gaussian loop as parallelism, trading the inter-thread pixel independence for intra-thread Gaussian parallelism.

#### `renderCUDA` — Modified (Map Rasterizer)

The map rasterizer uses the same pixel-parallel concept but with `BLOCK_SIZE=16` (4×4 threads). This means all 16 threads fit in a single warp (warp size=32), so the inter-warp accumulation logic is simplified: `NUM_WARPS = 16/32 = 0` (integer division), meaning the inter-warp loop never executes and `collected_T[0]` serves as the sole accumulator updated once per warp cycle.

**Why 16 threads for mapping vs 256 for tracking:** Mapping samples more pixels per frame (adaptive CDF sampling covers larger areas) but uses smaller Gaussian lists per pixel (mapping focuses on high-gradient regions where fewer large Gaussians appear). 16 threads are enough to parallelize each pixel's Gaussian list, and using fewer threads per pixel allows more pixels to be processed concurrently.

### 6.3 `backward.cu` — Modified

**SplaTAM backward `renderCUDA`:** One block per tile; reverses the tile's Gaussian list back-to-front; each thread accumulates gradients for its assigned pixel independently; `atomicAdd` scatters `dL_dcolors, dL_dmean2D, dL_dconic2D, dL_dopacity` to per-Gaussian gradient buffers.

**SPLATONIC backward `renderCUDA`:** One block per pixel; reverses the pixel's Gaussian list back-to-front; all threads in the block cooperate on the same pixel's Gaussian list; warp prefix-scan computes the backward transmittance accumulation; `atomicAdd` scatters Gaussian gradients (unchanged pattern — atomic adds are still needed since multiple pixels may reference the same Gaussian).

**What changed:**
- Block dispatch: `grid = (num_pixels, 1, 1)` instead of `grid = (grid_x, grid_y, 1)`.
- Loop range: `range.y = range.x + n_contrib[pix_id]` limits backward traversal to exactly the Gaussians that were rendered forward — this is the same limit used in SplaTAM but now `n_contrib` is per-pixel not per-tile-pixel.
- Warp prefix-scan for backward T accumulation: same `__shfl_up_sync` pattern as forward, applied to `(1 - alpha)` products in reverse order.

### 6.4 `rasterizer_impl.cu` — Modified

**SplaTAM pipeline in `Rasterizer::forward()`:**
```
FORWARD::preprocess (preprocessCUDA) → per-Gaussian tile counts
cub::DeviceScan::InclusiveSum over tiles_touched → point_offsets
duplicateWithKeys → (tile_id<<32|depth, gaussian_id) sort keys
cub::DeviceRadixSort::SortPairs → sorted by (tile, depth)
identifyTileRanges → tile_ranges[tile] = [start, end)
FORWARD::render (renderCUDA) → per-tile alpha compositing
```

**SPLATONIC pipeline in `Rasterizer::forward()`:**
```
FORWARD::preprocess (preprocessCUDA) → fused pixel key generation
    [no prefix-sum step]
    [no duplicateWithKeys step]
cub::DeviceRadixSort::SortPairs → sorted by (pixel_idx, depth)
identifyTileRanges → pixel_ranges[pixel] = [start, end)    [same kernel]
FORWARD::render (renderCUDAPure or renderCUDA) → per-pixel alpha compositing
```

**Steps removed:** `cub::DeviceScan::InclusiveSum` (prefix-sum over Gaussian tile counts) and `duplicateWithKeys` kernel are both gone.

**Steps unchanged:** `cub::DeviceRadixSort::SortPairs` and `identifyTileRanges` are reused without modification — they operate on abstract (key, value) pairs and don't care whether the key's upper 32 bits encode a tile index or a pixel index.

**Memory layout change:** `GeometryState.tiles_touched` was a per-Gaussian array storing how many tiles each Gaussian overlaps. In SPLATONIC this array is no longer populated (the prefix-sum step that depended on it is removed). The field may still exist in the struct but is unused.

---

## 7. Configuration Constants

### `track-rasterization/cuda_rasterizer/config.h`

| Constant | SplaTAM | SPLATONIC Track | Semantic Change |
|---|---|---|---|
| `BLOCK_X` | 16 | 16 | Different meaning: was tile width; now threads-per-pixel (X dim) |
| `BLOCK_Y` | 16 | 16 | Different meaning: was tile height; now threads-per-pixel (Y dim) |
| `BLOCK_SIZE` | 256 (=16×16 threads per tile block) | 256 (=16×16 threads per pixel block) | Same count, different semantics |
| `NUM_CHANNELS` | 3 | 3 | Unchanged |
| `MAX_NUM_RENDERED` | (dynamic) | 4,000,000 | Pre-allocated static sort buffer |

**The `BLOCK_X`/`BLOCK_Y` reinterpretation is the key constant change.** In SplaTAM they defined the tile dimensions (16×16 pixel tiles, one block processes one tile). In SPLATONIC they define the thread block size for processing one pixel (256 threads cooperate on one pixel's Gaussian list).

### `map-rasterization/cuda_rasterizer/config.h`

| Constant | SPLATONIC Map | Reason |
|---|---|---|
| `BLOCK_X` | 4 | 4×4=16 threads per pixel (fits in one warp) |
| `BLOCK_Y` | 4 | |
| `BLOCK_SIZE` | 16 | One partial warp per pixel block |
| `MAX_NUM_RENDERED` | 16,000,000 | Larger buffer: mapping sees more pixels |

**Why `MAX_NUM_RENDERED` is 4× larger for mapping:** Mapping uses texture-adaptive sampling which can cover much more of the image than tracking's uniform 1-per-16×16-tile sample. The sort buffer must be large enough to hold all emitted keys without overflow.

---

## 8. What Was Not Changed

The following SplaTAM components are carried over to SPLATONIC completely unchanged:

| Component | Reason Not Changed |
|---|---|
| `utils/common_utils.py` | I/O, checkpointing, seeding — unrelated to rendering |
| `utils/eval_helpers.py` | Evaluation metrics operate on dense renders only (eval is not in the sparse path) |
| `utils/keyframe_selection.py` | Keyframe overlap scoring uses full-image depth renders, unaffected |
| `utils/slam_external.py` | Densification, pruning, rotation math — no rendering in these |
| `utils/slam_helpers.py` | `transform_to_frame`, `params2rendervar`, quaternion math — GPU tensor math unchanged |
| `datasets/gradslam_datasets/` | All dataset loaders — data loading is rendering-agnostic |
| `configs/` | All config files — SLAM hyperparameters unchanged |
| `scripts/splatam.py` | Preserved as the dense baseline |
| The SLAM loop structure | Tracking→densification→mapping→keyframe logic is identical |
| `initialize_optimizer()` | Adam optimizer construction unchanged |
| `add_new_gaussians()` | Densification render uses dense `Renderer` (unchanged) |
| Checkpoint format | `params.npz` format identical |

---

## 9. Change Summary Table

| File | Change Type | One-Line Summary |
|---|---|---|
| `scripts/splatam_sparse.py` | **Added** | SPLATONIC entry point: sparse pixel render loop with FLIP scheduling |
| `utils/mask_utils.py` | **Added** | Sparse pixel sampling: uniform (tracking) and gradient-weighted (mapping) |
| `utils/loss_utils.py` | **Modified** | Added `calc_ssim_shuffled_packed()` for SSIM on non-contiguous sparse pixels |
| `track-rasterization/` | **Added** | Full pixel-based rasterizer for tracking (256 threads/pixel, 4M key buffer) |
| `map-rasterization/` | **Added** | Full pixel-based rasterizer for mapping (16 threads/pixel, 16M key buffer) |
| `*/cuda_rasterizer/config.h` | **Modified** | `BLOCK_X/Y` semantics changed from tile dims to per-pixel thread count |
| `*/cuda_rasterizer/auxiliary.h` | **Modified** | Added `lowest_alpha_coeff = 5.54` preemptive cull threshold |
| `*/cuda_rasterizer/forward.cu` | **Heavily modified** | `preprocessCUDA` fused with pixel key gen; new `renderCUDAPure`/`renderCUDA` with warp prefix-scan |
| `*/cuda_rasterizer/backward.cu` | **Modified** | One-block-per-pixel dispatch; warp prefix-scan for backward T accumulation |
| `*/cuda_rasterizer/rasterizer_impl.cu` | **Modified** | Removed prefix-sum + `duplicateWithKeys`; pixel-indexed sort + render dispatch |
| `*/rasterize_points.cu` | **Modified** | Added `pixel_range`/`pixel_coords` args; static `MAX_NUM_RENDERED` buffer |
| `*/diff_gaussian_rasterization/__init__.py` | **Modified** | Forwarded `pixel_range`/`pixel_coords` through Python autograd Function |
| `scripts/splatam.py` | **Unchanged** | Original SplaTAM kept as baseline |
| `utils/slam_helpers.py` | **Unchanged** | `transform_to_frame`, rendervar builders — untouched |
| `utils/slam_external.py` | **Unchanged** | Densify/prune engine — untouched |
| `utils/eval_helpers.py` | **Unchanged** | Evaluation pipeline — untouched |
| `datasets/` | **Unchanged** | All dataset loaders — untouched |
| `configs/` | **Unchanged** | All config files — untouched |
