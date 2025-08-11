// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcalculator.h for the primary calling header

#include "Vcalculator__pch.h"
#include "Vcalculator__Syms.h"
#include "Vcalculator___024root.h"

extern "C" void dpi_adder(unsigned long long a, unsigned long long b, unsigned int start, unsigned int ack_in_mul, unsigned int ack_in_sub, unsigned int ack_in_div, unsigned int mul_working, unsigned int sub_working, unsigned int div_working, unsigned int* ack_to_mul, unsigned int* ack_to_sub, unsigned int* ack_to_div, unsigned int* working, unsigned long long* result);

VL_INLINE_OPT void Vcalculator___024root____Vdpiimwrap_calculator__DOT__u_add__DOT__dpi_adder_TOP(QData/*63:0*/ a, QData/*63:0*/ b, IData/*31:0*/ start, IData/*31:0*/ ack_in_mul, IData/*31:0*/ ack_in_sub, IData/*31:0*/ ack_in_div, IData/*31:0*/ mul_working, IData/*31:0*/ sub_working, IData/*31:0*/ div_working, IData/*31:0*/ &ack_to_mul, IData/*31:0*/ &ack_to_sub, IData/*31:0*/ &ack_to_div, IData/*31:0*/ &working, QData/*63:0*/ &result) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root____Vdpiimwrap_calculator__DOT__u_add__DOT__dpi_adder_TOP\n"); );
    // Body
    unsigned long long a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    unsigned long long b__Vcvt;
    for (size_t b__Vidx = 0; b__Vidx < 1; ++b__Vidx) b__Vcvt = b;
    unsigned int start__Vcvt;
    for (size_t start__Vidx = 0; start__Vidx < 1; ++start__Vidx) start__Vcvt = start;
    unsigned int ack_in_mul__Vcvt;
    for (size_t ack_in_mul__Vidx = 0; ack_in_mul__Vidx < 1; ++ack_in_mul__Vidx) ack_in_mul__Vcvt = ack_in_mul;
    unsigned int ack_in_sub__Vcvt;
    for (size_t ack_in_sub__Vidx = 0; ack_in_sub__Vidx < 1; ++ack_in_sub__Vidx) ack_in_sub__Vcvt = ack_in_sub;
    unsigned int ack_in_div__Vcvt;
    for (size_t ack_in_div__Vidx = 0; ack_in_div__Vidx < 1; ++ack_in_div__Vidx) ack_in_div__Vcvt = ack_in_div;
    unsigned int mul_working__Vcvt;
    for (size_t mul_working__Vidx = 0; mul_working__Vidx < 1; ++mul_working__Vidx) mul_working__Vcvt = mul_working;
    unsigned int sub_working__Vcvt;
    for (size_t sub_working__Vidx = 0; sub_working__Vidx < 1; ++sub_working__Vidx) sub_working__Vcvt = sub_working;
    unsigned int div_working__Vcvt;
    for (size_t div_working__Vidx = 0; div_working__Vidx < 1; ++div_working__Vidx) div_working__Vcvt = div_working;
    unsigned int ack_to_mul__Vcvt;
    unsigned int ack_to_sub__Vcvt;
    unsigned int ack_to_div__Vcvt;
    unsigned int working__Vcvt;
    unsigned long long result__Vcvt;
    dpi_adder(a__Vcvt, b__Vcvt, start__Vcvt, ack_in_mul__Vcvt, ack_in_sub__Vcvt, ack_in_div__Vcvt, mul_working__Vcvt, sub_working__Vcvt, div_working__Vcvt, &ack_to_mul__Vcvt, &ack_to_sub__Vcvt, &ack_to_div__Vcvt, &working__Vcvt, &result__Vcvt);
    ack_to_mul = ack_to_mul__Vcvt;
    ack_to_sub = ack_to_sub__Vcvt;
    ack_to_div = ack_to_div__Vcvt;
    working = working__Vcvt;
    result = result__Vcvt;
}

