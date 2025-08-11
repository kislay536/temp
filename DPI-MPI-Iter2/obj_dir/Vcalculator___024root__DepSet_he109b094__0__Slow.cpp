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
    vlSelfRef.__VstlTriggered.setBit(1U, ((IData)(vlSelfRef.calculator__DOT__add_ack_from_mul) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_mul__0)));
    vlSelfRef.__VstlTriggered.setBit(2U, ((IData)(vlSelfRef.calculator__DOT__add_ack_from_sub) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_sub__0)));
    vlSelfRef.__VstlTriggered.setBit(3U, ((IData)(vlSelfRef.calculator__DOT__add_ack_from_div) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_div__0)));
    vlSelfRef.__VstlTriggered.setBit(4U, ((IData)(vlSelfRef.calculator__DOT__mul_working) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__mul_working__0)));
    vlSelfRef.__VstlTriggered.setBit(5U, ((IData)(vlSelfRef.calculator__DOT__sub_working) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_working__0)));
    vlSelfRef.__VstlTriggered.setBit(6U, ((IData)(vlSelfRef.calculator__DOT__div_working) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__div_working__0)));
    vlSelfRef.__VstlTriggered.setBit(7U, ((IData)(vlSelfRef.calculator__DOT__sub_ack_from_mul) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_mul__0)));
    vlSelfRef.__VstlTriggered.setBit(8U, ((IData)(vlSelfRef.calculator__DOT__sub_ack_from_div) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_div__0)));
    vlSelfRef.__VstlTriggered.setBit(9U, ((IData)(vlSelfRef.calculator__DOT__mul_ack_from_div) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__mul_ack_from_div__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_mul__0 
        = vlSelfRef.calculator__DOT__add_ack_from_mul;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_sub__0 
        = vlSelfRef.calculator__DOT__add_ack_from_sub;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_div__0 
        = vlSelfRef.calculator__DOT__add_ack_from_div;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__mul_working__0 
        = vlSelfRef.calculator__DOT__mul_working;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_working__0 
        = vlSelfRef.calculator__DOT__sub_working;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__div_working__0 
        = vlSelfRef.calculator__DOT__div_working;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_mul__0 
        = vlSelfRef.calculator__DOT__sub_ack_from_mul;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_div__0 
        = vlSelfRef.calculator__DOT__sub_ack_from_div;
    vlSelfRef.__Vtrigprevexpr___TOP__calculator__DOT__mul_ack_from_div__0 
        = vlSelfRef.calculator__DOT__mul_ack_from_div;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.setBit(1U, 1U);
        vlSelfRef.__VstlTriggered.setBit(2U, 1U);
        vlSelfRef.__VstlTriggered.setBit(3U, 1U);
        vlSelfRef.__VstlTriggered.setBit(4U, 1U);
        vlSelfRef.__VstlTriggered.setBit(5U, 1U);
        vlSelfRef.__VstlTriggered.setBit(6U, 1U);
        vlSelfRef.__VstlTriggered.setBit(7U, 1U);
        vlSelfRef.__VstlTriggered.setBit(8U, 1U);
        vlSelfRef.__VstlTriggered.setBit(9U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcalculator___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
