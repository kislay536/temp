# Running SplaTAM / SPLATONIC / MonoGS+SPLATONIC on a Remote Cluster

This is a practical setup-and-run guide for this monorepo on a fresh GPU machine
(cluster node, cloud VM, whatever). It covers all **three** codebases here, the
**three real build-breaking bugs** you will hit if you skip straight to `pip install`,
and an honest summary of **what's still broken/unvalidated** in the SPLATONIC-on-MonoGS
port itself (the actual point of this project).

If you only want the deep technical history, see `port/STATUS.md` (the full session
log) and `port/SPLATAM_TO_SPLATONIC_CHANGES.md` (the line-by-line diff spec). This
document is the condensed, action-oriented version of both, aimed at "I have a GPU box
now, what do I actually run."

---

## 0. What's in this repo

Three independent codebases, each a full research SLAM system:

| Directory | What it is | Modified by this port? |
|---|---|---|
| `SplaTAM/` | Original SplaTAM (RGB-D Gaussian-splat SLAM, tile-based rasterizer) | No — kept as an unmodified reference/baseline |
| `SPLATONIC/` | The SPLATONIC paper's own official repo: SplaTAM + their sparse pixel-based rasterizer | No — kept as the reference implementation this port is *based on* |
| `MonoGS/` | Original MonoGS (monocular Gaussian-splat SLAM) **with SPLATONIC ported onto it** | **Yes — this is the actual deliverable of this project** |

Everything else lives in `port/`: design docs, the milestone log (`STATUS.md`), the
implementation roadmap, beginner explainers, and Mermaid pipeline diagrams. None of
that needs to run on the cluster — it's documentation.

---

## 1. Cluster prerequisites

- An NVIDIA GPU, **compute capability 7.0+ (Turing or newer)**. SPLATONIC's pixel-based
  rasterizers use `__shfl_up_sync` warp-shuffle intrinsics for a cross-warp prefix scan;
  these need a reasonably modern architecture. T4 (7.5), A100 (8.0), 3090/A6000 (8.6),
  H100 (9.0) are all fine.
