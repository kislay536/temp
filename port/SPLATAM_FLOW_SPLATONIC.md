# SplaTAM Pipeline — with SPLATONIC's Modified Blocks Highlighted

This diagram shows SplaTAM's real per-frame loop (Track → Densify → Map, repeated for
every incoming RGB-D frame). The two **yellow** blocks are the ones SPLATONIC actually
replaces. Next to each highlighted block is a **small blue side-flow** showing exactly
what SPLATONIC swaps in at that point — this is *not* a full second pipeline, just the
local replacement for that one block.

Every node is labeled with its **type** (Rendering / Loss / Sampling / Rasterization /
Gaussian Mgmt / Selection / Optimizer / Scheduler) so you can see at a glance what kind
of work each step is doing.

```mermaid
flowchart TB
    classDef modified fill:#ffe08a,stroke:#b8860b,stroke-width:3px,color:#000
    classDef splatonic fill:#bde0fe,stroke:#023e8a,stroke-width:2px,color:#000
    classDef normal fill:#f1f1f1,stroke:#888,color:#000
    classDef decision fill:#f6f6f6,stroke:#666,color:#000

    subgraph SPLATAM["SplaTAM — per-frame loop (scripts/splatam.py)"]
        direction TB
        A["📷 New RGB-D frame arrives<br/><i>Type: Data Input</i>"]:::normal
        B["🎯 TRACK: render map @ guessed pose<br/><i>Type: Rendering — Tile-based rasterizer<br/>Gaussians FROZEN</i>"]:::modified
        C["📉 TRACK: compare + compute loss<br/><i>Type: Loss — L1 photometric + L1 depth</i>"]:::normal
        D{"Pose converged?<br/><i>Type: Optimizer — Adam, camera-pose-only</i>"}:::decision
        E["✨ DENSIFY: find poorly-covered pixels<br/><i>Type: Gaussian Mgmt — silhouette / depth-error check</i>"]:::normal
        F["➕ DENSIFY: back-project new Gaussians<br/><i>Type: Gaussian Mgmt — point-cloud insertion</i>"]:::normal
        G["🗂️ MAP: select keyframes<br/><i>Type: Selection — covisibility overlap</i>"]:::normal
        H["🎨 MAP: render + optimize Gaussians<br/><i>Type: Rendering — Tile-based rasterizer<br/>Gaussians TRAINABLE</i>"]:::modified
        I["📉 MAP: compute loss + backward<br/><i>Type: Loss — L1 + SSIM photometric + L1 depth</i>"]:::normal
        K{"More mapping iters?<br/><i>Type: Optimizer — Adam, Gaussians + poses</i>"}:::decision
        J["💾 Checkpoint, advance to next frame"]:::normal

        A --> B --> C --> D
        D -- "no: nudge pose" --> B
        D -- "yes" --> E --> F --> G --> H --> I --> K
        K -- "no: keep optimizing" --> H
        K -- "yes: done" --> J --> A
    end

    subgraph SPT["⚡ SPLATONIC swap-in — Tracking render"]
        direction TB
        T1["🎲 Sample sparse pixel mask<br/><i>Type: Sampling — uniform,<br/>1 pixel / 16×16 tile</i>"]:::splatonic
        T2["🧩 Pixel-based rasterizer<br/><i>Type: Rasterization — pixel-parallel,<br/>256 threads/pixel<br/>(track-rasterization)</i>"]:::splatonic
        T3["📉 Sparse loss, sampled pixels only<br/><i>Type: Loss — L1, ~1/256 of the image</i>"]:::splatonic
        T1 --> T2 --> T3
    end

    subgraph SPM["⚡ SPLATONIC swap-in — Mapping render"]
        direction TB
        M1{"🔁 FLIP scheduler<br/><i>Type: Scheduler — 1 dense : 3 sparse</i>"}:::splatonic
        M2["🎨 Dense render (unchanged path)<br/><i>Type: Rendering — tile-based, full image</i>"]:::splatonic
        M3["🎲 Gradient-weighted sampling<br/><i>Type: Sampling — Sobel-weighted, adaptive</i>"]:::splatonic
        M4["🧩 Pixel-based rasterizer<br/><i>Type: Rasterization — pixel-parallel,<br/>16 threads/pixel<br/>(map-rasterization)</i>"]:::splatonic
        M5["📉 Shuffled-packed SSIM loss<br/><i>Type: Loss — SSIM on scattered pixels</i>"]:::splatonic
        M1 -- "1 of every 4 iters" --> M2
        M1 -- "other 3 of 4 iters" --> M3 --> M4 --> M5
    end

    B -. "SPLATONIC replaces this render step with →" .-> T1
    H -. "SPLATONIC replaces this render step with →" .-> M1
```

**Legend:** 🟡 yellow = the exact block SPLATONIC modifies. 🔵 blue = SPLATONIC's
replacement logic for that block, shown as its own tiny flow. Everything in grey is
untouched by SPLATONIC.

---

## Step-by-step explanation

### The main SplaTAM loop (grey + yellow blocks)

