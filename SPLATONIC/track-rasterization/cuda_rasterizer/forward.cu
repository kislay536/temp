/*
 * Copyright (C) 2023, Inria
 * GRAPHDECO research group, https://team.inria.fr/graphdeco
 * All rights reserved.
 *
 * This software is free for non-commercial, research and evaluation use 
 * under the terms of the LICENSE.md file.
 *
 * For inquiries contact  george.drettakis@inria.fr
 */

#include "forward.h"
#include "auxiliary.h"
#include <cooperative_groups.h>
#include <cooperative_groups/reduce.h>
namespace cg = cooperative_groups;

// Forward method for converting the input spherical harmonics
// coefficients of each Gaussian to a simple RGB color.
__device__ glm::vec3 computeColorFromSH(int idx, int deg, int max_coeffs, const glm::vec3* means, glm::vec3 campos, const float* shs, bool* clamped)
{
	// The implementation is loosely based on code for 
	// "Differentiable Point-Based Radiance Fields for 
	// Efficient View Synthesis" by Zhang et al. (2022)
	glm::vec3 pos = means[idx];
	glm::vec3 dir = pos - campos;
	dir = dir / glm::length(dir);

	glm::vec3* sh = ((glm::vec3*)shs) + idx * max_coeffs;
	glm::vec3 result = SH_C0 * sh[0];

	if (deg > 0)
	{
		float x = dir.x;
		float y = dir.y;
		float z = dir.z;
		result = result - SH_C1 * y * sh[1] + SH_C1 * z * sh[2] - SH_C1 * x * sh[3];

		if (deg > 1)
		{
			float xx = x * x, yy = y * y, zz = z * z;
			float xy = x * y, yz = y * z, xz = x * z;
			result = result +
				SH_C2[0] * xy * sh[4] +
				SH_C2[1] * yz * sh[5] +
				SH_C2[2] * (2.0f * zz - xx - yy) * sh[6] +
				SH_C2[3] * xz * sh[7] +
				SH_C2[4] * (xx - yy) * sh[8];

			if (deg > 2)
			{
				result = result +
					SH_C3[0] * y * (3.0f * xx - yy) * sh[9] +
					SH_C3[1] * xy * z * sh[10] +
					SH_C3[2] * y * (4.0f * zz - xx - yy) * sh[11] +
					SH_C3[3] * z * (2.0f * zz - 3.0f * xx - 3.0f * yy) * sh[12] +
					SH_C3[4] * x * (4.0f * zz - xx - yy) * sh[13] +
					SH_C3[5] * z * (xx - yy) * sh[14] +
					SH_C3[6] * x * (xx - 3.0f * yy) * sh[15];
			}
		}
	}
	result += 0.5f;

	// RGB colors are clamped to positive values. If values are
	// clamped, we need to keep track of this for the backward pass.
	clamped[3 * idx + 0] = (result.x < 0);
	clamped[3 * idx + 1] = (result.y < 0);
	clamped[3 * idx + 2] = (result.z < 0);
	return glm::max(result, 0.0f);
}

