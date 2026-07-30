# MonoGS Repository Implementation Reference

This document maps every algorithmic concept in the MonoGS design to concrete source
files, classes, and functions. It is written for developers who will modify this
codebase. It does not re-explain the algorithm; it explains how the repository
realises it.

---

## Table of Contents

1. [Repository Layout](#1-repository-layout)
2. [Process Architecture](#2-process-architecture)
3. [Gaussian Map — the Central State](#3-gaussian-map--the-central-state)
4. [Camera Representation and Pose Parameterisation](#4-camera-representation-and-pose-parameterisation)
5. [Frontend — Tracking and Keyframe Selection](#5-frontend--tracking-and-keyframe-selection)
6. [Backend — Mapping, Densification, and Pruning](#6-backend--mapping-densification-and-pruning)
7. [Inter-Process Communication Protocol](#7-inter-process-communication-protocol)
8. [Loss Functions](#8-loss-functions)
9. [Differentiable Rasterizer — Python Layer](#9-differentiable-rasterizer--python-layer)
10. [Differentiable Rasterizer — CUDA Layer](#10-differentiable-rasterizer--cuda-layer)
11. [Implementation Details Not Described in the Paper](#11-implementation-details-not-described-in-the-paper)
12. [Annotated Data-Flow Walkthrough](#12-annotated-data-flow-walkthrough)
13. [Key Invariants for Developers](#13-key-invariants-for-developers)

---

## 1. Repository Layout

```
slam.py                          Entry point. Owns SLAM class, sets up processes.
utils/
  slam_frontend.py               FrontEnd process: tracking + keyframe selection.
  slam_backend.py                BackEnd process: mapping + pruning + densification.
  camera_utils.py                Camera nn.Module (the pose optimisation target).
  pose_utils.py                  SE3/SO3 Lie-algebra pose update math.
  slam_utils.py                  Loss functions, depth utilities, gradient masks.
  dataset.py                     Dataset readers (Replica, TUM, EuRoC, Realsense).
  multiprocessing_utils.py       clone_obj(), FakeQueue stub.
  eval_utils.py                  ATE, PSNR/SSIM/LPIPS evaluation.
  config_utils.py                YAML config loading.
  logging_utils.py               Colour-coded terminal logging.

gaussian_splatting/
  scene/gaussian_model.py        GaussianModel: the entire Gaussian map.
  gaussian_renderer/__init__.py  Python render() wrapper.
  utils/general_utils.py         Activations, LR schedulers, build_rotation, etc.
  utils/graphics_utils.py        Projection matrices, getWorld2View2.
  utils/loss_utils.py            l1_loss, ssim.
  utils/sh_utils.py              Spherical harmonic evaluation (Python side).

submodules/diff-gaussian-rasterization/
  diff_gaussian_rasterization/__init__.py   PyTorch autograd Function + public API.
  rasterize_points.cu / .h                 C++ entry point, pybind registration.
  ext.cpp                                  Pybind module.
  cuda_rasterizer/
    rasterizer.h                 Class interface (forward / backward / markVisible).
    rasterizer_impl.cu / .h      Pipeline orchestration, memory layout structs.
    forward.cu / .h              preprocessCUDA, renderCUDA kernels.
    backward.cu / .h             Gradient kernels.
    auxiliary.h                  Inline helpers (transforms, getRect, SH constants).
    config.h                     Compile-time tile size (BLOCK_X=16, BLOCK_Y=16).
    math.h / helper_math.h       Float3/float4 arithmetic operators.

gui/
  slam_gui.py                    Visualisation process (optional).
  gui_utils.py                   GaussianPacket, ParamsGUI data containers.
  gl_render/                     OpenGL real-time Gaussian renderer for the GUI.
```

---

## 2. Process Architecture

`slam.py : SLAM.__init__` spawns three OS processes using `torch.multiprocessing`:

| Process | Class / target | Role |
|---------|---------------|------|
| Main | `FrontEnd.run()` (called directly, not spawned) | Tracking, keyframe decisions |
| BackEnd | `BackEnd.run()` | Mapping, densification, pruning |
| GUI (optional) | `slam_gui.run()` | Visualisation only |

```
Main process                   BackEnd process
FrontEnd.run()                 BackEnd.run()
    │                              │
    │──backend_queue──────────────►│   (init / keyframe / map / pause / stop)
    │◄─────────────frontend_queue──│   (sync_backend / keyframe / init / stop)
    │
    │──q_main2vis────────────────► GUI process (one-way Gaussian snapshots)
    │◄──q_vis2main─────────────── GUI process (pause/unpause toggle)
```

**Key point:** `frontend_queue` and `backend_queue` are `mp.Queue` instances created
in `SLAM.__init__` (`slam.py:63-64`) and handed to both processes by reference.
When `use_gui=False` both visual queues are replaced by `FakeQueue`
(`multiprocessing_utils.py:7`) which silently discards all puts and always reports
empty.

The main process (FrontEnd) runs the inner loop synchronously. The BackEnd runs
asynchronously, continuously calling `BackEnd.map()` whenever the queue is idle.

---

## 3. Gaussian Map — the Central State

**File:** `gaussian_splatting/scene/gaussian_model.py`  
**Class:** `GaussianModel`

### Stored tensors (all CUDA `nn.Parameter` unless noted)

| Attribute | Shape | Activation on read | Meaning |
|-----------|-------|--------------------|---------|
| `_xyz` | `[N, 3]` | none (`get_xyz`) | 3-D Gaussian centres |
| `_features_dc` | `[N, 1, 3]` | none | DC spherical-harmonic coefficient |
| `_features_rest` | `[N, (max_sh+1)²-1, 3]` | none | Higher SH bands |
| `_scaling` | `[N, 3]` or `[N, 1]` | `torch.exp` | Log-scale (anisotropic or isotropic) |
| `_rotation` | `[N, 4]` | `F.normalize` | Unit quaternion |
| `_opacity` | `[N, 1]` | `torch.sigmoid` | Pre-sigmoid logit |

Raw parameters are stored in log/logit/unnormalised form so that the Adam optimizer
operates in an unconstrained space.

### SLAM-specific bookkeeping (CPU tensors, not optimised)

| Attribute | Type | Meaning |
|-----------|------|---------|
| `unique_kfIDs` | `int32 [N]` | Frame index of the keyframe that created each Gaussian |
| `n_obs` | `int32 [N]` | Observation count accumulator (used by SLAM pruning) |
| `max_radii2D` | `float32 [N]` | Largest screen-space radius seen (used by densify_and_prune) |
| `xyz_gradient_accum` | `float32 [N,1]` | Accumulated 2-D gradient norms for densification |
| `denom` | `float32 [N,1]` | Count of visibility events (normalises gradient accum) |

### Gaussian insertion

`extend_from_pcd_seq(cam_info, kf_id, init, scale, depthmap)`  
→ calls `create_pcd_from_image()`  
→ calls `create_pcd_from_image_and_depth()`  
→ calls `extend_from_pcd(points, features, scales, rots, opacities, kf_id)`

`create_pcd_from_image_and_depth` uses **Open3D** to unproject the RGB-D frame into
a point cloud, then random-downsamples it by `pcd_downsample` (config). Each point
becomes one new Gaussian initialised with:
- scale = `log(sqrt(kNN_dist)) * point_size`  (neighbour distance via `distCUDA2`)
- opacity = `sigmoid⁻¹(0.5)` (neutral start)
- rotation = identity quaternion
- colour converted from RGB to DC SH coefficient via `RGB2SH`

`extend_from_pcd` calls `densification_postfix`, which uses `cat_tensors_to_optimizer`
to concatenate the new parameters onto every Adam state buffer **without breaking
the optimizer state** — this is the pattern that allows the map to grow online
without reinitialising optimisation momentum.

### Gaussian pruning

`prune_points(mask)` calls `_prune_optimizer(~mask)` which slices every Adam
parameter and its `exp_avg` / `exp_avg_sq` state tensors in place, then rebuilds
`nn.Parameter` wrappers. `unique_kfIDs` and `n_obs` are sliced on CPU separately.

### Densification (from original 3DGS)

`densify_and_prune(max_grad, min_opacity, extent, max_screen_size)`:
1. Normalise `xyz_gradient_accum / denom`.
2. **Clone** small high-gradient Gaussians (`densify_and_clone`).
3. **Split** large high-gradient Gaussians into N=2 children (`densify_and_split`).
4. Prune by opacity, by screen-space radius (`max_radii2D`), and by world-space scale.

---

## 4. Camera Representation and Pose Parameterisation

**File:** `utils/camera_utils.py`  
**Class:** `Camera(nn.Module)`

Each frame (keyframe or not) is a `Camera` object. It stores:

| Attribute | Type | Meaning |
|-----------|------|---------|
| `R` | `[3,3]` tensor | Current rotation (world-to-camera) |
| `T` | `[3]` tensor | Current translation (world-to-camera) |
| `R_gt`, `T_gt` | tensors | Ground-truth pose (used only for init and eval) |
| `cam_rot_delta` | `nn.Parameter [3]` | Lie-algebra rotation increment |
| `cam_trans_delta` | `nn.Parameter [3]` | Lie-algebra translation increment |
| `exposure_a`, `exposure_b` | `nn.Parameter [1]` | Affine exposure correction scalars |
| `grad_mask` | `[1,H,W]` bool | Per-pixel tracking weight (edge mask) |

**Pose update protocol** — `utils/pose_utils.py : update_pose(camera)`

The optimizer never optimises `R` and `T` directly. Instead it optimises `cam_rot_delta`
and `cam_trans_delta` (initialised to zero each step). After each gradient step:

```python
tau = cat([cam_trans_delta, cam_rot_delta])   # se(3) tangent vector
T_w2c = block_matrix(R, T)
new_w2c = SE3_exp(tau) @ T_w2c               # left-multiplication in SE(3)
```

`SE3_exp` implements the closed-form exponential map on SE(3):
- `SO3_exp(theta)` → Rodrigues formula (first-order when `|theta| < 1e-5`)
- `V(theta) @ rho` → translational part accounting for rotation coupling

After updating `R`, `T`, both deltas are zeroed. Convergence is declared when
`tau.norm() < 1e-4`.

**Gradient mask** — `Camera.compute_grad_mask(config)`

Computed once on frame load using Scharr-filter image gradients. Pixels in flat
(low-gradient) image regions are excluded from the tracking loss. This focuses
tracking on textured areas that carry pose information. For the Replica dataset a
block-wise adaptive threshold is used; for all others a global median threshold
is applied.

**Exposure correction** — `slam_utils.py : get_loss_tracking / get_loss_mapping`

```python
image_ab = exp(exposure_a) * image + exposure_b
```

`exposure_a` and `exposure_b` are optimised jointly with pose during tracking and
jointly with keyframe poses during mapping. This handles overall brightness shifts
between frames without affecting Gaussian parameters.

---

## 5. Frontend — Tracking and Keyframe Selection

**File:** `utils/slam_frontend.py`  
**Class:** `FrontEnd(mp.Process)`

### Main loop — `FrontEnd.run()`

```
while True:
    handle GUI pause/unpause signals
    if frontend_queue not empty:
        handle sync_backend / keyframe / init / stop
        continue
    load next frame as Camera object
    if reset flag: call initialize()
    call tracking()
    decide if this frame is a keyframe
    if keyframe:
        update current_window via add_to_window()
        call add_new_keyframe() to compute depth map
        send "keyframe" message to BackEnd
    else:
        call cleanup() (free image buffers)
    advance frame index
```

### Tracking — `FrontEnd.tracking(cur_frame_idx, viewpoint)`

```python
pose_optimizer = Adam([cam_rot_delta, cam_trans_delta, exposure_a, exposure_b])
for i in range(tracking_itr_num):       # default ~60-200 per config
    render_pkg = render(viewpoint, gaussians, ...)
    loss = get_loss_tracking(config, image, depth, opacity, viewpoint)
    loss.backward()
    pose_optimizer.step()
    converged = update_pose(viewpoint)  # applies SE3_exp, zeroes deltas
    if converged: break
```

The render call uses the **frozen** `self.gaussians` (no gradient flows into
Gaussian parameters here — they have no optimizer attached during tracking).
Only `cam_rot_delta` and `cam_trans_delta` are in the optimizer.

`median_depth` is saved after tracking for use in keyframe distance checks.

### Keyframe decision — `FrontEnd.is_keyframe()`

Two criteria, either suffices:

1. **Distance criterion:** relative camera displacement > `kf_translation * median_depth`
2. **Overlap criterion (IoU):** Gaussian visibility overlap with last keyframe < `kf_overlap`

Visibility is `render_pkg["n_touched"] > 0` — a boolean tensor over all Gaussians
indicating which ones contributed to any pixel in this frame. This comes directly
from the rasterizer's `n_touched` output (see §10).

### Window management — `FrontEnd.add_to_window()`

Maintains `current_window` as an ordered list of keyframe indices (most recent
first). When a new keyframe is added:

1. Prepend new frame.
2. Remove the keyframe with lowest overlap to the current frame (overlap measured
   with Szymkiewicz–Simpson coefficient, not IoU) — but only from position index 2
   onwards (`N_dont_touch = 2` protects the two most recent keyframes).
3. If window is still over `window_size`, remove the keyframe whose
   `k * sum(1/dist_to_neighbours)` score is highest — the one that is both
   far from the current frame and densely redundant with its neighbours.

### Gaussian insertion depth initialisation — `FrontEnd.add_new_keyframe()`

**RGB-D mode:** Uses sensor depth directly (from `viewpoint.depth`).

**Monocular mode (first keyframe):** `depth = 2.0 + randn * 0.3` (uniform ~2 m
with noise). The scene scale is unknown; 2 m is a reasonable indoor prior.

**Monocular mode (subsequent keyframes):** Uses the rendered depth from the last
tracking call. Pixels whose depth is more than one std-dev from the median are
replaced by the median (outlier masking), then Gaussian noise is added:
`std * 0.2` for valid pixels, `std * 0.5` for masked outliers. This is passed to
BackEnd as the `depthmap` argument, which uses it to unproject new Gaussians.

---

## 6. Backend — Mapping, Densification, and Pruning

**File:** `utils/slam_backend.py`  
**Class:** `BackEnd(mp.Process)`

### Main loop — `BackEnd.run()`

```
while True:
    if backend_queue empty and not paused:
        map(current_window)                  # continuous re-optimisation
        if last_sent >= 10:
            map(current_window, prune=True, iters=10)
            push_to_frontend()               # send updated Gaussians back
    else:
        dispatch on message type:
            "init"     → reset(), add_next_kf(), initialize_map(), push_to_frontend("init")
            "keyframe" → add_next_kf(), map(iters=iter_per_kf), map(prune=True), push_to_frontend("keyframe")
            "pause"/"unpause" → toggle self.pause
            "color_refinement" → color_refinement(), push_to_frontend()
            "stop" → break
```

### Mapping — `BackEnd.map(current_window, prune=False, iters=1)`

For each iteration:

1. **Render all keyframes in `current_window`** and accumulate `loss_mapping`.
2. **Render 2 random historical keyframes** (not in `current_window`) and add to
   `loss_mapping`. This is the anti-forgetting mechanism.
3. **Isotropic regularisation** (the main MonoGS contribution):
   ```python
   scaling = gaussians.get_scaling          # [N, 3], always positive
   isotropic_loss = torch.abs(scaling - scaling.mean(dim=1, keepdim=True))
   loss_mapping += 10 * isotropic_loss.mean()
   ```
   This penalises differences between the three scale components of each Gaussian,
   pushing them toward spheres. The weight `10` is hardcoded.
4. `loss_mapping.backward()`.
5. Update `occ_aware_visibility` from `n_touched` outputs.
6. If `prune=True`: execute SLAM pruning (see below) and **return without**
   calling the optimizer — pruning is a separate pass.
7. If not pruning: accumulate `max_radii2D` and `xyz_gradient_accum`, optionally
   call `densify_and_prune`, optionally call `reset_opacity_nonvisible`.
8. Step `gaussians.optimizer` and `keyframe_optimizers`.
9. Update `cam_rot_delta`/`cam_trans_delta` for keyframes in `pose_window` via
   `update_pose()`.

### SLAM Pruning — inside `BackEnd.map(prune=True)`

Two modes controlled by config `prune_mode`:

**`"slam"` mode (default for monocular):**
- Accumulate observation counts: `gaussians.n_obs += occ_aware_visibility[kf_idx]`
  for every window keyframe.
- Only prune Gaussians whose `unique_kfIDs >= sorted_window[2]` (i.e. created by
  recent keyframes — older Gaussians are left alone).
- Prune if `n_obs <= 3` (seen by fewer than 3 of the current window keyframes).

**`"odometry"` mode:** Prune any Gaussian seen by fewer than 3 keyframes globally
(not restricted to recent ones).

### Keyframe pose optimisation — inside `BackEnd.run()` on "keyframe" message

A separate `keyframe_optimizers = Adam(opt_params)` is built for the current window.
Only the first `frames_to_optimize = config["Training"]["pose_window"]` frames have
their rotation and translation deltas added. All frames have exposure parameters
added. During mapping, after the Gaussian optimizer steps, `keyframe_optimizers.step()`
is called, then `update_pose()` is applied to the first `frames_to_optimize` cameras.

Mapping learning rates for keyframe poses are halved relative to tracking:
```python
lr_rot = config["Training"]["lr"]["cam_rot_delta"] * 0.5
lr_trans = config["Training"]["lr"]["cam_trans_delta"] * 0.5
```

### Initialisation — `BackEnd.initialize_map(cur_frame_idx, viewpoint)`

Runs `init_itr_num` iterations of mapping on the first frame only.
Every `init_gaussian_update` iterations calls `densify_and_prune`.
At iteration `init_gaussian_reset` calls `reset_opacity()` (sets all opacities
to 0.01 sigmoid, effectively restarting opacity learning from scratch).

### Color refinement — `BackEnd.color_refinement()`

26 000 iterations of pure RGB L1+SSIM loss on all stored viewpoints, sampling
one random viewpoint per iteration. No depth, no isotropic loss, no pruning, no
pose optimisation. This is the optional post-SLAM polish pass triggered by the
main process before final evaluation.

---

## 7. Inter-Process Communication Protocol

All messages are Python lists with a string tag as the first element.

### FrontEnd → BackEnd (`backend_queue`)

| Tag | Payload | When sent |
|-----|---------|-----------|
| `"init"` | `[tag, frame_idx, viewpoint, depth_map]` | First frame |
| `"keyframe"` | `[tag, frame_idx, viewpoint, current_window, depth_map]` | On keyframe decision |
| `"map"` | `[tag, frame_idx, viewpoint]` | (unused in current code) |
| `"pause"` | `["pause"]` | GUI pause signal |
| `"unpause"` | `["unpause"]` | GUI resume signal |
| `"color_refinement"` | `["color_refinement"]` | Post-SLAM polish |
| `"stop"` | `["stop"]` | Shutdown |

### BackEnd → FrontEnd (`frontend_queue`)

| Tag | Payload | When sent |
|-----|---------|-----------|
| `"init"` | `[tag, gaussians_clone, occ_aware_visibility, keyframes]` | After init_map |
| `"keyframe"` | same as above | After keyframe mapping |
| `"sync_backend"` | same as above | Periodic (every 10 idle map iterations) |
| `"stop"` | `["stop"]` | (unused) |

`keyframes` is a list of `(kf_idx, R.clone(), T.clone())` tuples — the updated
poses for all frames in `current_window`.

`gaussians_clone` is produced by `clone_obj(self.gaussians)` which deep-copies
the entire `GaussianModel` and detaches all tensors. This is a full copy of the
map sent across the process boundary.

`FrontEnd.sync_backend(data)` applies the received poses back to the camera
objects stored in `self.cameras` via `update_RT()`.

---

## 8. Loss Functions

**File:** `utils/slam_utils.py`

### Tracking loss

**RGB (monocular):** `get_loss_tracking_rgb`
```
L = mean(opacity * |image_ab - gt| * rgb_mask * grad_mask)
```
- `image_ab = exp(exposure_a) * render + exposure_b`
- `rgb_mask` excludes black/invalid pixels (sum of channels < threshold)
- `grad_mask` is the precomputed edge mask
- Multiplying by rendered `opacity` down-weights contributions from pixels where
  the Gaussian coverage is thin (uncertain geometry)

**RGB-D:** `get_loss_tracking_rgbd`
```
L = alpha * L_rgb + (1 - alpha) * mean(|depth - gt_depth| * depth_mask * opacity_mask)
```
- `depth_mask` excludes zero/invalid depth sensor readings
- `opacity_mask` keeps only pixels where rendered opacity > 0.95 (confident surfaces)
- Default `alpha = 0.95`

### Mapping loss

**RGB (monocular):** `get_loss_mapping_rgb`
```
L = mean(|image_ab - gt| * rgb_mask)
```
No opacity weighting, no gradient mask — the full image is supervised.

**RGB-D:** `get_loss_mapping_rgbd`
```
L = alpha * L_rgb + (1 - alpha) * mean(|depth - gt_depth| * depth_mask)
```

**Isotropic regularisation** (added in `BackEnd.map`):
```
L_iso = 10 * mean(|s_i - mean(s)| for s in scaling)   # per-Gaussian, per-axis
```

### Depth-edge regularisation — `depth_reg(depth, gt_image)`

Not used in the main SLAM loop but defined in `slam_utils.py`. Applies
edge-aware smoothness via Scharr-filter gradients weighted by
`exp(-10 * gray_grad²)` — penalises depth discontinuities in flat-colour regions.

---

## 9. Differentiable Rasterizer — Python Layer

### Entry point

**File:** `gaussian_splatting/gaussian_renderer/__init__.py`  
**Function:** `render(viewpoint_camera, pc, pipe, bg_color, ...)`

This is the single function called by both FrontEnd (tracking) and BackEnd
(mapping). It:

1. Creates `screenspace_points` — a zero tensor of shape `[N, 3]` with
   `requires_grad=True`. This is how PyTorch captures screen-space gradients.
2. Constructs `GaussianRasterizationSettings` (a NamedTuple).
3. Calls `GaussianRasterizer.forward()` which delegates to `_RasterizeGaussians.apply()`.
4. Returns a dict:
   - `"render"` — RGB image `[3, H, W]`
   - `"depth"` — depth map `[1, H, W]` (alpha-composited z values)
   - `"opacity"` — accumulated alpha `[1, H, W]`
   - `"n_touched"` — per-Gaussian touch count `[N]` (used for visibility)
   - `"visibility_filter"` — `radii > 0` boolean mask `[N]`
   - `"viewspace_points"` — the screenspace_points tensor (carries 2D gradients)
   - `"radii"` — screen-space radii `[N]`

**Critical MonoGS addition:** `theta` and `rho` (`cam_rot_delta` and
`cam_trans_delta`) are passed into the rasterizer. The CUDA backward pass
computes `dL/d_tau` (gradient w.r.t. the se(3) tangent vector) analytically
inside the CUDA kernel, bypassing PyTorch autograd for the pose Jacobians.

### PyTorch Autograd bridge

**File:** `submodules/diff-gaussian-rasterization/diff_gaussian_rasterization/__init__.py`  
**Class:** `_RasterizeGaussians(torch.autograd.Function)`

`forward()` calls `_C.rasterize_gaussians(...)` and saves buffers for backward.

`backward()` calls `_C.rasterize_gaussians_backward(...)` and extracts:
```python
grad_tau = torch.sum(grad_tau.view(-1, 6), dim=0)
grad_rho   = grad_tau[:3].view(1, -1)   # → cam_trans_delta.grad
grad_theta = grad_tau[3:].view(1, -1)   # → cam_rot_delta.grad
```
The rasterizer accumulates per-Gaussian `dL/d_tau` vectors (one 6-vector per
Gaussian), and the backward sums them to get a single pose gradient.

---

## 10. Differentiable Rasterizer — CUDA Layer

### File map

| File | Responsibility |
|------|---------------|
| `rasterize_points.cu / .h` | C++ entry functions called from Python via pybind |
| `ext.cpp` | `PYBIND11_MODULE` registration |
| `cuda_rasterizer/rasterizer.h` | `CudaRasterizer::Rasterizer` interface |
| `cuda_rasterizer/rasterizer_impl.cu` | Pipeline orchestration |
| `cuda_rasterizer/rasterizer_impl.h` | Memory layout: `GeometryState`, `ImageState`, `BinningState` |
| `cuda_rasterizer/forward.cu` | `preprocessCUDA`, `renderCUDA` kernels |
| `cuda_rasterizer/backward.cu` | Gradient kernels |
| `cuda_rasterizer/auxiliary.h` | Inline helpers (`transformPoint4x4`, `getRect`, SH constants) |
| `cuda_rasterizer/config.h` | `BLOCK_X=16`, `BLOCK_Y=16`, `NUM_CHANNELS=3` |

### Memory allocation strategy

Instead of many small `cudaMalloc` calls, the rasterizer allocates three large
opaque byte buffers via callbacks:

```cpp
geometryBuffer(size)   // GeometryState: per-Gaussian data
imageBuffer(size)      // ImageState: per-pixel data
binningBuffer(size)    // BinningState: sorting workspace
```

`GeometryState::fromChunk(char*&, P)` uses the `obtain()` helper to carve aligned
sub-arrays out of a single pointer and advance it. This gives predictable memory
layout with 128-byte alignment.

### Forward pass — `Rasterizer::forward()` in `rasterizer_impl.cu`

**Step 1 — Preprocess** (`preprocessCUDA`, one thread per Gaussian):
- Frustum-cull with `in_frustum()`.
- Project mean: `transformPoint4x4` → NDC → pixel coords.
- Compute 3-D covariance from scale+rotation: `computeCov3D` (Σ = Sᵀ Rᵀ R S).
- Project 2-D covariance: `computeCov2D` — implements the EWA splatting Jacobian
  `Σ₂D = J W Σ₃D Wᵀ Jᵀ` with a low-pass filter (+0.3 to diagonal).
- Compute conic (inverse 2-D covariance) for the render kernel.
- Evaluate SH → RGB via `computeColorFromSH` (up to degree 3).
- Compute bounding tile rectangle via eigenvalue decomposition of Σ₂D (3σ radius).
- Store `tiles_touched` count.

**Step 2 — Prefix scan** (`cub::DeviceScan::InclusiveSum`):  
Converts `tiles_touched[i]` to `point_offsets[i]` (cumulative sum).

**Step 3 — Duplicate** (`duplicateWithKeys`):  
For each Gaussian overlapping K tiles, emit K `(tile_id << 32 | depth)` keys and
corresponding Gaussian indices. Depth is bit-cast to uint32 for sort key packing.

**Step 4 — Radix sort** (`cub::DeviceRadixSort::SortPairs`):  
Sorts all (key, index) pairs. Result: Gaussians grouped by tile, depth-sorted
within each tile (front to back from the camera's perspective).

**Step 5 — Identify tile ranges** (`identifyTileRanges`):  
Scans sorted keys to record `[start, end)` offsets in `imgState.ranges` for each
tile.

**Step 6 — Render** (`renderCUDA`, one CUDA block per tile):  
Each block (16×16 threads) iterates through its Gaussians in BLOCK_SIZE=256 batches
using shared memory:
```
for each batch:
    cooperatively load (id, xy, conic_opacity, depth) into shared memory
    for each Gaussian in batch (inner loop, per pixel):
        evaluate Gaussian at pixel: power = -0.5 * (conic quadratic form)
        alpha = sigmoid(opacity) * exp(power)
        C[ch] += feature[ch] * alpha * T          (alpha compositing)
        D     += depth * alpha * T                 (depth accumulation)
        if T > 0.5: atomicAdd(&n_touched[id], 1)  (visibility counter)
        T *= (1 - alpha)
        if T < 0.0001: done = true                 (early ray termination)
```

`n_touched[id]` is incremented only when transmittance is still > 0.5 — this
threshold defines "meaningfully visible" for the keyframe selection and pruning
logic in Python.

`out_opacity[pix] = 1 - T` is the final accumulated alpha, stored separately from
colour.

### Backward pass — `Rasterizer::backward()` in `rasterizer_impl.cu`

Calls:
1. `BACKWARD::render()` — reverses the tile-render loop (processes Gaussians
   back-to-front using stored `n_contrib` and `accum_alpha`). Produces gradients
   w.r.t. 2-D means, conic, opacity, colour, and depth.
2. `BACKWARD::preprocess()` — propagates gradients from 2-D means and conic back
   through the projection, covariance, SH, and Gaussian centre computations.

**Pose gradient (`dL/d_tau`)** is computed in `BACKWARD::preprocess()` by
differentiating the projection of the Gaussian centre through the full camera
model w.r.t. the se(3) perturbation `tau = [rho, theta]`. This is the "analytic
Jacobian" the paper describes — it avoids building a PyTorch graph through the
rotation matrix computation.

---

## 11. Implementation Details Not Described in the Paper

### 1. Exposure correction model

Every `Camera` carries `exposure_a` and `exposure_b` (scalar `nn.Parameter`).
The rendered image is corrected as `exp(a) * render + b` before computing any
loss. Both are optimised during tracking and mapping. The paper does not mention
this.

### 2. Edge-based tracking mask

`Camera.compute_grad_mask()` computes a Scharr-filter gradient magnitude image
and zeroes out the tracking loss on low-gradient pixels. This focuses pose
estimation on textured edges where the pixel-level loss carries reliable gradient
direction. The Replica dataset uses a block-wise adaptive threshold.

### 3. Gradient masking in tracking vs. absence in mapping

Tracking applies `grad_mask * rgb_mask * opacity`. Mapping applies only
`rgb_mask`. The asymmetry is intentional: tracking needs robust high-confidence
signal; mapping can use the full image since Gaussian parameters are being updated.

### 4. Monocular reset logic

If the window fills up before initialization is complete (`not initialized and
removed is not None`), `FrontEnd` sets `self.reset = True`. On the next frame,
`initialize()` is called again, discarding all previous Gaussians and poses.
This handles the case where the initial window has insufficient overlap to
triangulate geometry.

### 5. The `N_dont_touch = 2` window protection

The two most recently added keyframes are never evicted from the active window
regardless of overlap. This ensures the newest observation is always represented
and avoids oscillation in map updates.

### 6. Szymkiewicz–Simpson coefficient for window eviction

When deciding which keyframe to evict, window eviction uses:
```
overlap = intersection / min(|A|, |B|)
```
not the Jaccard index (IoU). This is asymmetric and measures how much the smaller
set is covered by the larger — appropriate when new frames may see only a subset
of the established scene.

### 7. Keyframe pose learning rate halved in mapping

Keyframe poses in the BackEnd use half the learning rate of tracking poses. This
prevents map-level optimisation from aggressively correcting poses that tracking
already found, maintaining consistency.

### 8. Single-thread mode

`config["Training"]["single_thread"]` makes the BackEnd wait for a keyframe
message before running any map iterations. The FrontEnd also waits for each
keyframe acknowledgement before advancing. This deterministic mode is useful for
debugging and reproducibility.

### 9. Open3D for point cloud unprojection

Gaussian insertion uses Open3D's `RGBDImage.create_from_color_and_depth` and
`PointCloud.create_from_rgbd_image` for unprojection. This is an implementation
convenience, not an algorithmic choice — any depth unprojection would work.

### 10. Adam momentum reset on new Gaussians

`cat_tensors_to_optimizer` appends zero `exp_avg` and `exp_avg_sq` for new
Gaussians. They start with clean Adam state while existing Gaussians retain their
momentum — this prevents accumulated gradients from old parameters from
contaminating the learning of new ones.

### 11. `reset_opacity_nonvisible` instead of global reset

The BackEnd calls `reset_opacity_nonvisible(visibility_filter_acm)` every
`gaussian_reset` iterations instead of resetting all opacities. This preserves
the learned opacity of Gaussians that are currently visible, resetting only
Gaussians that the active window has not seen. This is more conservative than
the original 3DGS global reset.

### 12. FrontEnd throttle on keyframe creation

After creating a keyframe, the FrontEnd sleeps to achieve at most 3 FPS:
```python
time.sleep(max(0.01, 1.0/3.0 - duration/1000))
```
This prevents the BackEnd queue from being overwhelmed with keyframes before it
has time to map them.

### 13. `distCUDA2` for initial scale estimation

New Gaussian scales are initialised as `sqrt(kNN_distance)` using `distCUDA2`
from the `simple_knn` library. This gives spatially adaptive scales — Gaussians
in dense regions start smaller, sparsely observed regions start larger.

### 14. Adaptive point size

If `adaptive_pointsize` is enabled in config, point sizes are scaled by the
median depth of the current keyframe:
```python
point_size = min(0.05, point_size * np.median(depth))
```
This prevents Gaussians from being extremely large in far-field scenes.

---

## 12. Annotated Data-Flow Walkthrough

### Frame N is a new keyframe

```
FrontEnd.run()
│
├── Camera.init_from_dataset(dataset, N, proj_matrix)
│   └── loads RGB, depth, gt_pose; initialises cam_rot_delta=0, cam_trans_delta=0
│
├── Camera.compute_grad_mask(config)
│   └── Scharr gradients → grad_mask [1,H,W]
│
├── FrontEnd.tracking(N, viewpoint)
│   ├── copy pose from previous frame: viewpoint.update_RT(prev.R, prev.T)
│   ├── for each tracking iteration:
│   │   ├── render(viewpoint, gaussians, ...)          ← CUDA rasterizer
│   │   │   returns image, depth, opacity, n_touched
│   │   ├── get_loss_tracking(image, depth, opacity, viewpoint)
│   │   │   = exp(a)*image+b → L1 against gt, masked by grad_mask and opacity
│   │   ├── loss.backward()
│   │   │   → gradients flow to cam_rot_delta, cam_trans_delta, exposure_a/b
│   │   │   → Gaussian parameters have no optimizer: their .grad is ignored
│   │   ├── pose_optimizer.step()
│   │   └── update_pose(viewpoint)   ← SE3_exp(tau) @ T_w2c, zeros deltas
│   └── returns render_pkg (for n_touched visibility)
│
├── FrontEnd.is_keyframe(N, last_kf, curr_visibility, occ_aware_visibility)
│   ├── dist = ||T_current - T_last_kf||
│   ├── IoU of visibility boolean tensors
│   └── returns True if distance or overlap threshold exceeded
│
├── FrontEnd.add_to_window(N, curr_visibility, ...)
│   └── evicts old keyframe based on overlap / spatial diversity
│
├── FrontEnd.add_new_keyframe(N, depth=render_pkg["depth"], opacity=...)
│   └── monocular: median/std outlier filtering → noisy depth map
│   └── RGB-D: sensor depth, mask invalid pixels
│
└── backend_queue.put(["keyframe", N, viewpoint, current_window, depth_map])

BackEnd.run() receives "keyframe" message:
│
├── BackEnd.add_next_kf(N, viewpoint, depth_map=depth_map)
│   └── GaussianModel.extend_from_pcd_seq(viewpoint, kf_id=N, depthmap=depth_map)
│       ├── Open3D unproject RGB-D → point cloud → downsample
│       ├── distCUDA2 → kNN distances → initial scales
│       └── densification_postfix → cat_tensors_to_optimizer (live append to Adam state)
│
├── build keyframe_optimizers for current_window poses
│
├── BackEnd.map(current_window, iters=iter_per_kf)
│   ├── for each window keyframe: render → get_loss_mapping
│   ├── for 2 random historical keyframes: render → get_loss_mapping
│   ├── isotropic_loss = 10 * mean(|s - mean(s)|)
│   ├── total_loss.backward()
│   ├── gaussians.optimizer.step()      ← xyz, features, scale, rotation, opacity
│   ├── keyframe_optimizers.step()      ← cam_rot_delta, cam_trans_delta, exposure
│   ├── update_pose() for pose_window frames
│   └── densify_and_prune (every gaussian_update_every iterations)
│
├── BackEnd.map(current_window, prune=True)
│   ├── accumulate n_obs from occ_aware_visibility
│   └── prune recently-created Gaussians seen by < 3 keyframes
│
└── push_to_frontend("keyframe")
    └── frontend_queue.put([tag, clone_obj(gaussians), occ_aware_visibility, keyframe_poses])

FrontEnd receives "keyframe" from frontend_queue:
└── sync_backend(data)
    ├── self.gaussians = data[1]          ← replaces map reference
    ├── self.occ_aware_visibility = data[2]
    └── for each kf: camera.update_RT(R, T)   ← apply refined poses
```

---

## 13. Key Invariants for Developers

1. **Tracking never calls `gaussians.optimizer.step()`**. The Gaussian Adam
   optimizer is only stepped inside `BackEnd.map()`.

2. **Mapping never calls `pose_optimizer.step()` for the current frame**.
   The current frame's pose is only optimised in `FrontEnd.tracking()`.

3. **`n_touched` is the sole visibility signal**. Everything that depends on
   "is Gaussian G visible from keyframe K" — keyframe selection, window eviction,
   SLAM pruning — uses `(n_touched > 0).long()`. There is no separate ray-casting
   or culling step.

4. **The Gaussian map is a single `GaussianModel` instance**. It is created in
   `SLAM.__init__` and given to the BackEnd. The FrontEnd receives a deep copy
   after each BackEnd sync. There is no merging — the FrontEnd copy is read-only
   for tracking.

5. **Pruning slices Adam state in place**. `prune_points` deletes rows from
   `exp_avg` and `exp_avg_sq`. If you add a new tracked tensor to `GaussianModel`,
   you must also handle it in `_prune_optimizer`, `densification_postfix`,
   `densify_and_split`, `densify_and_clone`, and `cat_tensors_to_optimizer`.

6. **Gaussian insertion happens before mapping**. `add_next_kf` is always called
   before `map()` in the BackEnd keyframe handler. Inserting after optimisation
   would mean the new Gaussians were not influenced by the new keyframe's loss.

7. **The isotropic loss weight is hardcoded to 10**. It is not in any config file.
   Changing it requires editing `BackEnd.map()` directly.

8. **`unique_kfIDs` and `n_obs` live on CPU**. They are indexed with CPU boolean
   masks (`.cpu()`). When pruning, the mask is moved to CUDA for `prune_points`
   but the bookkeeping tensors are sliced on CPU.

9. **`theta` and `rho` passed to the rasterizer are camera delta parameters**.
   Their gradients are computed analytically in CUDA and summed across all Gaussians.
   PyTorch's autograd does not see through this path — the CUDA kernel owns the
   entire Jacobian chain from pixel loss to se(3) tangent vector.

10. **Color refinement disables all SLAM-specific losses**. It uses only L1+SSIM
    on RGB. Depth supervision, isotropic regularisation, and pose optimisation are
    all absent. It is a pure appearance-polishing step.
