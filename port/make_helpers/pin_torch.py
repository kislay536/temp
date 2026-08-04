"""Write a pip constraints file pinning the currently-installed torch version.

Used by `make constraints` before installing anything else, so an unrelated
package (e.g. lpips pulling in unconstrained torchvision) can't silently
upgrade torch out from under the already-built CUDA extensions.
See port/REMOTE_CLUSTER_GUIDE.md sec 4, issue 1.
"""
import sys
import torch

out_path = sys.argv[1] if len(sys.argv) > 1 else "constraints.txt"
version = torch.__version__.split("+")[0]

with open(out_path, "w") as f:
    f.write(f"torch=={version}\n")

print(f"pinned torch == {version} -> {out_path}")
