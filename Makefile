# Makefile for setting up, building, running, and debugging all three codebases
# in this repo: SplaTAM (baseline), SPLATONIC (reference sparse implementation),
# and MonoGS+SPLATONIC (this port's actual deliverable).
#
# This is the scripted version of port/REMOTE_CLUSTER_GUIDE.md — read that file
# for the "why" behind every command here. Run `make help` for a target list.
#
# Quick start on a fresh GPU box:
#   make env build-all data-all
#   make run-monogs-dense run-monogs-sparse
#   make results
#
# Override any of these on the command line, e.g. `make build-monogs ARCH=7.5`:
# ENV_BACKEND: 'venv' (default, no conda needed -- just needs a system python3)
#              or 'conda' (opt-in: `make env ENV_BACKEND=conda`)
# PYTHON_BIN: system python3 used to *create* the venv (needs to be ~3.10-3.12)
# CUDA_TAG: torch wheel tag, e.g. cu118 / cu121 / cu124 / cu128 / cu130
# ARCH: compute capability, e.g. T4=7.5 A100=8.0 3090/A6000=8.6 H100=9.0
# MAX_JOBS: ninja parallel build jobs (lower if RAM-constrained)
# DEBUG_ENV: e.g. `make run-monogs-sparse DEBUG_ENV="SPLATONIC_DEBUG_ATE=1"`
# SMOKE_FRAMES: how many frames `make smoke-monogs` truncates the TUM sequence to
ENV_BACKEND  ?= venv
PYTHON_BIN   ?= python3
CONDA_ENV    ?= splatonic-port
PY_VERSION   ?= 3.12
CUDA_TAG     ?= cu128
ARCH         ?= 8.0
MAX_JOBS     ?= 4
DEBUG_ENV    ?=
SMOKE_FRAMES ?= 30

ROOT         := $(shell pwd)
CONSTRAINTS  := $(ROOT)/constraints.txt
VENV_DIR     := $(ROOT)/.venv
TUM_SEQ_DIR  := $(ROOT)/MonoGS/datasets/tum/rgbd_dataset_freiburg1_desk
SMOKE_LOG_DIR := $(ROOT)/smoke_logs

ifeq ($(ENV_BACKEND),conda)
# Auto-detect conda's base install dir, in priority order:
#   1. `conda info --base` (conda already on PATH, e.g. via `module load`)
#   2. this repo's own self-installed copy (`make install-conda`)
#   3. common cluster-wide install locations
#   4. $HOME/miniconda3 (last resort guess, may not exist)
# Override explicitly if none of these match your cluster, e.g.:
#   make env ENV_BACKEND=conda CONDA_BASE=/opt/conda
CONDA_BASE  := $(shell conda info --base 2>/dev/null)
ifeq ($(CONDA_BASE),)
CONDA_BASE  := $(shell for d in $(ROOT)/.conda /opt/conda /opt/miniconda3 /usr/local/miniconda3 $(HOME)/miniconda3 $(HOME)/anaconda3; do [ -f "$$d/etc/profile.d/conda.sh" ] && echo "$$d" && break; done)
endif
ACTIVATE = source $(CONDA_BASE)/etc/profile.d/conda.sh && conda activate $(CONDA_ENV)
else
# Default: plain venv, no conda/network download needed to create it.
ACTIVATE = source $(VENV_DIR)/bin/activate
endif

# Auto-detect the CUDA toolkit root (needed to BUILD the extensions -- torch's
# bundled CUDA runtime is not enough, torch.utils.cpp_extension needs a real
# nvcc + CUDA_HOME). Priority: existing $CUDA_HOME env var, nvcc already on
# PATH, then common install locations. Override explicitly if none of these
# match, e.g. `make build-monogs CUDA_HOME=/usr/local/cuda-12.4`.
CUDA_HOME := $(shell echo $$CUDA_HOME)
ifeq ($(CUDA_HOME),)
CUDA_HOME := $(shell command -v nvcc >/dev/null 2>&1 && dirname "$$(dirname "$$(command -v nvcc)")")
endif
ifeq ($(CUDA_HOME),)
CUDA_HOME := $(shell for d in /usr/local/cuda /usr/local/cuda-12.8 /usr/local/cuda-12.6 /usr/local/cuda-12.4 /usr/local/cuda-12.1 /usr/local/cuda-12.0 /usr/local/cuda-11.8 /opt/cuda; do [ -x "$$d/bin/nvcc" ] && echo "$$d" && break; done)
endif

