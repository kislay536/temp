// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier.h for the primary calling header

#include "Vmultiplier__pch.h"
#include "Vmultiplier___024root.h"

void Vmultiplier___024root___ico_sequent__TOP__0(Vmultiplier___024root* vlSelf);

void Vmultiplier___024root___eval_ico(Vmultiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_ico\n"); );
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vmultiplier___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmultiplier___024root___ico_sequent__TOP__0(Vmultiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___ico_sequent__TOP__0\n"); );
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.result = (vlSelfRef.a * vlSelfRef.b);
}

void Vmultiplier___024root___eval_triggers__ico(Vmultiplier___024root* vlSelf);

bool Vmultiplier___024root___eval_phase__ico(Vmultiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_phase__ico\n"); );
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmultiplier___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vmultiplier___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmultiplier___024root___eval_act(Vmultiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_act\n"); );
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmultiplier___024root___eval_nba(Vmultiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_nba\n"); );
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmultiplier___024root___eval_triggers__act(Vmultiplier___024root* vlSelf);

bool Vmultiplier___024root___eval_phase__act(Vmultiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_phase__act\n"); );
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmultiplier___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmultiplier___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmultiplier___024root___eval_phase__nba(Vmultiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_phase__nba\n"); );
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmultiplier___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__ico(Vmultiplier___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__nba(Vmultiplier___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__act(Vmultiplier___024root* vlSelf);
#endif  // VL_DEBUG

void Vmultiplier___024root___eval(Vmultiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval\n"); );
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmultiplier___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("multiplier.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmultiplier___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmultiplier___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("multiplier.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmultiplier___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("multiplier.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmultiplier___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmultiplier___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmultiplier___024root___eval_debug_assertions(Vmultiplier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_debug_assertions\n"); );
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
