// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsubtractor.h for the primary calling header

#include "Vsubtractor__pch.h"
#include "Vsubtractor___024root.h"

void Vsubtractor___024root___ico_sequent__TOP__0(Vsubtractor___024root* vlSelf);

void Vsubtractor___024root___eval_ico(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___eval_ico\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vsubtractor___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsubtractor___024root___ico_sequent__TOP__0(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___ico_sequent__TOP__0\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.result = 0ULL;
    vlSelfRef.ack_to_add = 0U;
    vlSelfRef.ack_to_mul = 0U;
    vlSelfRef.ack_to_div = 0U;
    vlSelfRef.working = 0U;
    if (vlSelfRef.start) {
        if ((((IData)(vlSelfRef.ack_in_add) & (IData)(vlSelfRef.ack_in_mul)) 
             & (IData)(vlSelfRef.ack_in_div))) {
            vlSelfRef.result = (vlSelfRef.a - vlSelfRef.b);
        }
        vlSelfRef.working = 1U;
        vlSelfRef.ack_to_add = (1U & (~ (IData)(vlSelfRef.working)));
        vlSelfRef.ack_to_mul = (1U & (~ (IData)(vlSelfRef.working)));
        vlSelfRef.ack_to_div = (1U & (~ (IData)(vlSelfRef.working)));
    } else {
        if (vlSelfRef.add_working) {
            vlSelfRef.ack_to_add = 1U;
        }
        if (vlSelfRef.mul_working) {
            vlSelfRef.ack_to_mul = 1U;
        }
        if (vlSelfRef.div_working) {
            vlSelfRef.ack_to_div = 1U;
        }
    }
}

void Vsubtractor___024root___eval_triggers__ico(Vsubtractor___024root* vlSelf);

bool Vsubtractor___024root___eval_phase__ico(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___eval_phase__ico\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsubtractor___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vsubtractor___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsubtractor___024root___eval_act(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___eval_act\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsubtractor___024root___eval_nba(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___eval_nba\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsubtractor___024root___eval_triggers__act(Vsubtractor___024root* vlSelf);

bool Vsubtractor___024root___eval_phase__act(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___eval_phase__act\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsubtractor___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsubtractor___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsubtractor___024root___eval_phase__nba(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___eval_phase__nba\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsubtractor___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubtractor___024root___dump_triggers__ico(Vsubtractor___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubtractor___024root___dump_triggers__nba(Vsubtractor___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsubtractor___024root___dump_triggers__act(Vsubtractor___024root* vlSelf);
#endif  // VL_DEBUG

void Vsubtractor___024root___eval(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___eval\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vsubtractor___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("subtractor.v", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsubtractor___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsubtractor___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("subtractor.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsubtractor___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("subtractor.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsubtractor___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsubtractor___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsubtractor___024root___eval_debug_assertions(Vsubtractor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsubtractor___024root___eval_debug_assertions\n"); );
    Vsubtractor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY(((vlSelfRef.ack_in_add & 0xfeU)))) {
        Verilated::overWidthError("ack_in_add");}
    if (VL_UNLIKELY(((vlSelfRef.ack_in_mul & 0xfeU)))) {
        Verilated::overWidthError("ack_in_mul");}
    if (VL_UNLIKELY(((vlSelfRef.ack_in_div & 0xfeU)))) {
        Verilated::overWidthError("ack_in_div");}
    if (VL_UNLIKELY(((vlSelfRef.add_working & 0xfeU)))) {
        Verilated::overWidthError("add_working");}
    if (VL_UNLIKELY(((vlSelfRef.mul_working & 0xfeU)))) {
        Verilated::overWidthError("mul_working");}
    if (VL_UNLIKELY(((vlSelfRef.div_working & 0xfeU)))) {
        Verilated::overWidthError("div_working");}
}
#endif  // VL_DEBUG