- CUDA toolkit + `nvcc` matching (or close to) whatever `torch` build you install —
  a **major**-version mismatch between `nvcc` and `torch.version.cuda` hard-fails the
  build (see §4, issue 1's root cause); a minor mismatch is fine.
- `gcc`/`g++` compatible with your CUDA version, `git`, and `conda`/`mamba` (or `venv`
  if you prefer — nothing here needs conda specifically).
- Enough disk: each TUM sequence is a few hundred MB to ~1GB; Replica scenes are
  similar; each conda env is a few GB.

---

## 2. Clone

```bash
git clone <the-url-you-push-this-repo-to> temp
cd temp
```

This is a monorepo — `SplaTAM/`, `SPLATONIC/`, and `MonoGS/` are plain subdirectories,
not git submodules, so a normal clone gets everything **except** one real submodule
gap — see §4, issue 2.

---

## 3. Which software stack to use

Each repo ships its own `environment.yml` pinning an **old** stack (Python 3.7–3.10,
torch 1.12–2.7, CUDA 11.6–12.8 depending on which repo). Those are the *original
upstream* pins — **this port's own debugging work was never run against them.**

What has actually been validated end-to-end on real GPU hardware is a **modern**
stack: **Python 3.12, torch 2.10.0+cu128** (this is Kaggle's T4 environment, which
`port/STATUS.md` §9's Kaggle section and a matching local `kaggle_repro` conda env
both exercised directly, including a real 30-frame `slam.py --eval` run).

**Recommendation: use the newest torch build your cluster's CUDA driver supports**
(3–4x newer than any of the `environment.yml` files) rather than the stale pins —
match the *driver's* CUDA version, not any repo's `environment.yml`. If you do use an
old-stack env instead, budget time to hit the same three bugs in §4 blind, since none
of them are specific to the new stack (the `np.unicode_` break is NumPy-2.0-specific,
but the torch-upgrade and simple-knn bugs are general pip/packaging issues that can
bite an old stack too, just with different exact version numbers).

```bash
conda create -n splatonic-port python=3.12 -y
conda activate splatonic-port
# Pick the torch build matching your cluster's CUDA driver, e.g. for CUDA 12.8:
pip install torch torchvision torchaudio --index-url https://download.pytorch.org/whl/cu128
```

One shared env across all three repos is fine — their Python dependency lists
(`opencv-python`, `munch`, `trimesh`, `evo`, `open3d`, `torchmetrics`, `plyfile`,
`wandb`, `lpips`, `rich`, `pytorch-msssim`, `kornia`, `cyclonedds`, ...) overlap
heavily and don't conflict.

---

## 4. Three real build-breaking bugs — fix these *before* you build anything

These were found by reproducing a cloud GPU environment's exact failure locally and
root-causing it on real hardware (see `port/STATUS.md`, "Kaggle notebook build
failure" section). They will reproduce on **any** fresh machine, not just Kaggle.

### Issue 1 — an unrelated `pip install` silently upgrades torch out from under you

Installing `lpips` (or anything else that pulls in unconstrained `torchvision`) lets
pip's resolver pick the *latest* torchvision, which demands its own matching latest
torch — silently moving torch to a different CUDA build than the one your extensions
were compiled against. Reproduced concretely: torch `2.10.0+cu128` → `2.13.0+cu130`
after one `pip install lpips` with no pin. The symptom downstream is an opaque CUDA
extension build failure with no useful error message.

**Fix — pin torch with a constraints file before installing anything else:**

```bash
python -c "import torch; open('constraints.txt','w').write(f'torch=={torch.__version__.split(\"+\")[0]}\n')"
pip install --upgrade pip
pip install -c constraints.txt opencv-python munch trimesh 'evo==1.11.0' open3d torchmetrics rich plyfile wandb lpips pytorch-msssim kornia cyclonedds natsort
python -c "import torch; print('torch still at', torch.__version__)"   # sanity check it didn't move
```

Skip `glfw`/`PyOpenGL`/`imgviz`/`PyGLM` entirely unless you actually need the
interactive GUI (`use_gui: true`) — MonoGS's `slam.py` now defers those imports so
headless `--eval` runs never touch them, and they're a real source of headless-install
pain on a cluster with no display.

### Issue 2 — `simple-knn` is a missing submodule, and it breaks under editable install

MonoGS's `.gitmodules` declares `submodules/simple-knn` (from
`gitlab.inria.fr/bkerbl/simple-knn`), but **the files aren't vendored in this repo
checkout** — only `submodules/diff-gaussian-rasterization` is. You need to fetch it
yourself:

```bash
cd MonoGS
rm -rf submodules/simple-knn
git clone --depth 1 https://gitlab.inria.fr/bkerbl/simple-knn.git submodules/simple-knn
```

Separately, **install it non-editable** (`pip install .`, not `pip install -e .`).
`simple-knn`'s own `setup.py` doesn't declare `packages=[...]` explicitly (unlike the
other three CUDA extensions in this repo, which do) — it relies on `simple_knn/` being
auto-discovered as an implicit namespace package. PEP 660's editable-install finder
doesn't resolve that: `pip install -e .` reports success, but `import simple_knn`
then raises `ModuleNotFoundError`. A plain `pip install .` doesn't hit this at all, and
since this vendored dependency is never edited anyway, non-editable is just the
correct choice, not a workaround.

### Issue 3 — `np.unicode_` was removed in NumPy 2.0

`TUMParser.parse_list()` in the TUM dataset loader crashes on any NumPy ≥2.0
environment (`AttributeError: module 'numpy' has no attribute 'unicode_'`).

- **MonoGS** (`MonoGS/utils/dataset.py:55`) — **already fixed in this fork**
  (`np.unicode_` → `np.str_`).
- **SplaTAM** (`SplaTAM/datasets/gradslam_datasets/tum.py:47`) and **SPLATONIC**
  (`SPLATONIC/datasets/gradslam_datasets/tum.py:47`) — **still unfixed.** If you plan
  to run either of those two on TUM sequences with a modern NumPy, patch that line the
  same way, or pin `numpy<2` in your env for those two repos specifically.

### Bonus gotcha — GPU-architecture-specific correctness tests

`port/tests/run_checkpoint_a.sh` (the standalone CUDA correctness harness used to
verify the ported rasterizer kernels against a CPU reference) hardcodes
`arch=compute_86,code=sm_86` (Ampere). If your cluster GPU isn't Ampere, edit that
flag to match your GPU before trusting this test as a correctness check — otherwise
it will either fail to build or silently run against the wrong SM target.

### Import order at runtime

Always `import torch` **before** importing any of the compiled CUDA extensions
(`track_rasterization`, `map_rasterization`, `diff_gaussian_rasterization`,
`simple_knn`). Torch's own import preloads shared libraries (`libc10.so`, etc.) these
extensions link against; importing an extension first fails with
`libc10.so: cannot open shared object file` even though the `.so` is present and the
build succeeded. (Real `slam.py`/`splatam.py` entry points already do this correctly —
this only bites you in ad-hoc smoke tests.)

---

## 5. Build each system

Set your GPU's compute capability once (skip to auto-detect if unsure, but this
speeds up the build a lot by not compiling for every architecture):

