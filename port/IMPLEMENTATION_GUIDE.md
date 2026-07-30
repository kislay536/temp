# SPLATONIC on MonoGS — Step-by-Step Implementation Guide

This guide breaks the full port into atomic, verifiable steps. Each step describes:
- **What** changes
- **How it worked in SplaTAM / SPLATONIC** (source)
- **How to adapt it for MonoGS** (target)
- **Files and functions to change**
- **How to verify**

Work in the order given. CUDA changes are the critical path; do them before touching Python.

---

## Key Conceptual Difference to Keep in Mind Throughout

SPLATONIC's rasterizers (`track-rasterization/`, `map-rasterization/`) were built from SplaTAM's rasterizer and **do not have** MonoGS-specific features. You **cannot** drop them into MonoGS. The correct approach is:

1. Copy MonoGS's existing rasterizer (which has `theta`/`rho`, `n_touched`, `projmatrix_raw`) into two new directories.
2. Apply SPLATONIC's pixel-based pipeline changes to those copies.
3. MonoGS-specific features must survive the transformation intact.

---

## Phase 0: Repository Setup

### Step 1: Create the Two New Rasterizer Directories

**What it does:** Creates the physical starting point for the track and map rasterizers — copies of MonoGS's existing rasterizer that will be modified.

**In SplaTAM → SPLATONIC:** SPLATONIC added `track-rasterization/` and `map-rasterization/` as copies of SplaTAM's `diff-gaussian-rasterization-w-depth/`, then modified the CUDA files.

**In MonoGS:** Copy from `submodules/diff-gaussian-rasterization/`, not from SPLATONIC's rasterizers (which are missing MonoGS features).

**Commands:**
```bash
cd /home/kislay/Documents/mpi/temp2/MonoGS
cp -r submodules/diff-gaussian-rasterization track-rasterization
cp -r submodules/diff-gaussian-rasterization map-rasterization
```

**Files created:**
```
MonoGS/track-rasterization/
    cuda_rasterizer/config.h, auxiliary.h, forward.cu, forward.h, backward.cu,
                   backward.h, rasterizer.h, rasterizer_impl.cu, rasterizer_impl.h,
                   helper_math.h, math.h
    rasterize_points.cu, rasterize_points.h, ext.cpp, setup.py
    diff_gaussian_rasterization/__init__.py
    third_party/glm/

MonoGS/map-rasterization/    ← identical starting state
```

**Verify:** Both directories exist and contain the same files as `submodules/diff-gaussian-rasterization/`.

---

## Phase 1: CUDA Changes (Do in Both Directories Unless Stated Otherwise)

### Step 2: Update `config.h` — Add `MAX_NUM_RENDERED`, Change Semantic of `BLOCK_X/Y`

**What it does:** Adds a compile-time cap on the sort buffer size (eliminates dynamic `cudaMalloc` at inference time) and changes the block-size constants from tile-dimension semantics to per-pixel-thread-count semantics. The numeric values of `BLOCK_X`/`BLOCK_Y` stay the same, but their meaning changes: they no longer describe a tile's pixel dimensions — they describe how many threads cooperate per pixel.

**In SplaTAM/SPLATONIC:**
- `BLOCK_X=16, BLOCK_Y=16` = 16×16 pixel tile, one block per tile, 256 threads (each handles one pixel)
- SPLATONIC track-rasterization: `BLOCK_X=16, BLOCK_Y=16, MAX_NUM_RENDERED=4000000`
- SPLATONIC map-rasterization: `BLOCK_X=4, BLOCK_Y=4, MAX_NUM_RENDERED=16000000`

**In MonoGS (current):** `BLOCK_X=16, BLOCK_Y=16` only — no `MAX_NUM_RENDERED`.

**After change:**
- **track-rasterization:** `BLOCK_X=16, BLOCK_Y=16` (256 threads per pixel), `MAX_NUM_RENDERED=4000000`
- **map-rasterization:** `BLOCK_X=4, BLOCK_Y=4` (16 threads per pixel), `MAX_NUM_RENDERED=16000000`

**File:** `track-rasterization/cuda_rasterizer/config.h` and `map-rasterization/cuda_rasterizer/config.h`

**Change:** Add `#define MAX_NUM_RENDERED 4000000` (track) or `16000000` (map) before `#endif`. Change `BLOCK_X=4, BLOCK_Y=4` in map-rasterization.

**Verify:** Both files compile without error when included in a test translation unit.

---

### Step 3: Add `lowest_alpha_coeff` to `auxiliary.h`

**What it does:** Defines the preemptive alpha-culling threshold. During key generation (in `preprocessCUDA`), any Gaussian whose log-alpha at a sampled pixel is below this threshold produces `alpha < exp(-5.54) ≈ 0.004` — effectively invisible. These Gaussians never enter the sort pipeline, reducing sort keys and render work.

**In SplaTAM:** No such constant. All Gaussians covering a tile are emitted as sort keys.

**In SPLATONIC (`auxiliary.h:41`):**
```cpp
const float lowest_alpha_coeff = 5.54126354515842f;
```

**In MonoGS:** MonoGS's `auxiliary.h` does not have this. Add it after the existing `#include` / `#define BLOCK_SIZE` lines.

**File:** `track-rasterization/cuda_rasterizer/auxiliary.h` AND `map-rasterization/cuda_rasterizer/auxiliary.h`

**Change:** Add after line defining `NUM_WARPS`:
```cpp
// Preemptive alpha-culling threshold. Gaussians with log-alpha below this
// contribute < 0.4% alpha at the sampled pixel → skip key emission entirely.
const float lowest_alpha_coeff = 5.54126354515842f;
```

**Verify:** Grep shows the constant is present in both files.

---

### Step 4: Add `pixel_range` / `pixel_coords` to `rasterizer.h` Forward Interface

**What it does:** Extends the C++ Rasterizer interface to accept the two new sparse pixel inputs. Every caller (Python bridge → C++ entry → CUDA kernel) must thread these pointers through.

**In SplaTAM:** `Rasterizer::forward()` has no pixel arguments.

**In MonoGS (current):** `Rasterizer::forward()` already has extra MonoGS args (`projmatrix_raw`, `theta`, `rho`, `n_touched`, `out_opacity`) that SplaTAM doesn't have. These **must be kept**.

**File:** `track-rasterization/cuda_rasterizer/rasterizer.h` AND `map-rasterization/cuda_rasterizer/rasterizer.h`

**Function:** `CudaRasterizer::Rasterizer::forward()` static declaration

**Change:** Insert two new parameters after `tan_fovy` and before `prefiltered`:
```cpp
float tan_fovx, float tan_fovy,
const int* pixel_range,    // NEW: prefix-sum offsets, size = (num_tiles + 1)
const int* pixel_coords,   // NEW: sampled pixel (x,y) as int2, size = num_pixels
bool prefiltered,
```
Keep ALL existing MonoGS parameters (`projmatrix_raw`, `theta`, `rho`, `n_touched`, `out_opacity`).

**Verify:** `rasterizer.h` compiles cleanly. The existing MonoGS rasterizer's `rasterizer_impl.cu` won't compile yet (it calls `Rasterizer::forward` with the old signature) — that's fixed in Step 8.

---

### Step 5: Modify `preprocessCUDA` in `forward.cu` — Fused Pixel Key Generation

