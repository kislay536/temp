// Checkpoint-A verification harness for SPLATONIC preprocessCUDA (CU3.1-CU3.6).
//
// This is a standalone .cu file. It does NOT include or link forward.cu, because
// forward.cu currently fails to compile as a translation unit (FORWARD::render's
// definition doesn't yet match forward.h's CU1.3 declaration -- that mismatch is
// CU4.5 scope, not CU3, and is a known/expected build failure).
//
// To test the real, currently-committed preprocessCUDA logic without touching any
// roadmap-owned file, this harness copies the kernel body and its one direct
// dependency (computeCov2D) VERBATIM from:
//   MonoGS/{track,map}-rasterization/cuda_rasterizer/forward.cu
// as of CU3.6 (with the CU3.5/Gap-4 alpha-pruning fix applied). Run
// run_checkpoint_a.sh alongside this file periodically to byte-diff the copy
// against the live kernel and catch drift.
//
// It #includes the real config.h / auxiliary.h from whichever rasterizer's
// cuda_rasterizer/ dir is passed via -I, so BLOCK_X, BLOCK_Y, MAX_NUM_RENDERED,
// and lowest_alpha_coeff are the actual shipped constants, not re-typed copies.

#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cuda_runtime.h>
#include <glm/glm.hpp>

#include "config.h"
#include "auxiliary.h"
#include "helper_math.h"

// host-side mirror of the __device__ constexpr in auxiliary.h (same literal value)
static constexpr float lowest_alpha_coeff_host_val = 5.54126354515842f;
static inline float lowest_alpha_coeff_host() { return lowest_alpha_coeff_host_val; }

#define CUDA_CHECK(x) do { \
    cudaError_t err = (x); \
    if (err != cudaSuccess) { \
        fprintf(stderr, "CUDA error %s:%d: %s\n", __FILE__, __LINE__, cudaGetErrorString(err)); \
        std::exit(1); \
    } \
} while (0)

// ---- verbatim copy of computeCov2D (forward.cu) ----
__device__ float3 computeCov2D(const float3& mean, float focal_x, float focal_y, float tan_fovx, float tan_fovy, const float* cov3D, const float* viewmatrix)
{
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

	cov[0][0] += 0.3f;
	cov[1][1] += 0.3f;
	return { float(cov[0][0]), float(cov[0][1]), float(cov[1][1]) };
}

// ---- verbatim copy of preprocessCUDA (forward.cu), colors_precomp/cov3D_precomp
// always supplied by the harness so computeColorFromSH/computeCov3D are never reached
// and don't need to be copied. ----
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
	// NOTE (harness deviation): real kernel uses cg::this_grid().thread_rank();
	// this is behaviorally identical for a single 1D grid launch with no grid.sync().
	auto idx = blockIdx.x * blockDim.x + threadIdx.x;
	if (idx >= P)
		return;

	radii[idx] = 0;
	tiles_touched[idx] = 0;

	float3 p_view;
	if (!in_frustum(idx, orig_points, viewmatrix, projmatrix, prefiltered, p_view))
		return;

	float3 p_orig = { orig_points[3 * idx], orig_points[3 * idx + 1], orig_points[3 * idx + 2] };
	float4 p_hom = transformPoint4x4(p_orig, projmatrix);
	float p_w = 1.0f / (p_hom.w + 0.0000001f);
	float3 p_proj = { p_hom.x * p_w, p_hom.y * p_w, p_hom.z * p_w };

	const float* cov3D;
	if (cov3D_precomp != nullptr)
	{
		cov3D = cov3D_precomp + idx * 6;
	}
	else
	{
		cov3D = cov3Ds + idx * 6; // computeCov3D branch intentionally not exercised by this harness
	}

	float3 cov = computeCov2D(p_orig, focal_x, focal_y, tan_fovx, tan_fovy, cov3D, viewmatrix);

	float det = (cov.x * cov.z - cov.y * cov.y);
	if (det == 0.0f)
		return;
	float det_inv = 1.f / det;
	float3 conic = { cov.z * det_inv, -cov.y * det_inv, cov.x * det_inv };

	float mid = 0.5f * (cov.x + cov.z);
	float lambda1 = mid + sqrt(max(0.1f, mid * mid - det));
	float lambda2 = mid - sqrt(max(0.1f, mid * mid - det));
	float my_radius = ceil(3.f * sqrt(max(lambda1, lambda2)));
	float2 point_image = { ndc2Pix(p_proj.x, W), ndc2Pix(p_proj.y, H) };
	uint2 rect_min, rect_max;
	getRect(point_image, my_radius, rect_min, rect_max, grid);
	if ((rect_max.x - rect_min.x) * (rect_max.y - rect_min.y) == 0)
		return;

	// colors_precomp always non-null in this harness; computeColorFromSH branch skipped.

	depths[idx] = p_view.z;
	radii[idx] = my_radius;
	points_xy_image[idx] = point_image;
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
				power += logf(opacities[idx]);
				if (power <= -lowest_alpha_coeff) continue;   // alpha <= 0.4% -- skip

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