extern "C" void dpi_subtractor(unsigned long long a, unsigned long long b, unsigned int start, unsigned int ack_in_add, unsigned int ack_in_mul, unsigned int ack_in_div, unsigned int add_working, unsigned int mul_working, unsigned int div_working, unsigned int* ack_to_add, unsigned int* ack_to_mul, unsigned int* ack_to_div, unsigned int* working, unsigned long long* result);

VL_INLINE_OPT void Vcalculator___024root____Vdpiimwrap_calculator__DOT__u_sub__DOT__dpi_subtractor_TOP(QData/*63:0*/ a, QData/*63:0*/ b, IData/*31:0*/ start, IData/*31:0*/ ack_in_add, IData/*31:0*/ ack_in_mul, IData/*31:0*/ ack_in_div, IData/*31:0*/ add_working, IData/*31:0*/ mul_working, IData/*31:0*/ div_working, IData/*31:0*/ &ack_to_add, IData/*31:0*/ &ack_to_mul, IData/*31:0*/ &ack_to_div, IData/*31:0*/ &working, QData/*63:0*/ &result) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root____Vdpiimwrap_calculator__DOT__u_sub__DOT__dpi_subtractor_TOP\n"); );
    // Body
    unsigned long long a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    unsigned long long b__Vcvt;
    for (size_t b__Vidx = 0; b__Vidx < 1; ++b__Vidx) b__Vcvt = b;
    unsigned int start__Vcvt;
    for (size_t start__Vidx = 0; start__Vidx < 1; ++start__Vidx) start__Vcvt = start;
    unsigned int ack_in_add__Vcvt;
    for (size_t ack_in_add__Vidx = 0; ack_in_add__Vidx < 1; ++ack_in_add__Vidx) ack_in_add__Vcvt = ack_in_add;
    unsigned int ack_in_mul__Vcvt;
    for (size_t ack_in_mul__Vidx = 0; ack_in_mul__Vidx < 1; ++ack_in_mul__Vidx) ack_in_mul__Vcvt = ack_in_mul;
    unsigned int ack_in_div__Vcvt;
    for (size_t ack_in_div__Vidx = 0; ack_in_div__Vidx < 1; ++ack_in_div__Vidx) ack_in_div__Vcvt = ack_in_div;
    unsigned int add_working__Vcvt;
    for (size_t add_working__Vidx = 0; add_working__Vidx < 1; ++add_working__Vidx) add_working__Vcvt = add_working;
    unsigned int mul_working__Vcvt;
    for (size_t mul_working__Vidx = 0; mul_working__Vidx < 1; ++mul_working__Vidx) mul_working__Vcvt = mul_working;
    unsigned int div_working__Vcvt;
    for (size_t div_working__Vidx = 0; div_working__Vidx < 1; ++div_working__Vidx) div_working__Vcvt = div_working;
    unsigned int ack_to_add__Vcvt;
    unsigned int ack_to_mul__Vcvt;
    unsigned int ack_to_div__Vcvt;
    unsigned int working__Vcvt;
    unsigned long long result__Vcvt;
    dpi_subtractor(a__Vcvt, b__Vcvt, start__Vcvt, ack_in_add__Vcvt, ack_in_mul__Vcvt, ack_in_div__Vcvt, add_working__Vcvt, mul_working__Vcvt, div_working__Vcvt, &ack_to_add__Vcvt, &ack_to_mul__Vcvt, &ack_to_div__Vcvt, &working__Vcvt, &result__Vcvt);
    ack_to_add = ack_to_add__Vcvt;
    ack_to_mul = ack_to_mul__Vcvt;
    ack_to_div = ack_to_div__Vcvt;
    working = working__Vcvt;
    result = result__Vcvt;
}

extern "C" void dpi_multiplier(unsigned long long a, unsigned long long b, unsigned int start, unsigned int ack_in_add, unsigned int ack_in_sub, unsigned int ack_in_div, unsigned int add_working, unsigned int sub_working, unsigned int div_working, unsigned int* ack_to_add, unsigned int* ack_to_sub, unsigned int* ack_to_div, unsigned int* working, unsigned long long* result);

