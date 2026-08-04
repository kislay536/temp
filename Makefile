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
# CUDA_TAG: torch wheel tag, e.g. cu118 / cu121 / cu124 / cu128 / cu130
# ARCH: compute capability, e.g. T4=7.5 A100=8.0 3090/A6000=8.6 H100=9.0
# MAX_JOBS: ninja parallel build jobs (lower if RAM-constrained)
# DEBUG_ENV: e.g. `make run-monogs-sparse DEBUG_ENV="SPLATONIC_DEBUG_ATE=1"`
CONDA_ENV   ?= splatonic-port
PY_VERSION  ?= 3.12
CUDA_TAG    ?= cu128
ARCH        ?= 8.0
MAX_JOBS    ?= 4
DEBUG_ENV   ?=

ROOT        := $(shell pwd)
CONSTRAINTS := $(ROOT)/constraints.txt

CONDA_BASE  := $(shell conda info --base 2>/dev/null)
ifeq ($(CONDA_BASE),)
CONDA_BASE  := $(HOME)/miniconda3
endif
CONDA_ACTIVATE = source $(CONDA_BASE)/etc/profile.d/conda.sh && conda activate $(CONDA_ENV)

SHELL := /bin/bash
.SHELLFLAGS := -eu -o pipefail -c
.ONESHELL:
.DEFAULT_GOAL := help

.PHONY: help doctor env constraints fix-numpy simple-knn \
        deps-monogs build-monogs build-splatam build-splatonic build-all \
        verify-monogs checkpoint-a \
        data-splatam data-splatonic data-monogs data-all \
        run-splatam-dense run-splatonic-sparse run-splatonic-dense \
        run-monogs-dense run-monogs-sparse \
        run-monogs-prior-030 run-monogs-prior-050 run-monogs-prior-075 \
        run-monogs-trackflip run-monogs-reanchor run-monogs-sweep \
        results clean

## ---------------------------------------------------------------- help ----

help:
	@echo "Setup:"
	@echo "  doctor               - check nvidia-smi / nvcc / conda are visible"
	@echo "  env                  - create conda env '$(CONDA_ENV)' (python $(PY_VERSION), torch/$(CUDA_TAG))"
	@echo "  constraints          - write constraints.txt pinning torch so nothing can silently upgrade it"
	@echo "  fix-numpy            - patch np.unicode_ -> np.str_ in SplaTAM/SPLATONIC TUM loaders (NumPy 2.0)"
	@echo "  simple-knn           - clone MonoGS's missing simple-knn submodule"
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
	@echo "Run:"
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
	@echo "=== nvcc --version ==="; nvcc --version || echo "!! nvcc not found (CUDA toolkit not on PATH)"
	@echo "=== conda ==="; conda --version || echo "!! conda not found"
	@echo "=== CONDA_BASE resolved to ==="; echo "$(CONDA_BASE)"

env:
	conda create -n $(CONDA_ENV) python=$(PY_VERSION) -y
	$(CONDA_ACTIVATE)
	pip install --upgrade pip
	pip install torch torchvision torchaudio --index-url https://download.pytorch.org/whl/$(CUDA_TAG)
	python -c "import torch; print('torch', torch.__version__, 'cuda', torch.version.cuda, 'available', torch.cuda.is_available())"

constraints:
	$(CONDA_ACTIVATE)
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

deps-monogs: constraints
	$(CONDA_ACTIVATE)
	pip install --no-build-isolation -c $(CONSTRAINTS) \
		opencv-python munch trimesh evo==1.11.0 open3d torchmetrics rich plyfile wandb lpips \
		pytorch-msssim kornia cyclonedds natsort
	python -c "import torch; print('torch still at', torch.__version__)"

build-monogs: deps-monogs simple-knn
	$(CONDA_ACTIVATE)
	export TORCH_CUDA_ARCH_LIST=$(ARCH)
	export MAX_JOBS=$(MAX_JOBS)
	cd MonoGS
	pip install --no-build-isolation ./submodules/simple-knn
	pip install --no-build-isolation -e ./submodules/diff-gaussian-rasterization
	pip install --no-build-isolation -e ./track-rasterization
	pip install --no-build-isolation -e ./map-rasterization