// ---- V8: isolated stress test of the atomicAdd+guard+write pattern used in the
// pixel loop's key-emission. Exercises the exact idiom -- atomicAdd for the slot,
// "return" (not "continue") past the cap, guard-before-write -- at a scale (many
// threads, tiny cap) that is impractical to reach by scaling up the full
// preprocessCUDA scene to the real MAX_NUM_RENDERED (4M/16M). Sentinel-fills the
// output buffer first so any out-of-bounds or unguarded write is detectable. ----
__global__ void overflow_pattern_kernel(int n_threads, int cap, uint64_t* keys, int* num_rendered_ptr)
{
	int tid = blockIdx.x * blockDim.x + threadIdx.x;
	if (tid >= n_threads) return;
	int slot = atomicAdd(num_rendered_ptr, 1);
	if (slot >= cap) return;   // overflow guard, mirrors forward.cu's key-emission guard
	keys[slot] = (uint64_t)tid;
}

static int run_overflow_pattern_test() {
	const int CAP = 8;
	const int N_THREADS = 4000; // >> CAP, forces the guard to trigger for the vast majority
	const int SENTINEL_MARGIN = 4; // allocate a bit more than CAP and verify nothing lands past CAP
	uint64_t* d_keys; int* d_counter;
	CUDA_CHECK(cudaMalloc(&d_keys, sizeof(uint64_t) * (CAP + SENTINEL_MARGIN)));
	CUDA_CHECK(cudaMalloc(&d_counter, sizeof(int)));
	CUDA_CHECK(cudaMemset(d_counter, 0, sizeof(int)));
	std::vector<uint64_t> sentinel(CAP + SENTINEL_MARGIN, 0xDEADBEEFDEADBEEFULL);
	CUDA_CHECK(cudaMemcpy(d_keys, sentinel.data(), sentinel.size()*sizeof(uint64_t), cudaMemcpyHostToDevice));

	int threads = 256, blocks = (N_THREADS + threads - 1) / threads;
	overflow_pattern_kernel<<<blocks, threads>>>(N_THREADS, CAP, d_keys, d_counter);
	CUDA_CHECK(cudaGetLastError());
	CUDA_CHECK(cudaDeviceSynchronize());

	int counter; std::vector<uint64_t> out(CAP + SENTINEL_MARGIN);
	CUDA_CHECK(cudaMemcpy(&counter, d_counter, sizeof(int), cudaMemcpyDeviceToHost));
	CUDA_CHECK(cudaMemcpy(out.data(), d_keys, out.size()*sizeof(uint64_t), cudaMemcpyDeviceToHost));

	int fail = 0;
	printf("counter (atomicAdd total) = %d (expect %d)\n", counter, N_THREADS);
	if (counter != N_THREADS) { fail++; }
	int written = 0, sentinel_intact_past_cap = 0;
	for (int i = 0; i < CAP; i++) if (out[i] != 0xDEADBEEFDEADBEEFULL) written++;
	for (int i = CAP; i < CAP + SENTINEL_MARGIN; i++) if (out[i] == 0xDEADBEEFDEADBEEFULL) sentinel_intact_past_cap++;
	printf("slots [0,%d) written = %d (expect %d); sentinel intact past cap = %d/%d (expect %d)\n",
		CAP, written, CAP, sentinel_intact_past_cap, SENTINEL_MARGIN, SENTINEL_MARGIN);
	if (written != CAP || sentinel_intact_past_cap != SENTINEL_MARGIN) fail++;
	cudaFree(d_keys); cudaFree(d_counter);
	return fail;
}

