#!/usr/bin/env bash
# Checkpoint A: builds and runs test_preprocess.cu against both the track- and
# map-rasterization cuda_rasterizer/ headers (real config.h/auxiliary.h/helper_math.h,
# and the same third_party/glm each package vendors), independently of the pip
# packages (which can't build yet -- see port/STATUS.md, CU4.5/CU6.1).
set -euo pipefail
cd "$(dirname "$0")"
REPO_ROOT="$(cd ../.. && pwd)"

build_and_run() {
	local name="$1" incdir="$2" glmdir="$3"
	echo "=== building for ${name} ==="
	nvcc -std=c++17 -gencode=arch=compute_86,code=sm_86 \
		-I"${incdir}" -I"${glmdir}" \
		test_preprocess.cu -o "/tmp/test_preprocess_${name}"
	echo "=== running for ${name} ==="
	"/tmp/test_preprocess_${name}"
}

build_and_run track \
	"${REPO_ROOT}/MonoGS/track-rasterization/cuda_rasterizer" \
	"${REPO_ROOT}/MonoGS/track-rasterization/third_party/glm"

build_and_run map \
	"${REPO_ROOT}/MonoGS/map-rasterization/cuda_rasterizer" \
	"${REPO_ROOT}/MonoGS/map-rasterization/third_party/glm"

echo "=== both tilings passed ==="
