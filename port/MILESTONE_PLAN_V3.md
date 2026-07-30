# SPLATONIC on MonoGS — Implementation Plan v3

---

## How This Plan Works

- **One sub-step = one Claude conversation = one commit = one review.**
- Every milestone ends with a `git tag`. If CUDA explodes, `git checkout milestone-N` and restart.
- Every CUDA sub-step has four verification levels: Compile / Produces Output / Matches Reference / No MonoGS Regression.
- "Review" means a **fresh Claude conversation** that reads only the diff and checks for API mismatches, missed MonoGS features, and build issues.

---

## Five Milestones

```
Milestone 1: Infrastructure
    ↓
Milestone 2: Python Pipeline
    ↓
Milestone 3: Integration (all Python wired, still dense renderer)
    ↓
Milestone 4: CUDA Port
    ↓
Milestone 5: Optimization & Validation
```

---

## Claude Conversation Protocol

**Implementation conversation (one per sub-step):**
```
Goal
  Implement <step-id>: <one-line description>

Context
  <paste only the relevant section from this plan>

Files to modify
  <list exact file paths>
  Do NOT modify any other files.

Constraint
  <key invariant, e.g. "Do not touch BACKWARD::preprocess">

Output
  Unified diff only. No prose explanation.
```

**Review conversation (immediately after):**
```
Goal
  Review the following diff for <step-id>.

Check for
  - API mismatches with the interfaces established in <dependency steps>
  - Missing MonoGS features: theta/rho Jacobians, n_touched atomicAdd, projmatrix_raw
  - Off-by-one errors in pixel index math
  - Memory alignment issues in CUDA buffers

Do not rewrite the code. Only report issues.

Diff
  <paste git diff>
```

---

## Git Rollback Strategy

```bash
# Tag after each milestone
git tag milestone-1-infra
git tag milestone-2-python
git tag milestone-3-integration
git tag milestone-4a-cuda-interfaces   # after CU1-CU2
git tag milestone-4b-cuda-preprocess   # after CU3
git tag milestone-4c-cuda-forward      # after CU4-CU5
git tag milestone-4d-cuda-backward     # after CU6-CU8
git tag milestone-4e-cuda-live         # after CU9 (sparse rasterizer active)
git tag milestone-5-validated

# Roll back
git checkout milestone-3-integration   # guaranteed working baseline
```

---

## CUDA Dependency Map

```
CU1.1 ──┐
CU1.2 ──┼──→ CU3.1 ──→ CU3.2 ──→ CU3.3 ──→ CU3.4 ──→ CU3.5 ──→ CU3.6 ──→ CU3.7
CU1.3 ──┘                                                                      │
                                                                               ↓
CU2 ────────────────────────────────────────────────────────────────→ CU3.5   │
                                                                               │
CU3.7 ──→ CU4.1 ──→ CU4.2 ──→ CU4.3 ──→ CU4.4 ──→ CU4.5 (compile)          │
              │                                                                │
              └──→ CU5.1 ──→ CU5.2 ──→ CU5.3 ──→ CU5.4 ──→ CU5.5 ──→ CU5.6 ┘
                                                                 │
                                  ┌──────────────────────────────┘
                                  ↓
                   CU5.6 ──→ CU6.1 ──→ CU6.2 ──→ CU6.3 ──→ CU6.4 (ext.cpp)
                                                               │
                                                               ↓
                                                  CU7.1 ──→ CU7.2 ──→ CU7.3 ──→ CU7.4
                                                                                   │
                   CU5.6 ──→ CU8.1 ──→ CU8.2 ──→ CU8.3 ──→ CU8.4 ──→ CU8.5     │
                                                                         │         │
                                                                         ↓         ↓
                                                                        CU9.1 ←───┘
                                                                         │
                                                                         ↓
                                                                        CU9.2 (live test)
```

---

## Kanban — Summary

| ID      | Task                                         | Depends On       | Status | Reviewed | Commit |
|---------|----------------------------------------------|------------------|--------|----------|--------|
| **Milestone 1 — Infrastructure** |||||
| I1      | Create track/map rasterizer directories       | —                | ⬜      | ⬜        |        |
| I2      | Rename packages in setup.py                   | I1               | ⬜      | ⬜        |        |
| I3      | Set config.h constants (BLOCK_X/Y, MAX_NUM)   | I1               | ⬜      | ⬜        |        |
| I4      | pip install both rasterizers                  | I2, I3           | ⬜      | —        |        |
| I5      | Add SPLATONIC keys to YAML configs            | —                | ⬜      | ⬜        |        |
| **Milestone 2 — Python Pipeline** |||||
| P1      | Create mask_utils.py                          | —                | ⬜      | ⬜        |        |
| P2      | Add calc_ssim_shuffled_packed                 | —                | ⬜      | ⬜        |        |
| P3      | Extend render() API (stub, dense path only)   | I4               | ⬜      | ⬜        |        |
| P4      | Add sparse loss functions (fallback to dense) | P2               | ⬜      | ⬜        |        |
| P5      | Wire FrontEnd tracking (mask generated)       | P1, P3, P4       | ⬜      | ⬜        |        |
| P6      | Wire BackEnd mapping + FLIP counter           | P1, P3, P4       | ⬜      | ⬜        |        |
| **Milestone 3 — Integration Validation** |||||
| INT1    | Full slam.py run, use_splatonic: false        | P5, P6           | ⬜      | —        |        |
| INT2    | Full slam.py run, use_splatonic: true         | INT1             | ⬜      | —        |        |
| INT3    | Verify FLIP counter, densification gating     | INT2             | ⬜      | —        |        |
| **Milestone 4 — CUDA Interfaces** |||||
| CU1.1   | Add pixel_range/pixel_coords to rasterizer.h  | I1               | ⬜      | ⬜        |        |
| CU1.2   | Add new params to FORWARD::preprocess decl.   | CU1.1            | ⬜      | ⬜        |        |
| CU1.3   | Add new params to FORWARD::render decl.       | CU1.1            | ⬜      | ⬜        |        |
| CU2     | Add lowest_alpha_coeff to auxiliary.h         | I1               | ⬜      | ⬜        |        |
| **Milestone 4 — preprocessCUDA** |||||
| CU3.1   | Add new params to preprocessCUDA signature   | CU1.2            | ⬜      | ⬜        |        |
| CU3.2   | Allocate num_rendered_ptr + key buffers       | CU3.1            | ⬜      | ⬜        |        |
| CU3.3   | Remove tiles_touched write                    | CU3.2            | ⬜      | ⬜        |        |
| CU3.4   | Add pixel iteration loop (no pruning yet)     | CU3.3            | ⬜      | ⬜        |        |
| CU3.5   | Add alpha pruning (lowest_alpha_coeff)        | CU3.4, CU2       | ⬜      | ⬜        |        |
| CU3.6   | Add key packing and atomicAdd to slot         | CU3.5            | ⬜      | ⬜        |        |
| CU3.7   | Compile + unit test                           | CU3.6            | ⬜      | —        |        |
| **Milestone 4 — rasterizer_impl dispatch** |||||
| CU4.1   | Remove InclusiveSum call                      | CU3.7            | ⬜      | ⬜        |        |
| CU4.2   | Remove duplicateWithKeys call                 | CU4.1            | ⬜      | ⬜        |        |
| CU4.3   | Switch to static MAX_NUM_RENDERED buffer      | CU4.2            | ⬜      | ⬜        |        |
| CU4.4   | Read num_rendered via cudaMemcpy after preprocess | CU4.3        | ⬜      | ⬜        |        |
| CU4.5   | Change render grid launch (tile → pixel)      | CU4.4, CU1.3     | ⬜      | ⬜        |        |
| **Milestone 4 — forward renderCUDA** |||||
| CU5.1   | Change kernel signature (add pixel_coords)    | CU1.3            | ⬜      | ⬜        |        |
| CU5.2   | Change block→pixel mapping (blockIdx.x)       | CU5.1            | ⬜      | ⬜        |        |
| CU5.3   | Warp prefix-scan skeleton (T accumulation)    | CU5.2            | ⬜      | ⬜        |        |
| CU5.4   | Add color/depth accumulation using warp T     | CU5.3            | ⬜      | ⬜        |        |
| CU5.5   | Add n_touched atomicAdd (preserve MonoGS)     | CU5.4            | ⬜      | ⬜        |        |
| CU5.6   | Add cooperative early exit (__syncthreads_or) | CU5.5            | ⬜      | ⬜        |        |
| CU5.7   | Compile + brute-force correctness test        | CU5.6            | ⬜      | —        |        |
| CU5.8   | Regression test: n_touched + dense MonoGS match | CU5.7          | ⬜      | —        |        |
| **Milestone 4 — C++ entry + Python bridge** |||||
| CU6.1   | Add pixel_range/pixel_coords to fwd signature (rasterize_points.cu) | CU5.8 | ⬜ | ⬜ |   |
| CU6.2   | Switch to static buffer in fwd (rasterize_points.cu) | CU6.1  | ⬜      | ⬜        |        |
| CU6.3   | Add pixel_coords to backward signature        | CU6.2            | ⬜      | ⬜        |        |
| CU6.4   | Update ext.cpp pybind registrations           | CU6.3            | ⬜      | ⬜        |        |
| CU7.1   | Add pixel args to _RasterizeGaussians.forward() | CU6.4          | ⬜      | ⬜        |        |
| CU7.2   | Save pixel_coords in ctx.save_for_backward    | CU7.1            | ⬜      | ⬜        |        |
| CU7.3   | Return None for pixel args in backward()      | CU7.2            | ⬜      | ⬜        |        |
| CU7.4   | Add pixel args to GaussianRasterizer.forward() | CU7.3           | ⬜      | ⬜        |        |
| CU7.5   | End-to-end Python forward+backward test       | CU7.4            | ⬜      | —        |        |
| **Milestone 4 — backward renderCUDA** |||||
| CU8.1   | Change kernel signature (add pixel_coords)    | CU5.8            | ⬜      | ⬜        |        |
| CU8.2   | Change block→pixel mapping in backward kernel | CU8.1            | ⬜      | ⬜        |        |
| CU8.3   | Recover (pix_x, pix_y) from pixel_coords      | CU8.2            | ⬜      | ⬜        |        |
| CU8.4   | Add warp prefix-scan for backward T           | CU8.3            | ⬜      | ⬜        |        |
| CU8.5   | Verify BACKWARD::preprocess is NOT modified   | CU8.4            | ⬜      | ⬜        |        |
| CU8.6   | Compile + gradient flow test                  | CU8.5            | ⬜      | —        |        |
| **Milestone 4 — activate sparse dispatch** |||||
| CU9.1   | Implement rasterizer dispatch in render()     | CU7.5, CU8.6     | ⬜      | ⬜        |        |
| CU9.2   | Full slam.py smoke test with sparse rasterizer active | CU9.1    | ⬜      | —        |        |
| **Milestone 5 — Optimization & Validation** |||||
| V1      | Confirm FLIP counter uses real sparse rasterizer | CU9.2         | ⬜      | —        |        |
| V2      | Confirm densification gated to dense passes   | V1               | ⬜      | —        |        |
| V3      | Baseline ATE comparison on TUM fr1_desk       | V2               | ⬜      | —        |        |
| V4      | Speed benchmark (FPS tracking + mapping)      | V3               | ⬜      | —        |        |
| V5      | PSNR/SSIM comparison sparse vs dense          | V3               | ⬜      | —        |        |

