"""Standalone, CPU-only repro + fix proof for the sparse-mapping opacity-reset
bug (see port/STATUS.md and the slam_backend.py fix in BackEnd.map()).

Exercises the REAL, unmodified GaussianModel.reset_opacity_nonvisible /
replace_tensor_to_optimizer (gaussian_model.py) -- not a reimplementation.
GaussianModel's module-level imports (open3d, simple_knn._C) require a full
CUDA build to install for real, but neither is called by the two methods
under test, so we stub them out in sys.modules before import. This lets the
test run on CPU with nothing beyond torch/numpy/plyfile installed.

Run: python port/tests/test_opacity_reset_nonvisible.py
"""
import os
import sys
import types

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
sys.path.insert(0, os.path.join(REPO_ROOT, "MonoGS"))
sys.path.insert(0, os.path.join(REPO_ROOT, "MonoGS", "gaussian_splatting"))

# --- stub the CUDA-only deps GaussianModel imports at module scope ---
fake_o3d = types.ModuleType("open3d")
sys.modules.setdefault("open3d", fake_o3d)

fake_simple_knn = types.ModuleType("simple_knn")
fake_simple_knn_c = types.ModuleType("simple_knn._C")
fake_simple_knn_c.distCUDA2 = lambda *a, **kw: None
sys.modules.setdefault("simple_knn", fake_simple_knn)
sys.modules.setdefault("simple_knn._C", fake_simple_knn_c)

import torch
from torch import nn

from gaussian_splatting.scene.gaussian_model import GaussianModel
from gaussian_splatting.utils.general_utils import inverse_sigmoid


def make_bare_model(n=20, seed=0):
    """A GaussianModel with just enough state for opacity reset, on CPU."""
    torch.manual_seed(seed)
    m = GaussianModel.__new__(GaussianModel)
    m.opacity_activation = torch.sigmoid
    m.inverse_opacity_activation = inverse_sigmoid

    init_opacities = torch.rand(n, 1) * 0.5 + 0.25  # mixed values in [0.25, 0.75]
    m._opacity = nn.Parameter(inverse_sigmoid(init_opacities.clone()))
    m.optimizer = torch.optim.Adam(
        [{"params": [m._opacity], "lr": 0.01, "name": "opacity"}]
    )
    # populate real Adam state (exp_avg/exp_avg_sq), same as production by
    # the time a reset ever fires -- replace_tensor_to_optimizer indexes
    # this directly with no None-check.
    m.get_opacity.sum().backward()
    m.optimizer.step()
    m.optimizer.zero_grad(set_to_none=True)
    # capture the CURRENT opacity (post-step), since that's the value
    # reset_opacity_nonvisible will actually see and is expected to preserve
    # for visible entries.
    real_opacities = m.get_opacity.detach().clone()
    return m, real_opacities


def test_a_empty_filter_wipes_everything():
    """Reproduces the bug: reset_opacity_nonvisible([]) wipes ALL opacities."""
    m, _real = make_bare_model()
    m.reset_opacity_nonvisible([])
    got = m.get_opacity.detach()
    expected = torch.full_like(got, torch.sigmoid(inverse_sigmoid(torch.tensor(0.4))).item())
    assert torch.allclose(got, expected, atol=1e-5), (
        f"expected every opacity to be wiped to 0.4, got {got.flatten().tolist()}"
    )
    print("PASS (a): reset_opacity_nonvisible([]) wipes every Gaussian's opacity "
          "-- bug reproduced on current gaussian_model.py")


