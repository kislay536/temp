// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcalculator.h for the primary calling header

#include "Vcalculator__pch.h"
#include "Vcalculator__Syms.h"
#include "Vcalculator___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalculator___024root___dump_triggers__stl(Vcalculator___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcalculator___024root___eval_triggers__stl(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_triggers__stl\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.setBit(1U, vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__in_a__0.neq(vlSelfRef.calculator__DOT__in_a));
    vlSelfRef.__VstlTriggered.setBit(2U, vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__in_b__0.neq(vlSelfRef.calculator__DOT__in_b));
    vlSelfRef.__VstlTriggered.setBit(3U, vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__in_ctrl__0.neq(vlSelfRef.calculator__DOT__in_ctrl));
    vlSelfRef.__VstlTriggered.setBit(4U, vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__in_valid__0.neq(vlSelfRef.calculator__DOT__in_valid));
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__in_a__0.assign(vlSelfRef.calculator__DOT__in_a);
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__in_b__0.assign(vlSelfRef.calculator__DOT__in_b);
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__in_ctrl__0.assign(vlSelfRef.calculator__DOT__in_ctrl);
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__in_valid__0.assign(vlSelfRef.calculator__DOT__in_valid);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.setBit(1U, 1U);
        vlSelfRef.__VstlTriggered.setBit(2U, 1U);
        vlSelfRef.__VstlTriggered.setBit(3U, 1U);
        vlSelfRef.__VstlTriggered.setBit(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcalculator___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
