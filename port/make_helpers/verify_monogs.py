"""Import-check + smoke test for MonoGS's 4 compiled CUDA extensions.

Run from inside MonoGS/ with the built env active: `make verify-monogs`.
torch must import first -- it preloads libc10/libtorch_cpu/etc that the
compiled extensions link against at runtime. See
port/REMOTE_CLUSTER_GUIDE.md sec 4, "Import order at runtime".
"""
import torch
import track_rasterization  # noqa: F401
import map_rasterization  # noqa: F401
import diff_gaussian_rasterization  # noqa: F401
import simple_knn  # noqa: F401
from simple_knn._C import distCUDA2

print("all 4 CUDA extensions import cleanly")
x = torch.randn(1000, 3, device="cuda")
print("distCUDA2 smoke test output shape:", distCUDA2(x).shape)
