// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu_tile_noc.h for the primary calling header

#ifndef VERILATED_VALU_TILE_NOC___024ROOT_H_
#define VERILATED_VALU_TILE_NOC___024ROOT_H_  // guard

#include "verilated.h"


class Valu_tile_noc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu_tile_noc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(TILE_X,7,0);
    VL_IN8(TILE_Y,7,0);
    VL_IN8(in_valid_n,0,0);
    VL_IN8(in_valid_e,0,0);
    VL_IN8(in_valid_s,0,0);
    VL_IN8(in_valid_w,0,0);
    VL_IN8(host_in_valid,0,0);
    VL_OUT8(out_valid_n,0,0);
    VL_OUT8(out_valid_e,0,0);
    VL_OUT8(out_valid_s,0,0);
    VL_OUT8(out_valid_w,0,0);
    VL_OUT8(host_out_valid,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN16(in_ctrl_n,15,0);
    VL_IN16(in_ctrl_e,15,0);
    VL_IN16(in_ctrl_s,15,0);
    VL_IN16(in_ctrl_w,15,0);
    VL_IN16(host_in_ctrl,15,0);
    VL_OUT16(out_ctrl_n,15,0);
    VL_OUT16(out_ctrl_e,15,0);
    VL_OUT16(out_ctrl_s,15,0);
    VL_OUT16(out_ctrl_w,15,0);
    SData/*15:0*/ alu_tile_noc__DOT__unnamedblk1__DOT__resp_ctrl;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(in_a_n,63,0);
    VL_IN64(in_b_n,63,0);
    VL_IN64(in_a_e,63,0);
    VL_IN64(in_b_e,63,0);
    VL_IN64(in_a_s,63,0);
    VL_IN64(in_b_s,63,0);
    VL_IN64(in_a_w,63,0);
    VL_IN64(in_b_w,63,0);
    VL_IN64(host_in_a,63,0);
    VL_IN64(host_in_b,63,0);
    VL_OUT64(out_a_n,63,0);
    VL_OUT64(out_b_n,63,0);
    VL_OUT64(out_a_e,63,0);
    VL_OUT64(out_b_e,63,0);
    VL_OUT64(out_a_s,63,0);
    VL_OUT64(out_b_s,63,0);
    VL_OUT64(out_a_w,63,0);
    VL_OUT64(out_b_w,63,0);
    VL_OUT64(host_out_a,63,0);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu_tile_noc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu_tile_noc___024root(Valu_tile_noc__Syms* symsp, const char* v__name);
    ~Valu_tile_noc___024root();
    VL_UNCOPYABLE(Valu_tile_noc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
