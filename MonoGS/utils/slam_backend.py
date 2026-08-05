import os
import random
import time

import torch
import torch.multiprocessing as mp
from tqdm import tqdm

from gaussian_splatting.gaussian_renderer import render
from gaussian_splatting.utils.loss_utils import l1_loss, ssim
from utils.logging_utils import Log
from utils.mask_utils import adaptive_random_sampling, get_pixel_info
from utils.multiprocessing_utils import clone_obj
from utils.pose_utils import update_pose
from utils.slam_utils import get_loss_mapping, get_loss_mapping_sparse


class BackEnd(mp.Process):
    def __init__(self, config):
        super().__init__()
        self.config = config
        self.gaussians = None
        self.pipeline_params = None
        self.opt_params = None
        self.background = None
        self.cameras_extent = None
        self.frontend_queue = None
        self.backend_queue = None
        self.live_mode = False

        self.pause = False
        self.device = "cuda"
        self.dtype = torch.float32
        self.monocular = config["Training"]["monocular"]
        self.iteration_count = 0
        self.last_sent = 0
        self.occ_aware_visibility = {}
        self.viewpoints = {}
        self.current_window = []
        self.initialized = not self.monocular
        self.keyframe_optimizers = None
        self.pending_opacity_reset = False

    def set_hyperparams(self):
        self.save_results = self.config["Results"]["save_results"]

        self.init_itr_num = self.config["Training"]["init_itr_num"]
        self.init_gaussian_update = self.config["Training"]["init_gaussian_update"]
        self.init_gaussian_reset = self.config["Training"]["init_gaussian_reset"]
        self.init_gaussian_th = self.config["Training"]["init_gaussian_th"]
        self.init_gaussian_extent = (
            self.cameras_extent * self.config["Training"]["init_gaussian_extent"]
        )
        self.mapping_itr_num = self.config["Training"]["mapping_itr_num"]
        self.gaussian_update_every = self.config["Training"]["gaussian_update_every"]
        self.gaussian_update_offset = self.config["Training"]["gaussian_update_offset"]
        self.gaussian_th = self.config["Training"]["gaussian_th"]
        self.gaussian_extent = (
            self.cameras_extent * self.config["Training"]["gaussian_extent"]
        )
        self.gaussian_reset = self.config["Training"]["gaussian_reset"]
        self.size_threshold = self.config["Training"]["size_threshold"]
        self.window_size = self.config["Training"]["window_size"]
        self.single_thread = (
            self.config["Dataset"]["single_thread"]
            if "single_thread" in self.config["Dataset"]
            else False
        )

    def add_next_kf(self, frame_idx, viewpoint, init=False, scale=2.0, depth_map=None):
        self._compute_novelty_mask(viewpoint)
        self.gaussians.extend_from_pcd_seq(
            viewpoint, kf_id=frame_idx, init=init, scale=scale, depthmap=depth_map
        )

    def _compute_novelty_mask(self, viewpoint):
        """Port of SPLATONIC's per-keyframe "novelty/unseen" mask
        (SPLATONIC/scripts/splatam_sparse.py add_new_gaussians, ~line 556-599):
        pixels where the EXISTING map (before this keyframe's new Gaussians
        are added) doesn't yet explain the observation -- either barely
        covered by any Gaussian, or its rendered depth disagrees badly with
        the sensor depth. Stored once as viewpoint.novelty_mask and never
        refreshed afterward (a permanent snapshot), matching SPLATONIC's own
        semantics exactly. Unioned into that keyframe's sparse mapping pixel
        sample later (see map()) so newly-observed/poorly-modeled regions
        keep getting supervision even on sparse passes.

        Reuses MonoGS's existing dense render() output directly -- opacity
        (accumulated 1-T alpha) is structurally identical to SPLATONIC's
        silhouette, so no new CUDA kernel work is needed here, just an extra
        render call against the PRE-update Gaussian map.
        """
        viewpoint.novelty_mask = None
        if not self.config["Training"].get("use_splatonic", False):
            return  # dense-only baseline never consumes this -- skip the extra render entirely
        if self.gaussians.get_xyz.shape[0] == 0:
            return  # no existing map yet (first keyframe) -- nothing is "novel" relative to nothing

        with torch.no_grad():
            render_pkg = render(
                viewpoint, self.gaussians, self.pipeline_params, self.background
            )
            opacity = render_pkg["opacity"][0]
            rendered_depth = render_pkg["depth"][0]

            novelty_opacity_threshold = self.config["Training"].get(
                "novelty_opacity_threshold", 0.5
            )
            novelty_mask = opacity < novelty_opacity_threshold

            if viewpoint.depth is not None:
                gt_depth = torch.from_numpy(viewpoint.depth).to(
                    device=rendered_depth.device, dtype=rendered_depth.dtype
                )
                valid_gt = gt_depth > 0
                depth_error = (rendered_depth - gt_depth).abs() * valid_gt
                if valid_gt.any():
                    median_error = depth_error[valid_gt].median()
                    bad_depth = (
                        valid_gt
                        & (rendered_depth > gt_depth)
                        & (depth_error > 50 * median_error)
                    )
                    novelty_mask = novelty_mask | bad_depth

            viewpoint.novelty_mask = novelty_mask

    def reset(self):
        self.iteration_count = 0
        self.occ_aware_visibility = {}
        self.viewpoints = {}
        self.current_window = []
        self.initialized = not self.monocular
        self.keyframe_optimizers = None
        self.pending_opacity_reset = False

        # remove all gaussians
        self.gaussians.prune_points(self.gaussians.unique_kfIDs >= 0)
        # remove everything from the queues
        while not self.backend_queue.empty():
            self.backend_queue.get()

    def initialize_map(self, cur_frame_idx, viewpoint):
        for mapping_iteration in range(self.init_itr_num):
            self.iteration_count += 1
            render_pkg = render(
                viewpoint, self.gaussians, self.pipeline_params, self.background
            )
            (
                image,
                viewspace_point_tensor,
                visibility_filter,
                radii,
                depth,
                opacity,
                n_touched,
            ) = (
                render_pkg["render"],
                render_pkg["viewspace_points"],
                render_pkg["visibility_filter"],
                render_pkg["radii"],
                render_pkg["depth"],
                render_pkg["opacity"],
                render_pkg["n_touched"],
            )
            loss_init = get_loss_mapping(
                self.config, image, depth, viewpoint, opacity, initialization=True
            )
            loss_init.backward()

            with torch.no_grad():
                self.gaussians.max_radii2D[visibility_filter] = torch.max(
                    self.gaussians.max_radii2D[visibility_filter],
                    radii[visibility_filter],
                )
                self.gaussians.add_densification_stats(
                    viewspace_point_tensor, visibility_filter
                )
                if mapping_iteration % self.init_gaussian_update == 0:
                    self.gaussians.densify_and_prune(
                        self.opt_params.densify_grad_threshold,
                        self.init_gaussian_th,
                        self.init_gaussian_extent,
                        None,
                    )

                if self.iteration_count == self.init_gaussian_reset or (
                    self.iteration_count == self.opt_params.densify_from_iter
                ):
                    self.gaussians.reset_opacity()

                self.gaussians.optimizer.step()
                self.gaussians.optimizer.zero_grad(set_to_none=True)

        self.occ_aware_visibility[cur_frame_idx] = (n_touched > 0).long()
        Log("Initialized map")
        return render_pkg

    def map(self, current_window, prune=False, iters=1):
        if len(current_window) == 0:
            return

        viewpoint_stack = [self.viewpoints[kf_idx] for kf_idx in current_window]
        random_viewpoint_stack = []
        frames_to_optimize = self.config["Training"]["pose_window"]

        current_window_set = set(current_window)
        for cam_idx, viewpoint in self.viewpoints.items():
            if cam_idx in current_window_set:
                continue
            random_viewpoint_stack.append(viewpoint)

        FLIP = self.config["Training"].get("flip_ratio", 4)
        use_splatonic = self.config["Training"].get("use_splatonic", False)
        tile_size = self.config["Training"].get("mapping_tile_size", 4)

        for _ in range(iters):
            self.iteration_count += 1
            self.last_sent += 1

            # A pending opacity reset forces every frame processed this
            # iteration to dense, regardless of each viewpoint's own FLIP
            # phase (see the per-keyframe counters below) -- guarantees the
            # reset gets a complete, trustworthy visibility snapshot on a
            # fixed, small delay (the iteration right after it becomes due)
            # instead of waiting for every keyframe's independent counter to
            # coincidentally land on dense at the same time, which with
            # per-keyframe-independent counters could take a very long time
            # or never happen at all.
            force_full_dense = self.pending_opacity_reset

            loss_mapping = 0
            viewspace_point_tensor_acm = []
            visibility_filter_acm = []
            radii_acm = []
            n_touched_acm = []

            keyframes_opt = []

            for cam_idx in range(len(current_window)):
                viewpoint = viewpoint_stack[cam_idx]
                keyframes_opt.append(viewpoint)
                # current_window[0] is the newest keyframe (add_to_window in
                # slam_frontend.py prepends: window = [cur_frame_idx] + window).
                # SPLATONIC's own reference mapping loop guarantees the current
                # frame is always densely supervised (splatam_sparse.py: the
                # current-frame branch hardcodes counter=0, forcing its dense
                # loss) -- the newest keyframe has the least-modeled geometry
                # (often just densified this step) and needs full supervision
                # rather than a 3-in-4 chance of a sparse pass like every other
                # window frame.
                #
                # Every OTHER window frame gets its own persistent, independent
                # FLIP counter (a plain attribute on the Camera object, not a
                # single counter shared by the whole window) -- matching
                # SPLATONIC's own per-keyframe counter (splatam_sparse.py:
                # keyframe_list[i]['counter'], incremented only when that
                # specific keyframe is processed, fully decoupled from every
                # other keyframe's phase). The previous single global
                # map_iter_counter made every window frame dense/sparse in
                # lockstep on the same iteration, which SPLATONIC never does.
                if not use_splatonic or cam_idx == 0 or force_full_dense:
                    frame_use_dense = True
                else:
                    flip_counter = getattr(viewpoint, "flip_counter", 0)
                    frame_use_dense = flip_counter == 0
                    viewpoint.flip_counter = (flip_counter + 1) % FLIP
                if frame_use_dense:
                    render_pkg = render(
                        viewpoint, self.gaussians, self.pipeline_params, self.background
                    )
                    (
                        image,
                        viewspace_point_tensor,
                        visibility_filter,
                        radii,
                        depth,
                        opacity,
                        n_touched,
                    ) = (
                        render_pkg["render"],
                        render_pkg["viewspace_points"],
                        render_pkg["visibility_filter"],
                        render_pkg["radii"],
                        render_pkg["depth"],
                        render_pkg["opacity"],
                        render_pkg["n_touched"],
                    )
                    loss_mapping += get_loss_mapping(
                        self.config, image, depth, viewpoint, opacity
                    )
                    viewspace_point_tensor_acm.append(viewspace_point_tensor)
                    visibility_filter_acm.append(visibility_filter)
                    radii_acm.append(radii)
                    n_touched_acm.append(n_touched)
                else:
                    gt_image = viewpoint.original_image.cuda()
                    H, W = gt_image.shape[1], gt_image.shape[2]
                    # Matches SPLATONIC's own reference sparse mapping density
                    # (SPLATONIC/scripts/splatam_sparse.py: (H//4)*(W//4)) --
                    # the previous (H*W)//64 budget was 4x sparser, and with
                    # mapping_tile_size=4 (16 pixels/tile) averaged only 0.25
                    # samples per tile, leaving most tiles with zero
                    # supervision on a sparse mapping iteration.
                    num_sparse = max(64, (H // 4) * (W // 4))
                    pixel_mask = adaptive_random_sampling(gt_image, num_sparse)
                    # Union in this keyframe's own "novelty/unseen" mask, a
                    # permanent snapshot taken once at keyframe-insertion time
                    # (see _compute_novelty_mask) -- matches SPLATONIC's own
                    # per-keyframe novelty union (splatam_sparse.py:1065-1066),
                    # giving newly-observed/poorly-modeled regions extra
                    # supervision on every sparse revisit, not just when the
                    # random adaptive sample happens to land on them.
                    novelty_mask = getattr(viewpoint, "novelty_mask", None)
                    if novelty_mask is not None:
                        pixel_mask = pixel_mask | novelty_mask
                    pixel_range, pixel_coords = get_pixel_info(
                        pixel_mask, tile_size=tile_size
                    )
                    render_pkg = render(
                        viewpoint, self.gaussians, self.pipeline_params, self.background,
                        pixel_range=pixel_range,
                        pixel_coords=pixel_coords,
                        use_map_rasterizer=True,
                    )
                    (image, depth, opacity, n_touched) = (
                        render_pkg["render"],
                        render_pkg["depth"],
                        render_pkg["opacity"],
                        render_pkg["n_touched"],
                    )
                    loss_mapping += get_loss_mapping_sparse(
                        self.config, image, depth, opacity, viewpoint,
                        pixel_mask=pixel_mask,
                    )
                    n_touched_acm.append(n_touched)

            for cam_idx in torch.randperm(len(random_viewpoint_stack))[:2]:
                viewpoint = random_viewpoint_stack[cam_idx]
                if not use_splatonic or force_full_dense:
                    frame_use_dense = True
                else:
                    flip_counter = getattr(viewpoint, "flip_counter", 0)
                    frame_use_dense = flip_counter == 0
                    viewpoint.flip_counter = (flip_counter + 1) % FLIP
                if frame_use_dense:
                    render_pkg = render(
                        viewpoint, self.gaussians, self.pipeline_params, self.background
                    )
                    (
                        image,
                        viewspace_point_tensor,
                        visibility_filter,
                        radii,
                        depth,
                        opacity,
                        n_touched,
                    ) = (
                        render_pkg["render"],
                        render_pkg["viewspace_points"],
                        render_pkg["visibility_filter"],
                        render_pkg["radii"],
                        render_pkg["depth"],
                        render_pkg["opacity"],
                        render_pkg["n_touched"],
                    )
                    loss_mapping += get_loss_mapping(
                        self.config, image, depth, viewpoint, opacity
                    )
                    viewspace_point_tensor_acm.append(viewspace_point_tensor)
                    visibility_filter_acm.append(visibility_filter)
                    radii_acm.append(radii)
                else:
                    gt_image = viewpoint.original_image.cuda()
                    H, W = gt_image.shape[1], gt_image.shape[2]
                    # Matches SPLATONIC's own reference sparse mapping density
                    # (SPLATONIC/scripts/splatam_sparse.py: (H//4)*(W//4)) --
                    # the previous (H*W)//64 budget was 4x sparser, and with
                    # mapping_tile_size=4 (16 pixels/tile) averaged only 0.25
                    # samples per tile, leaving most tiles with zero
                    # supervision on a sparse mapping iteration.
                    num_sparse = max(64, (H // 4) * (W // 4))
                    pixel_mask = adaptive_random_sampling(gt_image, num_sparse)
                    # Union in this keyframe's own "novelty/unseen" mask, a
                    # permanent snapshot taken once at keyframe-insertion time
                    # (see _compute_novelty_mask) -- matches SPLATONIC's own
                    # per-keyframe novelty union (splatam_sparse.py:1065-1066),
                    # giving newly-observed/poorly-modeled regions extra
                    # supervision on every sparse revisit, not just when the
                    # random adaptive sample happens to land on them.
                    novelty_mask = getattr(viewpoint, "novelty_mask", None)
                    if novelty_mask is not None:
                        pixel_mask = pixel_mask | novelty_mask
                    pixel_range, pixel_coords = get_pixel_info(
                        pixel_mask, tile_size=tile_size
                    )
                    render_pkg = render(
                        viewpoint, self.gaussians, self.pipeline_params, self.background,
                        pixel_range=pixel_range,
                        pixel_coords=pixel_coords,
                        use_map_rasterizer=True,
                    )
                    (image, depth, opacity) = (
                        render_pkg["render"],
                        render_pkg["depth"],
                        render_pkg["opacity"],
                    )
                    loss_mapping += get_loss_mapping_sparse(
                        self.config, image, depth, opacity, viewpoint,
                        pixel_mask=pixel_mask,
                    )

            scaling = self.gaussians.get_scaling
            isotropic_loss = torch.abs(scaling - scaling.mean(dim=1).view(-1, 1))
            loss_mapping += 10 * isotropic_loss.mean()
            loss_mapping.backward()
            gaussian_split = False
            ## Deinsifying / Pruning Gaussians
            with torch.no_grad():
                self.occ_aware_visibility = {}
                for idx in range((len(current_window))):
                    kf_idx = current_window[idx]
                    n_touched = n_touched_acm[idx]
                    self.occ_aware_visibility[kf_idx] = (n_touched > 0).long()

                # # compute the visibility of the gaussians
                # # Only prune on the last iteration and when we have full window
                if prune:
                    if len(current_window) == self.config["Training"]["window_size"]:
                        prune_mode = self.config["Training"]["prune_mode"]
                        prune_coviz = 3
                        self.gaussians.n_obs.fill_(0)
                        for window_idx, visibility in self.occ_aware_visibility.items():
                            self.gaussians.n_obs += visibility.cpu()
                        to_prune = None
                        if prune_mode == "odometry":
                            to_prune = self.gaussians.n_obs < 3
                            # make sure we don't split the gaussians, break here.
                        if prune_mode == "slam":
                            # only prune keyframes which are relatively new
                            sorted_window = sorted(current_window, reverse=True)
                            mask = self.gaussians.unique_kfIDs >= sorted_window[2]
                            if not self.initialized:
                                mask = self.gaussians.unique_kfIDs >= 0
                            to_prune = torch.logical_and(
                                self.gaussians.n_obs <= prune_coviz, mask
                            )
                        if to_prune is not None and self.monocular:
                            self.gaussians.prune_points(to_prune.cuda())
                            for idx in range((len(current_window))):
                                current_idx = current_window[idx]
                                self.occ_aware_visibility[current_idx] = (
                                    self.occ_aware_visibility[current_idx][~to_prune]
                                )
                        if not self.initialized:
                            self.initialized = True
                            Log("Initialized SLAM")
                        # # make sure we don't split the gaussians, break here.
                    return False

                for idx in range(len(viewspace_point_tensor_acm)):
                    self.gaussians.max_radii2D[visibility_filter_acm[idx]] = torch.max(
                        self.gaussians.max_radii2D[visibility_filter_acm[idx]],
                        radii_acm[idx][visibility_filter_acm[idx]],
                    )
                    self.gaussians.add_densification_stats(
                        viewspace_point_tensor_acm[idx], visibility_filter_acm[idx]
                    )

                update_gaussian = (
                    self.iteration_count % self.gaussian_update_every
                    == self.gaussian_update_offset
                )
                if update_gaussian:
                    self.gaussians.densify_and_prune(
                        self.opt_params.densify_grad_threshold,
                        self.gaussian_th,
                        self.gaussian_extent,
                        self.size_threshold,
                    )
                    gaussian_split = True

                ## Opacity reset
                # visibility_filter_acm is only populated by frames that
                # rendered densely this iteration -- with per-keyframe-
                # independent FLIP counters (see the per-frame loops above),
                # different window frames can be dense/sparse on completely
                # different iterations, so "wait for a naturally fully-dense
                # iteration" could take a very long time or never happen.
                # reset_opacity_nonvisible() treats an empty/partial filter
                # list as "nothing [else] is visible" and would wipe or
                # corrupt Gaussians that are genuinely visible in a window
                # frame that just wasn't rendered this iteration -- so
                # instead, once due, force_full_dense (set above, at the top
                # of this same iteration loop) makes EVERY frame processed
                # this iteration dense, guaranteeing a complete, trustworthy
                # visibility_filter_acm on a fixed one-iteration delay
                # (pending_opacity_reset is read at the top of iteration N+1
                # to decide forcing, having been set at the bottom of
                # iteration N here) rather than an indefinite wait.
                if (self.iteration_count % self.gaussian_reset) == 0 and (
                    not update_gaussian
                ):
                    if not self.pending_opacity_reset and os.environ.get("SPLATONIC_DEBUG_OPACITY_RESET"):
                        Log(f"DBG_OPACITY_RESET due at iteration={self.iteration_count} "
                            f"-- will force full-dense and apply next iteration")
                    self.pending_opacity_reset = True

                if (
                    self.pending_opacity_reset
                    and force_full_dense
                    and (not update_gaussian)
                    and visibility_filter_acm
                ):
                    Log("Resetting the opacity of non-visible Gaussians")
                    if os.environ.get("SPLATONIC_DEBUG_OPACITY_RESET"):
                        Log(f"DBG_OPACITY_RESET applying at iteration={self.iteration_count} "
                            f"visibility_filter_acm_len={len(visibility_filter_acm)}")
                    self.gaussians.reset_opacity_nonvisible(visibility_filter_acm)
                    gaussian_split = True
                    self.pending_opacity_reset = False

                self.gaussians.optimizer.step()
                self.gaussians.optimizer.zero_grad(set_to_none=True)
                self.gaussians.update_learning_rate(self.iteration_count)
                self.keyframe_optimizers.step()
                self.keyframe_optimizers.zero_grad(set_to_none=True)
                # Pose update
                for cam_idx in range(min(frames_to_optimize, len(current_window))):
                    viewpoint = viewpoint_stack[cam_idx]
                    if viewpoint.uid == 0:
                        continue
                    update_pose(viewpoint)
        return gaussian_split

    def color_refinement(self):
        Log("Starting color refinement")

        iteration_total = 26000
        for iteration in tqdm(range(1, iteration_total + 1)):
            viewpoint_idx_stack = list(self.viewpoints.keys())
            viewpoint_cam_idx = viewpoint_idx_stack.pop(
                random.randint(0, len(viewpoint_idx_stack) - 1)
            )
            viewpoint_cam = self.viewpoints[viewpoint_cam_idx]
            render_pkg = render(
                viewpoint_cam, self.gaussians, self.pipeline_params, self.background
            )
            image, visibility_filter, radii = (
                render_pkg["render"],
                render_pkg["visibility_filter"],
                render_pkg["radii"],
            )

            gt_image = viewpoint_cam.original_image.cuda()
            Ll1 = l1_loss(image, gt_image)
            loss = (1.0 - self.opt_params.lambda_dssim) * (
                Ll1
            ) + self.opt_params.lambda_dssim * (1.0 - ssim(image, gt_image))
            loss.backward()
            with torch.no_grad():
                self.gaussians.max_radii2D[visibility_filter] = torch.max(
                    self.gaussians.max_radii2D[visibility_filter],
                    radii[visibility_filter],
                )
                self.gaussians.optimizer.step()
                self.gaussians.optimizer.zero_grad(set_to_none=True)
                self.gaussians.update_learning_rate(iteration)
        Log("Map refinement done")

    def push_to_frontend(self, tag=None):
        self.last_sent = 0
        keyframes = []
        for kf_idx in self.current_window:
            kf = self.viewpoints[kf_idx]
            keyframes.append((kf_idx, kf.R.clone(), kf.T.clone()))
        if tag is None:
            tag = "sync_backend"

        msg = [tag, clone_obj(self.gaussians), self.occ_aware_visibility, keyframes]
        self.frontend_queue.put(msg)

    def run(self):
        while True:
            if self.backend_queue.empty():
                if self.pause:
                    time.sleep(0.01)
                    continue
                if len(self.current_window) == 0:
                    time.sleep(0.01)
                    continue

                if self.single_thread:
                    time.sleep(0.01)
                    continue
                self.map(self.current_window)
                if self.last_sent >= 10:
                    self.map(self.current_window, prune=True, iters=10)
                    self.push_to_frontend()
            else:
                data = self.backend_queue.get()
                if data[0] == "stop":
                    break
                elif data[0] == "pause":
                    self.pause = True
                elif data[0] == "unpause":
                    self.pause = False
                elif data[0] == "color_refinement":
                    self.color_refinement()
                    self.push_to_frontend()
                elif data[0] == "init":
                    cur_frame_idx = data[1]
                    viewpoint = data[2]
                    depth_map = data[3]
                    Log("Resetting the system")
                    self.reset()

                    self.viewpoints[cur_frame_idx] = viewpoint
                    self.add_next_kf(
                        cur_frame_idx, viewpoint, depth_map=depth_map, init=True
                    )
                    self.initialize_map(cur_frame_idx, viewpoint)
                    self.push_to_frontend("init")

                elif data[0] == "keyframe":
                    cur_frame_idx = data[1]
                    viewpoint = data[2]
                    current_window = data[3]
                    depth_map = data[4]

                    self.viewpoints[cur_frame_idx] = viewpoint
                    self.current_window = current_window
                    self.add_next_kf(cur_frame_idx, viewpoint, depth_map=depth_map)

                    opt_params = []
                    frames_to_optimize = self.config["Training"]["pose_window"]
                    iter_per_kf = self.mapping_itr_num if self.single_thread else 10
                    if not self.initialized:
                        if (
                            len(self.current_window)
                            == self.config["Training"]["window_size"]
                        ):
                            frames_to_optimize = (
                                self.config["Training"]["window_size"] - 1
                            )
                            iter_per_kf = 50 if self.live_mode else 300
                            Log("Performing initial BA for initialization")
                        else:
                            iter_per_kf = self.mapping_itr_num
                    for cam_idx in range(len(self.current_window)):
                        if self.current_window[cam_idx] == 0:
                            continue
                        viewpoint = self.viewpoints[current_window[cam_idx]]
                        if cam_idx < frames_to_optimize:
                            opt_params.append(
                                {
                                    "params": [viewpoint.cam_rot_delta],
                                    "lr": self.config["Training"]["lr"]["cam_rot_delta"]
                                    * 0.5,
                                    "name": "rot_{}".format(viewpoint.uid),
                                }
                            )
                            opt_params.append(
                                {
                                    "params": [viewpoint.cam_trans_delta],
                                    "lr": self.config["Training"]["lr"][
                                        "cam_trans_delta"
                                    ]
                                    * 0.5,
                                    "name": "trans_{}".format(viewpoint.uid),
                                }
                            )
                        opt_params.append(
                            {
                                "params": [viewpoint.exposure_a],
                                "lr": 0.01,
                                "name": "exposure_a_{}".format(viewpoint.uid),
                            }
                        )
                        opt_params.append(
                            {
                                "params": [viewpoint.exposure_b],
                                "lr": 0.01,
                                "name": "exposure_b_{}".format(viewpoint.uid),
                            }
                        )
                    self.keyframe_optimizers = torch.optim.Adam(opt_params)

                    self.map(self.current_window, iters=iter_per_kf)
                    self.map(self.current_window, prune=True)
                    self.push_to_frontend("keyframe")
                else:
                    raise Exception("Unprocessed data", data)
        while not self.backend_queue.empty():
            self.backend_queue.get()
        while not self.frontend_queue.empty():
            self.frontend_queue.get()
        return