VL_INLINE_OPT void Vcalculator___024root____Vdpiimwrap_calculator__DOT__u_mul__DOT__dpi_multiplier_TOP(QData/*63:0*/ a, QData/*63:0*/ b, IData/*31:0*/ start, IData/*31:0*/ ack_in_add, IData/*31:0*/ ack_in_sub, IData/*31:0*/ ack_in_div, IData/*31:0*/ add_working, IData/*31:0*/ sub_working, IData/*31:0*/ div_working, IData/*31:0*/ &ack_to_add, IData/*31:0*/ &ack_to_sub, IData/*31:0*/ &ack_to_div, IData/*31:0*/ &working, QData/*63:0*/ &result) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root____Vdpiimwrap_calculator__DOT__u_mul__DOT__dpi_multiplier_TOP\n"); );
    // Body
    unsigned long long a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    unsigned long long b__Vcvt;
    for (size_t b__Vidx = 0; b__Vidx < 1; ++b__Vidx) b__Vcvt = b;
    unsigned int start__Vcvt;
    for (size_t start__Vidx = 0; start__Vidx < 1; ++start__Vidx) start__Vcvt = start;
    unsigned int ack_in_add__Vcvt;
    for (size_t ack_in_add__Vidx = 0; ack_in_add__Vidx < 1; ++ack_in_add__Vidx) ack_in_add__Vcvt = ack_in_add;
    unsigned int ack_in_sub__Vcvt;
    for (size_t ack_in_sub__Vidx = 0; ack_in_sub__Vidx < 1; ++ack_in_sub__Vidx) ack_in_sub__Vcvt = ack_in_sub;
    unsigned int ack_in_div__Vcvt;
    for (size_t ack_in_div__Vidx = 0; ack_in_div__Vidx < 1; ++ack_in_div__Vidx) ack_in_div__Vcvt = ack_in_div;
    unsigned int add_working__Vcvt;
    for (size_t add_working__Vidx = 0; add_working__Vidx < 1; ++add_working__Vidx) add_working__Vcvt = add_working;
    unsigned int sub_working__Vcvt;
    for (size_t sub_working__Vidx = 0; sub_working__Vidx < 1; ++sub_working__Vidx) sub_working__Vcvt = sub_working;
    unsigned int div_working__Vcvt;
    for (size_t div_working__Vidx = 0; div_working__Vidx < 1; ++div_working__Vidx) div_working__Vcvt = div_working;
    unsigned int ack_to_add__Vcvt;
    unsigned int ack_to_sub__Vcvt;
    unsigned int ack_to_div__Vcvt;
    unsigned int working__Vcvt;
    unsigned long long result__Vcvt;
    dpi_multiplier(a__Vcvt, b__Vcvt, start__Vcvt, ack_in_add__Vcvt, ack_in_sub__Vcvt, ack_in_div__Vcvt, add_working__Vcvt, sub_working__Vcvt, div_working__Vcvt, &ack_to_add__Vcvt, &ack_to_sub__Vcvt, &ack_to_div__Vcvt, &working__Vcvt, &result__Vcvt);
    ack_to_add = ack_to_add__Vcvt;
    ack_to_sub = ack_to_sub__Vcvt;
    ack_to_div = ack_to_div__Vcvt;
    working = working__Vcvt;
    result = result__Vcvt;
}

extern "C" void dpi_divider(unsigned long long a, unsigned long long b, unsigned int start, unsigned int ack_in_add, unsigned int ack_in_sub, unsigned int ack_in_mul, unsigned int add_working, unsigned int sub_working, unsigned int mul_working, unsigned int* ack_to_add, unsigned int* ack_to_sub, unsigned int* ack_to_mul, unsigned int* working, unsigned long long* result);

