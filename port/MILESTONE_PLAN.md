# SPLATONIC on MonoGS — Milestone Plan

Every milestone ends with a **working MonoGS**. Never break the baseline.

---

## Kanban Tracker

| ID   | Task                                   | Files Changed                                      | Status | Test / Verify                                     | Commit |
|------|----------------------------------------|----------------------------------------------------|--------|---------------------------------------------------|--------|
| I1   | Create rasterizer directories          | `track-rasterization/`, `map-rasterization/`       | ⬜      | Both directories exist, identical to MonoGS rast. |        |
| I2   | Rename packages in setup.py            | `*/setup.py` (2 files)                             | ⬜      | `pip install` succeeds for both                   |        |
| I3   | Set config.h constants                 | `*/cuda_rasterizer/config.h` (2 files)             | ⬜      | Correct `BLOCK_X/Y`, `MAX_NUM_RENDERED` present   |        |
| I4   | Install both rasterizers               | —                                                  | ⬜      | `from track_rasterization import GaussianRasterizer` works |        |
| I5   | Add YAML config keys                   | `configs/mono/*.yaml`                              | ⬜      | Config loads without error                        |        |
| P1   | Create `mask_utils.py`                 | `utils/mask_utils.py`                              | ⬜      | 480×640 → exactly 1200 pixels; visualize          |        |
| P2   | Add `calc_ssim_shuffled_packed`        | `gaussian_splatting/utils/loss_utils.py`           | ⬜      | `ssim(img, img, mask)` ≈ 1.0                      |        |
| P3   | Extend `render()` API (stub)           | `gaussian_splatting/gaussian_renderer/__init__.py` | ⬜      | Dense path unchanged; new kwargs accepted         |        |
| P4   | Add sparse loss functions (stub)       | `utils/slam_utils.py`                              | ⬜      | `get_loss_tracking_sparse(mask=None)` == dense    |        |
| P5   | Wire frontend tracking (mask ignored)  | `utils/slam_frontend.py`                           | ⬜      | Full slam.py run, output identical to baseline    |        |
| P6   | Wire backend mapping (mask ignored)    | `utils/slam_backend.py`                            | ⬜      | Full slam.py run, output identical to baseline    |        |
| CU1  | Add `pixel_range`/`pixel_coords` to CUDA interfaces | `rasterizer.h`, `forward.h`, `rasterizer_impl.h` (×2) | ⬜ | Both rasterizers compile with new signatures |        |
| CU2  | Add `lowest_alpha_coeff` to `auxiliary.h` | `*/cuda_rasterizer/auxiliary.h` (×2)           | ⬜      | Constant present, compiles                        |        |
| CU3  | Modify `preprocessCUDA` — fused key gen | `*/cuda_rasterizer/forward.cu` (×2)               | ⬜      | Key count matches SPLATONIC on same input         |        |
| CU4  | Modify `rasterizer_impl.cu` — remove fan-out, add pixel dispatch | `*/cuda_rasterizer/rasterizer_impl.cu` (×2) | ⬜ | Compiles; sort runs on pixel keys |        |
| CU5  | Modify forward `renderCUDA` — warp prefix-scan | `*/cuda_rasterizer/forward.cu` (×2)         | ⬜      | Rendered image matches dense on sampled pixels    |        |
| CU6  | Modify `rasterize_points.cu` + `ext.cpp` | `*/rasterize_points.cu`, `*/ext.cpp` (×2)        | ⬜      | C++ entry accepts new tensor args                 |        |
| CU7  | Modify `__init__.py` autograd bridge   | `*/diff_gaussian_rasterization/__init__.py` (×2)  | ⬜      | Forward pass runs end-to-end in Python            |        |
| CU8  | Modify backward `renderCUDA` — pixel dispatch | `*/cuda_rasterizer/backward.cu` (×2)        | ⬜      | Pose converges; `n_touched` non-zero              |        |
| CU9  | Full sparse render smoke test          | —                                                  | ⬜      | slam.py runs with `use_track_rasterizer=True`     |        |
| M1   | Activate FLIP schedule in backend      | `utils/slam_backend.py`                            | ⬜      | 1:3 dense:sparse ratio visible in logs            |        |
| M2   | Activate adaptive sampling in mapping  | `utils/slam_backend.py`                            | ⬜      | Sparse mask changes every iteration               |        |
| M3   | Activate sparse loss (L1 + SSIM)       | `utils/slam_utils.py`                              | ⬜      | Loss is finite on sparse pixels                   |        |
| M4   | Gate densification stats to dense pass | `utils/slam_backend.py`                            | ⬜      | Densification runs, no NaN                        |        |
| V1   | Baseline comparison on TUM fr1_desk    | —                                                  | ⬜      | SPLATONIC MonoGS ATE/PSNR within 10% of baseline  |        |
| V2   | Speed benchmark                        | —                                                  | ⬜      | Tracking FPS improved vs dense MonoGS             |        |

---

## Milestone 1 — Infrastructure

**Goal:** Both rasterizer packages install and import. MonoGS runs identically to baseline (no algorithm changes yet).

**Time estimate:** 1 day

**Rule:** No CUDA kernel changes. No Python pipeline changes.

---

### I1 — Create Rasterizer Directories

**Goal:** Physical starting point. Copy MonoGS's existing rasterizer (NOT SPLATONIC's — SPLATONIC's rasterizers are missing `theta`/`rho`/`n_touched`).

**Files changed:**
- `MonoGS/track-rasterization/` (new directory)
- `MonoGS/map-rasterization/` (new directory)

**How it works in SplaTAM/SPLATONIC:** SPLATONIC copied from `diff-gaussian-rasterization-w-depth/` and applied CUDA changes. For MonoGS we copy from `submodules/diff-gaussian-rasterization/` to preserve MonoGS features.

**Commands:**
```bash
cd /home/kislay/Documents/mpi/temp2/MonoGS
cp -r submodules/diff-gaussian-rasterization track-rasterization
cp -r submodules/diff-gaussian-rasterization map-rasterization
```

**Verify:**
```bash
diff -rq submodules/diff-gaussian-rasterization track-rasterization --exclude="*.egg-info"
diff -rq submodules/diff-gaussian-rasterization map-rasterization  --exclude="*.egg-info"
# Both should report: identical
```

**Commit name:** `feat: create track-rasterization and map-rasterization from MonoGS rasterizer`

---

### I2 — Rename Packages in `setup.py`

**Goal:** Give each rasterizer a unique importable Python name.

**Files changed:**
- `track-rasterization/setup.py`
- `map-rasterization/setup.py`

**How it works in SPLATONIC:** `track-rasterization/setup.py` names the package `track_rasterization`; `map-rasterization/setup.py` names it `map_rasterization`. The internal directory is still `diff_gaussian_rasterization/` but it maps to the new package name.

