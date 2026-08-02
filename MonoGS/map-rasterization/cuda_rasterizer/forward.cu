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
#include "helper_math.h"
#include "math.h"
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
	const int* pixel_range,
	const int2* pixel_coords,
	int* num_rendered_ptr,
	uint64_t* gaussian_keys_unsorted,
	int* gaussian_values_unsorted)
{
	auto idx = cg::this_grid().thread_rank();
	if (idx >= P)
		return;

	// Initialize radius and touched tiles to 0. If this isn't changed,
	// this Gaussian will not be processed further.
	radii[idx] = 0;
	tiles_touched[idx] = 0;

	// Perform near culling, quit if outside.
	float3 p_view;
	if (!in_frustum(idx, orig_points, viewmatrix, projmatrix, prefiltered, p_view))
		return;

	// Transform point by projecting
	float3 p_orig = { orig_points[3 * idx], orig_points[3 * idx + 1], orig_points[3 * idx + 2] };
	float4 p_hom = transformPoint4x4(p_orig, projmatrix);
	float p_w = 1.0f / (p_hom.w + 0.0000001f);
	float3 p_proj = { p_hom.x * p_w, p_hom.y * p_w, p_hom.z * p_w };

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
	if (det == 0.0f)
		return;
	float det_inv = 1.f / det;
	float3 conic = { cov.z * det_inv, -cov.y * det_inv, cov.x * det_inv };

	// Compute extent in screen space (by finding eigenvalues of
	// 2D covariance matrix). Use extent to compute a bounding rectangle
	// of screen-space tiles that this Gaussian overlaps with. Quit if
	// rectangle covers 0 tiles. 
	float mid = 0.5f * (cov.x + cov.z);
	float lambda1 = mid + sqrt(max(0.1f, mid * mid - det));
	float lambda2 = mid - sqrt(max(0.1f, mid * mid - det));
	float my_radius = ceil(3.f * sqrt(max(lambda1, lambda2)));
	float2 point_image = { ndc2Pix(p_proj.x, W), ndc2Pix(p_proj.y, H) };
	uint2 rect_min, rect_max;
	getRect(point_image, my_radius, rect_min, rect_max, grid);
	if ((rect_max.x - rect_min.x) * (rect_max.y - rect_min.y) == 0)
		return;

	// If colors have been precomputed, use them, otherwise convert
	// spherical harmonics coefficients to RGB color.
	if (colors_precomp == nullptr)
	{
		glm::vec3 result = computeColorFromSH(idx, D, M, (glm::vec3*)orig_points, *cam_pos, shs, clamped);
		rgb[idx * C + 0] = result.x;
		rgb[idx * C + 1] = result.y;
		rgb[idx * C + 2] = result.z;
	}

	// Store some useful helper data for the next steps.
	depths[idx] = p_view.z;
	radii[idx] = my_radius;
	points_xy_image[idx] = point_image;
	// Inverse 2D covariance and opacity neatly pack into one float4
	conic_opacity[idx] = { conic.x, conic.y, conic.z, opacities[idx] };

	for (int tile_y = rect_min.y; tile_y < rect_max.y; ++tile_y) {
		for (int tile_x = rect_min.x; tile_x < rect_max.x; ++tile_x) {
			int tile_id = tile_y * grid.x + tile_x;
			int pstart  = pixel_range[tile_id];
			int pend    = pixel_range[tile_id + 1];
			for (int k = pstart; k < pend; ++k) {
				int2 pix = pixel_coords[k];
				float2 d = { (float)pix.x - point_image.x, (float)pix.y - point_image.y };
				float power = -0.5f * (conic.x * d.x * d.x
									 + 2.0f * conic.y * d.x * d.y
									 + conic.z * d.y * d.y);
				power += logf(opacities[idx]);                 // fold in per-Gaussian opacity (matches SPLATONIC forward.cu:328)
				if (power <= -lowest_alpha_coeff) continue;    // alpha <= 0.4% — skip

				// Pack key: upper 32 bits = pixel array index k, lower 32 = depth bits
				uint32_t depth_bits = *reinterpret_cast<const uint32_t*>(&depths[idx]);
				uint64_t key = ((uint64_t)(uint32_t)k << 32) | (uint64_t)depth_bits;

				int slot = atomicAdd(num_rendered_ptr, 1);
				if (slot >= MAX_NUM_RENDERED) return;   // overflow guard

				gaussian_keys_unsorted[slot]   = key;
				gaussian_values_unsorted[slot] = idx;
			}
		}
	}
}