// Forward version of 2D covariance matrix computation
__device__ float3 computeCov2D(const float3& mean, float focal_x, float focal_y, float tan_fovx, float tan_fovy, const float* cov3D, const float* viewmatrix)
{
	// The following models the steps outlined by equations 29
	// and 31 in "EWA Splatting" (Zwicker et al., 2002). 
	// Additionally considers aspect / scaling of viewport.
	// Transposes used to account for row-/column-major conventions.
	float3 t = transformPoint4x3(mean, viewmatrix);

	const float limx = 1.3f * tan_fovx;
	const float limy = 1.3f * tan_fovy;
	const float txtz = t.x / t.z;
	const float tytz = t.y / t.z;
	t.x = min(limx, max(-limx, txtz)) * t.z;
	t.y = min(limy, max(-limy, tytz)) * t.z;

	glm::mat3 J = glm::mat3(
		focal_x / t.z, 0.0f, -(focal_x * t.x) / (t.z * t.z),
		0.0f, focal_y / t.z, -(focal_y * t.y) / (t.z * t.z),
		0, 0, 0);

	glm::mat3 W = glm::mat3(
		viewmatrix[0], viewmatrix[4], viewmatrix[8],
		viewmatrix[1], viewmatrix[5], viewmatrix[9],
		viewmatrix[2], viewmatrix[6], viewmatrix[10]);

	glm::mat3 T = W * J;

	glm::mat3 Vrk = glm::mat3(
		cov3D[0], cov3D[1], cov3D[2],
		cov3D[1], cov3D[3], cov3D[4],
		cov3D[2], cov3D[4], cov3D[5]);

	glm::mat3 cov = glm::transpose(T) * glm::transpose(Vrk) * T;

	// Apply low-pass filter: every Gaussian should be at least
	// one pixel wide/high. Discard 3rd row and column.
	cov[0][0] += 0.3f;
	cov[1][1] += 0.3f;
	return { float(cov[0][0]), float(cov[0][1]), float(cov[1][1]) };
}

// Forward method for converting scale and rotation properties of each
// Gaussian to a 3D covariance matrix in world space. Also takes care
// of quaternion normalization.
__device__ void computeCov3D(const glm::vec3 scale, float mod, const glm::vec4 rot, float* cov3D)
{
	// Create scaling matrix
	glm::mat3 S = glm::mat3(1.0f);
	S[0][0] = mod * scale.x;
	S[1][1] = mod * scale.y;
	S[2][2] = mod * scale.z;

	// Normalize quaternion to get valid rotation
	glm::vec4 q = rot;// / glm::length(rot);
	float r = q.x;
	float x = q.y;
	float y = q.z;
	float z = q.w;

	// Compute rotation matrix from quaternion
	glm::mat3 R = glm::mat3(
		1.f - 2.f * (y * y + z * z), 2.f * (x * y - r * z), 2.f * (x * z + r * y),
		2.f * (x * y + r * z), 1.f - 2.f * (x * x + z * z), 2.f * (y * z - r * x),
		2.f * (x * z - r * y), 2.f * (y * z + r * x), 1.f - 2.f * (x * x + y * y)
	);

	glm::mat3 M = S * R;

	// Compute 3D world covariance matrix Sigma
	glm::mat3 Sigma = glm::transpose(M) * M;

	// Covariance is symmetric, only store upper right
	cov3D[0] = Sigma[0][0];
	cov3D[1] = Sigma[0][1];
	cov3D[2] = Sigma[0][2];
	cov3D[3] = Sigma[1][1];
	cov3D[4] = Sigma[1][2];
	cov3D[5] = Sigma[2][2];
}

