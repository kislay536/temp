"""Find or self-heal a working nvcc, verified by an actual compile+run.

Run from `make check-cuda` (inside the activated venv).

Priority order, each candidate only accepted if a real .cu file compiles AND
runs correctly against the actual GPU (never trust a bare "file exists"):
  1. $CUDA_HOME
  2. nvcc already on $PATH
  3. common system install dirs (/usr/local/cuda*, /opt/cuda)
  4. a previous self-heal (cached under <root>/.cuda-toolkit/)
  5. self-heal: download NVIDIA's own redistributable archives (plain
     curl+tar, no conda, no root, no sudo) for the 3 components needed to
     build these CUDA extensions from source -- nvcc (compiler), cudart
     (cuda_runtime.h + libcudart), cccl (thrust/cub headers) -- and merge
     them into one CUDA_HOME. Fetched independently of whatever torch itself
     happens to bundle, since that has changed across torch versions.

On success: writes the resolved path to <root>/.cuda-toolkit/cuda_home.txt
(read by the Makefile's build targets at runtime) and exits 0.
On failure: prints exactly what was tried and why each step failed, exits 1.
See port/REMOTE_CLUSTER_GUIDE.md sec on CUDA_HOME for background.
"""
import argparse
import json
import os
import shutil
import subprocess
import sys
import tarfile
import urllib.request

TEST_CU = """
#include <cstdio>
#include <cuda_runtime.h>

__global__ void add_one(int *x) { x[threadIdx.x] += 1; }

int main() {
    int h[4] = {0, 1, 2, 3};
    int *d;
    cudaError_t err = cudaMalloc(&d, sizeof(h));
    if (err != cudaSuccess) { printf("cudaMalloc failed: %s\\n", cudaGetErrorString(err)); return 1; }
    cudaMemcpy(d, h, sizeof(h), cudaMemcpyHostToDevice);
    add_one<<<1, 4>>>(d);
    cudaMemcpy(h, d, sizeof(h), cudaMemcpyDeviceToHost);
    err = cudaGetLastError();
    if (err != cudaSuccess) { printf("kernel failed: %s\\n", cudaGetErrorString(err)); return 1; }
    for (int i = 0; i < 4; i++) if (h[i] != i + 1) { printf("wrong result at %d: %d\\n", i, h[i]); return 1; }
    printf("OK\\n");
    return 0;
}
"""


def log(msg):
    print(msg, file=sys.stderr)


def arch_to_sm(arch):
    return arch.replace(".", "")


def verify_cuda_home(cuda_home, arch, workdir):
    """Actually compile and run a .cu file against the real GPU. No shortcuts."""
    nvcc = os.path.join(cuda_home, "bin", "nvcc")
    if not os.path.isfile(nvcc) or not os.access(nvcc, os.X_OK):
        return False, f"no executable nvcc at {nvcc}"

    src = os.path.join(workdir, "verify.cu")
    exe = os.path.join(workdir, "verify")
    with open(src, "w") as f:
        f.write(TEST_CU)

    sm = arch_to_sm(arch)
    include_dir = os.path.join(cuda_home, "include")
    lib_dir = os.path.join(cuda_home, "lib64")
    cmd = [
        nvcc, src, "-o", exe,
        f"-gencode=arch=compute_{sm},code=sm_{sm}",
        f"-I{include_dir}", f"-L{lib_dir}", "-Xlinker", f"-rpath={lib_dir}", "-lcudart",
    ]
    r = subprocess.run(cmd, capture_output=True, text=True, cwd=workdir)
    if r.returncode != 0:
        return False, f"compile failed:\n{r.stdout}\n{r.stderr}"

    r = subprocess.run([exe], capture_output=True, text=True, cwd=workdir)
    if r.returncode != 0 or "OK" not in r.stdout:
        return False, f"compiled but run failed (exit {r.returncode}):\nstdout: {r.stdout}\nstderr: {r.stderr}"

    ok, detail = verify_torch_extension_build(cuda_home, arch, workdir)
    if not ok:
        return False, detail

    return True, "compiled+ran a raw .cu AND a torch CUDA extension correctly on the GPU"