SHELL := /bin/bash
.SHELLFLAGS := -eu -o pipefail -c
.ONESHELL:
.DEFAULT_GOAL := help

.PHONY: help doctor install-conda env constraints fix-numpy simple-knn check-cuda \
        deps-monogs build-monogs build-splatam build-splatonic build-all \
        verify-monogs checkpoint-a \
        data-splatam data-splatonic data-monogs data-all \
        run-splatam-dense run-splatonic-sparse run-splatonic-dense \
        run-monogs-dense run-monogs-sparse \
        run-monogs-prior-030 run-monogs-prior-050 run-monogs-prior-075 \
        run-monogs-trackflip run-monogs-reanchor run-monogs-sweep \
        smoke-monogs results clean

## ---------------------------------------------------------------- help ----

help:
	@echo "Setup:"
	@echo "  doctor               - check nvidia-smi / nvcc / python / conda / network are visible"
	@echo "  install-conda        - only if you want ENV_BACKEND=conda; installs into ./.conda (no sudo)"
	@echo "  env                  - create env (default: plain venv at ./.venv, python via \$$PYTHON_BIN, torch/$(CUDA_TAG))"
	@echo "                         use conda instead with: make env ENV_BACKEND=conda"
	@echo "  constraints          - write constraints.txt pinning torch so nothing can silently upgrade it"
	@echo "  fix-numpy            - patch np.unicode_ -> np.str_ in SplaTAM/SPLATONIC TUM loaders (NumPy 2.0)"
	@echo "  simple-knn           - clone MonoGS's missing simple-knn submodule"
	@echo "  check-cuda           - hard-fail early with guidance if no usable nvcc/CUDA_HOME is found"
	@echo ""
	@echo "Build:"
	@echo "  deps-monogs          - install MonoGS's python dependencies"
	@echo "  build-monogs         - build MonoGS's 4 CUDA extensions (needs deps-monogs, simple-knn)"
	@echo "  build-splatam        - install deps + build SplaTAM's rasterizer"
	@echo "  build-splatonic      - install deps + build SPLATONIC's 3 rasterizers"
	@echo "  build-all            - all three of the above"
	@echo "  verify-monogs        - import-check + distCUDA2 smoke test for MonoGS's 4 extensions"
	@echo "  checkpoint-a         - standalone nvcc correctness harness for the ported kernels (uses ARCH)"
	@echo ""
	@echo "Data:"
	@echo "  data-splatam         - download TUM + Replica for SplaTAM"
	@echo "  data-splatonic       - download TUM + Replica for SPLATONIC"
	@echo "  data-monogs          - download TUM for MonoGS"
	@echo "  data-all             - all three of the above"
	@echo ""
	@echo "Smoke test (small + fast, NOT the full validation run -- use this to find issues first):"
	@echo "  smoke-monogs         - dense+sparse on the first SMOKE_FRAMES (default 30) frames only,"
	@echo "                         full logs + environment snapshot saved to ./smoke_logs/"
	@echo ""
	@echo "Run (full ~613-frame sequence each -- only do this after smoke-monogs looks clean):"
	@echo "  run-splatam-dense    - SplaTAM dense baseline"
	@echo "  run-splatonic-sparse - SPLATONIC sparse (the paper's own numbers)"
	@echo "  run-splatonic-dense  - SPLATONIC's dense baseline, for comparison"
	@echo "  run-monogs-dense     - MonoGS dense baseline, TUM fr1_desk"
	@echo "  run-monogs-sparse    - MonoGS+SPLATONIC sparse baseline, TUM fr1_desk"
	@echo "  run-monogs-prior-030/050/075 - motion-prior fix at alpha=0.3/0.5/0.75 (see STATUS.md sec 9)"
	@echo "  run-monogs-trackflip - experimental mitigation, already found insufficient"
	@echo "  run-monogs-reanchor  - experimental mitigation, already found insufficient"
	@echo "  run-monogs-sweep     - all 5 core MonoGS configs back to back (dense/sparse/3x prior)"
	@echo "  results              - print RMSE ATE / PSNR / SSIM for every MonoGS run so far"
	@echo "  clean                - remove build artifacts (safe: leaves env + datasets untouched)"
	@echo ""
	@echo "Debug: prefix any run-monogs-* target with DEBUG_ENV, e.g.:"
	@echo "  make run-monogs-sparse DEBUG_ENV=\"SPLATONIC_DEBUG_ATE=1\""
	@echo "  make run-monogs-sparse DEBUG_ENV=\"SPLATONIC_DEBUG_FORCE_DENSE_FRAMES=200-215\""
	@echo "  (see port/REMOTE_CLUSTER_GUIDE.md sec 11 for the full env var reference)"