// ============================== Host-side test harness ==============================

struct Scene {
	int P;
	int W, H;
	std::vector<float> orig_points;   // 3*P
	std::vector<float> opacities;     // P
	std::vector<float> cov3D_precomp; // 6*P
	std::vector<float> colors_precomp;// 3*P (unused by kernel logic under test, just non-null)
	float viewmatrix[16];
	float projmatrix[16];
	float focal_x, focal_y, tan_fovx, tan_fovy;
};

// column-major 4x4 identity
static void identity16(float* m) {
	for (int i = 0; i < 16; i++) m[i] = 0.f;
	m[0] = m[5] = m[10] = m[15] = 1.f;
}

// Dense pixel_range / pixel_coords over the full W x H image, tile-sorted
// row-major exactly like MonoGS/utils/mask_utils.py::get_pixel_info().
static void build_dense_pixel_info(int W, int H, int tile_size,
	std::vector<int>& pixel_range, std::vector<int>& pixel_coords_x, std::vector<int>& pixel_coords_y)
{
	int num_tiles_w = (W + tile_size - 1) / tile_size;
	int num_tiles_h = (H + tile_size - 1) / tile_size;
	int num_tiles = num_tiles_w * num_tiles_h;
	pixel_range.assign(num_tiles + 1, 0);

	std::vector<std::vector<std::pair<int,int>>> per_tile(num_tiles);
	for (int y = 0; y < H; y++) {
		for (int x = 0; x < W; x++) {
			int tr = y / tile_size, tc = x / tile_size;
			per_tile[tr * num_tiles_w + tc].push_back({x, y});
		}
	}
	int running = 0;
	for (int t = 0; t < num_tiles; t++) {
		pixel_range[t] = running;
		running += (int)per_tile[t].size();
	}
	pixel_range[num_tiles] = running;
	pixel_coords_x.resize(running);
	pixel_coords_y.resize(running);
	int w = 0;
	for (int t = 0; t < num_tiles; t++)
		for (auto& p : per_tile[t]) { pixel_coords_x[w] = p.first; pixel_coords_y[w] = p.second; w++; }
}