```bash
export TORCH_CUDA_ARCH_LIST='8.0'   # A100; use 7.5 for T4, 8.6 for 3090/A6000, 9.0 for H100
export MAX_JOBS=4                    # cap ninja parallelism if you're RAM-constrained
```

### A. SplaTAM (dense baseline, unmodified)

```bash
cd SplaTAM
pip install -c ../constraints.txt -r requirements.txt
pip install -c ../constraints.txt git+https://github.com/JonathonLuiten/diff-gaussian-rasterization-w-depth.git@cb65e4b86bc3bd8ed42174b72a62e8d3a3a71110
```

### B. SPLATONIC (SplaTAM + the paper's sparse rasterizer, reference implementation)

```bash
cd SPLATONIC
pip install -c ../constraints.txt -r requirements.txt
pip install --no-build-isolation ./diff-gaussian-rasterization-w-depth
pip install --no-build-isolation ./track-rasterization
pip install --no-build-isolation ./map-rasterization
```

### C. MonoGS + this port's SPLATONIC integration (the actual deliverable)

```bash
cd MonoGS
# simple-knn first (§4 issue 2) — non-editable
pip install --no-build-isolation ./submodules/simple-knn
pip install --no-build-isolation -e ./submodules/diff-gaussian-rasterization
pip install --no-build-isolation -e ./track-rasterization
pip install --no-build-isolation -e ./map-rasterization
```

Verify all four extensions import cleanly and CUDA actually runs:

```bash
python -c "
import torch  # must come first, see §4
import track_rasterization, map_rasterization, diff_gaussian_rasterization, simple_knn
from simple_knn._C import distCUDA2
print('all 4 CUDA extensions import cleanly')
x = torch.randn(1000, 3, device='cuda')
print('distCUDA2 smoke test output shape:', distCUDA2(x).shape)
"
```

---

## 6. Datasets

Each repo has its own `bash_scripts/`/`scripts/` downloader and its own expected
dataset path — they are **not** shared, even for the same TUM sequence:

```bash
# SplaTAM / SPLATONIC (expects ./data/TUM_RGBD/, ./data/Replica/)
cd SplaTAM && bash bash_scripts/download_tum.sh && bash bash_scripts/download_replica.sh
cd SPLATONIC && bash bash_scripts/download_tum.sh && bash bash_scripts/download_replica.sh

# MonoGS (expects ./datasets/tum/, ./datasets/Replica/)
cd MonoGS && bash scripts/download_tum.sh
```

