// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcalculator.h for the primary calling header

#include "Vcalculator__pch.h"
#include "Vcalculator__Syms.h"
#include "Vcalculator___024root.h"

extern "C" void dpi_tile(long long in_a_n, long long in_b_n, int in_ctrl_n, svBit in_valid_n, long long in_a_e, long long in_b_e, int in_ctrl_e, svBit in_valid_e, long long in_a_s, long long in_b_s, int in_ctrl_s, svBit in_valid_s, long long in_a_w, long long in_b_w, int in_ctrl_w, svBit in_valid_w, long long host_in_a, long long host_in_b, int host_in_ctrl, svBit host_in_valid, long long* out_a_n, long long* out_b_n, int* out_ctrl_n, svBit* out_valid_n, long long* out_a_e, long long* out_b_e, int* out_ctrl_e, svBit* out_valid_e, long long* out_a_s, long long* out_b_s, int* out_ctrl_s, svBit* out_valid_s, long long* out_a_w, long long* out_b_w, int* out_ctrl_w, svBit* out_valid_w, long long* host_out_a, svBit* host_out_valid);

VL_INLINE_OPT void Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP(QData/*63:0*/ in_a_n, QData/*63:0*/ in_b_n, IData/*31:0*/ in_ctrl_n, CData/*0:0*/ in_valid_n, QData/*63:0*/ in_a_e, QData/*63:0*/ in_b_e, IData/*31:0*/ in_ctrl_e, CData/*0:0*/ in_valid_e, QData/*63:0*/ in_a_s, QData/*63:0*/ in_b_s, IData/*31:0*/ in_ctrl_s, CData/*0:0*/ in_valid_s, QData/*63:0*/ in_a_w, QData/*63:0*/ in_b_w, IData/*31:0*/ in_ctrl_w, CData/*0:0*/ in_valid_w, QData/*63:0*/ host_in_a, QData/*63:0*/ host_in_b, IData/*31:0*/ host_in_ctrl, CData/*0:0*/ host_in_valid, QData/*63:0*/ &out_a_n, QData/*63:0*/ &out_b_n, IData/*31:0*/ &out_ctrl_n, CData/*0:0*/ &out_valid_n, QData/*63:0*/ &out_a_e, QData/*63:0*/ &out_b_e, IData/*31:0*/ &out_ctrl_e, CData/*0:0*/ &out_valid_e, QData/*63:0*/ &out_a_s, QData/*63:0*/ &out_b_s, IData/*31:0*/ &out_ctrl_s, CData/*0:0*/ &out_valid_s, QData/*63:0*/ &out_a_w, QData/*63:0*/ &out_b_w, IData/*31:0*/ &out_ctrl_w, CData/*0:0*/ &out_valid_w, QData/*63:0*/ &host_out_a, CData/*0:0*/ &host_out_valid) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root____Vdpiimwrap_calculator__DOT__int_con__DOT__t0_0__DOT__dpi_tile_TOP\n"); );
    // Body
    long long in_a_n__Vcvt;
    for (size_t in_a_n__Vidx = 0; in_a_n__Vidx < 1; ++in_a_n__Vidx) in_a_n__Vcvt = in_a_n;
    long long in_b_n__Vcvt;
    for (size_t in_b_n__Vidx = 0; in_b_n__Vidx < 1; ++in_b_n__Vidx) in_b_n__Vcvt = in_b_n;
    int in_ctrl_n__Vcvt;
    for (size_t in_ctrl_n__Vidx = 0; in_ctrl_n__Vidx < 1; ++in_ctrl_n__Vidx) in_ctrl_n__Vcvt = in_ctrl_n;
    svBit in_valid_n__Vcvt;
    for (size_t in_valid_n__Vidx = 0; in_valid_n__Vidx < 1; ++in_valid_n__Vidx) in_valid_n__Vcvt = in_valid_n;
    long long in_a_e__Vcvt;
    for (size_t in_a_e__Vidx = 0; in_a_e__Vidx < 1; ++in_a_e__Vidx) in_a_e__Vcvt = in_a_e;
    long long in_b_e__Vcvt;
    for (size_t in_b_e__Vidx = 0; in_b_e__Vidx < 1; ++in_b_e__Vidx) in_b_e__Vcvt = in_b_e;
    int in_ctrl_e__Vcvt;
    for (size_t in_ctrl_e__Vidx = 0; in_ctrl_e__Vidx < 1; ++in_ctrl_e__Vidx) in_ctrl_e__Vcvt = in_ctrl_e;
    svBit in_valid_e__Vcvt;
    for (size_t in_valid_e__Vidx = 0; in_valid_e__Vidx < 1; ++in_valid_e__Vidx) in_valid_e__Vcvt = in_valid_e;
    long long in_a_s__Vcvt;
    for (size_t in_a_s__Vidx = 0; in_a_s__Vidx < 1; ++in_a_s__Vidx) in_a_s__Vcvt = in_a_s;
    long long in_b_s__Vcvt;
    for (size_t in_b_s__Vidx = 0; in_b_s__Vidx < 1; ++in_b_s__Vidx) in_b_s__Vcvt = in_b_s;
    int in_ctrl_s__Vcvt;
    for (size_t in_ctrl_s__Vidx = 0; in_ctrl_s__Vidx < 1; ++in_ctrl_s__Vidx) in_ctrl_s__Vcvt = in_ctrl_s;
    svBit in_valid_s__Vcvt;
    for (size_t in_valid_s__Vidx = 0; in_valid_s__Vidx < 1; ++in_valid_s__Vidx) in_valid_s__Vcvt = in_valid_s;
    long long in_a_w__Vcvt;
    for (size_t in_a_w__Vidx = 0; in_a_w__Vidx < 1; ++in_a_w__Vidx) in_a_w__Vcvt = in_a_w;
    long long in_b_w__Vcvt;
    for (size_t in_b_w__Vidx = 0; in_b_w__Vidx < 1; ++in_b_w__Vidx) in_b_w__Vcvt = in_b_w;
    int in_ctrl_w__Vcvt;
    for (size_t in_ctrl_w__Vidx = 0; in_ctrl_w__Vidx < 1; ++in_ctrl_w__Vidx) in_ctrl_w__Vcvt = in_ctrl_w;
    svBit in_valid_w__Vcvt;
    for (size_t in_valid_w__Vidx = 0; in_valid_w__Vidx < 1; ++in_valid_w__Vidx) in_valid_w__Vcvt = in_valid_w;
    long long host_in_a__Vcvt;
    for (size_t host_in_a__Vidx = 0; host_in_a__Vidx < 1; ++host_in_a__Vidx) host_in_a__Vcvt = host_in_a;
    long long host_in_b__Vcvt;
    for (size_t host_in_b__Vidx = 0; host_in_b__Vidx < 1; ++host_in_b__Vidx) host_in_b__Vcvt = host_in_b;
    int host_in_ctrl__Vcvt;
    for (size_t host_in_ctrl__Vidx = 0; host_in_ctrl__Vidx < 1; ++host_in_ctrl__Vidx) host_in_ctrl__Vcvt = host_in_ctrl;
    svBit host_in_valid__Vcvt;
    for (size_t host_in_valid__Vidx = 0; host_in_valid__Vidx < 1; ++host_in_valid__Vidx) host_in_valid__Vcvt = host_in_valid;
    long long out_a_n__Vcvt;
    long long out_b_n__Vcvt;
    int out_ctrl_n__Vcvt;
    svBit out_valid_n__Vcvt;
    long long out_a_e__Vcvt;
    long long out_b_e__Vcvt;
    int out_ctrl_e__Vcvt;
    svBit out_valid_e__Vcvt;
    long long out_a_s__Vcvt;
    long long out_b_s__Vcvt;
    int out_ctrl_s__Vcvt;
    svBit out_valid_s__Vcvt;
    long long out_a_w__Vcvt;
    long long out_b_w__Vcvt;
    int out_ctrl_w__Vcvt;
    svBit out_valid_w__Vcvt;
    long long host_out_a__Vcvt;
    svBit host_out_valid__Vcvt;
    dpi_tile(in_a_n__Vcvt, in_b_n__Vcvt, in_ctrl_n__Vcvt, in_valid_n__Vcvt, in_a_e__Vcvt, in_b_e__Vcvt, in_ctrl_e__Vcvt, in_valid_e__Vcvt, in_a_s__Vcvt, in_b_s__Vcvt, in_ctrl_s__Vcvt, in_valid_s__Vcvt, in_a_w__Vcvt, in_b_w__Vcvt, in_ctrl_w__Vcvt, in_valid_w__Vcvt, host_in_a__Vcvt, host_in_b__Vcvt, host_in_ctrl__Vcvt, host_in_valid__Vcvt, &out_a_n__Vcvt, &out_b_n__Vcvt, &out_ctrl_n__Vcvt, &out_valid_n__Vcvt, &out_a_e__Vcvt, &out_b_e__Vcvt, &out_ctrl_e__Vcvt, &out_valid_e__Vcvt, &out_a_s__Vcvt, &out_b_s__Vcvt, &out_ctrl_s__Vcvt, &out_valid_s__Vcvt, &out_a_w__Vcvt, &out_b_w__Vcvt, &out_ctrl_w__Vcvt, &out_valid_w__Vcvt, &host_out_a__Vcvt, &host_out_valid__Vcvt);
    out_a_n = out_a_n__Vcvt;
    out_b_n = out_b_n__Vcvt;
    out_ctrl_n = out_ctrl_n__Vcvt;
    out_valid_n = (1U & out_valid_n__Vcvt);
    out_a_e = out_a_e__Vcvt;
    out_b_e = out_b_e__Vcvt;
    out_ctrl_e = out_ctrl_e__Vcvt;
    out_valid_e = (1U & out_valid_e__Vcvt);
    out_a_s = out_a_s__Vcvt;
    out_b_s = out_b_s__Vcvt;
    out_ctrl_s = out_ctrl_s__Vcvt;
    out_valid_s = (1U & out_valid_s__Vcvt);
    out_a_w = out_a_w__Vcvt;
    out_b_w = out_b_w__Vcvt;
    out_ctrl_w = out_ctrl_w__Vcvt;
    out_valid_w = (1U & out_valid_w__Vcvt);
    host_out_a = host_out_a__Vcvt;
    host_out_valid = (1U & host_out_valid__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalculator___024root___dump_triggers__ico(Vcalculator___024root* vlSelf);
#endif  // VL_DEBUG

void Vcalculator___024root___eval_triggers__ico(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_triggers__ico\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
    vlSelfRef.__VicoTriggered.setBit(1U, vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_a__1.neq(vlSelfRef.calculator__DOT__int_con__DOT__in_a));
    vlSelfRef.__VicoTriggered.setBit(2U, vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_b__1.neq(vlSelfRef.calculator__DOT__int_con__DOT__in_b));
    vlSelfRef.__VicoTriggered.setBit(3U, vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_ctrl__1.neq(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl));
    vlSelfRef.__VicoTriggered.setBit(4U, vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_valid__1.neq(vlSelfRef.calculator__DOT__int_con__DOT__in_valid));
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_a__1.assign(vlSelfRef.calculator__DOT__int_con__DOT__in_a);
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_b__1.assign(vlSelfRef.calculator__DOT__int_con__DOT__in_b);
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_ctrl__1.assign(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl);
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_valid__1.assign(vlSelfRef.calculator__DOT__int_con__DOT__in_valid);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered.setBit(1U, 1U);
        vlSelfRef.__VicoTriggered.setBit(2U, 1U);
        vlSelfRef.__VicoTriggered.setBit(3U, 1U);
        vlSelfRef.__VicoTriggered.setBit(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcalculator___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalculator___024root___dump_triggers__act(Vcalculator___024root* vlSelf);
#endif  // VL_DEBUG

void Vcalculator___024root___eval_triggers__act(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_triggers__act\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_a__2.neq(vlSelfRef.calculator__DOT__int_con__DOT__in_a));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_b__2.neq(vlSelfRef.calculator__DOT__int_con__DOT__in_b));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_ctrl__2.neq(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl));
    vlSelfRef.__VactTriggered.setBit(3U, vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_valid__2.neq(vlSelfRef.calculator__DOT__int_con__DOT__in_valid));
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_a__2.assign(vlSelfRef.calculator__DOT__int_con__DOT__in_a);
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_b__2.assign(vlSelfRef.calculator__DOT__int_con__DOT__in_b);
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_ctrl__2.assign(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl);
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__int_con__DOT__in_valid__2.assign(vlSelfRef.calculator__DOT__int_con__DOT__in_valid);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcalculator___024root___dump_triggers__act(vlSelf);
    }
#endif
}
