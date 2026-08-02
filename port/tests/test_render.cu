// Checkpoint B: end-to-end verification of CudaRasterizer::Rasterizer::forward()
// after CU4.1-CU4.5 (dispatch) and CU5.1-CU5.6 (sparse renderCUDA). Links directly
// against the REAL, now-compiling rasterizer_impl.cu + forward.cu (no copying),
// since neither needs rasterize_points.cu/ext.cpp (still CU6.1-blocked) to build.
//
// Compares GPU output color/depth/opacity/final_T against a from-scratch CPU
// brute-force reference that mirrors preprocessCUDA's pruning gate (distance from
// point_image, + logf(opacity), threshold at lowest_alpha_coeff) to decide which
// (Gaussian, pixel) pairs preprocessCUDA would emit, then composites them
// front-to-back at each pixel using renderCUDA's own alpha formula
// (alpha = opacity * exp(power), no log-opacity folded in -- see forward.cu).

#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <vector>
#include <algorithm>
#include <cmath>
#include <functional>
#include <cuda_runtime.h>
#include <glm/glm.hpp>

#include "rasterizer.h"
#include "config.h"
#include "auxiliary.h"

#define CUDA_CHECK(x) do { \
    cudaError_t err = (x); \
    if (err != cudaSuccess) { \
        fprintf(stderr, "CUDA error %s:%d: %s\n", __FILE__, __LINE__, cudaGetErrorString(err)); \
        std::exit(1); \
    } \
} while (0)

static constexpr float LOWEST_ALPHA_COEFF = 5.54126354515842f;

static void identity16(float* m) {
	for (int i = 0; i < 16; i++) m[i] = 0.f;
	m[0] = m[5] = m[10] = m[15] = 1.f;
}

static void build_dense_pixel_info(int W, int H, int tile_size,
	std::vector<int>& pixel_range, std::vector<int>& px, std::vector<int>& py)
{
	int tw = (W + tile_size - 1) / tile_size, th = (H + tile_size - 1) / tile_size;
	int num_tiles = tw * th;
	pixel_range.assign(num_tiles + 1, 0);
	std::vector<std::vector<std::pair<int,int>>> per_tile(num_tiles);
	for (int y = 0; y < H; y++)
		for (int x = 0; x < W; x++)
			per_tile[(y/tile_size) * tw + (x/tile_size)].push_back({x, y});
	int running = 0;
	for (int t = 0; t < num_tiles; t++) { pixel_range[t] = running; running += (int)per_tile[t].size(); }
	pixel_range[num_tiles] = running;
	px.resize(running); py.resize(running);
	int w = 0;
	for (int t = 0; t < num_tiles; t++)
		for (auto& p : per_tile[t]) { px[w] = p.first; py[w] = p.second; w++; }
}

// CPU replica of getRect (auxiliary.h)
static void cpu_get_rect(float cx, float cy, int radius, int tw, int th, int tile,
	int& rminx, int& rminy, int& rmaxx, int& rmaxy)
{
	rminx = std::min(tw, std::max(0, (int)((cx - radius) / tile)));
	rminy = std::min(th, std::max(0, (int)((cy - radius) / tile)));
	rmaxx = std::min(tw, std::max(0, (int)((cx + radius + tile - 1) / tile)));
	rmaxy = std::min(th, std::max(0, (int)((cy + radius + tile - 1) / tile)));
}

struct GaussianCPU {
	float x, y, z;      // world (== NDC == pixel-space-pre-ndc2Pix since view/proj are identity)
	float s2;            // isotropic covariance (world)
	float opacity;
	float color[3];
};