---

## 7. Running each system

### SplaTAM (dense baseline)

```bash
cd SplaTAM
python scripts/splatam.py configs/tum/splatam.py
```
Edit `scene_name = scenes[<index>]` inside the config file to pick a TUM sequence.

### SPLATONIC (sparse SplaTAM, the paper's own numbers)

```bash
cd SPLATONIC
python scripts/splatam_sparse.py configs/tum/splatam.py   # sparse (SPLATONIC)
python scripts/splatam.py configs/tum/splatam.py           # dense baseline, for comparison
```

### MonoGS + this port (the primary thing to validate)

```bash
cd MonoGS

# Dense baseline (stock MonoGS, unmodified) — sanity reference
python slam.py --config configs/mono/tum/fr1_desk.yaml --eval

# Sparse (SPLATONIC ported onto MonoGS) — this is the port's headline path
python slam.py --config configs/mono/tum/fr1_desk_splatonic.yaml --eval

# Motion-prior fix sweep (see §8 — this is the currently-unvalidated fix)
python slam.py --config configs/mono/tum/fr1_desk_splatonic_motionprior_030.yaml --eval
python slam.py --config configs/mono/tum/fr1_desk_splatonic_motionprior.yaml --eval        # alpha=0.5
python slam.py --config configs/mono/tum/fr1_desk_splatonic_motionprior_075.yaml --eval

# Other experimental mitigations already tried and found insufficient (§8) — run only
# out of curiosity, not expecting a fix:
python slam.py --config configs/mono/tum/fr1_desk_splatonic_trackflip.yaml --eval
python slam.py --config configs/mono/tum/fr1_desk_splatonic_reanchor.yaml --eval
```

`--eval` runs headless (`use_gui=False` forced) and writes results to
`results/tum_rgbd_dataset_freiburg1_desk/<run>/`:
- `plot/stats_final.json` → `rmse` field is the trajectory RMSE ATE (lower = better)
- `psnr/*/final_result.json` → `mean_psnr`/`mean_ssim` (rendering quality)

`port/kaggle_validate.ipynb` contains a ready-made `run_config()` Python helper that
runs a config, times it, and parses both files out automatically — worth adapting
into a plain script if you're running many configs unattended on the cluster (e.g.
inside a Slurm job, §9).

---

## 8. The actual open problem — read this before trusting any numbers

**Sparse tracking's rotation estimate drifts.** On TUM `fr1_desk`, sparse tracking
(SPLATONIC ported onto MonoGS) gets RMSE ATE ≈0.72m vs. dense's ≈0.03m — a ~24x
regression. Translation tracking and mapping quality are unaffected; this is
specifically a rotation problem. This is **not** a bug introduced by this port's CUDA
work — it's a genuine property of carrying SPLATONIC's sparse-sampling speed trick
from SplaTAM (RGB-D, has depth to anchor scale/geometry) onto MonoGS (monocular, no
depth sensor, and — critically — **no loop closure or bundle adjustment** to correct
accumulated pose error).

**Root cause (well-evidenced, see `port/STATUS.md` §9 for the full 11-experiment
investigation):** sparse tracking's per-frame rotation gradient is a genuinely
**high-variance** (not fixed-bias) Monte-Carlo estimate of the true photometric
gradient — each frame's tiny random pixel sample gives a noisy estimate of the true
rotation, and because MonoGS chains each frame's starting pose from the *previous*
frame's estimate with no cross-frame correction, that per-frame noise compounds into
an uncorrected random walk instead of averaging out.

**Two mitigations already tried and found insufficient:**
1. More pixels per frame (`generate_random_mask_k`, 4x samples) — no improvement.
2. Periodic dense re-anchoring (`tracking_reanchor_period`/`tracking_reanchor_block`)
   — fixes instantaneous drift while it's active, but doesn't fix the whole-trajectory
   RMSE metric (which sums every excursion along the way, not just the final position).

