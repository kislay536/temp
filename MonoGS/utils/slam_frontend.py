import os
import time

import numpy as np
import torch
import torch.multiprocessing as mp

from gaussian_splatting.gaussian_renderer import render
from gaussian_splatting.utils.graphics_utils import getProjectionMatrix2, getWorld2View2
from gui import gui_utils
from utils.camera_utils import Camera
from utils.eval_utils import eval_ate, save_gaussians
from utils.logging_utils import Log
from utils.mask_utils import generate_random_mask, generate_random_mask_k, get_pixel_info
from utils.multiprocessing_utils import clone_obj
from utils.pose_utils import update_pose
from utils.slam_utils import get_loss_tracking, get_loss_tracking_sparse, get_median_depth


class FrontEnd(mp.Process):
    def __init__(self, config):
        super().__init__()
        self.config = config
        self.background = None
        self.pipeline_params = None
        self.frontend_queue = None
        self.backend_queue = None
        self.q_main2vis = None
        self.q_vis2main = None

        self.initialized = False
        self.kf_indices = []
        self.monocular = config["Training"]["monocular"]
        self.iteration_count = 0
        self.occ_aware_visibility = {}
        self.current_window = []

        self.reset = True
        self.requested_init = False
        self.requested_keyframe = 0
        self.use_every_n_frames = 1

        self.gaussians = None
        self.cameras = dict()
        self.device = "cuda:0"
        self.pause = False

    def set_hyperparams(self):
        self.save_dir = self.config["Results"]["save_dir"]
        self.save_results = self.config["Results"]["save_results"]
        self.save_trj = self.config["Results"]["save_trj"]
        self.save_trj_kf_intv = self.config["Results"]["save_trj_kf_intv"]

        self.tracking_itr_num = self.config["Training"]["tracking_itr_num"]
        self.kf_interval = self.config["Training"]["kf_interval"]
        self.window_size = self.config["Training"]["window_size"]
        self.single_thread = self.config["Training"]["single_thread"]

    def add_new_keyframe(self, cur_frame_idx, depth=None, opacity=None, init=False):
        rgb_boundary_threshold = self.config["Training"]["rgb_boundary_threshold"]
        self.kf_indices.append(cur_frame_idx)
        viewpoint = self.cameras[cur_frame_idx]
        gt_img = viewpoint.original_image.cuda()
        valid_rgb = (gt_img.sum(dim=0) > rgb_boundary_threshold)[None]
        if self.monocular:
            if depth is None:
                initial_depth = 2 * torch.ones(1, gt_img.shape[1], gt_img.shape[2])
                initial_depth += torch.randn_like(initial_depth) * 0.3
            else:
                depth = depth.detach().clone()
                opacity = opacity.detach()
                use_inv_depth = False
                if use_inv_depth:
                    inv_depth = 1.0 / depth
                    inv_median_depth, inv_std, valid_mask = get_median_depth(
                        inv_depth, opacity, mask=valid_rgb, return_std=True
                    )
                    invalid_depth_mask = torch.logical_or(
                        inv_depth > inv_median_depth + inv_std,
                        inv_depth < inv_median_depth - inv_std,
                    )
                    invalid_depth_mask = torch.logical_or(
                        invalid_depth_mask, ~valid_mask
                    )
                    inv_depth[invalid_depth_mask] = inv_median_depth
                    inv_initial_depth = inv_depth + torch.randn_like(
                        inv_depth
                    ) * torch.where(invalid_depth_mask, inv_std * 0.5, inv_std * 0.2)
                    initial_depth = 1.0 / inv_initial_depth
                else:
                    median_depth, std, valid_mask = get_median_depth(
                        depth, opacity, mask=valid_rgb, return_std=True
                    )
                    invalid_depth_mask = torch.logical_or(
                        depth > median_depth + std, depth < median_depth - std
                    )
                    invalid_depth_mask = torch.logical_or(
                        invalid_depth_mask, ~valid_mask
                    )
                    depth[invalid_depth_mask] = median_depth
                    initial_depth = depth + torch.randn_like(depth) * torch.where(
                        invalid_depth_mask, std * 0.5, std * 0.2
                    )

                initial_depth[~valid_rgb] = 0  # Ignore the invalid rgb pixels
            return initial_depth.cpu().numpy()[0]
        # use the observed depth
        initial_depth = torch.from_numpy(viewpoint.depth).unsqueeze(0)
        initial_depth[~valid_rgb.cpu()] = 0  # Ignore the invalid rgb pixels
        return initial_depth[0].numpy()

    def initialize(self, cur_frame_idx, viewpoint):
        self.initialized = not self.monocular
        self.kf_indices = []
        self.iteration_count = 0
        self.occ_aware_visibility = {}
        self.current_window = []
        # remove everything from the queues
        while not self.backend_queue.empty():
            self.backend_queue.get()

        # Initialise the frame at the ground truth pose
        viewpoint.update_RT(viewpoint.R_gt, viewpoint.T_gt)

        self.kf_indices = []
        depth_map = self.add_new_keyframe(cur_frame_idx, init=True)
        self.request_init(cur_frame_idx, viewpoint, depth_map)
        self.reset = False

    def _debug_isolate_rotation(
        self, cur_frame_idx, viewpoint, R_start, T_start,
        exposure_a_start, exposure_b_start, pixel_range, pixel_coords, pixel_mask,
        true_step_deg,
    ):
        """
        One-off diagnostic (not part of the live trajectory): from the same
        starting pose, optimize ONLY cam_rot_delta (translation and exposure
        frozen) under the dense loss and under the sparse loss separately,
        and compare the resulting rotation-only minima directly. Restores
        viewpoint's real post-tracking state before returning so the live
        SLAM sequence is unaffected. See port/STATUS.md section 9.
        """
        R_real = viewpoint.R.detach().clone()
        T_real = viewpoint.T.detach().clone()
        ea_real = viewpoint.exposure_a.detach().clone()
        eb_real = viewpoint.exposure_b.detach().clone()

        def run(use_sparse, n_iters=100):
            viewpoint.update_RT(R_start, T_start)
            with torch.no_grad():
                viewpoint.cam_rot_delta.data.fill_(0)
                viewpoint.cam_trans_delta.data.fill_(0)
                viewpoint.exposure_a.data.copy_(exposure_a_start)
                viewpoint.exposure_b.data.copy_(exposure_b_start)
            opt = torch.optim.Adam(
                [{"params": [viewpoint.cam_rot_delta], "lr": self.config["Training"]["lr"]["cam_rot_delta"]}]
            )
            for _ in range(n_iters):
                render_pkg = render(
                    viewpoint, self.gaussians, self.pipeline_params, self.background,
                    pixel_range=pixel_range if use_sparse else None,
                    pixel_coords=pixel_coords if use_sparse else None,
                    use_track_rasterizer=use_sparse,
                )
                image, depth, opacity = render_pkg["render"], render_pkg["depth"], render_pkg["opacity"]
                opt.zero_grad()
                if use_sparse:
                    loss = get_loss_tracking_sparse(
                        self.config, image, depth, opacity, viewpoint, pixel_mask=pixel_mask
                    )
                else:
                    loss = get_loss_tracking(self.config, image, depth, opacity, viewpoint)
                loss.backward()
                with torch.no_grad():
                    opt.step()
                    update_pose(viewpoint)
            R_final = viewpoint.R.detach().clone()
            return R_final

        R_dense_only = run(use_sparse=False)
        R_sparse_only = run(use_sparse=True)

        def ang(Ra, Rb):
            Rrel = Ra.T @ Rb.to(dtype=Ra.dtype)
            return float(torch.rad2deg(torch.arccos(torch.clamp((torch.trace(Rrel) - 1) / 2, -1, 1))).cpu())

        dense_step = ang(R_start, R_dense_only)
        sparse_step = ang(R_start, R_sparse_only)
        divergence = ang(R_dense_only, R_sparse_only)
        print(
            f"DBG_ISOLATE frame={cur_frame_idx} true_step_deg={true_step_deg:.3f} "
            f"dense_only_step_deg={dense_step:.3f} sparse_only_step_deg={sparse_step:.3f} "
            f"dense_vs_sparse_divergence_deg={divergence:.3f}",
            flush=True,
        )

        viewpoint.update_RT(R_real, T_real)
        with torch.no_grad():
            viewpoint.cam_rot_delta.data.fill_(0)
            viewpoint.cam_trans_delta.data.fill_(0)
            viewpoint.exposure_a.data.copy_(ea_real)
            viewpoint.exposure_b.data.copy_(eb_real)

    def tracking(self, cur_frame_idx, viewpoint):
        prev = self.cameras[cur_frame_idx - self.use_every_n_frames]
        viewpoint.update_RT(prev.R, prev.T)
        if os.environ.get("SPLATONIC_DEBUG_ATE"):
            R_start = viewpoint.R.detach().clone()
            T_start = viewpoint.T.detach().clone()
            exposure_a_start = viewpoint.exposure_a.detach().clone()
            exposure_b_start = viewpoint.exposure_b.detach().clone()
            R_gt_start = prev.R_gt.detach().to(dtype=R_start.dtype)
            R_gt_end = viewpoint.R_gt.detach().to(dtype=R_start.dtype)
            R_rel_gt = R_gt_start.T @ R_gt_end
            true_step_deg = float(
                torch.rad2deg(
                    torch.arccos(torch.clamp((torch.trace(R_rel_gt) - 1) / 2, -1, 1))
                ).cpu()
            )

        use_splatonic = self.config["Training"].get("use_splatonic", False)
        tile_size = self.config["Training"].get("tracking_tile_size", 16)

        if use_splatonic:
            H, W = viewpoint.image_height, viewpoint.image_width
            debug_k = int(os.environ.get("SPLATONIC_DEBUG_TRACK_K", "1"))
            if debug_k > 1:
                pixel_mask, pixel_range, pixel_coords = generate_random_mask_k(
                    (H, W), tile_size=tile_size, k=debug_k, device="cuda"
                )
            else:
                pixel_mask, pixel_range, pixel_coords = generate_random_mask(
                    (H, W), tile_size=tile_size, device="cuda"
                )
        else:
            pixel_mask = pixel_range = pixel_coords = None

        opt_params = []
        opt_params.append(
            {
                "params": [viewpoint.cam_rot_delta],
                "lr": self.config["Training"]["lr"]["cam_rot_delta"],
                "name": "rot_{}".format(viewpoint.uid),
            }
        )
        opt_params.append(
            {
                "params": [viewpoint.cam_trans_delta],
                "lr": self.config["Training"]["lr"]["cam_trans_delta"],
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

        pose_optimizer = torch.optim.Adam(opt_params)
        for tracking_itr in range(self.tracking_itr_num):
            render_pkg = render(
                viewpoint, self.gaussians, self.pipeline_params, self.background,
                pixel_range=pixel_range,
                pixel_coords=pixel_coords,
                use_track_rasterizer=use_splatonic,
            )
            image, depth, opacity = (
                render_pkg["render"],
                render_pkg["depth"],
                render_pkg["opacity"],
            )
            pose_optimizer.zero_grad()
            loss_tracking = get_loss_tracking_sparse(
                self.config, image, depth, opacity, viewpoint,
                pixel_mask=pixel_mask,
            )
            loss_tracking.backward()

            with torch.no_grad():
                pose_optimizer.step()
                converged = update_pose(viewpoint)

            if tracking_itr % 10 == 0:
                self.q_main2vis.put(
                    gui_utils.GaussianPacket(
                        current_frame=viewpoint,
                        gtcolor=viewpoint.original_image,
                        gtdepth=viewpoint.depth
                        if not self.monocular
                        else np.zeros((viewpoint.image_height, viewpoint.image_width)),
                    )
                )
            if converged:
                break

        self.median_depth = get_median_depth(depth, opacity)
        if os.environ.get("SPLATONIC_DEBUG_ATE"):
            T_gt = viewpoint.T_gt.detach().to(dtype=viewpoint.T.dtype)
            R_gt = viewpoint.R_gt.detach().to(dtype=viewpoint.R.dtype)
            t_err_norm = float(
                torch.linalg.norm(viewpoint.T.detach() - T_gt).cpu()
            )
            R_rel = viewpoint.R.detach().T @ R_gt
            ang_err_deg = float(
                torch.rad2deg(
                    torch.arccos(torch.clamp((torch.trace(R_rel) - 1) / 2, -1, 1))
                ).cpu()
            )
            R_end = viewpoint.R.detach().to(dtype=R_start.dtype)
            R_rel_est = R_start.T @ R_end
            est_step_deg = float(
                torch.rad2deg(
                    torch.arccos(torch.clamp((torch.trace(R_rel_est) - 1) / 2, -1, 1))
                ).cpu()
            )
            depth_err_str = "nan"
            spread_str = "nan"
            if pixel_mask is not None:
                gt_depth_np = viewpoint.depth
                gt_depth = torch.from_numpy(gt_depth_np).to(device=depth.device, dtype=depth.dtype)
                valid = pixel_mask & (gt_depth > 0.01)
                if valid.any():
                    depth_err = torch.abs(depth[0][valid] - gt_depth[valid]).mean()
                    depth_err_str = f"{float(depth_err.cpu()):.4f}"
                # mean normalized distance of sampled pixels from image center (0=center, ~1.4=corner)
                ys, xs = torch.nonzero(pixel_mask, as_tuple=True)
                if ys.numel() > 0:
                    H_, W_ = pixel_mask.shape
                    cy, cx = (H_ - 1) / 2.0, (W_ - 1) / 2.0
                    ny = (ys.float() - cy) / (H_ / 2.0)
                    nx = (xs.float() - cx) / (W_ / 2.0)
                    spread = torch.sqrt(ny**2 + nx**2).mean()
                    spread_str = f"{float(spread.cpu()):.4f}"
            print(
                f"DBG_ATE frame={cur_frame_idx} t_err={t_err_norm:.4f} ang_err_deg={ang_err_deg:.3f} "
                f"true_step_deg={true_step_deg:.3f} est_step_deg={est_step_deg:.3f} "
                f"n_iters={tracking_itr + 1} converged={converged} depth_err={depth_err_str} "
                f"sample_spread={spread_str}",
                flush=True,
            )
            isolate_frames_str = os.environ.get("SPLATONIC_DEBUG_ISOLATE_FRAME")
            isolate_frames = (
                {int(x) for x in isolate_frames_str.split(",")} if isolate_frames_str else set()
            )
            if cur_frame_idx in isolate_frames and pixel_mask is not None:
                self._debug_isolate_rotation(
                    cur_frame_idx, viewpoint, R_start, T_start,
                    exposure_a_start, exposure_b_start, pixel_range, pixel_coords, pixel_mask,
                    true_step_deg,
                )
        return render_pkg

    def is_keyframe(
        self,
        cur_frame_idx,
        last_keyframe_idx,
        cur_frame_visibility_filter,
        occ_aware_visibility,
    ):
        kf_translation = self.config["Training"]["kf_translation"]
        kf_min_translation = self.config["Training"]["kf_min_translation"]
        kf_overlap = self.config["Training"]["kf_overlap"]

        curr_frame = self.cameras[cur_frame_idx]
        last_kf = self.cameras[last_keyframe_idx]
        pose_CW = getWorld2View2(curr_frame.R, curr_frame.T)
        last_kf_CW = getWorld2View2(last_kf.R, last_kf.T)
        last_kf_WC = torch.linalg.inv(last_kf_CW)
        dist = torch.norm((pose_CW @ last_kf_WC)[0:3, 3])
        dist_check = dist > kf_translation * self.median_depth
        dist_check2 = dist > kf_min_translation * self.median_depth

        union = torch.logical_or(
            cur_frame_visibility_filter, occ_aware_visibility[last_keyframe_idx]
        ).count_nonzero()
        intersection = torch.logical_and(
            cur_frame_visibility_filter, occ_aware_visibility[last_keyframe_idx]
        ).count_nonzero()
        point_ratio_2 = intersection / union
        return (point_ratio_2 < kf_overlap and dist_check2) or dist_check

    def add_to_window(
        self, cur_frame_idx, cur_frame_visibility_filter, occ_aware_visibility, window
    ):
        N_dont_touch = 2
        window = [cur_frame_idx] + window
        # remove frames which has little overlap with the current frame
        curr_frame = self.cameras[cur_frame_idx]
        to_remove = []
        removed_frame = None
        for i in range(N_dont_touch, len(window)):
            kf_idx = window[i]
            # szymkiewicz–simpson coefficient
            intersection = torch.logical_and(
                cur_frame_visibility_filter, occ_aware_visibility[kf_idx]
            ).count_nonzero()
            denom = min(
                cur_frame_visibility_filter.count_nonzero(),
                occ_aware_visibility[kf_idx].count_nonzero(),
            )
            point_ratio_2 = intersection / denom
            cut_off = (
                self.config["Training"]["kf_cutoff"]
                if "kf_cutoff" in self.config["Training"]
                else 0.4
            )
            if not self.initialized:
                cut_off = 0.4
            if point_ratio_2 <= cut_off:
                to_remove.append(kf_idx)

        if to_remove:
            window.remove(to_remove[-1])
            removed_frame = to_remove[-1]
        kf_0_WC = torch.linalg.inv(getWorld2View2(curr_frame.R, curr_frame.T))

        if len(window) > self.config["Training"]["window_size"]:
            # we need to find the keyframe to remove...
            inv_dist = []
            for i in range(N_dont_touch, len(window)):
                inv_dists = []
                kf_i_idx = window[i]
                kf_i = self.cameras[kf_i_idx]
                kf_i_CW = getWorld2View2(kf_i.R, kf_i.T)
                for j in range(N_dont_touch, len(window)):
                    if i == j:
                        continue
                    kf_j_idx = window[j]
                    kf_j = self.cameras[kf_j_idx]
                    kf_j_WC = torch.linalg.inv(getWorld2View2(kf_j.R, kf_j.T))
                    T_CiCj = kf_i_CW @ kf_j_WC
                    inv_dists.append(1.0 / (torch.norm(T_CiCj[0:3, 3]) + 1e-6).item())
                T_CiC0 = kf_i_CW @ kf_0_WC
                k = torch.sqrt(torch.norm(T_CiC0[0:3, 3])).item()
                inv_dist.append(k * sum(inv_dists))

            idx = np.argmax(inv_dist)
            removed_frame = window[N_dont_touch + idx]
            window.remove(removed_frame)

        return window, removed_frame

    def request_keyframe(self, cur_frame_idx, viewpoint, current_window, depthmap):
        msg = ["keyframe", cur_frame_idx, viewpoint, current_window, depthmap]
        self.backend_queue.put(msg)
        self.requested_keyframe += 1

    def reqeust_mapping(self, cur_frame_idx, viewpoint):
        msg = ["map", cur_frame_idx, viewpoint]
        self.backend_queue.put(msg)

    def request_init(self, cur_frame_idx, viewpoint, depth_map):
        msg = ["init", cur_frame_idx, viewpoint, depth_map]
        self.backend_queue.put(msg)
        self.requested_init = True

    def sync_backend(self, data):
        self.gaussians = data[1]
        occ_aware_visibility = data[2]
        keyframes = data[3]
        self.occ_aware_visibility = occ_aware_visibility

        for kf_id, kf_R, kf_T in keyframes:
            self.cameras[kf_id].update_RT(kf_R.clone(), kf_T.clone())

    def cleanup(self, cur_frame_idx):
        self.cameras[cur_frame_idx].clean()
        if cur_frame_idx % 10 == 0:
            torch.cuda.empty_cache()

    def run(self):
        cur_frame_idx = 0
        projection_matrix = getProjectionMatrix2(
            znear=0.01,
            zfar=100.0,
            fx=self.dataset.fx,
            fy=self.dataset.fy,
            cx=self.dataset.cx,
            cy=self.dataset.cy,
            W=self.dataset.width,
            H=self.dataset.height,
        ).transpose(0, 1)
        projection_matrix = projection_matrix.to(device=self.device)
        tic = torch.cuda.Event(enable_timing=True)
        toc = torch.cuda.Event(enable_timing=True)

        while True:
            if self.q_vis2main.empty():
                if self.pause:
                    continue
            else:
                data_vis2main = self.q_vis2main.get()
                self.pause = data_vis2main.flag_pause
                if self.pause:
                    self.backend_queue.put(["pause"])
                    continue
                else:
                    self.backend_queue.put(["unpause"])

            if self.frontend_queue.empty():
                tic.record()
                if cur_frame_idx >= len(self.dataset):
                    if self.save_results:
                        eval_ate(
                            self.cameras,
                            self.kf_indices,
                            self.save_dir,
                            0,
                            final=True,
                            monocular=self.monocular,
                        )
                        save_gaussians(
                            self.gaussians, self.save_dir, "final", final=True
                        )
                    break

                if self.requested_init:
                    time.sleep(0.01)
                    continue

                if self.single_thread and self.requested_keyframe > 0:
                    time.sleep(0.01)
                    continue

                if not self.initialized and self.requested_keyframe > 0:
                    time.sleep(0.01)
                    continue

                viewpoint = Camera.init_from_dataset(
                    self.dataset, cur_frame_idx, projection_matrix
                )
                viewpoint.compute_grad_mask(self.config)

                self.cameras[cur_frame_idx] = viewpoint

                if self.reset:
                    self.initialize(cur_frame_idx, viewpoint)
                    self.current_window.append(cur_frame_idx)
                    cur_frame_idx += 1
                    continue

                self.initialized = self.initialized or (
                    len(self.current_window) == self.window_size
                )

                # Tracking
                render_pkg = self.tracking(cur_frame_idx, viewpoint)

                current_window_dict = {}
                current_window_dict[self.current_window[0]] = self.current_window[1:]
                keyframes = [self.cameras[kf_idx] for kf_idx in self.current_window]

                self.q_main2vis.put(
                    gui_utils.GaussianPacket(
                        gaussians=clone_obj(self.gaussians),
                        current_frame=viewpoint,
                        keyframes=keyframes,
                        kf_window=current_window_dict,
                    )
                )

                if self.requested_keyframe > 0:
                    self.cleanup(cur_frame_idx)
                    cur_frame_idx += 1
                    continue

                last_keyframe_idx = self.current_window[0]
                check_time = (cur_frame_idx - last_keyframe_idx) >= self.kf_interval
                curr_visibility = (render_pkg["n_touched"] > 0).long()
                create_kf = self.is_keyframe(
                    cur_frame_idx,
                    last_keyframe_idx,
                    curr_visibility,
                    self.occ_aware_visibility,
                )
                if len(self.current_window) < self.window_size:
                    union = torch.logical_or(
                        curr_visibility, self.occ_aware_visibility[last_keyframe_idx]
                    ).count_nonzero()
                    intersection = torch.logical_and(
                        curr_visibility, self.occ_aware_visibility[last_keyframe_idx]
                    ).count_nonzero()
                    point_ratio = intersection / union
                    create_kf = (
                        check_time
                        and point_ratio < self.config["Training"]["kf_overlap"]
                    )
                if self.single_thread:
                    create_kf = check_time and create_kf
                if create_kf:
                    self.current_window, removed = self.add_to_window(
                        cur_frame_idx,
                        curr_visibility,
                        self.occ_aware_visibility,
                        self.current_window,
                    )
                    if self.monocular and not self.initialized and removed is not None:
                        self.reset = True
                        Log(
                            "Keyframes lacks sufficient overlap to initialize the map, resetting."
                        )
                        continue
                    depth_map = self.add_new_keyframe(
                        cur_frame_idx,
                        depth=render_pkg["depth"],
                        opacity=render_pkg["opacity"],
                        init=False,
                    )
                    self.request_keyframe(
                        cur_frame_idx, viewpoint, self.current_window, depth_map
                    )
                else:
                    self.cleanup(cur_frame_idx)
                cur_frame_idx += 1

                if (
                    self.save_results
                    and self.save_trj
                    and create_kf
                    and len(self.kf_indices) % self.save_trj_kf_intv == 0
                ):
                    Log("Evaluating ATE at frame: ", cur_frame_idx)
                    eval_ate(
                        self.cameras,
                        self.kf_indices,
                        self.save_dir,
                        cur_frame_idx,
                        monocular=self.monocular,
                    )
                toc.record()
                torch.cuda.synchronize()
                if create_kf:
                    # throttle at 3fps when keyframe is added
                    duration = tic.elapsed_time(toc)
                    time.sleep(max(0.01, 1.0 / 3.0 - duration / 1000))
            else:
                data = self.frontend_queue.get()
                if data[0] == "sync_backend":
                    self.sync_backend(data)

                elif data[0] == "keyframe":
                    self.sync_backend(data)
                    self.requested_keyframe -= 1

                elif data[0] == "init":
                    self.sync_backend(data)
                    self.requested_init = False

                elif data[0] == "stop":
                    Log("Frontend Stopped.")
                    break
