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
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[4U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[5U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[7U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[4U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[5U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[7U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__is_busy = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[4U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[4U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[4U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[4U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[4U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[4U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[4U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[4U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[4U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[4U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[4U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[4U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[4U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[4U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[4U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[4U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[4U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[4U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[4U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[4U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[5U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[5U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[5U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[5U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[5U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[5U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[5U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[5U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[5U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[5U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[5U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[5U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[5U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[5U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[5U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[5U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[5U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[5U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[5U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[5U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[7U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[7U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[7U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[7U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[7U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[7U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[7U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[7U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[7U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[7U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[7U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[7U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[7U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[7U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[7U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[7U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[7U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[7U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[7U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[7U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk5__DOT__i = 9U;
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
    // Init
    QData/*63:0*/ calculator__DOT__int_con__DOT____Vlvbound_h14d333b0__0;
    calculator__DOT__int_con__DOT____Vlvbound_h14d333b0__0 = 0;
    QData/*63:0*/ calculator__DOT__int_con__DOT____Vlvbound_ha3bd8bbc__0;
    calculator__DOT__int_con__DOT____Vlvbound_ha3bd8bbc__0 = 0;
    SData/*15:0*/ calculator__DOT__int_con__DOT____Vlvbound_h4e4be753__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4e4be753__0 = 0;
    CData/*0:0*/ calculator__DOT__int_con__DOT____Vlvbound_h95e1070d__0;
    calculator__DOT__int_con__DOT____Vlvbound_h95e1070d__0 = 0;
    QData/*63:0*/ calculator__DOT__int_con__DOT____Vlvbound_h9aa5d9fa__0;
    calculator__DOT__int_con__DOT____Vlvbound_h9aa5d9fa__0 = 0;
    QData/*63:0*/ calculator__DOT__int_con__DOT____Vlvbound_hf8b0419d__0;
    calculator__DOT__int_con__DOT____Vlvbound_hf8b0419d__0 = 0;
    SData/*15:0*/ calculator__DOT__int_con__DOT____Vlvbound_h4ee45c58__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4ee45c58__0 = 0;
    CData/*0:0*/ calculator__DOT__int_con__DOT____Vlvbound_h01fd6790__0;
    calculator__DOT__int_con__DOT____Vlvbound_h01fd6790__0 = 0;
    QData/*63:0*/ calculator__DOT__int_con__DOT____Vlvbound_hedc284c7__0;
    calculator__DOT__int_con__DOT____Vlvbound_hedc284c7__0 = 0;
    QData/*63:0*/ calculator__DOT__int_con__DOT____Vlvbound_h707e7244__0;
    calculator__DOT__int_con__DOT____Vlvbound_h707e7244__0 = 0;
    SData/*15:0*/ calculator__DOT__int_con__DOT____Vlvbound_h4291a0e0__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4291a0e0__0 = 0;
    CData/*0:0*/ calculator__DOT__int_con__DOT____Vlvbound_h7da25c71__0;
    calculator__DOT__int_con__DOT____Vlvbound_h7da25c71__0 = 0;
    QData/*63:0*/ calculator__DOT__int_con__DOT____Vlvbound_hf23f47e1__0;
    calculator__DOT__int_con__DOT____Vlvbound_hf23f47e1__0 = 0;
    QData/*63:0*/ calculator__DOT__int_con__DOT____Vlvbound_ha765769d__0;
    calculator__DOT__int_con__DOT____Vlvbound_ha765769d__0 = 0;
    SData/*15:0*/ calculator__DOT__int_con__DOT____Vlvbound_hae4acca1__0;
    calculator__DOT__int_con__DOT____Vlvbound_hae4acca1__0 = 0;
    CData/*0:0*/ calculator__DOT__int_con__DOT____Vlvbound_h1c118d22__0;
    calculator__DOT__int_con__DOT____Vlvbound_h1c118d22__0 = 0;
    // Body
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[4U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[5U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[7U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[4U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[5U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[7U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[4U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[5U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[7U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[4U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[5U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[7U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[8U] = 0U;
    if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__is_busy)))) {
        if ((((0ULL != vlSelfRef.a) | (0ULL != vlSelfRef.b)) 
             | (0U != (IData)(vlSelfRef.mode)))) {
            vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[0U] = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[0U] 
                = vlSelfRef.b;
            vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[0U] 
                = vlSelfRef.a;
            vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__64__md 
                = vlSelfRef.mode;
            vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__64__dy 
                = (3U & VL_DIV_III(32, (IData)(vlSelfRef.mode), (IData)(3U)));
            vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__64__dx 
                = (3U & VL_MODDIV_III(32, (IData)(vlSelfRef.mode), (IData)(3U)));
            vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__64__Vfuncout 
                = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__64__dx) 
                    << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__64__dy) 
                               << 4U) | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__64__md)));
            vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[0U] 
                = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__64__Vfuncout;
        }
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a = 0ULL;
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
    vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
        [0U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
            [0U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
            [0U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
            [0U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
               [0U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
            [0U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
            [0U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
            [0U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
               [0U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
            [0U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
            [0U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
            [0U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
               [0U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
            [0U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
            [0U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
            [0U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
               [0U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
            [0U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
            [0U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
            [0U];
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
        [1U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
            [1U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
            [1U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
            [1U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
               [1U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
            [1U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
            [1U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
            [1U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
               [1U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
            [1U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
            [1U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
            [1U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
               [1U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
            [1U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
            [1U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
            [1U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
               [1U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
            [1U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
            [1U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
            [1U];
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
        [2U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
            [2U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
            [2U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
            [2U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
               [2U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
            [2U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
            [2U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
            [2U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
               [2U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
            [2U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
            [2U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
            [2U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
               [2U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
            [2U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
            [2U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
            [2U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
               [2U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
            [2U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
            [2U];
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
            [2U];
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
        [3U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
            [3U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
            [3U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
            [3U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
               [3U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
            [3U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
            [3U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
            [3U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
               [3U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
            [3U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
            [3U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
            [3U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
               [3U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
            [3U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
            [3U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
            [3U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
               [3U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
            [3U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
            [3U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
            [3U];
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
        [6U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
            [6U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
            [6U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
            [6U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
               [6U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
            [6U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
            [6U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
            [6U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
               [6U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
            [6U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
            [6U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
            [6U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
               [6U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
            [6U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
            [6U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
            [6U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
               [6U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
            [6U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
            [6U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
            [6U];
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
        [4U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
            [4U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
            [4U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
            [4U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
               [4U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
            [4U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
            [4U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
            [4U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
               [4U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
            [4U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
            [4U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
            [4U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
               [4U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
            [4U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
            [4U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
            [4U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
               [4U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
            [4U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
            [4U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
            [4U];
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
        [5U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
            [5U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
            [5U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
            [5U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
               [5U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
            [5U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
            [5U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
            [5U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
               [5U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
            [5U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
            [5U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
            [5U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
               [5U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
            [5U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
            [5U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
            [5U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
               [5U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
            [5U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
            [5U];
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
            [5U];
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
        [7U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
            [7U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
            [7U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
            [7U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
               [7U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
            [7U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
            [7U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
            [7U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
               [7U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
            [7U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
            [7U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
            [7U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
               [7U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
            [7U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
            [7U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
            [7U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
               [7U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
            [7U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
            [7U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
            [7U];
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
        [8U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
            [8U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
            [8U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
            [8U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
               [8U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
            [8U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
            [8U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
            [8U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
               [8U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
            [8U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
            [8U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
            [8U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
               [8U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
            [8U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
            [8U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
            [8U];
    } else if (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
               [8U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
            [8U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
            [8U];
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
            [8U];
    }
    vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest 
        = ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid) 
           & (IData)((0U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl)))));
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
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_valid = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_w = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_w = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_n = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_n = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_n = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_w = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_w = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_n = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_w = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_w = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_n = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_w = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_w = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_n = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_w = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_w = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__op_result = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid) {
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                      >> 8U)))) {
            if (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest) {
                vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__unnamedblk1__DOT__resp_ctrl 
                    = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl)));
            }
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest)))) {
                if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a;
                }
                if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                     >> 6U)))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_e = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_e 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_e 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_e 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a;
                    }
                }
            }
        }
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_valid = 1U;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_valid = 1U;
        }
        vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_valid;
        vlSelfRef.valid = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_valid;
        vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_s;
        vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_s;
        vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_e;
        vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_e;
        vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_s;
        vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_s;
        vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_e;
    } else {
        vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_valid;
        vlSelfRef.valid = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_valid;
        vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_s;
        vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_s;
        vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_e;
        vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_e;
        vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_s;
        vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_s;
        vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[0U] 
            = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_e;
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_e;
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
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_w = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_w 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_w 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_w = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_w = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_w 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_w = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_w 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_w 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__am_dest)))) {
                if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a;
                }
                if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                     >> 6U)))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_e = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_e 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_e 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_e 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a;
                    }
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
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_w = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_w 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_w 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_w = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_w = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_w 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_w = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_w 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_w 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__am_dest)))) {
                if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a;
                }
                if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                     >> 6U)))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_e = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_e 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_e 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_e 
                            = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a;
                    }
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
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_n = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_n = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_n = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b;
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__am_dest)))) {
                if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a;
                }
                if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U <= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a;
                        }
                    }
                }
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
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_n = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_n = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_n = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b;
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__am_dest)))) {
                if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a;
                }
                if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U <= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a;
                        }
                    }
                }
            }
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
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_n = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_n = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_n = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b;
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__am_dest)))) {
                if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U <= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_w 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_w = 1U;
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_w 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a;
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_w 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b;
                            }
                        }
                        if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a;
                        }
                    }
                }
                if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a;
                }
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
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_n = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_n = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_n = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b;
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__am_dest)))) {
                if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U <= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_w 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_w = 1U;
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_w 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a;
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_w 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b;
                            }
                        }
                        if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a;
                        }
                    }
                }
                if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a;
                }
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
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_n = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_n = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_n = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b;
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__am_dest)))) {
                if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U <= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_w 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_w = 1U;
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_w 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a;
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_w 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b;
                            }
                        }
                        if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a;
                        }
                    }
                }
                if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a;
                }
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
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_n = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_n = 1U;
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_n = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b;
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__am_dest)))) {
                if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U <= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_w 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_w = 1U;
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_w 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a;
                                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_w 
                                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b;
                            }
                        }
                        if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b;
                            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_e 
                                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a;
                        }
                    }
                }
                if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_s 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a;
                }
            }
        }
    }
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
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_a = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_a 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_a 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__op_result;
        }
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_e;
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
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_w = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_w 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_w 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__op_result;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_w 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a;
                }
            }
        }
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_e;
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
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_w = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_w 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_w 
                = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__op_result;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_w 
                        = vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a;
                }
            }
        }
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_e;
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
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__op_result;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_e;
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
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__op_result;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_e;
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
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__op_result;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_e;
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
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__op_result;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_e;
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
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__op_result;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_n 
                    = vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_s;
    vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_e;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_e;
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
    vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_n 
                = vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__op_result;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_n 
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
    vlSelfRef.result = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_a;
    vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_a;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_w;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_n;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_n;
    calculator__DOT__int_con__DOT____Vlvbound_h7da25c71__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[0U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h7da25c71__0;
    calculator__DOT__int_con__DOT____Vlvbound_h7da25c71__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[1U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h7da25c71__0;
    calculator__DOT__int_con__DOT____Vlvbound_h7da25c71__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[2U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h7da25c71__0;
    calculator__DOT__int_con__DOT____Vlvbound_h7da25c71__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[3U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h7da25c71__0;
    calculator__DOT__int_con__DOT____Vlvbound_h7da25c71__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h7da25c71__0;
    calculator__DOT__int_con__DOT____Vlvbound_h7da25c71__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[5U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h7da25c71__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[7U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_h7da25c71__0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[8U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_hae4acca1__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[0U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hae4acca1__0;
    calculator__DOT__int_con__DOT____Vlvbound_hae4acca1__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[1U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hae4acca1__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[2U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_hae4acca1__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[3U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hae4acca1__0;
    calculator__DOT__int_con__DOT____Vlvbound_hae4acca1__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hae4acca1__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[5U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_hae4acca1__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[6U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hae4acca1__0;
    calculator__DOT__int_con__DOT____Vlvbound_hae4acca1__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[7U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hae4acca1__0;
    calculator__DOT__int_con__DOT____Vlvbound_hae4acca1__0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[8U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_h1c118d22__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[0U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h1c118d22__0;
    calculator__DOT__int_con__DOT____Vlvbound_h1c118d22__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[1U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h1c118d22__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[2U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_h1c118d22__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[3U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h1c118d22__0;
    calculator__DOT__int_con__DOT____Vlvbound_h1c118d22__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h1c118d22__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[5U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_h1c118d22__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[6U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h1c118d22__0;
    calculator__DOT__int_con__DOT____Vlvbound_h1c118d22__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[7U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h1c118d22__0;
    calculator__DOT__int_con__DOT____Vlvbound_h1c118d22__0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[8U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_h707e7244__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_n
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[0U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h707e7244__0;
    calculator__DOT__int_con__DOT____Vlvbound_h707e7244__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_n
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[1U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h707e7244__0;
    calculator__DOT__int_con__DOT____Vlvbound_h707e7244__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_n
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[2U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h707e7244__0;
    calculator__DOT__int_con__DOT____Vlvbound_h707e7244__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_n
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[3U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h707e7244__0;
    calculator__DOT__int_con__DOT____Vlvbound_h707e7244__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_n
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h707e7244__0;
    calculator__DOT__int_con__DOT____Vlvbound_h707e7244__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_n
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[5U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h707e7244__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[7U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_h707e7244__0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[8U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_ha765769d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_w
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[0U] 
        = calculator__DOT__int_con__DOT____Vlvbound_ha765769d__0;
    calculator__DOT__int_con__DOT____Vlvbound_ha765769d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_w
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[1U] 
        = calculator__DOT__int_con__DOT____Vlvbound_ha765769d__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[2U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_ha765769d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_w
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[3U] 
        = calculator__DOT__int_con__DOT____Vlvbound_ha765769d__0;
    calculator__DOT__int_con__DOT____Vlvbound_ha765769d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_w
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_ha765769d__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[5U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_ha765769d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_w
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[6U] 
        = calculator__DOT__int_con__DOT____Vlvbound_ha765769d__0;
    calculator__DOT__int_con__DOT____Vlvbound_ha765769d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_w
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[7U] 
        = calculator__DOT__int_con__DOT____Vlvbound_ha765769d__0;
    calculator__DOT__int_con__DOT____Vlvbound_ha765769d__0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[8U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_h4291a0e0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[0U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4291a0e0__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4291a0e0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[1U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4291a0e0__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4291a0e0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[2U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4291a0e0__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4291a0e0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[3U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4291a0e0__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4291a0e0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4291a0e0__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4291a0e0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[5U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4291a0e0__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[7U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_h4291a0e0__0 = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[2U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_h95e1070d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[3U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h95e1070d__0;
    calculator__DOT__int_con__DOT____Vlvbound_h95e1070d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h95e1070d__0;
    calculator__DOT__int_con__DOT____Vlvbound_h95e1070d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[5U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h95e1070d__0;
    calculator__DOT__int_con__DOT____Vlvbound_h95e1070d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[6U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h95e1070d__0;
    calculator__DOT__int_con__DOT____Vlvbound_h95e1070d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[7U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h95e1070d__0;
    calculator__DOT__int_con__DOT____Vlvbound_h95e1070d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[8U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h95e1070d__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[2U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_h4e4be753__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[3U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4e4be753__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4e4be753__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4e4be753__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4e4be753__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[5U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4e4be753__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4e4be753__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[6U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4e4be753__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4e4be753__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[7U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4e4be753__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4e4be753__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[8U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4e4be753__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[0U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_h01fd6790__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[1U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h01fd6790__0;
    calculator__DOT__int_con__DOT____Vlvbound_h01fd6790__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[2U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h01fd6790__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[3U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_h01fd6790__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h01fd6790__0;
    calculator__DOT__int_con__DOT____Vlvbound_h01fd6790__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[5U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h01fd6790__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[6U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_h01fd6790__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[7U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h01fd6790__0;
    calculator__DOT__int_con__DOT____Vlvbound_h01fd6790__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[8U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h01fd6790__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[0U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_h4ee45c58__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[1U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4ee45c58__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4ee45c58__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[2U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4ee45c58__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[3U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_h4ee45c58__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4ee45c58__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4ee45c58__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[5U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4ee45c58__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[6U] = 0U;
    calculator__DOT__int_con__DOT____Vlvbound_h4ee45c58__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[7U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4ee45c58__0;
    calculator__DOT__int_con__DOT____Vlvbound_h4ee45c58__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[8U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h4ee45c58__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[2U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_ha3bd8bbc__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_s
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[3U] 
        = calculator__DOT__int_con__DOT____Vlvbound_ha3bd8bbc__0;
    calculator__DOT__int_con__DOT____Vlvbound_ha3bd8bbc__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_s
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_ha3bd8bbc__0;
    calculator__DOT__int_con__DOT____Vlvbound_ha3bd8bbc__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_s
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[5U] 
        = calculator__DOT__int_con__DOT____Vlvbound_ha3bd8bbc__0;
    calculator__DOT__int_con__DOT____Vlvbound_ha3bd8bbc__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_s
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[6U] 
        = calculator__DOT__int_con__DOT____Vlvbound_ha3bd8bbc__0;
    calculator__DOT__int_con__DOT____Vlvbound_ha3bd8bbc__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_s
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[7U] 
        = calculator__DOT__int_con__DOT____Vlvbound_ha3bd8bbc__0;
    calculator__DOT__int_con__DOT____Vlvbound_ha3bd8bbc__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_s
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[8U] 
        = calculator__DOT__int_con__DOT____Vlvbound_ha3bd8bbc__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[2U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_h14d333b0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_s
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[3U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h14d333b0__0;
    calculator__DOT__int_con__DOT____Vlvbound_h14d333b0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_s
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h14d333b0__0;
    calculator__DOT__int_con__DOT____Vlvbound_h14d333b0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_s
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[5U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h14d333b0__0;
    calculator__DOT__int_con__DOT____Vlvbound_h14d333b0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_s
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[6U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h14d333b0__0;
    calculator__DOT__int_con__DOT____Vlvbound_h14d333b0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_s
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[7U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h14d333b0__0;
    calculator__DOT__int_con__DOT____Vlvbound_h14d333b0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_s
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[8U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h14d333b0__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[0U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_hf8b0419d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_e
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[1U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hf8b0419d__0;
    calculator__DOT__int_con__DOT____Vlvbound_hf8b0419d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_e
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[2U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hf8b0419d__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[3U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_hf8b0419d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_e
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hf8b0419d__0;
    calculator__DOT__int_con__DOT____Vlvbound_hf8b0419d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_e
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[5U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hf8b0419d__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[6U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_hf8b0419d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_e
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[7U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hf8b0419d__0;
    calculator__DOT__int_con__DOT____Vlvbound_hf8b0419d__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_e
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[8U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hf8b0419d__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[0U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_h9aa5d9fa__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_e
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[1U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h9aa5d9fa__0;
    calculator__DOT__int_con__DOT____Vlvbound_h9aa5d9fa__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_e
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[2U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h9aa5d9fa__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[3U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_h9aa5d9fa__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_e
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h9aa5d9fa__0;
    calculator__DOT__int_con__DOT____Vlvbound_h9aa5d9fa__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_e
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[5U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h9aa5d9fa__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[6U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_h9aa5d9fa__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_e
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[7U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h9aa5d9fa__0;
    calculator__DOT__int_con__DOT____Vlvbound_h9aa5d9fa__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_e
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[8U] 
        = calculator__DOT__int_con__DOT____Vlvbound_h9aa5d9fa__0;
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_n;
    calculator__DOT__int_con__DOT____Vlvbound_hf23f47e1__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_w
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[0U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hf23f47e1__0;
    calculator__DOT__int_con__DOT____Vlvbound_hf23f47e1__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_w
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[1U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hf23f47e1__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[2U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_hf23f47e1__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_w
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[3U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hf23f47e1__0;
    calculator__DOT__int_con__DOT____Vlvbound_hf23f47e1__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_w
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hf23f47e1__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[5U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_hf23f47e1__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_w
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[6U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hf23f47e1__0;
    calculator__DOT__int_con__DOT____Vlvbound_hf23f47e1__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_w
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[7U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hf23f47e1__0;
    calculator__DOT__int_con__DOT____Vlvbound_hf23f47e1__0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[8U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_hedc284c7__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_n
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[0U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hedc284c7__0;
    calculator__DOT__int_con__DOT____Vlvbound_hedc284c7__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_n
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[1U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hedc284c7__0;
    calculator__DOT__int_con__DOT____Vlvbound_hedc284c7__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_n
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[2U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hedc284c7__0;
    calculator__DOT__int_con__DOT____Vlvbound_hedc284c7__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_n
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[3U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hedc284c7__0;
    calculator__DOT__int_con__DOT____Vlvbound_hedc284c7__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_n
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[4U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hedc284c7__0;
    calculator__DOT__int_con__DOT____Vlvbound_hedc284c7__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_n
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[5U] 
        = calculator__DOT__int_con__DOT____Vlvbound_hedc284c7__0;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[7U] = 0ULL;
    calculator__DOT__int_con__DOT____Vlvbound_hedc284c7__0 = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[8U] = 0ULL;
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
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_a_n[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_b_n[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_ctrl_n[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_valid_n[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_a_e[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_b_e[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_ctrl_e[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_valid_e[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_a_s[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_b_s[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_ctrl_s[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_valid_s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_a_w[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_b_w[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_ctrl_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__out_valid_w[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__host_out_a[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__host_out_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_a_n[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_b_n[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_ctrl_n[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_valid_n[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_a_e[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_b_e[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_ctrl_e[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_valid_e[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_a_s[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_b_s[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_ctrl_s[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_valid_s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_a_w[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_b_w[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_ctrl_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__in_valid_w[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__host_in_a[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__host_in_b[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__host_in_ctrl[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__host_in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_a_n[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_b_n[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_ctrl_n[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_valid_n[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_a_e[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_b_e[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_ctrl_e[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_valid_e[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_a_s[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_b_s[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_ctrl_s[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_valid_s[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_a_w[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_b_w[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_ctrl_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_in_valid_w[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_host_in_a[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_host_in_b[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_host_in_ctrl[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->calculator__DOT__int_con__DOT__next_host_in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->calculator__DOT__int_con__DOT__is_busy = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT__next_is_busy = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_valid = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_a = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_s = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_s = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_e = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_e = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_w = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_w = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_w = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_w = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_s = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_s = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_e = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_e = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_w = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_w = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_w = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_w = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_s = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_s = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_e = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_e = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_s = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_s = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_e = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_e = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_n = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_n = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_n = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_n = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_w = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_w = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_w = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_w = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_s = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_s = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_e = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_e = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_n = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_n = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_n = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_n = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_w = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_w = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_w = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_w = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_s = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_s = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_e = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_e = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_n = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_n = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_n = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_n = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_s = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_s = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_e = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_e = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_n = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_n = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_n = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_n = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_w = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_w = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_w = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_w = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_s = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_s = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_e = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_e = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_n = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_n = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_n = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_n = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_w = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_w = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_w = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_w = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_s = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_s = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_s = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_e = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_e = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_e = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_n = VL_RAND_RESET_I(1);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_n = VL_RAND_RESET_I(16);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_n = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_n = VL_RAND_RESET_Q(64);
    vlSelf->calculator__DOT__int_con__DOT__unnamedblk4__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->calculator__DOT__int_con__DOT__unnamedblk5__DOT__i = VL_RAND_RESET_I(32);
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
    vlSelf->__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__64__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__64__dx = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__64__dy = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__64__md = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