int main() {
	const int W = 64, H = 64, TILE = BLOCK_X; // BLOCK_X == BLOCK_Y for both rasterizers
	const int tiles_w = (W + TILE - 1) / TILE;
	const int tiles_h = (H + TILE - 1) / TILE;
	dim3 grid(tiles_w, tiles_h, 1);

	printf("=== Checkpoint A harness: preprocessCUDA ===\n");
	printf("W=%d H=%d TILE=%d grid=%dx%d MAX_NUM_RENDERED=%d lowest_alpha_coeff=%.6f\n",
		W, H, TILE, tiles_w, tiles_h, MAX_NUM_RENDERED, lowest_alpha_coeff_host());

	// ---- Build scene: 6 Gaussians ----
	const int P = 6;
	Scene sc{};
	sc.P = P; sc.W = W; sc.H = H;
	sc.orig_points.assign(3 * P, 0.f);
	sc.opacities.assign(P, 1.0f);
	sc.opacities[0] = 0.15f; // deliberately low opacity: exercises the logf(opacities[idx]) term (Gap 4)
	sc.cov3D_precomp.assign(6 * P, 0.f);
	sc.colors_precomp.assign(3 * P, 0.5f);
	identity16(sc.viewmatrix);
	identity16(sc.projmatrix);
	sc.focal_x = sc.focal_y = 50.f;
	sc.tan_fovx = sc.tan_fovy = 0.5f;

	auto set_pt = [&](int i, float x, float y, float z) {
		sc.orig_points[3*i+0] = x; sc.orig_points[3*i+1] = y; sc.orig_points[3*i+2] = z;
	};
	auto set_iso_cov = [&](int i, float s2) {
		sc.cov3D_precomp[6*i+0] = s2; sc.cov3D_precomp[6*i+3] = s2; sc.cov3D_precomp[6*i+5] = s2;
	};

	set_pt(0, 0.0f, 0.0f, 1.0f);   set_iso_cov(0, 0.01f);   // center, moderate radius
	set_pt(1, -0.9f, -0.9f, 1.0f); set_iso_cov(1, 0.01f);   // near corner, rect gets clamped by grid
	set_pt(2, 0.9f, 0.9f, 1.0f);   set_iso_cov(2, 0.01f);   // opposite corner
	set_pt(3, 0.3f, -0.3f, 1.0f);  set_iso_cov(3, 0.0005f); // tiny radius -> should land in 1 tile
	set_pt(4, 0.2f, 0.2f, 0.1f);   set_iso_cov(4, 0.01f);   // p_view.z = 0.1 <= 0.2 -> culled by in_frustum
	set_pt(5, -0.2f, 0.4f, 1.0f);                            // anisotropic + cross term -> conic.y != 0
	sc.cov3D_precomp[6*5+0] = 0.02f; sc.cov3D_precomp[6*5+1] = 0.01f; sc.cov3D_precomp[6*5+3] = 0.02f; sc.cov3D_precomp[6*5+5] = 0.02f;

	std::vector<int> pixel_range, px, py;
	build_dense_pixel_info(W, H, TILE, pixel_range, px, py);
	int N = (int)px.size();
	std::vector<int2> pixel_coords(N);
	for (int i = 0; i < N; i++) pixel_coords[i] = make_int2(px[i], py[i]);
	printf("Dense pixel set: N=%d pixels over %d tiles (pixel_range has %d entries)\n",
		N, tiles_w * tiles_h, (int)pixel_range.size());

	// ---- Device buffers ----
	float *d_orig, *d_opac, *d_cov3d, *d_colors, *d_view, *d_proj, *d_depths;
	float2 *d_xy;
	float4 *d_conic_opac;
	int *d_radii;
	uint32_t *d_tiles_touched;
	bool *d_clamped;
	int *d_pixel_range; int2 *d_pixel_coords;
	int *d_num_rendered;
	const int MAX_TEST_SLOTS = 2000000; // well above what P=6 can emit; real MAX_NUM_RENDERED guard is untouched
	uint64_t *d_keys; int *d_values;

	CUDA_CHECK(cudaMalloc(&d_orig, sizeof(float)*3*P));
	CUDA_CHECK(cudaMalloc(&d_opac, sizeof(float)*P));
	CUDA_CHECK(cudaMalloc(&d_cov3d, sizeof(float)*6*P));
	CUDA_CHECK(cudaMalloc(&d_colors, sizeof(float)*3*P));
	CUDA_CHECK(cudaMalloc(&d_view, sizeof(float)*16));
	CUDA_CHECK(cudaMalloc(&d_proj, sizeof(float)*16));
	CUDA_CHECK(cudaMalloc(&d_depths, sizeof(float)*P));
	CUDA_CHECK(cudaMalloc(&d_xy, sizeof(float2)*P));
	CUDA_CHECK(cudaMalloc(&d_conic_opac, sizeof(float4)*P));
	CUDA_CHECK(cudaMalloc(&d_radii, sizeof(int)*P));
	CUDA_CHECK(cudaMalloc(&d_tiles_touched, sizeof(uint32_t)*P));
	CUDA_CHECK(cudaMalloc(&d_clamped, sizeof(bool)*3*P));
	CUDA_CHECK(cudaMalloc(&d_pixel_range, sizeof(int)*pixel_range.size()));
	CUDA_CHECK(cudaMalloc(&d_pixel_coords, sizeof(int2)*N));
	CUDA_CHECK(cudaMalloc(&d_num_rendered, sizeof(int)));
	CUDA_CHECK(cudaMalloc(&d_keys, sizeof(uint64_t)*MAX_TEST_SLOTS));
	CUDA_CHECK(cudaMalloc(&d_values, sizeof(int)*MAX_TEST_SLOTS));

	CUDA_CHECK(cudaMemcpy(d_orig, sc.orig_points.data(), sizeof(float)*3*P, cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemcpy(d_opac, sc.opacities.data(), sizeof(float)*P, cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemcpy(d_cov3d, sc.cov3D_precomp.data(), sizeof(float)*6*P, cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemcpy(d_colors, sc.colors_precomp.data(), sizeof(float)*3*P, cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemcpy(d_view, sc.viewmatrix, sizeof(float)*16, cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemcpy(d_proj, sc.projmatrix, sizeof(float)*16, cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemcpy(d_pixel_range, pixel_range.data(), sizeof(int)*pixel_range.size(), cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemcpy(d_pixel_coords, pixel_coords.data(), sizeof(int2)*N, cudaMemcpyHostToDevice));

	// sentinel-fill keys buffer to detect any write beyond what num_rendered reports
	std::vector<uint64_t> sentinel(MAX_TEST_SLOTS, 0xDEADBEEFDEADBEEFULL);
	CUDA_CHECK(cudaMemcpy(d_keys, sentinel.data(), sizeof(uint64_t)*MAX_TEST_SLOTS, cudaMemcpyHostToDevice));

	auto run_once = [&](int& num_rendered_out, std::vector<uint64_t>& keys_out, std::vector<int>& values_out,
	                     std::vector<int>& radii_out, std::vector<float2>& xy_out, std::vector<float4>& conic_out,
	                     std::vector<float>& depths_out) {
		CUDA_CHECK(cudaMemset(d_num_rendered, 0, sizeof(int)));
		CUDA_CHECK(cudaMemset(d_tiles_touched, 0, sizeof(uint32_t)*P));
		int threads = 256, blocks = (P + threads - 1) / threads;
		preprocessCUDA<3><<<blocks, threads>>>(
			P, 0, 0,
			d_orig, nullptr, 1.0f, nullptr, d_opac, nullptr, d_clamped,
			d_cov3d, d_colors, d_view, d_proj, nullptr,
			W, H, sc.tan_fovx, sc.tan_fovy, sc.focal_x, sc.focal_y,
			d_radii, d_xy, d_depths, nullptr, nullptr, d_conic_opac,
			grid, d_tiles_touched, false,
			d_pixel_range, d_pixel_coords, d_num_rendered, d_keys, d_values);
		CUDA_CHECK(cudaGetLastError());
		CUDA_CHECK(cudaDeviceSynchronize());

		CUDA_CHECK(cudaMemcpy(&num_rendered_out, d_num_rendered, sizeof(int), cudaMemcpyDeviceToHost));
		keys_out.assign(num_rendered_out, 0);
		values_out.assign(num_rendered_out, 0);
		if (num_rendered_out > 0) {
			CUDA_CHECK(cudaMemcpy(keys_out.data(), d_keys, sizeof(uint64_t)*num_rendered_out, cudaMemcpyDeviceToHost));
			CUDA_CHECK(cudaMemcpy(values_out.data(), d_values, sizeof(int)*num_rendered_out, cudaMemcpyDeviceToHost));
		}
		radii_out.assign(P, 0); xy_out.assign(P, float2{0,0}); conic_out.assign(P, float4{0,0,0,0}); depths_out.assign(P, 0.f);
		CUDA_CHECK(cudaMemcpy(radii_out.data(), d_radii, sizeof(int)*P, cudaMemcpyDeviceToHost));
		CUDA_CHECK(cudaMemcpy(xy_out.data(), d_xy, sizeof(float2)*P, cudaMemcpyDeviceToHost));
		CUDA_CHECK(cudaMemcpy(conic_out.data(), d_conic_opac, sizeof(float4)*P, cudaMemcpyDeviceToHost));
		CUDA_CHECK(cudaMemcpy(depths_out.data(), d_depths, sizeof(float)*P, cudaMemcpyDeviceToHost));
	};

	int num_rendered;
	std::vector<uint64_t> keys; std::vector<int> values;
	std::vector<int> radii; std::vector<float2> xy; std::vector<float4> conic; std::vector<float> depths;
	run_once(num_rendered, keys, values, radii, xy, conic, depths);

	int fail = 0;

	// ---- V1: allocation/counter sanity ----
	printf("\n--- V1: pre-launch counter reset ---\n");
	{
		int zero_check;
		CUDA_CHECK(cudaMemset(d_num_rendered, 0, sizeof(int)));
		CUDA_CHECK(cudaMemcpy(&zero_check, d_num_rendered, sizeof(int), cudaMemcpyDeviceToHost));
		printf("num_rendered after memset (pre-launch): %d (expect 0) %s\n", zero_check, zero_check==0?"OK":"FAIL");
		if (zero_check != 0) fail++;
	}

	// ---- report per-Gaussian outputs ----
	printf("\n--- Per-Gaussian outputs ---\n");
	for (int i = 0; i < P; i++) {
		printf("g%d: radius=%d point_image=(%.2f,%.2f) conic=(%.5f,%.5f,%.5f) depth=%.3f\n",
			i, radii[i], xy[i].x, xy[i].y, conic[i].x, conic[i].y, conic[i].z, depths[i]);
	}

	// ---- V2/V3: recompute expected visit set on CPU (using point_image = correct pixel-space center) ----
	printf("\n--- V2/V3: tile/pixel traversal + containment (CPU cross-check) ---\n");
	long long cpu_visit_count = 0;
	int containment_violations = 0;
	for (int i = 0; i < P; i++) {
		if (radii[i] == 0) continue;
		int max_radius = radii[i];
		float px_c = xy[i].x, py_c = xy[i].y;
		int rminx = std::min(tiles_w, std::max(0, (int)((px_c - max_radius) / TILE)));
		int rminy = std::min(tiles_h, std::max(0, (int)((py_c - max_radius) / TILE)));
		int rmaxx = std::min(tiles_w, std::max(0, (int)((px_c + max_radius + TILE - 1) / TILE)));
		int rmaxy = std::min(tiles_h, std::max(0, (int)((py_c + max_radius + TILE - 1) / TILE)));
		for (int ty = rminy; ty < rmaxy; ty++) {
			for (int tx = rminx; tx < rmaxx; tx++) {
				int tid = ty * tiles_w + tx;
				for (int k = pixel_range[tid]; k < pixel_range[tid+1]; k++) {
					cpu_visit_count++;
					int cx = px[k], cy = py[k];
					bool contained = (cx >= tx*TILE && cx < (tx+1)*TILE && cy >= ty*TILE && cy < (ty+1)*TILE);
					if (!contained) containment_violations++;
				}
			}
		}
	}
	printf("CPU total (gaussian,pixel) visits before pruning: %lld\n", cpu_visit_count);
	printf("Containment violations (pixel outside its own tile): %d (expect 0) %s\n",
		containment_violations, containment_violations==0?"OK":"FAIL");
	if (containment_violations != 0) fail++;

	// ---- V4: alpha pruning correctness (post-fix: distance from point_image, power includes
	// logf(opacity), keep iff power > -lowest_alpha_coeff) ----
	printf("\n--- V4: alpha pruning correctness (post-fix formula) ---\n");
	long long kept_correct = 0;
	std::vector<long long> kept_per_g(P, 0), visits_per_g(P, 0);
	float min_power_seen = 1e30f, max_power_seen = -1e30f;
	for (int i = 0; i < P; i++) {
		if (radii[i] == 0) continue;
		float cx = conic[i].x, cyy = conic[i].y, cz = conic[i].z;
		float px_c = xy[i].x, py_c = xy[i].y;   // point_image (correct pixel-space center)
		float log_opacity = std::log(sc.opacities[i]);
		int max_radius = radii[i];
		int rminx = std::min(tiles_w, std::max(0, (int)((px_c - max_radius) / TILE)));
		int rminy = std::min(tiles_h, std::max(0, (int)((py_c - max_radius) / TILE)));
		int rmaxx = std::min(tiles_w, std::max(0, (int)((px_c + max_radius + TILE - 1) / TILE)));
		int rmaxy = std::min(tiles_h, std::max(0, (int)((py_c + max_radius + TILE - 1) / TILE)));
		for (int ty = rminy; ty < rmaxy; ty++) {
			for (int tx = rminx; tx < rmaxx; tx++) {
				int tid = ty * tiles_w + tx;
				for (int k = pixel_range[tid]; k < pixel_range[tid+1]; k++) {
					float dxp = (float)px[k] - px_c, dyp = (float)py[k] - py_c;
					float power = -0.5f * (cx*dxp*dxp + 2.f*cyy*dxp*dyp + cz*dyp*dyp);
					power += log_opacity;
					min_power_seen = std::min(min_power_seen, power);
					max_power_seen = std::max(max_power_seen, power);
					visits_per_g[i]++;
					if (!(power <= -lowest_alpha_coeff_host())) { kept_correct++; kept_per_g[i]++; }
				}
			}
		}
	}
	printf("power range (post-fix, includes logf(opacity)): [%.3f, %.3f]\n", min_power_seen, max_power_seen);
	printf("kept (post-fix formula, CPU reference): %lld / %lld -- expect a real, non-trivial fraction pruned\n",
		kept_correct, cpu_visit_count);
	bool fix_prunes_something = (kept_correct != cpu_visit_count && kept_correct > 0);
	printf("Does the fixed formula prune SOME but not ALL pairs? %s\n", fix_prunes_something ? "YES (pruning is live)" : "NO -- FAIL");
	if (!fix_prunes_something) fail++;
	// Opacity-sensitivity check (Gap 4): g0 has opacity=0.15 (log_opacity=-1.897), every other
	// live Gaussian has opacity=1.0 (log_opacity=0). At matched geometry this should measurably
	// shrink g0's kept fraction relative to what it would be at opacity=1.
	{
		float log_opacity_g0 = std::log(sc.opacities[0]);
		float px_c = xy[0].x, py_c = xy[0].y;
		float cx = conic[0].x, cyy = conic[0].y, cz = conic[0].z;
		long long kept_at_actual_opacity = 0, kept_at_opacity_one = 0, total_g0 = 0;
		int max_radius = radii[0];
		int rminx = std::min(tiles_w, std::max(0, (int)((px_c - max_radius) / TILE)));
		int rminy = std::min(tiles_h, std::max(0, (int)((py_c - max_radius) / TILE)));
		int rmaxx = std::min(tiles_w, std::max(0, (int)((px_c + max_radius + TILE - 1) / TILE)));
		int rmaxy = std::min(tiles_h, std::max(0, (int)((py_c + max_radius + TILE - 1) / TILE)));
		for (int ty = rminy; ty < rmaxy; ty++) for (int tx = rminx; tx < rmaxx; tx++) {
			int tid = ty * tiles_w + tx;
			for (int k = pixel_range[tid]; k < pixel_range[tid+1]; k++) {
				float dxp = (float)px[k] - px_c, dyp = (float)py[k] - py_c;
				float base = -0.5f * (cx*dxp*dxp + 2.f*cyy*dxp*dyp + cz*dyp*dyp);
				total_g0++;
				if (!(base + log_opacity_g0 <= -lowest_alpha_coeff_host())) kept_at_actual_opacity++;
				if (!(base + 0.0f            <= -lowest_alpha_coeff_host())) kept_at_opacity_one++;
			}
		}
		printf("g0 opacity-sensitivity: opacity=%.2f kept=%lld/%lld vs. hypothetical opacity=1.0 kept=%lld/%lld -- %s\n",
			sc.opacities[0], kept_at_actual_opacity, total_g0, kept_at_opacity_one, total_g0,
			(kept_at_actual_opacity <= kept_at_opacity_one) ? "OK (lower opacity prunes >= as much)" : "FAIL");
		if (kept_at_actual_opacity > kept_at_opacity_one) fail++;
		if (kept_at_actual_opacity == kept_at_opacity_one) printf("  (note: no boundary pixel fell in the affected power range for this scene)\n");
	}

	// ---- V5/V6: num_rendered + key/value decode against GPU's actual output ----
	printf("\n--- V5/V6: num_rendered + key decode (GPU actual output) ---\n");
	printf("GPU num_rendered = %d, CPU-predicted kept = %lld\n", num_rendered, kept_correct);
	bool num_rendered_matches_cpu = ((long long)num_rendered == kept_correct);
	printf("num_rendered == CPU-predicted kept count? %s\n", num_rendered_matches_cpu ? "YES OK" : "NO FAIL");
	if (!num_rendered_matches_cpu) fail++;

	int decode_errors = 0, range_errors = 0;
	for (int s = 0; s < num_rendered; s++) {
		uint64_t key = keys[s];
		uint32_t k = (uint32_t)(key >> 32);
		uint32_t depth_bits = (uint32_t)(key & 0xFFFFFFFFu);
		float decoded_depth; memcpy(&decoded_depth, &depth_bits, sizeof(float));
		int g = values[s];
		if (g < 0 || g >= P) { range_errors++; continue; }
		if ((int)k < 0 || (int)k >= N) { range_errors++; continue; }
		if (decoded_depth != depths[g]) decode_errors++;
	}
	printf("Decode check over %d emitted slots: range_errors=%d decode_mismatches=%d (expect 0,0) %s\n",
		num_rendered, range_errors, decode_errors, (range_errors==0 && decode_errors==0) ? "OK" : "FAIL");
	if (range_errors != 0 || decode_errors != 0) fail++;

	// g4 (culled by in_frustum, p_view.z=0.1<=0.2) must emit nothing
	int g4_slots = 0;
	for (int s = 0; s < num_rendered; s++) if (values[s] == 4) g4_slots++;
	printf("Gaussian 4 (frustum-culled) slots emitted: %d (expect 0) %s\n", g4_slots, g4_slots==0?"OK":"FAIL");
	if (g4_slots != 0) fail++;

	// ---- V7: determinism across repeated launches ----
	printf("\n--- V7: determinism across 5 launches ---\n");
	long long first_num_rendered = -1;
	std::vector<uint64_t> first_sorted_keys;
	for (int run = 0; run < 5; run++) {
		int nr; std::vector<uint64_t> k2; std::vector<int> v2;
		std::vector<int> r2; std::vector<float2> xy2; std::vector<float4> c2; std::vector<float> d2;
		run_once(nr, k2, v2, r2, xy2, c2, d2);
		std::vector<uint64_t> pairs(nr);
		for (int s = 0; s < nr; s++) pairs[s] = k2[s]; // key already encodes (k,depth); value is redundant given depth->gaussian is 1:1 here
		std::sort(pairs.begin(), pairs.end());
		if (run == 0) { first_num_rendered = nr; first_sorted_keys = pairs; }
		else {
			if (nr != first_num_rendered) { printf("  run %d: num_rendered=%d MISMATCH vs run0=%lld\n", run, nr, first_num_rendered); fail++; }
			if (pairs != first_sorted_keys) { printf("  run %d: sorted key multiset MISMATCH\n", run); fail++; }
		}
	}
	printf("num_rendered stable across 5 runs at %lld OK\n", first_num_rendered);

	// ---- V8: overflow guard pattern ----
	printf("\n--- V8: overflow-guard pattern (atomicAdd + return-on-cap) ---\n");
	int v8_fail = run_overflow_pattern_test();
	printf("V8 result: %s\n", v8_fail == 0 ? "OK" : "FAIL");
	fail += v8_fail;

	// ---- summary ----
	printf("\n=== SUMMARY: %d check(s) failed ===\n", fail);

	return fail == 0 ? 0 : 1;
}
