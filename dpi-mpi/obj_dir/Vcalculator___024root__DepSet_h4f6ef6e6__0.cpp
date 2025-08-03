// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcalculator.h for the primary calling header

#include "Vcalculator__pch.h"
#include "Vcalculator___024root.h"

void Vcalculator___024root___ico_sequent__TOP__0(Vcalculator___024root* vlSelf);

void Vcalculator___024root___eval_ico(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_ico\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcalculator___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vcalculator___024root____Vdpiimwrap_calculator__DOT__u_mul__DOT__dpi_multiplier_TOP(QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);

VL_INLINE_OPT void Vcalculator___024root___ico_sequent__TOP__0(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___ico_sequent__TOP__0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcalculator___024root____Vdpiimwrap_calculator__DOT__u_mul__DOT__dpi_multiplier_TOP(vlSelfRef.a, vlSelfRef.b, vlSelfRef.__Vtask_calculator__DOT__u_mul__DOT__dpi_multiplier__0__result);
    vlSelfRef.calculator__DOT__mul_out = vlSelfRef.__Vtask_calculator__DOT__u_mul__DOT__dpi_multiplier__0__result;
    vlSelfRef.result = ((0U == (IData)(vlSelfRef.mode))
                         ? (vlSelfRef.a + vlSelfRef.b)
                         : ((1U == (IData)(vlSelfRef.mode))
                             ? (vlSelfRef.a - vlSelfRef.b)
                             : ((2U == (IData)(vlSelfRef.mode))
                                 ? vlSelfRef.calculator__DOT__mul_out
                                 : ((3U == (IData)(vlSelfRef.mode))
                                     ? ((0ULL == vlSelfRef.b)
                                         ? 0ULL : VL_DIV_QQQ(64, vlSelfRef.a, vlSelfRef.b))
                                     : 0ULL))));
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

void Vcalculator___024root___eval_act(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_act\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcalculator___024root___eval_nba(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_nba\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcalculator___024root___eval_triggers__act(Vcalculator___024root* vlSelf);

bool Vcalculator___024root___eval_phase__act(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_phase__act\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcalculator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcalculator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcalculator___024root___eval_phase__nba(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_phase__nba\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcalculator___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalculator___024root___dump_triggers__ico(Vcalculator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalculator___024root___dump_triggers__nba(Vcalculator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalculator___024root___dump_triggers__act(Vcalculator___024root* vlSelf);
#endif  // VL_DEBUG

void Vcalculator___024root___eval(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcalculator___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("calculator.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcalculator___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcalculator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("calculator.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcalculator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("calculator.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcalculator___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcalculator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcalculator___024root___eval_debug_assertions(Vcalculator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root___eval_debug_assertions\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.mode & 0xf0U)))) {
        Verilated::overWidthError("mode");}
}
#endif  // VL_DEBUG