**What it does:** Replaces the two-pass tile fan-out (count tiles per Gaussian → prefix sum → `duplicateWithKeys`) with a single-pass fused loop: for each Gaussian, iterate over covered tiles, look up sampled pixels in each tile, evaluate the Gaussian's power at each pixel, and emit a sort key directly if the power passes the alpha threshold.

**In SplaTAM `preprocessCUDA`:**
```cpp
// At the end of preprocessCUDA, record tile count:
tiles_touched[idx] = (rect_max.x - rect_min.x) * (rect_max.y - rect_min.y);
// Key generation is done separately by duplicateWithKeys kernel
```

**In MonoGS (current) `preprocessCUDA`:** Same tile-count pattern plus MonoGS's projmatrix_raw / theta / rho Jacobian computation. The key emission still happens in a separate `duplicateWithKeys` kernel.

**In SPLATONIC `preprocessCUDA` (`forward.cu:164-351`):** Receives `pixel_range` and `pixel_coords` as new parameters. Instead of setting `tiles_touched[idx]`, it runs an inner double loop over tiles and pixels, evaluates `power = log_opacity - 0.5 * conic · d²`, checks `power > -lowest_alpha_coeff`, and if it passes, atomically claims a slot in `gaussian_keys_unsorted` / `gaussian_values_unsorted`.

**File:** `track-rasterization/cuda_rasterizer/forward.cu` AND `map-rasterization/cuda_rasterizer/forward.cu`

**Function:** `preprocessCUDA` kernel

**Changes:**
1. Add `const int* pixel_range` and `const int2* pixel_coords` to `preprocessCUDA`'s parameter list (after existing params, before the closing `)`).
2. Add `int* num_rendered_ptr` parameter (atomic counter for emitted keys).
3. Add `uint64_t* gaussian_keys_unsorted` and `int* gaussian_values_unsorted` parameters (output sort buffer).
4. **Remove** the line `tiles_touched[idx] = ...` at the end of the function.
5. **Add** the fused pixel key generation loop in its place:

```cpp
// Fused key generation — replaces duplicateWithKeys
for (int tile_y = rect_min.y; tile_y < rect_max.y; ++tile_y) {
    for (int tile_x = rect_min.x; tile_x < rect_max.x; ++tile_x) {
        int tile_id = tile_y * tile_grid.x + tile_x;
        int pstart = pixel_range[tile_id];
        int pend   = pixel_range[tile_id + 1];
        for (int k = pstart; k < pend; ++k) {
            int2 pix_coord = pixel_coords[k];       // (x, y)
            float2 d = { (float)pix_coord.x - p_proj.x,
                         (float)pix_coord.y - p_proj.y };
            float power = -0.5f * (conic.x*d.x*d.x
                                 + 2.0f*conic.y*d.x*d.y
                                 + conic.z*d.y*d.y);
            if (power > lowest_alpha_coeff) continue; // preemptive cull
            uint32_t depth_bits = *reinterpret_cast<uint32_t*>(&depths[idx]);
            uint32_t pix_idx = (uint32_t)k;           // index into pixel_coords
            uint64_t key = ((uint64_t)pix_idx << 32) | (uint64_t)depth_bits;
            int slot = atomicAdd(num_rendered_ptr, 1);
            if (slot >= MAX_NUM_RENDERED) return;      // overflow guard
            gaussian_keys_unsorted[slot] = key;
            gaussian_values_unsorted[slot] = idx;      // Gaussian index
        }
    }
}
```

**Important:** Keep ALL existing MonoGS-specific logic in `preprocessCUDA` unchanged:
- `projmatrix_raw` use for camera position correction
- `theta` / `rho` Jacobian storage (these go into `GeometryState` for the backward pass)
- Frustum culling, projection, covariance, SH evaluation — all unchanged

6. Update the `FORWARD::preprocess()` wrapper function at the bottom of `forward.cu` to pass the new parameters to `preprocessCUDA`.

**Also update `forward.h`:** Add the new parameter declarations to the `FORWARD::preprocess()` signature.

**Verify:** `preprocessCUDA` compiles. The `tiles_touched` field is no longer written (grep should find no write to `tiles_touched[idx]` in the modified file).

---

### Step 6: Replace the Render Kernel in `forward.cu` — Pixel-Parallel + Warp Prefix-Scan

