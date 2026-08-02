/*
 * Copyright (C) 2023, Inria
 * GRAPHDECO research group, https://team.inria.fr/graphdeco
 * All rights reserved.
 *
 * This software is free for non-commercial, research and evaluation use 
 * under the terms of the LICENSE.md file.
 *
 * For inquiries contact  george.drettakis@inria.fr
 */

#ifndef CUDA_RASTERIZER_CONFIG_H_INCLUDED
#define CUDA_RASTERIZER_CONFIG_H_INCLUDED

#define NUM_CHANNELS 3 // Default 3, RGB
#define BLOCK_X 4
#define BLOCK_Y 4
// SPLATONIC: sized down from 16,000,000 for this dev machine's 4GB laptop GPU
// (BinningState is statically allocated at this size on every forward() call --
// see rasterizer_impl.cu -- so 16M elements needs a ~550MB contiguous cudaMalloc
// that this GPU can't spare alongside MonoGS's frontend+backend CUDA contexts).
// Mapping only ever rasterizes a sparse sampled pixel subset (num_sparse in
// slam_backend.py, ~H*W/64), so 1,000,000 (Gaussian,pixel) pairs is still a
// large safety margin for TUM-scale scenes. Raise this back toward 16,000,000
// for deployment on GPUs with more VRAM headroom.
#define MAX_NUM_RENDERED 1000000

#endif