---

## Milestone 1 — Infrastructure

**Time estimate:** 1 day  
**Exit condition:** Both rasterizers install and import. MonoGS baseline is unchanged.  
**Rollback:** `git checkout HEAD~N` (no tag needed — nothing breaks baseline yet)

---

### I1 — Create Rasterizer Directories

**Goal:** Physical starting point for both rasterizer copies.

**Files changed:** `MonoGS/track-rasterization/` and `MonoGS/map-rasterization/` (new)

**Why copy from MonoGS, not SPLATONIC:** SPLATONIC's rasterizers are derived from SplaTAM — they are missing `theta`/`rho` (Lie algebra pose params), `n_touched` (per-Gaussian visibility counter), and `projmatrix_raw` (corrected projection). Copying from SPLATONIC would silently drop these MonoGS features.

```bash
cd /home/kislay/Documents/mpi/temp2/MonoGS
cp -r submodules/diff-gaussian-rasterization track-rasterization
cp -r submodules/diff-gaussian-rasterization map-rasterization
diff -rq submodules/diff-gaussian-rasterization track-rasterization --exclude="*.egg-info"
# Expected: Files are identical
```

**Review checklist:**  
- [ ] Source is `submodules/diff-gaussian-rasterization` (MonoGS), not SPLATONIC's rasterizer  
- [ ] Both directories exist and are complete copies

**Commit name:** `feat: create track-rasterization and map-rasterization from MonoGS rasterizer`

---

### I2 — Rename Packages in setup.py

**Goal:** Give each rasterizer a unique Python importable name.

**Files changed:** `track-rasterization/setup.py`, `map-rasterization/setup.py`

**Change in `track-rasterization/setup.py`:**
```python
setup(
    name="track_rasterization",
    packages=["track_rasterization"],
    package_dir={"track_rasterization": "diff_gaussian_rasterization"},
    ext_modules=[CUDAExtension(
        name="track_rasterization._C",
        sources=[...],   # same sources list, unchanged
    )],
    ...
)
```

**Change in `map-rasterization/setup.py`:** Same pattern with `map_rasterization`.

**Review checklist:**  
- [ ] `name` field is different in each setup.py  
- [ ] `package_dir` mapping is present  
- [ ] `ext_modules` name prefix updated to match package name  
- [ ] `sources` list is unchanged  

**Commit name:** `feat: rename track/map rasterizer packages for independent import`

---

### I3 — Set config.h Constants

**Goal:** Set compile-time block size and sort buffer cap. These determine thread-per-pixel count and maximum sort entries.

**Files changed:** `track-rasterization/cuda_rasterizer/config.h`, `map-rasterization/cuda_rasterizer/config.h`

| Rasterizer | BLOCK_X | BLOCK_Y | BLOCK_SIZE | MAX_NUM_RENDERED | Thread-per-pixel meaning |
|------------|---------|---------|------------|------------------|--------------------------|
| track      | 16      | 16      | 256        | 4,000,000        | 256 threads per pixel |
| map        | 4       | 4       | 16         | 16,000,000       | 16 threads per pixel |

**Change in `map-rasterization/cuda_rasterizer/config.h`:**
```cpp
// Change from 16 to 4 (track keeps 16)
#define BLOCK_X 4
#define BLOCK_Y 4
// Add new:
#define MAX_NUM_RENDERED 16000000
```

**Change in `track-rasterization/cuda_rasterizer/config.h`:**
```cpp
// BLOCK_X/BLOCK_Y stay at 16
// Add new:
#define MAX_NUM_RENDERED 4000000
```

**Review checklist:**  
- [ ] Track: BLOCK_X=16, BLOCK_Y=16, MAX_NUM_RENDERED=4000000  
- [ ] Map: BLOCK_X=4, BLOCK_Y=4, MAX_NUM_RENDERED=16000000  
- [ ] `#define MAX_NUM_RENDERED` is present in both files  

**Commit name:** `feat: set BLOCK_X/Y and MAX_NUM_RENDERED in track/map config.h`

---

### I4 — Install Both Rasterizers

```bash
pip install -e track-rasterization/
pip install -e map-rasterization/
```

**Smoke test:**
```python
from track_rasterization import GaussianRasterizer as TrackRast
from map_rasterization import GaussianRasterizer as MapRast
from diff_gaussian_rasterization import GaussianRasterizer as DenseRast
print("OK")
```

**Commit name:** *(no commit — install-only step)*

---

### I5 — Add Config YAML Keys

**Files changed:** `configs/mono/*.yaml`

```yaml
Training:
  use_splatonic: false        # flip to true in Milestone 3
  flip_ratio: 4               # 1 dense : 3 sparse mapping iterations
  tracking_tile_size: 16      # must match track-rasterization BLOCK_X
  mapping_tile_size: 4        # must match map-rasterization BLOCK_X
```

**Commit name:** `feat: add SPLATONIC config keys to YAML`

```bash
git tag milestone-1-infra
```

---

## Milestone 2 — Python Pipeline

**Time estimate:** 2–3 days  
**Exit condition:** All Python utilities exist and are tested in isolation. slam.py is not touched yet.  
**Rollback:** `git checkout milestone-1-infra`

---

### P1 — Create `mask_utils.py`

**Goal:** The three functions that generate sparse pixel masks. No SLAM code touched.

**Files changed:** `MonoGS/utils/mask_utils.py` (new file)

**Functions:**
- `generate_random_mask(image_size, tile_size=16)` — one pixel per tile, uniform. For 480×640 → 1200 pixels.
- `adaptive_random_sampling(image, num_samples, epsilon=0.001)` — Sobel gradient CDF sampling.
- `get_pixel_info(mask, tile_size=16)` → `(offsets int32 [num_tiles+1], sorted_coords int2 [num_pixels])`.

**Critical:** `tile_size` in `get_pixel_info` must match `BLOCK_X` of the rasterizer that will consume the output:
- Tracking mask: `tile_size=16` → used with `track-rasterization`
- Mapping mask: `tile_size=4` → used with `map-rasterization`

**Unit tests (verify before committing):**
```python
from utils.mask_utils import generate_random_mask, get_pixel_info, adaptive_random_sampling
import torch

# Test 1: count
mask, offsets, coords = generate_random_mask((480, 640), tile_size=16)
assert mask.sum().item() == 30 * 40, "Should have exactly 1 pixel per tile"

# Test 2: each tile has exactly 1 pixel
per_tile = offsets[1:] - offsets[:-1]
assert per_tile.max().item() == 1 and per_tile.min().item() == 1

# Test 3: adaptive count
img = torch.rand(3, 480, 640).cuda()
amask = adaptive_random_sampling(img, num_samples=1200)
assert amask.sum().item() == 1200

# Test 4: tile_size=4 alignment (for map rasterizer)
mask4, off4, c4 = generate_random_mask((480, 640), tile_size=4)
assert mask4.sum().item() == 120 * 160
```

**Review checklist:**  
- [ ] `get_pixel_info` output is sorted by tile_id (CUDA assumes this)  
- [ ] `coords` dtype is int32, not int64  
- [ ] No SLAM-specific imports in this file  

**Commit name:** `feat: add mask_utils.py for sparse pixel sampling`

---

### P2 — Add `calc_ssim_shuffled_packed`

**Goal:** SSIM on non-contiguous sparse pixels via the shuffle-pack trick.

**Files changed:** `MonoGS/gaussian_splatting/utils/loss_utils.py`

**Why this is needed:** Standard 2D SSIM requires a contiguous image patch for its sliding Gaussian window. Sparse pixels are scattered — applying SSIM directly is geometrically meaningless. The trick: extract N sparse pixels, shuffle them, concatenate original+shuffled into 2N pixels, reshape into a synthetic 2D image, run standard SSIM.

```python
def calc_ssim_shuffled_packed(img1, img2, mask, window_size=4, stride=4):
    """SSIM over sparse pixels by shuffle-packing into a synthetic image."""
    pix1 = img1[:, mask]          # [3, N]
    pix2 = img2[:, mask]          # [3, N]
    N = pix1.shape[1]
    if N < 64:
        return l1_loss(pix1, pix2)    # too sparse for SSIM window

    perm = torch.randperm(N, device=img1.device)
    cat1 = torch.cat([pix1, pix1[:, perm]], dim=1)   # [3, 2N]
    cat2 = torch.cat([pix2, pix2[:, perm]], dim=1)

    H_s = 64
    W_s = cat1.shape[1] // H_s
    cat1 = cat1[:, :H_s * W_s].reshape(1, 3, H_s, W_s)
    cat2 = cat2[:, :H_s * W_s].reshape(1, 3, H_s, W_s)
    return ssim(cat1, cat2)
```

**Unit test:**
```python
from gaussian_splatting.utils.loss_utils import calc_ssim_shuffled_packed
import torch
img = torch.rand(3, 480, 640).cuda()
mask = torch.zeros(480, 640, dtype=torch.bool).cuda()
mask[::4, ::4] = True
val = calc_ssim_shuffled_packed(img, img, mask)
assert abs(val.item() - 1.0) < 0.01, f"img vs itself should be ~1.0, got {val.item()}"
```

**Review checklist:**  
- [ ] `pix1 = img1[:, mask]` — mask is 2D bool, result is [3, N]  
- [ ] Fallback to L1 when N < 64  
- [ ] Does not import anything not already in the file  

**Commit name:** `feat: add calc_ssim_shuffled_packed for sparse SSIM`

