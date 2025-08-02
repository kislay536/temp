// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcalculator.h for the primary calling header

#include "Vcalculator__pch.h"
#include "Vcalculator__Syms.h"
#include "Vcalculator___024root.h"

extern "C" void dpi_multiplier_init();

VL_INLINE_OPT void Vcalculator___024root____Vdpiimwrap_calculator__DOT__dpi_multiplier_init_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root____Vdpiimwrap_calculator__DOT__dpi_multiplier_init_TOP\n"); );
    // Body
    dpi_multiplier_init();
}

extern "C" void dpi_multiplier_send(unsigned long long a, unsigned long long b);

VL_INLINE_OPT void Vcalculator___024root____Vdpiimwrap_calculator__DOT__dpi_multiplier_send_TOP(QData/*63:0*/ a, QData/*63:0*/ b) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root____Vdpiimwrap_calculator__DOT__dpi_multiplier_send_TOP\n"); );
    // Body
    unsigned long long a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    unsigned long long b__Vcvt;
    for (size_t b__Vidx = 0; b__Vidx < 1; ++b__Vidx) b__Vcvt = b;
    dpi_multiplier_send(a__Vcvt, b__Vcvt);
}

extern "C" long long dpi_multiplier_eval();

VL_INLINE_OPT void Vcalculator___024root____Vdpiimwrap_calculator__DOT__dpi_multiplier_eval_TOP(QData/*63:0*/ &dpi_multiplier_eval__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root____Vdpiimwrap_calculator__DOT__dpi_multiplier_eval_TOP\n"); );
    // Body
    long long dpi_multiplier_eval__Vfuncrtn__Vcvt;
    dpi_multiplier_eval__Vfuncrtn__Vcvt = dpi_multiplier_eval();
    dpi_multiplier_eval__Vfuncrtn = dpi_multiplier_eval__Vfuncrtn__Vcvt;
}

extern "C" void dpi_multiplier_eval2(unsigned long long a, unsigned long long b, unsigned long long* result);

VL_INLINE_OPT void Vcalculator___024root____Vdpiimwrap_calculator__DOT__u_mul__DOT__dpi_multiplier_eval2_TOP(QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root____Vdpiimwrap_calculator__DOT__u_mul__DOT__dpi_multiplier_eval2_TOP\n"); );
    // Body
    unsigned long long a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    unsigned long long b__Vcvt;
    for (size_t b__Vidx = 0; b__Vidx < 1; ++b__Vidx) b__Vcvt = b;
    unsigned long long result__Vcvt;
    dpi_multiplier_eval2(a__Vcvt, b__Vcvt, &result__Vcvt);
    result = result__Vcvt;
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
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcalculator___024root___dump_triggers__act(vlSelf);
    }
#endif
}