TORCH_EXT_CU = """
#include <torch/extension.h>

__global__ void add_one_kernel(float* x, int n) {
    int i = blockIdx.x * blockDim.x + threadIdx.x;
    if (i < n) x[i] += 1.0f;
}

torch::Tensor add_one(torch::Tensor x) {
    int n = x.numel();
    add_one_kernel<<<(n + 255) / 256, 256>>>(x.data_ptr<float>(), n);
    return x;
}

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
    m.def("add_one", &add_one, "add one (CUDA)");
}
"""

TORCH_EXT_SETUP_PY = """
from setuptools import setup
from torch.utils.cpp_extension import BuildExtension, CUDAExtension
setup(
    name="splatonic_cuda_home_probe",
    ext_modules=[CUDAExtension("splatonic_cuda_home_probe", ["verify_ext.cu"])],
    cmdclass={"build_ext": BuildExtension},
)
"""

TORCH_EXT_DRIVER = """
import sys, torch
sys.path.insert(0, sys.argv[1])
import splatonic_cuda_home_probe as ext
x = torch.ones(8, device="cuda")
y = ext.add_one(x)
assert torch.allclose(y.cpu(), torch.full((8,), 2.0)), y
print("TORCH_EXT_OK")
"""


def verify_torch_extension_build(cuda_home, arch, workdir):
    """Raw nvcc can compile fine while still being unusable for building
    actual PyTorch CUDA extensions. torch.utils.cpp_extension.BuildExtension
    (used by every real setup.py-based CUDA extension build in this repo --
    simple-knn, diff-gaussian-rasterization, track/map-rasterization, and
    SplaTAM/SPLATONIC's own extensions) applies its own compiler-
    compatibility gate (e.g. CUDA-version-vs-gcc-version) inside
    build_extensions() that a bare nvcc invocation never triggers, and that
    torch.utils.cpp_extension.load()'s JIT path *also* never triggers (JIT
    compiles straight to ninja, bypassing setuptools' build_ext entirely --
    verified empirically: load() silently succeeds on a CUDA_HOME that the
    real `pip install --no-build-isolation .` path rejects outright). So we
    replicate the REAL path here: an actual `setup.py build_ext` using
    CUDAExtension+BuildExtension, the same classes every real build in this
    repo uses. A system CUDA_HOME can pass verify_cuda_home()'s raw compile
    above and still be correctly rejected here.
    """
    if shutil.which("ninja") is None:
        r = subprocess.run([sys.executable, "-m", "pip", "install", "-q", "ninja"],
                            capture_output=True, text=True)
        if r.returncode != 0:
            return False, f"could not install ninja (needed to verify torch extension builds): {r.stderr}"

    ext_dir = os.path.join(workdir, "torch_ext_probe")
    if os.path.isdir(ext_dir):
        shutil.rmtree(ext_dir)
    os.makedirs(ext_dir, exist_ok=True)
    with open(os.path.join(ext_dir, "verify_ext.cu"), "w") as f:
        f.write(TORCH_EXT_CU)
    with open(os.path.join(ext_dir, "setup.py"), "w") as f:
        f.write(TORCH_EXT_SETUP_PY)
    with open(os.path.join(ext_dir, "driver.py"), "w") as f:
        f.write(TORCH_EXT_DRIVER)

    env = dict(os.environ)
    env["CUDA_HOME"] = cuda_home
    env["TORCH_CUDA_ARCH_LIST"] = arch
    env["PATH"] = os.path.join(cuda_home, "bin") + os.pathsep + env.get("PATH", "")

    r = subprocess.run(
        [sys.executable, "setup.py", "build_ext", "--inplace"],
        capture_output=True, text=True, cwd=ext_dir, env=env,
    )
    if r.returncode != 0:
        return False, (f"nvcc compiles a raw .cu fine, but building an actual torch CUDA "
                        f"extension the same way this repo's real packages do "
                        f"(setup.py build_ext with BuildExtension) fails (exit {r.returncode}):\n"
                        f"{r.stdout}\n{r.stderr}")

    r = subprocess.run(
        [sys.executable, "driver.py", ext_dir],
        capture_output=True, text=True, cwd=ext_dir, env=env,
    )
    if r.returncode != 0 or "TORCH_EXT_OK" not in r.stdout:
        return False, (f"torch CUDA extension built but failed to import/run "
                        f"(exit {r.returncode}):\n{r.stdout}\n{r.stderr}")
    return True, "torch CUDA extension build+run OK"