---

### P3 — Extend `render()` API (Stub)

**Goal:** `render()` accepts four new kwargs but ignores them, always using the dense rasterizer. Validates API shape before CUDA.

**Files changed:** `MonoGS/gaussian_splatting/gaussian_renderer/__init__.py`

```python
def render(viewpoint_camera, pc, pipe, bg_color, scaling_modifier=1.0,
           override_color=None, mask=None,
           pixel_range=None, pixel_coords=None,
           use_track_rasterizer=False,
           use_map_rasterizer=False):

    # STUB: real dispatch added in CU9.1
    # Always uses dense rasterizer until then
    from diff_gaussian_rasterization import GaussianRasterizer
    rasterizer = GaussianRasterizer(raster_settings=raster_settings)
    # ... rest unchanged ...
```

**Unit test:**
```python
# Dense call — unchanged behavior
pkg = render(viewpoint, gaussians, pipe, bg)
assert "n_touched" in pkg and "render" in pkg

# Sparse call — accepted without crash
pkg = render(viewpoint, gaussians, pipe, bg,
             pixel_range=torch.zeros(100, dtype=torch.int32).cuda(),
             pixel_coords=torch.zeros((100, 2), dtype=torch.int32).cuda(),
             use_track_rasterizer=True)
assert "n_touched" in pkg   # dense path, still works
```

**Review checklist:**  
- [ ] `# STUB` comment is present with reference to CU9.1  
- [ ] No import of track_rasterization or map_rasterization yet  
- [ ] Return dict is identical to current MonoGS (same keys)  

**Commit name:** `feat: extend render() API with sparse kwargs (stub, dense path only)`

---

### P4 — Add Sparse Loss Functions

**Goal:** `get_loss_tracking_sparse` and `get_loss_mapping_sparse` exist, are callable, and fall back to dense when `pixel_mask=None`.

**Files changed:** `MonoGS/utils/slam_utils.py`

```python
def get_loss_tracking_sparse(config, image, depth, opacity, viewpoint, pixel_mask=None):
    if pixel_mask is None:
        return get_loss_tracking(config, image, depth, opacity, viewpoint)

    image_ab = torch.exp(viewpoint.exposure_a) * image + viewpoint.exposure_b
    gt_image  = viewpoint.original_image.cuda()
    combined_mask = pixel_mask & viewpoint.grad_mask[0].bool()

    if config["Training"]["monocular"]:
        loss = (opacity[:, combined_mask] *
                torch.abs(image_ab[:, combined_mask] - gt_image[:, combined_mask])).mean()
        return loss

    alpha = config["Training"].get("alpha", 0.95)
    rgb_mask = (gt_image.sum(dim=0) > config["Training"]["rgb_boundary_threshold"])
    valid = combined_mask & rgb_mask
    l1_rgb = (opacity[:, valid] *
              torch.abs(image_ab[:, valid] - gt_image[:, valid])).mean()

    gt_depth = viewpoint.depth.cuda()
    depth_mask = (gt_depth > 0) & combined_mask[0]
    opacity_mask = (opacity[0] > 0.95) & combined_mask
    d_mask = depth_mask & opacity_mask
    l1_d = torch.abs(depth[0, d_mask] - gt_depth[d_mask]).mean() \
           if d_mask.any() else torch.tensor(0.0, device=image.device)
    return alpha * l1_rgb + (1.0 - alpha) * l1_d


def get_loss_mapping_sparse(config, image, depth, opacity, viewpoint, pixel_mask=None):
    if pixel_mask is None:
        return get_loss_mapping(config, image, depth, opacity, viewpoint)

    from gaussian_splatting.utils.loss_utils import calc_ssim_shuffled_packed

    image_ab = torch.exp(viewpoint.exposure_a) * image + viewpoint.exposure_b
    gt_image  = viewpoint.original_image.cuda()
    rgb_mask = (gt_image.sum(dim=0) > config["Training"]["rgb_boundary_threshold"])
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
    d_loss = torch.abs(depth[0, depth_mask] - gt_depth[depth_mask]).mean() \
             if depth_mask.any() else torch.tensor(0.0, device=image.device)
    return alpha * rgb_loss + (1.0 - alpha) * d_loss
```

**Unit test:**
```python
# Fallback must match dense exactly
loss_d = get_loss_tracking(config, image, depth, opacity, viewpoint)
loss_s = get_loss_tracking_sparse(config, image, depth, opacity, viewpoint, pixel_mask=None)
assert torch.allclose(loss_d, loss_s), "Fallback must be identical to dense"
```

**Review checklist:**  
- [ ] Exposure correction (`exp(a)*img+b`) applied BEFORE masking, not after  
- [ ] `combined_mask` uses `grad_mask` for tracking loss  
- [ ] Depth loss guarded by `d_mask.any()`  
- [ ] `pixel_mask=None` falls back to corresponding dense function, not to a default  

**Commit name:** `feat: add get_loss_tracking_sparse and get_loss_mapping_sparse`

---

### P5 — Wire FrontEnd Tracking

**Goal:** `FrontEnd.tracking()` generates the pixel mask and passes it through. Dense rasterizer still used.

**Files changed:** `MonoGS/utils/slam_frontend.py`

**Function:** `FrontEnd.tracking(cur_frame_idx, viewpoint)`

```python
from utils.mask_utils import generate_random_mask, get_pixel_info
from utils.slam_utils import get_loss_tracking_sparse

def tracking(self, cur_frame_idx, viewpoint):
    use_splatonic = self.config["Training"].get("use_splatonic", False)
    tile_size = self.config["Training"].get("tracking_tile_size", 16)

    if use_splatonic:
        H, W = viewpoint.image_height, viewpoint.image_width
        pixel_mask, pixel_range, pixel_coords = generate_random_mask(
            (H, W), tile_size=tile_size, device='cuda')
    else:
        pixel_mask = pixel_range = pixel_coords = None

    pose_optimizer = ...   # unchanged

    for i in range(tracking_itr_num):
        render_pkg = render(
            viewpoint, self.gaussians, self.pipeline_params, self.background,
            pixel_range=pixel_range, pixel_coords=pixel_coords,
            use_track_rasterizer=use_splatonic)   # ignored until CU9.1

        image, depth, opacity = (render_pkg["render"],
                                 render_pkg["depth"], render_pkg["opacity"])

        loss = get_loss_tracking_sparse(
            self.config, image, depth, opacity, viewpoint,
            pixel_mask=pixel_mask)

        loss.backward()
        pose_optimizer.step()
        converged = update_pose(viewpoint)
        if converged:
            break
```

**Review checklist:**  
- [ ] Mask is generated ONCE per frame, not inside the per-iteration loop  
- [ ] `use_track_rasterizer` flag is passed but render() ignores it (stub)  
- [ ] `pixel_mask=None` when `use_splatonic=False` → dense loss  
- [ ] Pose optimizer setup is unchanged  

**Commit name:** `feat: wire sparse pixel mask into FrontEnd.tracking`

---

### P6 — Wire BackEnd Mapping + FLIP Counter

**Goal:** `BackEnd.map()` has the FLIP counter logic. Dense rasterizer still used.

**Files changed:** `MonoGS/utils/slam_backend.py`

**Add to `BackEnd.__init__`:**
```python
self.map_iter_counter = 0
```

**Add imports:**
```python
from utils.mask_utils import adaptive_random_sampling, get_pixel_info
from utils.slam_utils import get_loss_mapping_sparse
```

**Wrap main iteration body:**
```python
FLIP = self.config["Training"].get("flip_ratio", 4)
use_splatonic = self.config["Training"].get("use_splatonic", False)
tile_size = self.config["Training"].get("mapping_tile_size", 4)

for iteration in range(iters):
    viewpoint = ...   # keyframe selection, unchanged

    use_dense = (not use_splatonic) or (self.map_iter_counter % FLIP == 0)
    self.map_iter_counter += 1

    if use_dense:
        render_pkg = render(viewpoint, self.gaussians,
                            self.pipeline_params, self.background)
        image, depth, opacity = (render_pkg["render"],
                                 render_pkg["depth"], render_pkg["opacity"])
        loss = get_loss_mapping(self.config, image, depth, opacity, viewpoint, ...)
    else:
        gt_image = viewpoint.original_image.cuda()
        H, W = gt_image.shape[1], gt_image.shape[2]
        num_sparse = max(64, (H * W) // 64)
        pixel_mask, pixel_range, pixel_coords = adaptive_random_sampling(
            gt_image, num_sparse, tile_size=tile_size)

        render_pkg = render(viewpoint, self.gaussians,
                            self.pipeline_params, self.background,
                            pixel_range=pixel_range, pixel_coords=pixel_coords,
                            use_map_rasterizer=True)   # ignored until CU9.1
        image, depth, opacity = (render_pkg["render"],
                                 render_pkg["depth"], render_pkg["opacity"])
        loss = get_loss_mapping_sparse(self.config, image, depth, opacity,
                                       viewpoint, pixel_mask=pixel_mask)

    # Isotropic loss — MonoGS, unchanged
    scaling = self.gaussians.get_scaling
    loss += 10 * torch.abs(scaling - scaling.mean(dim=1, keepdim=True)).mean()

    loss.backward()

    # Densification stats — ONLY on dense passes
    if use_dense and not prune:
        if render_pkg["visibility_filter"].any():
            self.gaussians.max_radii2D[render_pkg["visibility_filter"]] = torch.max(
                self.gaussians.max_radii2D[render_pkg["visibility_filter"]],
                render_pkg["radii"][render_pkg["visibility_filter"]])
            self.gaussians.add_densification_stats(
                render_pkg["viewspace_points"], render_pkg["visibility_filter"])
```

**Review checklist:**  
- [ ] `self.map_iter_counter` initialized in `__init__`, not in `map()`  
- [ ] `add_densification_stats` is inside `if use_dense`  
- [ ] `max_radii2D` update is also inside `if use_dense`  
- [ ] Isotropic loss is OUTSIDE the dense/sparse branch (always applied)  
- [ ] `use_map_rasterizer=True` is passed but ignored until CU9.1  

**Commit name:** `feat: wire FLIP schedule into BackEnd.map`

```bash
git tag milestone-2-python
```

---

## Milestone 3 — Integration Validation

**Time estimate:** 1 day  
**Goal:** Confirm that the complete Python pipeline works end-to-end before touching any CUDA. slam.py must run to completion with `use_splatonic: true` (using dense rasterizer throughout).

