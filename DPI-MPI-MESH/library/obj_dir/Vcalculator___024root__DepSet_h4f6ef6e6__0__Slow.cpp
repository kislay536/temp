// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcalculator.h for the primary calling header

#include "Vcalculator__pch.h"
#include "Vcalculator___024root.h"

VL_ATTR_COLD void Vcalculator___024root___eval_static(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_static\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vcalculator___024root___eval_initial__TOP(Vcalculator___024root* vlSelf);
VL_ATTR_COLD void Vcalculator___024root____Vm_traceActivitySetAll(Vcalculator___024root* vlSelf);

VL_ATTR_COLD void Vcalculator___024root___eval_initial(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_initial\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcalculator___024root___eval_initial__TOP(vlSelf);
    Vcalculator___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vcalculator___024root___eval_initial__TOP(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_initial__TOP\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.calculator__DOT__int_con__DOT__is_busy = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_1 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_1 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_1 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_1 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_1 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_1 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_1 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_1 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_1 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_1 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_2 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_2 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_2 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_2 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_2 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_2 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_2 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_2 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_2 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_2 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_3 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_3 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_3 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_3 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_3 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_3 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_3 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_3 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_3 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_3 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_6 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_6 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_6 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_6 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_6 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_6 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_6 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_6 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_6 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_6 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_8 = 0U;
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
            VL_FATAL_MT("calculator.v", 2, "", "Settle region did not converge.");
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

VL_ATTR_COLD void Vcalculator___024root___stl_sequent__TOP__0(Vcalculator___024root* vlSelf);

VL_ATTR_COLD void Vcalculator___024root___eval_stl(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_stl\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcalculator___024root___stl_sequent__TOP__0(vlSelf);
        Vcalculator___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vcalculator___024root___stl_sequent__TOP__0(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___stl_sequent__TOP__0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl_0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__is_busy)))) {
        if ((((0ULL != vlSelfRef.a) | (0ULL != vlSelfRef.b)) 
             | (0U != (IData)(vlSelfRef.mode)))) {
            vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a_0 
                = vlSelfRef.a;
            vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid_0 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b_0 
                = vlSelfRef.b;
            vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__md 
                = vlSelfRef.mode;
            vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__dy 
                = (3U & VL_DIV_III(32, (IData)(vlSelfRef.mode), (IData)(3U)));
            vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__dx 
                = (3U & VL_MODDIV_III(32, (IData)(vlSelfRef.mode), (IData)(3U)));
            vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__dx) 
                    << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__dy) 
                               << 4U) | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__md)));
            vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl_0 
                = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__Vfuncout;
        }
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_1) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_1;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_1;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_1;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_1) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_1;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_1;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_1;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_1) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_1;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_1;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_1;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_1) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_1;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_1;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_1;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_1) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_1;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_1;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_1;
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_2) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_2;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_2;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_2;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_2) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_2;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_2;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_2;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_2) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_2;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_2;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_2;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_2) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_2;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_2;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_2;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_2) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_2;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_2;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_2;
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_3) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_3;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_3;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_3;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_3) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_3;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_3;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_3;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_3) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_3;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_3;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_3;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_3) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_3;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_3;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_3;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_3) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_3;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_3;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_3;
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_6) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_6;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_6;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_6;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_6) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_6;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_6;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_6;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_6) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_6;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_6;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_6;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_6) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_6;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_6;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_6;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_6) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_6;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_6;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_6;
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_0) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_0;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_0;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_0;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_0) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_0;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_0;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_0;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_0) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_0;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_0;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_0;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_0) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_0;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_0;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_0;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_0) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_0;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_0;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_0;
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_4) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_4;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_4;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_4;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_4) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_4;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_4;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_4;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_4) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_4;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_4;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_4;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_4) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_4;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_4;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_4;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_4) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_4;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_4;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_4;
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_5) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_5;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_5;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_5;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_5) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_5;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_5;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_5;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_5) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_5;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_5;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_5;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_5) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_5;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_5;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_5;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_5) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_5;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_5;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_5;
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_7) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_7;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_7;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_7;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_7) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_7;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_7;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_7;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_7) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_7;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_7;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_7;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_7) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_7;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_7;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_7;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_7) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_7;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_7;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_7;
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid_8) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b_8;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a_8;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl_8;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n_8) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n_8;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n_8;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n_8;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e_8) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e_8;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e_8;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e_8;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s_8) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s_8;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s_8;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s_8;
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w_8) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w_8;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w_8;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w_8;
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__am_dest 
        = ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid) 
           & (IData)((0x40U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__am_dest 
        = ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid) 
           & (IData)((0x80U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__am_dest 
        = ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid) 
           & (IData)((0x10U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__am_dest 
        = ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid) 
           & (IData)((0x20U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest 
        = ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid) 
           & (IData)((0U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__am_dest 
        = ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid) 
           & (IData)((0x50U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__am_dest 
        = ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid) 
           & (IData)((0x90U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__am_dest 
        = ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid) 
           & (IData)((0x60U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__am_dest 
        = ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid) 
           & (IData)((0xa0U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_1 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_1 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_1 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_1 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_1 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_1 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_2 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_2 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_2 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_2 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_2 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_2 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_3 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_3 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_3 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_3 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_3 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_3 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_6 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_6 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_6 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_6 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_6 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_6 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid_0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_4 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_4 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_5 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_5 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_7 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_7 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_8 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_8 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__op_result = 0ULL;
    if ((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a, vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid) {
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__am_dest)))) {
                if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_1 = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a;
                }
                if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                     >> 6U)))) {
                        vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_1 = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_1 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl;
                        vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_1 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b;
                        vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_1 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a;
                    }
                }
            }
        }
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_1 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_1 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_1 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_1 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_1 = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_1 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_1 = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl;
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a, vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid) {
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__am_dest)))) {
                if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_2 = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_2 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_2 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_2 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a;
                }
                if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                     >> 6U)))) {
                        vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_2 = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_2 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl;
                        vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_2 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b;
                        vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_2 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a;
                    }
                }
            }
        }
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_2 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_2 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_2 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_2 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_2 = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_2 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_2 = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_2 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_2 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl;
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a, vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid) {
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__am_dest)))) {
                if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_3 = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_3 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_3 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_3 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a;
                }
                if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U <= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_3 = 1U;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_3 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_3 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_3 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a;
                        }
                    }
                }
            }
        }
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_3 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_3 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_3 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_3 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_3 = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_3 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_3 = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_3 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b;
                vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_3 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl;
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a, vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid) {
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__am_dest)))) {
                if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_6 = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_6 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_6 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_6 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a;
                }
                if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U <= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_6 = 1U;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_6 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_6 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_6 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a;
                        }
                    }
                }
            }
        }
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_6 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_6 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_6 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_6 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_6 = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_6 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_6 = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_6 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b;
                vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_6 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl;
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a, vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid) {
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest)))) {
                if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_0 = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_0 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_0 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_0 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a;
                }
                if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                     >> 6U)))) {
                        vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_0 = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl;
                        vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b;
                        vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest) {
                vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__unnamedblk1__DOT__resp_ctrl 
                    = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl)));
            }
        }
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid_0 = 1U;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid_0 = 1U;
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a, vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid) {
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__am_dest)))) {
                if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_4 = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_4 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_4 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_4 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a;
                }
                if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U <= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_4 = 1U;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_4 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_4 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_4 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a;
                        }
                        if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_4 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_4 = 1U;
                                vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_4 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a;
                                vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_4 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b;
                            }
                        }
                    }
                }
            }
        }
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_4 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_4 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_4 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_4 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_4 = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_4 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_4 = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_4 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b;
                vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_4 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl;
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a, vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid) {
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__am_dest)))) {
                if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_5 = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_5 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_5 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_5 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a;
                }
                if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U <= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_5 = 1U;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_5 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_5 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_5 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a;
                        }
                        if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_5 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_5 = 1U;
                                vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_5 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a;
                                vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_5 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b;
                            }
                        }
                    }
                }
            }
        }
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_5 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_5 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_5 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_5 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_5 = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_5 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_5 = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_5 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b;
                vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_5 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl;
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a, vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid) {
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__am_dest)))) {
                if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_7 = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_7 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_7 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_7 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a;
                }
                if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U <= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_7 = 1U;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_7 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_7 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_7 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a;
                        }
                        if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_7 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_7 = 1U;
                                vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_7 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a;
                                vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_7 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b;
                            }
                        }
                    }
                }
            }
        }
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_7 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_7 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_7 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_7 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_7 = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_7 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_7 = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_7 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b;
                vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_7 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl;
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a, vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid) {
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__am_dest)))) {
                if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s_8 = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s_8 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s_8 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s_8 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a;
                }
                if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U <= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e_8 = 1U;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e_8 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_b_e_8 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b;
                            vlSelfRef.calculator__DOT__int_con__DOT__out_a_e_8 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a;
                        }
                        if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w_8 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w_8 = 1U;
                                vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_8 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a;
                                vlSelfRef.calculator__DOT__int_con__DOT__out_b_w_8 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b;
                            }
                        }
                    }
                }
            }
        }
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_8 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_8 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_8 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_8 = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_8 = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_8 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n_8 = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT__out_b_n_8 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b;
                vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n_8 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl;
            }
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(1,0): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__op_result);
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_1 = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_1 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_1 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__op_result;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a;
                }
            }
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(2,0): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__op_result);
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_2 = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_2 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_2 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__op_result;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w_2 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a;
                }
            }
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(0,1): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__op_result);
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_3 = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_3 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_3 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__op_result;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_3 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a;
            }
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(0,2): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__op_result);
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_6 = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_6 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_6 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__op_result;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_6 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a;
            }
        }
    }
    vlSelfRef.valid = vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid_0;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(0,0): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__op_result);
    }
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_a_0 = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__host_out_a_0 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__host_out_a_0 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__op_result;
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(1,1): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__op_result);
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_4 = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_4 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_4 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__op_result;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_4 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a;
            }
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(2,1): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__op_result);
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_5 = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_5 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_5 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__op_result;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_5 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a;
            }
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(1,2): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__op_result);
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_7 = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_7 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_7 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__op_result;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_7 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a;
            }
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(2,2): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__op_result);
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_8 = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_8 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_8 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__op_result;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT__out_a_n_8 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a;
            }
        }
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__is_busy) {
        vlSelfRef.calculator__DOT__int_con__DOT__next_is_busy = 1U;
        if (vlSelfRef.valid) {
            vlSelfRef.calculator__DOT__int_con__DOT__next_is_busy = 0U;
        }
    } else {
        vlSelfRef.calculator__DOT__int_con__DOT__next_is_busy = 0U;
        if ((((0ULL != vlSelfRef.a) | (0ULL != vlSelfRef.b)) 
             | (0U != (IData)(vlSelfRef.mode)))) {
            vlSelfRef.calculator__DOT__int_con__DOT__next_is_busy = 1U;
        }
    }
    vlSelfRef.result = vlSelfRef.calculator__DOT__int_con__DOT__host_out_a_0;
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
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
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
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcalculator___024root____Vm_traceActivitySetAll(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root____Vm_traceActivitySetAll\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vcalculator___024root___ctor_var_reset(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___ctor_var_reset\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_Q(64);
    vlSelf->b = VL_RAND_RESET_Q(64);
    vlSelf->mode = VL_RAND_RESET_I(4);
    vlSelf->result = VL_RAND_RESET_Q(64);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_a_n_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_n_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_n_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_n_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_n_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_n_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_n_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_n_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_n_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_n_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_n_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_n_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_n_3 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_n_4 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_n_5 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_n_6 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_n_7 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_n_8 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_n_3 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_n_4 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_n_5 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_n_6 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_n_7 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_n_8 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_a_e_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_e_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_e_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_e_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_e_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_e_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_e_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_e_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_e_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_e_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_e_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_e_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_e_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_e_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_e_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_e_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_e_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_e_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_e_0 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_e_1 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_e_2 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_e_3 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_e_4 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_e_5 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_e_6 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_e_7 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_e_8 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_e_0 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_e_1 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_e_2 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_e_3 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_e_4 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_e_5 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_e_6 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_e_7 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_e_8 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_a_s_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_s_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_s_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_s_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_s_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_s_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_s_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_s_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_s_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_s_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_s_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_s_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_s_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_s_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_s_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_s_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_s_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_s_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_s_0 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_s_1 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_s_2 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_s_3 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_s_4 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_s_5 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_s_6 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_s_7 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_s_8 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_s_0 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_s_1 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_s_2 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_s_3 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_s_4 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_s_5 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_s_6 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_s_7 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_s_8 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_a_w_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_w_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_w_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_w_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_w_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_a_w_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_w_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_w_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_w_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_w_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_w_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_b_w_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_w_1 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_w_2 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_w_4 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_w_5 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_w_7 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_ctrl_w_8 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_w_1 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_w_2 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_w_4 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_w_5 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_w_7 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__out_valid_w_8 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__host_out_a_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_out_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_a_n_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_n_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_n_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_n_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_n_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_n_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_n_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_n_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_n_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_n_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_n_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_n_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_n_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_n_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_n_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_n_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_n_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_n_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_n_0 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_n_1 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_n_2 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_n_3 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_n_4 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_n_5 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_n_6 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_n_7 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_n_8 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_n_0 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_n_1 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_n_2 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_n_3 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_n_4 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_n_5 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_n_6 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_n_7 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_n_8 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_a_e_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_e_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_e_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_e_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_e_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_e_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_e_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_e_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_e_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_e_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_e_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_e_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_e_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_e_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_e_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_e_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_e_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_e_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_e_0 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_e_1 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_e_2 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_e_3 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_e_4 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_e_5 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_e_6 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_e_7 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_e_8 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_e_0 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_e_1 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_e_2 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_e_3 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_e_4 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_e_5 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_e_6 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_e_7 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_e_8 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_a_s_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_s_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_s_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_s_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_s_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_s_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_s_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_s_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_s_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_s_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_s_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_s_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_s_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_s_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_s_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_s_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_s_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_s_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_s_0 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_s_1 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_s_2 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_s_3 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_s_4 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_s_5 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_s_6 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_s_7 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_s_8 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_s_0 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_s_1 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_s_2 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_s_3 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_s_4 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_s_5 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_s_6 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_s_7 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_s_8 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_a_w_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_w_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_w_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_w_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_w_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_w_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_w_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_w_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_a_w_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_w_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_w_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_w_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_w_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_w_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_w_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_w_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_w_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_b_w_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_w_0 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_w_1 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_w_2 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_w_3 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_w_4 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_w_5 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_w_6 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_w_7 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_ctrl_w_8 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_w_0 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_w_1 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_w_2 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_w_3 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_w_4 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_w_5 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_w_6 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_w_7 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__in_valid_w_8 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__host_in_a_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_a_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_a_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_a_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_a_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_a_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_a_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_a_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_a_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_b_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_b_1 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_b_2 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_b_3 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_b_4 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_b_5 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_b_6 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_b_7 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_b_8 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__host_in_ctrl_0 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__host_in_ctrl_1 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__host_in_ctrl_2 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__host_in_ctrl_3 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__host_in_ctrl_4 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__host_in_ctrl_5 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__host_in_ctrl_6 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__host_in_ctrl_7 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__host_in_ctrl_8 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__host_in_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__host_in_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__host_in_valid_2 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__host_in_valid_3 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__host_in_valid_4 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__host_in_valid_5 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__host_in_valid_6 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__host_in_valid_7 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__host_in_valid_8 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__next_host_in_a_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__next_host_in_b_0 = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__next_host_in_ctrl_0 = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__next_host_in_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__is_busy = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__next_is_busy = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t0_0__DOT__sel_a = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t0_0__DOT__sel_b = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t0_0__DOT__am_dest = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t0_0__DOT__op_result = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t0_0__DOT__unnamedblk1__DOT__resp_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t0_1__DOT__sel_a = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t0_1__DOT__sel_b = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t0_1__DOT__am_dest = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t0_1__DOT__op_result = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t0_2__DOT__sel_a = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t0_2__DOT__sel_b = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t0_2__DOT__am_dest = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t0_2__DOT__op_result = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t1_0__DOT__sel_a = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t1_0__DOT__sel_b = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t1_0__DOT__am_dest = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t1_0__DOT__op_result = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t1_1__DOT__sel_a = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t1_1__DOT__sel_b = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t1_1__DOT__am_dest = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t1_1__DOT__op_result = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t1_2__DOT__sel_a = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t1_2__DOT__sel_b = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t1_2__DOT__am_dest = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t1_2__DOT__op_result = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t2_0__DOT__sel_a = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t2_0__DOT__sel_b = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t2_0__DOT__am_dest = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t2_0__DOT__op_result = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t2_1__DOT__sel_a = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t2_1__DOT__sel_b = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t2_1__DOT__am_dest = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t2_1__DOT__op_result = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t2_2__DOT__sel_a = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t2_2__DOT__sel_b = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t2_2__DOT__am_dest = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__t2_2__DOT__op_result = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__dx = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__dy = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__md = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