def find_existing_candidates(root):
    candidates = []
    env_home = os.environ.get("CUDA_HOME", "").strip()
    if env_home:
        candidates.append(("$CUDA_HOME", env_home))

    nvcc_on_path = shutil.which("nvcc")
    if nvcc_on_path:
        candidates.append(("nvcc on $PATH", os.path.dirname(os.path.dirname(nvcc_on_path))))

    for d in ["/usr/local/cuda", "/usr/local/cuda-12.8", "/usr/local/cuda-12.6",
              "/usr/local/cuda-12.4", "/usr/local/cuda-12.1", "/usr/local/cuda-12.0",
              "/usr/local/cuda-11.8", "/opt/cuda"]:
        if os.path.isfile(os.path.join(d, "bin", "nvcc")):
            candidates.append((f"system dir {d}", d))

    cached = os.path.join(root, ".cuda-toolkit", "active")
    if os.path.isfile(os.path.join(cached, "bin", "nvcc")):
        candidates.append(("cached self-heal", os.path.realpath(cached)))

    return candidates


def cuda_tag_to_major_minor(cuda_tag):
    digits = cuda_tag.removeprefix("cu")
    return digits[:-1], digits[-1]


def _version_key(v):
    try:
        return tuple(int(p) for p in v.split("."))
    except ValueError:
        return (-1,)


def list_pypi_versions(pkg_name):
    url = f"https://pypi.org/pypi/{pkg_name}/json"
    with urllib.request.urlopen(url, timeout=30) as resp:
        data = json.load(resp)
    return [v for v in data["releases"].keys() if data["releases"][v]]


def pick_redist_version(pkg_name, major, minor):
    prefix = f"{major}.{minor}."
    versions = [v for v in list_pypi_versions(pkg_name) if v.startswith(prefix)]
    if not versions:
        return None
    versions.sort(key=_version_key, reverse=True)
    return versions[0]


def list_versions_for_major(pkg_name, major):
    """All versions for a CUDA major line, e.g. every 12.x.y, newest first."""
    prefix = f"{major}."
    versions = [v for v in list_pypi_versions(pkg_name) if v.startswith(prefix)]
    versions.sort(key=_version_key, reverse=True)
    return versions


def download(url, dest_path):
    log(f"    downloading {url}")
    urllib.request.urlretrieve(url, dest_path)


# (pip package name, NVIDIA redist component directory name) -- these two
# names differ (pip renamed cuda_cudart -> "cuda-runtime" for the wheel), so
# we resolve the version via the pip name (PyPI has clean version listings)
# but download via the redist name (the actual NVIDIA archive naming).
COMPONENTS = [
    ("nvcc", "nvidia-cuda-nvcc-cu{major}", "cuda_nvcc"),
    ("cudart", "nvidia-cuda-runtime-cu{major}", "cuda_cudart"),
    ("cccl", "nvidia-cuda-cccl-cu{major}", "cuda_cccl"),
]


