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
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vcalculator___024root___ico_comb__TOP__0(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___ico_comb__TOP__0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = 0;
    QData/*63:0*/ calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = 0;
    SData/*15:0*/ calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_hd281a793__0 = 0;
    CData/*0:0*/ calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = 0;
    QData/*63:0*/ calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = 0;
    QData/*63:0*/ calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = 0;
    SData/*15:0*/ calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = 0;
    CData/*0:0*/ calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = 0;
    // Body
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [0U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[0U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [0U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[0U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [0U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[0U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [0U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [1U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[1U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [1U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[1U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [1U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[1U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [1U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [2U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[2U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [2U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[2U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [2U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[2U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [2U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [3U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[3U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [3U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[3U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [3U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[3U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [3U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [4U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[4U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [4U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[4U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [4U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[4U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [4U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [5U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[5U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [5U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[5U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [5U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[5U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [5U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [6U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[6U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [6U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[6U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [6U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[6U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [6U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [7U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[7U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [7U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[7U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [7U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[7U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [7U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [8U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[8U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [8U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[8U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [8U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[8U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [8U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__result_r = 0ULL;
    vlSelfRef.calculator__DOT__valid_r = 0U;
    vlSelfRef.calculator__DOT__any = 0U;
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [0U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [1U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [2U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [3U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [4U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [5U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [6U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [7U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [8U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 9U;
    if ((0U == vlSelfRef.calculator__DOT__any)) {
        vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__md 
            = vlSelfRef.mode;
        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[0U] 
            = vlSelfRef.a;
        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[0U] 
            = vlSelfRef.b;
        vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__dy 
            = (3U & VL_DIV_III(32, (IData)(vlSelfRef.mode), (IData)(3U)));
        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] = 1U;
        vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__dx 
            = (3U & VL_MODDIV_III(32, (IData)(vlSelfRef.mode), (IData)(3U)));
        vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__Vfuncout 
            = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__dx) 
                << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__dy) 
                           << 4U) | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__md)));
        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[0U] 
            = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__Vfuncout;
    }
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__idx_h = 0U;
    {
        while (VL_GTS_III(32, 0x14U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__idx_h)) {
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some = 0U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 1U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [0U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 2U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [1U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 3U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [2U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 4U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [3U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 5U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [4U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 6U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [5U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 7U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [6U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 8U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [7U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 9U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [8U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if ((0U == vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some)) {
                goto __Vlabel1;
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [0U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [0U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 0U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 0U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [0U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [0U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [0U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [0U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [0U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [0U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [0U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [0U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [0U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [0U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [0U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [0U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [0U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [0U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [0U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [0U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [0U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [0U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [0U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [0U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [0U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [0U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [0U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [0U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [0U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[0U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[0U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[0U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [1U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [1U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 1U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 0U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [1U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [1U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [1U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [1U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [1U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [1U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [1U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [1U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [1U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [1U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [1U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [1U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [1U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [1U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [1U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [1U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [1U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [1U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [1U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [1U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [1U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [1U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [1U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [1U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [1U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[1U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[1U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[1U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [2U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [2U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 2U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 0U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [2U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [2U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [2U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [2U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [2U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [2U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [2U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [2U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [2U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [2U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [2U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [2U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [2U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [2U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [2U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [2U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [2U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [2U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [2U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [2U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [2U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [2U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [2U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [2U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [2U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[2U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[2U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[2U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [3U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [3U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 0U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 1U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [3U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [3U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [3U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [3U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [3U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [3U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [3U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [3U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [3U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [3U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [3U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [3U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [3U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [3U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [3U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [3U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [3U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [3U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [3U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [3U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [3U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [3U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [3U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [3U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [3U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[3U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[3U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[3U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [4U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [4U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 1U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 1U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [4U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [4U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [4U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [4U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [4U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [4U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [4U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [4U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [4U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [4U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [4U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [4U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [4U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [4U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [4U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [4U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [4U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [4U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [4U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [4U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [4U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [4U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [4U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [4U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [4U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[4U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[4U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[4U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [5U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [5U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 2U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 1U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [5U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [5U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [5U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [5U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [5U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [5U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [5U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [5U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [5U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [5U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [5U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [5U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [5U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [5U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [5U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [5U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [5U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [5U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [5U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [5U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [5U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [5U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [5U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [5U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [5U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[5U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[5U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[5U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [6U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [6U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 0U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 2U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [6U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [6U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [6U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [6U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [6U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [6U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [6U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [6U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [6U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [6U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [6U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [6U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [6U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [6U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [6U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [6U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [6U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [6U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [6U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [6U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [6U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [6U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [6U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [6U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [6U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[6U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[6U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[6U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [7U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [7U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 1U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 2U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [7U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [7U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [7U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [7U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [7U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [7U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [7U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [7U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [7U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [7U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [7U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [7U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [7U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [7U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [7U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [7U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [7U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [7U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [7U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [7U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [7U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [7U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [7U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [7U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [7U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[7U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[7U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[7U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [8U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [8U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 2U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 2U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [8U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [8U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [8U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [8U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [8U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [8U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [8U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [8U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [8U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [8U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [8U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [8U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [8U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [8U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [8U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [8U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [8U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [8U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [8U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [8U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [8U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [8U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [8U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [8U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [8U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[8U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[8U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[8U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 1U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 2U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 3U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 4U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 5U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 6U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 7U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 8U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 9U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__idx_h 
                = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__idx_h);
        }
        __Vlabel1: ;
    }
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [0U];
    vlSelfRef.calculator__DOT__in_a[0U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [0U];
    vlSelfRef.calculator__DOT__in_b[0U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [0U];
    vlSelfRef.calculator__DOT__in_ctrl[0U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [0U];
    vlSelfRef.calculator__DOT__in_valid[0U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [1U];
    vlSelfRef.calculator__DOT__in_a[1U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [1U];
    vlSelfRef.calculator__DOT__in_b[1U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [1U];
    vlSelfRef.calculator__DOT__in_ctrl[1U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [1U];
    vlSelfRef.calculator__DOT__in_valid[1U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [2U];
    vlSelfRef.calculator__DOT__in_a[2U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [2U];
    vlSelfRef.calculator__DOT__in_b[2U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [2U];
    vlSelfRef.calculator__DOT__in_ctrl[2U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [2U];
    vlSelfRef.calculator__DOT__in_valid[2U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [3U];
    vlSelfRef.calculator__DOT__in_a[3U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [3U];
    vlSelfRef.calculator__DOT__in_b[3U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [3U];
    vlSelfRef.calculator__DOT__in_ctrl[3U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [3U];
    vlSelfRef.calculator__DOT__in_valid[3U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [4U];
    vlSelfRef.calculator__DOT__in_a[4U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [4U];
    vlSelfRef.calculator__DOT__in_b[4U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [4U];
    vlSelfRef.calculator__DOT__in_ctrl[4U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [4U];
    vlSelfRef.calculator__DOT__in_valid[4U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [5U];
    vlSelfRef.calculator__DOT__in_a[5U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [5U];
    vlSelfRef.calculator__DOT__in_b[5U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [5U];
    vlSelfRef.calculator__DOT__in_ctrl[5U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [5U];
    vlSelfRef.calculator__DOT__in_valid[5U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [6U];
    vlSelfRef.calculator__DOT__in_a[6U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [6U];
    vlSelfRef.calculator__DOT__in_b[6U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [6U];
    vlSelfRef.calculator__DOT__in_ctrl[6U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [6U];
    vlSelfRef.calculator__DOT__in_valid[6U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [7U];
    vlSelfRef.calculator__DOT__in_a[7U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [7U];
    vlSelfRef.calculator__DOT__in_b[7U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [7U];
    vlSelfRef.calculator__DOT__in_ctrl[7U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [7U];
    vlSelfRef.calculator__DOT__in_valid[7U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [8U];
    vlSelfRef.calculator__DOT__in_a[8U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [8U];
    vlSelfRef.calculator__DOT__in_b[8U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [8U];
    vlSelfRef.calculator__DOT__in_ctrl[8U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [8U];
    vlSelfRef.calculator__DOT__in_valid[8U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 9U;
    vlSelfRef.result = vlSelfRef.calculator__DOT__result_r;
    vlSelfRef.valid = vlSelfRef.calculator__DOT__valid_r;
    vlSelfRef.calculator__DOT__t0_0__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t0_0__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t0_1__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t0_2__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t1_0__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t2_0__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t0_1__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t0_2__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t1_0__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t2_0__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t1_1__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t1_2__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t2_1__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t2_2__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t1_1__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t1_2__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t2_1__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t2_2__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl = 0U;
    vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl = 0U;
    vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl = 0U;
    vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__in_valid[0U]) {
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[0U];
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[0U];
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[0U];
    } else if (vlSelfRef.calculator__DOT__in_valid[4U]) {
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[4U];
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[4U];
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[4U];
    } else if (vlSelfRef.calculator__DOT__in_valid[6U]) {
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[6U];
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[6U];
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[6U];
    }
    vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__in_valid[3U]) {
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[3U];
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[3U];
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[3U];
    } else if (vlSelfRef.calculator__DOT__in_valid[7U]) {
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[7U];
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[7U];
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[7U];
    }
    vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__in_valid[1U]) {
        vlSelfRef.calculator__DOT__t0_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[1U];
        vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[1U];
        vlSelfRef.calculator__DOT__t1_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[1U];
        vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[1U];
        vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[1U];
        vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[1U];
    } else {
        if (vlSelfRef.calculator__DOT__in_valid[3U]) {
            vlSelfRef.calculator__DOT__t0_0__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[3U];
            vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[3U];
            vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [3U];
        }
        if (vlSelfRef.calculator__DOT__in_valid[5U]) {
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[5U];
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[5U];
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [5U];
        } else if (vlSelfRef.calculator__DOT__in_valid
                   [7U]) {
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[7U];
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[7U];
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [7U];
        } else if (vlSelfRef.calculator__DOT__in_valid
                   [3U]) {
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[3U];
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[3U];
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [3U];
        }
    }
    vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__in_valid[2U]) {
        vlSelfRef.calculator__DOT__t0_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[2U];
        vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[2U];
        vlSelfRef.calculator__DOT__t1_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[2U];
        vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[2U];
        vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[2U];
        vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[2U];
    } else {
        if (vlSelfRef.calculator__DOT__in_valid[4U]) {
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[4U];
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[4U];
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [4U];
        } else if (vlSelfRef.calculator__DOT__in_valid
                   [0U]) {
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[0U];
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[0U];
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [0U];
        }
        if (vlSelfRef.calculator__DOT__in_valid[8U]) {
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[8U];
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[8U];
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [8U];
        } else if (vlSelfRef.calculator__DOT__in_valid
                   [4U]) {
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[4U];
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[4U];
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [4U];
        }
    }
    vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__in_valid[4U]) {
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[4U];
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[4U];
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[4U];
    } else if (vlSelfRef.calculator__DOT__in_valid[8U]) {
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[8U];
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[8U];
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[8U];
    } else if (vlSelfRef.calculator__DOT__in_valid[6U]) {
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[6U];
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[6U];
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[6U];
    }
    vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__in_valid[5U]) {
        vlSelfRef.calculator__DOT__t0_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[5U];
        vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[5U];
        vlSelfRef.calculator__DOT__t2_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[5U];
        vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[5U];
        vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[5U];
        vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[5U];
    } else {
        if (vlSelfRef.calculator__DOT__in_valid[1U]) {
            vlSelfRef.calculator__DOT__t0_2__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[1U];
            vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[1U];
            vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [1U];
        }
        if (vlSelfRef.calculator__DOT__in_valid[7U]) {
            vlSelfRef.calculator__DOT__t2_2__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[7U];
            vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[7U];
            vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [7U];
        }
    }
    vlSelfRef.calculator__DOT__t0_0__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid) 
         & (IData)((0U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t0_1__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid) 
         & (IData)((0x40U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t0_2__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid) 
         & (IData)((0x80U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t1_0__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid) 
         & (IData)((0x10U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t2_0__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid) 
         & (IData)((0x20U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t1_1__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid) 
         & (IData)((0x50U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t1_2__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid) 
         & (IData)((0x90U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t2_1__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid) 
         & (IData)((0x60U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t2_2__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid) 
         & (IData)((0xa0U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_valid = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t0_0__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t0_1__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t0_2__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t1_0__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t2_0__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t1_1__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t1_2__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t2_1__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t2_2__DOT__op_result = 0ULL;
    if (vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid) {
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl) 
                      >> 8U)))) {
            if (vlSelfRef.calculator__DOT__t0_0__DOT__am_dest) {
                vlSelfRef.calculator__DOT__t0_0__DOT__unnamedblk1__DOT__resp_ctrl 
                    = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl)));
            }
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__am_dest)))) {
                if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_s 
                        = vlSelfRef.calculator__DOT__t0_0__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_s 
                        = vlSelfRef.calculator__DOT__t0_0__DOT__sel_a;
                }
                if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl) 
                                     >> 6U)))) {
                        vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_e = 1U;
                        vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_e 
                            = vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl;
                        vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_e 
                            = vlSelfRef.calculator__DOT__t0_0__DOT__sel_b;
                        vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_e 
                            = vlSelfRef.calculator__DOT__t0_0__DOT__sel_a;
                    }
                }
            }
        }
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_valid = 1U;
        } else if (vlSelfRef.calculator__DOT__t0_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_valid = 1U;
        }
        vlSelfRef.calculator__DOT__host_out_valid[0U] 
            = vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_valid;
        vlSelfRef.calculator__DOT__out_valid_s[0U] 
            = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_s;
        vlSelfRef.calculator__DOT__out_ctrl_s[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_s;
        vlSelfRef.calculator__DOT__out_valid_e[0U] 
            = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_e;
        vlSelfRef.calculator__DOT__out_ctrl_e[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_e;
        vlSelfRef.calculator__DOT__out_b_s[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_s;
        vlSelfRef.calculator__DOT__out_a_s[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_s;
        vlSelfRef.calculator__DOT__out_b_e[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_e;
    } else {
        vlSelfRef.calculator__DOT__host_out_valid[0U] 
            = vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_valid;
        vlSelfRef.calculator__DOT__out_valid_s[0U] 
            = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_s;
        vlSelfRef.calculator__DOT__out_ctrl_s[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_s;
        vlSelfRef.calculator__DOT__out_valid_e[0U] 
            = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_e;
        vlSelfRef.calculator__DOT__out_ctrl_e[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_e;
        vlSelfRef.calculator__DOT__out_b_s[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_s;
        vlSelfRef.calculator__DOT__out_a_s[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_s;
        vlSelfRef.calculator__DOT__out_b_e[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_e;
    }
    vlSelfRef.calculator__DOT__out_a_e[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_e;
    if ((((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t0_0__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t0_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t0_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t0_0__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t0_0__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t0_0__DOT__sel_a, vlSelfRef.calculator__DOT__t0_0__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t0_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t0_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t0_0__DOT__sel_b)))));
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t0_1__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t0_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t0_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t0_1__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t0_1__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t0_1__DOT__sel_a, vlSelfRef.calculator__DOT__t0_1__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t0_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t0_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t0_1__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_w = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_w 
                = vlSelfRef.calculator__DOT__t0_1__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_w 
                = vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t0_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_w = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_w = 0ULL;
            vlSelfRef.calculator__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_w 
                = vlSelfRef.calculator__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_w = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_w 
                        = vlSelfRef.calculator__DOT__t0_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_w 
                        = vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__am_dest)))) {
                if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_s 
                        = vlSelfRef.calculator__DOT__t0_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_s 
                        = vlSelfRef.calculator__DOT__t0_1__DOT__sel_a;
                }
                if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                     >> 6U)))) {
                        vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_e = 1U;
                        vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_e 
                            = vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl;
                        vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_e 
                            = vlSelfRef.calculator__DOT__t0_1__DOT__sel_b;
                        vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_e 
                            = vlSelfRef.calculator__DOT__t0_1__DOT__sel_a;
                    }
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t0_2__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t0_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t0_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t0_2__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t0_2__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t0_2__DOT__sel_a, vlSelfRef.calculator__DOT__t0_2__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t0_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t0_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t0_2__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_w = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_w 
                = vlSelfRef.calculator__DOT__t0_2__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_w 
                = vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t0_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_w = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_w = 0ULL;
            vlSelfRef.calculator__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_w 
                = vlSelfRef.calculator__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_w = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_w 
                        = vlSelfRef.calculator__DOT__t0_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_w 
                        = vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__am_dest)))) {
                if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_s 
                        = vlSelfRef.calculator__DOT__t0_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_s 
                        = vlSelfRef.calculator__DOT__t0_2__DOT__sel_a;
                }
                if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                     >> 6U)))) {
                        vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_e = 1U;
                        vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_e 
                            = vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl;
                        vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_e 
                            = vlSelfRef.calculator__DOT__t0_2__DOT__sel_b;
                        vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_e 
                            = vlSelfRef.calculator__DOT__t0_2__DOT__sel_a;
                    }
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t1_0__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t1_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t1_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t1_0__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t1_0__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t1_0__DOT__sel_a, vlSelfRef.calculator__DOT__t1_0__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t1_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t1_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t1_0__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_n 
                = vlSelfRef.calculator__DOT__t1_0__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t1_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_n = 1U;
                vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_n 
                    = vlSelfRef.calculator__DOT__t1_0__DOT__sel_b;
                vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__am_dest)))) {
                if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_s 
                        = vlSelfRef.calculator__DOT__t1_0__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_s 
                        = vlSelfRef.calculator__DOT__t1_0__DOT__sel_a;
                }
                if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U <= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_e 
                                = vlSelfRef.calculator__DOT__t1_0__DOT__sel_b;
                            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_e 
                                = vlSelfRef.calculator__DOT__t1_0__DOT__sel_a;
                        }
                    }
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t2_0__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t2_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t2_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t2_0__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t2_0__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t2_0__DOT__sel_a, vlSelfRef.calculator__DOT__t2_0__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t2_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t2_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t2_0__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_n 
                = vlSelfRef.calculator__DOT__t2_0__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t2_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_n = 1U;
                vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_n 
                    = vlSelfRef.calculator__DOT__t2_0__DOT__sel_b;
                vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__am_dest)))) {
                if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_s 
                        = vlSelfRef.calculator__DOT__t2_0__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_s 
                        = vlSelfRef.calculator__DOT__t2_0__DOT__sel_a;
                }
                if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U <= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_e 
                                = vlSelfRef.calculator__DOT__t2_0__DOT__sel_b;
                            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_e 
                                = vlSelfRef.calculator__DOT__t2_0__DOT__sel_a;
                        }
                    }
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t1_1__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t1_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t1_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t1_1__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t1_1__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t1_1__DOT__sel_a, vlSelfRef.calculator__DOT__t1_1__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t1_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t1_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t1_1__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_n 
                = vlSelfRef.calculator__DOT__t1_1__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t1_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_n = 1U;
                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_n 
                    = vlSelfRef.calculator__DOT__t1_1__DOT__sel_b;
                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__am_dest)))) {
                if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U <= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_w 
                                    = vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_w = 1U;
                                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_w 
                                    = vlSelfRef.calculator__DOT__t1_1__DOT__sel_a;
                                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_w 
                                    = vlSelfRef.calculator__DOT__t1_1__DOT__sel_b;
                            }
                        }
                        if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_e 
                                = vlSelfRef.calculator__DOT__t1_1__DOT__sel_b;
                            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_e 
                                = vlSelfRef.calculator__DOT__t1_1__DOT__sel_a;
                        }
                    }
                }
                if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_s 
                        = vlSelfRef.calculator__DOT__t1_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_s 
                        = vlSelfRef.calculator__DOT__t1_1__DOT__sel_a;
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t1_2__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t1_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t1_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t1_2__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t1_2__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t1_2__DOT__sel_a, vlSelfRef.calculator__DOT__t1_2__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t1_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t1_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t1_2__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_n 
                = vlSelfRef.calculator__DOT__t1_2__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t1_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_n = 1U;
                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_n 
                    = vlSelfRef.calculator__DOT__t1_2__DOT__sel_b;
                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__am_dest)))) {
                if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U <= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_w 
                                    = vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_w = 1U;
                                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_w 
                                    = vlSelfRef.calculator__DOT__t1_2__DOT__sel_a;
                                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_w 
                                    = vlSelfRef.calculator__DOT__t1_2__DOT__sel_b;
                            }
                        }
                        if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_e 
                                = vlSelfRef.calculator__DOT__t1_2__DOT__sel_b;
                            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_e 
                                = vlSelfRef.calculator__DOT__t1_2__DOT__sel_a;
                        }
                    }
                }
                if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_s 
                        = vlSelfRef.calculator__DOT__t1_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_s 
                        = vlSelfRef.calculator__DOT__t1_2__DOT__sel_a;
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t2_1__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t2_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t2_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t2_1__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t2_1__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t2_1__DOT__sel_a, vlSelfRef.calculator__DOT__t2_1__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t2_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t2_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t2_1__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_n 
                = vlSelfRef.calculator__DOT__t2_1__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t2_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_n = 1U;
                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_n 
                    = vlSelfRef.calculator__DOT__t2_1__DOT__sel_b;
                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__am_dest)))) {
                if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U <= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_w 
                                    = vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_w = 1U;
                                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_w 
                                    = vlSelfRef.calculator__DOT__t2_1__DOT__sel_a;
                                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_w 
                                    = vlSelfRef.calculator__DOT__t2_1__DOT__sel_b;
                            }
                        }
                        if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_e 
                                = vlSelfRef.calculator__DOT__t2_1__DOT__sel_b;
                            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_e 
                                = vlSelfRef.calculator__DOT__t2_1__DOT__sel_a;
                        }
                    }
                }
                if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_s 
                        = vlSelfRef.calculator__DOT__t2_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_s 
                        = vlSelfRef.calculator__DOT__t2_1__DOT__sel_a;
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t2_2__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t2_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t2_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t2_2__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t2_2__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t2_2__DOT__sel_a, vlSelfRef.calculator__DOT__t2_2__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t2_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t2_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t2_2__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_n 
                = vlSelfRef.calculator__DOT__t2_2__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t2_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_n = 1U;
                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_n 
                    = vlSelfRef.calculator__DOT__t2_2__DOT__sel_b;
                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__am_dest)))) {
                if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U <= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_w 
                                    = vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_w = 1U;
                                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_w 
                                    = vlSelfRef.calculator__DOT__t2_2__DOT__sel_a;
                                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_w 
                                    = vlSelfRef.calculator__DOT__t2_2__DOT__sel_b;
                            }
                        }
                        if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_e 
                                = vlSelfRef.calculator__DOT__t2_2__DOT__sel_b;
                            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_e 
                                = vlSelfRef.calculator__DOT__t2_2__DOT__sel_a;
                        }
                    }
                }
                if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_s 
                        = vlSelfRef.calculator__DOT__t2_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_s 
                        = vlSelfRef.calculator__DOT__t2_2__DOT__sel_a;
                }
            }
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(0,0): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t0_0__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t0_0__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t0_0__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_a = 0ULL;
    if (vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_a 
                = vlSelfRef.calculator__DOT__t0_0__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t0_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_a 
                = vlSelfRef.calculator__DOT__t0_0__DOT__op_result;
        }
    }
    vlSelfRef.calculator__DOT__out_valid_w[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_w;
    vlSelfRef.calculator__DOT__out_b_w[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_w;
    vlSelfRef.calculator__DOT__out_ctrl_w[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_w;
    vlSelfRef.calculator__DOT__out_valid_s[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(1,0): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t0_1__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t0_1__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t0_1__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_w = 0ULL;
    if (vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_w 
                = vlSelfRef.calculator__DOT__t0_1__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t0_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_w 
                = vlSelfRef.calculator__DOT__t0_1__DOT__op_result;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_w 
                        = vlSelfRef.calculator__DOT__t0_1__DOT__sel_a;
                }
            }
        }
    }
    vlSelfRef.calculator__DOT__out_valid_w[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_w;
    vlSelfRef.calculator__DOT__out_b_w[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_w;
    vlSelfRef.calculator__DOT__out_ctrl_w[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_w;
    vlSelfRef.calculator__DOT__out_valid_s[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(2,0): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t0_2__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t0_2__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t0_2__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_w = 0ULL;
    if (vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_w 
                = vlSelfRef.calculator__DOT__t0_2__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t0_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_w 
                = vlSelfRef.calculator__DOT__t0_2__DOT__op_result;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_w 
                        = vlSelfRef.calculator__DOT__t0_2__DOT__sel_a;
                }
            }
        }
    }
    vlSelfRef.calculator__DOT__out_valid_n[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_n;
    vlSelfRef.calculator__DOT__out_b_n[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_n;
    vlSelfRef.calculator__DOT__out_ctrl_n[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_n;
    vlSelfRef.calculator__DOT__out_valid_s[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(0,1): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t1_0__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t1_0__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t1_0__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_n 
                = vlSelfRef.calculator__DOT__t1_0__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t1_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_n 
                = vlSelfRef.calculator__DOT__t1_0__DOT__op_result;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_n 
                    = vlSelfRef.calculator__DOT__t1_0__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__out_valid_n[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_n;
    vlSelfRef.calculator__DOT__out_b_n[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_n;
    vlSelfRef.calculator__DOT__out_ctrl_n[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_n;
    vlSelfRef.calculator__DOT__out_valid_s[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(0,2): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t2_0__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t2_0__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t2_0__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_n 
                = vlSelfRef.calculator__DOT__t2_0__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t2_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_n 
                = vlSelfRef.calculator__DOT__t2_0__DOT__op_result;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_n 
                    = vlSelfRef.calculator__DOT__t2_0__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__out_valid_n[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_n;
    vlSelfRef.calculator__DOT__out_ctrl_w[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_w;
    vlSelfRef.calculator__DOT__out_valid_w[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_w;
    vlSelfRef.calculator__DOT__out_a_w[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_w;
    vlSelfRef.calculator__DOT__out_b_n[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_n;
    vlSelfRef.calculator__DOT__out_b_w[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_w;
    vlSelfRef.calculator__DOT__out_ctrl_n[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_n;
    vlSelfRef.calculator__DOT__out_valid_s[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(1,1): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t1_1__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t1_1__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t1_1__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_n 
                = vlSelfRef.calculator__DOT__t1_1__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t1_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_n 
                = vlSelfRef.calculator__DOT__t1_1__DOT__op_result;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_n 
                    = vlSelfRef.calculator__DOT__t1_1__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__out_valid_n[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_n;
    vlSelfRef.calculator__DOT__out_ctrl_w[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_w;
    vlSelfRef.calculator__DOT__out_valid_w[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_w;
    vlSelfRef.calculator__DOT__out_a_w[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_w;
    vlSelfRef.calculator__DOT__out_b_n[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_n;
    vlSelfRef.calculator__DOT__out_b_w[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_w;
    vlSelfRef.calculator__DOT__out_ctrl_n[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_n;
    vlSelfRef.calculator__DOT__out_valid_s[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(2,1): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t1_2__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t1_2__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t1_2__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_n 
                = vlSelfRef.calculator__DOT__t1_2__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t1_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_n 
                = vlSelfRef.calculator__DOT__t1_2__DOT__op_result;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_n 
                    = vlSelfRef.calculator__DOT__t1_2__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__out_valid_n[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_n;
    vlSelfRef.calculator__DOT__out_ctrl_w[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_w;
    vlSelfRef.calculator__DOT__out_valid_w[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_w;
    vlSelfRef.calculator__DOT__out_a_w[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_w;
    vlSelfRef.calculator__DOT__out_b_n[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_n;
    vlSelfRef.calculator__DOT__out_b_w[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_w;
    vlSelfRef.calculator__DOT__out_ctrl_n[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_n;
    vlSelfRef.calculator__DOT__out_valid_s[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(1,2): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t2_1__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t2_1__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t2_1__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_n 
                = vlSelfRef.calculator__DOT__t2_1__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t2_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_n 
                = vlSelfRef.calculator__DOT__t2_1__DOT__op_result;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_n 
                    = vlSelfRef.calculator__DOT__t2_1__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__out_valid_n[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_n;
    vlSelfRef.calculator__DOT__out_ctrl_w[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_w;
    vlSelfRef.calculator__DOT__out_valid_w[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_w;
    vlSelfRef.calculator__DOT__out_a_w[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_w;
    vlSelfRef.calculator__DOT__out_b_n[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_n;
    vlSelfRef.calculator__DOT__out_b_w[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_w;
    vlSelfRef.calculator__DOT__out_ctrl_n[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_n;
    vlSelfRef.calculator__DOT__out_valid_s[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(2,2): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t2_2__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t2_2__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t2_2__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_n 
                = vlSelfRef.calculator__DOT__t2_2__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t2_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_n 
                = vlSelfRef.calculator__DOT__t2_2__DOT__op_result;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_n 
                    = vlSelfRef.calculator__DOT__t2_2__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__host_out_a[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_a;
    vlSelfRef.calculator__DOT__out_a_w[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_w;
    vlSelfRef.calculator__DOT__out_a_w[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_w;
    vlSelfRef.calculator__DOT__out_a_n[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_n;
    vlSelfRef.calculator__DOT__out_a_n[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_n;
    vlSelfRef.calculator__DOT__out_a_n[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_n;
    vlSelfRef.calculator__DOT__out_a_n[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_n;
    vlSelfRef.calculator__DOT__out_a_n[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_n;
    vlSelfRef.calculator__DOT__out_a_n[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_n;
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
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vcalculator___024root___act_sequent__TOP__0(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___act_sequent__TOP__0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = 0;
    QData/*63:0*/ calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = 0;
    SData/*15:0*/ calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_hd281a793__0 = 0;
    CData/*0:0*/ calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = 0;
    QData/*63:0*/ calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = 0;
    QData/*63:0*/ calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = 0;
    SData/*15:0*/ calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = 0;
    CData/*0:0*/ calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = 0;
    // Body
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [0U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[0U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [0U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[0U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [0U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[0U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [0U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [1U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[1U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [1U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[1U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [1U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[1U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [1U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [2U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[2U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [2U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[2U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [2U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[2U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [2U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [3U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[3U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [3U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[3U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [3U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[3U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [3U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [4U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[4U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [4U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[4U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [4U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[4U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [4U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [5U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[5U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [5U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[5U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [5U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[5U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [5U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [6U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[6U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [6U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[6U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [6U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[6U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [6U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [7U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[7U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [7U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[7U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [7U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[7U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [7U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    calculator__DOT____Vlvbound_h9be8a64b__0 = vlSelfRef.calculator__DOT__in_a
        [8U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[8U] 
        = calculator__DOT____Vlvbound_h9be8a64b__0;
    calculator__DOT____Vlvbound_hcc4b29d2__0 = vlSelfRef.calculator__DOT__in_b
        [8U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[8U] 
        = calculator__DOT____Vlvbound_hcc4b29d2__0;
    calculator__DOT____Vlvbound_hd281a793__0 = vlSelfRef.calculator__DOT__in_ctrl
        [8U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[8U] 
        = calculator__DOT____Vlvbound_hd281a793__0;
    calculator__DOT____Vlvbound_h78e7d8a0__0 = vlSelfRef.calculator__DOT__in_valid
        [8U];
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
        = calculator__DOT____Vlvbound_h78e7d8a0__0;
    vlSelfRef.calculator__DOT__result_r = 0ULL;
    vlSelfRef.calculator__DOT__valid_r = 0U;
    vlSelfRef.calculator__DOT__any = 0U;
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [0U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [1U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [2U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [3U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [4U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [5U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [6U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [7U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [8U]) {
        vlSelfRef.calculator__DOT__any = ((IData)(1U) 
                                          + vlSelfRef.calculator__DOT__any);
    }
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 9U;
    if ((0U == vlSelfRef.calculator__DOT__any)) {
        vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__md 
            = vlSelfRef.mode;
        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[0U] 
            = vlSelfRef.a;
        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[0U] 
            = vlSelfRef.b;
        vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__dy 
            = (3U & VL_DIV_III(32, (IData)(vlSelfRef.mode), (IData)(3U)));
        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] = 1U;
        vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__dx 
            = (3U & VL_MODDIV_III(32, (IData)(vlSelfRef.mode), (IData)(3U)));
        vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__Vfuncout 
            = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__dx) 
                << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__dy) 
                           << 4U) | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__md)));
        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[0U] 
            = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__192__Vfuncout;
    }
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__idx_h = 0U;
    {
        while (VL_GTS_III(32, 0x14U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__idx_h)) {
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some = 0U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 1U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [0U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 2U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [1U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 3U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [2U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 4U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [3U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 5U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [4U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 6U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [5U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 7U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [6U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 8U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [7U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 9U;
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [8U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some 
                    = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some);
            }
            if ((0U == vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__some)) {
                goto __Vlabel2;
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [0U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [0U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 0U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 0U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [0U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [0U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [0U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [0U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [0U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [0U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [0U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [0U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [0U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [0U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [0U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [0U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [0U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [0U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [0U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [0U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [0U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [0U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [0U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [0U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [0U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [0U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [0U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [0U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [0U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[0U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[0U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[0U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [0U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[0U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [1U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [1U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 1U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 0U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [1U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [1U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [1U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [1U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [1U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [1U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [1U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [1U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [1U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [1U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [1U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [1U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [1U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [1U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [1U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [1U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [1U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [1U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [1U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [1U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [1U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [1U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [1U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [1U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [1U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[1U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[1U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[1U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [1U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[1U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [2U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [2U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 2U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 0U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [2U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [2U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [2U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [2U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [2U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [2U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [2U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [2U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [2U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [2U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [2U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [2U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [2U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [2U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [2U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [2U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [2U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [2U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [2U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [2U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [2U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [2U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [2U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [2U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [2U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[2U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[2U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[2U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [2U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[2U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [3U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [3U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 0U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 1U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [3U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [3U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [3U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [3U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [3U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [3U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [3U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [3U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [3U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [3U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [3U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [3U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [3U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [3U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [3U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [3U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [3U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [3U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [3U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [3U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [3U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [3U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [3U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [3U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [3U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[3U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[3U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[3U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [3U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[3U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [4U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [4U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 1U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 1U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [4U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [4U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [4U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [4U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [4U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [4U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [4U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [4U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [4U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [4U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [4U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [4U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [4U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [4U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [4U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [4U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [4U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [4U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [4U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [4U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [4U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [4U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [4U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [4U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [4U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[4U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[4U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[4U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [4U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[4U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [5U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [5U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 2U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 1U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [5U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [5U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [5U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [5U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [5U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [5U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [5U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [5U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [5U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [5U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [5U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [5U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [5U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [5U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [5U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [5U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [5U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [5U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [5U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [5U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [5U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [5U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [5U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [5U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [5U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[5U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[5U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[5U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [5U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[5U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [6U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [6U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 0U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 2U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [6U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [6U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [6U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [6U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [6U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [6U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [6U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [6U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [6U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [6U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [6U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [6U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [6U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [6U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [6U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [6U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [6U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [6U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [6U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [6U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [6U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [6U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [6U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [6U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [6U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[6U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[6U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[6U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [6U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[6U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [7U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [7U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 1U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 2U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [7U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [7U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [7U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [7U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [7U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [7U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [7U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [7U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [7U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [7U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [7U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [7U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [7U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [7U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [7U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [7U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [7U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [7U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [7U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [7U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [7U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [7U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [7U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [7U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [7U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[7U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[7U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[7U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [7U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[7U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                [8U]) {
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c 
                    = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                    [8U];
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = (1U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 8U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 6U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy 
                    = (3U & ((IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c) 
                             >> 4U));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md 
                    = (0xfU & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__c));
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx = 2U;
                vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty = 2U;
                if (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__r) {
                    if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                            - (IData)(1U))) 
                               + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [8U];
                            vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [8U];
                            vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [8U];
                            vlSelfRef.calculator__DOT____Vlvbound_he59de354__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he6d2591f__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h37615ea6__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h57dc3b27__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk10__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he59de354__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__1;
                        }
                    } else if (VL_LTS_III(32, 0U, vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx)) {
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx 
                            = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                               + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                                  - (IData)(1U)));
                        if ((1U & (~ ((8U >= (0xfU 
                                              & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)) 
                                      && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                      [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)])))) {
                            vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                [8U];
                            vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                [8U];
                            vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0 
                                = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                                [8U];
                            vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0 = 1U;
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he88db75c__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h392bfce1__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_h571a9c64__0;
                            }
                            if (VL_LIKELY(((8U >= (0xfU 
                                                   & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx))))) {
                                vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk11__DOT__nidx)] 
                                    = vlSelfRef.calculator__DOT____Vlvbound_he492c98f__0;
                            }
                            vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2 = 0U;
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__2;
                        }
                    } else {
                        vlSelfRef.calculator__DOT__result_r 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT__valid_r = 1U;
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__3;
                    }
                } else if (((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                             == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx)) 
                            & (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                               == (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy)))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res 
                        = ((8U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                            ? ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                           ? 0ULL : 
                                          ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                            ? 0ULL : 
                                           (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                            [8U] >> 
                                            (0x3fU 
                                             & (IData)(
                                                       vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                       [8U]))))))
                            : ((4U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                ? ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [8U] << 
                                           (0x3fU & (IData)(
                                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                            [8U])))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [8U] ^ vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [8U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [8U] | vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [8U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [8U] 
                                                 & vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [8U])))
                                : ((2U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                    ? ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                        ? ((0ULL == 
                                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                            [8U]) ? 0ULL
                                            : VL_DIV_QQQ(64, 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                         [8U], 
                                                         vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                         [8U]))
                                        : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                           [8U] * vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                           [8U])) : 
                                   ((1U & (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md))
                                     ? (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                        [8U] - vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                        [8U]) : (vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                                                 [8U] 
                                                 + 
                                                 vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                                                 [8U])))));
                    vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__local_res;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[8U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_h9be8a64b__1;
                    vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1 = 0ULL;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[8U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hcc4b29d2__1;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md 
                        = vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__md;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx = 0U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp = 1U;
                    vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout 
                        = (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__resp) 
                            << 8U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dx) 
                                       << 6U) | (((IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__dy) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__md))));
                    vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1 
                        = vlSelfRef.__Vfunc_calculator__DOT__make_ctrl__193__Vfuncout;
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[8U] 
                        = vlSelfRef.calculator__DOT____Vlvbound_hd281a793__1;
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       ((IData)(1U) 
                                        + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty)) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf3418f9f__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h33f03526__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4c0e94a7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h114e1fd4__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__4;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dy))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), 
                                       (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty 
                                        - (IData)(1U))) 
                           + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx);
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_ha585dbe7__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h8634eb5e__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h9222e5cf__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h3b8a160c__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__5;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            < (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx 
                        = ((IData)(1U) + (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                                          + vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h17e69f34__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h485504a9__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h667fa51c__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk8__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_hf4e9d157__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__6;
                    }
                } else if ((vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                            > (IData)(vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dx))) {
                    vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx 
                        = (VL_MULS_III(32, (IData)(3U), vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ty) 
                           + (vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__tx 
                              - (IData)(1U)));
                    if ((1U & (~ ((8U >= (0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)) 
                                  && vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
                                  [(0xfU & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)])))) {
                        vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0 
                            = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
                            [8U];
                        vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0 = 1U;
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h4a757273__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h1ac03dea__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h24ff5b5b__0;
                        }
                        if (VL_LIKELY(((8U >= (0xfU 
                                               & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx))))) {
                            vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[(0xfU 
                                                                                & vlSelfRef.calculator__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__nidx)] 
                                = vlSelfRef.calculator__DOT____Vlvbound_h063e8498__0;
                        }
                        vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7 = 0U;
                        vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid[8U] 
                            = vlSelfRef.calculator__DOT____Vlvbound_h78e7d8a0__7;
                    }
                }
            }
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 1U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 2U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 3U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 4U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 5U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 6U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 7U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 8U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 9U;
            vlSelfRef.calculator__DOT__unnamedblk2__DOT__idx_h 
                = ((IData)(1U) + vlSelfRef.calculator__DOT__unnamedblk2__DOT__idx_h);
        }
        __Vlabel2: ;
    }
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [0U];
    vlSelfRef.calculator__DOT__in_a[0U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [0U];
    vlSelfRef.calculator__DOT__in_b[0U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [0U];
    vlSelfRef.calculator__DOT__in_ctrl[0U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [0U];
    vlSelfRef.calculator__DOT__in_valid[0U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [1U];
    vlSelfRef.calculator__DOT__in_a[1U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [1U];
    vlSelfRef.calculator__DOT__in_b[1U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [1U];
    vlSelfRef.calculator__DOT__in_ctrl[1U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [1U];
    vlSelfRef.calculator__DOT__in_valid[1U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [2U];
    vlSelfRef.calculator__DOT__in_a[2U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [2U];
    vlSelfRef.calculator__DOT__in_b[2U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [2U];
    vlSelfRef.calculator__DOT__in_ctrl[2U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [2U];
    vlSelfRef.calculator__DOT__in_valid[2U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [3U];
    vlSelfRef.calculator__DOT__in_a[3U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [3U];
    vlSelfRef.calculator__DOT__in_b[3U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [3U];
    vlSelfRef.calculator__DOT__in_ctrl[3U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [3U];
    vlSelfRef.calculator__DOT__in_valid[3U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [4U];
    vlSelfRef.calculator__DOT__in_a[4U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [4U];
    vlSelfRef.calculator__DOT__in_b[4U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [4U];
    vlSelfRef.calculator__DOT__in_ctrl[4U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [4U];
    vlSelfRef.calculator__DOT__in_valid[4U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [5U];
    vlSelfRef.calculator__DOT__in_a[5U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [5U];
    vlSelfRef.calculator__DOT__in_b[5U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [5U];
    vlSelfRef.calculator__DOT__in_ctrl[5U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [5U];
    vlSelfRef.calculator__DOT__in_valid[5U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [6U];
    vlSelfRef.calculator__DOT__in_a[6U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [6U];
    vlSelfRef.calculator__DOT__in_b[6U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [6U];
    vlSelfRef.calculator__DOT__in_ctrl[6U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [6U];
    vlSelfRef.calculator__DOT__in_valid[6U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [7U];
    vlSelfRef.calculator__DOT__in_a[7U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [7U];
    vlSelfRef.calculator__DOT__in_b[7U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [7U];
    vlSelfRef.calculator__DOT__in_ctrl[7U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [7U];
    vlSelfRef.calculator__DOT__in_valid[7U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    calculator__DOT____Vlvbound_h66b3d563__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_a
        [8U];
    vlSelfRef.calculator__DOT__in_a[8U] = calculator__DOT____Vlvbound_h66b3d563__0;
    calculator__DOT____Vlvbound_h86262c3c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_b
        [8U];
    vlSelfRef.calculator__DOT__in_b[8U] = calculator__DOT____Vlvbound_h86262c3c__0;
    calculator__DOT____Vlvbound_h1676912c__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_ctrl
        [8U];
    vlSelfRef.calculator__DOT__in_ctrl[8U] = calculator__DOT____Vlvbound_h1676912c__0;
    calculator__DOT____Vlvbound_hc22d5ed4__0 = vlSelfRef.calculator__DOT__unnamedblk2__DOT__tmp_valid
        [8U];
    vlSelfRef.calculator__DOT__in_valid[8U] = calculator__DOT____Vlvbound_hc22d5ed4__0;
    vlSelfRef.calculator__DOT__unnamedblk2__DOT__i = 9U;
    vlSelfRef.result = vlSelfRef.calculator__DOT__result_r;
    vlSelfRef.valid = vlSelfRef.calculator__DOT__valid_r;
    vlSelfRef.calculator__DOT__t0_0__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t0_0__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t0_1__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t0_2__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t1_0__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t2_0__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t0_1__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t0_2__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t1_0__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t2_0__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t1_1__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t1_2__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t2_1__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t2_2__DOT__sel_b = 0ULL;
    vlSelfRef.calculator__DOT__t1_1__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t1_2__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t2_1__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t2_2__DOT__sel_a = 0ULL;
    vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl = 0U;
    vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl = 0U;
    vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl = 0U;
    vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__in_valid[0U]) {
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[0U];
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[0U];
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[0U];
    } else if (vlSelfRef.calculator__DOT__in_valid[4U]) {
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[4U];
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[4U];
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[4U];
    } else if (vlSelfRef.calculator__DOT__in_valid[6U]) {
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[6U];
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[6U];
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[6U];
    }
    vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__in_valid[3U]) {
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[3U];
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[3U];
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[3U];
    } else if (vlSelfRef.calculator__DOT__in_valid[7U]) {
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[7U];
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[7U];
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[7U];
    }
    vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid = 0U;
    vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__in_valid[1U]) {
        vlSelfRef.calculator__DOT__t0_0__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[1U];
        vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[1U];
        vlSelfRef.calculator__DOT__t1_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[1U];
        vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[1U];
        vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[1U];
        vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[1U];
    } else {
        if (vlSelfRef.calculator__DOT__in_valid[3U]) {
            vlSelfRef.calculator__DOT__t0_0__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[3U];
            vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[3U];
            vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [3U];
        }
        if (vlSelfRef.calculator__DOT__in_valid[5U]) {
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[5U];
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[5U];
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [5U];
        } else if (vlSelfRef.calculator__DOT__in_valid
                   [7U]) {
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[7U];
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[7U];
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [7U];
        } else if (vlSelfRef.calculator__DOT__in_valid
                   [3U]) {
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[3U];
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[3U];
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [3U];
        }
    }
    vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__in_valid[2U]) {
        vlSelfRef.calculator__DOT__t0_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[2U];
        vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[2U];
        vlSelfRef.calculator__DOT__t1_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[2U];
        vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[2U];
        vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[2U];
        vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[2U];
    } else {
        if (vlSelfRef.calculator__DOT__in_valid[4U]) {
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[4U];
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[4U];
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [4U];
        } else if (vlSelfRef.calculator__DOT__in_valid
                   [0U]) {
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[0U];
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[0U];
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [0U];
        }
        if (vlSelfRef.calculator__DOT__in_valid[8U]) {
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[8U];
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[8U];
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [8U];
        } else if (vlSelfRef.calculator__DOT__in_valid
                   [4U]) {
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[4U];
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[4U];
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [4U];
        }
    }
    vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__in_valid[4U]) {
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[4U];
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[4U];
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[4U];
    } else if (vlSelfRef.calculator__DOT__in_valid[8U]) {
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[8U];
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[8U];
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[8U];
    } else if (vlSelfRef.calculator__DOT__in_valid[6U]) {
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[6U];
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[6U];
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[6U];
    }
    vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl = 0U;
    if (vlSelfRef.calculator__DOT__in_valid[5U]) {
        vlSelfRef.calculator__DOT__t0_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[5U];
        vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[5U];
        vlSelfRef.calculator__DOT__t2_2__DOT__sel_b 
            = vlSelfRef.calculator__DOT__in_b[5U];
        vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
            = vlSelfRef.calculator__DOT__in_a[5U];
        vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[5U];
        vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid = 1U;
        vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl 
            = vlSelfRef.calculator__DOT__in_ctrl[5U];
    } else {
        if (vlSelfRef.calculator__DOT__in_valid[1U]) {
            vlSelfRef.calculator__DOT__t0_2__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[1U];
            vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[1U];
            vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [1U];
        }
        if (vlSelfRef.calculator__DOT__in_valid[7U]) {
            vlSelfRef.calculator__DOT__t2_2__DOT__sel_b 
                = vlSelfRef.calculator__DOT__in_b[7U];
            vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                = vlSelfRef.calculator__DOT__in_a[7U];
            vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid = 1U;
            vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl 
                = vlSelfRef.calculator__DOT__in_ctrl
                [7U];
        }
    }
    vlSelfRef.calculator__DOT__t0_0__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid) 
         & (IData)((0U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t0_1__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid) 
         & (IData)((0x40U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t0_2__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid) 
         & (IData)((0x80U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t1_0__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid) 
         & (IData)((0x10U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t2_0__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid) 
         & (IData)((0x20U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t1_1__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid) 
         & (IData)((0x50U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t1_2__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid) 
         & (IData)((0x90U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t2_1__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid) 
         & (IData)((0x60U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT__t2_2__DOT__am_dest = 
        ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid) 
         & (IData)((0xa0U == (0xf0U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl)))));
    vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_valid = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t0_0__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t0_1__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t0_2__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t1_0__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t2_0__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t1_1__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t1_2__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t2_1__DOT__op_result = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_w = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_n = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_w = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_n = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_s = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_e = 0U;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_s = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_e = 0ULL;
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_e = 0ULL;
    vlSelfRef.calculator__DOT__t2_2__DOT__op_result = 0ULL;
    if (vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid) {
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl) 
                      >> 8U)))) {
            if (vlSelfRef.calculator__DOT__t0_0__DOT__am_dest) {
                vlSelfRef.calculator__DOT__t0_0__DOT__unnamedblk1__DOT__resp_ctrl 
                    = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl)));
            }
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__am_dest)))) {
                if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_s 
                        = vlSelfRef.calculator__DOT__t0_0__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_s 
                        = vlSelfRef.calculator__DOT__t0_0__DOT__sel_a;
                }
                if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl) 
                                     >> 6U)))) {
                        vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_e = 1U;
                        vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_e 
                            = vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl;
                        vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_e 
                            = vlSelfRef.calculator__DOT__t0_0__DOT__sel_b;
                        vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_e 
                            = vlSelfRef.calculator__DOT__t0_0__DOT__sel_a;
                    }
                }
            }
        }
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_valid = 1U;
        } else if (vlSelfRef.calculator__DOT__t0_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_valid = 1U;
        }
        vlSelfRef.calculator__DOT__host_out_valid[0U] 
            = vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_valid;
        vlSelfRef.calculator__DOT__out_valid_s[0U] 
            = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_s;
        vlSelfRef.calculator__DOT__out_ctrl_s[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_s;
        vlSelfRef.calculator__DOT__out_valid_e[0U] 
            = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_e;
        vlSelfRef.calculator__DOT__out_ctrl_e[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_e;
        vlSelfRef.calculator__DOT__out_b_s[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_s;
        vlSelfRef.calculator__DOT__out_a_s[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_s;
        vlSelfRef.calculator__DOT__out_b_e[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_e;
    } else {
        vlSelfRef.calculator__DOT__host_out_valid[0U] 
            = vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_valid;
        vlSelfRef.calculator__DOT__out_valid_s[0U] 
            = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_s;
        vlSelfRef.calculator__DOT__out_ctrl_s[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_s;
        vlSelfRef.calculator__DOT__out_valid_e[0U] 
            = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_valid_e;
        vlSelfRef.calculator__DOT__out_ctrl_e[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_ctrl_e;
        vlSelfRef.calculator__DOT__out_b_s[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_s;
        vlSelfRef.calculator__DOT__out_a_s[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_s;
        vlSelfRef.calculator__DOT__out_b_e[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_b_e;
    }
    vlSelfRef.calculator__DOT__out_a_e[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__out_a_e;
    if ((((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t0_0__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t0_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t0_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t0_0__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t0_0__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t0_0__DOT__sel_a, vlSelfRef.calculator__DOT__t0_0__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t0_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t0_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t0_0__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t0_0__DOT__sel_b)))));
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t0_1__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t0_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t0_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t0_1__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t0_1__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t0_1__DOT__sel_a, vlSelfRef.calculator__DOT__t0_1__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t0_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t0_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t0_1__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t0_1__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_w = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_w 
                = vlSelfRef.calculator__DOT__t0_1__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_w 
                = vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t0_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_w = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_w = 0ULL;
            vlSelfRef.calculator__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_w 
                = vlSelfRef.calculator__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_w = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_w 
                        = vlSelfRef.calculator__DOT__t0_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_w 
                        = vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__am_dest)))) {
                if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_s 
                        = vlSelfRef.calculator__DOT__t0_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_s 
                        = vlSelfRef.calculator__DOT__t0_1__DOT__sel_a;
                }
                if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                     >> 6U)))) {
                        vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_e = 1U;
                        vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_e 
                            = vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl;
                        vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_e 
                            = vlSelfRef.calculator__DOT__t0_1__DOT__sel_b;
                        vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_e 
                            = vlSelfRef.calculator__DOT__t0_1__DOT__sel_a;
                    }
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t0_2__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t0_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t0_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t0_2__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t0_2__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t0_2__DOT__sel_a, vlSelfRef.calculator__DOT__t0_2__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t0_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t0_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t0_2__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t0_2__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_w = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_w 
                = vlSelfRef.calculator__DOT__t0_2__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_w 
                = vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t0_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_w = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_w = 0ULL;
            vlSelfRef.calculator__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_w 
                = vlSelfRef.calculator__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_w = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_w 
                        = vlSelfRef.calculator__DOT__t0_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_w 
                        = vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__am_dest)))) {
                if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_s 
                        = vlSelfRef.calculator__DOT__t0_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_s 
                        = vlSelfRef.calculator__DOT__t0_2__DOT__sel_a;
                }
                if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                     >> 6U)))) {
                        vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_e = 1U;
                        vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_e 
                            = vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl;
                        vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_e 
                            = vlSelfRef.calculator__DOT__t0_2__DOT__sel_b;
                        vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_e 
                            = vlSelfRef.calculator__DOT__t0_2__DOT__sel_a;
                    }
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t1_0__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t1_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t1_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t1_0__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t1_0__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t1_0__DOT__sel_a, vlSelfRef.calculator__DOT__t1_0__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t1_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t1_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t1_0__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t1_0__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_n 
                = vlSelfRef.calculator__DOT__t1_0__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t1_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_n = 1U;
                vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_n 
                    = vlSelfRef.calculator__DOT__t1_0__DOT__sel_b;
                vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__am_dest)))) {
                if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_s 
                        = vlSelfRef.calculator__DOT__t1_0__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_s 
                        = vlSelfRef.calculator__DOT__t1_0__DOT__sel_a;
                }
                if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U <= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_e 
                                = vlSelfRef.calculator__DOT__t1_0__DOT__sel_b;
                            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_e 
                                = vlSelfRef.calculator__DOT__t1_0__DOT__sel_a;
                        }
                    }
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t2_0__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t2_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t2_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t2_0__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t2_0__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t2_0__DOT__sel_a, vlSelfRef.calculator__DOT__t2_0__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t2_0__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t2_0__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t2_0__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t2_0__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_n 
                = vlSelfRef.calculator__DOT__t2_0__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t2_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_n = 1U;
                vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_n 
                    = vlSelfRef.calculator__DOT__t2_0__DOT__sel_b;
                vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__am_dest)))) {
                if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_s 
                        = vlSelfRef.calculator__DOT__t2_0__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_s 
                        = vlSelfRef.calculator__DOT__t2_0__DOT__sel_a;
                }
                if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U <= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((0U < (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_e 
                                = vlSelfRef.calculator__DOT__t2_0__DOT__sel_b;
                            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_e 
                                = vlSelfRef.calculator__DOT__t2_0__DOT__sel_a;
                        }
                    }
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t1_1__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t1_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t1_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t1_1__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t1_1__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t1_1__DOT__sel_a, vlSelfRef.calculator__DOT__t1_1__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t1_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t1_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t1_1__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t1_1__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_n 
                = vlSelfRef.calculator__DOT__t1_1__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t1_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_n = 1U;
                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_n 
                    = vlSelfRef.calculator__DOT__t1_1__DOT__sel_b;
                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__am_dest)))) {
                if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U <= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_w 
                                    = vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_w = 1U;
                                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_w 
                                    = vlSelfRef.calculator__DOT__t1_1__DOT__sel_a;
                                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_w 
                                    = vlSelfRef.calculator__DOT__t1_1__DOT__sel_b;
                            }
                        }
                        if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_e 
                                = vlSelfRef.calculator__DOT__t1_1__DOT__sel_b;
                            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_e 
                                = vlSelfRef.calculator__DOT__t1_1__DOT__sel_a;
                        }
                    }
                }
                if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_s 
                        = vlSelfRef.calculator__DOT__t1_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_s 
                        = vlSelfRef.calculator__DOT__t1_1__DOT__sel_a;
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t1_2__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t1_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t1_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t1_2__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t1_2__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t1_2__DOT__sel_a, vlSelfRef.calculator__DOT__t1_2__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t1_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t1_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t1_2__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t1_2__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_n 
                = vlSelfRef.calculator__DOT__t1_2__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t1_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_n = 1U;
                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_n 
                    = vlSelfRef.calculator__DOT__t1_2__DOT__sel_b;
                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__am_dest)))) {
                if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((1U <= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_w 
                                    = vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_w = 1U;
                                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_w 
                                    = vlSelfRef.calculator__DOT__t1_2__DOT__sel_a;
                                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_w 
                                    = vlSelfRef.calculator__DOT__t1_2__DOT__sel_b;
                            }
                        }
                        if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_e 
                                = vlSelfRef.calculator__DOT__t1_2__DOT__sel_b;
                            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_e 
                                = vlSelfRef.calculator__DOT__t1_2__DOT__sel_a;
                        }
                    }
                }
                if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_s 
                        = vlSelfRef.calculator__DOT__t1_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_s 
                        = vlSelfRef.calculator__DOT__t1_2__DOT__sel_a;
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t2_1__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t2_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t2_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t2_1__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t2_1__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t2_1__DOT__sel_a, vlSelfRef.calculator__DOT__t2_1__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t2_1__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t2_1__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t2_1__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t2_1__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_n 
                = vlSelfRef.calculator__DOT__t2_1__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t2_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_n = 1U;
                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_n 
                    = vlSelfRef.calculator__DOT__t2_1__DOT__sel_b;
                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__am_dest)))) {
                if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U <= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_w 
                                    = vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_w = 1U;
                                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_w 
                                    = vlSelfRef.calculator__DOT__t2_1__DOT__sel_a;
                                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_w 
                                    = vlSelfRef.calculator__DOT__t2_1__DOT__sel_b;
                            }
                        }
                        if ((1U < (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_e 
                                = vlSelfRef.calculator__DOT__t2_1__DOT__sel_b;
                            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_e 
                                = vlSelfRef.calculator__DOT__t2_1__DOT__sel_a;
                        }
                    }
                }
                if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_s 
                        = vlSelfRef.calculator__DOT__t2_1__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_s 
                        = vlSelfRef.calculator__DOT__t2_1__DOT__sel_a;
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid) 
          & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__am_dest)) 
         & (~ ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
               >> 8U)))) {
        vlSelfRef.calculator__DOT__t2_2__DOT__op_result 
            = ((8U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                ? ((4U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                    ? 0ULL : ((2U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                               ? 0ULL : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                                          ? 0ULL : 
                                         (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                                          >> (0x3fU 
                                              & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_b))))))
                : ((4U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                    ? ((2U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                               << (0x3fU & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_b)))
                            : (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                               ^ vlSelfRef.calculator__DOT__t2_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                               | vlSelfRef.calculator__DOT__t2_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                               & vlSelfRef.calculator__DOT__t2_2__DOT__sel_b)))
                    : ((2U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                        ? ((1U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                            ? ((0ULL == vlSelfRef.calculator__DOT__t2_2__DOT__sel_b)
                                ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.calculator__DOT__t2_2__DOT__sel_a, vlSelfRef.calculator__DOT__t2_2__DOT__sel_b))
                            : (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                               * vlSelfRef.calculator__DOT__t2_2__DOT__sel_b))
                        : ((1U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))
                            ? (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                               - vlSelfRef.calculator__DOT__t2_2__DOT__sel_b)
                            : (vlSelfRef.calculator__DOT__t2_2__DOT__sel_a 
                               + vlSelfRef.calculator__DOT__t2_2__DOT__sel_b)))));
    }
    if (vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_n 
                = vlSelfRef.calculator__DOT__t2_2__DOT__sel_b;
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl;
        } else if (vlSelfRef.calculator__DOT__t2_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_n = 1U;
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_n = 0ULL;
            vlSelfRef.calculator__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl)));
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_n 
                = vlSelfRef.calculator__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_n = 1U;
                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_n 
                    = vlSelfRef.calculator__DOT__t2_2__DOT__sel_b;
                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_n 
                    = vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__am_dest)))) {
                if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                  >> 4U)))) {
                    if ((2U <= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                      >> 4U)))) {
                        if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                          >> 6U)))) {
                            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                             >> 6U)))) {
                                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_w 
                                    = vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl;
                                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_w = 1U;
                                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_w 
                                    = vlSelfRef.calculator__DOT__t2_2__DOT__sel_a;
                                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_w 
                                    = vlSelfRef.calculator__DOT__t2_2__DOT__sel_b;
                            }
                        }
                        if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                         >> 6U)))) {
                            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_e = 1U;
                            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_e 
                                = vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl;
                            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_e 
                                = vlSelfRef.calculator__DOT__t2_2__DOT__sel_b;
                            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_e 
                                = vlSelfRef.calculator__DOT__t2_2__DOT__sel_a;
                        }
                    }
                }
                if ((2U < (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_s = 1U;
                    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_s 
                        = vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl;
                    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_s 
                        = vlSelfRef.calculator__DOT__t2_2__DOT__sel_b;
                    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_s 
                        = vlSelfRef.calculator__DOT__t2_2__DOT__sel_a;
                }
            }
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(0,0): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t0_0__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t0_0__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t0_0__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_a = 0ULL;
    if (vlSelfRef.calculator__DOT__t0_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t0_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_a 
                = vlSelfRef.calculator__DOT__t0_0__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t0_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_a 
                = vlSelfRef.calculator__DOT__t0_0__DOT__op_result;
        }
    }
    vlSelfRef.calculator__DOT__out_valid_w[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_w;
    vlSelfRef.calculator__DOT__out_b_w[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_w;
    vlSelfRef.calculator__DOT__out_ctrl_w[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_w;
    vlSelfRef.calculator__DOT__out_valid_s[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(1,0): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t0_1__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t0_1__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t0_1__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_w = 0ULL;
    if (vlSelfRef.calculator__DOT__t0_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_w 
                = vlSelfRef.calculator__DOT__t0_1__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t0_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_w 
                = vlSelfRef.calculator__DOT__t0_1__DOT__op_result;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t0_1__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_w 
                        = vlSelfRef.calculator__DOT__t0_1__DOT__sel_a;
                }
            }
        }
    }
    vlSelfRef.calculator__DOT__out_valid_w[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_w;
    vlSelfRef.calculator__DOT__out_b_w[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_w;
    vlSelfRef.calculator__DOT__out_ctrl_w[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_w;
    vlSelfRef.calculator__DOT__out_valid_s[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(2,0): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t0_2__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t0_2__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t0_2__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_w = 0ULL;
    if (vlSelfRef.calculator__DOT__t0_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_w 
                = vlSelfRef.calculator__DOT__t0_2__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t0_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_w 
                = vlSelfRef.calculator__DOT__t0_2__DOT__op_result;
        } else if ((0U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                              >> 6U)))) {
                if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t0_2__DOT__sel_ctrl) 
                                 >> 6U)))) {
                    vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_w 
                        = vlSelfRef.calculator__DOT__t0_2__DOT__sel_a;
                }
            }
        }
    }
    vlSelfRef.calculator__DOT__out_valid_n[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_n;
    vlSelfRef.calculator__DOT__out_b_n[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_n;
    vlSelfRef.calculator__DOT__out_ctrl_n[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_n;
    vlSelfRef.calculator__DOT__out_valid_s[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(0,1): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t1_0__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t1_0__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t1_0__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__t1_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_n 
                = vlSelfRef.calculator__DOT__t1_0__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t1_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_n 
                = vlSelfRef.calculator__DOT__t1_0__DOT__op_result;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_n 
                    = vlSelfRef.calculator__DOT__t1_0__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__out_valid_n[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_n;
    vlSelfRef.calculator__DOT__out_b_n[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_n;
    vlSelfRef.calculator__DOT__out_ctrl_n[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_n;
    vlSelfRef.calculator__DOT__out_valid_s[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(0,2): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t2_0__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t2_0__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t2_0__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__t2_0__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_n 
                = vlSelfRef.calculator__DOT__t2_0__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t2_0__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_n 
                = vlSelfRef.calculator__DOT__t2_0__DOT__op_result;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_0__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_n 
                    = vlSelfRef.calculator__DOT__t2_0__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__out_valid_n[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_n;
    vlSelfRef.calculator__DOT__out_ctrl_w[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_w;
    vlSelfRef.calculator__DOT__out_valid_w[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_w;
    vlSelfRef.calculator__DOT__out_a_w[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_w;
    vlSelfRef.calculator__DOT__out_b_n[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_n;
    vlSelfRef.calculator__DOT__out_b_w[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_w;
    vlSelfRef.calculator__DOT__out_ctrl_n[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_n;
    vlSelfRef.calculator__DOT__out_valid_s[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(1,1): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t1_1__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t1_1__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t1_1__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__t1_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_n 
                = vlSelfRef.calculator__DOT__t1_1__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t1_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_n 
                = vlSelfRef.calculator__DOT__t1_1__DOT__op_result;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_n 
                    = vlSelfRef.calculator__DOT__t1_1__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__out_valid_n[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_n;
    vlSelfRef.calculator__DOT__out_ctrl_w[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_w;
    vlSelfRef.calculator__DOT__out_valid_w[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_w;
    vlSelfRef.calculator__DOT__out_a_w[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_w;
    vlSelfRef.calculator__DOT__out_b_n[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_n;
    vlSelfRef.calculator__DOT__out_b_w[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_w;
    vlSelfRef.calculator__DOT__out_ctrl_n[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_n;
    vlSelfRef.calculator__DOT__out_valid_s[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(2,1): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t1_2__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t1_2__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t1_2__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__t1_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_n 
                = vlSelfRef.calculator__DOT__t1_2__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t1_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_n 
                = vlSelfRef.calculator__DOT__t1_2__DOT__op_result;
        } else if ((1U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((1U > (3U & ((IData)(vlSelfRef.calculator__DOT__t1_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_n 
                    = vlSelfRef.calculator__DOT__t1_2__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__out_valid_n[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_n;
    vlSelfRef.calculator__DOT__out_ctrl_w[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_w;
    vlSelfRef.calculator__DOT__out_valid_w[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_w;
    vlSelfRef.calculator__DOT__out_a_w[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_w;
    vlSelfRef.calculator__DOT__out_b_n[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_n;
    vlSelfRef.calculator__DOT__out_b_w[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_w;
    vlSelfRef.calculator__DOT__out_ctrl_n[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_n;
    vlSelfRef.calculator__DOT__out_valid_s[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(1,2): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t2_1__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t2_1__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t2_1__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__t2_1__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_n 
                = vlSelfRef.calculator__DOT__t2_1__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t2_1__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_n 
                = vlSelfRef.calculator__DOT__t2_1__DOT__op_result;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_1__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_n 
                    = vlSelfRef.calculator__DOT__t2_1__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__out_valid_n[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_n;
    vlSelfRef.calculator__DOT__out_ctrl_w[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_w;
    vlSelfRef.calculator__DOT__out_valid_w[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_w;
    vlSelfRef.calculator__DOT__out_a_w[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_w;
    vlSelfRef.calculator__DOT__out_b_n[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_n;
    vlSelfRef.calculator__DOT__out_b_w[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_w;
    vlSelfRef.calculator__DOT__out_ctrl_n[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_n;
    vlSelfRef.calculator__DOT__out_valid_s[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_s;
    vlSelfRef.calculator__DOT__out_ctrl_s[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_s;
    vlSelfRef.calculator__DOT__out_valid_e[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_valid_e;
    vlSelfRef.calculator__DOT__out_ctrl_e[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_ctrl_e;
    vlSelfRef.calculator__DOT__out_b_s[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_s;
    vlSelfRef.calculator__DOT__out_a_s[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_s;
    vlSelfRef.calculator__DOT__out_b_e[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_b_e;
    vlSelfRef.calculator__DOT__out_a_e[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_e;
    if (VL_UNLIKELY(((((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid) 
                       & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__am_dest)) 
                      & (~ ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(2,2): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (0xfU & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl)),
                     64,vlSelfRef.calculator__DOT__t2_2__DOT__sel_a,
                     64,vlSelfRef.calculator__DOT__t2_2__DOT__sel_b,
                     64,vlSelfRef.calculator__DOT__t2_2__DOT__op_result);
    }
    vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_n = 0ULL;
    if (vlSelfRef.calculator__DOT__t2_2__DOT__sel_valid) {
        if ((0x100U & (IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl))) {
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_n 
                = vlSelfRef.calculator__DOT__t2_2__DOT__sel_a;
        } else if (vlSelfRef.calculator__DOT__t2_2__DOT__am_dest) {
            vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_n 
                = vlSelfRef.calculator__DOT__t2_2__DOT__op_result;
        } else if ((2U >= (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                                 >> 4U)))) {
            if ((2U > (3U & ((IData)(vlSelfRef.calculator__DOT__t2_2__DOT__sel_ctrl) 
                             >> 4U)))) {
                vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_n 
                    = vlSelfRef.calculator__DOT__t2_2__DOT__sel_a;
            }
        }
    }
    vlSelfRef.calculator__DOT__host_out_a[0U] = vlSelfRef.calculator__DOT____Vcellout__t0_0__host_out_a;
    vlSelfRef.calculator__DOT__out_a_w[1U] = vlSelfRef.calculator__DOT____Vcellout__t0_1__out_a_w;
    vlSelfRef.calculator__DOT__out_a_w[2U] = vlSelfRef.calculator__DOT____Vcellout__t0_2__out_a_w;
    vlSelfRef.calculator__DOT__out_a_n[3U] = vlSelfRef.calculator__DOT____Vcellout__t1_0__out_a_n;
    vlSelfRef.calculator__DOT__out_a_n[6U] = vlSelfRef.calculator__DOT____Vcellout__t2_0__out_a_n;
    vlSelfRef.calculator__DOT__out_a_n[4U] = vlSelfRef.calculator__DOT____Vcellout__t1_1__out_a_n;
    vlSelfRef.calculator__DOT__out_a_n[5U] = vlSelfRef.calculator__DOT____Vcellout__t1_2__out_a_n;
    vlSelfRef.calculator__DOT__out_a_n[7U] = vlSelfRef.calculator__DOT____Vcellout__t2_1__out_a_n;
    vlSelfRef.calculator__DOT__out_a_n[8U] = vlSelfRef.calculator__DOT____Vcellout__t2_2__out_a_n;
}
