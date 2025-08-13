// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tile_noc.h for the primary calling header

#include "Valu_tile_noc__pch.h"
#include "Valu_tile_noc___024root.h"

void Valu_tile_noc___024root___ico_sequent__TOP__0(Valu_tile_noc___024root* vlSelf);

void Valu_tile_noc___024root___eval_ico(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___eval_ico\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Valu_tile_noc___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Valu_tile_noc___024root___ico_sequent__TOP__0(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___ico_sequent__TOP__0\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ alu_tile_noc__DOT__sel_a;
    alu_tile_noc__DOT__sel_a = 0;
    QData/*63:0*/ alu_tile_noc__DOT__sel_b;
    alu_tile_noc__DOT__sel_b = 0;
    SData/*15:0*/ alu_tile_noc__DOT__sel_ctrl;
    alu_tile_noc__DOT__sel_ctrl = 0;
    CData/*0:0*/ alu_tile_noc__DOT__sel_valid;
    alu_tile_noc__DOT__sel_valid = 0;
    CData/*0:0*/ alu_tile_noc__DOT__am_dest;
    alu_tile_noc__DOT__am_dest = 0;
    QData/*63:0*/ alu_tile_noc__DOT__op_result;
    alu_tile_noc__DOT__op_result = 0;
    CData/*0:0*/ alu_tile_noc__DOT____VdfgExtracted_h81bc5224__0;
    alu_tile_noc__DOT____VdfgExtracted_h81bc5224__0 = 0;
    CData/*0:0*/ alu_tile_noc__DOT____VdfgExtracted_h81e25ccc__0;
    alu_tile_noc__DOT____VdfgExtracted_h81e25ccc__0 = 0;
    CData/*0:0*/ alu_tile_noc__DOT____VdfgExtracted_h78194cb6__0;
    alu_tile_noc__DOT____VdfgExtracted_h78194cb6__0 = 0;
    CData/*0:0*/ alu_tile_noc__DOT____VdfgExtracted_h774e6128__0;
    alu_tile_noc__DOT____VdfgExtracted_h774e6128__0 = 0;
    // Body
    alu_tile_noc__DOT__sel_b = 0ULL;
    alu_tile_noc__DOT__sel_a = 0ULL;
    alu_tile_noc__DOT__sel_valid = 0U;
    alu_tile_noc__DOT__sel_ctrl = 0U;
    if (vlSelfRef.host_in_valid) {
        alu_tile_noc__DOT__sel_b = vlSelfRef.host_in_b;
        alu_tile_noc__DOT__sel_a = vlSelfRef.host_in_a;
        alu_tile_noc__DOT__sel_valid = 1U;
        alu_tile_noc__DOT__sel_ctrl = vlSelfRef.host_in_ctrl;
    } else if (vlSelfRef.in_valid_n) {
        alu_tile_noc__DOT__sel_b = vlSelfRef.in_b_n;
        alu_tile_noc__DOT__sel_a = vlSelfRef.in_a_n;
        alu_tile_noc__DOT__sel_valid = 1U;
        alu_tile_noc__DOT__sel_ctrl = vlSelfRef.in_ctrl_n;
    } else if (vlSelfRef.in_valid_e) {
        alu_tile_noc__DOT__sel_b = vlSelfRef.in_b_e;
        alu_tile_noc__DOT__sel_a = vlSelfRef.in_a_e;
        alu_tile_noc__DOT__sel_valid = 1U;
        alu_tile_noc__DOT__sel_ctrl = vlSelfRef.in_ctrl_e;
    } else if (vlSelfRef.in_valid_s) {
        alu_tile_noc__DOT__sel_b = vlSelfRef.in_b_s;
        alu_tile_noc__DOT__sel_a = vlSelfRef.in_a_s;
        alu_tile_noc__DOT__sel_valid = 1U;
        alu_tile_noc__DOT__sel_ctrl = vlSelfRef.in_ctrl_s;
    } else if (vlSelfRef.in_valid_w) {
        alu_tile_noc__DOT__sel_b = vlSelfRef.in_b_w;
        alu_tile_noc__DOT__sel_a = vlSelfRef.in_a_w;
        alu_tile_noc__DOT__sel_valid = 1U;
        alu_tile_noc__DOT__sel_ctrl = vlSelfRef.in_ctrl_w;
    }
    alu_tile_noc__DOT____VdfgExtracted_h774e6128__0 
        = ((3U & (IData)(vlSelfRef.TILE_X)) > (3U & 
                                               ((IData)(alu_tile_noc__DOT__sel_ctrl) 
                                                >> 6U)));
    alu_tile_noc__DOT____VdfgExtracted_h78194cb6__0 
        = ((3U & (IData)(vlSelfRef.TILE_X)) < (3U & 
                                               ((IData)(alu_tile_noc__DOT__sel_ctrl) 
                                                >> 6U)));
    alu_tile_noc__DOT____VdfgExtracted_h81e25ccc__0 
        = ((3U & (IData)(vlSelfRef.TILE_Y)) > (3U & 
                                               ((IData)(alu_tile_noc__DOT__sel_ctrl) 
                                                >> 4U)));
    alu_tile_noc__DOT____VdfgExtracted_h81bc5224__0 
        = ((3U & (IData)(vlSelfRef.TILE_Y)) < (3U & 
                                               ((IData)(alu_tile_noc__DOT__sel_ctrl) 
                                                >> 4U)));
    alu_tile_noc__DOT__am_dest = ((IData)(alu_tile_noc__DOT__sel_valid) 
                                  & (((3U & ((IData)(alu_tile_noc__DOT__sel_ctrl) 
                                             >> 6U)) 
                                      == (3U & (IData)(vlSelfRef.TILE_X))) 
                                     & ((3U & ((IData)(alu_tile_noc__DOT__sel_ctrl) 
                                               >> 4U)) 
                                        == (3U & (IData)(vlSelfRef.TILE_Y)))));
    vlSelfRef.out_valid_s = 0U;
    vlSelfRef.out_ctrl_s = 0U;
    vlSelfRef.out_b_s = 0ULL;
    vlSelfRef.out_a_s = 0ULL;
    vlSelfRef.host_out_valid = 0U;
    vlSelfRef.out_valid_e = 0U;
    vlSelfRef.out_ctrl_e = 0U;
    vlSelfRef.out_valid_n = 0U;
    vlSelfRef.out_b_e = 0ULL;
    vlSelfRef.out_a_e = 0ULL;
    vlSelfRef.out_b_n = 0ULL;
    vlSelfRef.out_valid_w = 0U;
    vlSelfRef.out_b_w = 0ULL;
    vlSelfRef.out_ctrl_n = 0U;
    vlSelfRef.out_ctrl_w = 0U;
    alu_tile_noc__DOT__op_result = 0ULL;
    if ((((IData)(alu_tile_noc__DOT__sel_valid) & (IData)(alu_tile_noc__DOT__am_dest)) 
         & (~ ((IData)(alu_tile_noc__DOT__sel_ctrl) 
               >> 8U)))) {
        alu_tile_noc__DOT__op_result = ((8U & (IData)(alu_tile_noc__DOT__sel_ctrl))
                                         ? ((4U & (IData)(alu_tile_noc__DOT__sel_ctrl))
                                             ? 0ULL
                                             : ((2U 
                                                 & (IData)(alu_tile_noc__DOT__sel_ctrl))
                                                 ? 0ULL
                                                 : 
                                                ((1U 
                                                  & (IData)(alu_tile_noc__DOT__sel_ctrl))
                                                  ? 0ULL
                                                  : 
                                                 (alu_tile_noc__DOT__sel_a 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(alu_tile_noc__DOT__sel_b))))))
                                         : ((4U & (IData)(alu_tile_noc__DOT__sel_ctrl))
                                             ? ((2U 
                                                 & (IData)(alu_tile_noc__DOT__sel_ctrl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(alu_tile_noc__DOT__sel_ctrl))
                                                  ? 
                                                 (alu_tile_noc__DOT__sel_a 
                                                  << 
                                                  (0x3fU 
                                                   & (IData)(alu_tile_noc__DOT__sel_b)))
                                                  : 
                                                 (alu_tile_noc__DOT__sel_a 
                                                  ^ alu_tile_noc__DOT__sel_b))
                                                 : 
                                                ((1U 
                                                  & (IData)(alu_tile_noc__DOT__sel_ctrl))
                                                  ? 
                                                 (alu_tile_noc__DOT__sel_a 
                                                  | alu_tile_noc__DOT__sel_b)
                                                  : 
                                                 (alu_tile_noc__DOT__sel_a 
                                                  & alu_tile_noc__DOT__sel_b)))
                                             : ((2U 
                                                 & (IData)(alu_tile_noc__DOT__sel_ctrl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(alu_tile_noc__DOT__sel_ctrl))
                                                  ? 
                                                 ((0ULL 
                                                   == alu_tile_noc__DOT__sel_b)
                                                   ? 0ULL
                                                   : 
                                                  VL_DIV_QQQ(64, alu_tile_noc__DOT__sel_a, alu_tile_noc__DOT__sel_b))
                                                  : 
                                                 (alu_tile_noc__DOT__sel_a 
                                                  * alu_tile_noc__DOT__sel_b))
                                                 : 
                                                ((1U 
                                                  & (IData)(alu_tile_noc__DOT__sel_ctrl))
                                                  ? 
                                                 (alu_tile_noc__DOT__sel_a 
                                                  - alu_tile_noc__DOT__sel_b)
                                                  : 
                                                 (alu_tile_noc__DOT__sel_a 
                                                  + alu_tile_noc__DOT__sel_b)))));
    }
    if (alu_tile_noc__DOT__sel_valid) {
        if ((1U & (~ ((IData)(alu_tile_noc__DOT__sel_ctrl) 
                      >> 8U)))) {
            if ((1U & (~ (IData)(alu_tile_noc__DOT__am_dest)))) {
                if (alu_tile_noc__DOT____VdfgExtracted_h81bc5224__0) {
                    vlSelfRef.out_valid_s = 1U;
                    vlSelfRef.out_ctrl_s = alu_tile_noc__DOT__sel_ctrl;
                    vlSelfRef.out_b_s = alu_tile_noc__DOT__sel_b;
                    vlSelfRef.out_a_s = alu_tile_noc__DOT__sel_a;
                }
                if ((1U & (~ (IData)(alu_tile_noc__DOT____VdfgExtracted_h81bc5224__0)))) {
                    if ((1U & (~ (IData)(alu_tile_noc__DOT____VdfgExtracted_h81e25ccc__0)))) {
                        if (alu_tile_noc__DOT____VdfgExtracted_h78194cb6__0) {
                            vlSelfRef.out_valid_e = 1U;
                            vlSelfRef.out_ctrl_e = alu_tile_noc__DOT__sel_ctrl;
                            vlSelfRef.out_b_e = alu_tile_noc__DOT__sel_b;
                            vlSelfRef.out_a_e = alu_tile_noc__DOT__sel_a;
                        }
                    }
                }
            }
        }
        if ((0x100U & (IData)(alu_tile_noc__DOT__sel_ctrl))) {
            if ((0U >= (3U & (IData)(vlSelfRef.TILE_Y)))) {
                if ((0U >= (3U & (IData)(vlSelfRef.TILE_X)))) {
                    vlSelfRef.host_out_valid = 1U;
                }
                if ((0U < (3U & (IData)(vlSelfRef.TILE_X)))) {
                    vlSelfRef.out_valid_w = 1U;
                    vlSelfRef.out_b_w = alu_tile_noc__DOT__sel_b;
                }
            }
            if ((0U < (3U & (IData)(vlSelfRef.TILE_Y)))) {
                vlSelfRef.out_valid_n = 1U;
                vlSelfRef.out_b_n = alu_tile_noc__DOT__sel_b;
                vlSelfRef.out_ctrl_n = alu_tile_noc__DOT__sel_ctrl;
            } else if ((0U < (3U & (IData)(vlSelfRef.TILE_X)))) {
                vlSelfRef.out_ctrl_w = alu_tile_noc__DOT__sel_ctrl;
            }
        } else if (alu_tile_noc__DOT__am_dest) {
            if ((0U >= (3U & (IData)(vlSelfRef.TILE_Y)))) {
                if ((0U >= (3U & (IData)(vlSelfRef.TILE_X)))) {
                    vlSelfRef.host_out_valid = 1U;
                }
                if ((0U < (3U & (IData)(vlSelfRef.TILE_X)))) {
                    vlSelfRef.out_valid_w = 1U;
                    vlSelfRef.out_b_w = 0ULL;
                }
            }
            vlSelfRef.alu_tile_noc__DOT__unnamedblk1__DOT__resp_ctrl 
                = (0x100U | (0xfU & (IData)(alu_tile_noc__DOT__sel_ctrl)));
            if ((0U < (3U & (IData)(vlSelfRef.TILE_Y)))) {
                vlSelfRef.out_valid_n = 1U;
                vlSelfRef.out_b_n = 0ULL;
                vlSelfRef.out_ctrl_n = vlSelfRef.alu_tile_noc__DOT__unnamedblk1__DOT__resp_ctrl;
            } else if ((0U < (3U & (IData)(vlSelfRef.TILE_X)))) {
                vlSelfRef.out_ctrl_w = vlSelfRef.alu_tile_noc__DOT__unnamedblk1__DOT__resp_ctrl;
            }
        } else if ((1U & (~ (IData)(alu_tile_noc__DOT____VdfgExtracted_h81bc5224__0)))) {
            if (alu_tile_noc__DOT____VdfgExtracted_h81e25ccc__0) {
                vlSelfRef.out_valid_n = 1U;
                vlSelfRef.out_b_n = alu_tile_noc__DOT__sel_b;
                vlSelfRef.out_ctrl_n = alu_tile_noc__DOT__sel_ctrl;
            } else if ((1U & (~ (IData)(alu_tile_noc__DOT____VdfgExtracted_h78194cb6__0)))) {
                if (alu_tile_noc__DOT____VdfgExtracted_h774e6128__0) {
                    vlSelfRef.out_ctrl_w = alu_tile_noc__DOT__sel_ctrl;
                }
            }
            if ((1U & (~ (IData)(alu_tile_noc__DOT____VdfgExtracted_h81e25ccc__0)))) {
                if ((1U & (~ (IData)(alu_tile_noc__DOT____VdfgExtracted_h78194cb6__0)))) {
                    if (alu_tile_noc__DOT____VdfgExtracted_h774e6128__0) {
                        vlSelfRef.out_valid_w = 1U;
                        vlSelfRef.out_b_w = alu_tile_noc__DOT__sel_b;
                    }
                }
            }
        }
    }
    if (VL_UNLIKELY(((((IData)(alu_tile_noc__DOT__sel_valid) 
                       & (IData)(alu_tile_noc__DOT__am_dest)) 
                      & (~ ((IData)(alu_tile_noc__DOT__sel_ctrl) 
                            >> 8U)))))) {
        VL_WRITEF_NX("[t=%0t] Tile(%0#,%0#): op=%0#, A=%0#, B=%0#, Res=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     (IData)(vlSelfRef.TILE_X),8,vlSelfRef.TILE_Y,
                     4,(0xfU & (IData)(alu_tile_noc__DOT__sel_ctrl)),
                     64,alu_tile_noc__DOT__sel_a,64,
                     alu_tile_noc__DOT__sel_b,64,alu_tile_noc__DOT__op_result);
    }
    vlSelfRef.host_out_a = 0ULL;
    vlSelfRef.out_a_n = 0ULL;
    vlSelfRef.out_a_w = 0ULL;
    if (alu_tile_noc__DOT__sel_valid) {
        if ((0x100U & (IData)(alu_tile_noc__DOT__sel_ctrl))) {
            if ((0U >= (3U & (IData)(vlSelfRef.TILE_Y)))) {
                if ((0U >= (3U & (IData)(vlSelfRef.TILE_X)))) {
                    vlSelfRef.host_out_a = alu_tile_noc__DOT__sel_a;
                }
                if ((0U < (3U & (IData)(vlSelfRef.TILE_X)))) {
                    vlSelfRef.out_a_w = alu_tile_noc__DOT__sel_a;
                }
            }
            if ((0U < (3U & (IData)(vlSelfRef.TILE_Y)))) {
                vlSelfRef.out_a_n = alu_tile_noc__DOT__sel_a;
            }
        } else if (alu_tile_noc__DOT__am_dest) {
            if ((0U >= (3U & (IData)(vlSelfRef.TILE_Y)))) {
                if ((0U >= (3U & (IData)(vlSelfRef.TILE_X)))) {
                    vlSelfRef.host_out_a = alu_tile_noc__DOT__op_result;
                }
                if ((0U < (3U & (IData)(vlSelfRef.TILE_X)))) {
                    vlSelfRef.out_a_w = alu_tile_noc__DOT__op_result;
                }
            }
            if ((0U < (3U & (IData)(vlSelfRef.TILE_Y)))) {
                vlSelfRef.out_a_n = alu_tile_noc__DOT__op_result;
            }
        } else if ((1U & (~ (IData)(alu_tile_noc__DOT____VdfgExtracted_h81bc5224__0)))) {
            if (alu_tile_noc__DOT____VdfgExtracted_h81e25ccc__0) {
                vlSelfRef.out_a_n = alu_tile_noc__DOT__sel_a;
            }
            if ((1U & (~ (IData)(alu_tile_noc__DOT____VdfgExtracted_h81e25ccc__0)))) {
                if ((1U & (~ (IData)(alu_tile_noc__DOT____VdfgExtracted_h78194cb6__0)))) {
                    if (alu_tile_noc__DOT____VdfgExtracted_h774e6128__0) {
                        vlSelfRef.out_a_w = alu_tile_noc__DOT__sel_a;
                    }
                }
            }
        }
    }
}

