// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmultiplier.h for the primary calling header

#ifndef VERILATED_VMULTIPLIER___024ROOT_H_
#define VERILATED_VMULTIPLIER___024ROOT_H_  // guard

#include "verilated.h"


class Vmultiplier__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmultiplier___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
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
    Vmultiplier__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmultiplier___024root(Vmultiplier__Syms* symsp, const char* v__name);
    ~Vmultiplier___024root();
    VL_UNCOPYABLE(Vmultiplier___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