// Perform initial steps for each Gaussian prior to rasterization.
template<int C>
__global__ void preprocessCUDA(int P, int D, int M,
	const float* orig_points,
	const glm::vec3* scales,
	const float scale_modifier,
	const glm::vec4* rotations,
	const float* opacities,
	const float* shs,
	bool* clamped,
	const int* pixel_range,
	const int2* pixel_coords,
	const float* cov3D_precomp,
	const float* colors_precomp,
	const float* viewmatrix,
	const float* projmatrix,
	const glm::vec3* cam_pos,
	const int W, int H,
	const float tan_fovx, float tan_fovy,
	const float focal_x, float focal_y,
	int* radii,
	float2* points_xy_image,
	float* depths,
	float* cov3Ds,
	float* rgb,
	float4* conic_opacity,
	const dim3 grid,
	uint32_t* tiles_touched,
	bool prefiltered, 
	int2* rects,
	int* num_rendered,
	uint64_t* gaussian_keys_unsorted,
	int2* gaussian_values_unsorted
	)
{
	auto idx = cg::this_grid().thread_rank();
	auto block = cg::this_thread_block();
	const int thread_idx = block.thread_rank();
	const int warp_idx = block.thread_rank() / 32;
	const int lane = block.thread_rank() % 32;
	bool point_valid = false;
	int2 rect_min, rect_max;
	float2 point_image;
	float3 conic;
	float opacity;
	// float log_opacity;
	int touched;
	float my_radius;
	float depth;

	__shared__ float2 collected_xy[256];
	__shared__ float4 collected_conic_o[256];
	__shared__ int4 collected_rect_info[256];
	__shared__ int2 collected_d_idx[256];
	if (idx < P)
	{
		do{
			// Initialize radius and touched tiles to 0. If this isn't changed,
			// this Gaussian will not be processed further.
			radii[idx] = 0;
			tiles_touched[idx] = 0;

			// Perform near culling, quit if outside.
			// Transform point by projecting
			float3 p_orig = { orig_points[3 * idx], orig_points[3 * idx + 1], orig_points[3 * idx + 2] };
			float3 p_view = transformPoint4x3(p_orig, viewmatrix);
			if (p_view.z <= 0.2f)// || ((p_proj.x < -1.3 || p_proj.x > 1.3 || p_proj.y < -1.3 || p_proj.y > 1.3)))
			{
				break;
			}
			
			// depth = p_view.z;
			collected_d_idx[thread_idx] = { __float_as_int(p_view.z), (int)idx };
			float4 p_hom = transformPoint4x4(p_orig, projmatrix);
			float p_w = 1.0f / (p_hom.w + 0.0000001f);
			float3 p_proj = { p_hom.x * p_w, p_hom.y * p_w, p_hom.z * p_w };
			opacity = opacities[idx];
			
			// If 3D covariance matrix is precomputed, use it, otherwise compute
			// from scaling and rotation parameters. 
			const float* cov3D;
			if (cov3D_precomp != nullptr)
			{
				cov3D = cov3D_precomp + idx * 6;
			}
			else
			{
				computeCov3D(scales[idx], scale_modifier, rotations[idx], cov3Ds + idx * 6);
				cov3D = cov3Ds + idx * 6;
			}
			// Compute 2D screen-space covariance matrix
			float3 cov = computeCov2D(p_orig, focal_x, focal_y, tan_fovx, tan_fovy, cov3D, viewmatrix);
			
			// Invert covariance (EWA algorithm)
			float det = (cov.x * cov.z - cov.y * cov.y);
			if (det == 0.0f) break;
			float det_inv = 1.f / det;
			conic = { cov.z * det_inv, -cov.y * det_inv, cov.x * det_inv };
			
			// Compute extent in screen space (by finding eigenvalues of
			// 2D covariance matrix). Use extent to compute a bounding rectangle
			// of screen-space tiles that this Gaussian overlaps with. Quit if
			// rectangle covers 0 tiles. 
			float mid = 0.5f * (cov.x + cov.z);
			float lambda1 = mid + sqrt(max(0.1f, mid * mid - det));
			float lambda2 = mid - sqrt(max(0.1f, mid * mid - det));
			my_radius = ceil(3.f * sqrt(max(lambda1, lambda2)));
			point_image = { ndc2Pix(p_proj.x, W), ndc2Pix(p_proj.y, H) };
			collected_xy[thread_idx] = point_image;

			if (rects == nullptr) 	// More conservative
			{
				getRect(point_image, my_radius, rect_min, rect_max, grid);
			}
			else // Slightly more aggressive, might need a math cleanup
			{
				// Choose this, get a rectangle to fix the gaussian ball 
				const float mahala_dist = max(0.f, min(2.0f * (lowest_alpha_coeff + opacity), 9.0f));

				const int2 my_rect = { (int)ceil(sqrt(cov.x * mahala_dist)), (int)ceil(sqrt(cov.z * mahala_dist)) };
				rects[idx] = my_rect;
				getRect(point_image, my_rect, rect_min, rect_max, grid);
			}
			touched = (rect_max.x - rect_min.x) * (rect_max.y - rect_min.y);
			point_valid = touched > 0;
			if (point_valid)
			{
				collected_conic_o[thread_idx] = { conic.x, conic.y, conic.z, logf(opacity) };
				collected_rect_info[thread_idx] = { rect_min.x, rect_min.y, rect_max.x - rect_min.x, touched };
			}
		}while(false);
	}
	__syncwarp();
	int point_valid_mask = __ballot_sync(~0, point_valid);
	while(point_valid_mask)
	{
		int i = warp_idx*32 + __ffs(point_valid_mask) - 1;
		point_valid_mask &= point_valid_mask - 1;

		float2 xy = collected_xy[i];
		float4 conic_o = collected_conic_o[i];
		int4 rect_info = collected_rect_info[i];
		int2 d_idx = collected_d_idx[i];

		for(int j = 0; j < rect_info.w; j += 32)
		{
			int progress = j + lane;
			int y = progress / rect_info.z;
			int x = rect_info.x + progress - y * rect_info.z;
			y += rect_info.y;

			int tile_id = y * grid.x + x, pixel_num = 0;
			int pixel_idx_start = 0;
			bool valid_tile = progress < rect_info.w;
			if (valid_tile)
			{
				pixel_idx_start = pixel_range[tile_id];
				pixel_num = (pixel_range[tile_id+1] - pixel_idx_start);
			}

			while(__ballot_sync(~0, pixel_num > 0))
			{
				int fetch_idx = 0;
				if (progress < rect_info.w && pixel_num > 0)
				{
					fetch_idx = pixel_idx_start + pixel_num - 1;
				}
				
				int2 pix_coord = pixel_coords[fetch_idx];
				float2 pix = { (float)pix_coord.x, (float)pix_coord.y };
				float2 d = { xy.x - pix.x, xy.y - pix.y };

				float power = - 0.5f * (conic_o.x * d.x * d.x + conic_o.z * d.y * d.y) - conic_o.y * d.x * d.y;
				if (power > 0.0f) power = -100.0f;
				power = conic_o.w + power;
				int valid = progress < rect_info.w && power > -5.54126354516f;

				int intersection_mask = __ballot_sync(~0, valid);
				int my_offset;
				if (lane == 0)
				{
					my_offset = atomicAdd(num_rendered, __popc(intersection_mask));
				}
				my_offset = __shfl_sync(~0, my_offset, 0);
				my_offset += __popc(intersection_mask & ((1 << lane) - 1));

				if (valid)
				{
					uint64_t key = fetch_idx;
					key <<= 32;
					key |= (uint)d_idx.x;
					gaussian_keys_unsorted[my_offset] = key;
					gaussian_values_unsorted[my_offset] = {d_idx.y, __float_as_int(power)};
				}

				pixel_num--;
			}
		}
	}

	if (point_valid && idx < P)
	{
		// Store some useful helper data for the next steps.
		depths[idx] = collected_d_idx[thread_idx].x;
		radii[idx] = my_radius;
		points_xy_image[idx] = collected_xy[thread_idx];
		// Inverse 2D covariance and opacity neatly pack into one float4
		tiles_touched[idx] = collected_rect_info[thread_idx].w;
		float4 conic_o = collected_conic_o[thread_idx];
		conic_opacity[idx] = { conic_o.x, conic_o.y, conic_o.z, opacity };
		// If colors have been precomputed, use them, otherwise convert
		// spherical harmonics coefficients to RGB color.
		if (colors_precomp == nullptr)
		{
			glm::vec3 result = computeColorFromSH(idx, D, M, (glm::vec3*)orig_points, *cam_pos, shs, clamped);
			rgb[idx * C + 0] = result.x;
			rgb[idx * C + 1] = result.y;
			rgb[idx * C + 2] = result.z;
		}
	}
}

