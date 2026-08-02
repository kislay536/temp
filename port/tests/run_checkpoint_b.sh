#!/usr/bin/env bash
# Checkpoint B: end-to-end verification of CudaRasterizer::Rasterizer::forward()
# (CU4.1-CU4.5 dispatch + CU5.1-CU5.6 sparse renderCUDA), linking directly against
# the real rasterizer_impl.cu/forward.cu/backward.cu -- these compile on their own
# even though the full pip package doesn't yet (rasterize_points.cu/ext.cpp are
# still CU6.1-blocked). backward.cu is included only to satisfy the linker
# (Rasterizer::backward references BACKWARD::render/preprocess); it is never called.
set -euo pipefail
cd "$(dirname "$0")"
REPO_ROOT="$(cd ../.. && pwd)"

build_and_run() {
	local name="$1" incdir="$2" glmdir="$3"
	echo "=== building for ${name} ==="
	nvcc -std=c++17 -gencode=arch=compute_86,code=sm_86 \
		-I"${incdir}" -I"${glmdir}" \
		"${incdir}/rasterizer_impl.cu" \
		"${incdir}/forward.cu" \
		"${incdir}/backward.cu" \
		test_render.cu -o "/tmp/test_render_${name}"
	echo "=== running for ${name} ==="
	"/tmp/test_render_${name}"
}

build_and_run track \
	"${REPO_ROOT}/MonoGS/track-rasterization/cuda_rasterizer" \
	"${REPO_ROOT}/MonoGS/track-rasterization/third_party/glm"

build_and_run map \
	"${REPO_ROOT}/MonoGS/map-rasterization/cuda_rasterizer" \
	"${REPO_ROOT}/MonoGS/map-rasterization/third_party/glm"

echo "=== both tilings passed ==="
