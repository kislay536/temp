// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcalculator.h for the primary calling header

#include "Vcalculator__pch.h"
#include "Vcalculator___024root.h"

VL_ATTR_COLD void Vcalculator___024root___eval_static(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_static\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcalculator___024root___eval_initial__TOP(Vcalculator___024root* vlSelf);

VL_ATTR_COLD void Vcalculator___024root___eval_initial(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_initial\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcalculator___024root___eval_initial__TOP(vlSelf);
}

void Vcalculator___024root____Vdpiimwrap_calculator__DOT__dpi_multiplier_init_TOP();

VL_ATTR_COLD void Vcalculator___024root___eval_initial__TOP(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_initial__TOP\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__dpi_multiplier_init_TOP();
}

VL_ATTR_COLD void Vcalculator___024root___eval_final(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_final\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalculator___024root___dump_triggers__stl(Vcalculator___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcalculator___024root___eval_phase__stl(Vcalculator___024root* vlSelf);

VL_ATTR_COLD void Vcalculator___024root___eval_settle(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_settle\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcalculator___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("calculator.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcalculator___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalculator___024root___dump_triggers__stl(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___dump_triggers__stl\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vcalculator___024root___ico_sequent__TOP__0(Vcalculator___024root* vlSelf);

VL_ATTR_COLD void Vcalculator___024root___eval_stl(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_stl\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcalculator___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcalculator___024root___eval_triggers__stl(Vcalculator___024root* vlSelf);

VL_ATTR_COLD bool Vcalculator___024root___eval_phase__stl(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_phase__stl\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcalculator___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcalculator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalculator___024root___dump_triggers__ico(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___dump_triggers__ico\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vcalculator___024root___dump_triggers__act(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___dump_triggers__act\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalculator___024root___dump_triggers__nba(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___dump_triggers__nba\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcalculator___024root___ctor_var_reset(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___ctor_var_reset\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = VL_RAND_RESET_Q(64);
    vlSelf->b = VL_RAND_RESET_Q(64);
    vlSelf->mode = VL_RAND_RESET_I(4);
    vlSelf->result = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__mul_out = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_calculator__DOT__u_mul__DOT__dpi_multiplier_eval2__1__result = 0;
}