def fetch_component(label, pip_pkg, redist_name, major, minor, toolkit_root, workdir, forced_version=None):
    if forced_version:
        version = forced_version
    else:
        log(f"    resolving {label} version via PyPI metadata for {pip_pkg} ...")
        version = pick_redist_version(pip_pkg, major, minor)
        if not version:
            raise RuntimeError(f"no {major}.{minor}.x release of {pip_pkg} found on PyPI")
        log(f"      -> {version}")

    dest = os.path.join(toolkit_root, f"{redist_name}-{version}")
    if os.path.isdir(dest) and os.listdir(dest):
        log(f"    {label} {version} already downloaded at {dest}, reusing")
        return dest

    url = (f"https://developer.download.nvidia.com/compute/cuda/redist/{redist_name}/"
           f"linux-x86_64/{redist_name}-linux-x86_64-{version}-archive.tar.xz")
    tar_path = os.path.join(workdir, f"{redist_name}.tar.xz")
    download(url, tar_path)

    extract_dir = os.path.join(workdir, f"{redist_name}_extract")
    if os.path.isdir(extract_dir):
        shutil.rmtree(extract_dir)
    with tarfile.open(tar_path) as tf:
        tf.extractall(extract_dir, filter="data")
    entries = os.listdir(extract_dir)
    if len(entries) != 1:
        raise RuntimeError(f"unexpected archive layout for {redist_name}: {entries}")
    if os.path.isdir(dest):
        shutil.rmtree(dest)
    shutil.move(os.path.join(extract_dir, entries[0]), dest)
    return dest


def merge_symlinks(src_dir, dst_dir):
    if not os.path.isdir(src_dir):
        return
    os.makedirs(dst_dir, exist_ok=True)
    for name in os.listdir(src_dir):
        link = os.path.join(dst_dir, name)
        if os.path.exists(link) or os.path.islink(link):
            continue
        os.symlink(os.path.join(src_dir, name), link)


def build_merged_home(toolkit_root, name, nvcc_dir, cudart_dir, cccl_dir):
    home = os.path.join(toolkit_root, name)
    if os.path.isdir(home):
        shutil.rmtree(home)
    os.makedirs(home, exist_ok=True)
    merge_symlinks(os.path.join(nvcc_dir, "bin"), os.path.join(home, "bin"))
    nvvm_src = os.path.join(nvcc_dir, "nvvm")
    nvvm_dst = os.path.join(home, "nvvm")
    if os.path.isdir(nvvm_src) and not os.path.exists(nvvm_dst):
        os.symlink(nvvm_src, nvvm_dst)
    merge_symlinks(os.path.join(nvcc_dir, "include"), os.path.join(home, "include"))
    merge_symlinks(os.path.join(cudart_dir, "include"), os.path.join(home, "include"))
    merge_symlinks(os.path.join(cccl_dir, "include"), os.path.join(home, "include"))
    merge_symlinks(os.path.join(cudart_dir, "lib"), os.path.join(home, "lib64"))
    return home