## --------------------------------------------------------------- setup ----

doctor:
	@echo "=== nvidia-smi ==="; nvidia-smi || echo "!! nvidia-smi not found"
	@echo "=== CUDA toolkit (needed to BUILD the extensions; torch's bundled CUDA runtime is NOT enough) ==="
	if [ -n "$(CUDA_HOME)" ] && [ -x "$(CUDA_HOME)/bin/nvcc" ]; then
		echo "CUDA_HOME = $(CUDA_HOME)"
		"$(CUDA_HOME)/bin/nvcc" --version | tail -1
	else
		echo "!! no usable nvcc found (checked \$$CUDA_HOME, PATH, and common install dirs)"
		if command -v module >/dev/null 2>&1; then
			echo "   this cluster has environment modules -- checking for a CUDA one:"
			module avail 2>&1 | grep -i cuda || echo "   (no cuda-named module found; ask cluster docs/admins for the right module name)"
		else
			echo "   no 'module' command here either. Set CUDA_HOME explicitly if a toolkit exists at a nonstandard path."
		fi
	fi
	@echo "=== ENV_BACKEND=$(ENV_BACKEND) ==="
ifeq ($(ENV_BACKEND),conda)
	@echo "=== conda ==="
	if command -v conda >/dev/null 2>&1; then
		conda --version
	else
		echo "!! conda not on PATH. Checked common cluster locations too, resolved CONDA_BASE below."
		echo "   If your cluster uses environment modules, try:  module avail 2>&1 | grep -i conda"
		echo "   Otherwise run:  make install-conda   (installs into $(ROOT)/.conda, no sudo needed)"
		echo "   Or just don't use conda at all:  make env ENV_BACKEND=venv   (the default -- only needs system python3)"
	fi
	@echo "=== CONDA_BASE resolved to ==="
	if [ -n "$(CONDA_BASE)" ] && [ -f "$(CONDA_BASE)/etc/profile.d/conda.sh" ]; then
		echo "$(CONDA_BASE)  (looks valid)"
	else
		echo "$(CONDA_BASE)  !! not found / no conda.sh here -- run 'make install-conda' or pass CONDA_BASE=... explicitly"
	fi
else
	@echo "=== python3 (used to create the venv) ==="
	$(PYTHON_BIN) --version || echo "!! $(PYTHON_BIN) not found -- set PYTHON_BIN=... to point at a working python3 (needs ~3.10-3.12)"
	@echo "=== venv module ==="
	$(PYTHON_BIN) -c "import venv; print('venv module OK')" || echo "!! venv module missing -- some minimal distro python3 packages omit it (e.g. Debian's python3-venv); ask cluster admins or use ENV_BACKEND=conda instead"
	@echo "=== network reachability (pip needs these, not conda; a bare-domain 403 is normal, ignore it) ==="
	curl -fsS -o /dev/null -m 5 https://pypi.org && echo "pypi.org: reachable" || echo "!! pypi.org: NOT reachable"
	curl -fsS -o /dev/null -m 5 https://download.pytorch.org/whl/torch/ && echo "download.pytorch.org: reachable" || echo "!! download.pytorch.org: NOT reachable"
endif

install-conda:
	@echo "Only needed if you're intentionally using ENV_BACKEND=conda -- the default (ENV_BACKEND=venv) doesn't need this at all."
	@if [ -f "$(ROOT)/.conda/etc/profile.d/conda.sh" ]; then
		echo "already installed at $(ROOT)/.conda -- nothing to do"
	else
		echo "downloading Miniconda3 (Linux x86_64) into $(ROOT)/.conda ..."
		tmp=$$(mktemp -d)
		curl -fsSL -o "$$tmp/miniconda.sh" https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh
		bash "$$tmp/miniconda.sh" -b -p "$(ROOT)/.conda"
		rm -rf "$$tmp"
		echo "installed. Re-run 'make doctor ENV_BACKEND=conda' to confirm CONDA_BASE now resolves to $(ROOT)/.conda"
	fi