---

### INT1 — Baseline Run (use_splatonic: false)

```bash
python slam.py --config configs/mono/tum_fr1_desk.yaml
# use_splatonic: false in config
```

**Expected:** Normal MonoGS output. Record ATE and PSNR as baseline.

```bash
grep "ATE\|PSNR" results/tum_fr1_desk/log.txt > baseline_metrics.txt
```

---

### INT2 — Splatonic Python Run (use_splatonic: true, dense rasterizer)

```bash
python slam.py --config configs/mono/tum_fr1_desk.yaml
# use_splatonic: true in config
```

**Expected:** Run completes without crash. The dense rasterizer is used throughout. Output will differ slightly from baseline (sparse tracking loss, sparse mapping loss) but should not diverge or crash.

**Checklist:**
- [ ] No CUDA error
- [ ] `n_touched` is non-zero (keyframes are selected)
- [ ] Run completes full sequence
- [ ] FLIP counter visible in logs (if logging added in P6)

---

### INT3 — Verify FLIP Counter and Densification Gating

**Add temporary logging to `BackEnd.map()`:**
```python
if iteration % 20 == 0:
    print(f"[MAP] iter={self.map_iter_counter} use_dense={use_dense}")
```

**Expected:**
- Iterations 0, 4, 8, 12, ... → `use_dense=True`
- Iterations 1, 2, 3, 5, 6, 7, ... → `use_dense=False`
- `add_densification_stats` is never called on sparse iterations (add assertion)

**Remove logging after verification.**

```bash
git tag milestone-3-integration
```

**At this point:** Every Python piece is working. The only thing left is activating the real CUDA sparse rasterizer. If the CUDA work explodes, you have a clean `git checkout milestone-3-integration` to fall back to.

---

## Milestone 4 — CUDA Port

**Time estimate:** 3–5 days  
**Exit condition:** `slam.py` with `use_splatonic: true` uses the real sparse rasterizer. `n_touched` is non-zero. Tracking converges.

**Intermediate rollback tags:**
- `git tag milestone-4a-cuda-interfaces` — after CU1–CU2
- `git tag milestone-4b-cuda-preprocess` — after CU3
- `git tag milestone-4c-cuda-forward` — after CU4–CU5
- `git tag milestone-4d-cuda-backward` — after CU6–CU8
- `git tag milestone-4e-cuda-live` — after CU9

**Verification levels for every CUDA step:**
- **C** — Compiles (`pip install -e` succeeds)
- **O** — Produces output (forward pass runs, returns tensors of right shape)
- **R** — Matches reference (compare with SPLATONIC or brute-force for the kernel)
- **N** — No MonoGS regression (`n_touched` non-zero, `theta`/`rho` grad flows)

---

### CU1.1 — Add `pixel_range`/`pixel_coords` to `rasterizer.h`

**Files changed (×2):** `track-rasterization/cuda_rasterizer/rasterizer.h`, `map-rasterization/cuda_rasterizer/rasterizer.h`

**Change in `Rasterizer::forward()` static declaration:**
```cpp
static int forward(
    std::function<char*(size_t)> geometryBuffer,
    std::function<char*(size_t)> binningBuffer,
    std::function<char*(size_t)> imageBuffer,
    const int P, int D, int M,
    const float* background,
    const int width, int height,
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
    const float* projmatrix_raw,      // MonoGS
    const float* cam_pos,
    const float tanfovx, const float tanfovy,
    const int* pixel_range,           // SPLATONIC — NEW
    const int* pixel_coords,          // SPLATONIC — NEW (int2 stored as int*)
    // ... remaining existing MonoGS params ...
```

**Verify (C only):** `pip install -e track-rasterization/` must fail with linker error (body not updated yet) — that is expected. What matters is that the header is valid C++.

**Review checklist:**  
- [ ] `pixel_range` is `const int*` (prefix-sum offsets, one per tile + 1 sentinel)  
- [ ] `pixel_coords` is `const int*` (int2 stored as flat int*, 2 ints per pixel: x then y)  
- [ ] MonoGS-specific params (`projmatrix_raw`, `theta`, `rho`, `n_touched`) are untouched  

**Commit name:** `feat(cuda-interface): add pixel_range/pixel_coords to rasterizer.h`

---

### CU1.2 — Add New Params to `FORWARD::preprocess()` Declaration

**Files changed (×2):** `*/cuda_rasterizer/forward.h`

```cpp
namespace FORWARD {
    void preprocess(
        int P, int D, int M,
        const float* orig_points,
        const glm::vec3* scales,
        const float scale_modifier,
        const glm::vec4* rotations,
        const float* opacities,
        const float* shs,
        bool* clamped,
        const float* cov3D_precomp,
        const float* colors_precomp,
        const float* viewmatrix,
        const float* projmatrix,
        const float* projmatrix_raw,        // MonoGS
        const glm::vec3* cam_pos,
        const int W, int H,
        const float focal_x, float focal_y,
        const float tan_fovx, float tan_fovy,
        int* radii,
        float2* points_xy_image,
        float* depths,
        float* cov3Ds,
        float* rgb,
        float4* conic_opacity,
        const dim3 grid,
        const int* pixel_range,             // SPLATONIC — NEW
        const int2* pixel_coords,           // SPLATONIC — NEW (note: int2, not int*)
        int* num_rendered_ptr,              // SPLATONIC — NEW: atomic key counter
        uint64_t* gaussian_keys_unsorted,   // SPLATONIC — NEW
        int* gaussian_values_unsorted,      // SPLATONIC — NEW
        bool prefiltered,
        // ... remaining MonoGS params (theta, rho, dL_dtau, etc.)
    );
```

**Review checklist:**  
- [ ] `pixel_coords` type is `const int2*` (not `const int*`) — SPLATONIC source confirmed this  
- [ ] `num_rendered_ptr`, `gaussian_keys_unsorted`, `gaussian_values_unsorted` are all new  
- [ ] `uint64_t` for keys — upper 32 bits = pixel index, lower 32 = depth bits  

**Commit name:** `feat(cuda-interface): add pixel key params to FORWARD::preprocess declaration`

---

### CU1.3 — Add New Params to `FORWARD::render()` Declaration

**Files changed (×2):** `*/cuda_rasterizer/forward.h`

```cpp
void render(
    const dim3 grid, dim3 block,
    const uint2* ranges,
    const uint32_t* point_list,
    int W, int H,
    const float2* points_xy_image,
    const float* features,
    const float* depths,
    const float4* conic_opacity,
    float* final_T,
    uint32_t* n_contrib,
    const float* bg_color,
    float* out_color,
    float* out_depth,
    float* out_opacity,
    int* n_touched,             // MonoGS — already present
    const int2* pixel_coords,   // SPLATONIC — NEW
    int num_pixels              // SPLATONIC — NEW
);
```

**Commit name:** `feat(cuda-interface): add pixel_coords/num_pixels to FORWARD::render declaration`

```bash
git tag milestone-4a-cuda-interfaces
```

---

### CU2 — Add `lowest_alpha_coeff` to `auxiliary.h`

**Files changed (×2):** `*/cuda_rasterizer/auxiliary.h`

```cpp
// After: #define NUM_WARPS (BLOCK_SIZE/32)
const float lowest_alpha_coeff = 5.54126354515842f;
// Derivation: exp(-5.54) ≈ 0.004 — Gaussians contributing < 0.4% alpha are culled
```

**Verify (C):** Both compile after this change alone.

**Review checklist:**  
- [ ] Value is exactly `5.54126354515842f` (copied from SPLATONIC source verbatim)  
- [ ] Placed after `NUM_WARPS` macro, before any function definitions  

**Commit name:** `feat(cuda): add lowest_alpha_coeff preemptive cull threshold`

---

### CU3.1 — Add New Params to `preprocessCUDA` Signature

**Files changed (×2):** `*/cuda_rasterizer/forward.cu`

**Find the `preprocessCUDA` kernel definition. Add the new params at the end of its parameter list:**

```cpp
__global__ void preprocessCUDA(
    // ... all existing MonoGS params unchanged ...
    // NEW params (add at end):
    const int* pixel_range,
    const int2* pixel_coords,
    int* num_rendered_ptr,
    uint64_t* gaussian_keys_unsorted,
    int* gaussian_values_unsorted)
```

Also update the `FORWARD::preprocess()` wrapper function at the bottom of `forward.cu` to pass these through to the kernel.

**Verify (C):** Build fails (kernel body still references `tiles_touched` which is now semantically wrong but syntactically valid — this is OK at this step).

**Commit name:** `feat(cuda-preprocess): add pixel key params to preprocessCUDA signature`

---

### CU3.2 — Bind Key Buffers to BinningState, Allocate num_rendered_ptr

**Files changed (×2):** `*/cuda_rasterizer/rasterizer_impl.cu`

**Ownership (authoritative):** `gaussian_keys_unsorted` and `gaussian_values_unsorted` are **not** new buffers and do **not** belong to `GeometryState`. They are the existing `BinningState` fields `point_list_keys_unsorted` (`uint64_t*`) and `point_list_unsorted` (`uint32_t*`), populated directly by `preprocessCUDA` instead of by `duplicateWithKeys` (removed in CU4.2). Their lifetime remains exactly whatever `BinningState::fromChunk()` already provides today (chunk-allocated via the caller-supplied `binningBuffer()` callback, freed by that same caller). No separate `cudaMalloc`/`cudaFree` is introduced for these two buffers. **The static (`MAX_NUM_RENDERED`) sizing change is made here, in CU3.2, not in CU4.3** — the sequencing move below is impossible while sizing still depends on `num_rendered` (a value that does not exist until after `FORWARD::preprocess()` returns), so the move and the sizing change are one atomic step. CU4.3 is narrowed accordingly to only the now-dead `GeometryState` cleanup that this step leaves behind.

**In `Rasterizer::forward()`:**

