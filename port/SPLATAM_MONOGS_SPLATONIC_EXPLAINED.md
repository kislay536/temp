# SplaTAM, MonoGS, and SPLATONIC — Explained Like You're in High School

This document explains two research papers — **SplaTAM** and **MonoGS** — in plain
language, points out exactly which parts of each one are slow/wasteful, and explains
how a third project, **SPLATONIC**, fixes those specific parts. Every technical claim
here is grounded in the actual code in this repository (`SplaTAM/`, `MonoGS/`,
`SPLATONIC/`), not just the papers' abstracts.

---

## First, some background: what is "SLAM"?

Imagine you're dropped into a dark room with a flashlight-camera and told to (a) build
a 3D map of the room, and (b) figure out exactly where you're standing at every
moment — **at the same time**, using only the video from your camera. That's SLAM:
**S**imultaneous **L**ocalization **A**nd **M**apping.

It's a chicken-and-egg problem. To know where you are, you need a map. To build a
map, you need to know where you are (and were, for every earlier frame). SLAM systems
solve both problems together, frame by frame, as the video streams in.

Both SplaTAM and MonoGS are SLAM systems. Both represent the "map" using **3D
Gaussians** instead of the more traditional point clouds or triangle meshes. SPLATONIC
isn't a new SLAM system — it's a set of engineering tricks that make the *rendering*
step inside SLAM systems like these much faster, without (in principle) changing the
answer they give.

### What's a "3D Gaussian"?

