// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsubtractor.h for the primary calling header

#include "Vsubtractor__pch.h"
#include "Vsubtractor___024root.h"

VL_ATTR_COLD void Vsubtractor___024root___eval_static(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___eval_static\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsubtractor___024root___eval_initial(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___eval_initial\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsubtractor___024root___eval_final(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___eval_final\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubtractor___024root___dump_triggers__stl(Vsubtractor___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsubtractor___024root___eval_phase__stl(Vsubtractor___024root* vlSelf);

VL_ATTR_COLD void Vsubtractor___024root___eval_settle(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___eval_settle\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vsubtractor___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("subtractor.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsubtractor___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubtractor___024root___dump_triggers__stl(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___dump_triggers__stl\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vsubtractor___024root___ico_sequent__TOP__0(Vsubtractor___024root* vlSelf);

VL_ATTR_COLD void Vsubtractor___024root___eval_stl(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___eval_stl\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsubtractor___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vsubtractor___024root___eval_triggers__stl(Vsubtractor___024root* vlSelf);

VL_ATTR_COLD bool Vsubtractor___024root___eval_phase__stl(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___eval_phase__stl\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsubtractor___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsubtractor___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubtractor___024root___dump_triggers__ico(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___dump_triggers__ico\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vsubtractor___024root___dump_triggers__act(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___dump_triggers__act\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubtractor___024root___dump_triggers__nba(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___dump_triggers__nba\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsubtractor___024root___ctor_var_reset(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___ctor_var_reset\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = VL_RAND_RESET_Q(64);
    vlSelf->b = VL_RAND_RESET_Q(64);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->ack_in_add = VL_RAND_RESET_I(1);
    vlSelf->ack_in_mul = VL_RAND_RESET_I(1);
    vlSelf->ack_in_div = VL_RAND_RESET_I(1);
    vlSelf->add_working = VL_RAND_RESET_I(1);
    vlSelf->mul_working = VL_RAND_RESET_I(1);
    vlSelf->div_working = VL_RAND_RESET_I(1);
    vlSelf->ack_to_add = VL_RAND_RESET_I(1);
    vlSelf->ack_to_mul = VL_RAND_RESET_I(1);
    vlSelf->ack_to_div = VL_RAND_RESET_I(1);
    vlSelf->working = VL_RAND_RESET_I(1);
    vlSelf->result = VL_RAND_RESET_Q(64);
}