env:
ifeq ($(ENV_BACKEND),conda)
	conda create -n $(CONDA_ENV) python=$(PY_VERSION) -y
else
	@echo "using plain venv backend (ENV_BACKEND=venv, no conda needed)"
	$(PYTHON_BIN) --version
	$(PYTHON_BIN) -m venv $(VENV_DIR)
endif
	$(ACTIVATE)
	pip install --upgrade pip
	pip install torch torchvision torchaudio --index-url https://download.pytorch.org/whl/$(CUDA_TAG)
	python -c "import torch; print('torch', torch.__version__, 'cuda', torch.version.cuda, 'available', torch.cuda.is_available())"

constraints:
	$(ACTIVATE)
	python $(ROOT)/port/make_helpers/pin_torch.py $(CONSTRAINTS)

fix-numpy:
	@echo "Patching np.unicode_ -> np.str_ (NumPy 2.0 removed the alias) — idempotent, safe to rerun"
	sed -i 's/np\.unicode_/np.str_/' SplaTAM/datasets/gradslam_datasets/tum.py
	sed -i 's/np\.unicode_/np.str_/' SPLATONIC/datasets/gradslam_datasets/tum.py
	@echo "done (MonoGS/utils/dataset.py was already fixed in this fork)"

simple-knn:
	@if [ -d MonoGS/submodules/simple-knn ] && [ -n "$$(ls -A MonoGS/submodules/simple-knn 2>/dev/null)" ]; then
		echo "simple-knn already present, skipping clone";
	else
		rm -rf MonoGS/submodules/simple-knn;
		git clone --depth 1 https://gitlab.inria.fr/bkerbl/simple-knn.git MonoGS/submodules/simple-knn;
	fi

## --------------------------------------------------------------- build ----

check-cuda:
	@if [ -z "$(CUDA_HOME)" ] || [ ! -x "$(CUDA_HOME)/bin/nvcc" ]; then
		echo "!! No usable CUDA toolkit found (nvcc missing) -- torch's own bundled"
		echo "   CUDA runtime is NOT enough to build these extensions, a real nvcc is required."
		echo "   If this cluster uses environment modules, try:"
		echo "     module avail 2>&1 | grep -i cuda"
		echo "     module load cuda/<version-shown-above>"
		echo "     make check-cuda        # re-check, should auto-detect nvcc now"
		echo "   Otherwise set it explicitly:  make build-monogs CUDA_HOME=/path/to/cuda-toolkit"
		exit 1
	fi
	@echo "CUDA_HOME = $(CUDA_HOME)"
	@"$(CUDA_HOME)/bin/nvcc" --version | tail -1

deps-monogs: constraints
	$(ACTIVATE)
	pip install --no-build-isolation -c $(CONSTRAINTS) \
		opencv-python munch trimesh evo==1.11.0 open3d torchmetrics rich plyfile wandb lpips \
		pytorch-msssim kornia cyclonedds natsort
	python -c "import torch; print('torch still at', torch.__version__)"

build-monogs: check-cuda deps-monogs simple-knn
	$(ACTIVATE)
	export CUDA_HOME=$(CUDA_HOME)
	export PATH=$(CUDA_HOME)/bin:$$PATH
	export TORCH_CUDA_ARCH_LIST=$(ARCH)
	export MAX_JOBS=$(MAX_JOBS)
	cd MonoGS
	pip install --no-build-isolation ./submodules/simple-knn
	pip install --no-build-isolation -e ./submodules/diff-gaussian-rasterization
	pip install --no-build-isolation -e ./track-rasterization
	pip install --no-build-isolation -e ./map-rasterization

build-splatam: check-cuda constraints
	$(ACTIVATE)
	export CUDA_HOME=$(CUDA_HOME)
	export PATH=$(CUDA_HOME)/bin:$$PATH
	export TORCH_CUDA_ARCH_LIST=$(ARCH)
	export MAX_JOBS=$(MAX_JOBS)
	cd SplaTAM
	pip install --no-build-isolation -c $(CONSTRAINTS) -r requirements.txt

