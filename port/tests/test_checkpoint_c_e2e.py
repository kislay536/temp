"""
Checkpoint C: end-to-end Python forward+backward test through the REAL compiled
track_rasterization / map_rasterization extensions (not a standalone C++ harness).
Satisfies CU5.7/CU7.5/CU8.6's own "N" checks (gradient flow, n_touched>0), plus a
finite-difference cross-check on a few parameters for real backward correctness
confidence (not just "grad is not None").
"""
import sys
import torch

pkg = sys.argv[1] if len(sys.argv) > 1 else "track_rasterization"
mod = __import__(pkg, fromlist=["GaussianRasterizer", "GaussianRasterizationSettings"])
GaussianRasterizer = mod.GaussianRasterizer
GaussianRasterizationSettings = mod.GaussianRasterizationSettings

torch.manual_seed(0)
device = "cuda"

W = H = 32
P = 20

means3D = (torch.rand(P, 3, device=device) - 0.5) * 0.6
means3D[:, 2] = torch.rand(P, device=device) * 3.0 + 1.0  # depth 1..4, in front of camera
means2D = torch.zeros(P, 3, device=device, requires_grad=True)
opacities = torch.rand(P, 1, device=device) * 0.7 + 0.2
opacities.requires_grad_(True)
scales = (torch.rand(P, 3, device=device) * 0.05 + 0.02).requires_grad_(True)
rotations = torch.zeros(P, 4, device=device); rotations[:, 0] = 1.0
rotations.requires_grad_(True)
colors_precomp = torch.rand(P, 3, device=device, requires_grad=True)

bg = torch.tensor([0.1, 0.2, 0.3], device=device)
viewmatrix = torch.eye(4, device=device)
projmatrix = torch.eye(4, device=device)
projmatrix_raw = torch.eye(4, device=device)
campos = torch.zeros(3, device=device)
tanfov = 0.5

settings = GaussianRasterizationSettings(
    image_height=H, image_width=W, tanfovx=tanfov, tanfovy=tanfov,
    bg=bg, scale_modifier=1.0, viewmatrix=viewmatrix, projmatrix=projmatrix,
    projmatrix_raw=projmatrix_raw, sh_degree=0, campos=campos,
    prefiltered=False, debug=True,
)
rasterizer = GaussianRasterizer(raster_settings=settings)

# Dense sampled-pixel set (mirrors mask_utils.get_pixel_info's tile-sorted layout,
# tile_size must match the rasterizer's own BLOCK_X)
tile_size = 16 if pkg == "track_rasterization" else 4
tiles_w = (W + tile_size - 1) // tile_size
tiles_h = (H + tile_size - 1) // tile_size
per_tile = [[] for _ in range(tiles_w * tiles_h)]
for y in range(H):
    for x in range(W):
        per_tile[(y // tile_size) * tiles_w + (x // tile_size)].append((x, y))
offsets = [0]
coords = []
for t in per_tile:
    offsets.append(offsets[-1] + len(t))
    coords.extend(t)
pixel_range = torch.tensor(offsets, dtype=torch.int32, device=device)
pixel_coords = torch.tensor([v for xy in coords for v in xy], dtype=torch.int32, device=device)

cam_rot = torch.zeros(1, 3, requires_grad=True, device=device)
cam_trans = torch.zeros(1, 3, requires_grad=True, device=device)

color, radii, depth, opacity, n_touched = rasterizer(
    means3D=means3D, means2D=means2D, opacities=opacities,
    colors_precomp=colors_precomp, scales=scales, rotations=rotations,
    theta=cam_rot, rho=cam_trans,
    pixel_range=pixel_range, pixel_coords=pixel_coords,
)

print(f"[{pkg}] color.shape={tuple(color.shape)} expect (3,{H},{W})")
assert color.shape == (3, H, W)
assert n_touched.sum().item() > 0, "n_touched must be non-zero"
print(f"[{pkg}] n_touched.sum()={n_touched.sum().item()}  OK")

loss = color.sum() + depth.sum()
loss.backward()

assert cam_rot.grad is not None and cam_rot.grad.abs().max().item() > 0, "theta gradient must flow"
assert cam_trans.grad is not None and cam_trans.grad.abs().max().item() > 0, "rho gradient must flow"
assert opacities.grad is not None and opacities.grad.abs().max().item() > 0, "opacity gradient must flow"
assert colors_precomp.grad is not None and colors_precomp.grad.abs().max().item() > 0, "color gradient must flow"
assert means2D.grad is not None and means2D.grad.abs().max().item() > 0, "means2D (dL_dmean2D) gradient must flow"
print(f"[{pkg}] gradient flow OK: theta={cam_rot.grad.abs().max().item():.6f} "
      f"rho={cam_trans.grad.abs().max().item():.6f} "
      f"opacity_max={opacities.grad.abs().max().item():.6f} "
      f"color_max={colors_precomp.grad.abs().max().item():.6f}")

# ---- Finite-difference cross-check on a few parameters ----
def forward_loss(o, c, m2d):
    color, radii, depth, opacity, n_touched = rasterizer(
        means3D=means3D, means2D=m2d, opacities=o,
        colors_precomp=c, scales=scales, rotations=rotations,
        theta=cam_rot, rho=cam_trans,
        pixel_range=pixel_range, pixel_coords=pixel_coords,
    )
    return color.sum() + depth.sum()

eps = 1e-3
mismatches = 0
checks = 0
torch.manual_seed(1)
idxs = torch.randperm(P)[:6].tolist()
for i in idxs:
    with torch.no_grad():
        o_plus = opacities.clone(); o_plus[i, 0] += eps
        o_minus = opacities.clone(); o_minus[i, 0] -= eps
    l_plus = forward_loss(o_plus, colors_precomp.detach(), means2D.detach()).item()
    l_minus = forward_loss(o_minus, colors_precomp.detach(), means2D.detach()).item()
    numeric = (l_plus - l_minus) / (2 * eps)
    analytic = opacities.grad[i, 0].item()
    checks += 1
    rel_err = abs(numeric - analytic) / max(1e-4, abs(numeric))
    status = "OK" if rel_err < 0.05 or abs(numeric - analytic) < 1e-2 else "MISMATCH"
    if status == "MISMATCH":
        mismatches += 1
    print(f"[{pkg}] dL/dopacity[{i}] analytic={analytic:.6f} numeric={numeric:.6f} rel_err={rel_err:.4f} {status}")

for ch in range(3):
    i = idxs[0]
    with torch.no_grad():
        c_plus = colors_precomp.clone(); c_plus[i, ch] += eps
        c_minus = colors_precomp.clone(); c_minus[i, ch] -= eps
    l_plus = forward_loss(opacities.detach(), c_plus, means2D.detach()).item()
    l_minus = forward_loss(opacities.detach(), c_minus, means2D.detach()).item()
    numeric = (l_plus - l_minus) / (2 * eps)
    analytic = colors_precomp.grad[i, ch].item()
    checks += 1
    rel_err = abs(numeric - analytic) / max(1e-4, abs(numeric))
    status = "OK" if rel_err < 0.05 or abs(numeric - analytic) < 1e-2 else "MISMATCH"
    if status == "MISMATCH":
        mismatches += 1
    print(f"[{pkg}] dL/dcolor[{i},{ch}] analytic={analytic:.6f} numeric={numeric:.6f} rel_err={rel_err:.4f} {status}")

print(f"\n[{pkg}] Finite-difference check: {checks - mismatches}/{checks} within tolerance")
print(f"=== [{pkg}] {'PASS' if mismatches == 0 else 'FAIL'} ===")
sys.exit(0 if mismatches == 0 else 1)