**How to adapt for MonoGS:** Identical change. MonoGS's `setup.py` currently names the package `diff_gaussian_rasterization`. Change the name and add a `package_dir` mapping.

**Change in `track-rasterization/setup.py`:**
```python
setup(
    name="track_rasterization",
    packages=["track_rasterization"],
    package_dir={"track_rasterization": "diff_gaussian_rasterization"},
    ext_modules=[CUDAExtension(
        name="track_rasterization._C",   # ← change _C prefix too
        sources=[...],                   # same sources list
    )],
    cmdclass={"build_ext": BuildExtension},
)
```

**Change in `map-rasterization/setup.py`:** Same pattern with `map_rasterization`.

**Verify:**
```bash
pip install -e track-rasterization/
pip install -e map-rasterization/
```

**Commit name:** `feat: rename track/map rasterizer packages for independent import`

---

### I3 — Set `config.h` Constants

**Goal:** Set the compile-time block size and sort buffer cap for each rasterizer.

**Files changed:**
- `track-rasterization/cuda_rasterizer/config.h`
- `map-rasterization/cuda_rasterizer/config.h`

**How it works in SPLATONIC:**
- Track: `BLOCK_X=16, BLOCK_Y=16, MAX_NUM_RENDERED=4000000` — 256 threads cooperate per pixel; static sort buffer for 4M (Gaussian, pixel) pairs
- Map: `BLOCK_X=4, BLOCK_Y=4, MAX_NUM_RENDERED=16000000` — 16 threads per pixel; larger buffer because mapping samples more pixels

**Change in `track-rasterization/cuda_rasterizer/config.h`:**
```cpp
// Add before #endif:
#define MAX_NUM_RENDERED 4000000
// BLOCK_X=16, BLOCK_Y=16 stay the same numerically
// but their semantic meaning changes in Step CU5:
// they will describe threads-per-pixel, not tile-dimensions
```

**Change in `map-rasterization/cuda_rasterizer/config.h`:**
```cpp
#define BLOCK_X 4             // ← change from 16
#define BLOCK_Y 4             // ← change from 16
#define MAX_NUM_RENDERED 16000000
```

**Verify:** Both files contain correct values. Both compile (`pip install -e` succeeds in I4).

**Commit name:** `feat: set BLOCK_X/Y and MAX_NUM_RENDERED in track/map config.h`

---

### I4 — Install Both Rasterizers

**Goal:** Confirm both packages import successfully.

```bash
pip install -e track-rasterization/
pip install -e map-rasterization/
```

**Smoke test:**
```python
from track_rasterization import GaussianRasterizer as TrackRasterizer
from map_rasterization import GaussianRasterizer as MapRasterizer
from diff_gaussian_rasterization import GaussianRasterizer as DenseRasterizer
print("All three rasterizers imported successfully")
```

At this point all three are identical in behavior — the new ones are just copies with different names.

**Commit name:** `feat: install track and map rasterizers (no CUDA changes yet)`

---

### I5 — Add Config YAML Keys (Optional but Recommended)

**Goal:** Add `use_splatonic`, `flip_ratio`, `sparse_tile_size` keys to configs so behavior can be toggled without code changes.

**Files changed:** Relevant YAML configs in `configs/`

**Change:** Add to training section:
```yaml
Training:
  use_splatonic: true         # enable SPLATONIC sparse rendering
  flip_ratio: 4               # 1 dense : (flip_ratio-1) sparse
  tracking_tile_size: 16      # must match track-rasterization BLOCK_X
  mapping_tile_size: 4        # must match map-rasterization BLOCK_X
```

**Verify:** Config loads via `config_utils.py` without error. `python slam.py` still runs baseline correctly.

**Commit name:** `feat: add SPLATONIC config keys to YAML`

---

## Milestone 2 — Python Pipeline (Algorithm-Correct, CUDA-Stubbed)

**Goal:** The entire Python pipeline is wired up and correct. The sparse pixel mask is generated, passed, and applied everywhere. The renderer still calls the dense MonoGS rasterizer — it just ignores the sparse args for now. MonoGS output is still identical to baseline.

**Time estimate:** 2–3 days

**Rule:** No CUDA kernel changes. Every step must leave MonoGS producing identical output.

**Key insight:** "Mask generated, passed, ignored" is not silly. It verifies mask generation, API design, frontend/backend wiring, and loss function stubs — all without touching the hard CUDA work. When you later activate the sparse rasterizer in Milestone 3, you only need to verify the CUDA, not re-debug the Python.

---

### P1 — Create `mask_utils.py`

**Goal:** The three sampling functions that generate sparse pixel masks.

**Files changed:** `MonoGS/utils/mask_utils.py` (new file)

**How it works in SPLATONIC (`utils/mask_utils.py`):**
- `generate_random_mask(image_size, tile_size=16)` — partitions image into 16×16 tiles, samples one pixel per tile uniformly. For 480×640: 30×40=1200 pixels sampled. Used for tracking.
- `adaptive_random_sampling(image, num_samples, epsilon=0.001)` — Sobel gradient magnitude → CDF → sample `num_samples` pixels with probability ∝ gradient+epsilon. Used for mapping.
- `get_pixel_info(mask, tile_size=16)` — converts a bool mask to `(offsets int32 [num_tiles+1], sorted_coords int2 [num_pixels])` sorted by tile index. The CUDA `preprocessCUDA` reads these to find which sampled pixels fall in each tile.

**How to adapt for MonoGS:** Copy verbatim. File has no SplaTAM-specific imports.

**Verify:**
```python
from utils.mask_utils import generate_random_mask, get_pixel_info, adaptive_random_sampling
import torch

# Test 1: tracking mask — exactly 1 pixel per tile
mask, offsets, coords = generate_random_mask((480, 640), tile_size=16)
assert mask.sum().item() == 30 * 40   # 1200 pixels

# Test 2: tile alignment — each tile has exactly 1 pixel
assert (offsets[1:] - offsets[:-1]).max().item() == 1

# Test 3: adaptive sampling — sample count matches
dummy_image = torch.rand(3, 480, 640).cuda()
amask = adaptive_random_sampling(dummy_image, num_samples=1200)
assert amask.sum().item() == 1200

# Test 4: visualize mask (optional)
import matplotlib.pyplot as plt
plt.imshow(mask.cpu().numpy())
plt.savefig('/tmp/tracking_mask.png')
```

**Commit name:** `feat: add mask_utils.py for sparse pixel sampling`

---

### P2 — Add `calc_ssim_shuffled_packed`

**Goal:** SSIM on sparse non-contiguous pixels.