int main() {
	const int W = 16, H = 16, TILE = BLOCK_X;
	const int tw = (W + TILE - 1) / TILE, th = (H + TILE - 1) / TILE;
	printf("=== Checkpoint B: end-to-end Rasterizer::forward() ===\n");
	printf("W=%d H=%d TILE=%d tiles=%dx%d BLOCK_SIZE=%d NUM_WARPS=%d\n", W, H, TILE, tw, th, BLOCK_SIZE, NUM_WARPS);

	// ---- Scene: 5 Gaussians, identity view/proj so world xyz == NDC xy, z == depth ----
	std::vector<GaussianCPU> g = {
		{ 0.0f,  0.0f, 1.0f, 0.01f, 0.8f, {1.f, 0.f, 0.f} },  // nearest, red
		{ 0.05f, 0.0f, 2.0f, 0.01f, 0.6f, {0.f, 1.f, 0.f} },  // mid, green, slightly offset, still overlaps g0
		{ 0.0f,  0.05f,3.0f, 0.01f, 0.9f, {0.f, 0.f, 1.f} },  // farthest, blue, overlaps g0/g1
		{ 0.7f,  0.7f, 1.5f, 0.005f,1.0f, {1.f, 1.f, 1.f} },  // isolated corner, white, opacity 1
		{ -0.2f,-0.2f, 0.1f, 0.01f, 1.0f, {0.f, 0.f, 0.f} },  // frustum-culled (z=0.1 <= 0.2)
	};
	// Stress test: stack many overlapping Gaussians at the same pixel to force
	// multiple rounds (round = BLOCK_SIZE Gaussians) on BOTH track (256) and
	// map (16) -- the previous 5-Gaussian scene never exceeded 1 round, which
	// would not have caught a cross-round carry-over bug (exactly the class of
	// bug found and fixed above).
	const int STACK_N = 600;
	for (int i = 0; i < STACK_N; i++) {
		float z = 0.5f + 0.03f * i;                    // depths 0.5 .. ~18.5, strictly increasing
		float opacity = 0.15f + 0.6f * ((i * 37) % 100) / 100.0f; // deterministic pseudo-random in [0.15,0.75)
		float col = ((i * 13) % 100) / 100.0f;
		g.push_back({ 0.02f, -0.02f, z, 0.02f, opacity, { col, 1.0f - col, 0.5f } });
	}
	const int P = (int)g.size();
	printf("Total Gaussians (incl. stack): %d\n", P);
	const float bg[3] = { 0.1f, 0.2f, 0.3f };

	std::vector<float> means3D(3*P), opacities(P), cov3D(6*P), colors(3*P);
	for (int i = 0; i < P; i++) {
		means3D[3*i+0]=g[i].x; means3D[3*i+1]=g[i].y; means3D[3*i+2]=g[i].z;
		opacities[i]=g[i].opacity;
		cov3D[6*i+0]=g[i].s2; cov3D[6*i+3]=g[i].s2; cov3D[6*i+5]=g[i].s2;
		colors[3*i+0]=g[i].color[0]; colors[3*i+1]=g[i].color[1]; colors[3*i+2]=g[i].color[2];
	}
	float viewmatrix[16], projmatrix[16]; identity16(viewmatrix); identity16(projmatrix);
	const float tan_fov = 0.5f;
	const float focal = W / (2.0f * tan_fov); // must match Rasterizer::forward()'s own focal_x/y derivation

	std::vector<int> pixel_range, px, py;
	build_dense_pixel_info(W, H, TILE, pixel_range, px, py);
	int N = (int)px.size();
	std::vector<int> pixel_coords_flat(2*N);
	for (int i = 0; i < N; i++) { pixel_coords_flat[2*i]=px[i]; pixel_coords_flat[2*i+1]=py[i]; }

	// ---- device buffers for Rasterizer::forward()'s flat interface ----
	float *d_means3D, *d_opac, *d_cov3d, *d_colors, *d_view, *d_proj, *d_bg;
	int *d_pixel_range, *d_pixel_coords;
	float *d_out_color, *d_out_depth, *d_out_opacity;
	int *d_radii, *d_n_touched;

	CUDA_CHECK(cudaMalloc(&d_means3D, sizeof(float)*3*P));
	CUDA_CHECK(cudaMalloc(&d_opac, sizeof(float)*P));
	CUDA_CHECK(cudaMalloc(&d_cov3d, sizeof(float)*6*P));
	CUDA_CHECK(cudaMalloc(&d_colors, sizeof(float)*3*P));
	CUDA_CHECK(cudaMalloc(&d_view, sizeof(float)*16));
	CUDA_CHECK(cudaMalloc(&d_proj, sizeof(float)*16));
	CUDA_CHECK(cudaMalloc(&d_bg, sizeof(float)*3));
	CUDA_CHECK(cudaMalloc(&d_pixel_range, sizeof(int)*pixel_range.size()));
	CUDA_CHECK(cudaMalloc(&d_pixel_coords, sizeof(int)*2*N));
	CUDA_CHECK(cudaMalloc(&d_out_color, sizeof(float)*3*W*H));
	CUDA_CHECK(cudaMalloc(&d_out_depth, sizeof(float)*W*H));
	CUDA_CHECK(cudaMalloc(&d_out_opacity, sizeof(float)*W*H));
	CUDA_CHECK(cudaMalloc(&d_radii, sizeof(int)*P));
	CUDA_CHECK(cudaMalloc(&d_n_touched, sizeof(int)*P));

	CUDA_CHECK(cudaMemcpy(d_means3D, means3D.data(), sizeof(float)*3*P, cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemcpy(d_opac, opacities.data(), sizeof(float)*P, cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemcpy(d_cov3d, cov3D.data(), sizeof(float)*6*P, cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemcpy(d_colors, colors.data(), sizeof(float)*3*P, cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemcpy(d_view, viewmatrix, sizeof(float)*16, cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemcpy(d_proj, projmatrix, sizeof(float)*16, cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemcpy(d_bg, bg, sizeof(float)*3, cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemcpy(d_pixel_range, pixel_range.data(), sizeof(int)*pixel_range.size(), cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemcpy(d_pixel_coords, pixel_coords_flat.data(), sizeof(int)*2*N, cudaMemcpyHostToDevice));
	CUDA_CHECK(cudaMemset(d_n_touched, 0, sizeof(int)*P));

	std::vector<char*> allocs;
	auto make_buffer = [&](size_t n) -> char* {
		char* p; CUDA_CHECK(cudaMalloc(&p, n)); allocs.push_back(p); return p;
	};

	int num_rendered = CudaRasterizer::Rasterizer::forward(
		make_buffer, make_buffer, make_buffer,
		P, 0, 0,
		d_bg, W, H,
		d_means3D, nullptr, d_colors, d_opac,
		nullptr, 1.0f, nullptr,
		d_cov3d,
		d_view, d_proj, nullptr,
		tan_fov, tan_fov,
		d_pixel_range, d_pixel_coords,
		false,
		d_out_color, d_out_depth, d_out_opacity,
		d_radii, d_n_touched, true /* debug: sync + throw on CUDA error */);

	printf("num_rendered (GPU) = %d\n", num_rendered);

	std::vector<float> out_color(3*W*H), out_depth(W*H), out_opacity(W*H);
	std::vector<int> n_touched(P), radii(P);
	CUDA_CHECK(cudaMemcpy(out_color.data(), d_out_color, sizeof(float)*3*W*H, cudaMemcpyDeviceToHost));
	CUDA_CHECK(cudaMemcpy(out_depth.data(), d_out_depth, sizeof(float)*W*H, cudaMemcpyDeviceToHost));
	CUDA_CHECK(cudaMemcpy(out_opacity.data(), d_out_opacity, sizeof(float)*W*H, cudaMemcpyDeviceToHost));
	CUDA_CHECK(cudaMemcpy(n_touched.data(), d_n_touched, sizeof(int)*P, cudaMemcpyDeviceToHost));
	CUDA_CHECK(cudaMemcpy(radii.data(), d_radii, sizeof(int)*P, cudaMemcpyDeviceToHost));

	printf("radii: "); for (int i=0;i<P;i++) printf("%d ", radii[i]); printf(" (expect g4=0, frustum-culled)\n");
	printf("n_touched: "); for (int i=0;i<P;i++) printf("%d ", n_touched[i]); printf("\n");

	// ---- CPU brute-force reference ----
	// Per-Gaussian: recompute point_image/radius/conic exactly like preprocessCUDA
	// (identity view/proj => p_proj == world xy; conic from isotropic cov3D + 0.3 lowpass).
	struct GRef { float px, py, radius; float conic[3]; float opacity; float depth; float color[3]; bool valid; };
	std::vector<GRef> gr(P);
	for (int i = 0; i < P; i++) {
		gr[i].valid = false;
		if (g[i].z <= 0.2f) continue; // in_frustum cull
		float px_ndc = g[i].x, py_ndc = g[i].y; // identity proj
		float point_image_x = ((px_ndc + 1.0f) * W - 1.0f) * 0.5f;
		float point_image_y = ((py_ndc + 1.0f) * H - 1.0f) * 0.5f;
		// computeCov2D with viewmatrix=identity, t = mean (world) directly. Full
		// formula incl. the fov clip and Jxz/Jyz shear terms (exact match to
		// forward.cu's computeCov2D, not an approximation) -- see cov = s2 *
		// transpose(J)*J for isotropic Vrk=s2*I, W=identity.
		float t_z = g[i].z;
		float limx = 1.3f * tan_fov, limy = 1.3f * tan_fov;
		float txtz = g[i].x / t_z, tytz = g[i].y / t_z;
		float t_x = std::min(limx, std::max(-limx, txtz)) * t_z;
		float t_y = std::min(limy, std::max(-limy, tytz)) * t_z;
		float Jxx = focal / t_z, Jyy = focal / t_z;
		float Jxz = -(focal * t_x) / (t_z * t_z), Jyz = -(focal * t_y) / (t_z * t_z);
		float covxx = g[i].s2 * (Jxx*Jxx + Jxz*Jxz) + 0.3f;
		float covyy = g[i].s2 * (Jyy*Jyy + Jyz*Jyz) + 0.3f;
		float covxy = g[i].s2 * (Jxz * Jyz);
		float det = covxx*covyy - covxy*covxy;
		if (det == 0.f) continue;
		float det_inv = 1.f/det;
		float conicx = covyy*det_inv, conicy = -covxy*det_inv, conicz = covxx*det_inv;
		float mid = 0.5f*(covxx+covyy);
		float lambda1 = mid + sqrtf(std::max(0.1f, mid*mid-det));
		float lambda2 = mid - sqrtf(std::max(0.1f, mid*mid-det));
		float radius = ceilf(3.f*sqrtf(std::max(lambda1,lambda2)));
		gr[i] = { point_image_x, point_image_y, radius, {conicx,conicy,conicz}, g[i].opacity, g[i].z,
		          {g[i].color[0],g[i].color[1],g[i].color[2]}, true };
	}

	int mismatches = 0;
	int checked_pixels = 0, nonzero_pixels = 0;
	for (int py_ = 0; py_ < H; py_++) {
		for (int px_ = 0; px_ < W; px_++) {
			// Gather (gid, depth) pairs preprocessCUDA would have emitted for this pixel:
			// pixel must fall within gid's rect AND pass the alpha+logf(opacity) gate.
			std::vector<std::pair<float,int>> hits; // (depth, gid)
			for (int i = 0; i < P; i++) {
				if (!gr[i].valid) continue;
				int rminx,rminy,rmaxx,rmaxy;
				cpu_get_rect(gr[i].px, gr[i].py, (int)gr[i].radius, tw, th, TILE, rminx,rminy,rmaxx,rmaxy);
				int tx = px_/TILE, ty = py_/TILE;
				if (tx < rminx || tx >= rmaxx || ty < rminy || ty >= rmaxy) continue;
				float dx = (float)px_ - gr[i].px, dy = (float)py_ - gr[i].py;
				float power = -0.5f*(gr[i].conic[0]*dx*dx + 2.f*gr[i].conic[1]*dx*dy + gr[i].conic[2]*dy*dy);
				power += logf(gr[i].opacity);
				if (power <= -LOWEST_ALPHA_COEFF) continue; // pruned by preprocessCUDA
				hits.push_back({gr[i].depth, i});
			}
			std::sort(hits.begin(), hits.end());

			// Front-to-back composite using renderCUDA's OWN alpha formula (raw opacity, no log baked in).
			float T = 1.0f, C[3] = {0,0,0}, D = 0.0f;
			for (auto& h : hits) {
				int i = h.second;
				float dx = (float)px_ - gr[i].px, dy = (float)py_ - gr[i].py;
				float power = -0.5f*(gr[i].conic[0]*dx*dx + 2.f*gr[i].conic[1]*dx*dy + gr[i].conic[2]*dy*dy);
				if (power > 0.0f) continue; // numerical guard, mirrors kernel
				float alpha = std::min(0.99f, gr[i].opacity * expf(power));
				if (alpha <= 1.0f/255.0f) continue;
				for (int c = 0; c < 3; c++) C[c] += gr[i].color[c] * alpha * T;
				D += gr[i].depth * alpha * T;
				T *= (1.0f - alpha);
				if (T < 0.0001f) break;
			}
			for (int c = 0; c < 3; c++) C[c] += T * bg[c];
			float expected_opacity = 1.0f - T;

			int pix_id = py_*W + px_;
			float got_r = out_color[0*W*H+pix_id], got_g = out_color[1*W*H+pix_id], got_b = out_color[2*W*H+pix_id];
			float got_d = out_depth[pix_id], got_o = out_opacity[pix_id];
			checked_pixels++;
			if (!hits.empty()) nonzero_pixels++;

			float err = std::max({std::fabs(got_r-C[0]), std::fabs(got_g-C[1]), std::fabs(got_b-C[2]),
			                       std::fabs(got_d-D), std::fabs(got_o-expected_opacity)});
			if (err > 1e-3f) {
				if (mismatches < 20)
					printf("MISMATCH pix(%d,%d): got C=(%.4f,%.4f,%.4f) D=%.4f O=%.4f | expected C=(%.4f,%.4f,%.4f) D=%.4f O=%.4f err=%.5f\n",
						px_, py_, got_r, got_g, got_b, got_d, got_o, C[0],C[1],C[2], D, expected_opacity, err);
				mismatches++;
			}
		}
	}

	printf("\nChecked %d pixels, %d had >=1 contributing Gaussian, %d mismatches (tol 1e-3)\n",
		checked_pixels, nonzero_pixels, mismatches);
	printf("=== %s ===\n", mismatches == 0 ? "PASS" : "FAIL");
	return mismatches == 0 ? 0 : 1;
}