// SPLATONIC: one block per SAMPLED pixel (not one block per tile). All
// threads in the block cooperatively walk that pixel's sorted Gaussian range
// (nearest-to-farthest), maintaining a running transmittance T via a warp
// prefix-scan, then a cross-warp serialization step so T stays correct across
// the whole block, not just within one warp. This mirrors the real SPLATONIC
// renderCUDA (SPLATONIC/{track,map}-rasterization/cuda_rasterizer/forward.cu),
// adapted to MonoGS's data layout: point_list is a plain Gaussian-index array
// (no precomputed power carried through the sort, unlike upstream SPLATONIC),
// so alpha is recomputed here from points_xy_image/conic_opacity, exactly as
// the original dense renderCUDA did -- opacity is raw (not log), so
// alpha = opacity * exp(power), matching the dense formula.
template <uint32_t CHANNELS>
__global__ void __launch_bounds__(BLOCK_SIZE)
renderCUDA(
	const uint2* __restrict__ ranges,
	const uint32_t* __restrict__ point_list,
	int W, int H,
	const float2* __restrict__ points_xy_image,
	const float* __restrict__ features,
	const float4* __restrict__ conic_opacity,
	float* __restrict__ final_T,
	uint32_t* __restrict__ n_contrib,
	const float* __restrict__ bg_color,
	float* __restrict__ out_color,
	const float* __restrict__ depth,
	float* __restrict__ out_depth,
	float* __restrict__ out_opacity,
	int* __restrict__ n_touched,
	const int2* __restrict__ pixel_coords,
	int num_pixels)
{
	int pixel_id = blockIdx.x;
	if (pixel_id >= num_pixels)
		return;

	const int2 pix = pixel_coords[pixel_id];
	const float2 pixf = { (float)pix.x, (float)pix.y };
	const uint32_t pix_id = W * pix.y + pix.x;
	const int lane = threadIdx.x & (WARP_SIZE_EFF - 1);
	const int warp_idx = threadIdx.x / WARP_SIZE_EFF;

	// Check if this thread is associated with a valid pixel or outside.
	bool inside = (pix.x >= 0 && pix.x < W && pix.y >= 0 && pix.y < H);
	// Done threads can help with fetching, but don't rasterize.
	bool done = !inside;

	// Load start/end range of IDs to process in the sorted list for THIS pixel
	// (ranges is indexed by sampled-pixel index since CU4.5/identifyTileRanges).
	uint2 range = ranges[pixel_id];
	const int rounds = ((range.y - range.x + BLOCK_SIZE - 1) / BLOCK_SIZE);

	// collected_T[w] serves three purposes across a round's lifetime: (1) at
	// the top of a round, warp w's carried-in T from the previous round; (2)
	// mid-round, warp w's own local full product, stashed for lower-indexed
	// warps... no, HIGHER-indexed warps to fold in via the cross-warp loop
	// below; (3) at the end of a round, every slot is overwritten with "T
	// after this whole round," replicated across all NUM_WARPS slots, so
	// every warp starts the next round from the correct value.
	__shared__ float collected_T[NUM_WARPS];
	if (lane == 0) collected_T[warp_idx] = 1.0f;
	__syncthreads();

	float T = 1.0f, cur_T = 1.0f;
	float C[CHANNELS] = { 0 };
	float D = 0.0f;
	int progress = threadIdx.x - BLOCK_SIZE;

	for (int i = 0; i < rounds; i++)
	{
		if (__syncthreads_or(done))
			break;

		int gid = 0;
		float alpha = 0.0f;
		progress += BLOCK_SIZE;
		const bool in_range = range.x + progress < range.y;
		if (in_range)
		{
			gid = point_list[range.x + progress];
			float2 xy = points_xy_image[gid];
			float2 d = { xy.x - pixf.x, xy.y - pixf.y };
			float4 co = conic_opacity[gid];
			float power = -0.5f * (co.x * d.x * d.x + co.z * d.y * d.y) - co.y * d.x * d.y;
			if (power <= 0.0f)
				alpha = min(0.99f, co.w * expf(power));
		}

		const unsigned mask = __activemask();

		// Intra-warp inclusive prefix product of (1 - alpha).
		cur_T = 1.0f - alpha;
		for (int offset = 1; offset < WARP_SIZE_EFF; offset <<= 1)
		{
			float tmp = __shfl_up_sync(mask, cur_T, offset);
			if (lane >= offset) cur_T *= tmp;
		}

		// This warp's carried-in T (from earlier rounds, or from lower-index
		// warps within this same round once stashed a few lines below).
		T = collected_T[warp_idx];
		__syncwarp(mask); // all lanes finish reading collected_T[warp_idx] before lane 0 overwrites it below
		float warp_total = __shfl_sync(mask, cur_T, WARP_SIZE_EFF - 1);
		if (lane == 0) collected_T[warp_idx] = warp_total;

		cur_T = __shfl_up_sync(mask, cur_T, 1);
		if (lane == 0) cur_T = 1.0f;

		// Serialize across warps: every thread folds in every LOWER-indexed
		// warp's own local product, so T becomes the true transmittance
		// before this thread's own Gaussian -- accounting for every Gaussian
		// nearer than it within this same round, not just within its own warp.
		__syncthreads();
		for (int j = 0; j < warp_idx; j++)
			T *= collected_T[j];

		// Barrier before the last warp overwrites collected_T[]: without this,
		// a fast warp could reach the write below before a slower warp has
		// finished the cross-warp read loop above, clobbering the values it
		// still needs (present in SPLATONIC's own source too -- hardened here).
		__syncthreads();

		// The last warp seeds every slot of collected_T with "T after this
		// whole round" (same value in every slot) so the next round's
		// top-of-loop read is correct for every warp uniformly -- their next
		// Gaussians all come strictly after this round's last Gaussian.
		if (warp_idx == NUM_WARPS - 1 && lane < NUM_WARPS)
			collected_T[lane] = warp_total * T;

		float T_before = cur_T * T;        // T strictly before this thread's own Gaussian
		cur_T = T_before * (1.0f - alpha); // T strictly after this thread's own Gaussian
		T = cur_T;                         // keep T in sync as the running value across rounds --
		                                    // needed so the post-loop "else" branch (loop ran to
		                                    // completion, no early exit) reads a live value: with
		                                    // NUM_WARPS==1 (map) the cross-warp fold loop above is a
		                                    // no-op, so T is never otherwise updated within a round.

		// Unconditional per-round reassignment, matching SPLATONIC exactly: once a
		// thread runs permanently out of real Gaussians (!in_range, monotonic) or
		// its post-Gaussian transmittance has converged, it's done. This MUST be
		// unconditional (not gated behind an accumulation check) -- gating it
		// behind "did this thread contribute" left padding threads (the majority,
		// once a pixel's range is smaller than BLOCK_SIZE) never signaling done,
		// so num_done stayed 0 and n_contrib was written as BLOCK_SIZE regardless
		// of the pixel's actual (usually much smaller) range size, corrupting
		// backward's range clipping (range.y = range.x + n_contrib).
		done = !in_range || cur_T < 0.0001f;

		if (in_range && !done)
		{
			for (int c = 0; c < CHANNELS; c++)
				C[c] += features[gid * CHANNELS + c] * alpha * T_before;
			D += depth[gid] * alpha * T_before;

			// MonoGS: record that this Gaussian is visible at this pixel.
			// T_before > 0.5 means the ray hasn't been mostly absorbed yet.
			// Must be atomic: multiple pixel-blocks can share a Gaussian.
			if (T_before > 0.5f)
				atomicAdd(&n_touched[gid], 1);
		}
		__syncthreads();
	}

	// Determine how many Gaussians this pixel's block actually examined
	// before stopping, and the true final T -- mirrors SPLATONIC's own
	// scheme (needed by BACKWARD to know where to resume, CU8 territory).
	int num_done = __syncthreads_count(done);
	if (num_done > 0)
	{
		if ((int)threadIdx.x == BLOCK_SIZE - num_done)
		{
			n_contrib[pix_id] = progress;
			final_T[pix_id] = cur_T;
			collected_T[0] = cur_T;
		}
	}
	else
	{
		if ((int)threadIdx.x == BLOCK_SIZE - 1)
		{
			n_contrib[pix_id] = progress + 1;
			final_T[pix_id] = T;
			collected_T[0] = T;
		}
	}
	__syncthreads();

	// Reduce this thread's private per-Gaussian accumulators across the whole
	// block: each thread only summed the Gaussians at its own lane position
	// across rounds, so the true per-pixel color/depth is the sum over all
	// BLOCK_SIZE threads, not just one thread's own partial view.
	__shared__ float collected_color[NUM_WARPS * CHANNELS];
	__shared__ float collected_depth_sum[NUM_WARPS];
	{
		const unsigned mask = __activemask();
		for (int c = 0; c < CHANNELS; c++)
		{
			float v = C[c];
			for (int offset = 1; offset < WARP_SIZE_EFF; offset <<= 1)
				v += __shfl_down_sync(mask, v, offset);
			if (lane == 0) collected_color[warp_idx * CHANNELS + c] = v;
		}
		float v = D;
		for (int offset = 1; offset < WARP_SIZE_EFF; offset <<= 1)
			v += __shfl_down_sync(mask, v, offset);
		if (lane == 0) collected_depth_sum[warp_idx] = v;
	}
	__syncthreads();

	if (warp_idx == 0)
	{
		const unsigned mask = __activemask();
		float T_final = collected_T[0];
		for (int c = 0; c < CHANNELS; c++)
		{
			float v = (lane < NUM_WARPS) ? collected_color[lane * CHANNELS + c] : 0.0f;
			for (int offset = 1; offset < WARP_SIZE_EFF; offset <<= 1)
				v += __shfl_down_sync(mask, v, offset);
			if (lane == 0 && inside)
				out_color[c * H * W + pix_id] = v + T_final * bg_color[c];
		}
		float dsum = (lane < NUM_WARPS) ? collected_depth_sum[lane] : 0.0f;
		for (int offset = 1; offset < WARP_SIZE_EFF; offset <<= 1)
			dsum += __shfl_down_sync(mask, dsum, offset);
		if (lane == 0 && inside)
		{
			out_depth[pix_id] = dsum;
			out_opacity[pix_id] = 1.0f - T_final;
		}
	}
}