build-splatonic: check-cuda constraints
	$(ACTIVATE)
	export CUDA_HOME=$(CUDA_HOME)
	export PATH=$(CUDA_HOME)/bin:$$PATH
	export TORCH_CUDA_ARCH_LIST=$(ARCH)
	export MAX_JOBS=$(MAX_JOBS)
	cd SPLATONIC
	pip install --no-build-isolation -c $(CONSTRAINTS) -r requirements.txt

build-all: build-splatam build-splatonic build-monogs
	@echo "all three built"

verify-monogs:
	$(ACTIVATE)
	cd MonoGS && python $(ROOT)/port/make_helpers/verify_monogs.py

checkpoint-a: check-cuda
	@echo "Running standalone CUDA correctness harness for arch $(ARCH) (edits run_checkpoint_a.sh's -gencode flag in place)"
	export PATH=$(CUDA_HOME)/bin:$$PATH
	sm=$$(echo $(ARCH) | tr -d '.'); \
	sed -i "s/compute_[0-9]*,code=sm_[0-9]*/compute_$${sm},code=sm_$${sm}/" port/tests/run_checkpoint_a.sh
	cd port/tests && bash run_checkpoint_a.sh

## ---------------------------------------------------------------- data ----

data-splatam:
	cd SplaTAM && bash bash_scripts/download_tum.sh && bash bash_scripts/download_replica.sh

data-splatonic:
	cd SPLATONIC && bash bash_scripts/download_tum.sh && bash bash_scripts/download_replica.sh

data-monogs:
	cd MonoGS && bash scripts/download_tum.sh

data-all: data-splatam data-splatonic data-monogs

## --------------------------------------------------------------- smoke ----

# Small, fast, heavily-logged sanity run -- NOT the full ~613-frame validation
# (that's run-monogs-dense/sparse/sweep below). Truncates TUM fr1_desk's rgb.txt
# and depth.txt to SMOKE_FRAMES frames for the duration of this run only (always
# restored on exit, even on failure -- MonoGS matches frames by timestamp against
# the untouched groundtruth.txt, so this is safe). RMSE ATE from this is NOT a
# real number to report (too few frames to mean anything) -- the point is purely
# "does the pipeline run to completion, and if not, why."
smoke-monogs:
	$(ACTIVATE)
	@echo "=== smoke test: $(SMOKE_FRAMES) frames, dense + sparse, full logs kept ==="
	if [ ! -d "$(TUM_SEQ_DIR)" ]; then
		echo "!! dataset missing at $(TUM_SEQ_DIR) -- run 'make data-monogs' first"
		exit 1
	fi
	mkdir -p "$(SMOKE_LOG_DIR)"
	{
		echo "=== git commit ==="; git -C "$(ROOT)" rev-parse HEAD 2>/dev/null || echo "not a git checkout"
		echo "=== date ==="; date
		echo "=== nvidia-smi ==="; nvidia-smi
		echo "=== python / torch ==="; python -c "import torch; print(torch.__version__, torch.version.cuda, torch.cuda.is_available())"
		echo "=== pip freeze ==="; pip freeze
	} > "$(SMOKE_LOG_DIR)/environment.txt" 2>&1
	cd "$(TUM_SEQ_DIR)"
	for f in rgb.txt depth.txt; do cp "$$f" "$$f.smoke_backup"; done
	restore_smoke() {
		cd "$(TUM_SEQ_DIR)"
		for f in rgb.txt depth.txt; do
			[ -f "$$f.smoke_backup" ] && mv "$$f.smoke_backup" "$$f"
		done
		echo "restored full rgb.txt/depth.txt"
	}
	trap restore_smoke EXIT
	for f in rgb.txt depth.txt; do
		head -n "$$(( $(SMOKE_FRAMES) + 3 ))" "$$f.smoke_backup" > "$$f"
	done
	echo "truncated rgb.txt/depth.txt to $(SMOKE_FRAMES) frames (+3-line TUM header)"
	cd "$(ROOT)/MonoGS"
	echo "--- dense smoke run -> $(SMOKE_LOG_DIR)/dense.log ---"
	set +e
	SPLATONIC_DEBUG_ATE=1 $(DEBUG_ENV) python -u slam.py --config configs/mono/tum/fr1_desk.yaml --eval > "$(SMOKE_LOG_DIR)/dense.log" 2>&1
	ec=$$?
	set -e
	echo "dense exit code: $$ec"
	if [ $$ec -ne 0 ]; then echo "--- last 60 lines of dense.log ---"; tail -60 "$(SMOKE_LOG_DIR)/dense.log"; fi
	echo "--- sparse smoke run -> $(SMOKE_LOG_DIR)/sparse.log ---"
	set +e
	SPLATONIC_DEBUG_ATE=1 $(DEBUG_ENV) python -u slam.py --config configs/mono/tum/fr1_desk_splatonic.yaml --eval > "$(SMOKE_LOG_DIR)/sparse.log" 2>&1
	ec=$$?
	set -e
	echo "sparse exit code: $$ec"
	if [ $$ec -ne 0 ]; then echo "--- last 60 lines of sparse.log ---"; tail -60 "$(SMOKE_LOG_DIR)/sparse.log"; fi
	echo ""
	echo "=== done ==="
	echo "full logs + environment snapshot: $(SMOKE_LOG_DIR)/"
	echo "(RMSE ATE from a $(SMOKE_FRAMES)-frame run is not a meaningful number -- this only checks the pipeline runs end to end)"