1. **Required sequencing + sizing (one atomic change):** change the binning buffer size from `required<BinningState>(num_rendered)` to `required<BinningState>(MAX_NUM_RENDERED)` (and the matching `BinningState::fromChunk()` call to take `MAX_NUM_RENDERED` instead of `num_rendered`), and move the `binningBuffer()` chunk request and `BinningState::fromChunk()` call — currently issued *after* `FORWARD::preprocess()`, once `num_rendered` is known from the old prefix-sum path — to *before* the `FORWARD::preprocess()` call. These two edits must land together: the move is only safe once sizing no longer depends on anything `preprocessCUDA` produces, and `preprocessCUDA` itself now needs `binningState.point_list_keys_unsorted`/`point_list_unsorted` to already be valid device pointers before it launches.
```cpp
// OLD (dynamic, based on prefix-sum result — no longer valid once the call moves):
size_t binning_chunk_size = required<BinningState>(num_rendered);

// NEW (static, based on MAX_NUM_RENDERED):
size_t binning_chunk_size = required<BinningState>(MAX_NUM_RENDERED);
```
2. **Required parameter types:** `preprocessCUDA`'s `gaussian_keys_unsorted` parameter is `uint64_t*` — bind it directly to `binningState.point_list_keys_unsorted` (same type, no cast). `preprocessCUDA`'s `gaussian_values_unsorted` parameter is `int*` (per the FORWARD::preprocess() interface committed in CU1.2); `binningState.point_list_unsorted` is `uint32_t*`. Bind with an explicit `reinterpret_cast<int*>(binningState.point_list_unsorted)` at the call site — do not change the already-committed CU1.2 interface type.

```cpp
// preprocessCUDA writes packed keys directly into the (now statically-sized)
// BinningState buffers, replacing duplicateWithKeys (removed in CU4.2).
// At the FORWARD::preprocess() call site, pass:
//   binningState.point_list_keys_unsorted                        -> gaussian_keys_unsorted   (uint64_t*, no cast)
//   reinterpret_cast<int*>(binningState.point_list_unsorted)      -> gaussian_values_unsorted (uint32_t* source, int* param)

// Allocate atomic counter for number of (Gaussian, pixel) pairs emitted.
// This is the only new allocation introduced by CU3.2.
int* num_rendered_dev;
CHECK_CUDA(cudaMalloc(&num_rendered_dev, sizeof(int)), debug);
CHECK_CUDA(cudaMemset(num_rendered_dev, 0, sizeof(int)), debug);
```

**Note:** `binningState.point_list_keys_unsorted`/`point_list_unsorted` replace `tiles_touched` and the prefix-sum-based buffer sizing as the target of preprocessCUDA's writes. Do not remove `tiles_touched` yet — that is CU4.1 and CU4.2.

**Commit name:** `feat(cuda-preprocess): bind key buffers to BinningState, allocate num_rendered_ptr`

---

### CU3.3 — Remove `tiles_touched` Write from `preprocessCUDA`

**Files changed (×2):** `*/cuda_rasterizer/forward.cu`

**Find and delete this line at the end of the per-Gaussian processing in `preprocessCUDA`:**
```cpp
// DELETE this:
tiles_touched[idx] = (rect_max.x - rect_min.x) * (rect_max.y - rect_min.y);
```

This line is the last thing that `preprocessCUDA` used to do. Deleting it leaves a placeholder where the new pixel loop will go (CU3.4).

**Verify (C):** Compiles — the `tiles_touched` array is still passed as a parameter and allocated in `rasterizer_impl.cu`, so there is no dangling reference yet. It is just unused.

**Review checklist:**  
- [ ] The delete is exactly one line — not an if-block around it  
- [ ] No other writes to `tiles_touched` remain in `preprocessCUDA`  

**Commit name:** `feat(cuda-preprocess): remove tiles_touched write (replaced by pixel key gen)`

---

### CU3.4 — Add Pixel Iteration Loop (No Alpha Pruning Yet)

**Files changed (×2):** `*/cuda_rasterizer/forward.cu`

**At the location where `tiles_touched[idx] = ...` was deleted, add:**
```cpp
for (int tile_y = rect_min.y; tile_y < rect_max.y; ++tile_y) {
    for (int tile_x = rect_min.x; tile_x < rect_max.x; ++tile_x) {
        int tile_id = tile_y * tile_grid.x + tile_x;
        int pstart  = pixel_range[tile_id];
        int pend    = pixel_range[tile_id + 1];
        for (int k = pstart; k < pend; ++k) {
            int2 pix = pixel_coords[k];
            // Alpha pruning comes in CU3.5
            // Key generation comes in CU3.6
            (void)pix;   // suppress unused warning for now
        }
    }
}
```

**Why this step in isolation:** Verifies that the tile/pixel index math is correct before adding the alpha check. Can be debugged by printing `tile_id`, `pstart`, `pend` and checking against the Python-side `get_pixel_info()` output.

**Commit name:** `feat(cuda-preprocess): add pixel iteration loop (placeholder body)`

---

### CU3.5 — Add Alpha Pruning

**Files changed (×2):** `*/cuda_rasterizer/forward.cu`

**Inside the pixel loop from CU3.4, add:**
```cpp
int2 pix = pixel_coords[k];
float2 d = { (float)pix.x - p_proj.x, (float)pix.y - p_proj.y };
float power = -0.5f * (conic.x * d.x * d.x
                     + 2.0f * conic.y * d.x * d.y
                     + conic.z * d.y * d.y);
if (power > lowest_alpha_coeff) continue;   // alpha < 0.4% — skip
// Key generation comes in CU3.6
```

`lowest_alpha_coeff` is defined in `auxiliary.h` (CU2). `conic` is already computed above in `preprocessCUDA` before the tile loop.

**Review checklist:**  
- [ ] `lowest_alpha_coeff` is included via `#include "auxiliary.h"`  
- [ ] Comparison is `power > lowest_alpha_coeff` (NOT `<` — power is negative, higher magnitude = smaller contribution)  
- [ ] `p_proj` is the 2D projected position of the current Gaussian (already computed earlier in preprocessCUDA)  

**Commit name:** `feat(cuda-preprocess): add preemptive alpha culling in pixel loop`

---

### CU3.6 — Add Key Packing and atomicAdd to Slot

**Files changed (×2):** `*/cuda_rasterizer/forward.cu`

**After the alpha check in CU3.5:**
```cpp
// Pack key: upper 32 bits = pixel array index k, lower 32 = depth bits
uint32_t depth_bits = *reinterpret_cast<const uint32_t*>(&depths[idx]);
uint64_t key = ((uint64_t)(uint32_t)k << 32) | (uint64_t)depth_bits;

int slot = atomicAdd(num_rendered_ptr, 1);
if (slot >= MAX_NUM_RENDERED) return;   // overflow guard

gaussian_keys_unsorted[slot]   = key;
gaussian_values_unsorted[slot] = idx;
```

**Key layout:**
- Bits 63–32: pixel array index `k` (used after sort to look up `pixel_coords[k]`)
- Bits 31–0: raw depth bits (float reinterpreted as uint32 — preserves sort order)

**Review checklist:**  
- [ ] Cast `k` to `uint32_t` before widening to `uint64_t` — prevents sign extension  
- [ ] `depths[idx]` is the Gaussian's depth in camera space (already computed in preprocessCUDA)  
- [ ] `return` on overflow (not `continue`) — prevents writing past the buffer  
- [ ] `atomicAdd` is correct — multiple Gaussian threads may emit to overlapping pixel sets  

**Commit name:** `feat(cuda-preprocess): add key packing and atomicAdd slot emission`

---

### CU3.7 — Compile + Unit Test preprocessCUDA

**Verify:**

**C — Compile:**
```bash
pip install -e track-rasterization/
pip install -e map-rasterization/
```

**O — Produces output:** Run a minimal Python script that calls the rasterizer forward pass with a pixel_range and pixel_coords.

**R — Matches reference:**
```python
# With 10 Gaussians and 20 sampled pixels:
# 1. Read num_rendered_dev after preprocessCUDA
# 2. Assert num_rendered <= 200 (10 Gaussians * 20 pixels max, typically much less)
# 3. Decode keys: upper 32 bits = pixel_k, lower 32 = depth
# 4. For each (k, Gaussian_i) pair:
#    - Recompute power at pixel_coords[k] for Gaussian_i
#    - Assert power <= lowest_alpha_coeff (culled pairs should not appear)
```

**N — No MonoGS regression:** Not applicable yet (renderCUDA not changed).

```bash
git tag milestone-4b-cuda-preprocess
```

**Commit name:** `test(cuda-preprocess): validate preprocessCUDA key generation`

---

### CU4.1 — Remove `InclusiveSum` Call

**Files changed (×2):** `*/cuda_rasterizer/rasterizer_impl.cu`

**Find and delete:**
```cpp
// DELETE this block:
CUB_WRAPPER(cub::DeviceScan::InclusiveSum,
            geomState.tiles_touched,
            geomState.point_offsets,
            P, stream);
```

**Review checklist:**  
- [ ] `geomState.tiles_touched` and `geomState.point_offsets` allocations in `GeometryState::fromChunk()` can now also be removed (dead allocations) — but defer this to avoid breaking the compile; remove them in CU4.3 when the static buffer replaces them  

**Commit name:** `feat(cuda-impl): remove InclusiveSum (replaced by atomic counter in preprocessCUDA)`

---

### CU4.2 — Remove `duplicateWithKeys` Call

**Files changed (×2):** `*/cuda_rasterizer/rasterizer_impl.cu`

**Find and delete:**
```cpp
// DELETE this block:
duplicateWithKeys<<<(P + 255) / 256, 256>>>(
    P,
    geomState.means2D,
    geomState.depths,
    geomState.point_offsets,
    binningState.point_list_keys_unsorted,
    binningState.point_list_unsorted,
    radii,
    tile_grid);
CHECK_CUDA(, debug);
```

**Verify (C):** Compiles. The sort step (`cub::DeviceRadixSort::SortPairs`) still reads `binningState.point_list_keys_unsorted` and `binningState.point_list_unsorted` — these are now filled by `preprocessCUDA` instead. This is correct.

**Commit name:** `feat(cuda-impl): remove duplicateWithKeys (preprocessCUDA emits keys directly)`

---

### CU4.3 — Remove Dead GeometryState Allocations

**Files changed (×2):** `*/cuda_rasterizer/rasterizer_impl.cu`

**Context:** `BinningState`'s static (`MAX_NUM_RENDERED`) sizing was already established in CU3.2, since the sequencing move performed there required it. This step only removes what that earlier change left dead.

Remove the now-unused `geomState.tiles_touched` and `geomState.point_offsets` allocations from `GeometryState::fromChunk()` — they existed solely to support the prefix-sum path (`InclusiveSum`, removed in CU4.1) and the old dynamic `BinningState` sizing (removed in CU3.2).

**Review checklist:**  
- [ ] No remaining reference to `geomState.point_offsets` anywhere in `rasterizer_impl.cu` (CU4.1 already removed its only consumer)  