**Third mitigation, implemented but *not yet validated at full-sequence scale* —
this is the thing this cluster access is for:** a constant-angular-velocity motion
prior (`tracking_motion_prior_alpha` in `slam_frontend.py`) — a shrinkage estimator
that blends each frame's noisy observed rotation with a lower-variance prediction from
the previous frame's motion. Verified correct in isolation (round-trip math checks,
19-frame smoke test) on a slow dev GPU, but never run across the full ~613-frame
sequence where the regression actually shows up, because that dev GPU is too slow/small
for a full comparative run. **This is exactly what §7's 5-config run (dense baseline,
sparse baseline, alpha 0.3/0.5/0.75) is for** — run it on your cluster GPU and look at
whether any alpha value meaningfully beats the sparse baseline's RMSE ATE. If none do,
the remaining directions are a stronger/adaptive prior or proper loop closure/bundle
adjustment (out of scope for a quick patch).

**One methodological gap in the validation plan itself, worth knowing about:** MonoGS's
own README notes "multi-process performance has some randomness due to GPU
utilisation" — the dual-process `FrontEnd`/`BackEnd` architecture (message-queue-based)
isn't perfectly deterministic run-to-run. Neither `kaggle_validate.ipynb` nor this
guide runs multiple seeds per config. A single run per config is enough to catch a
large effect (like the 24x baseline regression) but not enough to be fully confident
about a smaller improvement from the motion-prior sweep — if compute budget allows,
repeat the sparse configs 2-3x and look at the spread before concluding much from a
close call.

---

## 9. Optional: Slurm sbatch template

If your cluster uses Slurm, adapt this (queue/partition names, module loads, and conda
init lines are cluster-specific — check with your cluster's docs):

```bash
#!/usr/bin/env bash
#SBATCH --job-name=splatonic-monogs
#SBATCH --gres=gpu:1
#SBATCH --cpus-per-task=8
#SBATCH --mem=32G
#SBATCH --time=04:00:00
#SBATCH --output=slam_%j.log

source ~/miniconda3/etc/profile.d/conda.sh
conda activate splatonic-port
cd "$SLURM_SUBMIT_DIR/MonoGS"

python slam.py --config configs/mono/tum/fr1_desk.yaml --eval
python slam.py --config configs/mono/tum/fr1_desk_splatonic.yaml --eval
python slam.py --config configs/mono/tum/fr1_desk_splatonic_motionprior_030.yaml --eval
python slam.py --config configs/mono/tum/fr1_desk_splatonic_motionprior.yaml --eval
python slam.py --config configs/mono/tum/fr1_desk_splatonic_motionprior_075.yaml --eval
```

`--time` should comfortably exceed the sum of all 5 runs — the Kaggle validation plan
budgets up to 1 hour per run (see `kaggle_validate.ipynb`'s `timeout=3600` in
`run_config()`), so 4 hours total is a safe upper bound for a T4-class GPU; a faster
cluster GPU (A100/H100) should finish well under that.

---

## 10. Other known limitations, briefly

- **Dependency fragility is packaging debt, not an algorithm problem.** All three
  bugs in §4 are generic pip/build-tooling issues (unpinned transitive deps, PEP 660
  editable installs, a removed NumPy alias) inherited from stacking three
  independently-maintained research codebases with loose version pins — none of them
  reflect anything wrong with SPLATONIC's actual rendering algorithm.
- **`environment.yml` files across all three repos are stale relative to what's
  actually been validated.** They specify Python 3.7–3.10 / torch 1.12–2.7 / CUDA
  11.6–12.8; the only stack this port has been run end-to-end against on real hardware
  is Python 3.12 / torch 2.10.0+cu128. Prefer the newer stack (§3) unless you have a
  specific reason to match an old one.
- **MonoGS's dense mapping loss and its sparse mapping loss differ in a
  non-obvious way**, which an earlier draft of this repo's documentation got backwards:
  stock MonoGS's real-time per-frame mapping loss is L1-only (SSIM only appears in a
  one-time offline `color_refinement()` pass at the very end of a run), but this port's
  **sparse** mapping loss (`get_loss_mapping_sparse`) does add a shuffled-packed SSIM
  term. If you're comparing dense vs. sparse mapping quality, that's a genuine
  asymmetry in the loss functions being compared, not just a sampling-density
  difference. (See `port/MONOGS_FLOW_SPLATONIC.md` for the full pipeline diagram.)