Picture a fuzzy, soft-edged blob of paint — like an airbrush spray — floating in 3D
space. It has:
- a **position** (where the blob's center is)
- a **size and shape** (a small round dot, or a stretched-out oval)
- a **color**
- an **opacity** (how see-through it is)

A single blob is useless. But if you scatter *millions* of these blobs through space,
each with its own position/shape/color/opacity, and you view them all from some
camera angle, the overlapping, blended blobs can look like a photorealistic 3D scene —
similar to how millions of dots of ink make up a printed photo. This whole
technique is called **3D Gaussian Splatting**, and it's the map representation both
SplaTAM and MonoGS build.

The reason this representation is popular for SLAM specifically: turning a set of
Gaussians into a 2D image (**rendering**) is fast and — crucially — **differentiable**.
That means if the rendered image doesn't match the real camera photo, the computer can
directly calculate *which direction* to nudge the Gaussians (or the camera's assumed
position) to make them match better. This nudging-until-it-matches process is the
engine behind everything both systems do.

---

## Part 1: SplaTAM — "Splat, Track & Map"

SplaTAM's own name spells out its three-step loop, repeated for every incoming video
frame. It assumes you have an **RGB-D camera** — a camera that gives you a color photo
*and* a depth photo (how far away each pixel is) at the same time, like a Kinect or an
iPhone with LiDAR.

### The SplaTAM loop, frame by frame

1. **Track.** Freeze the current Gaussian map completely (don't change it at all).
   Render what the map *thinks* the camera should be seeing right now, from a guessed
   camera position. Compare that rendered picture to the real photo the camera just
   took. If they don't match, nudge the *camera's assumed position* (not the map) a
   tiny bit and re-render. Repeat this nudge-and-compare loop many times (tens to
   hundreds of iterations) until the rendered picture matches the real one closely —
   that final position is the camera's estimated pose for this frame.
2. **Densify.** Now that the camera's position for this frame is known, check which
   parts of the real photo the current map does a *bad* job of explaining (either the
   map didn't cover that area at all, or its depth guess is way off). Turn those poorly
   covered pixels into brand-new Gaussians and add them to the map.
3. **Map.** Pick a handful of past frames ("keyframes") that overlap with what the
   camera can currently see. Now let the Gaussians themselves move/resize/recolor
   (instead of freezing them like in step 1) to better match all of those keyframes at
   once. This is what sharpens and corrects the map over time.

Then repeat all three steps for the next frame. There's no giant neural network
anywhere in this loop — the "map" is just a big, explicit, editable list of Gaussian
blobs, and a differentiable renderer is the only "learning" machinery involved.

### How rendering actually works under the hood (this is where SPLATONIC comes in)

To turn millions of Gaussians into a 2D picture, SplaTAM's renderer does roughly this:

```
1. Split the screen into 16×16-pixel tiles (like a grid of little squares).
2. For every Gaussian, figure out which tiles it overlaps, and "stamp" a
   copy of it into each of those tiles' to-do lists.
3. Sort each tile's to-do list by depth (closest Gaussian first).
4. For each tile, hand its 256 pixels to 256 GPU threads (one thread per
   pixel), and have each thread blend that tile's sorted Gaussian list,
   front-to-back, into a final pixel color — like stacking translucent
   stickers on top of each other.
```

This has to happen for **every single pixel of the full image**, and it happens
**every single tracking iteration** (remember — tracking runs this render dozens to
hundreds of times per frame, just to nudge the camera pose into place) and for most
mapping iterations too.

### 🔧 What SPLATONIC found wasteful about this — and how it fixes it

> **Marked bottleneck #1 — full-image rendering during tracking, every iteration.**
> Tracking is only solving for **6 numbers**: the camera's 3D position and 3D
> rotation. Rendering and comparing *every single pixel* of a, say, 640×480 image
> (over 300,000 pixels) to estimate just 6 numbers is massive overkill — most pixels
> are giving nearly identical, redundant information about "which way should the
> camera move."
>
> **SPLATONIC's fix:** during tracking, instead of rendering the whole image, render
> only **one randomly-picked pixel per 16×16 tile** — about **1/256th of the image**.
> Because the sample still spreads evenly across the whole picture (one dot per tile,
> not clustered in a corner), it still "sees" the whole scene, just much more sparsely.
> This is done by `generate_random_mask()` in `mask_utils.py`, called once per frame
> and reused across all the tracking iterations for that frame.

> **Marked bottleneck #2 — full-image rendering for most mapping iterations.**
> Mapping is reshaping the Gaussians themselves, which needs more visual detail than
> tracking does, but still doesn't need a full render on *every single* iteration to
> make progress.
>
> **SPLATONIC's fix:** mix mostly-sparse renders with occasional full-image ("dense")
> renders — a schedule called **FLIP**. Every 4th mapping iteration is a full dense
> render; the other 3 use a **gradient-weighted sparse sample** (`adaptive_random_
> sampling()`), which deliberately puts more sample points on edges/textured areas and
> fewer on flat blank walls, because flat regions carry almost no useful shape
> information. The occasional dense pass keeps the whole optimization anchored to the
> full picture so it doesn't drift toward only fixing the sparsely-sampled spots.

> **Marked bottleneck #3 — the low-level rendering pipeline itself is built around
> "tiles," which forces wasted, redundant work.**
> The stamp-into-every-overlapping-tile step (called `duplicateWithKeys`) makes
> **one copy of a Gaussian's info for every tile it touches.** A big or numerous
> Gaussian can touch dozens of tiles, so this step alone creates huge numbers of
> duplicate entries that then all have to be sorted — real, measurable CUDA work spent
> purely on bookkeeping, not on actually deciding a pixel's final color.
>
> **SPLATONIC's fix:** throw out the whole tile-based pipeline and replace it with a
> **pixel-based** one. Instead of "which tiles does this Gaussian touch," it asks
> "which of the *few sampled pixels* does this Gaussian touch" — a much smaller,
> pre-selected set — and stamps the Gaussian directly onto *those specific pixels*,
> skipping the tile bookkeeping and the entire separate `duplicateWithKeys` step. The
> sort key changes from "which tile" to "which sampled pixel," but the actual sorting
> algorithm (`cub::DeviceRadixSort`) is reused unchanged — it doesn't care what the key
> means. This is implemented in new files, `track-rasterization/` and
> `map-rasterization/`, which replace SplaTAM's original rasterizer for the
> tracking and mapping paths respectively.

> **Marked bottleneck #4 (small but clever) — Gaussians that are basically invisible
> at a pixel still get fully processed.**
> **SPLATONIC's fix:** add a cheap early-exit check ("preemptive alpha culling") —
> if a Gaussian's computed transparency at a given pixel is so faint it would barely
> nudge that pixel's color at all (below about 0.4%), skip it immediately, before
> spending any more work on it. Because this check happens for free as a byproduct of
> work the renderer was already doing, it costs essentially nothing to add.

> **Marked bottleneck #5 — one popular image-quality-comparison trick,
> "SSIM" (structural similarity), technically only works on a normal, rectangular
> image.**
> Once you're only rendering scattered sparse pixels instead of a full image, you no
> longer *have* a normal rectangular image to feed into a standard SSIM calculation.
>
> **SPLATONIC's fix:** a trick called `calc_ssim_shuffled_packed()` — take the
> scattered sampled pixels, shuffle a randomized copy of them, glue the original and
> shuffled versions together into a synthetic fake "image" shape, and run standard
> SSIM on *that*. It's not exactly the same math as true SSIM on a real image, but it
> approximates the same idea well enough to keep using this quality loss even in the
> sparse-pixel setting, instead of being forced to give it up entirely.

**Net effect on SplaTAM:** the accuracy goal stays the same — end up with the same
kind of camera pose and the same kind of sharp Gaussian map — but the amount of raw
GPU rendering work per iteration drops enormously (especially for tracking, which is
the highest-frequency part of the whole loop), which is what makes the SLAM system run
meaningfully faster.

---

## Part 2: MonoGS — Gaussian Splatting SLAM Without a Depth Sensor

MonoGS tackles the same "build a 3D Gaussian map + track the camera" problem as
SplaTAM, but for a **much harder input**: a plain, ordinary color camera, with **no
depth sensor at all** (this is what "Mono" in MonoGS means — monocular, one camera,
color only). MonoGS can also use depth or stereo cameras if you have them, but its
real claim to fame is working with just a single RGB camera, which most phones and
webcams already have.

### Why "no depth" is a genuinely hard problem

If a camera also measures depth, tracking is "easy" in the sense that you always know
exactly how far away every pixel is. Without depth, all you have is color, and color
alone is ambiguous — a small object close up and a large object far away can look
identical in a 2D photo. MonoGS has to squeeze depth information indirectly out of
*how the scene appears to shift* as the camera moves between frames, using the
Gaussian map's own rendered depth as its only source of "depth truth."

### How MonoGS tracks the camera without a depth sensor

The core trick is the same differentiable-rendering idea as SplaTAM: render what the
frozen map thinks the camera should see, compare it to the real photo, and nudge the
camera pose until they match. A few MonoGS-specific engineering details make this work
well without real depth:

- **The camera pose isn't tweaked directly.** Directly editing "position and
  rotation" numbers is mathematically awkward for optimization. Instead, MonoGS
  optimizes two small "nudge" vectors each step (`cam_rot_delta`, `cam_trans_delta`),
  then uses a closed-form math formula (the **SE(3) exponential map**) to safely fold
  that tiny nudge into the camera's real pose, and resets the nudge back to zero for
  the next step. This is a well-established trick in robotics for optimizing 3D poses
  without hitting numerical weirdness.
- **A gradient mask ignores boring pixels.** Perfectly flat, texture-less walls or
  ceilings don't tell you anything about camera motion (a photo of a flat white wall
  looks the same no matter how the camera moved). MonoGS precomputes which pixels are
  "textured enough" to be useful (via a Scharr-filter edge detector) and only weighs
  those pixels in the tracking loss.
- **Exposure correction.** Real cameras auto-adjust brightness between frames. MonoGS
  fits two extra small numbers per frame (`exposure_a`, `exposure_b`) that
  brighten/darken the rendered image to match the real photo's exposure, so pose
  tracking isn't thrown off by lighting changes that have nothing to do with camera
  motion.
- **Mapping** works much like SplaTAM's: a small rotating window of recent keyframes
  gets jointly refined (Gaussians *and* their poses), new Gaussians get added for
  newly-seen geometry, and old/bad Gaussians get pruned.

### 🔧 What's the exact same bottleneck as SplaTAM — and marked for the exact same fix

Here's the important part: **stock MonoGS's rendering engine is, at its core, the
same tile-based rasterizer described in Part 1** (in fact, both trace back to the same
lineage of 3D-Gaussian-Splatting CUDA code). That means it has the exact same
weaknesses:

> **Marked bottleneck — tracking renders the full image, every single one of its many
> per-frame pose-optimization iterations**, to solve for the same small handful of
> pose numbers (plus the two exposure numbers) — just like SplaTAM.
>
> **Marked bottleneck — mapping also always renders the full image**, with no
> sparse-sampling option at all in stock MonoGS.
>
> **Marked bottleneck — the same tile-based, `duplicateWithKeys`-style rendering
> pipeline**, with the same wasted duplicate-key-generation overhead described above.

Since MonoGS has no depth sensor to fall back on, its tracking loop actually runs
*more* photometric-rendering iterations per frame than a typical RGB-D system needs
(depth gives you a strong extra signal that speeds up convergence; monocular tracking
has to lean more heavily on repeated color-matching passes) — which makes the
"render-the-whole-image-every-iteration" waste even more costly here than in SplaTAM.

### How SPLATONIC improves MonoGS (this is literally this project)

This repository is the actual engineering work of porting SPLATONIC's sparse-pixel
rendering trick onto MonoGS. The idea transfers almost directly:

- **For tracking:** exactly the same uniform 1-pixel-per-16×16-tile sampling as
  SplaTAM (`generate_random_mask`), feeding into a ported `track-rasterization` CUDA
  extension, wired into MonoGS's own tracking loop (`FrontEnd.tracking()` in
  `slam_frontend.py`) so it renders roughly **1/256th of the image** per tracking
  iteration instead of the whole thing.
- **For mapping:** the same dense/sparse FLIP-style schedule, via a ported
  `map-rasterization` CUDA extension, mixed into MonoGS's own mapping loop
  (`BackEnd.map()` in `slam_backend.py`).
- **The porting work itself was non-trivial** because MonoGS's plumbing (its own
  `render()` wrapper, its own `Camera` class, its own config system, and monocular
  specific details like depth coming from the map's own rendered output rather than a
  sensor) is structured differently from SplaTAM's. Every file this project touched —
  the CUDA kernels, the Python rendering dispatch, the tracking/mapping loops — had to
  be carefully adapted rather than copy-pasted; that adaptation, milestone by
  milestone, is what the rest of this repository (`port/`) documents.
