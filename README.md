# SPLATONIC on MonoGS

This repo is a port of **SPLATONIC** — a sparse-pixel rendering technique for
Gaussian-splatting SLAM, originally built as a fork of **SplaTAM** — onto
**MonoGS**, a different (and more actively maintained) Gaussian-splatting
SLAM system. The goal is to bring SPLATONIC's sparse tracking/mapping
speedup to MonoGS without giving up tracking/rendering quality relative to
MonoGS's own dense baseline.

## Layout

- `SplaTAM/` — the original dense Gaussian-splatting SLAM baseline SPLATONIC was built on top of.
- `SPLATONIC/` — the reference implementation: SplaTAM + sparse-pixel rendering. This is the ground truth I'm porting *from*.
- `MonoGS/` — the target system. This is where the actual port lives (`track-rasterization/`, `map-rasterization/` are the ported sparse CUDA rasterizers; the sparse sampling/loss logic lives in `MonoGS/utils/slam_frontend.py` and `slam_backend.py`).
- `port/` — all the porting documentation: the milestone plan, the architecture spec, and `STATUS.md`, which is the running log of everything done, found, and still open. If you want the full detail behind anything summarized here, that's where it is.
- `Makefile` — one command per setup/build/run/debug step, for running this on a fresh machine or a cluster. `make help` lists everything. `port/REMOTE_CLUSTER_GUIDE.md` has the full walkthrough and the environment issues I've hit along the way (no conda, no system CUDA toolkit, etc. — `check-cuda` self-heals a working `nvcc` from NVIDIA's own redistributable archives if none exists).

## Where things stand

The CUDA side of the port (the sparse rasterizer kernels themselves) has
been verified twice now, independently, against SPLATONIC's actual source —
the alpha-pruning formula, the cross-warp transmittance scan, the backward
gradient sign, buffer sizing, key-packing. All of it checks out. That part
earns the name.

The harder part turned out to be the Python-side training methodology
around the sparse renderer — the pixel-sampling density, the dense/sparse
scheduling, and a mechanism for keeping newly-observed geometry supervised.
Getting the numbers even close to dense required going through this in
detail rather than trusting that a rendered-image quality problem was
necessarily a rendering bug. Along the way I found and fixed a handful of
real, previously-uncaught issues:

- **A mapping bug that could wipe the entire map's opacity.** The periodic
  "reset opacity of non-visible Gaussians" call could receive an empty
  visibility list on a sparse mapping iteration and interpret that as
  "nothing is visible," resetting *every* Gaussian instead of just the
  non-visible ones. Deterministic, not rare — it hit roughly 3 times out of
  4 it recurred. Fixed by deferring the reset until a real, complete
  visibility snapshot is available.
- **Tracking was silently working on half its pixel budget.** A leftover
  edge-filter intersection was cutting the already-small ~1200-pixel sparse
  tracking sample down to ~500-600 pixels, with no equivalent in SPLATONIC's
  own tracking. Removed, and added the RGB-boundary masking that dense
  tracking already had but sparse tracking was missing.
- **Sparse mapping was 4x sparser than it should have been**, and with the
  actual tile size in use, that meant most tiles got zero samples on a
  sparse pass, not just fewer. Restored to match SPLATONIC's own density.
- **The newest keyframe — the one with the least-modeled geometry — had
  only a 1-in-4 chance of getting full supervision**, same as every other
  keyframe in the window. SPLATONIC guarantees its current frame is always
  densely supervised; now MonoGS's does too.
- **Ported SPLATONIC's "novelty" mask** — a way of tagging pixels that
  aren't explained by the map yet (either barely covered by any Gaussian,
  or the map's depth disagrees badly with the sensor) and making sure those
  regions keep getting supervision on later sparse passes instead of being
  left to chance. Turned out MonoGS's own renderer already outputs
  everything needed for this (an accumulated-opacity channel that's
  structurally identical to SPLATONIC's silhouette) — this didn't need any
  new CUDA work, just wiring it up.
- **Gave every keyframe its own independent dense/sparse schedule.**
  Previously the whole mapping window shared one global counter, so every
  keyframe was dense or sparse together, in lockstep. SPLATONIC's own design
  gives each keyframe its own counter, decoupled from the others — now
  MonoGS's does too.
- **One fix was tried and reverted.** Adding an SSIM term to dense mapping's
  loss (to match an inconsistency where sparse mapping had one and dense
  didn't) looked like a clean correctness fix on paper, but it directly
  broke dense tracking stability in testing — dense's rotation error, always
  bounded under a few degrees before, jumped to 30°. Reverted. Worth
  remembering: things that are "obviously correct" by the reference source
  aren't automatically safe here, because MonoGS's masking/background
  conventions differ from SplaTAM's in ways that can matter.

None of this touches the deeper, still-open problem: sparse tracking's
per-frame rotation estimate is a genuinely high-variance signal (it's
computed from a small random pixel sample each frame), and with no loop
closure to correct for it, that variance compounds over a sequence. That's
documented in detail in `port/STATUS.md` section 9 — eleven separate
hypotheses were tested there, and it's still open. The fixes above don't
solve it; they close real gaps that were making the comparison unfair
without touching the actual mechanism.

## Numbers (350-frame TUM `fr1_desk`, no fixed random seed — treat single
runs as indicative, not final)

| Stage | RMSE ATE (m) | PSNR after refine (dB) |
|---|---|---|
| Dense baseline | 0.027 | 20.32 |
| Sparse, before any of this session's fixes | 0.278 | 14.43 |
| + mapping-density / tracking-budget / current-keyframe-dense fixes | 0.213 | 15.37 |
| + novelty mask / per-keyframe scheduling | 0.161 | 15.77 |

Sparse ATE is down about 42% and PSNR up 1.34dB from where it started this
round of fixes. Still a real gap versus dense — that's the rotation-drift
problem above, not something these fixes were meant to close.

## Honest gaps that remain

- MonoGS's mapping loop still updates every keyframe in the window on every
  iteration; SPLATONIC randomly updates one keyframe per iteration. The
  per-keyframe independent scheduling *idea* is now ported faithfully, but
  the iteration mechanism itself isn't a literal match.
- There's no published number anywhere — not in this repo, not in
  SPLATONIC's own README — for SPLATONIC's sparse-vs-dense gap on its native
  SplaTAM base. So even with the port faithful, there's nothing concrete yet
  to confirm these numbers represent SPLATONIC working as intended rather
  than still falling short of it. Getting that number is the next step.
- MonoGS's own tracking loop doesn't have some of the robustness features
  SplaTAM's has by default (a constant-velocity motion model, keeping the
  best pose estimate rather than whatever the optimizer's last step lands
  on). Not a SPLATONIC issue, but a plausible reason the same sparse-sampling
  idea lands harder on MonoGS than it does on its original base.

## Running this

`make help` from the repo root lists every target. The short version for a
fresh machine:

```
make all
```

does setup, build, and a short validation run automatically, and tells you
what to run next. `make full` runs the complete multi-hour comparison sweep.
See `port/REMOTE_CLUSTER_GUIDE.md` for the full walkthrough and known
cluster-specific gotchas, and `port/STATUS.md` for the complete, detailed
history behind everything summarized above.