- **SPLATONIC's paper has a third contribution — a custom pipelined hardware
  architecture — with no software artifact anywhere in this repo.** Nothing here
  exercises that part of the paper; everything in this guide is CPU/GPU software only.

---

## 11. Debug/experiment env vars and config flags (MonoGS+SPLATONIC only)

All gated to be no-ops unless explicitly set, so they're safe to leave unset for a
normal run.

| Name | Kind | What it does |
|---|---|---|
| `use_splatonic` | config (`Training:`) | Master switch — `true` routes tracking/mapping through the sparse pixel-based rasterizers instead of stock MonoGS's dense one. |
| `flip_ratio` | config (`Training:`) | Mapping's dense:sparse interleave ratio (default `4` → 1 dense render per 4 mapping iterations). |
| `tracking_motion_prior_alpha` | config (`Training:`) | The motion-prior fix (§8). `0.0` (default) = disabled/exact prior behavior. Configs at 0.3/0.5/0.75 exist for the sweep. |
| `tracking_flip_ratio` | config (`Training:`) | Same dense:sparse interleave idea as mapping's, applied to tracking. Tried, didn't fix the RMSE metric (§8). |
| `tracking_reanchor_period` / `tracking_reanchor_block` | config (`Training:`) | Periodic forced-dense-tracking re-anchoring. Tried, didn't fix the RMSE metric (§8). |
| `SPLATONIC_DEBUG_ATE` | env var | Prints per-frame debug telemetry (overshoot ratio, sample spread, exposure deltas) used throughout the §8 investigation. |
| `SPLATONIC_DEBUG_FORCE_DENSE_FRAMES` | env var | e.g. `200-215` — forces dense tracking loss for a specific frame range mid-run; used for the decisive A/B causality test in §8. |
| `SPLATONIC_DEBUG_TRACK_K` | env var | Number of samples per tile when using `generate_random_mask_k` instead of the default 1-per-tile mask. |
| `SPLATONIC_DEBUG_ISOLATE_FRAME` | env var | Runs `_debug_isolate_rotation` on the given frame(s) — optimizes rotation only, holding translation/exposure fixed. |
| `SPLATONIC_DEBUG_GRAD_TRUTH_FRAME` | env var | Runs `_debug_gradient_at_truth` on the given frame(s) — computes the tracking-loss gradient exactly at the ground-truth pose, dense vs. sparse. |

---

## 12. Where to go deeper

- `port/STATUS.md` — the full milestone-by-milestone session log (very long; §9 is the
  rotation-drift investigation referenced throughout this guide).
- `port/SPLATAM_TO_SPLATONIC_CHANGES.md` — line-by-line diff spec of every SPLATONIC
  change relative to stock SplaTAM.
  `port/MILESTONE_PLAN_V3.md` / `port/IMPLEMENTATION_GUIDE.md` — the original CUDA
  porting roadmap and spec this work was implemented against.
- `port/SPLATAM_MONOGS_SPLATONIC_EXPLAINED.md` — beginner-level explainer of both
  papers and what SPLATONIC changes.
- `port/SPLATAM_FLOW_SPLATONIC.md` / `port/MONOGS_FLOW_SPLATONIC.md` — Mermaid
  pipeline diagrams with SPLATONIC's two contributions (sparse sampling, pixel-based
  rendering) highlighted per-pipeline-stage.