- **Net effect:** tracking touches a tiny fraction of the pixels per iteration instead
  of the whole image, which is the same category of speed win SPLATONIC demonstrated
  on SplaTAM.

### An honest engineering footnote

Real engineering doesn't always transfer perfectly on the first try, and it's worth
saying so plainly: this project's own investigation (documented in `port/STATUS.md`)
found that sparse tracking's *camera-rotation* accuracy is measurably worse than
dense tracking's on a real test sequence, even though translation tracking is fine.
The root cause that was found: estimating a camera rotation from a small random pixel
sample each frame is a **noisier** (higher-variance) estimate than using the whole
image, and because each frame's pose calculation starts from the *previous* frame's
estimate with no correction mechanism across frames, that per-frame noise can
gradually accumulate into drift. A fix inspired by classic robotics — smoothing the
rotation estimate using the assumption that the camera keeps rotating at roughly the
same rate frame-to-frame — has been implemented and is currently being validated. This
doesn't change the core idea (sparse sampling really does save real rendering work);
it's the normal reality of adapting a speed trick from one system to a harder one and
finding — and fixing — the rough edges along the way.

---

## The one-paragraph summary

SplaTAM and MonoGS both build a 3D map out of soft, blendable "paint blob" Gaussians
and use a fast, differentiable renderer to figure out both the map and the camera's
path through it, frame by frame. Both waste a lot of rendering work by re-rendering
**every single pixel** dozens of times per frame just to solve for a handful of camera
numbers, and both use a rendering pipeline that duplicates work across CUDA tiles.
SPLATONIC's contribution is a full redesign of that rendering pipeline — sample only a
sparse, well-spread subset of pixels most of the time, occasionally mix in a full
dense render to stay anchored, cull invisible Gaussians early, and rebuild the CUDA
kernels around "one block of threads per sampled pixel" instead of "one block of
threads per tile" — cutting out large amounts of redundant work without changing what
question the SLAM system is actually trying to answer. This repository is the project
of carrying that same redesign over from SplaTAM onto MonoGS.