VL_INLINE_OPT void Vcalculator___024root____Vdpiimwrap_calculator__DOT__u_div__DOT__dpi_divider_TOP(QData/*63:0*/ a, QData/*63:0*/ b, IData/*31:0*/ start, IData/*31:0*/ ack_in_add, IData/*31:0*/ ack_in_sub, IData/*31:0*/ ack_in_mul, IData/*31:0*/ add_working, IData/*31:0*/ sub_working, IData/*31:0*/ mul_working, IData/*31:0*/ &ack_to_add, IData/*31:0*/ &ack_to_sub, IData/*31:0*/ &ack_to_mul, IData/*31:0*/ &working, QData/*63:0*/ &result) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root____Vdpiimwrap_calculator__DOT__u_div__DOT__dpi_divider_TOP\n"); );
    // Body
    unsigned long long a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    unsigned long long b__Vcvt;
    for (size_t b__Vidx = 0; b__Vidx < 1; ++b__Vidx) b__Vcvt = b;
    unsigned int start__Vcvt;
    for (size_t start__Vidx = 0; start__Vidx < 1; ++start__Vidx) start__Vcvt = start;
    unsigned int ack_in_add__Vcvt;
    for (size_t ack_in_add__Vidx = 0; ack_in_add__Vidx < 1; ++ack_in_add__Vidx) ack_in_add__Vcvt = ack_in_add;
    unsigned int ack_in_sub__Vcvt;
    for (size_t ack_in_sub__Vidx = 0; ack_in_sub__Vidx < 1; ++ack_in_sub__Vidx) ack_in_sub__Vcvt = ack_in_sub;
    unsigned int ack_in_mul__Vcvt;
    for (size_t ack_in_mul__Vidx = 0; ack_in_mul__Vidx < 1; ++ack_in_mul__Vidx) ack_in_mul__Vcvt = ack_in_mul;
    unsigned int add_working__Vcvt;
    for (size_t add_working__Vidx = 0; add_working__Vidx < 1; ++add_working__Vidx) add_working__Vcvt = add_working;
    unsigned int sub_working__Vcvt;
    for (size_t sub_working__Vidx = 0; sub_working__Vidx < 1; ++sub_working__Vidx) sub_working__Vcvt = sub_working;
    unsigned int mul_working__Vcvt;
    for (size_t mul_working__Vidx = 0; mul_working__Vidx < 1; ++mul_working__Vidx) mul_working__Vcvt = mul_working;
    unsigned int ack_to_add__Vcvt;
    unsigned int ack_to_sub__Vcvt;
    unsigned int ack_to_mul__Vcvt;
    unsigned int working__Vcvt;
    unsigned long long result__Vcvt;
    dpi_divider(a__Vcvt, b__Vcvt, start__Vcvt, ack_in_add__Vcvt, ack_in_sub__Vcvt, ack_in_mul__Vcvt, add_working__Vcvt, sub_working__Vcvt, mul_working__Vcvt, &ack_to_add__Vcvt, &ack_to_sub__Vcvt, &ack_to_mul__Vcvt, &working__Vcvt, &result__Vcvt);
    ack_to_add = ack_to_add__Vcvt;
    ack_to_sub = ack_to_sub__Vcvt;
    ack_to_mul = ack_to_mul__Vcvt;
    working = working__Vcvt;
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
    vlSelfRef.__VicoTriggered.setBit(1U, ((IData)(vlSelfRef.calculator__DOT__add_ack_from_mul) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_mul__1)));
    vlSelfRef.__VicoTriggered.setBit(2U, ((IData)(vlSelfRef.calculator__DOT__add_ack_from_sub) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_sub__1)));
    vlSelfRef.__VicoTriggered.setBit(3U, ((IData)(vlSelfRef.calculator__DOT__add_ack_from_div) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_div__1)));
    vlSelfRef.__VicoTriggered.setBit(4U, ((IData)(vlSelfRef.calculator__DOT__mul_working) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__mul_working__1)));
    vlSelfRef.__VicoTriggered.setBit(5U, ((IData)(vlSelfRef.calculator__DOT__sub_working) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_working__1)));
    vlSelfRef.__VicoTriggered.setBit(6U, ((IData)(vlSelfRef.calculator__DOT__div_working) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__div_working__1)));
    vlSelfRef.__VicoTriggered.setBit(7U, ((IData)(vlSelfRef.calculator__DOT__sub_ack_from_mul) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_mul__1)));
    vlSelfRef.__VicoTriggered.setBit(8U, ((IData)(vlSelfRef.calculator__DOT__sub_ack_from_div) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_div__1)));
    vlSelfRef.__VicoTriggered.setBit(9U, ((IData)(vlSelfRef.calculator__DOT__mul_ack_from_div) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__mul_ack_from_div__1)));
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_mul__1 
        = vlSelfRef.calculator__DOT__add_ack_from_mul;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_sub__1 
        = vlSelfRef.calculator__DOT__add_ack_from_sub;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_div__1 
        = vlSelfRef.calculator__DOT__add_ack_from_div;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__mul_working__1 
        = vlSelfRef.calculator__DOT__mul_working;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_working__1 
        = vlSelfRef.calculator__DOT__sub_working;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__div_working__1 
        = vlSelfRef.calculator__DOT__div_working;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_mul__1 
        = vlSelfRef.calculator__DOT__sub_ack_from_mul;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_div__1 
        = vlSelfRef.calculator__DOT__sub_ack_from_div;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__mul_ack_from_div__1 
        = vlSelfRef.calculator__DOT__mul_ack_from_div;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered.setBit(1U, 1U);
        vlSelfRef.__VicoTriggered.setBit(2U, 1U);
        vlSelfRef.__VicoTriggered.setBit(3U, 1U);
        vlSelfRef.__VicoTriggered.setBit(4U, 1U);
        vlSelfRef.__VicoTriggered.setBit(5U, 1U);
        vlSelfRef.__VicoTriggered.setBit(6U, 1U);
        vlSelfRef.__VicoTriggered.setBit(7U, 1U);
        vlSelfRef.__VicoTriggered.setBit(8U, 1U);
        vlSelfRef.__VicoTriggered.setBit(9U, 1U);
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
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.calculator__DOT__add_ack_from_mul) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_mul__2)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.calculator__DOT__add_ack_from_sub) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_sub__2)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.calculator__DOT__add_ack_from_div) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_div__2)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.calculator__DOT__mul_working) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__mul_working__2)));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSelfRef.calculator__DOT__sub_working) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_working__2)));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSelfRef.calculator__DOT__div_working) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__div_working__2)));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSelfRef.calculator__DOT__sub_ack_from_mul) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_mul__2)));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(vlSelfRef.calculator__DOT__sub_ack_from_div) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_div__2)));
    vlSelfRef.__VactTriggered.setBit(8U, ((IData)(vlSelfRef.calculator__DOT__mul_ack_from_div) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__mul_ack_from_div__2)));
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_mul__2 
        = vlSelfRef.calculator__DOT__add_ack_from_mul;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_sub__2 
        = vlSelfRef.calculator__DOT__add_ack_from_sub;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_div__2 
        = vlSelfRef.calculator__DOT__add_ack_from_div;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__mul_working__2 
        = vlSelfRef.calculator__DOT__mul_working;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_working__2 
        = vlSelfRef.calculator__DOT__sub_working;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__div_working__2 
        = vlSelfRef.calculator__DOT__div_working;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_mul__2 
        = vlSelfRef.calculator__DOT__sub_ack_from_mul;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_div__2 
        = vlSelfRef.calculator__DOT__sub_ack_from_div;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__mul_ack_from_div__2 
        = vlSelfRef.calculator__DOT__mul_ack_from_div;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
        vlSelfRef.__VactTriggered.setBit(6U, 1U);
        vlSelfRef.__VactTriggered.setBit(7U, 1U);
        vlSelfRef.__VactTriggered.setBit(8U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcalculator___024root___dump_triggers__act(vlSelf);
    }
#endif
}