**Commit name:** `feat(cuda-impl): remove dead GeometryState tiles_touched/point_offsets allocations`

---

### CU4.4 — Read `num_rendered` via cudaMemcpy After Preprocess

**Files changed (×2):** `*/cuda_rasterizer/rasterizer_impl.cu`

**After the `FORWARD::preprocess(...)` call, add:**
```cpp
int num_rendered = 0;
CHECK_CUDA(cudaMemcpy(&num_rendered, num_rendered_dev,
                      sizeof(int), cudaMemcpyDeviceToHost), debug);
if (num_rendered > MAX_NUM_RENDERED)
    num_rendered = MAX_NUM_RENDERED;   // clamped by overflow guard in kernel
```

**Pass `num_rendered` to:**
```cpp
// SortPairs — update count:
CUB_WRAPPER(cub::DeviceRadixSort::SortPairs, .../* count = num_rendered */ ...);

// identifyTileRanges:
identifyTileRanges<<<(num_rendered + 255) / 256, 256>>>(..., num_rendered);
```

**Review checklist:**  
- [ ] `cudaDeviceSynchronize()` before the `cudaMemcpy` (or use a stream with explicit sync)  
- [ ] `num_rendered_dev` was initialized to 0 before preprocess (done in CU3.2)  

**Commit name:** `feat(cuda-impl): read atomically-counted num_rendered after preprocessCUDA`

---

### CU4.5 — Change Render Grid Launch (Tile → Pixel)

**Files changed (×2):** `*/cuda_rasterizer/rasterizer_impl.cu`

**Old launch:**
```cpp
dim3 tile_grid((W + BLOCK_X - 1) / BLOCK_X, (H + BLOCK_Y - 1) / BLOCK_Y, 1);
dim3 block(BLOCK_X, BLOCK_Y, 1);
FORWARD::render<<<tile_grid, block>>>(...);
```

**New launch:**
```cpp
int num_pixels = /* read last entry of pixel_range from device */;
dim3 block(BLOCK_SIZE, 1, 1);   // BLOCK_SIZE = BLOCK_X * BLOCK_Y
FORWARD::render<<<num_pixels, block>>>(..., pixel_coords, num_pixels);
```

`num_pixels` = number of sampled pixels = `pixel_range[num_tiles]` (the sentinel value at the end of the prefix-sum array).

**Review checklist:**  
- [ ] Block size is `BLOCK_SIZE` (256 for track, 16 for map), not `(BLOCK_X, BLOCK_Y)`  
- [ ] Grid is `(num_pixels, 1, 1)` — one block per pixel  
- [ ] `num_pixels` is read from the device prefix-sum, not computed from image size  
- [ ] `pixel_coords` and `num_pixels` are passed to `FORWARD::render`  

**Commit name:** `feat(cuda-impl): change render grid from tile-based to pixel-based launch`

```bash
git tag milestone-4c-cuda-forward-dispatch
```

---

### CU5.1 — Change `renderCUDA` Kernel Signature

**Files changed (×2):** `*/cuda_rasterizer/forward.cu`

**Old (tile-based) render kernel signature:**
```cpp
template <uint32_t CHANNELS>
__global__ void __launch_bounds__(BLOCK_SIZE) renderCUDA(
    const uint2* __restrict__ ranges,
    const uint32_t* __restrict__ point_list,
    int W, int H,
    const float2* __restrict__ points_xy_image,
    const float* __restrict__ features,
    const float* __restrict__ depths,
    const float4* __restrict__ conic_opacity,
    float* __restrict__ final_T,
    uint32_t* __restrict__ n_contrib,
    const float* __restrict__ bg_color,
    float* __restrict__ out_color,
    float* __restrict__ out_depth,
    float* __restrict__ out_opacity,
    int* __restrict__ n_touched)   // MonoGS
```

**New (pixel-based) signature — add `pixel_coords` and `num_pixels`:**
```cpp
template <uint32_t CHANNELS>
__global__ void __launch_bounds__(BLOCK_SIZE) renderCUDA(
    const uint2* __restrict__ ranges,
    const uint32_t* __restrict__ point_list,
    int W, int H,
    const float2* __restrict__ points_xy_image,
    const float* __restrict__ features,
    const float* __restrict__ depths,
    const float4* __restrict__ conic_opacity,
    float* __restrict__ final_T,
    uint32_t* __restrict__ n_contrib,
    const float* __restrict__ bg_color,
    float* __restrict__ out_color,
    float* __restrict__ out_depth,
    float* __restrict__ out_opacity,
    int* __restrict__ n_touched,     // MonoGS — KEEP
    const int2* __restrict__ pixel_coords,   // NEW
    int num_pixels)                          // NEW
```

**Verify (C):** Compiles — the body still uses the old tile indexing (fixed in CU5.2), but the signature is valid.

**Commit name:** `feat(cuda-forward): add pixel_coords and num_pixels to renderCUDA signature`

---

### CU5.2 — Change Block→Pixel Mapping

**Files changed (×2):** `*/cuda_rasterizer/forward.cu`

**Old (tile-based, first ~10 lines of renderCUDA body):**
```cpp
auto block = cg::this_thread_block();
uint32_t horizontal_blocks = (W + BLOCK_X - 1) / BLOCK_X;
uint2 pix_min = { block.group_index().x * BLOCK_X,
                  block.group_index().y * BLOCK_Y };
uint2 pix_max = { min(pix_min.x + BLOCK_X, W),
                  min(pix_min.y + BLOCK_Y, H) };
uint2 pix = { pix_min.x + block.thread_rank() % BLOCK_X,
              pix_min.y + block.thread_rank() / BLOCK_X };
uint32_t pix_id = W * pix.y + pix.x;
bool inside = pix.x < W && pix.y < H;
```

**New (pixel-based):**
```cpp
int pixel_id = blockIdx.x;
if (pixel_id >= num_pixels) return;

int2 pix_coord = pixel_coords[pixel_id];
int  pix_id    = W * pix_coord.y + pix_coord.x;
bool inside    = (pix_coord.x >= 0 && pix_coord.x < W &&
                  pix_coord.y >= 0 && pix_coord.y < H);
int  lane      = threadIdx.x & 31;
int  warp_idx  = threadIdx.x / 32;
```

**Review checklist:**  
- [ ] `pix_id` is still `W * y + x` — used for writing to flat output buffers  
- [ ] `pixel_id` (block index) is different from `pix_id` (flat image index)  
- [ ] `inside` guard preserved (prevents out-of-bounds writes)  

**Commit name:** `feat(cuda-forward): replace tile indexing with pixel_id = blockIdx.x`

---

### CU5.3 — Warp Prefix-Scan Skeleton for Transmittance

**Files changed (×2):** `*/cuda_rasterizer/forward.cu`

**Replace the tile-based range lookup:**
```cpp
// OLD: look up tile's Gaussian range from point_offsets
uint2 range = ranges[block.group_index().y * horizontal_blocks + block.group_index().x];

// NEW: look up THIS PIXEL's Gaussian range (already sorted by pixel index k)
// The sort key upper 32 bits = pixel_k; identifyTileRanges uses this to build ranges per k
uint2 range = ranges[pixel_id];
```

**Add warp-level shared state for transmittance product:**
```cpp
__shared__ float collected_T[NUM_WARPS];
if (threadIdx.x < NUM_WARPS) collected_T[threadIdx.x] = 1.0f;
__syncthreads();

float T_warp = 1.0f;   // each warp tracks its own T prefix
```

**Commit name:** `feat(cuda-forward): add warp transmittance shared state and pixel range lookup`

---

### CU5.4 — Add Color/Depth Accumulation Using Warp T

**Files changed (×2):** `*/cuda_rasterizer/forward.cu`

**Replace the serial per-thread accumulation loop with warp-parallel accumulation:**

```cpp
int rounds = (range.y - range.x + BLOCK_SIZE - 1) / BLOCK_SIZE;
float C[CHANNELS] = {};
float D = 0.0f;
bool done = (range.x == range.y);

for (int r = 0; r < rounds; ++r) {
    __syncthreads();
    if (lane == 0) T_warp = collected_T[warp_idx];
    T_warp = __shfl_sync(~0u, T_warp, 0);   // broadcast warp's T to all threads

    int g = range.x + r * BLOCK_SIZE + threadIdx.x;
    bool in_range = (g < range.y);

    float alpha = 0.f, depth = 0.f; int gid = 0;
    float feat[CHANNELS] = {};

    if (in_range && !done) {
        gid = point_list[g];
        float2 d = { (float)pix_coord.x - points_xy_image[gid].x,
                     (float)pix_coord.y - points_xy_image[gid].y };
        float4 co = conic_opacity[gid];
        float pw = -0.5f * (co.x*d.x*d.x + 2.f*co.y*d.x*d.y + co.z*d.y*d.y);
        if (pw <= 0.f) {
            alpha = min(0.99f, co.w * expf(pw));
            depth = depths[gid];
            for (int c = 0; c < CHANNELS; ++c)
                feat[c] = features[gid * CHANNELS + c];
        }
    }

    // Warp prefix product of (1-alpha): each thread gets T_before_me
    float oma = 1.f - alpha;
    float pfx = oma;
    for (int off = 1; off < 32; off <<= 1) {
        float t = __shfl_up_sync(~0u, pfx, off);
        if (lane >= off) pfx *= t;
    }
    float T_before = T_warp * (lane == 0 ? 1.f : __shfl_up_sync(~0u, pfx, 1));

    if (in_range && !done && alpha > 1.f / 255.f) {
        float w = alpha * T_before;
        for (int c = 0; c < CHANNELS; ++c) C[c] += feat[c] * w;
        D += depth * w;
    }

    // Propagate T to next round (last lane of each warp updates shared T)
    if (lane == 31)
        collected_T[warp_idx] = T_warp * pfx;
    __syncthreads();
}
```

**Review checklist:**  
- [ ] `__shfl_up_sync(~0u, pfx, 1)` for lane 0 is guarded with `lane == 0 ? 1.f : ...`  
- [ ] `collected_T[warp_idx]` update is at `lane == 31`, inside the round loop, after __syncthreads  
- [ ] No `__syncwarp()` missing between `__shfl_up_sync` calls in the same warp (not needed — `__shfl_sync` with `~0u` is synchronizing)  

**Commit name:** `feat(cuda-forward): add warp prefix-scan color/depth accumulation`

---