// Main rasterization method. Collaboratively works on one tile per
// block, each thread treats one pixel. Alternates between fetching 
// and rasterizing data.
template <uint32_t CHANNELS>
__global__ void __launch_bounds__(BLOCK_X * BLOCK_Y)
renderCUDAPure(
	const uint2* __restrict__ ranges,
	const int2* __restrict__ point_list,
	const int2* __restrict__ pixel_coords,
	int W, int H,
	const float* __restrict__ features,
	float* __restrict__ final_T,
	uint32_t* __restrict__ n_contrib,
	const float* __restrict__ bg_color,
	float* __restrict__ out_color,
	const float* __restrict__ depth,
	float* __restrict__ out_depth)
{
	// Identify current tile and associated min/max pixel range.
	auto block = cg::this_thread_block();
	auto pixel_idx = block.group_index().x;
	const int lane = block.thread_rank() % 32;
	const int warp_idx = block.thread_rank() / 32;

	const int2 pix = pixel_coords[pixel_idx];
	uint32_t pix_id = W * pix.y + pix.x;
	float2 pixf = { (float)pix.x, (float)pix.y };
	// Check if this thread is associated with a valid pixel or outside.
	if (pix.x >= W || pix.y >= H) return;
	// Done threads can help with fetching, but don't rasterize
	bool done = false;

	// Load start/end range of IDs to process in bit sorted list.
	uint2 range = ranges[pixel_idx];
	const int rounds = ((range.y - range.x + BLOCK_SIZE - 1) / BLOCK_SIZE);

	// Allocate storage for batches of collectively fetched data.
	__shared__ float collected_T[NUM_WARPS];
	__shared__ float collected_color[NUM_WARPS * CHANNELS];
	if (lane == 0) collected_T[warp_idx] = 1.0f;

	// Initialize helper variables
	float T, cur_T;
	float C[CHANNELS] = { 0 };
	// 	float D = 0.0f;  // Mean Depth
	// float D = 15.0f;  // Median Depth. TODO: This is a hack setting max_depth to 15
	out_depth[pix_id] = 15.0f;

	// Iterate over batches until all done or range is complete
	float2 xy;
	float2 d;
	float4 con_o;
	int progress = block.thread_rank() - BLOCK_SIZE;

	for (int i = 0; i < rounds; i++)
	{
		if (__syncthreads_or(done))
		{
			break;
		}

		int coll_id = 0;
		float alpha = 0.0f;
		progress += BLOCK_SIZE;
		// Collectively fetch per-Gaussian data from global to shared
		const bool in_range = range.x + progress < range.y;
		if (in_range)
		{
			int2 data = point_list[range.x + progress];
			coll_id = data.x;
			float power = __int_as_float(data.y);
			alpha = min(0.99f, exp(power));
		}

		// intra warp reduce
		// pre multiply of T, new curT = T * (1 - alpha)
		cur_T = 1 - alpha;
		for (int offset = 1; offset < 32; offset *= 2)
		{
			float tmp = __shfl_up_sync(~0, cur_T, offset);
			if (lane >= offset) cur_T *= tmp;
		}

		// integrate with previous accumulated T
		T = collected_T[warp_idx];
		float tmp = __shfl_sync(~0, cur_T, 31);
		if (lane == 0) collected_T[warp_idx] = tmp;

		cur_T = __shfl_up_sync(~0, cur_T, 1);
		if (lane == 0) cur_T = 1.0f;

		// currently, T is the accumulated T of last block, collected_T records warp_reduced T*(1-alpha)
		block.sync();
		for(int j = 0; j < warp_idx; j++)
		{
			T *= collected_T[j];
		}

		// Now T is our desired accumulated T, collected_T is updated with the accumulated T of this block 
		if(warp_idx == NUM_WARPS - 1 && lane < NUM_WARPS) collected_T[lane] = tmp*T;
		cur_T *= T;
		T = cur_T * (1 - alpha);

		// blending
		done = !in_range || T < 0.0001f;
		if (!done)
		{
			for (int ch = 0; ch < CHANNELS; ch++)
				C[ch] += features[coll_id * CHANNELS + ch] * cur_T * alpha;
			if (cur_T > 0.5f && T < 0.5f)
			{
				out_depth[pix_id] = depth[coll_id];
			}
		}
	}


	// All threads that treat valid pixel write out their final
	// rendering data to the frame and auxiliary buffers.
	for (int ch = 0; ch < CHANNELS; ch++)
	{
		for (int offset = 1; offset < 32; offset *= 2)
		{
			C[ch] += __shfl_down_sync(~0, C[ch], offset);
		}
		float tmp = __shfl_sync(~0, C[ch], 0);
		if (lane == 0) 
			collected_color[warp_idx * CHANNELS + ch] = tmp;
	}

	int num_done = __syncthreads_count(done);
	if (num_done > 0)
	{
		if (block.thread_rank() == BLOCK_SIZE - num_done)
		{
			n_contrib[pix_id] = progress;
			final_T[pix_id] = cur_T;
			collected_T[0] = cur_T;
		}
	}
	else
	{
		if (block.thread_rank() == BLOCK_SIZE - 1)
		{
			n_contrib[pix_id] = progress + 1;
			final_T[pix_id] = T;
			collected_T[0] = T;
		}
	}
	
	if (warp_idx == 0) // only use 1 warp for inter warp reduce
	{
		float color = 0.0f;
		if (lane < BLOCK_SIZE / 32 * CHANNELS)
			color = collected_color[lane];
		for (int offset = 1; offset < 8; offset *= 2)
		{
			color += __shfl_down_sync(~0, color, offset*CHANNELS);
		}
		if (lane < CHANNELS)
		{
			out_color[lane * H * W + pix_id] = color + collected_T[0] * bg_color[lane];
		}
	}

}

