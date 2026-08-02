#!/usr/bin/env bash
# Checkpoint C: end-to-end Python forward+backward test through the REAL,
# pip-installed track_rasterization / map_rasterization packages (not a
# standalone C++ harness -- this is the actual user-facing API).
# Requires both packages to already be pip-installed (see CU3-CU8 build steps).
set -euo pipefail
cd "$(dirname "$0")"

for pkg in track_rasterization map_rasterization; do
	echo "=== running for ${pkg} ==="
	python test_checkpoint_c_e2e.py "${pkg}"
done

echo "=== both packages passed ==="