### CU5.5 — Add `n_touched` atomicAdd (Preserve MonoGS)

**Files changed (×2):** `*/cuda_rasterizer/forward.cu`

**Inside the accumulation block in CU5.4, add:**
```cpp
if (in_range && !done && alpha > 1.f / 255.f) {
    float w = alpha * T_before;
    for (int c = 0; c < CHANNELS; ++c) C[c] += feat[c] * w;
    D += depth * w;

    // MonoGS: record that this Gaussian is visible at this pixel
    // T_before > 0.5 means the ray hasn't been absorbed yet — Gaussian is "seen"
    if (T_before > 0.5f)
        atomicAdd(&n_touched[gid], 1);   // CRITICAL: must be atomic (multiple blocks share Gaussians)
}
```

**Why `atomicAdd` and not a plain write:** Multiple pixel-blocks (each handling one sampled pixel) can reference the same Gaussian simultaneously. A non-atomic write would create a race condition that silently corrupts `n_touched`, causing MonoGS's keyframe selection to fail.

**Verify (N):** After a forward pass with 3 keyframes, `n_touched.sum() > 0`.

**Commit name:** `feat(cuda-forward): add n_touched atomicAdd (MonoGS keyframe/pruning signal)`

---

### CU5.6 — Add Cooperative Early Exit

**Files changed (×2):** `*/cuda_rasterizer/forward.cu`

**At end of accumulation block:**
```cpp
    if (T_before * oma < 0.0001f)
        done = true;
}   // end if (in_range && !done && alpha > ...)

if (__syncthreads_or(done)) break;   // whole block exits if any thread is done
```

**Also write final output (only thread 0 writes — no race):**
```cpp
// After round loop, thread 0 writes results
if (threadIdx.x == 0) {
    float T_final = T_warp;
    for (int c = 0; c < CHANNELS; ++c)
        out_color[pix_id * CHANNELS + c] = C[c] + T_final * bg_color[c];
    out_depth[pix_id]   = D;
    out_opacity[pix_id] = 1.f - T_final;
    final_T[pixel_id]   = T_final;
    n_contrib[pixel_id] = /* count of Gaussians processed */ contrib;
}
```

**Commit name:** `feat(cuda-forward): add cooperative early exit and thread-0 output write`

---

### CU5.7 — Compile + Brute-Force Correctness Test

**Verify:**

**C — Compiles:** `pip install -e track-rasterization/ && pip install -e map-rasterization/`

**O — Produces output:**
```python
color, radii, depth, opacity, n_touched = rasterizer(
    means3D=..., means2D=..., shs=..., opacities=...,
    scales=..., rotations=..., theta=..., rho=...,
    pixel_range=pixel_range, pixel_coords=pixel_coords)
assert color.shape == (3, H, W)
```

**R — Matches reference (brute-force):**
```python
# For each sampled pixel (x, y):
#   Sort Gaussians by depth at that pixel
#   Compute: color = sum_i(alpha_i * color_i * T_i), T_i = prod_{j<i}(1 - alpha_j)
# Assert max absolute error < 1e-4 vs renderCUDA output at sampled pixels
```

**N — No MonoGS regression:** `n_touched.sum() > 0`

**Commit name:** `test(cuda-forward): validate renderCUDA pixel-parallel forward pass`

---

### CU5.8 — Regression Test on Dense MonoGS

Run a full tracking loop on one keyframe. Compare convergence (delta_pose magnitude over 10 tracking iterations) with dense MonoGS baseline. Should converge similarly.

```bash
git tag milestone-4c-cuda-forward
```

---

### CU6.1 — Add `pixel_range`/`pixel_coords` to Forward Signature (`rasterize_points.cu`)

**Files changed (×2):** `*/rasterize_points.cu`

**Find `RasterizeGaussiansCUDA` function. Add after `tanfovy`:**
```cpp
const torch::Tensor& pixel_range,
const torch::Tensor& pixel_coords,
```

**Extract raw pointers to pass to `Rasterizer::forward()`:**
```cpp
const int* d_pixel_range  = pixel_range.data_ptr<int>();
const int* d_pixel_coords = pixel_coords.data_ptr<int>();
// int2* is passed as int* through the C++ boundary — cast inside CUDA
```

**Commit name:** `feat(cuda-entry): add pixel_range/pixel_coords to RasterizeGaussiansCUDA forward`

---

### CU6.2 — Switch to Static Buffer in Forward

**Files changed (×2):** `*/rasterize_points.cu`

**Find the binning buffer allocation. Replace:**
```cpp
// OLD:
auto binning_buffer = torch::empty({CudaRasterizer::required<BinningState>(num_rendered)}, ...);

// NEW:
auto binning_buffer = torch::empty({CudaRasterizer::required<BinningState>(MAX_NUM_RENDERED)}, ...);
```

**Commit name:** `feat(cuda-entry): switch to static MAX_NUM_RENDERED binning buffer`

---

### CU6.3 — Add `pixel_coords` to Backward Signature

**Files changed (×2):** `*/rasterize_points.cu`

**Find `RasterizeGaussiansBackwardCUDA`. Add:**
```cpp
const torch::Tensor& pixel_coords,
```

Pass `pixel_coords.data_ptr<int>()` to `Rasterizer::backward(...)`.

**Commit name:** `feat(cuda-entry): add pixel_coords to RasterizeGaussiansBackwardCUDA`

---

### CU6.4 — Update `ext.cpp` Pybind Registrations

**Files changed (×2):** `*/ext.cpp`

**Add `pixel_range` and `pixel_coords` to `m.def("rasterize_gaussians", ...)` and `m.def("rasterize_gaussians_backward", ...)`. Match the exact order in the C++ function signatures from CU6.1 and CU6.3.**

**Verify (C):** `pip install -e` succeeds for both.

**Commit name:** `feat(cuda-entry): update ext.cpp pybind registrations with pixel args`

---

### CU7.1 — Add Pixel Args to `_RasterizeGaussians.forward()`

**Files changed (×2):** `*/diff_gaussian_rasterization/__init__.py`

```python
@staticmethod
def forward(
    ctx, means3D, means2D, sh, colors_precomp, opacities,
    scales, rotations, cov3D_precomp, raster_settings,
    theta, rho, pixel_range=None, pixel_coords=None):   # NEW

    args = (
        raster_settings.bg,
        means3D, colors_precomp, opacities,
        scales, rotations, raster_settings.scale_modifier,
        cov3D_precomp, raster_settings.viewmatrix,
        raster_settings.projmatrix,
        raster_settings.projmatrix_raw,      # MonoGS
        raster_settings.campos,
        raster_settings.tanfovx, raster_settings.tanfovy,
        pixel_range if pixel_range is not None
                    else torch.zeros(0, dtype=torch.int32, device=means3D.device),
        pixel_coords if pixel_coords is not None
                     else torch.zeros(0, dtype=torch.int32, device=means3D.device),
        raster_settings.image_height, raster_settings.image_width,
        # ... remaining MonoGS args (theta, rho, sh_degree, campos, prefiltered, debug) ...
    )
    num_rendered, color, radii, geomBuffer, binningBuffer, imgBuffer, \
        depth, opacity, n_touched = _C.rasterize_gaussians(*args)
    ctx.save_for_backward(...)   # see CU7.2
    return color, radii, depth, opacity, n_touched
```

**Review checklist:**  
- [ ] Empty tensor fallback for `None` pixel args (avoids `None.data_ptr()` crash in C++)  
- [ ] Tensor dtype is `torch.int32` (not int64)  
- [ ] Order of args in `args` tuple matches exact order in `ext.cpp` pybind registration (CU6.4)  

**Commit name:** `feat(python-bridge): add pixel_range/pixel_coords to _RasterizeGaussians.forward`

---

### CU7.2 — Save `pixel_coords` in `ctx.save_for_backward`

**Files changed (×2):** Same `__init__.py`

```python
ctx.save_for_backward(
    colors_precomp, means3D, scales, rotations, cov3D_precomp,
    radii, geomBuffer, binningBuffer, imgBuffer,
    pixel_coords if pixel_coords is not None
                else torch.zeros(0, dtype=torch.int32, device=means3D.device))
ctx.num_pixels = pixel_coords.shape[0] // 2 if pixel_coords is not None else 0
```

**Commit name:** `feat(python-bridge): save pixel_coords in ctx for backward pass`

---

### CU7.3 — Return `None` for Pixel Args in Backward

**Files changed (×2):** Same `__init__.py`

```python
@staticmethod
def backward(ctx, grad_out_color, grad_radii, grad_depth, grad_opacity, grad_n_touched):
    # ... existing MonoGS backward logic ...
    # Add None returns for the new pixel args:
    return (grad_means3D, grad_means2D, grad_sh, grad_colors_precomp,
            grad_opacities, grad_scales, grad_rotations, grad_cov3D_precomp,
            None,          # raster_settings — no gradient
            grad_theta, grad_rho,   # MonoGS pose gradients
            None, None)    # pixel_range, pixel_coords — no gradient
```

**Review checklist:**  
- [ ] Number of `None` returns matches number of positional args in `forward()` exactly  
- [ ] `grad_theta`, `grad_rho` are still computed from `dL_dtau` via the existing MonoGS backward logic  
- [ ] `grad_n_touched` is accepted but ignored (n_touched has no gradient path)  

**Commit name:** `feat(python-bridge): return None for pixel args in backward (no gradient)`

---

### CU7.4 — Add Pixel Args to `GaussianRasterizer.forward()`

**Files changed (×2):** Same `__init__.py`

```python
class GaussianRasterizer(nn.Module):
    def forward(self, means3D, means2D, opacities, shs=None, colors_precomp=None,
                scales=None, rotations=None, cov3D_precomp=None,
                theta=None, rho=None,
                pixel_range=None, pixel_coords=None):   # NEW
        ...
        return _RasterizeGaussians.apply(
            means3D, means2D, shs, colors_precomp, opacities,
            scales, rotations, cov3D_precomp, self.raster_settings,
            theta, rho, pixel_range, pixel_coords)   # pass through
```

**Commit name:** `feat(python-bridge): pass pixel_range/pixel_coords through GaussianRasterizer`

---

### CU7.5 — End-to-End Python Forward+Backward Test