void FORWARD::render(
	const int num_pixel, dim3 block,
	const uint2* ranges,
	const int2* point_list,
	const int* pixel_range,
	const int2* pixel_coords,
	int W, int H,
	const float2* means2D,
	const float* colors,
	const float4* conic_opacity,
	float* final_T,
	uint32_t* n_contrib,
	const float* bg_color,
	float* out_color,
	const float* depth,
	float* out_depth)
{
	renderCUDAPure<NUM_CHANNELS> << <num_pixel, block >> > (
		ranges,
		point_list,
		pixel_coords,
		W, H,
		colors,
		final_T,
		n_contrib,
		bg_color,
		out_color,
		depth,
		out_depth);
}

void FORWARD::preprocess(int P, int D, int M,
	const float* means3D,
	const glm::vec3* scales,
	const float scale_modifier,
	const glm::vec4* rotations,
	const float* opacities,
	const float* shs,
	bool* clamped,
	const int* pixel_range,
	const int2* pixel_coords,
	const float* cov3D_precomp,
	const float* colors_precomp,
	const float* viewmatrix,
	const float* projmatrix,
	const glm::vec3* cam_pos,
	const int W, int H,
	const float focal_x, float focal_y,
	const float tan_fovx, float tan_fovy,
	int* radii,
	float2* means2D,
	float* depths,
	float* cov3Ds,
	float* rgb,
	float4* conic_opacity,
	const dim3 grid,
	uint32_t* tiles_touched,
	bool prefiltered,
	int2* rects,
	int* num_rendered,
	uint64_t* gaussian_keys_unsorted,
	int2* gaussian_values_unsorted
	)
{
	preprocessCUDA<NUM_CHANNELS> << <(P + 255) / 256, 256 >> > (
		P, D, M,
		means3D,
		scales,
		scale_modifier,
		rotations,
		opacities,
		shs,
		clamped,
		pixel_range,
		pixel_coords,
		cov3D_precomp,
		colors_precomp,
		viewmatrix, 
		projmatrix,
		cam_pos,
		W, H,
		tan_fovx, tan_fovy,
		focal_x, focal_y,
		radii,
		means2D,
		depths,
		cov3Ds,
		rgb,
		conic_opacity,
		grid,
		tiles_touched,
		prefiltered,
		rects,
		num_rendered,
		gaussian_keys_unsorted,
		gaussian_values_unsorted
		);
}