**Files changed:** `MonoGS/gaussian_splatting/utils/loss_utils.py`

**How it works in SPLATONIC (`utils/loss_utils.py:69`):** Extracts N masked pixels, shuffles them, concatenates original+shuffled into 2N pixels, reshapes into a `(1, 3, 64, 2N//64)` synthetic image, runs standard SSIM.

**Why needed:** Standard 2D SSIM requires spatially contiguous pixels to compute its sliding Gaussian window. Sparse pixels from the mask are scattered — applying SSIM directly is meaningless. The shuffle-pack trick creates a valid synthetic image.

**How to adapt for MonoGS:** Add after existing `ssim()` function. Import is already available since `ssim` is defined in the same file.

```python
def calc_ssim_shuffled_packed(img1, img2, mask, window_size=4, stride=4):
    pix1 = img1[:, mask]       # [3, N]
    pix2 = img2[:, mask]       # [3, N]
    N = pix1.shape[1]
    if N < 64:
        return l1_loss(pix1, pix2)   # fallback: too sparse for SSIM window

    perm = torch.randperm(N, device=img1.device)
    cat1 = torch.cat([pix1, pix1[:, perm]], dim=1)   # [3, 2N]
    cat2 = torch.cat([pix2, pix2[:, perm]], dim=1)

    H_s = 64
    W_s = cat1.shape[1] // H_s
    cat1 = cat1[:, :H_s * W_s].reshape(1, 3, H_s, W_s)
    cat2 = cat2[:, :H_s * W_s].reshape(1, 3, H_s, W_s)
    return ssim(cat1, cat2)
```

**Verify:**
```python
from gaussian_splatting.utils.loss_utils import calc_ssim_shuffled_packed
import torch
img = torch.rand(3, 480, 640).cuda()
mask = torch.zeros(480, 640, dtype=torch.bool).cuda()
mask[::4, ::4] = True   # every 4th pixel
val = calc_ssim_shuffled_packed(img, img, mask)
assert abs(val.item() - 1.0) < 0.01, f"Expected ~1.0, got {val.item()}"
```

**Commit name:** `feat: add calc_ssim_shuffled_packed for sparse SSIM`

---

### P3 — Extend `render()` API (Stub — Dense Path Only)

**Goal:** `render()` accepts the new sparse kwargs but ignores them, always using the dense rasterizer. This validates the API without touching CUDA.

**Files changed:** `MonoGS/gaussian_splatting/gaussian_renderer/__init__.py`

**How it works in SPLATONIC (`splatam_sparse.py`):** `render()` or equivalent selects the rasterizer based on whether `pixel_range` is provided. For MonoGS this is cleaner as optional kwargs.

**How to adapt for MonoGS:** Add four optional kwargs. Keep a `# STUB` comment to make it obvious these are not yet active. The dispatch logic for the sparse rasterizers comes in Step CU9.

```python
def render(viewpoint_camera, pc, pipe, bg_color, scaling_modifier=1.0,
           override_color=None, mask=None,
           pixel_range=None, pixel_coords=None,   # SPLATONIC — Step CU9 activates these
           use_track_rasterizer=False,
           use_map_rasterizer=False):

    # STUB: dispatch to sparse rasterizers is added in Step CU9
    # For now always use the dense original MonoGS rasterizer
    from diff_gaussian_rasterization import GaussianRasterizer
    rasterizer = GaussianRasterizer(raster_settings=raster_settings)

    # ... rest of function unchanged ...
```

**Verify:**
```python
# Dense call — unchanged behavior
render_pkg = render(viewpoint, gaussians, pipe, bg)
assert "n_touched" in render_pkg
assert "render" in render_pkg

# Sparse call — accepted, ignored, no crash
render_pkg = render(viewpoint, gaussians, pipe, bg,
                    pixel_range=torch.zeros(100, dtype=torch.int32).cuda(),
                    pixel_coords=torch.zeros((100, 2), dtype=torch.int32).cuda(),
                    use_track_rasterizer=True)
assert "n_touched" in render_pkg   # still works, dense path used
```

**Commit name:** `feat: extend render() API with sparse kwargs (stub, dense path only)`

---

### P4 — Add Sparse Loss Functions (Stub — Fall Through to Dense)

**Goal:** The sparse loss functions exist and are callable, but fall through to dense loss when `pixel_mask` is None.

**Files changed:** `MonoGS/utils/slam_utils.py`

**Add two functions:**

```python
def get_loss_tracking_sparse(config, image, depth, opacity, viewpoint, pixel_mask=None):
    """Tracking loss at sampled pixels. Falls back to dense if pixel_mask is None."""
    if pixel_mask is None:
        return get_loss_tracking(config, image, depth, opacity, viewpoint)

    image_ab = torch.exp(viewpoint.exposure_a) * image + viewpoint.exposure_b
    gt_image  = viewpoint.original_image.cuda()
    combined_mask = pixel_mask & viewpoint.grad_mask[0].bool()

    if config["Training"]["monocular"]:
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
        l1_d = torch.abs(depth[0, d_mask] - gt_depth[d_mask]).mean() if d_mask.any() else \
               torch.tensor(0.0, device=image.device)
        return alpha * l1_rgb + (1.0 - alpha) * l1_d


def get_loss_mapping_sparse(config, image, depth, opacity, viewpoint, pixel_mask=None):
    """Mapping loss at sparse pixels with shuffled SSIM. Falls back to dense if None."""
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
    d_loss = torch.abs(depth[0, depth_mask] - gt_depth[depth_mask]).mean() \
             if depth_mask.any() else torch.tensor(0.0, device=image.device)
    return alpha * rgb_loss + (1.0 - alpha) * d_loss
```

**Verify:**
```python
# Fallback test: with mask=None should match dense loss
loss_dense  = get_loss_tracking(config, image, depth, opacity, viewpoint)
loss_sparse = get_loss_tracking_sparse(config, image, depth, opacity, viewpoint, pixel_mask=None)
assert torch.allclose(loss_dense, loss_sparse)
```

**Commit name:** `feat: add get_loss_tracking_sparse and get_loss_mapping_sparse`

---

### P5 — Wire Frontend Tracking (Mask Generated, Passed, Dense Path Used)

**Goal:** `FrontEnd.tracking()` generates the pixel mask and passes it to `render()` and `get_loss_tracking_sparse()`. Since `render()` ignores sparse args (Step P3) and `get_loss_tracking_sparse` falls back to dense loss when mask is passed but sparse rasterizer not active — the output is still identical to baseline.

Wait: actually the mask IS passed to `get_loss_tracking_sparse`, so the loss IS computed only at sparse pixels even in this stub stage. That changes behavior slightly.