void Valu_tile_noc___024root___eval_triggers__ico(Valu_tile_noc___024root* vlSelf);

bool Valu_tile_noc___024root___eval_phase__ico(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___eval_phase__ico\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Valu_tile_noc___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Valu_tile_noc___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Valu_tile_noc___024root___eval_act(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___eval_act\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Valu_tile_noc___024root___eval_nba(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___eval_nba\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Valu_tile_noc___024root___eval_triggers__act(Valu_tile_noc___024root* vlSelf);

bool Valu_tile_noc___024root___eval_phase__act(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___eval_phase__act\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valu_tile_noc___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Valu_tile_noc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valu_tile_noc___024root___eval_phase__nba(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___eval_phase__nba\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valu_tile_noc___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tile_noc___024root___dump_triggers__ico(Valu_tile_noc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tile_noc___024root___dump_triggers__nba(Valu_tile_noc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tile_noc___024root___dump_triggers__act(Valu_tile_noc___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_tile_noc___024root___eval(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___eval\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Valu_tile_noc___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("alu_tile_noc.v", 16, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Valu_tile_noc___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Valu_tile_noc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("alu_tile_noc.v", 16, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Valu_tile_noc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("alu_tile_noc.v", 16, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Valu_tile_noc___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Valu_tile_noc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valu_tile_noc___024root___eval_debug_assertions(Valu_tile_noc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tile_noc___024root___eval_debug_assertions\n"); );
    Valu_tile_noc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.in_valid_n & 0xfeU)))) {
        Verilated::overWidthError("in_valid_n");}
    if (VL_UNLIKELY(((vlSelfRef.in_valid_e & 0xfeU)))) {
        Verilated::overWidthError("in_valid_e");}
    if (VL_UNLIKELY(((vlSelfRef.in_valid_s & 0xfeU)))) {
        Verilated::overWidthError("in_valid_s");}
    if (VL_UNLIKELY(((vlSelfRef.in_valid_w & 0xfeU)))) {
        Verilated::overWidthError("in_valid_w");}
    if (VL_UNLIKELY(((vlSelfRef.host_in_valid & 0xfeU)))) {
        Verilated::overWidthError("host_in_valid");}
}
#endif  // VL_DEBUG
