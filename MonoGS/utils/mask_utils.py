import torch
import torch.nn.functional as F


def compute_gradient_mag(image, sobel_kernel_size=3, epsilon=0.001):
    if image.shape[0] == 3:
        gray = 0.299 * image[0] + 0.587 * image[1] + 0.114 * image[2]
    else:
        gray = image.squeeze(0)

    device = image.device
    kernel_x = torch.tensor([
        [-1, 0, 1],
        [-2, 0, 2],
        [-1, 0, 1],
    ], dtype=torch.float32, device=device).view(1, 1, 3, 3)

    kernel_y = torch.tensor([
        [-1, -2, -1],
        [ 0,  0,  0],
        [ 1,  2,  1],
    ], dtype=torch.float32, device=device).view(1, 1, 3, 3)

    gray = gray.unsqueeze(0).unsqueeze(0)  # (1, 1, H, W)
    Gx = F.conv2d(gray, kernel_x, padding=sobel_kernel_size // 2)
    Gy = F.conv2d(gray, kernel_y, padding=sobel_kernel_size // 2)
    G = torch.sqrt(Gx.pow(2) + Gy.pow(2)).squeeze()

    border = sobel_kernel_size // 2
    if border > 0:
        G[:border, :]  = epsilon
        G[-border:, :] = epsilon
        G[:, :border]  = epsilon
        G[:, -border:] = epsilon

    return G


def adaptive_random_sampling(image, num_samples, epsilon=0.001, sobel_kernel_size=3):
    """
    Gradient-weighted CDF sampling.

    Args:
        image:       (C, H, W) tensor on the target device.
        num_samples: target number of pixels to select.
        epsilon:     floor probability to ensure every pixel has non-zero chance.

    Returns:
        Boolean mask (H, W) with at most num_samples pixels set to True.
        Duplicate CDF draws are deduplicated, so the count can be slightly
        below num_samples when the image has very low texture.
    """
    device = image.device
    G = compute_gradient_mag(image, sobel_kernel_size=sobel_kernel_size, epsilon=epsilon)

    G_min, G_max = G.min(), G.max()
    G_norm = (G - G_min) / (G_max - G_min + 1e-7)

    P_flat = (G_norm + epsilon).view(-1)
    P_flat = P_flat / P_flat.sum()

    cdf = torch.cumsum(P_flat, dim=0)
    cdf = cdf / cdf[-1]

    rand_vals = torch.rand(num_samples, device=device)
    sampled_indices = torch.searchsorted(cdf, rand_vals)

    mask_flat = torch.zeros(P_flat.shape, dtype=torch.bool, device=device)
    mask_flat[sampled_indices] = True
    return mask_flat.view(G.shape)


def generate_random_mask(image_size, tile_size=16, device="cuda"):
    """
    Uniform random sampling: one pixel per tile.

    Args:
        image_size: (H, W) tuple.
        tile_size:  scalar or (tile_h, tile_w) tuple.
                    Must match BLOCK_X of the rasterizer that will consume the output.
                    tracking mask -> tile_size=16, mapping mask -> tile_size=4.
        device:     torch device string.

    Returns:
        mask:          (H, W) bool tensor, exactly one True per tile.
        offsets:       (num_tiles+1,) int32 — prefix-sum offsets into sorted_coords.
                       Since every tile has exactly 1 pixel, offsets == arange(num_tiles+1).
        sorted_coords: (num_tiles, 2) int32 — (x, y) per pixel in row-major tile order.
    """
    H, W = image_size
    tile_h, tile_w = (tile_size, tile_size) if isinstance(tile_size, int) else tile_size

    num_tiles_h = (H + tile_h - 1) // tile_h
    num_tiles_w = (W + tile_w - 1) // tile_w

    y_starts = torch.arange(0, num_tiles_h * tile_h, tile_h, device=device)
    x_starts = torch.arange(0, num_tiles_w * tile_w, tile_w, device=device)
    y_grid, x_grid = torch.meshgrid(y_starts, x_starts, indexing='ij')

    rand_h_off = torch.randint(0, tile_h, (num_tiles_h, num_tiles_w), device=device)
    rand_w_off = torch.randint(0, tile_w, (num_tiles_h, num_tiles_w), device=device)
    abs_h = (y_grid + rand_h_off).clamp(max=H - 1)
    abs_w = (x_grid + rand_w_off).clamp(max=W - 1)

    # (x, y) column-major pixel order, as int2 CUDA expects
    sorted_coords = torch.stack([abs_w.flatten(), abs_h.flatten()], dim=1).to(torch.int32)

    # Each tile has exactly 1 pixel, so offsets are trivially 0,1,2,...
    offsets = torch.arange(num_tiles_h * num_tiles_w + 1, dtype=torch.int32, device=device)

    mask = torch.zeros((H, W), dtype=torch.bool, device=device)
    mask[abs_h.flatten(), abs_w.flatten()] = True

    return mask, offsets, sorted_coords


def get_pixel_info(mask, tile_size=16):
    """
    Convert an arbitrary bool mask into the (offsets, sorted_coords) format
    consumed by preprocessCUDA in Milestone 4.

    Pixels are sorted by row-major tile index so that CUDA's range lookup
    (pixel_range[tile_id] .. pixel_range[tile_id+1]) returns the correct slice.

    Args:
        mask:      (H, W) or (1, H, W) bool tensor.
        tile_size: must match BLOCK_X of the target rasterizer.

    Returns:
        offsets:       (num_tiles+1,) int32 — prefix-sum of pixel counts per tile.
        sorted_coords: (N, 2) int32 — (x, y) for each selected pixel, tile-sorted.
        Returns (None, None) if mask is empty.
    """
    if mask.dim() != 2:
        mask = mask.squeeze(0)
    H, W = mask.shape
    device = mask.device

    coords = torch.nonzero(mask)   # (N, 2) as (row, col) = (y, x)
    if coords.shape[0] == 0:
        return None, None

    num_tiles_w = (W + tile_size - 1) // tile_size
    num_tiles_h = (H + tile_size - 1) // tile_size

    tile_row = coords[:, 0] // tile_size
    tile_col = coords[:, 1] // tile_size
    tile_indices = tile_row * num_tiles_w + tile_col

    sort_idx = torch.argsort(tile_indices)
    sorted_coords = coords[sort_idx]
    sorted_tile_indices = tile_indices[sort_idx]

    num_total_tiles = num_tiles_h * num_tiles_w
    unique_tiles, counts = torch.unique_consecutive(sorted_tile_indices, return_counts=True)

    counts_per_tile = torch.zeros(num_total_tiles, dtype=counts.dtype, device=device)
    counts_per_tile[unique_tiles] = counts

    offsets = torch.zeros(num_total_tiles + 1, dtype=torch.int32, device=device)
    offsets[1:] = torch.cumsum(counts_per_tile, dim=0).to(torch.int32)

    # Flip (row, col) → (x, y) = (col, row) to match CUDA int2 layout
    return offsets, sorted_coords[:, [1, 0]].to(torch.int32)
