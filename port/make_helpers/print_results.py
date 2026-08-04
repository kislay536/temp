"""Print RMSE ATE / PSNR / SSIM for every MonoGS run under a results dir.

Run from inside MonoGS/ with the built env active: `make results`.
"""
import glob
import json
import os
import sys

root = sys.argv[1] if len(sys.argv) > 1 else "results/tum_rgbd_dataset_freiburg1_desk"
dirs = sorted(glob.glob(os.path.join(root, "*")), key=os.path.getmtime)

if not dirs:
    print(f"No results found under {root} - run some configs first")

for d in dirs:
    stats_path = os.path.join(d, "plot", "stats_final.json")
    rmse = None
    if os.path.exists(stats_path):
        rmse = json.load(open(stats_path)).get("rmse")

    psnr_files = glob.glob(os.path.join(d, "psnr", "*", "final_result.json"))
    psnr = ssim = None
    if psnr_files:
        p = json.load(open(psnr_files[0]))
        psnr, ssim = p.get("mean_psnr"), p.get("mean_ssim")

    print(f"{os.path.basename(d):55s} rmse_ate={rmse}  psnr={psnr}  ssim={ssim}")