def self_heal(root, cuda_tag, arch, workdir):
    major, minor = cuda_tag_to_major_minor(cuda_tag)
    log(f"-- self-heal: no working nvcc found anywhere, fetching one for CUDA {major}.{minor} --")
    log("   (plain curl+tar from NVIDIA's own redistributable archives -- no conda, no root)")
    log("   fetching nvcc (compiler) + cudart (runtime headers/libs) + cccl (thrust/cub headers),")
    log("   all 3 independently from NVIDIA -- not relying on what torch happens to bundle.")

    toolkit_root = os.path.join(root, ".cuda-toolkit")
    os.makedirs(toolkit_root, exist_ok=True)

    dirs = {}
    for label, pip_pkg_tpl, redist_name in COMPONENTS:
        if label == "nvcc":
            continue  # resolved below, with retries -- everything else is fixed once
        log(f"[fetching {label}] ...")
        pip_pkg = pip_pkg_tpl.format(major=major)
        try:
            dirs[label] = fetch_component(label, pip_pkg, redist_name, major, minor, toolkit_root, workdir)
        except Exception as e:
            return None, f"fetching {label} ({pip_pkg}) failed: {e}"

    # nvcc gets a retry ladder: try the version matching CUDA_TAG first, then
    # progressively different versions in the same CUDA major line. This
    # matters because a specific nvcc point release's bundled crt/*.h headers
    # can conflict with a host glibc/gcc newer than that release anticipated
    # (a real, recurring NVIDIA/host-toolchain compatibility gap, usually
    # fixed in a later nvcc point release, not by a compiler flag) -- nvcc's
    # own version doesn't need to match cudart/cccl's, it only needs to
    # produce code for the target GPU arch and link against cudart's ABI,
    # both of which are stable across CUDA 12.x minor versions.
    nvcc_pkg = f"nvidia-cuda-nvcc-cu{major}"
    try:
        exact = pick_redist_version(nvcc_pkg, major, minor)
    except Exception as e:
        return None, f"could not query pypi.org for {nvcc_pkg}: {e}"
    try:
        all_versions = list_versions_for_major(nvcc_pkg, major)
    except Exception as e:
        all_versions = [exact] if exact else []

    candidates = [v for v in [exact] if v]
    candidates += [v for v in all_versions if v not in candidates]
    candidates = candidates[:4]  # bound how many ~50MB attempts we'll make
    if not candidates:
        return None, f"no {major}.x release of {nvcc_pkg} found on PyPI"

    last_err = None
    for i, nvcc_version in enumerate(candidates, 1):
        log(f"[nvcc attempt {i}/{len(candidates)}] cuda_nvcc {nvcc_version} ...")
        try:
            nvcc_dir = fetch_component("nvcc", nvcc_pkg, "cuda_nvcc", major, minor,
                                        toolkit_root, workdir, forced_version=nvcc_version)
        except Exception as e:
            last_err = f"fetching cuda_nvcc {nvcc_version} failed: {e}"
            log(f"    {last_err}")
            continue

        home = build_merged_home(toolkit_root, f"merged-{nvcc_version}", nvcc_dir, dirs["cudart"], dirs["cccl"])
        log(f"    verifying cuda_nvcc {nvcc_version} with a real compile + GPU run ...")
        ok, detail = verify_cuda_home(home, arch, workdir)
        if ok:
            active = os.path.join(toolkit_root, "active")
            if os.path.islink(active):
                os.remove(active)
            elif os.path.exists(active):
                shutil.rmtree(active)
            os.symlink(home, active)
            return home, (nvcc_version, detail)
        last_err = f"cuda_nvcc {nvcc_version} failed verification:\n{detail}"
        log(f"    {last_err}")

    return None, last_err or "no nvcc candidates could be verified"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--cuda-tag", required=True)
    ap.add_argument("--arch", required=True)
    ap.add_argument("--root", required=True)
    args = ap.parse_args()

    cache_file = os.path.join(args.root, ".cuda-toolkit", "cuda_home.txt")
    workdir = os.path.join(args.root, ".cuda-toolkit", ".work")
    os.makedirs(workdir, exist_ok=True)

    tried = []
    for label, path in find_existing_candidates(args.root):
        ok, detail = verify_cuda_home(path, args.arch, workdir)
        tried.append((label, path, ok, detail))
        if ok:
            log(f"-- using {label}: {path} ({detail}) --")
            os.makedirs(os.path.dirname(cache_file), exist_ok=True)
            with open(cache_file, "w") as f:
                f.write(path + "\n")
            shutil.rmtree(workdir, ignore_errors=True)
            print(path)
            return 0
        log(f"   [skip] {label} ({path}): {detail}")

    home, result = self_heal(args.root, args.cuda_tag, args.arch, workdir)
    shutil.rmtree(workdir, ignore_errors=True)
    if home is None:
        log("")
        log("!! self-heal could not get a working CUDA toolkit:")
        log(f"   {result}")
        log("")
        log("   Everything tried:")
        for label, path, ok, detail in tried:
            log(f"     - {label} ({path}): {detail}")
        log("   Set CUDA_HOME explicitly if you know of a working toolkit at a nonstandard path:")
        log("     make check-cuda CUDA_HOME=/path/to/cuda-toolkit")
        return 1

    nvcc_version, detail = result
    log(f"-- self-heal succeeded: {home} (cuda_nvcc {nvcc_version}, {detail}) --")
    os.makedirs(os.path.dirname(cache_file), exist_ok=True)
    with open(cache_file, "w") as f:
        f.write(home + "\n")
    print(home)
    return 0


if __name__ == "__main__":
    sys.exit(main())
