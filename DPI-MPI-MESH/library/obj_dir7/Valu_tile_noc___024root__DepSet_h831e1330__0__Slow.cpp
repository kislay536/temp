// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tile_noc.h for the primary calling header

#include "Valu_tile_noc__pch.h"
#include "Valu_tile_noc___024root.h"

VL_ATTR_COLD void Valu_tile_noc___024root___eval_static(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___eval_static\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Valu_tile_noc___024root___eval_initial(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___eval_initial\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Valu_tile_noc___024root___eval_final(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___eval_final\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tile_noc___024root___dump_triggers__stl(Valu_tile_noc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Valu_tile_noc___024root___eval_phase__stl(Valu_tile_noc___024root* vlSelf);

VL_ATTR_COLD void Valu_tile_noc___024root___eval_settle(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___eval_settle\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Valu_tile_noc___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("alu_tile_noc.v", 16, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Valu_tile_noc___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tile_noc___024root___dump_triggers__stl(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___dump_triggers__stl\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Valu_tile_noc___024root___ico_sequent__TOP__0(Valu_tile_noc___024root* vlSelf);

VL_ATTR_COLD void Valu_tile_noc___024root___eval_stl(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___eval_stl\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Valu_tile_noc___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Valu_tile_noc___024root___eval_triggers__stl(Valu_tile_noc___024root* vlSelf);

VL_ATTR_COLD bool Valu_tile_noc___024root___eval_phase__stl(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___eval_phase__stl\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Valu_tile_noc___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Valu_tile_noc___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tile_noc___024root___dump_triggers__ico(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___dump_triggers__ico\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tile_noc___024root___dump_triggers__act(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___dump_triggers__act\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tile_noc___024root___dump_triggers__nba(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___dump_triggers__nba\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu_tile_noc___024root___ctor_var_reset(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___ctor_var_reset\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->TILE_X = VL_RAND_RESET_I(8);
    vlSelf->TILE_Y = VL_RAND_RESET_I(8);
    vlSelf->in_a_n = VL_RAND_RESET_Q(64);
    vlSelf->in_b_n = VL_RAND_RESET_Q(64);
    vlSelf->in_ctrl_n = VL_RAND_RESET_I(16);
    vlSelf->in_valid_n = VL_RAND_RESET_I(1);
    vlSelf->in_a_e = VL_RAND_RESET_Q(64);
    vlSelf->in_b_e = VL_RAND_RESET_Q(64);
    vlSelf->in_ctrl_e = VL_RAND_RESET_I(16);
    vlSelf->in_valid_e = VL_RAND_RESET_I(1);
    vlSelf->in_a_s = VL_RAND_RESET_Q(64);
    vlSelf->in_b_s = VL_RAND_RESET_Q(64);
    vlSelf->in_ctrl_s = VL_RAND_RESET_I(16);
    vlSelf->in_valid_s = VL_RAND_RESET_I(1);
    vlSelf->in_a_w = VL_RAND_RESET_Q(64);
    vlSelf->in_b_w = VL_RAND_RESET_Q(64);
    vlSelf->in_ctrl_w = VL_RAND_RESET_I(16);
    vlSelf->in_valid_w = VL_RAND_RESET_I(1);
    vlSelf->host_in_a = VL_RAND_RESET_Q(64);
    vlSelf->host_in_b = VL_RAND_RESET_Q(64);
    vlSelf->host_in_ctrl = VL_RAND_RESET_I(16);
    vlSelf->host_in_valid = VL_RAND_RESET_I(1);
    vlSelf->out_a_n = VL_RAND_RESET_Q(64);
    vlSelf->out_b_n = VL_RAND_RESET_Q(64);
    vlSelf->out_ctrl_n = VL_RAND_RESET_I(16);
    vlSelf->out_valid_n = VL_RAND_RESET_I(1);
    vlSelf->out_a_e = VL_RAND_RESET_Q(64);
    vlSelf->out_b_e = VL_RAND_RESET_Q(64);
    vlSelf->out_ctrl_e = VL_RAND_RESET_I(16);
    vlSelf->out_valid_e = VL_RAND_RESET_I(1);
    vlSelf->out_a_s = VL_RAND_RESET_Q(64);
    vlSelf->out_b_s = VL_RAND_RESET_Q(64);
    vlSelf->out_ctrl_s = VL_RAND_RESET_I(16);
    vlSelf->out_valid_s = VL_RAND_RESET_I(1);
    vlSelf->out_a_w = VL_RAND_RESET_Q(64);
    vlSelf->out_b_w = VL_RAND_RESET_Q(64);
    vlSelf->out_ctrl_w = VL_RAND_RESET_I(16);
    vlSelf->out_valid_w = VL_RAND_RESET_I(1);
    vlSelf->host_out_a = VL_RAND_RESET_Q(64);
    vlSelf->host_out_valid = VL_RAND_RESET_I(1);
    vlSelf->alu_tile_noc__DOT__unnamedblk1__DOT__resp_ctrl = VL_RAND_RESET_I(16);
}