**Revised approach:** Pass `pixel_mask=None` until the sparse rasterizer is active (CU9). Use a flag from config:

```python
use_splatonic = config["Training"].get("use_splatonic", False)
```

**Files changed:** `MonoGS/utils/slam_frontend.py`

**Function:** `FrontEnd.tracking(cur_frame_idx, viewpoint)`

**Changes:**
```python
from utils.mask_utils import generate_random_mask, get_pixel_info
from utils.slam_utils import get_loss_tracking_sparse

def tracking(self, cur_frame_idx, viewpoint):
    use_splatonic = self.config["Training"].get("use_splatonic", False)

    # Generate mask once per frame (reuse across all tracking iters)
    if use_splatonic:
        H, W = viewpoint.image_height, viewpoint.image_width
        pixel_mask, _, _ = generate_random_mask((H, W), tile_size=16, device='cuda')
        pixel_info   = get_pixel_info(pixel_mask, tile_size=16)
        pixel_range  = pixel_info[0].cuda()
        pixel_coords = pixel_info[1].cuda()
    else:
        pixel_mask = pixel_range = pixel_coords = None

    pose_optimizer = ...  # unchanged

    for i in range(tracking_itr_num):
        render_pkg = render(
            viewpoint, self.gaussians, self.pipeline_params, self.background,
            pixel_range=pixel_range, pixel_coords=pixel_coords,
            use_track_rasterizer=use_splatonic)   # ignored until CU9

        image   = render_pkg["render"]
        depth   = render_pkg["depth"]
        opacity = render_pkg["opacity"]

        loss = get_loss_tracking_sparse(
            self.config, image, depth, opacity, viewpoint,
            pixel_mask=pixel_mask if use_splatonic else None)

        loss.backward()
        pose_optimizer.step()
        converged = update_pose(viewpoint)
        if converged:
            break
```

**Verify:** Run `slam.py` with `use_splatonic: false` in config. Output must be bit-identical to baseline. With `use_splatonic: true`, run completes without crash (dense path still active because CU9 not done yet; mask is generated and passed but `render()` ignores it and returns dense output; loss is computed only at sparse pixels which is a real behavior change — this is expected and acceptable at this stage).

**Commit name:** `feat: wire sparse pixel mask into FrontEnd.tracking (dense render path)`

---

### P6 — Wire Backend Mapping (Mask Generated, Dense Path, FLIP Counter)

**Goal:** `BackEnd.map()` generates the sparse pixel mask, has the FLIP counter logic, but still uses the dense rasterizer. The FLIP counter correctly gates dense vs sparse calls. The sparse call still uses the dense rasterizer (corrected in CU9).

**Files changed:** `MonoGS/utils/slam_backend.py`

**Function:** `BackEnd.map(current_window, prune=False, iters=1)`

**Changes:**
1. Add to `BackEnd.__init__`: `self.map_iter_counter = 0`
2. Add imports:
```python
from utils.mask_utils import adaptive_random_sampling, get_pixel_info
from utils.slam_utils import get_loss_mapping_sparse
```

3. Wrap the main iteration body:
```python
FLIP = self.config["Training"].get("flip_ratio", 4)
use_splatonic = self.config["Training"].get("use_splatonic", False)

for iteration in range(iters):
    viewpoint = ...  # keyframe selection, unchanged

    use_dense = (not use_splatonic) or (self.map_iter_counter % FLIP == 0)
    self.map_iter_counter += 1

    if use_dense:
        render_pkg = render(viewpoint, self.gaussians,
                            self.pipeline_params, self.background)
        image, depth, opacity = (render_pkg["render"],
                                 render_pkg["depth"], render_pkg["opacity"])
        loss = get_loss_mapping(self.config, image, depth, opacity, viewpoint, ...)
    else:
        # Sparse path — dense rasterizer still used until CU9
        gt_image = viewpoint.original_image.cuda()
        H, W = gt_image.shape[1], gt_image.shape[2]
        num_sparse = max(64, (H * W) // 64)
        pixel_mask = adaptive_random_sampling(gt_image, num_sparse)
        pixel_info   = get_pixel_info(pixel_mask, tile_size=4)
        pixel_range  = pixel_info[0].cuda()
        pixel_coords = pixel_info[1].cuda()

        # STUB: use_map_rasterizer=True will be active after CU9
        render_pkg = render(viewpoint, self.gaussians,
                            self.pipeline_params, self.background,
                            pixel_range=pixel_range, pixel_coords=pixel_coords,
                            use_map_rasterizer=True)   # ignored until CU9
        image, depth, opacity = (render_pkg["render"],
                                 render_pkg["depth"], render_pkg["opacity"])
        loss = get_loss_mapping_sparse(self.config, image, depth, opacity,
                                       viewpoint, pixel_mask=pixel_mask)

    # Isotropic loss — MonoGS contribution, unchanged
    scaling = self.gaussians.get_scaling
    loss += 10 * torch.abs(scaling - scaling.mean(dim=1, keepdim=True)).mean()

    loss.backward()

    # Densification stats — only on dense passes
    if use_dense and not prune:
        if render_pkg["visibility_filter"].any():
            self.gaussians.max_radii2D[render_pkg["visibility_filter"]] = torch.max(
                self.gaussians.max_radii2D[render_pkg["visibility_filter"]],
                render_pkg["radii"][render_pkg["visibility_filter"]])
            self.gaussians.add_densification_stats(
                render_pkg["viewspace_points"], render_pkg["visibility_filter"])

    # ... rest of iteration: optimizer step, occ_aware_visibility, etc. — unchanged
```

**Verify:** Full `slam.py` run with `use_splatonic: true` completes. Logs show FLIP counter alternating: iteration 0 → dense, iteration 1 → sparse (but still dense rasterizer), etc. Loss is finite throughout.

**Commit name:** `feat: wire FLIP schedule into BackEnd.map (dense render path)`

---

**End of Milestone 2.** At this point:
- All Python API is in place and correct
- Masks are generated, passed through every layer
- Losses are correctly structured
- FLIP scheduling is implemented
- `slam.py` runs with `use_splatonic: true` using the dense rasterizer throughout
- Output is not yet sparse — that happens in Milestone 3

---

## Milestone 3 — CUDA Port

**Goal:** Port SPLATONIC's pixel-based rasterization pipeline INTO the MonoGS rasterizer copies. Each step is a separate PR with a concrete validation test.

**Time estimate:** 3–5 days

**Rule:** After CU9, `slam.py` with `use_splatonic: true` uses the real sparse rasterizer with no dense fallback for tracking/mapping.

---

### CU1 — Add Interfaces (No Kernel Changes)

**Goal:** Add `pixel_range`/`pixel_coords` to the C++ and CUDA header interfaces. No kernel bodies change.

