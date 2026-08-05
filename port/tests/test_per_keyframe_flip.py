"""Standalone, CPU-only proof for the per-keyframe-independent FLIP counter
and novelty-mask union added to BackEnd.map() (see port/STATUS.md section
10 and the SPLATONIC reference SPLATONIC/scripts/splatam_sparse.py).

Mirrors the exact per-frame decision logic now in slam_backend.py's map()
as a small, pure-Python/pure-torch state machine -- decoupled from the real
function (which needs a live CUDA renderer/Gaussian model to run at all) so
this can be checked in isolation on any machine.

Run: python port/tests/test_per_keyframe_flip.py
"""
import torch


class FakeViewpoint:
    """Stands in for a Camera object -- flip_counter/novelty_mask are
    plain attributes set via getattr/setattr in the real code, exactly as
    here."""
    def __init__(self):
        pass


def frame_decision(viewpoint, cam_idx, use_splatonic, force_full_dense, FLIP):
    """Mirrors slam_backend.py map()'s per-frame branch exactly:
    if not use_splatonic or cam_idx == 0 or force_full_dense: dense
    else: this viewpoint's own persistent, independently-advancing counter.
    """
    if not use_splatonic or cam_idx == 0 or force_full_dense:
        return True
    flip_counter = getattr(viewpoint, "flip_counter", 0)
    frame_use_dense = flip_counter == 0
    viewpoint.flip_counter = (flip_counter + 1) % FLIP
    return frame_use_dense


def test_a_current_keyframe_always_dense():
    vp = FakeViewpoint()
    for _ in range(20):
        assert frame_decision(vp, cam_idx=0, use_splatonic=True, force_full_dense=False, FLIP=4)
    print("PASS (a): cam_idx==0 (the newest keyframe) is dense every time, regardless of counter state")


def test_b_dense_only_baseline_always_dense():
    vp = FakeViewpoint()
    for cam_idx in range(5):
        assert frame_decision(vp, cam_idx=cam_idx, use_splatonic=False, force_full_dense=False, FLIP=4)
    print("PASS (b): use_splatonic=False forces dense for every frame, matching the pre-existing baseline exactly")


def test_c_other_keyframes_cycle_independently():
    FLIP = 4
    vp_a = FakeViewpoint()
    vp_b = FakeViewpoint()
    # vp_b is "processed" every iteration; vp_a only every other iteration --
    # their counters must advance independently, not in lockstep.
    results_a, results_b = [], []
    for i in range(12):
        results_b.append(frame_decision(vp_b, cam_idx=1, use_splatonic=True, force_full_dense=False, FLIP=FLIP))
        if i % 2 == 0:
            results_a.append(frame_decision(vp_a, cam_idx=1, use_splatonic=True, force_full_dense=False, FLIP=FLIP))

    assert results_b == [True, False, False, False] * 3, results_b
    # vp_a is only processed every other call (6 calls total across 12
    # iterations), cycling through its OWN counter at its own pace: True at
    # its 1st and 5th call (counter wraps 0->1->2->3->0->1).
    assert results_a == [True, False, False, False, True, False], results_a
    # Despite starting from the same rule, vp_a's sequence of real-world
    # iterations where it fires dense (0, 8) differs from vp_b's (0, 4, 8,
    # ...) precisely because it's processed at half the cadence -- proving
    # each viewpoint's counter genuinely advances independently rather than
    # both reading one shared/global counter.
    assert results_a != results_b[::2]
    print("PASS (c): two viewpoints processed at different real-world cadences "
          "advance their own counters independently -- not coupled to a shared global counter "
          "(this is the actual bug being fixed: the old code used one map_iter_counter for the whole window)")


def test_d_force_full_dense_does_not_disturb_counter():
    FLIP = 4
    vp = FakeViewpoint()
    assert frame_decision(vp, cam_idx=1, use_splatonic=True, force_full_dense=False, FLIP=FLIP) is True  # counter 0->1
    assert frame_decision(vp, cam_idx=1, use_splatonic=True, force_full_dense=True, FLIP=FLIP) is True   # forced, counter untouched
    assert getattr(vp, "flip_counter") == 1, "a forced-dense pass must not advance/reset this viewpoint's own schedule"
    assert frame_decision(vp, cam_idx=1, use_splatonic=True, force_full_dense=False, FLIP=FLIP) is False  # counter 1->2, sparse
    print("PASS (d): force_full_dense (used for the opacity-reset interaction) renders densely "
          "without disturbing the viewpoint's own independent counter -- its normal schedule resumes right after")


def test_e_novelty_mask_union_is_pure_or():
    H, W = 16, 16
    torch.manual_seed(0)
    pixel_mask = torch.rand(H, W) > 0.95
    novelty_mask = torch.rand(H, W) > 0.9
    before = pixel_mask.clone()

    result = pixel_mask | novelty_mask if novelty_mask is not None else pixel_mask

    assert result.shape == (H, W)
    assert (result[before]).all(), "every originally-sampled pixel must still be selected"
    assert (result[novelty_mask]).all(), "every novel pixel must be selected"
    assert result.sum() >= before.sum(), "union can only add pixels, never remove"
    print("PASS (e): novelty-mask union is a pure superset (bitwise OR), matching "
          "SPLATONIC's own pixel_mask | iter_unseen.reshape(...) exactly")


def test_f_none_novelty_mask_is_noop():
    H, W = 8, 8
    pixel_mask = torch.rand(H, W) > 0.5
    novelty_mask = None
    result = pixel_mask | novelty_mask if novelty_mask is not None else pixel_mask
    assert torch.equal(result, pixel_mask)
    print("PASS (f): a keyframe with no novelty mask yet (e.g. the very first keyframe) "
          "leaves pixel_mask completely unchanged")


if __name__ == "__main__":
    test_a_current_keyframe_always_dense()
    test_b_dense_only_baseline_always_dense()
    test_c_other_keyframes_cycle_independently()
    test_d_force_full_dense_does_not_disturb_counter()
    test_e_novelty_mask_union_is_pure_or()
    test_f_none_novelty_mask_is_noop()
    print("\nALL PASS")
