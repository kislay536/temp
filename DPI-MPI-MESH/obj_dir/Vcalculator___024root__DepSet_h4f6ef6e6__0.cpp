// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcalculator.h for the primary calling header

#include "Vcalculator__pch.h"
#include "Vcalculator___024root.h"

void Vcalculator___024root___ico_comb__TOP__0(Vcalculator___024root* vlSelf);

void Vcalculator___024root___eval_ico(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_ico\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1fULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcalculator___024root___ico_comb__TOP__0(vlSelf);
    }
}

void Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(IData/*31:0*/ TILE_X, IData/*31:0*/ TILE_Y, QData/*63:0*/ in_a_n, QData/*63:0*/ in_b_n, IData/*31:0*/ in_ctrl_n, CData/*0:0*/ in_valid_n, QData/*63:0*/ in_a_e, QData/*63:0*/ in_b_e, IData/*31:0*/ in_ctrl_e, CData/*0:0*/ in_valid_e, QData/*63:0*/ in_a_s, QData/*63:0*/ in_b_s, IData/*31:0*/ in_ctrl_s, CData/*0:0*/ in_valid_s, QData/*63:0*/ in_a_w, QData/*63:0*/ in_b_w, IData/*31:0*/ in_ctrl_w, CData/*0:0*/ in_valid_w, QData/*63:0*/ host_in_a, QData/*63:0*/ host_in_b, IData/*31:0*/ host_in_ctrl, CData/*0:0*/ host_in_valid, QData/*63:0*/ &out_a_n, QData/*63:0*/ &out_b_n, IData/*31:0*/ &out_ctrl_n, CData/*0:0*/ &out_valid_n, QData/*63:0*/ &out_a_e, QData/*63:0*/ &out_b_e, IData/*31:0*/ &out_ctrl_e, CData/*0:0*/ &out_valid_e, QData/*63:0*/ &out_a_s, QData/*63:0*/ &out_b_s, IData/*31:0*/ &out_ctrl_s, CData/*0:0*/ &out_valid_s, QData/*63:0*/ &out_a_w, QData/*63:0*/ &out_b_w, IData/*31:0*/ &out_ctrl_w, CData/*0:0*/ &out_valid_w, QData/*63:0*/ &host_out_a, CData/*0:0*/ &host_out_valid);