1. **New RGB-D frame arrives** *(Data Input)* — a color photo + a depth photo land
   from the camera.
2. **TRACK: render map at guessed pose** *(Rendering — Tile-based rasterizer, 🟡
   modified)* — freeze every Gaussian in the map exactly as-is, and render what the
   camera *should* see if it were at the currently-guessed position. SplaTAM's
   original renderer does this by dropping every Gaussian into all the 16×16-pixel
   screen tiles it overlaps, sorting each tile's Gaussians by depth, and blending
   them front-to-back — for the *entire* image.
3. **TRACK: compare + compute loss** *(Loss — L1 photometric + L1 depth)* — compare
   the rendered picture to the real photo pixel-by-pixel and turn the mismatch into a
   single loss number.
4. **Pose converged?** *(Optimizer — Adam, camera-pose-only)* — if the loss is still
   too high, nudge the guessed camera pose a little (gradient descent) and go back to
   step 2. This loop runs many times per frame.
5. **DENSIFY: find poorly-covered pixels** *(Gaussian Mgmt)* — now that the pose for
   this frame is settled, check which pixels the current map explains badly (low
   "silhouette" confidence, or a big depth mismatch).
6. **DENSIFY: back-project new Gaussians** *(Gaussian Mgmt)* — turn those
   poorly-explained pixels into brand-new Gaussian blobs and add them to the map.
7. **MAP: select keyframes** *(Selection — covisibility overlap)* — pick a handful of
   past frames that overlap with what the camera currently sees, to optimize against.
8. **MAP: render + optimize Gaussians** *(Rendering — Tile-based rasterizer, 🟡
   modified)* — this time let the Gaussians themselves change (position, size, color,
   opacity) instead of freezing them, rendering each selected keyframe the same
   tile-based way as step 2.
9. **MAP: compute loss + backward** *(Loss — L1 + SSIM + L1 depth)* — compare
   rendered vs. real for all the selected keyframes and backpropagate into the
   Gaussian parameters.
10. **More mapping iters?** *(Optimizer — Adam, Gaussians + poses)* — repeat steps
    8–9 for a fixed number of iterations, then checkpoint and move to the next frame.

### SPLATONIC's swap-in for Tracking (blue box, replaces step 2)

1. **Sample sparse pixel mask** *(Sampling — uniform)* — instead of using every
   pixel, pick exactly one random pixel from each 16×16 tile across the image (about
   1/256th of all pixels), once per frame, reused for every tracking iteration that
   frame.
2. **Pixel-based rasterizer** *(Rasterization — pixel-parallel, `track-rasterization`)*
   — a rebuilt CUDA renderer that, instead of organizing work by *tile*, organizes it
   by *sampled pixel*: each Gaussian is stamped directly onto only the sampled pixels
   it covers (no more "duplicate into every tile" step), sorted by pixel instead of
   tile, and rendered with 256 GPU threads cooperating on a single pixel at a time.
3. **Sparse loss, sampled pixels only** *(Loss — L1)* — the same L1 comparison as
   before, just computed over the sparse sample instead of the whole image.

### SPLATONIC's swap-in for Mapping (blue box, replaces step 8)

1. **FLIP scheduler** *(Scheduler)* — decide, per iteration, whether this pass will
   be dense (full image) or sparse. The ratio is 1 dense : 3 sparse.
2. **Dense render** *(Rendering — unchanged)* — every 4th iteration, just do the
   original full tile-based render, to keep the whole optimization anchored to the
   complete picture.
3. **Gradient-weighted sampling** *(Sampling — Sobel-weighted)* — for the other 3 of
   4 iterations, pick sample pixels with probability proportional to local image
   gradient (edges get more samples, flat blank areas get fewer, since flat areas
   carry almost no shape information).
4. **Pixel-based rasterizer** *(Rasterization — pixel-parallel, `map-rasterization`)*
   — the same pixel-indexed rendering redesign as tracking's, but tuned for mapping's
   different pixel-count/Gaussian-count trade-off (16 threads per pixel instead of
   256, since mapping samples more pixels but usually shorter per-pixel Gaussian
   lists).
5. **Shuffled-packed SSIM loss** *(Loss — SSIM on scattered pixels)* — standard SSIM
   needs a normal rectangular image, which scattered sparse pixels aren't. This step
   shuffles a copy of the sampled pixels, glues the original and shuffled versions
   into a synthetic fake "image," and runs ordinary SSIM on that — close enough to
   keep the structural-similarity loss usable in the sparse setting.

**Why this is worth doing:** tracking's inner loop (steps 2–4) runs many times per
frame just to solve for 6 pose numbers, and mapping's inner loop (steps 8–10) runs
many times per frame to reshape the Gaussians. Both were paying for a full-image
render every single time. SPLATONIC's replacements do a small, well-spread fraction
of that rendering work per iteration (occasionally topped up with a full dense render
for mapping, so quality doesn't drift), cutting the GPU cost of the two
highest-frequency steps in the whole SLAM loop.
