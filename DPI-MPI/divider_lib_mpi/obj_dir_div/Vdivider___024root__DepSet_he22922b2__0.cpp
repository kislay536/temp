// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdivider.h for the primary calling header

#include "Vdivider__pch.h"
#include "Vdivider__Syms.h"
#include "Vdivider___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivider___024root___dump_triggers__ico(Vdivider___024root* vlSelf);
#endif  // VL_DEBUG

void Vdivider___024root___eval_triggers__ico(Vdivider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_triggers__ico\n"); );
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdivider___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivider___024root___dump_triggers__act(Vdivider___024root* vlSelf);
#endif  // VL_DEBUG

void Vdivider___024root___eval_triggers__act(Vdivider___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivider___024root___eval_triggers__act\n"); );
    Vdivider__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdivider___024root___dump_triggers__act(vlSelf);
    }
#endif
}