**What it does:** Replaces the tile-parallel `renderCUDA` (one block per 16×16 tile, each thread handles one pixel independently) with a pixel-parallel version (one block per sampled pixel, all `BLOCK_SIZE` threads cooperate to blend that pixel's Gaussians in depth order).

The key algorithmic change is the **warp prefix-scan**: in the old kernel, each thread computed its own transmittance sequentially as `T *= (1 - alpha)`. In the new kernel, multiple threads process different Gaussians for the same pixel simultaneously. To accumulate transmittance correctly across threads, a `__shfl_up_sync` prefix product propagates the running `T` through a warp.

**In SplaTAM/MonoGS current `renderCUDA`:**
```
grid = (num_tiles_x, num_tiles_y, 1)   // one block per tile
block = (BLOCK_X, BLOCK_Y, 1)          // 16×16 = 256 threads
Each thread: handles pixel at (blockIdx + threadIdx offset), loops serially over Gaussians in tile
T running is per-thread, updated sequentially: T *= (1 - alpha)
n_touched: atomicAdd(&n_touched[id], 1) when T > 0.5
```

**In SPLATONIC `renderCUDAPure` (track) / `renderCUDA` (map):**
```
grid = (num_sampled_pixels, 1, 1)      // one block per pixel
block = (BLOCK_X, BLOCK_Y, 1)          // 256 (track) or 16 (map) threads
All threads: work on SAME pixel, each handles a different Gaussian
T accumulation: warp prefix-scan via __shfl_up_sync
```

**File:** `track-rasterization/cuda_rasterizer/forward.cu` AND `map-rasterization/cuda_rasterizer/forward.cu`

**Function:** `renderCUDA` (rename to `renderCUDAPure` in track-rasterization if following SPLATONIC naming, or keep `renderCUDA`)

**New signature:**
```cpp
__global__ void renderCUDA(
    const uint2* __restrict__ pixel_ranges,  // [num_pixels] start/end in point_list
    const int2*  __restrict__ pixel_coords,  // [num_pixels] (x, y) for each pixel
    const int*   __restrict__ point_list,    // sorted Gaussian indices
    int W, int H,
    const float2* __restrict__ points_xy_image,
    const float4* __restrict__ conic_opacity,
    float* __restrict__ final_T,
    uint32_t* __restrict__ n_contrib,
    int* __restrict__ n_touched,     // MonoGS: MUST preserve this output
    const float* __restrict__ bg_color,
    float* __restrict__ out_color,
    float* __restrict__ out_depth,
    float* __restrict__ out_opacity,
    const float* __restrict__ features,
    const float* __restrict__ depths_precomp,
    int num_pixels)
```

**New body structure:**
```cpp
int pixel_id = blockIdx.x;
if (pixel_id >= num_pixels) return;

int lane     = threadIdx.x % 32;
int warp_idx = threadIdx.x / 32;

// Shared memory: one T slot per warp (for inter-warp T handoff)
__shared__ float collected_T[NUM_WARPS];
if (threadIdx.x < NUM_WARPS) collected_T[threadIdx.x] = 1.0f;
__syncthreads();

int2 pix   = pixel_coords[pixel_id];
int  pix_x = pix.x,  pix_y = pix.y;
uint2 range = pixel_ranges[pixel_id];

float T_running = 1.0f;      // transmittance product for all prior warps
float C[NUM_CHANNELS] = {};
float D = 0.0f;
uint32_t contributor = 0;
bool done = (range.x == range.y);

int rounds = (range.y - range.x + BLOCK_SIZE - 1) / BLOCK_SIZE;
for (int r = 0; r < rounds; ++r) {
    __syncthreads();
    if (lane == 0) T_running = collected_T[warp_idx];
    T_running = __shfl_sync(~0u, T_running, 0);  // broadcast to all lanes

    int g = range.x + r * BLOCK_SIZE + threadIdx.x;
    bool in_range = (g < range.y);

    float alpha = 0.0f;
    int   gid   = 0;
    float depth = 0.0f;
    float feat[NUM_CHANNELS] = {};

    if (in_range && !done) {
        gid = point_list[g];
        float2 p_xy  = points_xy_image[gid];
        float4 con_op = conic_opacity[gid];
        float2 d = { (float)pix_x - p_xy.x, (float)pix_y - p_xy.y };
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

    // Warp-level inclusive prefix product of (1-alpha) using __shfl_up_sync
    float one_minus_alpha = 1.0f - alpha;
    float prefix = one_minus_alpha;
    for (int offset = 1; offset < 32; offset <<= 1) {
        float tmp = __shfl_up_sync(~0u, prefix, offset);
        if (lane >= offset) prefix *= tmp;
    }
    // prefix[lane] = product(1-alpha) for lanes [0..lane] inclusive
    // T_before_me  = T_running * prefix / one_minus_alpha
    float T_before_me = T_running * (lane > 0 ?
        __shfl_up_sync(~0u, prefix, 1) : 1.0f);
    // (lane==0: no predecessors in this warp, T_before_me = T_running)

    if (in_range && !done && alpha > 1.0f / 255.0f) {
        float weight = alpha * T_before_me;
        for (int ch = 0; ch < NUM_CHANNELS; ++ch)
            C[ch] += feat[ch] * weight;
        D += depth * weight;
        ++contributor;

        // MonoGS n_touched: Gaussian is visible when transmittance > 0.5
        if (T_before_me > 0.5f)
            atomicAdd(&n_touched[gid], 1);    // CRITICAL — must keep for MonoGS

        if (T_before_me * one_minus_alpha < 0.0001f) done = true;
    }

    // Warp leader writes total warp T to shared memory for the next round
    if (lane == 31)
        collected_T[warp_idx] = prefix * T_running;  // full warp product
    __syncthreads();

    if (__syncthreads_or(done)) break;
}

// Thread 0 writes pixel output
if (threadIdx.x == 0) {
    float T_final = 1.0f;   // approximate; thread 0 is first, has T_before_me = T_running
    // More precisely: compute T_final from T_running * full-warp prefix products
    // For simplicity, use the running T at this point
    final_T[pixel_id]   = T_running;  // transmittance remaining after all Gaussians
    n_contrib[pixel_id] = contributor;
    int pix_linear = pix_y * W + pix_x;
    for (int ch = 0; ch < NUM_CHANNELS; ++ch)
        out_color[pix_linear * NUM_CHANNELS + ch] =
            C[ch] + T_running * bg_color[ch];  // alpha compositing with bg
    out_depth[pix_linear]   = D;
    out_opacity[pix_linear] = 1.0f - T_running;
}
```

**MonoGS critical preservation:**
- `atomicAdd(&n_touched[gid], 1)` when `T_before_me > 0.5f` — **this drives keyframe selection and SLAM pruning in MonoGS**. If this is missing, MonoGS's `FrontEnd.is_keyframe()` breaks silently.
- The `n_touched` pointer must remain in the kernel signature and be passed through from `rasterizer_impl.cu`.

**Also update `FORWARD::render()` wrapper** in `forward.cu` to pass `n_touched` and `pixel_coords` to the new kernel.

**Verify:** Kernel compiles. `atomicAdd(&n_touched[gid], 1)` is present. `__shfl_up_sync` is present.

---

### Step 7: Modify `backward.cu` — Pixel-Parallel Backward Kernel

**What it does:** Mirrors the forward kernel dispatch change. Instead of one block per tile (with each thread handling one pixel's backward pass), one block per sampled pixel with all threads cooperating on that pixel's Gaussian list in reverse.

**In SplaTAM/MonoGS current `backward.cu`:**
```
grid = (num_tiles_x, num_tiles_y, 1)
Each thread handles one pixel, iterates over Gaussians in tile back-to-front
atomicAdd scatters dL_dmean2D, dL_dconic, dL_dopacity, dL_dcolors per Gaussian
```

**In SPLATONIC `backward.cu`:**
```
grid = (num_sampled_pixels, 1, 1)
All threads work on one pixel's Gaussian list in reverse
Same warp prefix-scan for backward T accumulation
atomicAdd pattern unchanged (same atomic scatter)
```

**File:** `track-rasterization/cuda_rasterizer/backward.cu` AND `map-rasterization/cuda_rasterizer/backward.cu`

**Function:** `renderCUDA` in `backward.cu`

**Changes:**
1. Add `const int2* pixel_coords` and `int num_pixels` to the backward `renderCUDA` signature.
2. Change block dispatch: `pixel_id = blockIdx.x` (not `(blockIdx.y * gridDim.x + blockIdx.x)`).
3. Recover pixel `(x, y)` from `pixel_coords[pixel_id]`.
4. Range cap: `range.y = range.x + n_contrib[pixel_id]` — limits backward to exactly the Gaussians the forward rendered (same logic as the original, now per-pixel not per-tile-pixel).
5. Same warp prefix-scan structure as the forward kernel for backward T accumulation.
6. `atomicAdd` for gradient scatter is **unchanged** — same four gradient tensors (`dL_dmean2D`, `dL_dconic2D`, `dL_dopacity`, `dL_dcolors`). These are still needed because multiple pixel-blocks can reference the same Gaussian.

**MonoGS critical preservation:**
- The backward kernel in MonoGS calls `BACKWARD::preprocess()` after `BACKWARD::render()`. The `dL/d_tau` pose Jacobian is computed in `BACKWARD::preprocess()`, NOT in `BACKWARD::render()`. This backward preprocess is **not touched** — it operates per-Gaussian and is independent of the tile-vs-pixel dispatch. Only `BACKWARD::render()` changes dispatch; `BACKWARD::preprocess()` stays entirely unchanged.

**Verify:** Backward kernel compiles. `atomicAdd` for gradients is present. `BACKWARD::preprocess` is not modified.

---

### Step 8: Modify `rasterizer_impl.cu` — Remove Prefix-Sum + `duplicateWithKeys`, Add Pixel-Indexed Dispatch

**What it does:** Removes two pipeline steps (prefix-sum over tile counts, `duplicateWithKeys` fan-out) and adds the pixel-indexed sort and pixel-parallel render dispatch. Also threads the new `pixel_range`/`pixel_coords` pointers through from the Rasterizer interface to the CUDA kernels.

**In SplaTAM/MonoGS current `Rasterizer::forward()` pipeline:**
```
1. FORWARD::preprocess(...)          → per-Gaussian: project, SH, conic; writes tiles_touched[i]
2. cub::DeviceScan::InclusiveSum(tiles_touched → point_offsets)   ← REMOVE
3. duplicateWithKeys<<<>>>()         ← REMOVE (fused into preprocess now)
4. cub::DeviceRadixSort::SortPairs(key=tile_id|depth, val=gaussian_id)
5. identifyTileRanges<<<>>>()        ← unchanged (same kernel, now over pixels)
6. FORWARD::render<<<(tile_grid_x, tile_grid_y)>>>()  ← change to (num_pixels, 1)
```

**After modification:**
```
1. FORWARD::preprocess(..., pixel_range, pixel_coords, num_rendered_dev, keys, vals)
   → atomically emits (pixel_idx|depth, gaussian_id) keys for each (Gaussian, pixel) pair
   → num_rendered_dev contains total keys emitted
2. cudaMemcpy num_rendered_host from num_rendered_dev
3. cub::DeviceRadixSort::SortPairs(key=pixel_idx|depth, val=gaussian_id)
4. identifyTileRanges<<<>>>()   [same kernel, now produces per-pixel ranges]
5. FORWARD::render<<<(num_sampled_pixels, 1, 1), BLOCK_SIZE>>>()
```

**File:** `track-rasterization/cuda_rasterizer/rasterizer_impl.cu` AND `map-rasterization/cuda_rasterizer/rasterizer_impl.cu`

**Function:** `CudaRasterizer::Rasterizer::forward()`

**Changes:**
1. Add `const int* pixel_range, const int* pixel_coords` to `Rasterizer::forward()` definition (matching the interface declaration from Step 4).
2. Add `int* num_rendered_dev` atomic counter to `GeometryState` or allocate separately; initialize to 0 before calling preprocess.
3. **Remove** the `cub::DeviceScan::InclusiveSum` call.
4. **Remove** the `duplicateWithKeys<<<>>>` kernel launch.
5. Pass `pixel_range`, `pixel_coords`, `num_rendered_dev`, `gaussian_keys_unsorted`, `gaussian_values_unsorted` to `FORWARD::preprocess()`.
6. After preprocess: `cudaMemcpy(&num_rendered, num_rendered_dev, sizeof(int), cudaMemcpyDeviceToHost)`.
7. The CUB radix sort call remains but now sorts pixel-indexed keys (no code change to the sort call itself — it operates on abstract `(key, value)` pairs).
8. `identifyTileRanges` call is unchanged — same kernel code, now finding per-pixel range boundaries.
9. Change the render launch:
   - Old: `dim3 grid((W + BLOCK_X - 1) / BLOCK_X, (H + BLOCK_Y - 1) / BLOCK_Y, 1)`
   - New: `int num_pixels = /* total sampled pixels read from pixel_range or passed in */; FORWARD::render<<<num_pixels, block>>>(..., num_pixels)`
10. Pass `n_touched` through to the render launch (it's already in MonoGS's existing `Rasterizer::forward` — keep it).
11. Use `MAX_NUM_RENDERED` (from `config.h`) for the static sort buffer size:
```cpp
// In binning buffer allocation — use static size instead of dynamic num_rendered
size_t binning_chunk_size = required<BinningState>(MAX_NUM_RENDERED);
```

**MonoGS critical preservation:**
- `n_touched` pointer passed from `Rasterizer::forward()` to the render kernel — keep.
- `projmatrix_raw`, `theta`, `rho` passed to `FORWARD::preprocess()` — keep.
- `BACKWARD::render()` then `BACKWARD::preprocess()` call sequence in `Rasterizer::backward()` — keep the preprocess step unchanged; only update the render launch dimensions.

**Verify:** Pipeline compiles. `duplicateWithKeys` and `InclusiveSum` are gone. Render grid is 1D.

---

### Step 9: Modify `rasterize_points.cu` — Add Tensor Arguments + Static Buffer

**What it does:** Threads the Python-side `pixel_range` and `pixel_coords` tensors through the C++ entry point down to the CUDA engine. Also switches to a static pre-allocated sort buffer.

**In SplaTAM/MonoGS current `rasterize_points.cu`:**
```cpp
RasterizeGaussiansCUDA(background, means3D, colors, opacity, scales, rotations,
                       scale_modifier, cov3D_precomp, viewmatrix, projmatrix,
                       projmatrix_raw, tan_fovx, tan_fovy,
                       image_height, image_width, ...)
// Dynamic binning buffer: sized by num_rendered * keys_bytes + ...
```

**In SPLATONIC:** Two new `const torch::Tensor&` arguments added; binning buffer uses `MAX_NUM_RENDERED`.

**File:** `track-rasterization/rasterize_points.cu` AND `map-rasterization/rasterize_points.cu`

**Function:** `RasterizeGaussiansCUDA()` and `RasterizeGaussiansBackwardCUDA()`

**Changes to `RasterizeGaussiansCUDA`:**
1. Add two new parameters after `tan_fovy`:
```cpp
const torch::Tensor& pixel_range,   // int32 [num_tiles+1]
const torch::Tensor& pixel_coords,  // int32 [N, 2] (as int2 array)
```
2. Compute `num_sampled_pixels` from `pixel_range` last element (or pass it explicitly).
3. Change binning buffer allocation to use `MAX_NUM_RENDERED` as static cap:
```cpp
torch::Tensor binningBuffer = torch::empty(
    {(signed long)required<BinningState>(MAX_NUM_RENDERED)},
    options.dtype(torch::kByte).device(means3D.device()));
```
4. Pass `pixel_range.contiguous().data_ptr<int>()` and `pixel_coords.contiguous().data_ptr<int>()` (cast to `int2*` in the CUDA engine) to `CudaRasterizer::Rasterizer::forward(...)`.
5. Return `num_pixel` (total sampled pixels, for backward) instead of `num_rendered`.

**Changes to `RasterizeGaussiansBackwardCUDA`:**
1. Add `const torch::Tensor& pixel_coords` parameter — needed for backward pixel iteration.
2. Pass to `CudaRasterizer::Rasterizer::backward(...)`.

**ext.cpp:** Add `pixel_range` and `pixel_coords` arguments to the pybind11 registration of `rasterize_gaussians` and `rasterize_gaussians_backward`.

**Verify:** `rasterize_points.cu` compiles. Pybind signature matches `__init__.py` (Step 10).

---

### Step 10: Modify `diff_gaussian_rasterization/__init__.py` — Python Autograd Bridge

**What it does:** Forwards `pixel_range` and `pixel_coords` tensors from the Python `render()` call through PyTorch's autograd mechanism to the CUDA forward/backward functions.

**In MonoGS current `__init__.py`:** Already extended vs original 3DGS to add `theta`, `rho`, `n_touched`, `out_opacity`. Does NOT have `pixel_range`/`pixel_coords`.

**File:** `track-rasterization/diff_gaussian_rasterization/__init__.py` (renamed to `track_rasterization/` by setup.py — edit the file at the path but the import name will be `track_rasterization`) AND `map-rasterization/diff_gaussian_rasterization/__init__.py`

**Class:** `_RasterizeGaussians(torch.autograd.Function)`

**Changes to `forward()`:**
1. Add `pixel_range` and `pixel_coords` parameters to `_RasterizeGaussians.forward()`.
2. Include them in the `args` tuple passed to `_C.rasterize_gaussians(*args)`. Insert them after `tanfovy` and before `image_height` (matching the C++ pybind order from Step 9).
3. Save `pixel_coords` in `ctx.save_for_backward(...)` (needed by backward).
4. Return value is still `(color, radii, depth, opacity, n_touched)` — unchanged.

**Changes to `backward()`:**
1. Unpack `pixel_coords` from `ctx.saved_tensors`.
2. Include `pixel_coords` in the args to `_C.rasterize_gaussians_backward(*args)`.
3. Return `None` for `pixel_range` and `pixel_coords` gradients (they are index tensors, no gradient).

**Changes to `GaussianRasterizer.forward()`:**
1. Add `pixel_range=None, pixel_coords=None` as optional kwargs.
2. Pass them into `_RasterizeGaussians.apply(...)`.

**MonoGS critical preservation:**
- `theta`, `rho` parameters remain.
- `grad_tau` extraction and split into `grad_rho`/`grad_theta` remains unchanged.
- `n_touched` return value remains.

**Verify:** `from track_rasterization import GaussianRasterizer` works after install. `from map_rasterization import GaussianRasterizer` works after install.

---

### Step 11: Modify `setup.py` — Unique Package Names

**What it does:** Gives each new rasterizer a distinct Python package name so they can be imported separately.

**File:** `track-rasterization/setup.py` AND `map-rasterization/setup.py`

**Changes:**

`track-rasterization/setup.py`:
```python
setup(
    name="track_rasterization",
    packages=["track_rasterization"],
    package_dir={"track_rasterization": "diff_gaussian_rasterization"},
    ext_modules=[CUDAExtension(
        name="track_rasterization._C",
        sources=[...],
        ...
    )],
    ...
)
```

`map-rasterization/setup.py`:
```python
setup(
    name="map_rasterization",
    packages=["map_rasterization"],
    package_dir={"map_rasterization": "diff_gaussian_rasterization"},
    ext_modules=[CUDAExtension(
        name="map_rasterization._C",
        sources=[...],
        ...
    )],
    ...
)
```

The `name` in `ext_modules` must match: `track_rasterization._C` and `map_rasterization._C` respectively.

**Verify:** `pip install -e track-rasterization/` and `pip install -e map-rasterization/` succeed without error.

---

### Step 12: Build and Install Both Rasterizers

```bash
cd /home/kislay/Documents/mpi/temp2/MonoGS
pip install -e track-rasterization/
pip install -e map-rasterization/
```

**Smoke test:**
```python
from track_rasterization import GaussianRasterizer as TrackRasterizer
from map_rasterization import GaussianRasterizer as MapRasterizer
print("Both rasterizers imported successfully")
```

**Verify:** Both import without `ImportError`. Run a tiny forward pass with dummy tensors to confirm the CUDA kernels launch (a shape error is OK at this stage; a segfault means the kernel launch config is wrong).

---

## Phase 2: Python Utilities

### Step 13: Create `MonoGS/utils/mask_utils.py`

**What it does:** Implements the three sparse pixel sampling functions needed by the tracking and mapping loops.

**In SplaTAM:** No such file. Dense full-image renders are used everywhere.

**In SPLATONIC:** `utils/mask_utils.py` with three functions.

**In MonoGS:** Copy `SPLATONIC/utils/mask_utils.py` verbatim. It has no SplaTAM-specific imports and works as-is.

**File:** `MonoGS/utils/mask_utils.py` (new file)

**Functions to include:**
- `compute_gradient_mag(image)` — Sobel gradient magnitude via `F.conv2d`. Used by `adaptive_random_sampling`.
- `generate_random_mask(image_size, tile_size=16, device='cuda')` — One random pixel per 16×16 tile. Used for tracking. Returns `(mask [H,W bool], offsets [int32], sorted_coords [int32])`. The `tile_size=16` matches `track-rasterization/config.h`'s `BLOCK_X=16, BLOCK_Y=16`.
- `adaptive_random_sampling(image, num_samples, epsilon=0.001)` — Gradient-magnitude-weighted CDF sampling. Used for mapping sparse passes. Returns `mask [H,W bool]`.
- `get_pixel_info(mask, tile_size=16)` — Converts a bool mask to `(offsets int32 [num_tiles+1], sorted_coords int2 [N])` that the CUDA kernel reads. Call with `tile_size=16` for tracking, `tile_size=4` for mapping (matching `map-rasterization/config.h`'s `BLOCK_X=4`).

**MonoGS note:** MonoGS already has `utils/slam_utils.py:image_gradient()` using Scharr filters. `compute_gradient_mag` uses Sobel — both produce gradient magnitudes and the difference is negligible. Either is fine; keep the SPLATONIC version for simplicity.

**Verify:** `from utils.mask_utils import generate_random_mask, adaptive_random_sampling, get_pixel_info` works. Run `generate_random_mask((480, 640), tile_size=16)` and confirm the mask has exactly 30×40=1200 True pixels.

---

### Step 14: Add `calc_ssim_shuffled_packed` to `loss_utils.py`

**What it does:** Computes SSIM on a sparse, non-contiguous set of pixels by extracting them, shuffling, concatenating, and packing into a synthetic 2D patch.

**Why needed:** Standard 2D SSIM requires spatially contiguous pixel neighborhoods. The sparse pixels selected by `adaptive_random_sampling` are scattered across the image. Standard SSIM applied directly to them is meaningless. The shuffle-and-pack trick creates a synthetic image patch whose local statistics approximate the global statistics of the sampled pixels.

**In SplaTAM:** Not needed — all renders are dense, standard `calc_ssim` works.

**In MonoGS `gaussian_splatting/utils/loss_utils.py`:** Currently has `l1_loss` and `ssim`. Add after the existing functions.

**File:** `MonoGS/gaussian_splatting/utils/loss_utils.py`

**Function to add:**
```python
def calc_ssim_shuffled_packed(img1, img2, mask, window_size=4, stride=4):
    """SSIM on sparse pixels defined by a boolean mask [H,W].
    Pixels are extracted, shuffled, concatenated, and reshaped into a
    synthetic 2D patch so standard SSIM can be applied."""
    # Extract: [3, N]
    pix1 = img1[:, mask]
    pix2 = img2[:, mask]
    N = pix1.shape[1]
    if N < 64:
        return l1_loss(pix1, pix2)   # fallback: too few pixels for SSIM window

    # Shuffle (break spatial correlations in the packed patch)
    perm = torch.randperm(N, device=img1.device)
    pix1_shuf = pix1[:, perm]
    pix2_shuf = pix2[:, perm]

    # Concatenate original + shuffled: [3, 2N]
    cat1 = torch.cat([pix1, pix1_shuf], dim=1)
    cat2 = torch.cat([pix2, pix2_shuf], dim=1)

    # Pack into synthetic 2D patch: [1, 3, 64, 2N//64]
    H_synth = 64
    W_synth = cat1.shape[1] // H_synth
    cat1 = cat1[:, :H_synth * W_synth].reshape(1, 3, H_synth, W_synth)
    cat2 = cat2[:, :H_synth * W_synth].reshape(1, 3, H_synth, W_synth)

    return ssim(cat1, cat2)
```

**Verify:** `calc_ssim_shuffled_packed(img, img, mask)` ≈ 1.0 (identity test). Correct import at top of the file.

---

## Phase 3: Render Entry Point

### Step 15: Modify `gaussian_renderer/__init__.py` — Add Sparse Dispatch to `render()`

**What it does:** Extends MonoGS's central `render()` function to optionally accept `pixel_range`/`pixel_coords` and dispatch to the track or map rasterizer. Without these arguments, it falls back to the original dense path — 100% backward compatible.

**In MonoGS current `render()` (`gaussian_splatting/gaussian_renderer/__init__.py`):**
```python
def render(viewpoint_camera, pc, pipe, bg_color, scaling_modifier=1.0, override_color=None, mask=None):
    ...
    rendered_image, radii, depth, opacity, n_touched = rasterizer(
        means3D=..., means2D=..., shs=...,
        theta=viewpoint_camera.cam_rot_delta,
        rho=viewpoint_camera.cam_trans_delta,
        ...)
    return {"render": ..., "depth": ..., "opacity": ..., "n_touched": ..., ...}
```

**File:** `MonoGS/gaussian_splatting/gaussian_renderer/__init__.py`

**Changes:**
1. Add to function signature: `pixel_range=None, pixel_coords=None, use_track_rasterizer=False, use_map_rasterizer=False`
2. Add rasterizer selection logic:
```python
if use_track_rasterizer and pixel_range is not None:
    from track_rasterization import GaussianRasterizer
elif use_map_rasterizer and pixel_range is not None:
    from map_rasterization import GaussianRasterizer
else:
    from diff_gaussian_rasterization import GaussianRasterizer  # original dense
rasterizer = GaussianRasterizer(raster_settings=raster_settings)
```
3. Pass `pixel_range` and `pixel_coords` only when they are not None:
```python
extra_kwargs = {}
if pixel_range is not None:
    extra_kwargs['pixel_range'] = pixel_range
    extra_kwargs['pixel_coords'] = pixel_coords

rendered_image, radii, depth, opacity, n_touched = rasterizer(
    means3D=means3D, means2D=means2D, shs=shs, colors_precomp=colors_precomp,
    opacities=opacity, scales=scales, rotations=rotations,
    cov3D_precomp=cov3D_precomp,
    theta=viewpoint_camera.cam_rot_delta,
    rho=viewpoint_camera.cam_trans_delta,
    **extra_kwargs)
```
4. Return dict is unchanged — `n_touched` is always returned.

**MonoGS critical preservation:**
- `theta` and `rho` are always passed — they are required even in the sparse rasterizers (the MonoGS-extended rasterizers you built in Phase 1 have these).
- `n_touched` is always in the return dict.
- The dense path (no `pixel_range`) is completely unchanged.

**Verify:** `render(viewpoint, gaussians, pipe, bg)` still works as before (dense path). `render(viewpoint, gaussians, pipe, bg, pixel_range=pr, pixel_coords=pc, use_track_rasterizer=True)` dispatches to `TrackRasterizer`.

---

## Phase 4: Loss Functions

### Step 16: Add `get_loss_tracking_sparse()` to `slam_utils.py`

**What it does:** Computes the tracking loss only at the sampled pixels specified by `pixel_mask`. This is the SPLATONIC tracking loss with MonoGS's specific tracking loss structure (opacity weighting, grad_mask, exposure correction).

**In SplaTAM SPLATONIC `get_sparse_loss(..., tracking=True)`:** Loss computed over `pixel_mask & depth_mask` pixels only. No grad_mask (SplaTAM doesn't have it).

**In MonoGS `get_loss_tracking_rgb` / `get_loss_tracking_rgbd`:** Uses `viewpoint.grad_mask` (edge-based mask) and `opacity` weighting. Must add intersection with `pixel_mask`.

**File:** `MonoGS/utils/slam_utils.py`

**Add new function** (or modify existing tracking loss functions to accept optional `pixel_mask`):
```python
def get_loss_tracking_sparse(config, image, depth, opacity, viewpoint, pixel_mask=None):
    """Tracking loss at sampled pixels (pixel_mask). Falls back to dense if pixel_mask is None."""
    if pixel_mask is None:
        return get_loss_tracking(config, image, depth, opacity, viewpoint)

    image_ab = torch.exp(viewpoint.exposure_a) * image + viewpoint.exposure_b
    gt_image  = viewpoint.original_image.cuda()

    # Intersect pixel_mask with grad_mask (edge-based tracking focus)
    combined_mask = pixel_mask & viewpoint.grad_mask[0].bool()

    if config["Training"]["monocular"]:
        # Opacity-weighted L1 at sampled edge pixels
        loss = (opacity[:, combined_mask] *
                torch.abs(image_ab[:, combined_mask] - gt_image[:, combined_mask])).mean()
        return loss
    else:
        alpha = config["Training"].get("alpha", 0.95)
        rgb_mask = (gt_image.sum(dim=0) > config["Training"]["rgb_boundary_threshold"])
        valid = combined_mask & rgb_mask
        l1_rgb = (opacity[:, valid] *
                  torch.abs(image_ab[:, valid] - gt_image[:, valid])).mean()
        gt_depth = viewpoint.depth.cuda()
        depth_mask = (gt_depth > 0) & combined_mask[0]
        opacity_mask = (opacity[0] > 0.95) & combined_mask
        d_mask = depth_mask & opacity_mask
        l1_depth = torch.abs(depth[0, d_mask] - gt_depth[d_mask]).mean() if d_mask.any() else 0.0
        return alpha * l1_rgb + (1.0 - alpha) * l1_depth
```

**Verify:** Returns same value as `get_loss_tracking` when `pixel_mask` is all-True. Returns a scalar tensor.

---

### Step 17: Add `get_loss_mapping_sparse()` to `slam_utils.py`

**What it does:** Computes the mapping loss only at sampled pixels, using the shuffled-packed SSIM for the photometric term. MonoGS-specific: applies exposure correction before masking.

**In SPLATONIC `get_sparse_loss(..., mapping=True)`:** L1 + SSIM-shuffled-packed over pixel_mask pixels.

**In MonoGS `get_loss_mapping_rgb` / `get_loss_mapping_rgbd`:** Full-image L1 + SSIM + depth. No opacity weighting (unlike tracking). Has exposure correction.

**File:** `MonoGS/utils/slam_utils.py`

**Add new function:**
```python
def get_loss_mapping_sparse(config, image, depth, opacity, viewpoint, pixel_mask=None):
    """Mapping loss at sparse pixels. Uses shuffled SSIM for photometric term."""
    if pixel_mask is None:
        return get_loss_mapping(config, image, depth, opacity, viewpoint)

    from gaussian_splatting.utils.loss_utils import calc_ssim_shuffled_packed

    image_ab = torch.exp(viewpoint.exposure_a) * image + viewpoint.exposure_b
    gt_image  = viewpoint.original_image.cuda()

    rgb_boundary = config["Training"]["rgb_boundary_threshold"]
    rgb_mask = (gt_image.sum(dim=0) > rgb_boundary)
    valid_mask = pixel_mask & rgb_mask

    l1 = torch.abs(image_ab[:, valid_mask] - gt_image[:, valid_mask]).mean()
    lambda_dssim = config["opt_params"].get("lambda_dssim", 0.2)
    ssim_val = calc_ssim_shuffled_packed(image_ab, gt_image, valid_mask)
    rgb_loss = (1.0 - lambda_dssim) * l1 + lambda_dssim * (1.0 - ssim_val)

    if config["Training"]["monocular"]:
        return rgb_loss

    alpha = config["Training"].get("alpha", 0.95)
    gt_depth = viewpoint.depth.cuda()
    depth_mask = (gt_depth > 0) & pixel_mask
    if depth_mask.any():
        d_loss = torch.abs(depth[0, depth_mask] - gt_depth[depth_mask]).mean()
    else:
        d_loss = torch.tensor(0.0, device=image.device)
    return alpha * rgb_loss + (1.0 - alpha) * d_loss
```

**Verify:** Returns a scalar tensor. With full-image pixel_mask, result is close to (but not identical to) `get_loss_mapping` due to shuffled SSIM.

---

## Phase 5: Frontend — Tracking Loop

### Step 18: Modify `slam_frontend.py` — Inject Sparse Pixel Mask into Tracking

**What it does:** Generates a random tile-aligned pixel mask once per frame, before the tracking iteration loop, and passes it to `render()` and the sparse loss function. The mask is reused across all tracking iterations for the same frame (not regenerated per-iteration).

**In SplaTAM SPLATONIC `splatam_sparse.py` (tracking):**
```python
# Once per frame:
pixel_mask, pixel_range, pixel_coords = generate_random_mask(image_shape, tile_size=16)
pixel_info = get_pixel_info(pixel_mask, tile_size=16)
for iter in range(num_tracking_iter):
    loss, ... = get_sparse_loss(..., pixel_mask=pixel_mask, pixel_info=pixel_info, tracking=True)
```

**In MonoGS `slam_frontend.py:FrontEnd.tracking()`:** Currently renders dense and calls `get_loss_tracking()`. No pixel mask.

**File:** `MonoGS/utils/slam_frontend.py`

**Function:** `FrontEnd.tracking(cur_frame_idx, viewpoint)`

**Changes:**
1. Add imports at top of file:
```python
from utils.mask_utils import generate_random_mask, get_pixel_info
from utils.slam_utils import get_loss_tracking_sparse
```

2. Before the tracking iteration loop (`for i in range(tracking_itr_num):`), add:
```python
# Sparse pixel mask — generated once, reused for all iterations this frame
H = viewpoint.image_height
W = viewpoint.image_width
pixel_mask, _, _ = generate_random_mask((H, W), tile_size=16, device='cuda')
pixel_info = get_pixel_info(pixel_mask, tile_size=16)
pixel_range  = pixel_info[0].cuda()   # int32 [num_tiles+1]
pixel_coords = pixel_info[1].cuda()   # int2  [num_pixels]
```

3. Inside the loop, replace:
```python
render_pkg = render(viewpoint, self.gaussians, self.pipeline_params, self.background)
```
with:
```python
render_pkg = render(viewpoint, self.gaussians, self.pipeline_params, self.background,
                    pixel_range=pixel_range, pixel_coords=pixel_coords,
                    use_track_rasterizer=True)
```

4. Replace:
```python
loss = get_loss_tracking(config, image, depth, opacity, viewpoint)
```
with:
```python
loss = get_loss_tracking_sparse(config, image, depth, opacity, viewpoint,
                                pixel_mask=pixel_mask)
```

**MonoGS critical preservation:**
- `n_touched` is still returned from `render_pkg` — used by `FrontEnd.is_keyframe()` and related logic. Do not remove it.
- `update_pose(viewpoint)` call is unchanged.
- `converged` check is unchanged.
- The pixel mask is for loss computation only — keyframe decisions still use `render_pkg["n_touched"]` which is computed by the rasterizer regardless of the pixel mask (the `atomicAdd` in the render kernel updates `n_touched` for all Gaussians that pass the T > 0.5 threshold at any sampled pixel).

**Verify:** Tracking runs without crash. `loss` is a scalar. `render_pkg["n_touched"]` is non-zero.

---

## Phase 6: Backend — Mapping Loop

### Step 19: Modify `slam_backend.py` — FLIP Schedule + Sparse/Dense Dispatch

**What it does:** Adds the FLIP 1:3 scheduling (1 dense render per 4 mapping iterations) and the sparse mapping path using gradient-weighted pixel sampling. The isotropic regularization and densification logic are unchanged.

**In SplaTAM SPLATONIC `splatam_sparse.py` (mapping):**
```python
FLIP = 4
counter = 0  # 0 = current frame (always dense), cycles for keyframes
for iter in range(num_mapping_iter):
    if counter == 0:
        loss = get_loss(...)              # dense
    else:
        pixel_mask = adaptive_random_sampling(...)
        pixel_mask |= novelty_mask
        pixel_info = get_pixel_info(pixel_mask, tile_size=4)
        loss = get_sparse_loss(...)       # sparse
    counter = (counter + 1) % FLIP
```

**In MonoGS `slam_backend.py:BackEnd.map()`:** Dense render every iteration. No FLIP. No pixel mask.

**File:** `MonoGS/utils/slam_backend.py`

**Function:** `BackEnd.map(current_window, prune=False, iters=1)`

**Changes:**
1. Add imports at top of `slam_backend.py`:
```python
from utils.mask_utils import adaptive_random_sampling, get_pixel_info
from utils.slam_utils import get_loss_mapping_sparse
```

2. Add `FLIP = 4` constant and `map_iter_counter` state. Add the counter as an instance variable initialized in `__init__`:
```python
# In BackEnd.__init__:
self.map_iter_counter = 0
```

3. Inside `BackEnd.map()`, wrap the existing render+loss call with FLIP scheduling:
```python
for iteration in range(iters):
    viewpoint = ...  # current keyframe selection (unchanged)

    use_dense = (self.map_iter_counter % FLIP == 0)
    self.map_iter_counter += 1

    if use_dense:
        # Original MonoGS dense path — unchanged
        render_pkg = render(viewpoint, self.gaussians,
                            self.pipeline_params, self.background)
        image   = render_pkg["render"]
        depth   = render_pkg["depth"]
        opacity = render_pkg["opacity"]
        loss = get_loss_mapping(config, image, depth, opacity, viewpoint, ...)
    else:
        # SPLATONIC sparse path
        gt_image = viewpoint.original_image.cuda()
        H, W = gt_image.shape[1], gt_image.shape[2]
        num_sparse = max(64, (H * W) // 64)  # ~1.6% of pixels
        pixel_mask = adaptive_random_sampling(gt_image, num_sparse)
        pixel_info = get_pixel_info(pixel_mask, tile_size=4)
        pixel_range  = pixel_info[0].cuda()
        pixel_coords = pixel_info[1].cuda()
        render_pkg = render(viewpoint, self.gaussians,
                            self.pipeline_params, self.background,
                            pixel_range=pixel_range, pixel_coords=pixel_coords,
                            use_map_rasterizer=True)
        image   = render_pkg["render"]
        depth   = render_pkg["depth"]
        opacity = render_pkg["opacity"]
        loss = get_loss_mapping_sparse(config, image, depth, opacity, viewpoint,
                                       pixel_mask=pixel_mask)

    # Isotropic regularization — MonoGS contribution, keep unchanged
    scaling = self.gaussians.get_scaling
    isotropic_loss = torch.abs(scaling - scaling.mean(dim=1, keepdim=True))
    loss += 10 * isotropic_loss.mean()

    loss.backward()
    # ... (rest of iteration: occ_aware_visibility update, optimizer step, etc.) unchanged
```

4. **Densification stats accumulation — gate on dense passes only** (per fix.md Issue 8):
```python
if use_dense:
    if render_pkg["visibility_filter"].any():
        self.gaussians.max_radii2D[render_pkg["visibility_filter"]] = torch.max(
            self.gaussians.max_radii2D[render_pkg["visibility_filter"]],
            render_pkg["radii"][render_pkg["visibility_filter"]])
        self.gaussians.add_densification_stats(
            render_pkg["viewspace_points"], render_pkg["visibility_filter"])
# Do NOT accumulate densification stats on sparse passes
```
This is because sparse renders only have gradients at sampled pixels, giving biased densification signal (over-densifying textured regions, under-densifying flat areas).

**MonoGS critical preservation:**
- `occ_aware_visibility` update from `render_pkg["n_touched"]` — done every iteration (dense and sparse), since `n_touched` is produced by both rasterizers.
- `prune` path — completely unchanged (runs after the mapping loop, not inside it).
- Isotropic regularization (`10 * mean(|s - mean(s)|)`) — unchanged.
- `keyframe_optimizers.step()` and `update_pose()` for keyframe poses — unchanged.

**Verify:** A full SLAM run completes at least one keyframe with mixed dense/sparse iterations. Loss alternates between dense (typically lower, full image) and sparse (comparable magnitude per pixel but over fewer pixels).

---

## Phase 7: Integration Verification

### Step 20: Smoke Test — Run MonoGS with SPLATONIC on a Short Sequence

**What it does:** End-to-end test on a 50-frame sequence. Confirms the full pipeline runs without crash and produces reasonable outputs.

```bash
cd /home/kislay/Documents/mpi/temp2/MonoGS
python slam.py --config configs/mono/tum_fr1_desk.yaml
```

**Checklist:**
- [ ] Tracking loop runs without CUDA error. Loss is a positive scalar.
- [ ] `render_pkg["n_touched"]` is non-zero (confirms the rasterizer's `atomicAdd` fired).
- [ ] `FrontEnd.is_keyframe()` makes at least one keyframe decision (confirms `n_touched`→visibility works).
- [ ] BackEnd mapping runs with 1:3 dense:sparse ratio. Dense iteration loss and sparse iteration loss are both finite.
- [ ] `densify_and_prune` executes at least once.
- [ ] ATE / PSNR at the end are in the expected ballpark (not orders of magnitude worse than stock MonoGS).

---

## Summary: File Change Map

| File | Action | Why |
|------|--------|-----|
| `MonoGS/track-rasterization/` | **Create** (copy from MonoGS rasterizer) | Tracking rasterizer base |
| `MonoGS/map-rasterization/` | **Create** (copy from MonoGS rasterizer) | Mapping rasterizer base |
| `*/cuda_rasterizer/config.h` | **Modify** | Add `MAX_NUM_RENDERED`; set `BLOCK_X/Y` to 16/16 (track) or 4/4 (map) |
| `*/cuda_rasterizer/auxiliary.h` | **Modify** | Add `lowest_alpha_coeff = 5.54126354515842f` |
| `*/cuda_rasterizer/rasterizer.h` | **Modify** | Add `pixel_range`/`pixel_coords` to `Rasterizer::forward()` interface |
| `*/cuda_rasterizer/forward.cu preprocessCUDA` | **Modify** | Replace tile-fan-out with fused pixel key generation + alpha cull |
| `*/cuda_rasterizer/forward.cu renderCUDA` | **Modify** | Per-pixel dispatch + warp prefix-scan + preserve `n_touched` |
| `*/cuda_rasterizer/backward.cu renderCUDA` | **Modify** | Per-pixel dispatch; `BACKWARD::preprocess` unchanged |
| `*/cuda_rasterizer/rasterizer_impl.cu` | **Modify** | Remove prefix-sum + `duplicateWithKeys`; pixel-grid launch |
| `*/rasterize_points.cu` | **Modify** | Add `pixel_range`/`pixel_coords` tensor args; static buffer |
| `*/diff_gaussian_rasterization/__init__.py` | **Modify** | Thread `pixel_range`/`pixel_coords` through autograd bridge |
| `*/setup.py` | **Modify** | Package names: `track_rasterization` / `map_rasterization` |
| `MonoGS/utils/mask_utils.py` | **Create** | Sparse pixel sampling (copy from SPLATONIC verbatim) |
| `MonoGS/gaussian_splatting/utils/loss_utils.py` | **Modify** | Add `calc_ssim_shuffled_packed()` |
| `MonoGS/gaussian_splatting/gaussian_renderer/__init__.py` | **Modify** | Add sparse dispatch to `render()` |
| `MonoGS/utils/slam_utils.py` | **Modify** | Add `get_loss_tracking_sparse()` and `get_loss_mapping_sparse()` |
| `MonoGS/utils/slam_frontend.py` | **Modify** | Generate pixel mask; call sparse render + loss in `tracking()` |
| `MonoGS/utils/slam_backend.py` | **Modify** | FLIP schedule; sparse/dense dispatch; gate densification stats |

**Unchanged:**
- `gaussian_splatting/scene/gaussian_model.py` — Gaussian parameters and Adam state
- `utils/camera_utils.py` — Camera class, `cam_rot_delta`/`cam_trans_delta`
- `utils/pose_utils.py` — `update_pose()`, `SE3_exp()`
- `utils/slam_backend.py` — prune pass, isotropic loss, keyframe pose optimization
- `cuda_rasterizer/backward.cu BACKWARD::preprocess()` — pose Jacobian computation

---

## Critical Invariants to Double-Check

1. **`n_touched` must use `atomicAdd`** — multiple pixel-blocks may reference the same Gaussian simultaneously. A non-atomic write will corrupt the count and break keyframe selection.

2. **`BACKWARD::preprocess()` is NOT modified** — it computes `dL/d_tau` (the `theta`/`rho` gradient) per-Gaussian and is entirely independent of whether the render is tile-based or pixel-based. The two-step backward (`render` → `preprocess`) pipeline structure is unchanged.

3. **`tile_size` in `get_pixel_info()` must match `BLOCK_X*BLOCK_Y` of the rasterizer** — tracking uses `tile_size=16` → `track-rasterization` with `BLOCK_X=16`; mapping uses `tile_size=4` → `map-rasterization` with `BLOCK_X=4`. Mismatch → wrong pixel-to-tile assignment → silent wrong outputs or out-of-bounds access.

4. **Dense path uses the original MonoGS rasterizer** — do not pass `pixel_range`/`pixel_coords` to it. The dispatch in `render()` handles this automatically via the `use_track_rasterizer`/`use_map_rasterizer` flags.

5. **Exposure correction before sparse masking** — in `get_loss_mapping_sparse()`, apply `exp(exposure_a) * image + exposure_b` before applying the pixel mask, not after. Otherwise exposure parameters receive zero gradient.

6. **Densification stats only on dense passes** — accumulating `xyz_gradient_accum` from sparse renders biases densification toward textured edges. Gate the `add_densification_stats` call to `use_dense == True`.