## ----------------------------------------------------------------- run ----

run-splatam-dense: fix-numpy
	$(ACTIVATE)
	cd SplaTAM && $(DEBUG_ENV) python scripts/splatam.py configs/tum/splatam.py

run-splatonic-sparse: fix-numpy
	$(ACTIVATE)
	cd SPLATONIC && $(DEBUG_ENV) python scripts/splatam_sparse.py configs/tum/splatam.py

run-splatonic-dense: fix-numpy
	$(ACTIVATE)
	cd SPLATONIC && $(DEBUG_ENV) python scripts/splatam.py configs/tum/splatam.py

run-monogs-dense:
	$(ACTIVATE)
	cd MonoGS && $(DEBUG_ENV) python slam.py --config configs/mono/tum/fr1_desk.yaml --eval

run-monogs-sparse:
	$(ACTIVATE)
	cd MonoGS && $(DEBUG_ENV) python slam.py --config configs/mono/tum/fr1_desk_splatonic.yaml --eval

run-monogs-prior-030:
	$(ACTIVATE)
	cd MonoGS && $(DEBUG_ENV) python slam.py --config configs/mono/tum/fr1_desk_splatonic_motionprior_030.yaml --eval

run-monogs-prior-050:
	$(ACTIVATE)
	cd MonoGS && $(DEBUG_ENV) python slam.py --config configs/mono/tum/fr1_desk_splatonic_motionprior.yaml --eval

run-monogs-prior-075:
	$(ACTIVATE)
	cd MonoGS && $(DEBUG_ENV) python slam.py --config configs/mono/tum/fr1_desk_splatonic_motionprior_075.yaml --eval

run-monogs-trackflip:
	$(ACTIVATE)
	cd MonoGS && $(DEBUG_ENV) python slam.py --config configs/mono/tum/fr1_desk_splatonic_trackflip.yaml --eval

run-monogs-reanchor:
	$(ACTIVATE)
	cd MonoGS && $(DEBUG_ENV) python slam.py --config configs/mono/tum/fr1_desk_splatonic_reanchor.yaml --eval

run-monogs-sweep: run-monogs-dense run-monogs-sparse run-monogs-prior-030 run-monogs-prior-050 run-monogs-prior-075
	@echo "sweep done — run 'make results' to see RMSE ATE / PSNR / SSIM for each"

results:
	$(ACTIVATE)
	cd MonoGS && python $(ROOT)/port/make_helpers/print_results.py

## ---------------------------------------------------------------- clean ----

clean:
	find . -name "__pycache__" -type d -prune -exec rm -rf {} +
	find . -name "*.egg-info" -type d -prune -exec rm -rf {} +
	rm -rf SplaTAM/build SPLATONIC/*/build MonoGS/*/build MonoGS/submodules/*/build 2>/dev/null || true
	@echo "cleaned build artifacts (conda env and downloaded datasets left untouched)"