void FORWARD::render(
	const dim3 grid, dim3 block,
	const uint2* ranges,
	const uint32_t* point_list,
	int W, int H,
	const float2* means2D,
	const float* colors,
	const float4* conic_opacity,
	float* final_T,
	uint32_t* n_contrib,
	const float* bg_color,
	float* out_color,
	const float* depth,
	float* out_depth,
	float* out_opacity,
	int* n_touched,
	const int2* pixel_coords,
	int num_pixels)
{
	renderCUDA<NUM_CHANNELS> << <grid, block >> > (
		ranges,
		point_list,
		W, H,
		means2D,
		colors,
		conic_opacity,
		final_T,
		n_contrib,
		bg_color,
		out_color,
		depth,
		out_depth,
		out_opacity,
		n_touched,
		pixel_coords,
		num_pixels);
}

void FORWARD::preprocess(int P, int D, int M,
	const float* means3D,
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
	const int* pixel_range,
	const int2* pixel_coords,
	int* num_rendered_ptr,
	uint64_t* gaussian_keys_unsorted,
	int* gaussian_values_unsorted,
	uint32_t* tiles_touched,
	bool prefiltered)
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
		pixel_range,
		pixel_coords,
		num_rendered_ptr,
		gaussian_keys_unsorted,
		gaussian_values_unsorted
		);
}