// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdivider.h for the primary calling header

#ifndef VERILATED_VDIVIDER___024ROOT_H_
#define VERILATED_VDIVIDER___024ROOT_H_  // guard

#include "verilated.h"


class Vdivider__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdivider___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(start,0,0);
    VL_IN8(ack_in_add,0,0);
    VL_IN8(ack_in_sub,0,0);
    VL_IN8(ack_in_mul,0,0);
    VL_IN8(add_working,0,0);
    VL_IN8(sub_working,0,0);
    VL_IN8(mul_working,0,0);
    VL_OUT8(ack_to_add,0,0);
    VL_OUT8(ack_to_sub,0,0);
    VL_OUT8(ack_to_mul,0,0);
    VL_OUT8(working,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(a,63,0);
    VL_IN64(b,63,0);
    VL_OUT64(result,63,0);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdivider__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdivider___024root(Vdivider__Syms* symsp, const char* v__name);
    ~Vdivider___024root();
    VL_UNCOPYABLE(Vdivider___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