build-splatam: constraints
	$(CONDA_ACTIVATE)
	export TORCH_CUDA_ARCH_LIST=$(ARCH)
	export MAX_JOBS=$(MAX_JOBS)
	cd SplaTAM
	pip install --no-build-isolation -c $(CONSTRAINTS) -r requirements.txt

build-splatonic: constraints
	$(CONDA_ACTIVATE)
	export TORCH_CUDA_ARCH_LIST=$(ARCH)
	export MAX_JOBS=$(MAX_JOBS)
	cd SPLATONIC
	pip install --no-build-isolation -c $(CONSTRAINTS) -r requirements.txt

build-all: build-splatam build-splatonic build-monogs
	@echo "all three built"

verify-monogs:
	$(CONDA_ACTIVATE)
	cd MonoGS && python $(ROOT)/port/make_helpers/verify_monogs.py

checkpoint-a:
	@echo "Running standalone CUDA correctness harness for arch $(ARCH) (edits run_checkpoint_a.sh's -gencode flag in place)"
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

## ----------------------------------------------------------------- run ----

run-splatam-dense: fix-numpy
	$(CONDA_ACTIVATE)
	cd SplaTAM && $(DEBUG_ENV) python scripts/splatam.py configs/tum/splatam.py

run-splatonic-sparse: fix-numpy
	$(CONDA_ACTIVATE)
	cd SPLATONIC && $(DEBUG_ENV) python scripts/splatam_sparse.py configs/tum/splatam.py

run-splatonic-dense: fix-numpy
	$(CONDA_ACTIVATE)
	cd SPLATONIC && $(DEBUG_ENV) python scripts/splatam.py configs/tum/splatam.py

run-monogs-dense:
	$(CONDA_ACTIVATE)
	cd MonoGS && $(DEBUG_ENV) python slam.py --config configs/mono/tum/fr1_desk.yaml --eval

run-monogs-sparse:
	$(CONDA_ACTIVATE)
	cd MonoGS && $(DEBUG_ENV) python slam.py --config configs/mono/tum/fr1_desk_splatonic.yaml --eval

run-monogs-prior-030:
	$(CONDA_ACTIVATE)
	cd MonoGS && $(DEBUG_ENV) python slam.py --config configs/mono/tum/fr1_desk_splatonic_motionprior_030.yaml --eval

run-monogs-prior-050:
	$(CONDA_ACTIVATE)
	cd MonoGS && $(DEBUG_ENV) python slam.py --config configs/mono/tum/fr1_desk_splatonic_motionprior.yaml --eval

run-monogs-prior-075:
	$(CONDA_ACTIVATE)
	cd MonoGS && $(DEBUG_ENV) python slam.py --config configs/mono/tum/fr1_desk_splatonic_motionprior_075.yaml --eval

run-monogs-trackflip:
	$(CONDA_ACTIVATE)
	cd MonoGS && $(DEBUG_ENV) python slam.py --config configs/mono/tum/fr1_desk_splatonic_trackflip.yaml --eval

run-monogs-reanchor:
	$(CONDA_ACTIVATE)
	cd MonoGS && $(DEBUG_ENV) python slam.py --config configs/mono/tum/fr1_desk_splatonic_reanchor.yaml --eval

run-monogs-sweep: run-monogs-dense run-monogs-sparse run-monogs-prior-030 run-monogs-prior-050 run-monogs-prior-075
	@echo "sweep done — run 'make results' to see RMSE ATE / PSNR / SSIM for each"

results:
	$(CONDA_ACTIVATE)
	cd MonoGS && python $(ROOT)/port/make_helpers/print_results.py

## ---------------------------------------------------------------- clean ----

clean:
	find . -name "__pycache__" -type d -prune -exec rm -rf {} +
	find . -name "*.egg-info" -type d -prune -exec rm -rf {} +
	rm -rf SplaTAM/build SPLATONIC/*/build MonoGS/*/build MonoGS/submodules/*/build 2>/dev/null || true
	@echo "cleaned build artifacts (conda env and downloaded datasets left untouched)"