```python
from track_rasterization import GaussianRasterizer
import torch

# Setup: 100 Gaussians, 480x640 image, 1200 sampled pixels
raster = GaussianRasterizer(raster_settings=settings)
cam_rot = torch.zeros(3, requires_grad=True, device='cuda')
cam_trans = torch.zeros(3, requires_grad=True, device='cuda')

color, radii, depth, opacity, n_touched = raster(
    means3D=..., means2D=..., theta=cam_rot, rho=cam_trans,
    pixel_range=pixel_range, pixel_coords=pixel_coords, ...)

loss = color.sum()
loss.backward()

assert cam_rot.grad is not None,   "theta gradient must flow"
assert cam_trans.grad is not None, "rho gradient must flow"
assert n_touched.sum() > 0,        "n_touched must be non-zero"
```

```bash
git tag milestone-4d-cuda-backward-prep
```

---

### CU8.1 — Change Backward `renderCUDA` Signature

**Files changed (×2):** `*/cuda_rasterizer/backward.cu`

**Add at end of parameter list:**
```cpp
__global__ void __launch_bounds__(BLOCK_SIZE) renderCUDA(
    // ... all existing backward params ...
    const int2* __restrict__ pixel_coords,   // NEW
    int num_pixels)                          // NEW
```

**Commit name:** `feat(cuda-backward): add pixel_coords/num_pixels to backward renderCUDA signature`

---

### CU8.2 — Change Block→Pixel Mapping in Backward Kernel

**Files changed (×2):** `*/cuda_rasterizer/backward.cu`

**Replace tile indexing with pixel indexing (mirror of CU5.2):**
```cpp
// OLD: tile-based
uint2 pix_min = { block.group_index().x * BLOCK_X, block.group_index().y * BLOCK_Y };
uint2 pix = { pix_min.x + block.thread_rank() % BLOCK_X, ... };

// NEW: pixel-based
int pixel_id = blockIdx.x;
if (pixel_id >= num_pixels) return;
```

**Commit name:** `feat(cuda-backward): replace tile indexing with pixel_id = blockIdx.x`

---

### CU8.3 — Recover (pix_x, pix_y) from `pixel_coords`

**Files changed (×2):** `*/cuda_rasterizer/backward.cu`

```cpp
int2 pix_coord = pixel_coords[pixel_id];
int  pix_id    = W * pix_coord.y + pix_coord.x;
bool inside    = (pix_coord.x >= 0 && pix_coord.x < W &&
                  pix_coord.y >= 0 && pix_coord.y < H);
```

The backward kernel uses `pix_id` to read `final_T[pixel_id]`, `n_contrib[pixel_id]`, and the gradient buffers at `pix_id`. Verify both index variables are used correctly.

**Commit name:** `feat(cuda-backward): recover pix_coord from pixel_coords[pixel_id]`

---

### CU8.4 — Add Warp Prefix-Scan for Backward Transmittance

**Files changed (×2):** `*/cuda_rasterizer/backward.cu`

**Structure is symmetric to CU5.3–CU5.4 but processes Gaussians in REVERSE depth order.** The backward transmittance accumulation replaces the serial `T` loop. The `atomicAdd` pattern for scattering gradients to `dL_dmean2D`, `dL_dconic2D`, `dL_dopacity`, `dL_dcolors` is unchanged — it was already atomic in the original kernel.

**Reference:** SPLATONIC `backward.cu` lines 205–320 for the warp-scan backward pattern.

**Commit name:** `feat(cuda-backward): add warp prefix-scan for backward transmittance`

---

### CU8.5 — Verify `BACKWARD::preprocess()` Is NOT Modified

**Files changed:** None (this is a verification step).

```bash
git diff milestone-3-integration -- track-rasterization/cuda_rasterizer/backward.cu \
    | grep "^[+-]" | grep -v "^---\|^+++" \
    | grep -v "renderCUDA\|pixel_coords\|num_pixels\|blockIdx\|pix_id\|pix_coord"
# Should show only the warp-scan changes, NOT any change to preprocessCuda/BACKWARD::preprocess()
```

`BACKWARD::preprocess()` computes `dL/d_tau` (the Lie algebra pose Jacobian) per Gaussian. It is completely independent of the tile-vs-pixel dispatch. **Do not touch it.**

**Commit name:** `test(cuda-backward): confirm BACKWARD::preprocess is unchanged`

---

### CU8.6 — Compile + Gradient Flow Test

**C:** `pip install -e track-rasterization/ && pip install -e map-rasterization/`

**N — gradient flow:**
```python
cam_rot.grad = None
cam_trans.grad = None
color, radii, depth, opacity, n_touched = rasterizer(
    ..., theta=cam_rot, rho=cam_trans,
    pixel_range=pixel_range, pixel_coords=pixel_coords)
color.sum().backward()
assert cam_rot.grad is not None and cam_rot.grad.abs().max() > 0
assert cam_trans.grad is not None and cam_trans.grad.abs().max() > 0
```

```bash
git tag milestone-4d-cuda-backward
```

**Commit name:** `test(cuda-backward): validate backward pass gradient flow`

---

### CU9.1 — Implement Rasterizer Dispatch in `render()`

**Files changed:** `MonoGS/gaussian_splatting/gaussian_renderer/__init__.py`

**Replace the `# STUB` comment:**
```python
def render(viewpoint_camera, pc, pipe, bg_color, ...,
           pixel_range=None, pixel_coords=None,
           use_track_rasterizer=False, use_map_rasterizer=False):

    # Rasterizer dispatch
    if use_track_rasterizer and pixel_range is not None:
        from track_rasterization import GaussianRasterizer
    elif use_map_rasterizer and pixel_range is not None:
        from map_rasterization import GaussianRasterizer
    else:
        from diff_gaussian_rasterization import GaussianRasterizer

    rasterizer = GaussianRasterizer(raster_settings=raster_settings)

    extra_kwargs = {}
    if pixel_range is not None:
        extra_kwargs["pixel_range"]  = pixel_range
        extra_kwargs["pixel_coords"] = pixel_coords

    rendered_image, radii, depth, opacity, n_touched = rasterizer(
        means3D=means3D, means2D=means2D, shs=shs,
        colors_precomp=colors_precomp, opacities=opacity,
        scales=scales, rotations=rotations, cov3D_precomp=cov3D_precomp,
        theta=viewpoint_camera.cam_rot_delta,
        rho=viewpoint_camera.cam_trans_delta,
        **extra_kwargs)
```

**Review checklist:**  
- [ ] Dense rasterizer is the default (both flags False or pixel_range is None)  
- [ ] `add_new_gaussians()` call path still uses the dense rasterizer (check for any hardcoded `render()` calls there)  
- [ ] Return dict is identical: `{"render": ..., "depth": ..., "radii": ..., "n_touched": ..., ...}`  

**Commit name:** `feat: activate sparse rasterizer dispatch in render() — SPLATONIC live`

---

### CU9.2 — Full slam.py Smoke Test with Sparse Rasterizer

```bash
python slam.py --config configs/mono/tum_fr1_desk.yaml
# use_splatonic: true
```

**Checklist:**
- [ ] No CUDA error
- [ ] Tracking uses `TrackRasterizer` (add `print(type(rasterizer))` temporarily)
- [ ] Mapping alternates between `DenseRasterizer` (FLIP=0) and `MapRasterizer` (FLIP=1,2,3)
- [ ] `n_touched.sum() > 0` — keyframes are selected
- [ ] Run completes full sequence without divergence

```bash
git tag milestone-4e-cuda-live
```

---

## Milestone 5 — Optimization and Validation

**Time estimate:** 1–2 days  
**Exit condition:** ATE and PSNR within acceptable range. Speed improvement documented.

---

### V1 — Confirm FLIP Counter Uses Real Sparse Rasterizer

**Add temporary assert:**
```python
# In slam_backend.py, inside the sparse branch:
assert use_map_rasterizer and pixel_range is not None, \
    "Sparse branch should use map rasterizer"
```

**Remove after verification.**

---

### V2 — Confirm Densification Gated to Dense Passes

**Add assert:**
```python
# In slam_backend.py, outside the dense block:
if not use_dense:
    assert not hasattr(render_pkg, 'viewspace_points') or \
           not self.gaussians.xyz_gradient_accum.requires_grad, \
           "Dense stats must not accumulate on sparse passes"
```

---

### V3 — Baseline ATE Comparison on TUM fr1_desk

```bash
# Dense MonoGS (from INT1 metrics):
cat baseline_metrics.txt

# SPLATONIC MonoGS:
python slam.py --config configs/mono/tum_fr1_desk.yaml  # use_splatonic: true
grep "ATE\|PSNR" results/tum_fr1_desk/log.txt
```

**Expected:** ATE within 15% of dense baseline. PSNR within 1.5 dB.

---

### V4 — Speed Benchmark

```python
import time
# Track timing per frame for:
# - Dense MonoGS tracking
# - SPLATONIC MonoGS tracking (1200 pixels vs full 480*640)
# Expected: ~5–10x reduction in rasterize_gaussians time
```

**Expected gain:**
- Tracking: ~200× fewer pixels per iteration (1 per 16×16 tile)
- Mapping sparse passes: ~16× fewer pixels (map tile_size=4)
- Net wall-clock: significant improvement in tracking; moderate in mapping

---

### V5 — PSNR/SSIM Comparison Sparse vs Dense

Compare reconstruction quality at the end of a full TUM sequence. The sparse mapping (3/4 of iterations use 1/16 the pixels) should not significantly degrade quality because the FLIP schedule ensures 1 in 4 mapping passes is full dense.

---

```bash
git tag milestone-5-validated
```

---

## Key Invariants (Do Not Break at Any Step)

| Invariant | Where enforced | Consequence if broken |
|-----------|---------------|----------------------|
| `n_touched` uses `atomicAdd` | CU5.5, CU8 | Race condition → corrupted keyframe selection |
| `BACKWARD::preprocess()` NOT modified | CU8.5 verify | Lie algebra pose gradient breaks silently |
| `tile_size` in Python == `BLOCK_X` in CUDA | P1, I3 | Wrong pixel-to-tile assignment → garbage keys |
| Dense path for `add_new_gaussians()` | P6, V1 | New Gaussians not added at uninitialised tiles |
| Exposure correction BEFORE pixel masking | P4 | Wrong pixels sampled from wrong color space |
| `add_densification_stats` gated to dense | P6 | Gradient stats biased → over/under densification |
| `pixel_coords` dtype is `int2` / `int32` | CU3.4, CU7.1 | Silent type reinterpretation in CUDA |
| Key upper 32 bits = pixel array index `k` | CU3.6 | Wrong pixel matched to wrong Gaussian after sort |