**Files changed (×2, in both track and map rasterizers):**
- `cuda_rasterizer/rasterizer.h`
- `cuda_rasterizer/forward.h`
- `cuda_rasterizer/rasterizer_impl.h` (GeometryState / forward declaration)

**How it works in SplaTAM:** `Rasterizer::forward()` has no pixel args. `FORWARD::preprocess()` and `FORWARD::render()` have no pixel args.

**How it works in MonoGS:** `Rasterizer::forward()` already has MonoGS-specific args (`projmatrix_raw`, `theta`, `rho`, `n_touched`, `out_opacity`). These stay.

**Change in `rasterizer.h` — `Rasterizer::forward()` static declaration:**
```cpp
// Add after tan_fovy, before prefiltered:
const int* pixel_range,    // prefix-sum offsets over sampled pixels per tile
const int* pixel_coords,   // sampled pixel (x,y) as int2, size = N
```

**Change in `forward.h` — `FORWARD::preprocess()` and `FORWARD::render()` declarations:**
```cpp
// preprocess():
const int* pixel_range,
const int2* pixel_coords,
int* num_rendered_ptr,           // atomic counter (NEW)
uint64_t* gaussian_keys_unsorted, // emitted keys (NEW)
int* gaussian_values_unsorted,    // emitted Gaussian indices (NEW)

// render():
const int2* pixel_coords,        // NEW
int num_pixels,                  // NEW
```

**Also add** `int* num_rendered_dev` to `GeometryState` (or allocate it separately in `rasterizer_impl.cu`).

**Verify:** Both packages compile after `pip install -e`. No kernel behavior change — MonoGS still runs identically. The only difference is `rasterizer_impl.cu` now won't compile yet (it calls the old function signatures). Fix `rasterizer_impl.cu` in CU4.

**Commit name:** `feat(cuda): add pixel_range/pixel_coords to CUDA header interfaces`

---

### CU2 — Add `lowest_alpha_coeff` to `auxiliary.h`

**Goal:** Add the preemptive alpha-culling threshold constant.

**Files changed:**
- `track-rasterization/cuda_rasterizer/auxiliary.h`
- `map-rasterization/cuda_rasterizer/auxiliary.h`

**How it works in SPLATONIC (`auxiliary.h:41`):**
```cpp
const float lowest_alpha_coeff = 5.54126354515842f;
```
`exp(-5.54) ≈ 0.004`. If a Gaussian's log-alpha at a sampled pixel is below this (i.e. `power > lowest_alpha_coeff`), its contribution is < 0.4% — not worth including in the sort. This check happens inside `preprocessCUDA` during key generation.

**How to adapt for MonoGS:** Add to `auxiliary.h` after the `NUM_WARPS` macro. File is otherwise identical between SplaTAM and MonoGS rasterizers.

```cpp
// After: #define NUM_WARPS (BLOCK_SIZE/32)
const float lowest_alpha_coeff = 5.54126354515842f;
```

**Verify:** `grep lowest_alpha_coeff track-rasterization/cuda_rasterizer/auxiliary.h` — present.

**Commit name:** `feat(cuda): add lowest_alpha_coeff preemptive cull threshold to auxiliary.h`

---

### CU3 — Modify `preprocessCUDA` — Fused Key Generation

**Goal:** Replace the tile-count-and-fan-out approach with a fused pixel key generation loop inside `preprocessCUDA`. This is the most complex CUDA change.

**Files changed:**
- `track-rasterization/cuda_rasterizer/forward.cu`
- `map-rasterization/cuda_rasterizer/forward.cu`

**How it works in SplaTAM/MonoGS current `preprocessCUDA`:**
```cpp
// End of preprocessCUDA — records tile count for later prefix-sum:
tiles_touched[idx] = (rect_max.x - rect_min.x) * (rect_max.y - rect_min.y);
// Key generation happens later in a separate duplicateWithKeys kernel
```

**How it works in SPLATONIC `preprocessCUDA` (`forward.cu:164-351`):**
- Receives `pixel_range` and `pixel_coords` as new params
- Receives atomic counter `num_rendered_ptr` and output buffers `gaussian_keys_unsorted`, `gaussian_values_unsorted`
- Replaces `tiles_touched[idx] = ...` with an inner loop that iterates tiles → pixels → evaluates power → checks `lowest_alpha_coeff` → emits key

**How to adapt for MonoGS:** Same change, PLUS preserve MonoGS-specific code already in `preprocessCUDA`:
- `projmatrix_raw` usage for corrected camera position
- `theta` / `rho` Jacobian storage into `GeometryState` for backward
- Both of these are in the preprocess logic that runs before the tile loop — they are untouched

**New params to add to `preprocessCUDA` signature:**
```cpp
__global__ void preprocessCUDA(
    // ... all existing MonoGS params ...
    const int* pixel_range,               // NEW
    const int2* pixel_coords,             // NEW
    int* num_rendered_ptr,                // NEW: atomic key counter
    uint64_t* gaussian_keys_unsorted,     // NEW: output sort keys
    int* gaussian_values_unsorted)        // NEW: output Gaussian indices
```

**Remove:**
```cpp
tiles_touched[idx] = (rect_max.x - rect_min.x) * (rect_max.y - rect_min.y);
```

**Add (at the same location):**
```cpp
for (int tile_y = rect_min.y; tile_y < rect_max.y; ++tile_y) {
    for (int tile_x = rect_min.x; tile_x < rect_max.x; ++tile_x) {
        int tile_id = tile_y * tile_grid.x + tile_x;
        int pstart = pixel_range[tile_id];
        int pend   = pixel_range[tile_id + 1];
        for (int k = pstart; k < pend; ++k) {
            int2 pix = pixel_coords[k];
            float2 d = { (float)pix.x - p_proj.x, (float)pix.y - p_proj.y };
            float power = -0.5f * (conic.x*d.x*d.x
                                 + 2.0f*conic.y*d.x*d.y
                                 + conic.z*d.y*d.y);
            if (power > lowest_alpha_coeff) continue;   // preemptive cull
            uint32_t depth_bits = *reinterpret_cast<uint32_t*>(&depths[idx]);
            uint64_t key = ((uint64_t)(uint32_t)k << 32) | (uint64_t)depth_bits;
            int slot = atomicAdd(num_rendered_ptr, 1);
            if (slot >= MAX_NUM_RENDERED) return;
            gaussian_keys_unsorted[slot] = key;
            gaussian_values_unsorted[slot] = idx;
        }
    }
}
```

**Also update** the `FORWARD::preprocess()` wrapper at the bottom of `forward.cu` to pass the new params.