VL_INLINE_OPT void Vcalculator___024root___ico_comb__TOP__0(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___ico_comb__TOP__0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT__result_r = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__any = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [0U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [1U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [2U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [3U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [4U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [5U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [6U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [7U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [8U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if ((0U == vlSelfRef.calculator__DOT__int_con__DOT__any)) {
        vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__md 
            = vlSelfRef.mode;
        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[0U] 
            = vlSelfRef.a;
        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[0U] 
            = vlSelfRef.b;
        vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__dy 
            = (3U & VL_DIV_III(32, (IData)(vlSelfRef.mode), (IData)(3U)));
        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] = 1U;
        vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__dx 
            = (3U & VL_MODDIV_III(32, (IData)(vlSelfRef.mode), (IData)(3U)));
        vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__Vfuncout 
            = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__dx) 
                << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__dy) 
                           << 4U) | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__md)));
        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[0U] 
            = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__Vfuncout;
    }
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__idx_h = 0U;
    {
        while (VL_GTS_III(32, 0x14U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__idx_h)) {
            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some = 0U;
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [0U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [1U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [2U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [3U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [4U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [5U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [6U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [7U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [8U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if ((0U == vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some)) {
                goto __Vlabel1;
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [0U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [0U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 0U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 0U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [0U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [0U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [0U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [0U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [0U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [0U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [0U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [0U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [0U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [0U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [0U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [0U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [0U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [0U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [0U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [0U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [0U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [0U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [0U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [0U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [0U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [0U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [0U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [0U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [0U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[0U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[0U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[0U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [1U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [1U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 0U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [1U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [1U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [1U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [1U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [1U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [1U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [1U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [1U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [1U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [1U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [1U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [1U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [1U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [1U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [1U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [1U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [1U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [1U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [1U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [1U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [1U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [1U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [1U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [1U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [1U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[1U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[1U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[1U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [2U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [2U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 2U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 0U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [2U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [2U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [2U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [2U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [2U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [2U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [2U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [2U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [2U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [2U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [2U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [2U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [2U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [2U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [2U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [2U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [2U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [2U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [2U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [2U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [2U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [2U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [2U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [2U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [2U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[2U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[2U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[2U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [3U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [3U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 0U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 1U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [3U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [3U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [3U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [3U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [3U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [3U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [3U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [3U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [3U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [3U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [3U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [3U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [3U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [3U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [3U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [3U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [3U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [3U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [3U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [3U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [3U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [3U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [3U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [3U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [3U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[3U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[3U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[3U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [4U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [4U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 1U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [4U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [4U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [4U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [4U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [4U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [4U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [4U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [4U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [4U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [4U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [4U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [4U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [4U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [4U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [4U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [4U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [4U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [4U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [4U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [4U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [4U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [4U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [4U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [4U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [4U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[4U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[4U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[4U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [5U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [5U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 2U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 1U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [5U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [5U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [5U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [5U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [5U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [5U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [5U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [5U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [5U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [5U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [5U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [5U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [5U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [5U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [5U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [5U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [5U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [5U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [5U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [5U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [5U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [5U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [5U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [5U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [5U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[5U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[5U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[5U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [6U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [6U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 0U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 2U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [6U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [6U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [6U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [6U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [6U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [6U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [6U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [6U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [6U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [6U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [6U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [6U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [6U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [6U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [6U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [6U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [6U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [6U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [6U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [6U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [6U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [6U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [6U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [6U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [6U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[6U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[6U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[6U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [7U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [7U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 2U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [7U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [7U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [7U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [7U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [7U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [7U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [7U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [7U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [7U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [7U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [7U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [7U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [7U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [7U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [7U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [7U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [7U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [7U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [7U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [7U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [7U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [7U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [7U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [7U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [7U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[7U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[7U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[7U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [8U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [8U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 2U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 2U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [8U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [8U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [8U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [8U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [8U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [8U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [8U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [8U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [8U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [8U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [8U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [8U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [8U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [8U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [8U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [8U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [8U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [8U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [8U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [8U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [8U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [8U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [8U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [8U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [8U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[8U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[8U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[8U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__idx_h 
                = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__idx_h);
        }
        __Vlabel1: ;
    }
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.result = vlSelfRef.calculator__DOT__int_con__DOT__result_r;
    vlSelfRef.valid = vlSelfRef.calculator__DOT__int_con__DOT__valid_r;
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(0U, 0U, 0ULL, 0ULL, 0U, 0U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [3U], 0ULL, 0ULL, 0U, 0U, 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(1U, 0U, 0ULL, 0ULL, 0U, 0U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [2U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [2U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [2U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [2U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [0U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [0U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [0U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [0U], 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(2U, 0U, 0ULL, 0ULL, 0U, 0U, 0ULL, 0ULL, 0U, 0U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [1U], 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(0U, 1U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [0U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [0U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [0U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [0U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [6U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [6U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [6U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [6U], 0ULL, 0ULL, 0U, 0U, 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(1U, 1U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [3U], 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(2U, 1U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [2U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [2U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [2U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [2U], 0ULL, 0ULL, 0U, 0U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [8U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [8U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [8U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [8U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [4U], 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(0U, 2U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [7U], 0ULL, 0ULL, 0U, 0U, 0ULL, 0ULL, 0U, 0U, 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(1U, 2U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [8U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [8U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [8U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [8U], 0ULL, 0ULL, 0U, 0U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [6U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [6U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [6U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [6U], 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(2U, 2U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [5U], 0ULL, 0ULL, 0U, 0U, 0ULL, 0ULL, 0U, 0U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [7U], 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__host_out_valid);
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

void Vcalculator___024root___act_sequent__TOP__0(Vcalculator___024root* vlSelf);

void Vcalculator___024root___eval_act(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_act\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xfULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcalculator___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcalculator___024root___act_sequent__TOP__0(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___act_sequent__TOP__0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_a
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_b
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__in_valid
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__int_con__DOT__result_r = 0ULL;
    vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 0U;
    vlSelfRef.calculator__DOT__int_con__DOT__any = 0U;
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [0U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [1U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [2U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [3U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [4U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [5U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [6U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [7U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [8U]) {
        vlSelfRef.calculator__DOT__int_con__DOT__any 
            = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__any);
    }
    if ((0U == vlSelfRef.calculator__DOT__int_con__DOT__any)) {
        vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__md 
            = vlSelfRef.mode;
        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[0U] 
            = vlSelfRef.a;
        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[0U] 
            = vlSelfRef.b;
        vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__dy 
            = (3U & VL_DIV_III(32, (IData)(vlSelfRef.mode), (IData)(3U)));
        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] = 1U;
        vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__dx 
            = (3U & VL_MODDIV_III(32, (IData)(vlSelfRef.mode), (IData)(3U)));
        vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__Vfuncout 
            = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__dx) 
                << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__dy) 
                           << 4U) | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__md)));
        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[0U] 
            = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__192__Vfuncout;
    }
    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__idx_h = 0U;
    {
        while (VL_GTS_III(32, 0x14U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__idx_h)) {
            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some = 0U;
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [0U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [1U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [2U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [3U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [4U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [5U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [6U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [7U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [8U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if ((0U == vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some)) {
                goto __Vlabel2;
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [0U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [0U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 0U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 0U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [0U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [0U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [0U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [0U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [0U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [0U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [0U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [0U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [0U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [0U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [0U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [0U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [0U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [0U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [0U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [0U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [0U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [0U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [0U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [0U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [0U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [0U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [0U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [0U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [0U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[0U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[0U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[0U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [1U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [1U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 0U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [1U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [1U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [1U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [1U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [1U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [1U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [1U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [1U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [1U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [1U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [1U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [1U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [1U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [1U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [1U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [1U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [1U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [1U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [1U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [1U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [1U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [1U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [1U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [1U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [1U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[1U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[1U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[1U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [2U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [2U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 2U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 0U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [2U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [2U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [2U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [2U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [2U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [2U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [2U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [2U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [2U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [2U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [2U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [2U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [2U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [2U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [2U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [2U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [2U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [2U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [2U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [2U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [2U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [2U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [2U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [2U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [2U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[2U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[2U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[2U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [3U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [3U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 0U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 1U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [3U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [3U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [3U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [3U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [3U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [3U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [3U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [3U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [3U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [3U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [3U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [3U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [3U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [3U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [3U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [3U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [3U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [3U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [3U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [3U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [3U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [3U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [3U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [3U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [3U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[3U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[3U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[3U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [4U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [4U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 1U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [4U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [4U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [4U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [4U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [4U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [4U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [4U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [4U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [4U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [4U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [4U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [4U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [4U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [4U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [4U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [4U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [4U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [4U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [4U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [4U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [4U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [4U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [4U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [4U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [4U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[4U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[4U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[4U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [5U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [5U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 2U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 1U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [5U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [5U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [5U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [5U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [5U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [5U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [5U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [5U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [5U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [5U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [5U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [5U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [5U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [5U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [5U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [5U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [5U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [5U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [5U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [5U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [5U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [5U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [5U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [5U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [5U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[5U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[5U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[5U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [6U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [6U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 0U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 2U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [6U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [6U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [6U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [6U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [6U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [6U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [6U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [6U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [6U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [6U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [6U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [6U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [6U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [6U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [6U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [6U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [6U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [6U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [6U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [6U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [6U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [6U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [6U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [6U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [6U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[6U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[6U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[6U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [7U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [7U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 1U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 2U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [7U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [7U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [7U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [7U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [7U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [7U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [7U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [7U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [7U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [7U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [7U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [7U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [7U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [7U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [7U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [7U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [7U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [7U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [7U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [7U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [7U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [7U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [7U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [7U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [7U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[7U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[7U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[7U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                [8U]) {
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                    [8U];
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 2U;
                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 2U;
                if (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [8U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [8U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [8U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                [8U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                [8U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                                [8U];
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__int_con__DOT__result_r 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                            [8U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                       [8U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [8U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                            [8U])))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [8U] ^ vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [8U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [8U] | vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [8U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [8U] 
                                                 & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [8U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                            [8U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                         [8U], 
                                                         vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                         [8U]))
                                        : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                           [8U] * vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                           [8U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                        [8U] - vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                        [8U]) : (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                                                 [8U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                                                 [8U])))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[8U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[8U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__int_con__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[8U] 
                        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__idx_h 
                = ((IData)(1U) + vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__idx_h);
        }
        __Vlabel2: ;
    }
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [0U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[0U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [1U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[1U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [2U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[2U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [3U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[3U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [4U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[4U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [5U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[5U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [6U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[6U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [7U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[7U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_a
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_a[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h66b3d563__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_b
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_b[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h86262c3c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_ctrl
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_h1676912c__0;
    vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0 
        = vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk2__DOT__tmp_valid
        [8U];
    vlSelfRef.calculator__DOT__int_con__DOT__in_valid[8U] 
        = vlSelfRef.calculator__DOT__int_con__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.result = vlSelfRef.calculator__DOT__int_con__DOT__result_r;
    vlSelfRef.valid = vlSelfRef.calculator__DOT__int_con__DOT__valid_r;
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(0U, 0U, 0ULL, 0ULL, 0U, 0U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [3U], 0ULL, 0ULL, 0U, 0U, 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile__194__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(1U, 0U, 0ULL, 0ULL, 0U, 0U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [2U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [2U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [2U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [2U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [0U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [0U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [0U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [0U], 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_1__DOT__dpi_tile__195__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(2U, 0U, 0ULL, 0ULL, 0U, 0U, 0ULL, 0ULL, 0U, 0U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [1U], 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t0_2__DOT__dpi_tile__196__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(0U, 1U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [0U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [0U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [0U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [0U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [6U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [6U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [6U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [6U], 0ULL, 0ULL, 0U, 0U, 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_0__DOT__dpi_tile__197__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(1U, 1U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [1U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [3U], 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_1__DOT__dpi_tile__198__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(2U, 1U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [2U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [2U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [2U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [2U], 0ULL, 0ULL, 0U, 0U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [8U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [8U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [8U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [8U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [4U], 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t1_2__DOT__dpi_tile__199__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(0U, 2U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [3U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [7U], 0ULL, 0ULL, 0U, 0U, 0ULL, 0ULL, 0U, 0U, 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_0__DOT__dpi_tile__200__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(1U, 2U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [4U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [8U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [8U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [8U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [8U], 0ULL, 0ULL, 0U, 0U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [6U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [6U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [6U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [6U], 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_1__DOT__dpi_tile__201__host_out_valid);
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(2U, 2U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [5U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [5U], 0ULL, 0ULL, 0U, 0U, 0ULL, 0ULL, 0U, 0U, 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_a
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_b
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl
                                                                                [7U], 
                                                                                vlSelfRef.calculator__DOT__int_con__DOT__in_valid
                                                                                [7U], 0ULL, 0ULL, 0U, 0U, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_a_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_b_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_ctrl_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_valid_n, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_a_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_b_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_ctrl_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_valid_e, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_a_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_b_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_ctrl_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_valid_s, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_a_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_b_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_ctrl_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__out_valid_w, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__host_out_a, vlSelfRef.__Vtask_calculator__DOT__int_con__DOT__t2_2__DOT__dpi_tile__202__host_out_valid);
}

void Vcalculator___024root___eval_nba(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_nba\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcalculator___024root___eval_triggers__act(Vcalculator___024root* vlSelf);

bool Vcalculator___024root___eval_phase__act(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_phase__act\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
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
            VL_FATAL_MT("calculator.v", 1, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("calculator.v", 1, "", "NBA region did not converge.");
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
                VL_FATAL_MT("calculator.v", 1, "", "Active region did not converge.");
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
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xf0U)))) {
        Verilated::overWidthError("mode");}
}
#endif  // VL_DEBUG
