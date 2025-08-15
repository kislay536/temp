// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcalculator.h for the primary calling header

#include "Vcalculator__pch.h"
#include "Vcalculator__Syms.h"
#include "Vcalculator___024root.h"

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