**Validate independently (before building the full pipeline):**
```python
# After pip install, call the raw C extension with a known scene:
# 1. Run preprocessCUDA on 10 Gaussians, 5 sampled pixels
# 2. Read num_rendered_ptr (should be <= 50, typically much less due to alpha cull)
# 3. Read gaussian_keys_unsorted: upper 32 bits = pixel index, lower = depth
# 4. Confirm: Gaussian i appears in key list only if it covers sampled pixel j
# Compare with SPLATONIC's preprocessCUDA on the same input
```

**Commit name:** `feat(cuda): replace tile fan-out with fused pixel key generation in preprocessCUDA`

---

### CU4 — Modify `rasterizer_impl.cu` — Remove Fan-Out, Pixel-Indexed Sort

**Goal:** Remove the two steps made obsolete by CU3 (`InclusiveSum` prefix-sum, `duplicateWithKeys`) and change the render grid from tile-based to pixel-based.

**Files changed:**
- `track-rasterization/cuda_rasterizer/rasterizer_impl.cu`
- `map-rasterization/cuda_rasterizer/rasterizer_impl.cu`

**How it works in SplaTAM/MonoGS current `Rasterizer::forward()`:**
```
Step 1: FORWARD::preprocess()                   → writes tiles_touched[i]
Step 2: cub::DeviceScan::InclusiveSum(tiles_touched)    ← REMOVE
Step 3: duplicateWithKeys()                     ← REMOVE
Step 4: cub::DeviceRadixSort::SortPairs()       → sort by (tile_id | depth)
Step 5: identifyTileRanges()                    → unchanged
Step 6: FORWARD::render<<<(grid_x, grid_y)>>>() → change to <<<(num_pixels)>>>
```

**How it works in SPLATONIC:** Steps 2 and 3 are gone. `preprocessCUDA` (Step 1) now atomically populates the key buffers directly. Steps 4 and 5 are unchanged (same kernels, just with pixel-indexed keys). Step 6 changes to a 1D pixel grid.

**Changes to `Rasterizer::forward()`:**
1. Add `const int* pixel_range, const int* pixel_coords` and `int* num_rendered_dev` to the function signature (matching CU1 header changes).
2. Initialize `num_rendered_dev` to 0 before calling preprocess: `cudaMemset(num_rendered_dev, 0, sizeof(int))`.
3. Pass new args to `FORWARD::preprocess(...)`.
4. **Delete** `cub::DeviceScan::InclusiveSum(...)`.
5. **Delete** `duplicateWithKeys<<<...>>>(...)`
6. After preprocess: `cudaMemcpy(&num_rendered, num_rendered_dev, sizeof(int), cudaMemcpyDeviceToHost)`.
7. Static sort buffer: use `MAX_NUM_RENDERED` for binning buffer allocation instead of `num_rendered`.
8. `cub::DeviceRadixSort::SortPairs(...)` call: update the count arg to `num_rendered` (the atomically counted keys, not the prefix-sum output).
9. `identifyTileRanges<<<...>>>()`: update the count arg to `num_rendered`.
10. Change render launch:
    - Old: `dim3 grid((W+BLOCK_X-1)/BLOCK_X, (H+BLOCK_Y-1)/BLOCK_Y, 1)`
    - New: `int num_pixels = /* last entry of pixel_range */; FORWARD::render<<<num_pixels, block>>>(...)`
11. Pass `pixel_coords`, `num_pixels`, and `n_touched` to the new render kernel.

**Also update `Rasterizer::backward()`:** Change the backward render launch from tile-grid to pixel-grid. Pass `pixel_coords` to `BACKWARD::render()`.

**Verify:** Both packages compile. The InclusiveSum and duplicateWithKeys calls are gone (grep).

**Commit name:** `feat(cuda): remove duplicateWithKeys/InclusiveSum, add pixel-indexed dispatch in rasterizer_impl`

---

### CU5 — Modify Forward `renderCUDA` — Warp Prefix-Scan + `n_touched`

**Goal:** Replace the per-tile render kernel with a per-pixel kernel where all `BLOCK_SIZE` threads cooperate on one pixel's Gaussian list using warp-level prefix-scan for transmittance accumulation.

**Files changed:**
- `track-rasterization/cuda_rasterizer/forward.cu`
- `map-rasterization/cuda_rasterizer/forward.cu`

**How it works in SplaTAM/MonoGS current `renderCUDA`:**
- One CUDA block per tile (16×16 pixels)
- 256 threads, each handles one pixel independently
- Serial loop over Gaussians in tile: `T *= (1 - alpha)` per thread
- `atomicAdd(&n_touched[id], 1)` when `T > 0.5`

**How it works in SPLATONIC `renderCUDAPure` (track) / `renderCUDA` (map):**
- One CUDA block per sampled pixel
- BLOCK_SIZE threads (256 track, 16 map) all work on the same pixel's Gaussian list
- Warp prefix-scan (`__shfl_up_sync`) computes each thread's running `T_before_me`
- `__syncthreads_or(done)` for cooperative early exit

**Critical MonoGS preservation — `n_touched`:**
The original `renderCUDA` has:
```cpp
if (T > 0.5f)
    atomicAdd(&(n_touched[collected_id[j]]), 1);
```
This drives `FrontEnd.is_keyframe()` and SLAM pruning. The new pixel-parallel kernel MUST preserve this with `atomicAdd` (not a plain write — multiple pixel-blocks can reference the same Gaussian simultaneously).

