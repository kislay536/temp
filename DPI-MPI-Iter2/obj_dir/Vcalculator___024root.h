// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcalculator.h for the primary calling header

#ifndef VERILATED_VCALCULATOR___024ROOT_H_
#define VERILATED_VCALCULATOR___024ROOT_H_  // guard

#include "verilated.h"


class Vcalculator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcalculator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(mode,3,0);
        CData/*0:0*/ calculator__DOT__add_working;
        CData/*0:0*/ calculator__DOT__sub_working;
        CData/*0:0*/ calculator__DOT__mul_working;
        CData/*0:0*/ calculator__DOT__div_working;
        CData/*0:0*/ calculator__DOT__add_ack_from_sub;
        CData/*0:0*/ calculator__DOT__add_ack_from_mul;
        CData/*0:0*/ calculator__DOT__add_ack_from_div;
        CData/*0:0*/ calculator__DOT__sub_ack_from_add;
        CData/*0:0*/ calculator__DOT__sub_ack_from_mul;
        CData/*0:0*/ calculator__DOT__sub_ack_from_div;
        CData/*0:0*/ calculator__DOT__mul_ack_from_add;
        CData/*0:0*/ calculator__DOT__mul_ack_from_sub;
        CData/*0:0*/ calculator__DOT__mul_ack_from_div;
        CData/*0:0*/ calculator__DOT__div_ack_from_add;
        CData/*0:0*/ calculator__DOT__div_ack_from_sub;
        CData/*0:0*/ calculator__DOT__div_ack_from_mul;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_mul__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_sub__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_div__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__mul_working__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__sub_working__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__div_working__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_mul__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_div__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__mul_ack_from_div__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_mul__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_sub__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_div__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__mul_working__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__sub_working__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__div_working__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_mul__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_div__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__mul_ack_from_div__1;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_mul__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_sub__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__add_ack_from_div__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__mul_working__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__sub_working__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__div_working__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_mul__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__sub_ack_from_div__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__calculator__DOT__mul_ack_from_div__2;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __Vtask_calculator__DOT__u_add__DOT__dpi_adder__0__ack_to_mul;
        IData/*31:0*/ __Vtask_calculator__DOT__u_add__DOT__dpi_adder__0__ack_to_sub;
        IData/*31:0*/ __Vtask_calculator__DOT__u_add__DOT__dpi_adder__0__ack_to_div;
        IData/*31:0*/ __Vtask_calculator__DOT__u_add__DOT__dpi_adder__0__working;
        IData/*31:0*/ __Vtask_calculator__DOT__u_sub__DOT__dpi_subtractor__1__ack_to_add;
        IData/*31:0*/ __Vtask_calculator__DOT__u_sub__DOT__dpi_subtractor__1__ack_to_mul;
        IData/*31:0*/ __Vtask_calculator__DOT__u_sub__DOT__dpi_subtractor__1__ack_to_div;
        IData/*31:0*/ __Vtask_calculator__DOT__u_sub__DOT__dpi_subtractor__1__working;
        IData/*31:0*/ __Vtask_calculator__DOT__u_mul__DOT__dpi_multiplier__2__ack_to_add;
        IData/*31:0*/ __Vtask_calculator__DOT__u_mul__DOT__dpi_multiplier__2__ack_to_sub;
        IData/*31:0*/ __Vtask_calculator__DOT__u_mul__DOT__dpi_multiplier__2__ack_to_div;
        IData/*31:0*/ __Vtask_calculator__DOT__u_mul__DOT__dpi_multiplier__2__working;
        IData/*31:0*/ __Vtask_calculator__DOT__u_div__DOT__dpi_divider__3__ack_to_add;
        IData/*31:0*/ __Vtask_calculator__DOT__u_div__DOT__dpi_divider__3__ack_to_sub;
    };
    struct {
        IData/*31:0*/ __Vtask_calculator__DOT__u_div__DOT__dpi_divider__3__ack_to_mul;
        IData/*31:0*/ __Vtask_calculator__DOT__u_div__DOT__dpi_divider__3__working;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(a,63,0);
        VL_IN64(b,63,0);
        VL_OUT64(result,63,0);
        QData/*63:0*/ calculator__DOT__add_out;
        QData/*63:0*/ calculator__DOT__sub_out;
        QData/*63:0*/ calculator__DOT__mul_out;
        QData/*63:0*/ calculator__DOT__div_out;
        QData/*63:0*/ __Vtask_calculator__DOT__u_add__DOT__dpi_adder__0__result;
        QData/*63:0*/ __Vtask_calculator__DOT__u_sub__DOT__dpi_subtractor__1__result;
        QData/*63:0*/ __Vtask_calculator__DOT__u_mul__DOT__dpi_multiplier__2__result;
        QData/*63:0*/ __Vtask_calculator__DOT__u_div__DOT__dpi_divider__3__result;
    };
    VlTriggerVec<10> __VstlTriggered;
    VlTriggerVec<10> __VicoTriggered;
    VlTriggerVec<9> __VactTriggered;
    VlTriggerVec<9> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcalculator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcalculator___024root(Vcalculator__Syms* symsp, const char* v__name);
    ~Vcalculator___024root();
    VL_UNCOPYABLE(Vcalculator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
