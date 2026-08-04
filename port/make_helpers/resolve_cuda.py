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

    return True, "compiled and ran correctly on the GPU"


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


def pick_redist_version(pkg_name, major, minor):
    url = f"https://pypi.org/pypi/{pkg_name}/json"
    with urllib.request.urlopen(url, timeout=30) as resp:
        data = json.load(resp)
    prefix = f"{major}.{minor}."
    versions = [v for v in data["releases"].keys() if v.startswith(prefix) and data["releases"][v]]
    if not versions:
        return None

    def patch_num(v):
        try:
            return int(v.split(".")[-1])
        except ValueError:
            return -1
    versions.sort(key=patch_num, reverse=True)
    return versions[0]


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


def fetch_component(label, pip_pkg, redist_name, major, minor, toolkit_root, workdir):
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


def self_heal(root, cuda_tag, arch, workdir):
    major, minor = cuda_tag_to_major_minor(cuda_tag)
    log(f"-- self-heal: no working nvcc found anywhere, fetching one for CUDA {major}.{minor} --")
    log("   (plain curl+tar from NVIDIA's own redistributable archives -- no conda, no root)")
    log("   fetching nvcc (compiler) + cudart (runtime headers/libs) + cccl (thrust/cub headers),")
    log("   all 3 independently from NVIDIA -- not relying on what torch happens to bundle.")

    toolkit_root = os.path.join(root, ".cuda-toolkit")
    os.makedirs(toolkit_root, exist_ok=True)

    dirs = {}
    for i, (label, pip_pkg_tpl, redist_name) in enumerate(COMPONENTS, 1):
        log(f"[{i}/{len(COMPONENTS) + 1}] fetching {label} ...")
        pip_pkg = pip_pkg_tpl.format(major=major)
        try:
            dirs[label] = fetch_component(label, pip_pkg, redist_name, major, minor, toolkit_root, workdir)
        except Exception as e:
            return None, f"fetching {label} ({pip_pkg}) failed: {e}"

    log(f"[{len(COMPONENTS) + 1}/{len(COMPONENTS) + 1}] merging into one CUDA_HOME ...")
    home = os.path.join(toolkit_root, f"merged-{major}.{minor}")
    os.makedirs(home, exist_ok=True)
    merge_symlinks(os.path.join(dirs["nvcc"], "bin"), os.path.join(home, "bin"))
    nvvm_src = os.path.join(dirs["nvcc"], "nvvm")
    nvvm_dst = os.path.join(home, "nvvm")
    if os.path.isdir(nvvm_src) and not os.path.exists(nvvm_dst):
        os.symlink(nvvm_src, nvvm_dst)
    merge_symlinks(os.path.join(dirs["nvcc"], "include"), os.path.join(home, "include"))
    merge_symlinks(os.path.join(dirs["cudart"], "include"), os.path.join(home, "include"))
    merge_symlinks(os.path.join(dirs["cccl"], "include"), os.path.join(home, "include"))
    merge_symlinks(os.path.join(dirs["cudart"], "lib"), os.path.join(home, "lib64"))

    active = os.path.join(toolkit_root, "active")
    if os.path.islink(active):
        os.remove(active)
    elif os.path.exists(active):
        shutil.rmtree(active)
    os.symlink(home, active)

    log("verifying with a real compile + GPU run ...")
    return home, None


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

    home, err = self_heal(args.root, args.cuda_tag, args.arch, workdir)
    if home is None:
        log("")
        log("!! self-heal could not get a working CUDA toolkit:")
        log(f"   {err}")
        log("")
        log("   Everything tried:")
        for label, path, ok, detail in tried:
            log(f"     - {label} ({path}): {detail}")
        log("   Set CUDA_HOME explicitly if you know of a working toolkit at a nonstandard path:")
        log("     make check-cuda CUDA_HOME=/path/to/cuda-toolkit")
        shutil.rmtree(workdir, ignore_errors=True)
        return 1

    ok, detail = verify_cuda_home(home, args.arch, workdir)
    shutil.rmtree(workdir, ignore_errors=True)
    if not ok:
        log(f"!! self-heal downloaded a toolkit but it failed verification: {detail}")
        return 1

    log(f"-- self-heal succeeded: {home} ({detail}) --")
    os.makedirs(os.path.dirname(cache_file), exist_ok=True)
    with open(cache_file, "w") as f:
        f.write(home + "\n")
    print(home)
    return 0


if __name__ == "__main__":
    sys.exit(main())