**New kernel structure (both rasterizers, with n_touched preserved):**
```cpp
__global__ void renderCUDA(
    const uint2* __restrict__ pixel_ranges,
    const int2*  __restrict__ pixel_coords,
    const int*   __restrict__ point_list,
    int W, int H,
    const float2* __restrict__ points_xy_image,
    const float4* __restrict__ conic_opacity,
    float* __restrict__ final_T,
    uint32_t* __restrict__ n_contrib,
    int* __restrict__ n_touched,      // MonoGS: MUST keep with atomicAdd
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

    int lane     = threadIdx.x & 31;
    int warp_idx = threadIdx.x / 32;

    __shared__ float collected_T[NUM_WARPS];
    if (threadIdx.x < NUM_WARPS) collected_T[threadIdx.x] = 1.0f;
    __syncthreads();

    int2  pix   = pixel_coords[pixel_id];
    uint2 range = pixel_ranges[pixel_id];

    float T_warp = 1.0f;
    float C[NUM_CHANNELS] = {};
    float D = 0.0f;
    uint32_t contrib = 0;
    bool done = (range.x == range.y);

    int rounds = (range.y - range.x + BLOCK_SIZE - 1) / BLOCK_SIZE;
    for (int r = 0; r < rounds; ++r) {
        __syncthreads();
        if (lane == 0) T_warp = collected_T[warp_idx];
        T_warp = __shfl_sync(~0u, T_warp, 0);

        int g = range.x + r * BLOCK_SIZE + threadIdx.x;
        bool in_range = (g < range.y);
        float alpha = 0.f; int gid = 0; float depth = 0.f;
        float feat[NUM_CHANNELS] = {};

        if (in_range && !done) {
            gid = point_list[g];
            float2 d = { (float)pix.x - points_xy_image[gid].x,
                         (float)pix.y - points_xy_image[gid].y };
            float4 co = conic_opacity[gid];
            float pw = -0.5f*(co.x*d.x*d.x + 2.f*co.y*d.x*d.y + co.z*d.y*d.y);
            if (pw <= 0.f) {
                alpha = min(0.99f, co.w * expf(pw));
                depth = depths_precomp[gid];
                for (int c = 0; c < NUM_CHANNELS; ++c)
                    feat[c] = features[gid * NUM_CHANNELS + c];
            }
        }

        // Warp prefix product of (1-alpha)
        float oma = 1.f - alpha;
        float pfx = oma;
        for (int off = 1; off < 32; off <<= 1) {
            float t = __shfl_up_sync(~0u, pfx, off);
            if (lane >= off) pfx *= t;
        }
        // T_before_me = T_warp * prefix of predecessors
        float T_before = T_warp * (lane == 0 ? 1.f : __shfl_up_sync(~0u, pfx, 1));

        if (in_range && !done && alpha > 1.f/255.f) {
            float w = alpha * T_before;
            for (int c = 0; c < NUM_CHANNELS; ++c) C[c] += feat[c] * w;
            D += depth * w;
            ++contrib;
            if (T_before > 0.5f)
                atomicAdd(&n_touched[gid], 1);   // MonoGS keyframe/pruning signal
            if (T_before * oma < 0.0001f) done = true;
        }

        if (lane == 31)
            collected_T[warp_idx] = (warp_idx == 0 ? 1.f : collected_T[warp_idx]) * pfx * T_warp;
        __syncthreads();
        if (__syncthreads_or(done)) break;
    }

    if (threadIdx.x == 0) {
        int flat = pix.y * W + pix.x;
        n_contrib[pixel_id]   = contrib;
        final_T[pixel_id]     = T_warp;
        for (int c = 0; c < NUM_CHANNELS; ++c)
            out_color[flat * NUM_CHANNELS + c] = C[c] + T_warp * bg_color[c];
        out_depth[flat]   = D;
        out_opacity[flat] = 1.f - T_warp;
    }
}
```

**Validate (forward pass only, before backward):**
```python
# 1. Run the new renderCUDA on a tiny scene (10 Gaussians, 5 pixels)
# 2. Compare rendered color at each sampled pixel with brute-force reference:
#    for each pixel, sum alpha_i * color_i * product(1-alpha_j for j<i)
# 3. Assert max absolute error < 1e-4
# 4. Confirm n_touched is non-zero for visible Gaussians
```

**Commit name:** `feat(cuda): replace tile-parallel renderCUDA with pixel-parallel + warp prefix-scan`

---

### CU6 — Modify `rasterize_points.cu` + `ext.cpp` — Tensor Arguments

**Goal:** Thread `pixel_range` and `pixel_coords` through the C++ entry points.

**Files changed (×2):**
- `track-rasterization/rasterize_points.cu`
- `track-rasterization/ext.cpp`
- `map-rasterization/rasterize_points.cu`
- `map-rasterization/ext.cpp`

**How it works in MonoGS current `rasterize_points.cu`:** `RasterizeGaussiansCUDA` takes no pixel tensors. Binning buffer is dynamically sized by `num_rendered`.

**Changes:**
1. Add `const torch::Tensor& pixel_range` and `const torch::Tensor& pixel_coords` after `tan_fovy` in `RasterizeGaussiansCUDA`.
2. Switch to static buffer: `torch::Tensor binningBuffer = torch::empty({required<BinningState>(MAX_NUM_RENDERED)}, ...)`.
3. Extract `num_pixels` from `pixel_range.size(0) - 1` (number of tiles) or read last element.
4. Pass raw pointers to `CudaRasterizer::Rasterizer::forward(...)`.
5. `RasterizeGaussiansBackwardCUDA`: add `const torch::Tensor& pixel_coords`; pass to `Rasterizer::backward(...)`.
6. `ext.cpp`: add `pixel_range` and `pixel_coords` to both pybind11 registrations.

**Verify:** Both packages compile and import after `pip install -e`.

**Commit name:** `feat(cuda): add pixel_range/pixel_coords tensor args to rasterize_points.cu`

---

### CU7 — Modify `__init__.py` — Autograd Bridge

**Goal:** Thread `pixel_range` and `pixel_coords` through the PyTorch autograd Function, preserving MonoGS's `theta`/`rho`/`n_touched` handling.

**Files changed (×2):**
- `track-rasterization/diff_gaussian_rasterization/__init__.py`
- `map-rasterization/diff_gaussian_rasterization/__init__.py`

**How it works in MonoGS current `__init__.py`:**
- `_RasterizeGaussians.forward()`: includes `theta`, `rho` in args; returns `(color, radii, depth, opacity, n_touched)`
- `_RasterizeGaussians.backward()`: extracts `grad_tau`, splits into `grad_rho`/`grad_theta`

**Changes:**
1. Add `pixel_range=None, pixel_coords=None` to `_RasterizeGaussians.forward()`.
2. Insert them into the `args` tuple after `tanfovy`, before `image_height` (matching C++ pybind order from CU6).
3. Save `pixel_coords` via `ctx.save_for_backward(...)`.
4. In `backward()`: unpack `pixel_coords`; include in backward args; return `None` for `pixel_range`/`pixel_coords` (no gradient).
5. Add `pixel_range=None, pixel_coords=None` to `GaussianRasterizer.forward()`; pass through to `_RasterizeGaussians.apply(...)`.

**MonoGS preservation:** `theta`/`rho` params stay. `grad_tau` split into `grad_rho`/`grad_theta` is unchanged. `n_touched` return value stays.

**Verify:**
```python
# End-to-end forward+backward with dummy sparse inputs:
from track_rasterization import GaussianRasterizer
raster = GaussianRasterizer(raster_settings=settings)
color, radii, depth, opacity, n_touched = raster(
    means3D=..., means2D=...,
    theta=cam.cam_rot_delta, rho=cam.cam_trans_delta,
    pixel_range=pixel_range, pixel_coords=pixel_coords,
    ...)
loss = color.sum()
loss.backward()
assert cam.cam_rot_delta.grad is not None    # pose gradient flows
assert cam.cam_trans_delta.grad is not None
```