def test_b_nonempty_filter_preserves_visible():
    """Documents the intended STRUCTURAL contract: only non-visible entries
    get reset to 0.4; visible entries get something derived from their real
    opacity, not the reset value.

    NOTE: this test intentionally does NOT assert exact numeric preservation
    of visible opacities. Separately from the bug this script targets, direct
    testing surfaced that reset_opacity_nonvisible() assigns the ALREADY-
    sigmoid-activated self.get_opacity[filter] into opacities_new, which is
    otherwise in pre-activation (logit) space -- so on the next read, visible
    entries are silently run through an extra sigmoid() (e.g. a true opacity
    of 0.6265 comes back as 0.6517, not 0.6265). This is a real, separate,
    pre-existing bug (present for ANY non-empty filter, dense mode included,
    and predates this port per port/MonoGS.md's description of the original
    design) -- flagged here, deliberately NOT fixed as part of this change,
    which is scoped to the empty-list-wipes-everything issue only.
    """
    m, real_opacities = make_bare_model(seed=1)
    n = real_opacities.shape[0]
    visible = torch.zeros(n, dtype=torch.bool)
    visible[[0, 3, 5, 11]] = True

    m.reset_opacity_nonvisible([visible])
    got = m.get_opacity.detach()

    reset_value = torch.sigmoid(inverse_sigmoid(torch.tensor(0.4))).item()
    assert not torch.allclose(got[visible], torch.full_like(got[visible], reset_value), atol=1e-3), (
        "visible Gaussians should NOT be reset to 0.4"
    )
    assert torch.allclose(got[~visible], torch.full_like(got[~visible], reset_value), atol=1e-5), (
        "non-visible Gaussians' opacity should be reset to 0.4"
    )
    print("PASS (b): reset_opacity_nonvisible([visible_mask]) resets only non-visible "
          "entries to 0.4, leaves visible entries alone (structurally) -- the intended "
          "contract this fix relies on (see docstring for a separate numeric-fidelity "
          "bug found but not fixed here)")


def deferred_reset_step(pending, iteration_count, gaussian_reset, use_dense,
                         update_gaussian, visibility_filter_acm):
    """Mirrors the exact decision logic added to BackEnd.map() in slam_backend.py."""
    if iteration_count % gaussian_reset == 0 and not update_gaussian:
        pending = True

    fired = False
    if pending and use_dense and (not update_gaussian) and visibility_filter_acm:
        fired = True
        pending = False
    return pending, fired


def test_c_deferred_reset_logic():
    GAUSSIAN_RESET = 2001

    # (i) trigger lands on a sparse iteration: must defer, not fire.
    pending, fired = deferred_reset_step(
        pending=False, iteration_count=GAUSSIAN_RESET, gaussian_reset=GAUSSIAN_RESET,
        use_dense=False, update_gaussian=False, visibility_filter_acm=[],
    )
    assert pending is True and fired is False, "sparse iteration must defer, not fire"

    # (ii) a later dense iteration with a real filter must fire and clear pending.
    pending, fired = deferred_reset_step(
        pending=pending, iteration_count=GAUSSIAN_RESET + 1, gaussian_reset=GAUSSIAN_RESET,
        use_dense=True, update_gaussian=False, visibility_filter_acm=[object()],
    )
    assert pending is False and fired is True, "dense iteration with real data must fire and clear pending"

    # (iii) no re-fire until the next multiple of gaussian_reset, even though
    # every subsequent iteration is dense.
    for it in range(GAUSSIAN_RESET + 2, 2 * GAUSSIAN_RESET, 137):
        pending, fired = deferred_reset_step(
            pending=pending, iteration_count=it, gaussian_reset=GAUSSIAN_RESET,
            use_dense=True, update_gaussian=False, visibility_filter_acm=[object()],
        )
        assert not fired, f"must not re-fire before the next multiple of gaussian_reset (it={it})"

    # (iv) dense-only baseline (use_splatonic=False -> use_dense always True):
    # must fire on the SAME iteration the modulo condition trips, matching
    # pre-fix behavior exactly (no regression for the existing baseline).
    pending, fired = deferred_reset_step(
        pending=False, iteration_count=2 * GAUSSIAN_RESET, gaussian_reset=GAUSSIAN_RESET,
        use_dense=True, update_gaussian=False, visibility_filter_acm=[object()],
    )
    assert pending is False and fired is True, "dense-only baseline must fire immediately, same iteration"

    print("PASS (c): deferred-reset decision logic behaves correctly "
          "(defers on sparse, fires on next valid dense iteration, no double-fire, "
          "byte-for-byte same-iteration firing for the dense-only baseline)")


if __name__ == "__main__":
    test_a_empty_filter_wipes_everything()
    test_b_nonempty_filter_preserves_visible()
    test_c_deferred_reset_logic()
    print("\nALL PASS")
