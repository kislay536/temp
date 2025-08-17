// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcalculator.h for the primary calling header

#include "Vcalculator__pch.h"
#include "Vcalculator___024root.h"

void Vcalculator___024root___ico_sequent__TOP__0(Vcalculator___024root* vlSelf);

void Vcalculator___024root___eval_ico(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_ico\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcalculator___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vcalculator___024root___ico_sequent__TOP__0(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___ico_sequent__TOP__0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
            vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[0U] 
                = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__Vfuncout;
        }
    }
}

void Vcalculator___024root___eval_triggers__ico(Vcalculator___024root* vlSelf);

bool Vcalculator___024root___eval_phase__ico(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_phase__ico\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcalculator___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcalculator___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcalculator___024root___eval_act(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_act\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcalculator___024root___nba_sequent__TOP__0(Vcalculator___024root* vlSelf);

void Vcalculator___024root___eval_nba(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_nba\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcalculator___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vcalculator___024root___nba_sequent__TOP__0(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___nba_sequent__TOP__0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v0 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v1 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v2 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v3 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v4 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v5 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v6 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v7 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v8 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v0 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v1 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v2 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v3 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v4 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v5 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v6 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v7 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v8 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v0 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v1 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v2 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v3 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v4 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v5 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v6 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v7 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v8 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v0 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v1 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v2 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v3 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v4 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v5 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v6 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v7 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v8 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v0 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v1 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v2 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v3 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v4 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v5 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v6 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v7 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v8 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v0 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v1 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v2 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v3 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v4 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v5 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v6 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v7 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v8 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v0 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v1 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v2 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v3 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v4 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v5 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v6 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v7 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v8 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v0 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v1 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v2 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v3 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v4 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v5 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v6 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v7 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v8 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v0 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v1 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v2 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v3 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v4 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v5 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v6 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v7 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v8 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v0 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v1 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v2 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v3 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v4 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v5 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v6 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v7 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v8 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v0 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v1 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v2 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v3 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v4 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v5 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v6 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v7 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v8 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v0 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v1 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v2 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v3 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v4 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v5 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v6 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v7 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v8 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v0 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v1 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v2 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v3 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v4 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v5 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v6 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v7 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v8 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v0 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v1 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v2 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v3 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v4 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v5 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v6 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v7 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v8 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v0 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v1 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v2 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v3 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v4 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v5 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v6 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v7 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v8 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v0 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v1 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v2 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v3 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v4 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v5 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v6 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v7 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v8 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v0 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v1 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v2 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v3 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v4 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v5 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v6 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v7 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v8 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v0 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v1 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v2 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v3 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v4 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v5 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v6 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v7 = 0;
    QData/*63:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v8 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v0 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v1 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v2 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v3 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v4 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v5 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v6 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v7 = 0;
    SData/*15:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v8 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v0;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v0 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v1;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v1 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v2;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v2 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v3;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v3 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v4;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v4 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v5;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v5 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v6;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v6 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v7;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v7 = 0;
    CData/*0:0*/ __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v8;
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v8 = 0;
    // Body
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w
        [8U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v0 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid
        [0U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v1 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid
        [1U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v2 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid
        [2U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v3 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid
        [3U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v4 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid
        [4U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v5 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid
        [5U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v6 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid
        [6U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v7 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid
        [7U];
    __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v8 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__is_busy 
        = vlSelfRef.calculator__DOT__int_con__DOT__next_is_busy;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_s__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_e__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_n__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_b_w__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_b__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_s__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_e__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_n__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_a_w__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_a__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_s__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_e__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_n__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_ctrl_w__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_ctrl__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_s__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_e__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_n__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__in_valid_w__v8;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[0U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v0;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[1U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v1;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[2U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v2;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[3U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v3;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[4U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v4;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[5U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v5;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[6U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v6;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[7U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v7;
    vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[8U] 
        = __VdlyVal__calculator__DOT__int_con__DOT__host_in_valid__v8;
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
            vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[0U] 
                = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__Vfuncout;
        }
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
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[7U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[5U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[5U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_n
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_n
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_n
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_n
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_n
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_n
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[7U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_w
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_w
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_w
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_w
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[5U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_w
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_w
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[7U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[8U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[1U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[2U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[0U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[3U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[6U] = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_s
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_s
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_s
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_s
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_s
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_s
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[1U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_s
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_s
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_s
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_s
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_s
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_s
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_e
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_e
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_e
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_e
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_e
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_b_e
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[0U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_e
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_e
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[3U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_e
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_e
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_e
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_e
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_n;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_w
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_w
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[2U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_w
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_w
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[5U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_w
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_w
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[8U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_n
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_n
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_n
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_n
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_n
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT__out_a_n
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[6U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[7U] = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[8U] = 0ULL;
}

void Vcalculator___024root___eval_triggers__act(Vcalculator___024root* vlSelf);

bool Vcalculator___024root___eval_phase__act(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_phase__act\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcalculator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcalculator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcalculator___024root___eval_phase__nba(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_phase__nba\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcalculator___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalculator___024root___dump_triggers__ico(Vcalculator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalculator___024root___dump_triggers__nba(Vcalculator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalculator___024root___dump_triggers__act(Vcalculator___024root* vlSelf);
#endif  // VL_DEBUG

void Vcalculator___024root___eval(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcalculator___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("calculator.v", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcalculator___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcalculator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("calculator.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcalculator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("calculator.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcalculator___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcalculator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcalculator___024root___eval_debug_assertions(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_debug_assertions\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xf0U)))) {
        Verilated::overWidthError("mode");}
}
#endif  // VL_DEBUG