**Commit name:** `feat(cuda): add pixel_range/pixel_coords to autograd bridge in __init__.py`

---

### CU8 — Modify Backward `renderCUDA` — Pixel Dispatch

**Goal:** Change the backward render kernel to one-block-per-pixel dispatch with warp prefix-scan.

**Files changed (×2):**
- `track-rasterization/cuda_rasterizer/backward.cu`
- `map-rasterization/cuda_rasterizer/backward.cu`

**How it works in MonoGS current backward `renderCUDA`:** One block per tile; each thread processes one pixel's Gaussian list in reverse; `atomicAdd` scatters `dL_dmean2D`, `dL_dconic2D`, `dL_dopacity`, `dL_dcolors`.

**Changes:**
1. Add `const int2* pixel_coords, int num_pixels` to kernel signature.
2. `pixel_id = blockIdx.x` (not `blockIdx.y * gridDim.x + blockIdx.x`).
3. Recover `(pix_x, pix_y)` from `pixel_coords[pixel_id]`.
4. `range.y = range.x + n_contrib[pixel_id]` — cap at forward's contribution count (same as before but now per-pixel index, not per-tile-pixel index).
5. Same warp prefix-scan structure for backward transmittance accumulation.
6. `atomicAdd` pattern is unchanged — necessary because multiple pixel-blocks share Gaussians.

**Critical check — `BACKWARD::preprocess()` is NOT touched:**
This function computes `dL/d_tau` (the `theta`/`rho` pose gradient) by differentiating the Gaussian projection through the camera model. It operates one-thread-per-Gaussian and is completely independent of the tile-vs-pixel dispatch in `BACKWARD::render()`. Do not modify it.

**Verify:**
```python
# 1. Forward + backward with sparse inputs
# 2. cam.cam_rot_delta.grad is non-None and non-zero → pose gradient flows
# 3. gaussians._xyz.grad is non-None → Gaussian gradients flow
# 4. n_touched non-zero → visibility signal intact
# 5. Full slam.py tracking loop converges on TUM fr1_desk first 10 frames
```

**Commit name:** `feat(cuda): pixel-parallel backward renderCUDA; BACKWARD::preprocess unchanged`

---

### CU9 — Activate Sparse Dispatch in `render()`

**Goal:** Replace the `# STUB` comment in `render()` with the real rasterizer dispatch. This is the final step to activate the CUDA pipeline.

**Files changed:** `MonoGS/gaussian_splatting/gaussian_renderer/__init__.py`

**Change:**
```python
def render(viewpoint_camera, pc, pipe, bg_color, ...,
           pixel_range=None, pixel_coords=None,
           use_track_rasterizer=False, use_map_rasterizer=False):

    # Remove the STUB comment and implement the real dispatch:
    if use_track_rasterizer and pixel_range is not None:
        from track_rasterization import GaussianRasterizer
    elif use_map_rasterizer and pixel_range is not None:
        from map_rasterization import GaussianRasterizer
    else:
        from diff_gaussian_rasterization import GaussianRasterizer

    rasterizer = GaussianRasterizer(raster_settings=raster_settings)

    # Pass pixel args only to sparse rasterizers:
    extra_kwargs = {}
    if pixel_range is not None:
        extra_kwargs["pixel_range"]  = pixel_range
        extra_kwargs["pixel_coords"] = pixel_coords

    rendered_image, radii, depth, opacity, n_touched = rasterizer(
        means3D=means3D, means2D=means2D, shs=shs, colors_precomp=colors_precomp,
        opacities=opacity, scales=scales, rotations=rotations,
        cov3D_precomp=cov3D_precomp,
        theta=viewpoint_camera.cam_rot_delta,
        rho=viewpoint_camera.cam_trans_delta,
        **extra_kwargs)
    ...
```

**Verify:** Full `slam.py` run with `use_splatonic: true`. Check that:
- Tracking uses `TrackRasterizer` (log a message or check with `isinstance`)
- Mapping alternates: dense uses `DenseRasterizer`, sparse uses `MapRasterizer`
- `n_touched` is non-zero
- Keyframe decisions happen
- No CUDA error

**Commit name:** `feat: activate sparse rasterizer dispatch in render() — SPLATONIC live`

---

## Milestone 4 — Optimization and Validation

**Goal:** Tune hyperparameters, add novelty mask, run benchmark comparisons.

**Time estimate:** 2 days

---

### M1–M4 — These Are Already Done (from Milestone 2)

The FLIP schedule (M1), adaptive sampling (M2), sparse loss (M3), and densification gating (M4) were all wired in Milestone 2. They just weren't using the real sparse rasterizer. Now that CU9 is done, they are automatically live.

**Verify:** Check logs show:
- `map_iter_counter % 4 == 0` → dense render (`DenseRasterizer`)
- Otherwise → sparse render (`MapRasterizer`)
- `xyz_gradient_accum` is only updated on dense iterations

---

### V1 — Baseline Comparison on TUM fr1_desk

**Goal:** Confirm SPLATONIC MonoGS is competitive with baseline MonoGS.

**Run both:**
```bash
# Baseline (dense MonoGS):
python slam.py --config configs/mono/tum_fr1_desk.yaml  # use_splatonic: false

# SPLATONIC MonoGS:
python slam.py --config configs/mono/tum_fr1_desk.yaml  # use_splatonic: true
```

**Expected:** ATE within 10% of baseline. PSNR within 1–2 dB. Tracking FPS improved.

---

### V2 — Speed Benchmark

**Expected gain from SPLATONIC:**
- Tracking: ~256× fewer pixels rendered per iteration (1 pixel per 16×16 tile)
- Mapping: ~16× fewer pixels rendered on sparse passes (3/4 of iterations)
- Net: significant wall-clock speedup in tracking; moderate in mapping

---

## Key Invariants (Reference Throughout)

1. **`n_touched` uses `atomicAdd`** — multiple pixel-blocks may reference the same Gaussian. Non-atomic write = corrupted keyframe selection.
2. **`BACKWARD::preprocess` is never touched** — it computes `dL/d_tau` per-Gaussian independently of the pixel-vs-tile dispatch.
3. **`tile_size` in Python must match `BLOCK_X` in CUDA** — tracking: `tile_size=16` ↔ `BLOCK_X=16`; mapping: `tile_size=4` ↔ `BLOCK_X=4`.
4. **Dense path for densification silhouette renders** — `add_new_gaussians()` always uses `DenseRasterizer`.
5. **Exposure correction before sparse masking** — apply `exp(a)*img+b` before `img[:, pixel_mask]`, not after.
6. **Densification stats only on dense passes** — `add_densification_stats` and `max_radii2D` update are gated to `use_dense == True`.
