# SplaTAM — Repository Architecture Map

_Reverse-engineered structural map of the SplaTAM codebase (dense RGB-D SLAM via 3D Gaussian Splatting). This is not a tutorial: it documents what each file is, what it exposes, who calls it, and how execution actually flows._

**Contents:** [1. Entry Points](#1-entry-points-scripts-viz_scripts) · [2. Core Algorithm Utilities](#2-core-algorithm-utilities-utils) · [3. Dataset Loading](#3-dataset-loading-datasetsgradslam_datasets) · [4. Differentiable Rasterizer](#4-differentiable-gaussian-rasterizer-diff-gaussian-rasterization-w-depth) · [5. Shell Launchers](#5-shell-launchers-bash_scripts) · [6. Configuration](#6-configuration-configs) · [7. Dependency Tree](#7-final-dependency-tree--execution-flow) · [8. Category Index / Orphans](#8-category-index--orphaned-files)

---

## 1. Entry Points (`scripts/`, `viz_scripts/`)

### `scripts/splatam.py`
**Purpose:** The primary SLAM entry point. Implements the full online RGB-D SLAM loop from the SplaTAM paper: per-frame camera **tracking** (pose-only optimization against a frozen Gaussian map), silhouette-guided **densification** (adding new Gaussians for newly-observed geometry), and keyframe-based **mapping** (joint/Gaussian-only optimization over a sliding window of keyframes). Loads a config module via `SourceFileLoader`, builds a dataset, initializes a Gaussian-splat scene from the first RGB-D frame, then iterates over all frames doing track→densify→map→checkpoint, finally saving `params.npz` and running trajectory/rendering evaluation.
**Classes:** None (purely functional module).
**Functions:**
- `get_dataset(config_dict, basedir, sequence, **kwargs)` — dataset-name-string dispatcher (duplicated in every top-level script).
- `get_pointcloud(color, depth, intrinsics, w2c, ...)` — back-projects an RGB-D frame into a colored 3D point cloud (world frame), optionally returning per-point mean-squared-distance used to size new Gaussians.
- `initialize_params(init_pt_cld, num_frames, mean3_sq_dist, gaussian_distribution)` — builds the initial Gaussian parameter dict (`means3D, rgb_colors, unnorm_rotations, logit_opacities, log_scales`) plus per-frame camera-pose parameters (`cam_unnorm_rots`, `cam_trans`) as `torch.nn.Parameter`s.
- `initialize_optimizer(params, lrs_dict, tracking)` — builds a per-parameter-group Adam optimizer; tracking uses configured LR, mapping starts at LR 0 (LR is set via per-group dict).
- `initialize_first_timestep(...)` — orchestrates camera setup + point-cloud + param init for frame 0 (supports a separate lower/higher-res "densification" dataloader).
- `get_loss(...)` — **entry point** used by both tracking and mapping. Transforms Gaussians into the current camera frame (`transform_to_frame`), renders RGB and depth+silhouette via the CUDA `Renderer`, computes masked L1 depth loss + (L1 or SSIM-blended) RGB loss, and accumulates `max_2D_radius` bookkeeping used later for densification.
- `initialize_new_params` / `add_new_gaussians(...)` — silhouette- and depth-error-based densification: renders the current map, finds "non-presence" pixels (silhouette below threshold or large positive depth error), back-projects those pixels into new Gaussians and appends them to `params`.
- `initialize_camera_pose(...)` — constant-velocity warm start for the next frame's pose.
- `convert_params_to_store(...)` — detaches/clones a params dict for checkpointing.
- `rgbd_slam(config: dict)` — **the top-level orchestration function**: dataset loading, checkpoint resume, the per-frame `for time_idx in range(...)` loop (tracking inner-loop → keyframe selection → mapping inner-loop → keyframe-list update → periodic checkpoint), final evaluation call, and `save_params`.
- `if __name__ == "__main__"` — **process entry point**: parses `experiment` config path arg, loads it with `SourceFileLoader`, seeds RNG, copies config into the run dir, calls `rgbd_slam(experiment.config)`.
**Called by:** invoked directly by the user (`python scripts/splatam.py <config.py>`); its functions (`get_loss`, `initialize_optimizer`, `initialize_params`, `initialize_camera_pose`, `get_pointcloud`, `add_new_gaussians`) are **imported and reused by** `scripts/iphone_demo.py` (online/streaming variant of the same algorithm).
**Depends on:** `datasets.gradslam_datasets` (dataset classes + `load_dataset_config`), `utils.common_utils` (`seed_everything`, `save_params_ckpt`, `save_params`), `utils.eval_helpers` (`report_loss`, `report_progress`, `eval`), `utils.keyframe_selection` (`keyframe_selection_overlap`), `utils.recon_helpers` (`setup_camera`), `utils.slam_helpers` (rendervar/transform math), `utils.slam_external` (`calc_ssim`, `build_rotation`, `prune_gaussians`, `densify`), `diff_gaussian_rasterization.GaussianRasterizer`; external: `torch`, `numpy`, `cv2`, `matplotlib`, `wandb`, `tqdm`.
**Category:** Tracking, Mapping, Gaussian management, Optimization (the central SLAM module — spans all four).

### `scripts/gaussian_splatting.py`
**Purpose:** A **baseline** offline 3D-Gaussian-Splatting trainer that uses **ground-truth poses** (no tracking) to fit a static Gaussian scene to a dataset, for comparison against SplaTAM's tracked reconstructions. Structurally a stripped-down clone of `splatam.py`'s Gaussian init/densify machinery, but routed through `utils/gs_helpers.py` and `utils/gs_external.py` instead of the `slam_*` modules, and using an exponential-decay LR schedule (`get_expon_lr_func`/`update_learning_rate`, matching the original 3DGS training recipe) instead of SLAM-style per-frame tracking.
**Classes:** None.
**Functions:** `get_dataset` (duplicate dispatcher), `get_pointcloud`, `initialize_params`, `initialize_optimizer`, `initialize_first_timestep`, `get_loss_gs` (RGB+depth loss only, no tracking/mapping branching), `initialize_new_params`, `add_new_gaussians`, `convert_params_to_store`, `offline_splatting(config)` (top-level: preloads **all** frames into memory up front, then for each incoming frame adds new Gaussians from GT pose and, only on the **last** frame, runs the full `num_iters_mapping` optimization over randomly sampled historical frames — i.e. it is "online" only in Gaussian-addition, not in optimization), `__main__` entry point (same `SourceFileLoader` config-loading pattern).
**Called by:** invoked directly by the user for the "3DGS with GT poses" baseline experiments referenced in the README/`configs/*/gaussian_splatting.py`.
**Depends on:** `datasets.gradslam_datasets`, `utils.common_utils`, `utils.recon_helpers`, `utils.gs_helpers` (`params2rendervar`, `params2depthplussilhouette`, `transformed_params2depthplussilhouette`, `transform_to_frame`, `report_progress`, `eval`, `l1_loss_v1`, `matrix_to_quaternion`), `utils.gs_external` (`calc_ssim`, `build_rotation`, `densify`, `get_expon_lr_func`, `update_learning_rate`), `diff_gaussian_rasterization`.
**Category:** Mapping, Gaussian management, Optimization, Training (baseline).

### `scripts/post_splatam_opt.py`
**Purpose:** A **post-processing** refinement stage: loads a checkpoint (`params.npz`) already produced by `scripts/splatam.py`, freezes the estimated camera trajectory, and runs additional full Gaussian-Splatting-style optimization (with gradient-based densification and LR scheduling) purely to improve rendering quality — i.e. "run 3DGS on top of SplaTAM's poses." Mirrors `gaussian_splatting.py`'s training loop almost exactly, but initializes Gaussians/poses **from the SplaTAM checkpoint** (`initialize_first_timestep_from_ckpt`) instead of from scratch with GT poses.
**Classes:** None.
**Functions:** `get_dataset` (duplicate dispatcher), `initialize_optimizer`, `initialize_first_timestep_from_ckpt(ckpt_path, dataset, num_frames, lrs_dict, mean_sq_dist_method)` (loads `params.npz`, strips housekeeping keys, rewraps as `nn.Parameter`s), `get_loss_gs`, `convert_params_to_store`, `rgbd_slam(config)` (top-level; despite the name, this is the post-hoc GS refinement loop, not SLAM tracking — poses come from the checkpoint's `cam_unnorm_rots`/`cam_trans`, rebuilt via `build_rotation`), `__main__` entry point.
**Called by:** invoked directly by the user, after `scripts/splatam.py` has produced a checkpoint (`configs/*/post_splatam_opt.py` supplies `data.param_ckpt_path`).
**Depends on:** same as `gaussian_splatting.py` (`utils.gs_helpers`, `utils.gs_external`, `utils.recon_helpers`, `utils.common_utils`, `datasets.gradslam_datasets`, `diff_gaussian_rasterization`).
**Category:** Mapping, Gaussian management, Optimization, Training (post-hoc refinement).

### `scripts/eval_novel_view.py`
**Purpose:** Loads a saved SplaTAM/GS scene (`params.npz`) and a dataset split, and runs evaluation only — either on the training split (`eval`) or a held-out novel-view split (`eval_nvs`) — logging PSNR/SSIM/LPIPS-style rendering metrics (and optionally trajectory error) to disk/W&B. No optimization occurs here; it is a pure measurement entry point.
**Classes:** None.
**Functions:** `get_dataset` (duplicate dispatcher), `load_scene_data(scene_path)` (loads `params.npz` into CUDA tensors requiring grad — grad is unused here but kept for API compatibility with training code), `__main__` entry point: builds dataset, loads params, dispatches to `eval` or `eval_nvs` from `utils.eval_helpers` depending on `dataset_config['use_train_split']`.
**Called by:** invoked directly by the user (`configs/scannetpp/eval_novel_view.py`, `configs/replica_v2/eval_novel_view.py`).
**Depends on:** `datasets.gradslam_datasets`, `utils.common_utils` (`seed_everything`), `utils.eval_helpers` (`eval`, `eval_nvs`).
**Category:** Rendering, Evaluation (novel-view synthesis quality).

### `scripts/export_ply.py`
**Purpose:** Converts a saved SplaTAM `params.npz` scene into a standard `.ply` Gaussian-Splat file (compatible with viewers like SuperSplat/PolyCam), by converting stored RGB colors into 0-degree spherical-harmonic DC coefficients and writing the PLY `vertex` element with position/normal/SH/opacity/scale/rotation attributes.
**Classes:** None.
**Functions:** `rgb_to_spherical_harmonic`/`spherical_harmonic_to_rgb` (SH↔RGB conversion using the `C0` SH basis constant), `save_ply(path, means, scales, rotations, rgbs, opacities, normals=None)` (writes the PLY via `plyfile`), `__main__` entry point (loads config → loads `params.npz` → calls `save_ply`).
**Called by:** invoked directly by the user as a standalone export utility, downstream of `scripts/splatam.py`.
**Depends on:** `plyfile` (external), `numpy`. No internal repo dependencies beyond config loading.
**Category:** Gaussian management / export utility (not tracking/mapping/rendering per se — a format-conversion tool).

### `scripts/nerfcapture2dataset.py`
**Purpose:** A capture-only utility (no SLAM) that listens on a **CycloneDDS** topic for frames streamed from the NeRFCapture iOS app and writes them to disk as an NGP-style dataset (`rgb/*.png`, `depth/*.png`, `transforms.json` manifest) for later **offline** SplaTAM runs. Distinct from `iphone_demo.py`, which does SLAM live instead of just saving frames.
**Classes:** `SplatCaptureFrame(idl.IdlStruct)` — CycloneDDS IDL struct describing one streamed capture frame (pose, intrinsics, RGB bytes, optional depth bytes).
**Functions:** `parse_args`, `dataset_capture_loop(reader, save_path, overwrite, n_frames, depth_scale)` (blocking DDS read loop; on each sample writes RGB/depth PNGs and appends manifest entries; exits after `n_frames`), `__main__` entry point (sets up `Domain`/`DomainParticipant`/`Topic`/`DataReader`, then calls `dataset_capture_loop`).
**Called by:** invoked directly by the user (`bash_scripts/nerfcapture2dataset.bash configs/iphone/dataset.py`); the dataset it writes is later consumed by `datasets/gradslam_datasets/nerfcapture.py` via `scripts/splatam.py`.
**Depends on:** `cyclonedds` (external DDS library), `cv2`, `numpy`; loads a config module for `workdir`/`overwrite`/`num_frames`/`depth_scale`.
**Category:** Dataset loading / capture utility (data acquisition, not SLAM itself).

### `scripts/iphone_demo.py`
**Purpose:** The **online/live demo** entry point — combines `nerfcapture2dataset.py`'s DDS frame-streaming with `splatam.py`'s tracking+mapping+densification algorithm, so that SLAM runs incrementally *as frames arrive* from the NeRFCapture app rather than from a pre-saved dataset. It re-implements the per-frame loop from `rgbd_slam` inline inside the DDS callback loop, converting ARKit poses into the GradSLAM convention via a fixed coordinate-flip matrix `P` and `relative_transformation`.
**Classes:** `SplatCaptureFrame(idl.IdlStruct)` — same DDS struct as in `nerfcapture2dataset.py` (duplicated).
**Functions:** `parse_args`, `dataset_capture_loop(reader, save_path, overwrite, n_frames, depth_scale, config)` — the fused capture+SLAM loop: on frame 0 initializes cameras/Gaussians (via imported `get_pointcloud`/`initialize_params` from `scripts.splatam`), then for every frame does ARKit-pose conversion → tracking (`get_loss`, `initialize_optimizer`, `initialize_camera_pose`) → periodic densification (`add_new_gaussians`) → keyframe-window mapping (`keyframe_selection_overlap`, `get_loss`, `prune_gaussians`, `densify`) → checkpointing, and finally writes ARKit `transforms.json` and `save_params`; `__main__` entry point (DDS setup, seeding, then `dataset_capture_loop`).
**Called by:** invoked directly by the user (`bash_scripts/online_demo.bash configs/iphone/online_demo.py`); this is the only script that **imports functions from `scripts/splatam.py`** (`get_loss, initialize_optimizer, initialize_params, initialize_camera_pose, get_pointcloud, add_new_gaussians`), making `splatam.py` a dependency of this file, not just a sibling entry point.
**Depends on:** `scripts.splatam` (algorithm functions), `datasets.gradslam_datasets.geometryutils.relative_transformation`, `utils.common_utils`, `utils.eval_helpers.report_progress`, `utils.keyframe_selection`, `utils.recon_helpers`, `utils.slam_external`, `utils.slam_helpers`, `diff_gaussian_rasterization`, `cyclonedds`.
**Category:** Tracking, Mapping, Gaussian management (online/live variant of the core SLAM loop).

### `viz_scripts/final_recon.py`
**Purpose:** Interactive **Open3D** point-cloud visualizer for a *completed* SplaTAM reconstruction: loads the final `params.npz`, renders the whole static scene (optionally with camera-frustum trajectory overlay) through the same CUDA Gaussian rasterizer used in training, converts the rendered RGB-D into an Open3D point cloud, and lets the user freely orbit/zoom while the point cloud re-renders from the new viewpoint every frame (essentially a Gaussian-splat "photo viewer").
**Classes:** None.
**Functions:** `load_camera(cfg, scene_path)` (reads stored intrinsics/extrinsics, rescales intrinsics to viz resolution), `load_scene_data(scene_path, first_frame_w2c, intrinsics)` (builds static `rendervar`/`depth_rendervar` dicts and the list of all per-frame estimated `w2c`s), `make_lineset(...)` (builds the camera-trajectory `o3d.geometry.LineSet`), `render(w2c, k, timestep_data, timestep_depth_data, cfg)` (calls `setup_camera` + `Renderer` twice — once against a white background for RGB, once for depth+silhouette), `rgbd2pcd(...)` (back-projects a rendered RGB-D image into a colored/depth-colormapped Open3D point cloud), `visualize(scene_path, cfg)` (**main loop**: creates the Open3D window, adds the point cloud + optional camera frustums/trajectory, then loops `vis.poll_events()`/re-render on every viewpoint change), `__main__` entry point (loads config, resolves `scene_path`, calls `visualize`).
**Called by:** invoked directly by the user (`python viz_scripts/final_recon.py <config.py>`), after `scripts/splatam.py` has produced `params.npz`.
**Depends on:** `diff_gaussian_rasterization` (`GaussianRasterizer`, `GaussianRasterizationSettings`), `utils.common_utils`, `utils.recon_helpers.setup_camera`, `utils.slam_helpers.get_depth_and_silhouette`, `utils.slam_external.build_rotation`; external: `open3d`, `matplotlib`, `torch`.
**Category:** Visualization, Rendering.

### `viz_scripts/online_recon.py`
**Purpose:** Same rendering/visualization machinery as `final_recon.py`, but **replays the reconstruction incrementally over time** (using each Gaussian's stored `timestep` of creation to progressively reveal the map) instead of showing the final static scene, then drops into the same free-roam interactive mode once playback catches up. Simulates watching the SLAM system build the map live.
**Classes:** None.
**Functions:** `load_camera`, `load_scene_data(scene_path)` (loads all params + per-frame `w2c`s, no camera args needed since it recomputes per-timestep), `get_rendervars(params, w2c, curr_timestep)` (filters Gaussians to `params['timestep'] <= curr_timestep`, i.e. only Gaussians created so far — this is the key difference from `final_recon.py`), `make_lineset`, `render`, `rgbd2pcd` (all identical to `final_recon.py`), `visualize(scene_path, cfg)` (**main loop**: time-paced playback using `cfg['viz_fps']` and wall-clock elapsed time to pick `curr_timestep`, updating camera frustum/trajectory/point-cloud each tick, then an unbounded interactive loop after playback finishes), `__main__` entry point.
**Called by:** invoked directly by the user (`python viz_scripts/online_recon.py <config.py>`).
**Depends on:** identical dependency set to `final_recon.py`.
**Category:** Visualization, Rendering.

---

## 2. Core Algorithm Utilities (`utils/`)

### `utils/common_utils.py`
**Purpose:** Generic bootstrapping and I/O utilities used across every top-level script: reproducibility seeding and saving Gaussian/camera parameters to disk as compressed numpy archives.
**Classes:** None.
**Functions:**
- `seed_everything(seed=42)` — entry point; seeds Python/NumPy/PyTorch RNGs and sets cudnn determinism flags; called at the start of every script.
- `params2cpu(params)` — internal; detaches a params dict to CPU numpy.
- `save_params(output_params, output_dir)` — entry point; writes final params to `params.npz`.
- `save_params_ckpt(output_params, output_dir, time_idx)` — entry point; writes `params<time_idx>.npz` checkpoints.
- `save_seq_params` / `save_seq_params_ckpt` — entry points; save a per-frame sequence of parameter dicts.
**Called by:** `viz_scripts/final_recon.py`, `viz_scripts/online_recon.py`, `scripts/eval_novel_view.py`, `scripts/iphone_demo.py`, `scripts/post_splatam_opt.py`, `scripts/gaussian_splatting.py`, `scripts/splatam.py`.
**Depends on:** stdlib/external only (`os`, `numpy`, `random`, `torch`).
**Category:** Utilities, Configuration (seeding), Other (checkpoint I/O).

### `utils/eval_helpers.py`
**Purpose:** The evaluation harness for a tracked/mapped scene — computes photometric (PSNR, MS-SSIM, LPIPS) and geometric (depth RMSE/L1, ATE RMSE trajectory error) metrics, produces qualitative comparison plots, and logs to Weights & Biases. Invoked at the end of tracking/mapping runs and by the standalone novel-view-eval script.
**Classes:** None.
**Functions:**
- `align(model, data)` / `evaluate_ate(gt_traj, est_traj)` — internal; Horn's-method trajectory alignment and ATE RMSE.
- `report_loss(losses, wandb_run, wandb_step, tracking, mapping)` — entry point; per-iteration wandb loss logging.
- `plot_rgbd_silhouette(...)` — internal; builds the GT/rendered RGB/depth/silhouette/diff comparison grid.
- `report_progress(...)` — entry point; per-iteration progress reporting (renders via `transform_to_frame`/`transformed_params2rendervar`, computes PSNR/RMSE, updates tqdm/wandb).
- `eval_online(...)` — entry point; evaluates the saved per-frame ("online") parameter sequence.
- `eval(dataset, final_params, num_frames, eval_dir, ...)` — entry point (main); full-sequence render + PSNR/SSIM/LPIPS/depth metrics + final ATE RMSE.
- `eval_nvs(dataset, final_params, num_frames, eval_dir, ...)` — entry point; novel-view-synthesis variant evaluated on held-out GT camera frames.
**Called by:** `scripts/splatam.py`, `scripts/iphone_demo.py`, `scripts/eval_novel_view.py`.
**Depends on:** `datasets/gradslam_datasets/geometryutils.py` (`relative_transformation`), `utils/recon_helpers.py` (`setup_camera`), `utils/slam_external.py` (`build_rotation`, `calc_psnr`), `utils/slam_helpers.py` (`transform_to_frame`, `transformed_params2rendervar`, `transformed_params2depthplussilhouette`, `quat_mult`, `matrix_to_quaternion`); external: `torch`, `numpy`, `cv2`, `matplotlib`, `tqdm`, `diff_gaussian_rasterization`, `pytorch_msssim`, `torchmetrics` (LPIPS).
**Category:** Evaluation, Visualization.

### `utils/graphics_utils.py`
**Purpose:** Vestigial camera/projection math inherited from the upstream 3D-Gaussian-Splatting (Inria) codebase (world-to-view matrices, perspective projection, FOV/focal conversions, a `BasicPointCloud` container). **Orphan file** — confirmed via repo-wide grep, nothing imports it; superseded by `utils/recon_helpers.py:setup_camera`.
**Classes:** `BasicPointCloud(NamedTuple)` — `points`, `colors`, `normals`.
**Functions:** `geom_transform_points`, `getWorld2View`/`getWorld2View2`, `getProjectionMatrix`, `fov2focal`/`focal2fov`.
**Called by:** None (dead code).
**Depends on:** `torch`, `math`, `numpy`, `typing`.
**Category:** Other (dead/vestigial), Rendering (unused camera math).

### `utils/gs_external.py`
**Purpose:** Near-duplicate of `slam_external.py` bundled for the vanilla Gaussian-Splatting baseline pipeline (`scripts/gaussian_splatting.py`, `scripts/post_splatam_opt.py`): SSIM/PSNR losses, quaternion→rotation, and the full adaptive density-control suite (clone/split/prune with optimizer-state surgery), plus LR scheduling — but **without** the SLAM-specific `timestep` bookkeeping that `slam_external.py` has.
**Classes:** None.
**Functions:** `build_rotation`, `calc_mse`/`calc_psnr`, `gaussian`/`create_window`/`_ssim` (internal), `calc_ssim`, `accumulate_mean2d_gradient` (internal), `update_params_and_optimizer`/`cat_params_to_optimizer` (internal optimizer-state surgery), `remove_points` (internal), `inverse_sigmoid` (internal), `prune_gaussians`, `densify` (entry point — clone/split/prune adaptive density control, no timestep tagging), `update_learning_rate`, `get_expon_lr_func`.
**Called by:** `scripts/post_splatam_opt.py`, `scripts/gaussian_splatting.py`.
**Depends on:** external only (`numpy`, `torch`, `torch.nn.functional`, `torch.autograd.Variable`, `math`).
**Category:** Gaussian management (densification/pruning), Optimization, Training.

### `utils/gs_helpers.py`
**Purpose:** GS-baseline counterpart to `slam_helpers.py` plus a bundled evaluation suite (mirroring `eval_helpers.py`), used only by the non-SLAM baseline/post-hoc scripts. Converts Gaussian params into rasterizer rendervars and transforms Gaussians between world/camera frames; assumes **isotropic-only** scales (unlike `slam_helpers.py`).
**Classes:** None.
**Functions:** `l1_loss_v1`/`l1_loss_v2`, `weighted_l2_loss_v1`/`v2`, `align`/`evaluate_ate` (internal, duplicated from `eval_helpers.py`), `quat_mult`, `_sqrt_positive_part` (internal), `matrix_to_quaternion`, `o3d_knn` (internal Open3D KNN for scale init), `params2rendervar`/`transformed_params2rendervar` (entry points), `project_points` (internal), `params2silhouette`/`transformed_params2silhouette`, `get_depth_and_silhouette` (internal), `params2depthplussilhouette`/`transformed_params2depthplussilhouette` (entry points), `transform_to_frame` (isotropic-only, no rotation transform), `report_loss`/`plot_rgbd_silhouette`/`report_progress`/`eval` (entry points, GS-pipeline evaluation).
**Called by:** `scripts/gaussian_splatting.py`, `scripts/post_splatam_opt.py`.
**Depends on:** `utils/recon_helpers.py` (`setup_camera`), `utils/slam_external.py` (`build_rotation`, `calc_psnr`); external: `open3d`, `torch`, `numpy`, `matplotlib`, `tqdm`, `diff_gaussian_rasterization`, `pytorch_msssim`, `torchmetrics`.
**Category:** Rendering (rendervar construction), Evaluation, Gaussian management.

### `utils/_init_.py`
**Purpose:** Empty file. Named `_init_.py` (single underscores) — **not** the real `__init__.py` package marker, so it has no packaging effect; `utils/` works as an implicit namespace package regardless. Naming artifact.
**Category:** Other (inert packaging artifact).

### `utils/keyframe_selection.py`
**Purpose:** Implements SplaTAM's keyframe-overlap selection strategy for online mapping: back-projects sparsely sampled current-frame depth pixels into 3D and re-projects into each candidate keyframe to score visual overlap, bounding mapping optimization to a small relevant keyframe working set.
**Classes:** None.
**Functions:** `get_pointcloud(depth, intrinsics, w2c, sampled_indices)` (internal), `keyframe_selection_overlap(gt_depth, w2c, intrinsics, keyframe_list, k, pixels=1600)` — entry point; samples pixels, back/re-projects, ranks keyframes by in-bounds/in-front-of-camera overlap %, randomly selects `k` of the non-zero-overlap set.
**Called by:** `scripts/splatam.py`, `scripts/iphone_demo.py`.
**Depends on:** external only (`torch`, `numpy`).
**Category:** Tracking, Mapping (keyframe management).

### `utils/neighbor_search.py`
**Purpose:** GPU-accelerated k-NN over Gaussian centers via FAISS, for neighbor-based regularization/consistency losses (Dynamic-3D-Gaussians-style). **Orphan file** — confirmed via repo-wide grep, unused anywhere in the current pipeline.
**Classes:** None.
**Functions:** `torch_3d_knn(pts, num_knn, method="l2")` (internal FAISS index build+query), `calculate_neighbors(params, variables, time_idx, num_knn=20)` — unused entry point; computes Gaussian-kernel neighbor weights and stores them in `variables`.
**Called by:** None (dead code).
**Depends on:** `faiss`, `faiss.contrib.torch_utils`, `torch`.
**Category:** Gaussian management (unused densification/neighbor support).

### `utils/recon_helpers.py`
**Purpose:** Single-purpose helper building the differentiable rasterizer's camera settings object from intrinsics + world-to-camera pose. The canonical camera-setup routine used by essentially every tracking/mapping/eval/viz entry point (supersedes the unused `graphics_utils.py`).
**Classes:** None.
**Functions:** `setup_camera(w, h, k, w2c, near=0.01, far=100)` — entry point; builds and returns a `GaussianRasterizationSettings` (`Camera`) object.
**Called by:** `utils/gs_helpers.py`, `utils/eval_helpers.py`, `viz_scripts/online_recon.py`, `viz_scripts/final_recon.py`, `scripts/post_splatam_opt.py`, `scripts/gaussian_splatting.py`, `scripts/iphone_demo.py`, `scripts/splatam.py`.
**Depends on:** `torch`, `diff_gaussian_rasterization.GaussianRasterizationSettings`.
**Category:** Rendering, Utilities.

### `utils/slam_external.py`
**Purpose:** The SLAM pipeline's counterpart to `gs_external.py` — rotation math, PSNR/SSIM losses, and the full adaptive density-control suite, **extended with SLAM-specific `timestep` bookkeeping** (tracking which Gaussians were created at which frame) that `gs_external.py` lacks. This is the actual densify/prune engine used by `splatam.py`/`iphone_demo.py`.
**Classes:** None.
**Functions:** `build_rotation` (core, reused across nearly every other utils file), `calc_mse`/`calc_psnr`, `gaussian`/`create_window`/`_ssim` (internal), `calc_ssim`, `accumulate_mean2d_gradient` (internal), `update_params_and_optimizer`/`cat_params_to_optimizer` (internal optimizer-state surgery), `remove_points` (internal, timestep-aware, skips camera-pose params), `inverse_sigmoid` (internal), `prune_gaussians` (entry point), `densify` (entry point — the SLAM-aware clone/split/prune engine, tags new Gaussians with `variables['timestep']`), `update_learning_rate`, `get_expon_lr_func`.
**Called by:** `utils/slam_helpers.py`, `utils/gs_helpers.py`, `utils/eval_helpers.py`, `viz_scripts/final_recon.py`, `viz_scripts/online_recon.py`, `scripts/splatam.py`, `scripts/iphone_demo.py`.
**Depends on:** external only (`numpy`, `torch`, `torch.nn.functional`, `torch.autograd.Variable`, `math`).
**Category:** Gaussian management (densification/pruning), Optimization, Tracking/Mapping support.

### `utils/slam_helpers.py`
**Purpose:** The central rendering/math module for the main tracking-and-mapping pipeline. Converts the optimizable Gaussian parameter dict into rasterizer-ready render variables (RGB, silhouette, depth+silhouette) and implements `transform_to_frame`, the core routine that rigidly transforms Gaussians from world frame into a given time-step's camera frame — supporting both isotropic and anisotropic Gaussians (unlike the isotropic-only `gs_helpers.py`).
**Classes:** None.
**Functions:** `l1_loss_v1`/`l1_loss_v2`, `weighted_l2_loss_v1`/`v2`, `quat_mult` (entry point; composes camera rotation with anisotropic Gaussian rotations), `_sqrt_positive_part` (internal), `matrix_to_quaternion` (entry point, ported from PyTorch3D), `params2rendervar`, `transformed_params2rendervar` (entry point — the main per-iteration render-prep function), `project_points` (internal), `params2silhouette`/`transformed_params2silhouette`, `get_depth_and_silhouette` (internal — builds `[depth, presence=1, depth²]`), `params2depthplussilhouette`/`transformed_params2depthplussilhouette` (entry points, used for silhouette-masked tracking loss + depth supervision), `transform_to_frame(params, time_idx, gaussians_grad, camera_grad)` — **entry point, the crux of SplaTAM's differentiable tracking (camera_grad=True, gaussians_grad=False) vs. mapping (gaussians_grad=True) modes**.
**Called by:** `utils/eval_helpers.py`, `viz_scripts/final_recon.py`/`online_recon.py` (`get_depth_and_silhouette`), `scripts/splatam.py`, `scripts/iphone_demo.py` (`matrix_to_quaternion`).
**Depends on:** `utils/slam_external.py` (`build_rotation`); external: `torch`, `torch.nn.functional`.
**Category:** Rendering, Gaussian management, Tracking, Mapping.

---

## 3. Dataset Loading (`datasets/gradslam_datasets/`)

### `datasets/gradslam_datasets/basedataset.py`
**Purpose:** Abstract base class for every RGB-D dataset loader, implementing the shared pipeline for loading/resizing/preprocessing color, depth, intrinsics, poses, and optional per-pixel embeddings for one sequence. Adapted in part from NICE-SLAM. Subclasses implement only dataset-specific file discovery and pose parsing.
**Classes:** `GradSLAMDataset(torch.utils.data.Dataset)` — constructor takes `config_dict` (camera params: `png_depth_scale`, `image_height/width`, `fx/fy/cx/cy`, optional distortion/crop), `stride`, `start`, `end`, `desired_height/width`, `channels_first`, `normalize_color`, `device`, `dtype`, `load_embeddings`, `embedding_dir`, `embedding_dim`, `relative_pose` (default True). Calls abstract `get_filepaths()`/`load_poses()`, validates path counts, slices `[start:end:stride]`, and if `relative_pose` makes all poses relative to frame 0 via `geometryutils.relative_transformation`.
**Functions:** free helpers `to_scalar`, `as_intrinsics_matrix`/`from_intrinsics_matrix`, `readEXR_onlydepth`; methods `get_filepaths()`/`load_poses()` (abstract, `NotImplementedError`), `_preprocess_color`/`_preprocess_depth` (resize + scale), `_preprocess_poses`, `get_cam_K()`, `read_embedding_from_file()` (abstract stub), `__getitem__(index)` — **entry point**: reads/undistorts/preprocesses color+depth, rescales intrinsics via `datautils.scale_intrinsics`, returns `(color, depth, intrinsics, pose[, embedding])`; `__len__`.
**Called by:** every subclass below via `from .basedataset import GradSLAMDataset`; re-exported through `__init__.py`; consumed (via subclasses) by all `scripts/*.py`.
**Depends on:** `.geometryutils` (`relative_transformation`), `.datautils` (`normalize_image`, `channels_first`, `scale_intrinsics`); external `cv2`, `imageio`, `numpy`, `torch`, `natsort`, optional `Imath`/`OpenEXR`.
**Category:** Dataset loading (abstract base + generic image/pose math).

### `datasets/gradslam_datasets/azure.py`
**Purpose:** Loader for Azure Kinect sequences, reading color/depth from folders and trajectory from a `.log` file or flat 16-value pose lines (identity-pose fallback if none given).
**Classes:** `AzureKinectDataset(GradSLAMDataset)`.
**Functions:** `get_filepaths()`, `load_poses()` (parses `.log` 5-line blocks or flat pose files), `read_embedding_from_file()`.
**Called by:** `datasets/gradslam_datasets/__init__.py`; dispatched under `"azure"`/`"azurekinect"` in every `scripts/*.py` dataset dispatcher.
**Depends on:** `.basedataset.GradSLAMDataset`; external `numpy`, `torch`, `natsort`, `glob`.
**Category:** Dataset loading.

### `datasets/gradslam_datasets/dataconfig.py`
**Purpose:** YAML config loader for per-dataset camera/intrinsics configs (`configs/data/*.yaml`), with an `inherit_from` chaining mechanism so specialized configs extend a shared base.
**Functions:** `load_dataset_config(path, default_path=None)` — entry point; resolves `inherit_from` chains via `update_recursive`, returns the merged dict consumed by `GradSLAMDataset.__init__`. `update_recursive(dict1, dict2)` (internal recursive merge). `common_dataset_to_batch(dataset)` — batches a dataset's frames (not referenced elsewhere in scripts/).
**Called by:** re-exported via `__init__.py`; `load_dataset_config` imported directly by `scripts/splatam.py`, `scripts/gaussian_splatting.py`, `scripts/post_splatam_opt.py`, `scripts/eval_novel_view.py`, `scripts/iphone_demo.py` to load `configs/data/*.yaml` (e.g. `replica.yaml`, `scannet.yaml`, `TUM/*.yaml`).
**Depends on:** external `torch`, `yaml` only.
**Category:** Dataset loading / Configuration (YAML resolution).

### `datasets/gradslam_datasets/datautils.py`
**Purpose:** Pure-function image/pose math helpers (normalization, channel-order, intrinsics scaling, quaternion/pose transforms) shared by the dataset loaders.
**Functions:** `normalize_image`, `channels_first`, `scale_intrinsics` (used by `basedataset.__getitem__`), `pointquaternion_to_homogeneous`, `poses_to_transforms`, `create_label_image`.
**Called by:** `basedataset.py`; wildcard re-exported via `__init__.py`.
**Depends on:** external `numpy`, `torch` only.
**Category:** Utilities (supports dataset loading).

### `datasets/gradslam_datasets/geometryutils.py`
**Purpose:** Projective/rigid-body geometry toolkit (ported from gradslam): homogeneous-coordinate conversions, quaternion↔rotation-matrix, SE(3) composition/inversion, pixel↔camera projection, pointcloud/normal transforms. Mostly unused outside one function.
**Functions:** `homogenize_points`/`unhomogenize_points`, `quaternion_to_axisangle`, `normalize_quaternion`, `quaternion_to_rotation_matrix`, `inverse_transfom_3d`, `compose_transforms_3d`, `relative_transform_3d`, `relative_transformation(trans_01, trans_02, ...)` — **the one actively-used entry point**, called directly by `basedataset.py`'s `_preprocess_poses` and by `scripts/iphone_demo.py` for ARKit-pose conversion; `normalize_pixel_coords`/`unnormalize_pixel_coords`, `create_meshgrid`, `cam2pixel`/`pixel2cam`, `transform_pointcloud`/`transform_normals`. Has a dead `__main__` self-test block referencing a non-existent local module.
**Called by:** `basedataset.py`, `scripts/iphone_demo.py`.
**Depends on:** external `torch`, `kornia.geometry.linalg`.
**Category:** Utilities (geometry/math toolkit, mostly unused outside `relative_transformation`).

### `datasets/gradslam_datasets/icl.py`
**Purpose:** Loader for the ICL-NUIM synthetic dataset; `rgb/*.png` + `depth/*.png` frames, trajectory from a `*.gt.sim` 3-line-per-pose text file.
**Classes:** `ICLDataset(GradSLAMDataset)` (configurable `embedding_file_extension`).
**Functions:** `get_filepaths()`, `load_poses()` (note: sets `_curpose[3,3] = 3`, an apparent bug vs. the standard `1`), `read_embedding_from_file()`.
**Called by:** `__init__.py`; dispatched under `"icl"` in every `scripts/*.py`.
**Depends on:** `.basedataset.GradSLAMDataset`; external `numpy`, `torch`, `natsort`, `glob`.
**Category:** Dataset loading.

### `datasets/gradslam_datasets/__init__.py`
**Purpose:** Package entry point re-exporting every dataset class and config-loading utility so downstream scripts do a single import. Does **not** itself define a `get_dataset()` factory — that dispatcher is independently copy-pasted into each top-level script.
**Exports:** `AzureKinectDataset`, `GradSLAMDataset`, `ICLDataset`, `ReplicaDataset`, `ReplicaV2Dataset`, `ScannetDataset`, `Ai2thorDataset`, `RealsenseDataset`, `Record3DDataset`, `TUMDataset`, `ScannetPPDataset`, `NeRFCaptureDataset`, `load_dataset_config`, and `datautils.*`.
**Dispatch keys** (duplicated verbatim in every `scripts/*.py`'s local `get_dataset()`, matched against `config_dict["dataset_name"].lower()`): `"icl"→ICLDataset`, `"replica"→ReplicaDataset`, `"replicav2"→ReplicaV2Dataset`, `"azure"/"azurekinect"→AzureKinectDataset`, `"scannet"→ScannetDataset`, `"ai2thor"→Ai2thorDataset`, `"record3d"→Record3DDataset`, `"realsense"→RealsenseDataset`, `"tum"→TUMDataset`, `"scannetpp"→ScannetPPDataset` (called without `config_dict`), `"nerfcapture"→NeRFCaptureDataset` (called without `config_dict`); else raises `ValueError`.
**Called by:** all `scripts/*.py`; also `datasets/_init_.py` does `from .gradslam_datasets import *`.
**Depends on:** all sibling modules in the package.
**Category:** Dataset loading (package aggregator/registry).

### `datasets/gradslam_datasets/nerfcapture.py`
**Purpose:** Loader for the NeRFCapture iOS-app dataset (NeRFStudio/Instant-NGP `transforms.json` format); self-constructs its `config_dict` from the JSON metadata rather than taking one from the caller (`png_depth_scale=6553.5`, `dataset_name="nerfcapture"`).
**Classes:** `NeRFCaptureDataset(GradSLAMDataset)` — constructor takes only `basedir, sequence`.
**Functions:** `create_filepath_index_mapping(frames)` (module-level, duplicated in `scannetpp.py`), `load_cams_metadata()`, `get_filepaths()` (applies fixed coordinate-flip `P @ c2w @ P.T`), `load_poses()`, `read_embedding_from_file()`.
**Called by:** `__init__.py`; dispatched under `"nerfcapture"` (no `config_dict` arg) in every `scripts/*.py`; used by `configs/iphone/*`.
**Depends on:** `.basedataset.GradSLAMDataset`; external `json`, `numpy`, `torch`, `natsort`, `glob`.
**Category:** Dataset loading.

### `datasets/gradslam_datasets/realsense.py`
**Purpose:** Loader for RealSense-camera sequences (tabletop-manipulator setup); `.jpg` color, `.png` depth, per-frame `.npy` poses, with a fixed coordinate-convention flip.
**Classes:** `RealsenseDataset(GradSLAMDataset)`.
**Functions:** `get_filepaths()`, `load_poses()` (`P @ c2w @ P.T` flip), `read_embedding_from_file()`.
**Called by:** `__init__.py`; dispatched under `"realsense"`.
**Depends on:** `.basedataset.GradSLAMDataset`; external `numpy`, `torch`, `natsort`, `glob`.
**Category:** Dataset loading.

### `datasets/gradslam_datasets/record3d.py`
**Purpose:** Loader for Record3D-iOS-app-captured sequences pre-processed by the repo's `save_record3d_stream.py`; `rgb/*.png`, `depth/*.png`, `poses/*.npy`.
**Classes:** `Record3DDataset(GradSLAMDataset)`.
**Functions:** `get_filepaths()`, `load_poses()` (same `P @ c2w @ P.T` flip as `realsense.py`), `read_embedding_from_file()`.
**Called by:** `__init__.py`; dispatched under `"record3d"`.
**Depends on:** `.basedataset.GradSLAMDataset`; external `numpy`, `torch`, `natsort`, `glob`.
**Category:** Dataset loading.

### `datasets/gradslam_datasets/replica.py`
**Purpose:** Loaders for the Replica dataset in two layouts: NICE-SLAM-style (`ReplicaDataset`) and iMAP-style train/test split (`ReplicaV2Dataset`).
**Classes:** `ReplicaDataset(GradSLAMDataset)` — `results/frame*.jpg`/`depth*.png` + flat `traj.txt`. `ReplicaV2Dataset(GradSLAMDataset)` — adds `use_train_split`; reads `imap/00` (train) or `imap/01` (test) with `traj_w_c.txt`; test split prepends the first train frame for evaluation continuity.
**Functions:** both implement `get_filepaths()`, `load_poses()`, `read_embedding_from_file()`.
**Called by:** `__init__.py`; dispatched under `"replica"`/`"replicav2"`.
**Depends on:** `.basedataset.GradSLAMDataset`; external `numpy`, `torch`, `natsort`, `glob`.
**Category:** Dataset loading.

### `datasets/gradslam_datasets/scannetpp.py`
**Purpose:** Loader for ScanNet++ DSLR data, using NeRFStudio-format `transforms_undistorted.json` plus a `train_test_lists.json` split file and per-frame blur (`is_bad`) flags. Self-constructs its `config_dict` like `nerfcapture.py`.
**Classes:** `ScannetPPDataset(GradSLAMDataset)` — `(basedir, sequence, ignore_bad=False, use_train_split=True)`; `dataset_name="scannetpp"`, `png_depth_scale=1000.0`.
**Functions:** `create_filepath_index_mapping` (duplicate of `nerfcapture.py`'s), `load_cams_metadata()`, `get_filepaths()` (reads `dslr/undistorted_images`/`undistorted_depths`; prepends first train frame when `use_train_split=False`; optional `ignore_bad` filtering; same `P @ c2w @ P.T` flip), `load_poses()`, `read_embedding_from_file()`.
**Called by:** `__init__.py`; dispatched under `"scannetpp"` (no `config_dict`); used by `configs/scannetpp/*`.
**Depends on:** `.basedataset.GradSLAMDataset`; external `json`, `numpy`, `torch`, `natsort`, `glob`.
**Category:** Dataset loading.

### `datasets/gradslam_datasets/scannet.py`
**Purpose:** Loader for ScanNet; `color/*.jpg`, `depth/*.png`, per-frame pose text files under `pose/`.
**Classes:** `ScannetDataset(GradSLAMDataset)`.
**Functions:** `get_filepaths()`, `load_poses()` (`np.loadtxt` per pose file), `read_embedding_from_file()`.
**Called by:** `__init__.py`; dispatched under `"scannet"`.
**Depends on:** `.basedataset.GradSLAMDataset`; external `numpy`, `torch`, `natsort`, `glob`.
**Category:** Dataset loading.

### `datasets/gradslam_datasets/tum.py`
**Purpose:** Loader for the TUM RGB-D benchmark, implementing TUM's standard timestamp-association procedure to match asynchronous RGB/depth/pose streams and subsample to a fixed frame rate.
**Classes:** `TUMDataset(GradSLAMDataset)`.
**Functions:** `parse_list`, `associate_frames(tstamp_image, tstamp_depth, tstamp_pose, max_dt=0.08)` (nearest-timestamp matching), `pose_matrix_from_quaternion` (uses `scipy.spatial.transform.Rotation`), `get_filepaths()` (association + frame-rate=32 subsampling), `load_poses()`, `read_embedding_from_file()`.
**Called by:** `__init__.py`; dispatched under `"tum"`; used by `configs/tum/*` and `configs/data/TUM/*.yaml`.
**Depends on:** `.basedataset.GradSLAMDataset`; external `numpy`, `torch`, `natsort`, `scipy`, `glob`.
**Category:** Dataset loading.

### `datasets/gradslam_datasets/ai2thor.py`
**Purpose:** Loader for AI2-THOR simulated sequences; supports standard `.pt` embeddings and a special one-hot semantic-segmentation embedding mode (`embed_semseg`).
**Classes:** `Ai2thorDataset(GradSLAMDataset)`.
**Functions:** `get_filepaths()`, `load_poses()` (`np.loadtxt` per pose file), `read_embedding_from_file()` (branches on `embed_semseg`: PNG label read + one-hot encode vs. plain `torch.load`).
**Called by:** `__init__.py`; dispatched under `"ai2thor"`.
**Depends on:** `.basedataset.GradSLAMDataset`; external `cv2`, `imageio`, `numpy`, `torch`, `natsort`, `glob`.
**Category:** Dataset loading.

### `datasets/_init_.py`
**Purpose:** Top-level convenience shim (`from .gradslam_datasets import *`), one line. Named `_init_.py` (single underscores) — **not** the real `__init__.py`, so Python does not treat it as the package initializer. **Unused** — nothing in the repo imports `datasets._init_`; all real imports go through `datasets.gradslam_datasets` directly.
**Called by:** None (dead code / not part of the active import graph).
**Category:** Dataset loading (unused re-export shim).

---

## 4. Differentiable Gaussian Rasterizer (`diff-gaussian-rasterization-w-depth/`)

_This is SplaTAM's vendored fork of the 3D-Gaussian-Splatting CUDA rasterizer (originally from Inria/`graphdeco-inria` via Dynamic3DGaussians), extended to also output a per-pixel depth map. SplaTAM further repurposes the generic 3-channel color output to carry `[depth, silhouette, depth²]` by passing custom `colors_precomp` (see `utils/slam_helpers.py:get_depth_and_silhouette`), rather than using the native `out_depth` channel for its silhouette/uncertainty losses._

### `diff_gaussian_rasterization/__init__.py`
**Purpose:** The Python-facing API. Wraps the compiled `_C` CUDA extension in a `torch.autograd.Function` so SplaTAM can backprop through rendering; exposes an `nn.Module` renderer and a camera-settings struct.
**Classes:** `GaussianRasterizationSettings(NamedTuple)` — `image_height/width, tanfovx/tanfovy, bg, scale_modifier, viewmatrix, projmatrix, sh_degree, campos, prefiltered` (built by `utils/recon_helpers.py:setup_camera`). `GaussianRasterizer(nn.Module)` — `markVisible()` + `forward()`. `_RasterizeGaussians(torch.autograd.Function)` — the autograd bridge.
**Functions:** `rasterize_gaussians(...)` (functional wrapper), `_RasterizeGaussians.forward` — **forward entry point**: calls `_C.rasterize_gaussians`, returns `(color, radii, depth)`; `_RasterizeGaussians.backward` — **backward entry point**: calls `_C.rasterize_gaussians_backward`; `GaussianRasterizer.forward(means3D, means2D, opacities, shs, colors_precomp, scales, rotations, cov3D_precomp)` — top-level call site (`Renderer(raster_settings=cam)(**rendervar)`); `GaussianRasterizer.markVisible(positions)` — no-grad frustum-culling query.
**Called by:** `utils/recon_helpers.py` (`GaussianRasterizationSettings as Camera`); `utils/slam_helpers.py`, `utils/gs_helpers.py`, `utils/eval_helpers.py`, `scripts/splatam.py`, `scripts/gaussian_splatting.py`, `scripts/post_splatam_opt.py`, `scripts/iphone_demo.py`, `viz_scripts/final_recon.py`, `viz_scripts/online_recon.py` (all `GaussianRasterizer as Renderer`).
**Depends on:** compiled extension `diff_gaussian_rasterization._C`; `torch`.
**Category:** Rendering.

### `setup.py`
**Purpose:** `setuptools`/PyTorch build script compiling `diff_gaussian_rasterization._C` as a `CUDAExtension` from `cuda_rasterizer/{rasterizer_impl,forward,backward}.cu`, `rasterize_points.cu`, `ext.cpp`, with `third_party/glm/` on the include path.
**Category:** Rendering (build tooling).

### `ext.cpp`
**Purpose:** pybind11 bindings exposing `_C.rasterize_gaussians` (→`RasterizeGaussiansCUDA`), `_C.rasterize_gaussians_backward` (→`RasterizeGaussiansBackwardCUDA`), `_C.mark_visible` (→`markVisible`).
**Called by:** `diff_gaussian_rasterization/__init__.py`. **Depends on:** `rasterize_points.h`.
**Category:** Rendering.

### `rasterize_points.h` / `rasterize_points.cu`
**Purpose:** Bridges PyTorch tensors to the templated `CudaRasterizer::Rasterizer` engine — allocates outputs/aux buffers and forwards raw pointers.
**Functions:** `RasterizeGaussiansCUDA(...)` — **forward entry point**; allocates `out_color[3,H,W]`, `radii`, `out_depth[1,H,W]` (SplaTAM's extension) and resizable `geomBuffer`/`binningBuffer`/`imgBuffer`, calls `CudaRasterizer::Rasterizer::forward`. `RasterizeGaussiansBackwardCUDA(...)` — **backward entry point**; allocates gradient tensors and calls `CudaRasterizer::Rasterizer::backward`. `markVisible(...)` — calls `Rasterizer::markVisible`.
**Called by:** `ext.cpp`. **Depends on:** `cuda_rasterizer/rasterizer.h`, `cuda_rasterizer/config.h`.
**Category:** Rendering.

### `cuda_rasterizer/rasterizer.h`
**Purpose:** Public interface header declaring `CudaRasterizer::Rasterizer` (static `markVisible`, `forward`, `backward`) — the seam between tensor-level code and raw-pointer CUDA implementation.
**Called by:** `rasterize_points.cu`; implemented in `rasterizer_impl.cu`.
**Category:** Rendering.

### `cuda_rasterizer/rasterizer_impl.h` / `rasterizer_impl.cu`
**Purpose:** Orchestrates the tile-based rasterization pipeline: per-Gaussian preprocessing, tile/depth key generation, radix sort, per-tile range computation, and per-pixel blend dispatch. Defines the packed GPU state layouts passed between forward/backward as opaque byte buffers.
**Classes/Structs:** `GeometryState` (per-Gaussian: depths, cov3D, conic_opacity, tiles_touched, ...), `ImageState` (per-pixel: ranges, n_contrib, accum_alpha), `BinningState` (sorted Gaussian-instance lists).
**Functions:** `checkFrustum`/`duplicateWithKeys`/`identifyTileRanges` (kernels), `Rasterizer::markVisible`, `Rasterizer::forward(...)` — **forward driver**: `FORWARD::preprocess` → prefix-sum → `duplicateWithKeys` + `cub::DeviceRadixSort` + `identifyTileRanges` → `FORWARD::render`; `Rasterizer::backward(...)` — **backward driver**: reconstructs saved state → `BACKWARD::render` → `BACKWARD::preprocess`.
**Called by:** `rasterize_points.cu`. **Calls into:** `forward.cu`, `backward.cu`, `auxiliary.h`, CUB, GLM.
**Category:** Rendering.

### `cuda_rasterizer/forward.h` / `forward.cu`
**Purpose:** Per-Gaussian preprocessing + per-pixel forward alpha-compositing kernels — the differentiable rendering equation.
**Functions:** `computeColorFromSH`, `computeCov2D` (EWA splatting w/ `+0.3` low-pass regularization), `computeCov3D`, `preprocessCUDA<C>` (`FORWARD::preprocess` — culling, projection, covariance, SH→RGB), `renderCUDA<CHANNELS>` (`FORWARD::render` — per-tile depth-ordered alpha blending; SplaTAM adds median-depth accumulation into `out_depth`).
**Called by:** `rasterizer_impl.cu`. **Depends on:** `auxiliary.h`, `config.h`, GLM.
**Category:** Rendering.

### `cuda_rasterizer/backward.h` / `backward.cu`
**Purpose:** Analytic gradient kernels mirroring the forward pipeline in reverse.
**Functions:** `computeColorFromSH` (backward), `computeCov2DCUDA`, `computeCov3D` (backward), `preprocessCUDA<C>` (`BACKWARD::preprocess`), `renderCUDA<C>` (`BACKWARD::render` — walks each tile's Gaussian list back-to-front, atomically scatters `dL_dcolors, dL_dmean2D, dL_dconic2D, dL_dopacity`).
**Called by:** `rasterizer_impl.cu` (`BACKWARD::render` then `BACKWARD::preprocess`). **Depends on:** `auxiliary.h`, `config.h`, GLM.
**Category:** Rendering.

### `cuda_rasterizer/auxiliary.h`
**Purpose:** Shared device math/geometry helpers (SH coefficient tables, `ndc2Pix`, `getRect`, `transformPoint4x3/4x4`, `dnormvdz`/`dnormvdv`, `sigmoid`, `in_frustum`) used by both `forward.cu` and `backward.cu`.
**Category:** Rendering.

### `cuda_rasterizer/config.h`
**Purpose:** Compile-time constants: `NUM_CHANNELS 3` (the slot SplaTAM repurposes for depth/silhouette/depth²), `BLOCK_X/Y 16` (tile size).
**Category:** Rendering.

### `third_party/glm/`
Vendored header-only GLM math library used inside the CUDA kernels — a build dependency, not SplaTAM logic.

**Rasterization call-chain (forward):** `utils/slam_helpers.py` builds a `rendervar` dict + `utils/recon_helpers.py:setup_camera` builds `GaussianRasterizationSettings` → `GaussianRasterizer.forward()` → `rasterize_gaussians()` → `_RasterizeGaussians.forward()` → `_C.rasterize_gaussians` (`ext.cpp`) → `RasterizeGaussiansCUDA` (`rasterize_points.cu`) → `CudaRasterizer::Rasterizer::forward` (`rasterizer_impl.cu`) → `FORWARD::preprocess`/`preprocessCUDA` + sort + `FORWARD::render`/`renderCUDA` (`forward.cu`) → `(color, radii, depth)` back to Python.
**Rasterization call-chain (backward):** autograd → `_RasterizeGaussians.backward()` → `_C.rasterize_gaussians_backward` → `RasterizeGaussiansBackwardCUDA` (`rasterize_points.cu`) → `CudaRasterizer::Rasterizer::backward` (`rasterizer_impl.cu`) → `BACKWARD::render`/`renderCUDA` then `BACKWARD::preprocess`/`preprocessCUDA` (`backward.cu`) → gradient tensors back to Python.

---

## 5. Shell Launchers (`bash_scripts/`)

Thin, non-Python wrappers that set environment/args and invoke the Python entry points above. Not algorithmic — included for completeness of the execution path from the README's documented commands.

- **`online_demo.bash`** → `python scripts/iphone_demo.py --config <cfg>` (live iPhone SLAM demo).
- **`nerfcapture.bash`** → `python scripts/splatam.py <cfg>` on a previously captured NeRFCapture dataset (offline).
- **`nerfcapture2dataset.bash`** → `python scripts/nerfcapture2dataset.py --config <cfg>` (capture-only, no SLAM).
- **`download_replica.sh`**, **`download_replicav2.sh`**, **`download_tum.sh`** — dataset download scripts (`curl`/`wget` + unzip), populate `./data/<Dataset>/` consumed by `datasets/gradslam_datasets/*`.
- **`start_docker.bash`** — pulls/runs the project's Docker image.
**Category:** Configuration / tooling (not part of the algorithmic dependency graph).

_Note: `datasets/gradslam_datasets/record3d.py`'s docstring references a `save_record3d_stream.py` capture script; this file does not exist anywhere in the current repo tree (likely an external/removed utility) — Record3D users must supply pre-processed `rgb/`, `depth/`, `poses/` folders directly._

---

## 6. Configuration (`configs/`)

**Purpose:** Plain-Python experiment configs — no CLI/argparse framework, no YAML for the top-level experiment (YAML is used only for the low-level per-dataset camera intrinsics under `configs/data/`). Every top-level script loads its config file dynamically via `importlib.machinery.SourceFileLoader(...).load_module()` on a path passed as the sole CLI argument, then reads `experiment.config` — a plain `dict`. This means a "config" is executable Python: files compute derived values (e.g. `run_name = f"{scene_name}_{seed}"`, resolution downscaling, `os.environ["SCENE_NUM"]`-driven scene selection for batch/array jobs) before assembling the `config = dict(...)`.

**Canonical schema** (established by `configs/replica/splatam.py`, reused with minor variation by every `splatam.py`/`*_eval.py` config):
- Top-level scalars: `workdir`, `run_name`, `seed`, `primary_device`, `map_every`, `keyframe_every`, `mapping_window_size`, `report_global_progress_every`, `eval_every`, `scene_radius_depth_ratio`, `mean_sq_dist_method` (`"projective"`/`"knn"`), `gaussian_distribution` (`"isotropic"`/`"anisotropic"`), `report_iter_progress`, `load_checkpoint`, `checkpoint_time_idx`, `save_checkpoints`, `checkpoint_interval`, `use_wandb`.
- `wandb` — `entity`, `project`, `group`, `name`, `save_qual`, `eval_save_qual`.
- `data` — `basedir`, `gradslam_data_cfg` (path to a `configs/data/*.yaml` intrinsics file, loaded via `datasets.gradslam_datasets.load_dataset_config`), `sequence`, `desired_image_height/width` (+ optional separate `tracking_image_height/width` and `densification_image_height/width` for multi-resolution tracking/densification), `start`, `end`, `stride`, `num_frames` (`-1` = all).
- `tracking` — `use_gt_poses`, `forward_prop`, `num_iters`, `use_sil_for_loss`, `sil_thres`, `use_l1`, `ignore_outlier_depth_loss`, (iPhone configs add `use_depth_loss_thres`/`depth_loss_thres` and `visualize_tracking_loss`), `loss_weights` (`im`, `depth`), `lrs` (per-parameter Adam learning rates — Gaussian LRs are `0.0` here since tracking only moves the camera: `cam_unnorm_rots`, `cam_trans`).
- `mapping` — `num_iters`, `add_new_gaussians`, `sil_thres`, `use_l1`, `use_sil_for_loss`, `ignore_outlier_depth_loss`, `loss_weights`, `lrs` (here Gaussian LRs are nonzero and camera LRs are `0.0`), `prune_gaussians` + `pruning_dict` (`start_after`, `remove_big_after`, `stop_after`, `prune_every`, `removal_opacity_threshold`, `final_removal_opacity_threshold`, `reset_opacities`, `reset_opacities_every`), `use_gaussian_splatting_densification` + `densify_dict` (`start_after`, `remove_big_after`, `stop_after`, `densify_every`, `grad_thresh`, `num_to_split_into`, `removal_opacity_threshold`, `final_removal_opacity_threshold`, `reset_opacities_every`).
- `viz` — `render_mode` (`color`/`depth`/`centers`), `offset_first_viz_cam`, `show_sil`, `visualize_cams`, `viz_w`/`viz_h`, `viz_near`/`viz_far`, `view_scale`, `viz_fps`, `enter_interactive_post_online` — consumed by `viz_scripts/final_recon.py`/`online_recon.py` via `experiment.config["viz"]`.
- Baseline/`train`-style configs (`gaussian_splatting.py`, `post_splatam_opt.py`) replace `tracking`+`mapping` with a single `train` dict (`num_iters_mapping`, `sil_thres`, `use_sil_for_loss`, `loss_weights`, `lrs_mapping`, `lrs_mapping_means3D_final`, `lr_delay_mult`, `use_gaussian_splatting_densification`, `densify_dict`) and add `data.desired_image_height_init/width_init` (low-res init pass), `data.eval_stride`/`eval_num_frames`; `post_splatam_opt.py` additionally requires `data.param_ckpt_path` pointing at a prior SplaTAM run's `params.npz`.

**Loading mechanism (confirmed via source):** every `scripts/*.py` and `viz_scripts/*.py` does the same `SourceFileLoader(os.path.basename(args.experiment/config), path).load_module()` dance, then reads `.config`. Nothing in `configs/` is imported as a normal Python package for its content (only `configs/_init_.py` exists as a — currently empty — packaging artifact, same naming quirk as `utils/_init_.py`/`datasets/_init_.py`).

**`configs/data/*.yaml`** — low-level, dataset-intrinsic camera configs, loaded by `datasets/gradslam_datasets/dataconfig.py:load_dataset_config()` (called from inside each script, not from `configs/*.py` directly): `dataset_name`, `camera_params` (`image_height/width`, `fx/fy/cx/cy`, `png_depth_scale`, `crop_edge`/`crop_size`/`distortion` where relevant). Files: `replica.yaml`, `replica_v2.yaml`, `scannet.yaml`, `TUM/freiburg1_desk.yaml`, `TUM/freiburg1_desk2.yaml`, `TUM/freiburg1_room.yaml`, `TUM/freiburg2_xyz.yaml`, `TUM/freiburg3_long_office_household.yaml`. (iPhone/NeRFCapture and ScanNet++ configs skip this — those dataset classes build their own intrinsics dict from `transforms.json` metadata instead, so their `data` dict omits `gradslam_data_cfg` and sets `dataset_name` directly.)

**Per-family breakdown:**
- **`configs/iphone/`** — the live-capture pipeline: `dataset.py` (minimal config for `nerfcapture2dataset.py` — just `workdir`/`overwrite`/`depth_scale`/`num_frames`), `nerfcapture.py` (same capture fields, for offline SLAM after capture), `online_demo.py` (full SplaTAM schema + iPhone-specific `data.downscale_factor`/`densify_downscale_factor`/`full_res_width`/`full_res_height`, feeds `scripts/iphone_demo.py`), `splatam.py` (offline SplaTAM run on a captured NeRFCapture dataset, `dataset_name="nerfcapture"`), `splatam_viz.py` (viz-only config — just `scene_path`+`seed`+`viz`, for `viz_scripts/*`), `gaussian_splatting.py`/`post_splatam_opt.py` (baseline/refinement variants).
- **`configs/replica/`** — the primary benchmark family: `splatam.py` (canonical schema, 8 scenes), `splatam_s.py` (SplaTAM-**S**, a faster/lighter variant — fewer `tracking_iters`/`mapping_iters` of 10/15 vs. 40/60, larger `mapping_window_size`), `gaussian_splatting.py` (GT-pose 3DGS baseline, adds `desired_image_height_init/width_init` for a low-res init pass and `eval_stride`/`eval_num_frames`), `post_splatam_opt.py` (post-hoc refinement, requires `data.param_ckpt_path`), `replica_eval.py` (identical schema to `splatam.py` but reads `seed`/`scene_name` from `os.environ["SEED"]`/`os.environ["SCENE_NUM"]` for batch/array-job evaluation across all 8 scenes via `replica.bash`).
- **`configs/replica_v2/`** — `splatam.py` (adds `data.use_train_split` toggle for train-vs-novel-view splits), `eval_novel_view.py` (sets `use_train_split=False`, fed to `scripts/eval_novel_view.py`).
- **`configs/scannet/`** — `splatam.py`, `scannet_eval.py` (env-var-driven batch eval across 5-6 named scenes, analogous to `replica_eval.py`), `scannet.bash` (array-job driver).
- **`configs/scannetpp/`** — `splatam.py` (`dataset_name="scannetpp"`, `data.ignore_bad`/`use_train_split`), `gaussian_splatting.py`, `post_splatam_opt.py`, `eval_novel_view.py` (adds top-level `scene_path`, env-var scene/train-split selection), `scannetpp_eval.py`, `scannetpp.bash`/`eval_novel_view.bash` (array-job drivers).
- **`configs/scannet/`** and **`configs/tum/`** — `configs/tum/splatam.py`, `tum_eval.py` (env-var batch eval across the 5 TUM sequences, uses `gradslam_data_cfg=f"./configs/data/TUM/{scene_name}.yaml"`), `tum.bash`.

**Full file listing:**
| File | One-line role |
|---|---|
| `configs/_init_.py` | Empty; packaging-naming artifact (not a real `__init__.py`), inert. |
| `configs/data/replica.yaml`, `replica_v2.yaml`, `scannet.yaml`, `TUM/*.yaml` (5 files) | Per-dataset camera intrinsics/depth-scale configs consumed via `load_dataset_config`. |
| `configs/iphone/dataset.py` | Config for `scripts/nerfcapture2dataset.py` (capture-only). |
| `configs/iphone/nerfcapture.py` | Config for offline SplaTAM on a captured NeRFCapture dataset. |
| `configs/iphone/online_demo.py` | Config for `scripts/iphone_demo.py` (live SLAM demo). |
| `configs/iphone/splatam.py` | Full SplaTAM run config for iPhone/NeRFCapture data. |
| `configs/iphone/splatam_viz.py` | Viz-only config (`scene_path` + `viz`) for `viz_scripts/*`. |
| `configs/iphone/gaussian_splatting.py` | GT-pose 3DGS baseline on iPhone data. |
| `configs/iphone/post_splatam_opt.py` | Post-hoc 3DGS refinement on iPhone data. |
| `configs/replica/splatam.py` | Canonical SplaTAM config (8 Replica scenes). |
| `configs/replica/splatam_s.py` | SplaTAM-S (lighter/faster) variant. |
| `configs/replica/gaussian_splatting.py` | GT-pose 3DGS baseline on Replica. |
| `configs/replica/post_splatam_opt.py` | Post-hoc refinement on Replica (needs `param_ckpt_path`). |
| `configs/replica/replica_eval.py` | Env-var-driven batch SplaTAM+eval across all Replica scenes. |
| `configs/replica/replica.bash` | Shell driver looping `replica_eval.py` over scenes/seeds. |
| `configs/replica_v2/splatam.py` | SplaTAM on Replica-V2 (train/test split aware). |
| `configs/replica_v2/eval_novel_view.py` | Novel-view-synthesis eval config for Replica-V2. |
| `configs/scannet/splatam.py` | SplaTAM on ScanNet. |
| `configs/scannet/scannet_eval.py` | Env-var-driven batch SplaTAM+eval across ScanNet scenes. |
| `configs/scannet/scannet.bash` | Shell driver for `scannet_eval.py`. |
| `configs/scannetpp/splatam.py` | SplaTAM on ScanNet++. |
| `configs/scannetpp/gaussian_splatting.py` | GT-pose 3DGS baseline on ScanNet++. |
| `configs/scannetpp/post_splatam_opt.py` | Post-hoc refinement on ScanNet++. |
| `configs/scannetpp/eval_novel_view.py` | Novel-view-synthesis eval config for ScanNet++. |
| `configs/scannetpp/scannetpp_eval.py` | Env-var-driven batch SplaTAM+eval across ScanNet++ scenes. |
| `configs/scannetpp/scannetpp.bash`, `eval_novel_view.bash` | Shell drivers. |
| `configs/tum/splatam.py` | SplaTAM on a single TUM sequence. |
| `configs/tum/tum_eval.py` | Env-var-driven batch SplaTAM+eval across all 5 TUM sequences. |
| `configs/tum/tum.bash` | Shell driver for `tum_eval.py`. |

**Category:** Configuration.

---

## 7. Final Dependency Tree — Execution Flow

There is no single `main.py`; SplaTAM is a set of independent CLI entry points that share the same backing library (`utils/`, `datasets/gradslam_datasets/`, `diff_gaussian_rasterization`). The tree below traces the **primary** path — `python scripts/splatam.py <config.py>` — since it exercises the largest fraction of the codebase, then shows how every other entry point attaches to (or bypasses) that same library.

```
python scripts/splatam.py configs/<dataset>/splatam.py
│
├── (1) CONFIG LOAD — importlib.machinery.SourceFileLoader(...).load_module()
│     └── configs/<dataset>/splatam.py            [dict: workdir, data, tracking, mapping, viz, ...]
│           └── (only if data.gradslam_data_cfg set) configs/data/<dataset>.yaml
│
├── (2) SEEDING
│     └── utils/common_utils.py :: seed_everything(seed)
│
├── (3) DATASET CONSTRUCTION — rgbd_slam()'s local get_dataset(config_dict, basedir, sequence, ...)
│     └── datasets/gradslam_datasets/__init__.py  (re-exports)
│           ├── dataconfig.py :: load_dataset_config()          [resolves configs/data/*.yaml, inherit_from chains]
│           └── one of: replica.py | tum.py | scannet.py | scannetpp.py | azure.py
│                       | icl.py | ai2thor.py | realsense.py | record3d.py | nerfcapture.py
│                 └── basedataset.py :: GradSLAMDataset          [ABSTRACT BASE — __getitem__, load_poses(), get_filepaths()]
│                       ├── geometryutils.py :: relative_transformation()   [pose-relative preprocessing]
│                       └── datautils.py :: normalize_image / channels_first / scale_intrinsics
│
├── (4) SCENE INITIALIZATION — initialize_first_timestep() [scripts/splatam.py]
│     ├── get_pointcloud()                        [back-project frame-0 RGB-D → world-frame point cloud]
│     ├── initialize_params()                      [build nn.Parameter Gaussian + camera-pose params]
│     └── utils/recon_helpers.py :: setup_camera() → diff_gaussian_rasterization.GaussianRasterizationSettings
│
├── (5) PER-FRAME LOOP — rgbd_slam()'s `for time_idx in range(num_frames)`
│     │
│     ├── (5a) TRACKING  (camera-pose-only optimization)
│     │     ├── initialize_camera_pose()            [constant-velocity warm start]
│     │     ├── initialize_optimizer()              [torch.optim.Adam over cam_unnorm_rots/cam_trans]
│     │     └── loop: get_loss(..., tracking=True)
│     │           ├── utils/slam_helpers.py :: transform_to_frame(camera_grad=True, gaussians_grad=False)
│     │           │      └── utils/slam_external.py :: build_rotation()
│     │           ├── utils/slam_helpers.py :: transformed_params2rendervar() / transformed_params2depthplussilhouette()
│     │           │      └── utils/slam_helpers.py :: get_depth_and_silhouette()
│     │           ├── diff_gaussian_rasterization.GaussianRasterizer  ──▶  see (6) below (RGB pass + depth/sil pass)
│     │           ├── utils/slam_helpers.py :: l1_loss_v1()  /  utils/slam_external.py :: calc_ssim()
│     │           └── utils/eval_helpers.py :: report_loss() / report_progress()   [+ wandb logging]
│     │
│     ├── (5b) DENSIFICATION  (every `map_every`th frame)
│     │     └── add_new_gaussians()
│     │           ├── transform_to_frame() + transformed_params2depthplussilhouette() + Renderer   [silhouette render]
│     │           ├── get_pointcloud()               [back-project non-presence pixels]
│     │           └── initialize_new_params()        [append new nn.Parameter Gaussians]
│     │
│     ├── (5c) KEYFRAME-WINDOW MAPPING  (Gaussian-only optimization over selected keyframes)
│     │     ├── utils/keyframe_selection.py :: keyframe_selection_overlap()
│     │     ├── initialize_optimizer()               [Adam over means3D/rgb_colors/rotations/opacities/scales]
│     │     └── loop: get_loss(..., mapping=True)  →  (same render/loss chain as 5a, gaussians_grad=True)
│     │           ├── utils/slam_external.py :: prune_gaussians()
│     │           └── utils/slam_external.py :: densify()      [Gaussian-Splatting-style clone/split/prune]
│     │
│     └── (5d) CHECKPOINTING
│           └── utils/common_utils.py :: save_params_ckpt()
│
├── (6) DIFFERENTIABLE RENDER (invoked from 5a/5b/5c) — diff_gaussian_rasterization.GaussianRasterizer(cam)(**rendervar)
│     └── diff-gaussian-rasterization-w-depth/diff_gaussian_rasterization/__init__.py
│           └── _C.rasterize_gaussians / _C.rasterize_gaussians_backward   [compiled pybind11 ext, ext.cpp]
│                 └── rasterize_points.cu :: RasterizeGaussiansCUDA / RasterizeGaussiansBackwardCUDA
│                       └── cuda_rasterizer/rasterizer_impl.cu :: CudaRasterizer::Rasterizer::forward/backward
│                             ├── forward.cu  :: preprocessCUDA() → sort (CUB) → renderCUDA()
│                             └── backward.cu :: renderCUDA() → preprocessCUDA()   [analytic gradients]
│                                   └── auxiliary.h, config.h  (shared math/constants)
│
├── (7) FINAL EVALUATION — utils/eval_helpers.py :: eval()
│     ├── utils/eval_helpers.py :: evaluate_ate() / align()     [trajectory error]
│     ├── renders every frame again via the same slam_helpers/Renderer chain
│     └── PSNR / SSIM (pytorch_msssim) / LPIPS (torchmetrics) / depth RMSE
│
└── (8) SAVE — utils/common_utils.py :: save_params()  →  <workdir>/<run_name>/params.npz
```

**How the other entry points attach to this same core:**

```
scripts/iphone_demo.py            ─┐  imports get_loss, initialize_optimizer, initialize_params,
                                    │  initialize_camera_pose, get_pointcloud, add_new_gaussians
                                    ├─ directly FROM scripts/splatam.py (only cross-script import in the repo)
                                    │  + datasets/gradslam_datasets/geometryutils.py (ARKit pose conversion)
                                    └─ fuses the per-frame loop above with a CycloneDDS live-frame receive loop

scripts/nerfcapture2dataset.py     ─── capture-only (CycloneDDS → rgb/, depth/, transforms.json); no SLAM,
                                        no dependency on utils/ or datasets/ beyond writing files consumed later

scripts/gaussian_splatting.py      ─┐  same get_pointcloud/initialize_params/get_dataset pattern as splatam.py,
scripts/post_splatam_opt.py        ─┤  but route rendering/loss/densify through utils/gs_helpers.py +
                                    │  utils/gs_external.py instead of slam_helpers.py/slam_external.py
                                    │  (isotropic-only, GT-pose or checkpoint-pose driven, no tracking step)
                                    └─ post_splatam_opt.py additionally loads a prior splatam.py run's params.npz

scripts/eval_novel_view.py         ─── loads params.npz (load_scene_data) + dataset → utils/eval_helpers.py
                                        :: eval() / eval_nvs()   [no optimization, evaluation only]

scripts/export_ply.py              ─── loads params.npz → rgb_to_spherical_harmonic() → plyfile.PlyData.write()
                                        [no other repo dependencies]

viz_scripts/final_recon.py         ─┐  load params.npz → utils/recon_helpers.py::setup_camera() +
viz_scripts/online_recon.py        ─┤  utils/slam_helpers.py::get_depth_and_silhouette() +
                                    │  utils/slam_external.py::build_rotation() → diff_gaussian_rasterization
                                    │  directly (bypassing utils/slam_helpers.py's rendervar builders) →
                                    └─ Open3D interactive point-cloud display (online_recon.py adds timestep-
                                       gated playback via each Gaussian's stored `timestep`)
```

**Read order for onboarding:** `scripts/splatam.py` → `utils/slam_helpers.py` → `utils/slam_external.py` → `datasets/gradslam_datasets/basedataset.py` → `diff_gaussian_rasterization/__init__.py` covers ~80% of the algorithmic surface area; everything else in `utils/gs_*.py` and `scripts/{gaussian_splatting,post_splatam_opt}.py` is a structurally-identical sibling pipeline for the non-SLAM Gaussian-Splatting baseline/refinement.

---

## 8. Category Index & Orphaned Files

| Category | Files |
|---|---|
| **Tracking** | `scripts/splatam.py` (`get_loss` tracking branch, `initialize_camera_pose`), `scripts/iphone_demo.py`, `utils/slam_helpers.py` (`transform_to_frame`), `utils/keyframe_selection.py` |
| **Mapping** | `scripts/splatam.py` (`get_loss` mapping branch, keyframe-window loop), `scripts/iphone_demo.py`, `scripts/gaussian_splatting.py`, `scripts/post_splatam_opt.py`, `utils/keyframe_selection.py` |
| **Rendering** | `diff-gaussian-rasterization-w-depth/**` (all files), `utils/slam_helpers.py`, `utils/gs_helpers.py`, `utils/recon_helpers.py`, `viz_scripts/final_recon.py`, `viz_scripts/online_recon.py` |
| **Optimization** | `utils/slam_external.py`, `utils/gs_external.py` (densify/prune/LR-scheduling), `scripts/splatam.py`/`gaussian_splatting.py`/`post_splatam_opt.py` (Adam optimizer setup) |
| **Gaussian management** | `utils/slam_external.py`/`gs_external.py` (`densify`, `prune_gaussians`), `utils/neighbor_search.py` (unused), `scripts/export_ply.py`, `scripts/*.py`'s `add_new_gaussians`/`initialize_new_params` |
| **Dataset loading** | all of `datasets/gradslam_datasets/*.py`, `scripts/nerfcapture2dataset.py` |
| **Visualization** | `viz_scripts/final_recon.py`, `viz_scripts/online_recon.py`, `utils/eval_helpers.py` (`plot_rgbd_silhouette`) |
| **Evaluation** | `utils/eval_helpers.py`, `utils/gs_helpers.py` (eval subset), `scripts/eval_novel_view.py` |
| **Configuration** | everything in `configs/`, `datasets/gradslam_datasets/dataconfig.py`, `bash_scripts/*` |
| **Utilities** | `utils/common_utils.py`, `utils/recon_helpers.py`, `datasets/gradslam_datasets/datautils.py`, `datasets/gradslam_datasets/geometryutils.py` |
| **Training (baseline)** | `scripts/gaussian_splatting.py`, `scripts/post_splatam_opt.py`, `utils/gs_helpers.py`, `utils/gs_external.py` |

**Orphaned / dead code** (confirmed via repo-wide grep — zero importers anywhere):
- `utils/graphics_utils.py` — unused camera-math holdover from upstream 3DGS; superseded by `utils/recon_helpers.py`.
- `utils/neighbor_search.py` — unused FAISS k-NN neighbor-weighting utility (no caller wires it into densification).
- `datasets/_init_.py`, `configs/_init_.py`, `utils/_init_.py`, and `scripts/_init_.py` — all four are misnamed (`_init_.py`, single underscores, not `__init__.py`), so none function as real package initializers; three of the four (`configs`, `scripts`, `utils`) are completely empty, and `datasets/_init_.py`'s one line (`from .gradslam_datasets import *`) is never itself imported by anything. All four directories work only because Python 3 treats directories without an `__init__.py` as implicit PEP 420 namespace packages.
- `datasets/gradslam_datasets/record3d.py` references a `save_record3d_stream.py` companion script that does not exist in this repo.
- `datasets/gradslam_datasets/geometryutils.py` has a `__main__` self-test block importing a non-existent local `PinholeCamera` module (dead example code); most of its functions besides `relative_transformation` are otherwise unused by the current pipeline.

---

# Rasterization

Yes—in fact, I think you should go one step further than just describing "what each file does."

This repository is a fairly sophisticated CUDA renderer, and the easiest way to understand it is to describe it at **four levels**:

1. **High-level objective (Why does this repo exist?)**
2. **Overall rendering pipeline (How is the objective achieved?)**
3. **Software architecture (Which files/classes/functions are responsible?)**
4. **Detailed execution trace (Exactly what happens from the Python call until the image is produced)**

That document then becomes your reference whenever you modify or extend the rasterizer.

---

## 1. High-level objective

The entire repository exists to perform **differentiable rasterization of 3D Gaussian primitives**.

Instead of rendering triangles like a conventional graphics pipeline, it renders thousands (or millions) of **anisotropic 3D Gaussians**.

Given

* Gaussian centres
* covariance (or scale + rotation)
* colour
* opacity
* camera parameters

it produces

* RGB image
* depth image (this fork)
* all intermediate data required to compute gradients.

The important word is **differentiable**.

The renderer is designed so that PyTorch can backpropagate through the rendering process.

---

## 2. High-level pipeline

The repository implements something conceptually like this

```
Python

RasterizeGaussians()

        │
        ▼

C++ wrapper
(rasterize_points.cu)

        │
        ▼

CudaRasterizer::Rasterizer::forward()

        │
        ├───────────────► preprocess every Gaussian
        │
        ├───────────────► determine covered tiles
        │
        ├───────────────► duplicate Gaussians
        │
        ├───────────────► sort by tile and depth
        │
        ├───────────────► identify tile ranges
        │
        └───────────────► render every tile

        │
        ▼

RGB + depth
```

This is essentially the entire renderer.

---

## 3. Repository structure

One of the first sections of your document should simply explain every file.

---

### Public API

### rasterize_points.h

Declares

```
RasterizeGaussiansCUDA()
RasterizeGaussiansBackwardCUDA()
markVisible()
```

These are the functions Python eventually calls. 

---

### ext.cpp

Registers those functions using PyBind.

```
PYBIND11_MODULE(...)
```

so Python can import

```
diff_gaussian_rasterization._C
```

and invoke CUDA kernels. 

---

### setup.py

Builds the extension.

Compiles

```
forward.cu
backward.cu
rasterizer_impl.cu
rasterize_points.cu
ext.cpp
```

into a PyTorch CUDA extension. 

---

### Core renderer

---

#### rasterizer.h

Defines the main interface

```
class Rasterizer
```

with

```
forward()

backward()

markVisible()
```

This is the heart of the renderer.

Everything eventually passes through this class. 

---

#### rasterizer_impl.cu

This is the orchestration layer.

It does **not** implement rendering itself.

Instead it

* allocates temporary memory
* launches kernels
* performs sorting
* duplicates Gaussians
* builds tile ranges
* invokes the renderer

It is essentially the **pipeline controller**.

---

#### rasterizer_impl.h

Defines the temporary memory layouts.

Examples

```
GeometryState

ImageState

BinningState
```

These are simply structured views over large CUDA buffers.

Instead of allocating

```
cudaMalloc(depths)

cudaMalloc(colors)

cudaMalloc(radii)
```

the code allocates one large chunk

```
geometryBuffer()
```

and maps it into

```
depths
colors
radii
...
```

using

```
GeometryState::fromChunk()
```

This greatly reduces allocation overhead. 

---

### Forward rendering

---

#### forward.h

Contains declarations for

```
preprocess()

render()
```

These are the two major stages of forward rendering. 

---

#### forward.cu

Implements the actual CUDA kernels.

This is where

* covariance computation
* SH colour evaluation
* screen-space projection
* alpha blending
* depth rendering

actually happen.

This is arguably the most important file in the repository.

---

### Backward pass

---

#### backward.h

Declares

```
BACKWARD::render()

BACKWARD::preprocess()
```



---

#### backward.cu

Implements

* gradients of alpha compositing
* gradients of colour
* gradients of covariance
* gradients of scale
* gradients of rotation
* gradients of SH coefficients
* gradients of Gaussian centres

Everything required for optimisation.

---

### Utility code

---

#### auxiliary.h

Contains many helper functions.

Examples

```
transformPoint4x4()

transformPoint4x3()

transformVec4x3()

getRect()

sigmoid()

in_frustum()
```

as well as spherical harmonic constants.

Almost every CUDA kernel includes this header. 

---

#### config.h

Contains compile-time constants

```
BLOCK_X

BLOCK_Y

NUM_CHANNELS
```

These determine CUDA tile size and image channels. 

---

## 4. Execution flow

This is probably the most valuable section.

Instead of listing files, follow one rendering request.

---

### Step 1

Python calls

```
RasterizeGaussiansCUDA()
```

in

```
rasterize_points.cu
```

---

### Step 2

This function

* validates tensors
* allocates output tensors
* creates geometry/image/binning buffers
* calls

```
CudaRasterizer::Rasterizer::forward()
```

---

### Step 3

Inside

```
Rasterizer::forward()
```

the renderer

#### A.

Preprocesses every Gaussian

using

```
FORWARD::preprocess()
```

This computes

* projected mean
* covariance
* colour
* radius
* tiles touched
* conic representation

---

#### B.

Counts tiles touched

Every Gaussian computes

```
tiles_touched
```

---

#### C.

Prefix scan

Computes

```
point_offsets
```

so the renderer knows where duplicated Gaussians will be stored.

---

#### D.

Duplicate Gaussians

Each Gaussian is copied once for every tile it overlaps.

---

#### E.

Generate sort keys

Each duplicated Gaussian receives a 64-bit key approximately of the form

```
(tile ID << 32) | depth
```

so duplicates are grouped first by tile and then ordered by depth.

---

#### F.

Radix sort

The duplicates are sorted according to those keys.

---

#### G.

Identify tile ranges

The sorted list is scanned to determine, for each tile, the contiguous range of Gaussians that affect it.

---

#### H.

Render

`FORWARD::render()` launches one CUDA block per image tile. Each block loads the Gaussians for its tile, evaluates the Gaussian contribution for every pixel, alpha-blends colours, tracks transmittance, and produces RGB and depth outputs.

---
