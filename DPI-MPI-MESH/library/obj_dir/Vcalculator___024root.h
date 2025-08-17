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
        VL_IN8(clk,0,0);
        VL_IN8(mode,3,0);
        VL_OUT8(valid,0,0);
        CData/*0:0*/ calculator__DOT__int_con__DOT__is_busy;
        CData/*0:0*/ calculator__DOT__int_con__DOT__next_is_busy;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_valid;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_s;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_e;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_w;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_s;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_e;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_w;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_s;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_e;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_s;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_e;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_n;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_w;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_s;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_e;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_n;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_w;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_s;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_e;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_n;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_s;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_e;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_n;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_w;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_s;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_e;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_n;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_w;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_s;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_e;
        CData/*0:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_n;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t0_0__DOT__am_dest;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t0_1__DOT__am_dest;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t0_2__DOT__am_dest;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t1_0__DOT__am_dest;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t1_1__DOT__am_dest;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t1_2__DOT__am_dest;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t2_0__DOT__am_dest;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t2_1__DOT__am_dest;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid;
        CData/*0:0*/ calculator__DOT__int_con__DOT__t2_2__DOT__am_dest;
        CData/*1:0*/ __Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__dx;
        CData/*1:0*/ __Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__dy;
        CData/*3:0*/ __Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__md;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_s;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_e;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_w;
    };
    struct {
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_s;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_e;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_w;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_s;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_e;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_s;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_e;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_n;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_w;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_s;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_e;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_n;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_w;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_s;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_e;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_n;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_s;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_e;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_n;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_w;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_s;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_e;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_n;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_w;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_s;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_e;
        SData/*15:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_n;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t0_0__DOT__unnamedblk1__DOT__resp_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl;
        SData/*15:0*/ calculator__DOT__int_con__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl;
        SData/*15:0*/ __Vfunc_calculator__DOT__int_con__DOT__make_ctrl__0__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(a,63,0);
        VL_IN64(b,63,0);
        VL_OUT64(result,63,0);
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_a;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_w;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_w;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_w;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_w;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_s;
    };
    struct {
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_n;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_n;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_w;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_w;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_n;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_n;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_w;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_w;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_n;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_n;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_n;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_n;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_w;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_w;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_n;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_n;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_w;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_w;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_s;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_e;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_n;
        QData/*63:0*/ calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_n;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t0_0__DOT__sel_a;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t0_0__DOT__sel_b;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t0_0__DOT__op_result;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t0_1__DOT__sel_a;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t0_1__DOT__sel_b;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t0_1__DOT__op_result;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t0_2__DOT__sel_a;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t0_2__DOT__sel_b;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t0_2__DOT__op_result;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t1_0__DOT__sel_a;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t1_0__DOT__sel_b;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t1_0__DOT__op_result;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t1_1__DOT__sel_a;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t1_1__DOT__sel_b;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t1_1__DOT__op_result;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t1_2__DOT__sel_a;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t1_2__DOT__sel_b;
    };
    struct {
        QData/*63:0*/ calculator__DOT__int_con__DOT__t1_2__DOT__op_result;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t2_0__DOT__sel_a;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t2_0__DOT__sel_b;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t2_0__DOT__op_result;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t2_1__DOT__sel_a;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t2_1__DOT__sel_b;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t2_1__DOT__op_result;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t2_2__DOT__sel_a;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t2_2__DOT__sel_b;
        QData/*63:0*/ calculator__DOT__int_con__DOT__t2_2__DOT__op_result;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__out_a_n;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__out_b_n;
        VlUnpacked<SData/*15:0*/, 9> calculator__DOT__int_con__DOT__out_ctrl_n;
        VlUnpacked<CData/*0:0*/, 9> calculator__DOT__int_con__DOT__out_valid_n;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__out_a_e;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__out_b_e;
        VlUnpacked<SData/*15:0*/, 9> calculator__DOT__int_con__DOT__out_ctrl_e;
        VlUnpacked<CData/*0:0*/, 9> calculator__DOT__int_con__DOT__out_valid_e;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__out_a_s;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__out_b_s;
        VlUnpacked<SData/*15:0*/, 9> calculator__DOT__int_con__DOT__out_ctrl_s;
        VlUnpacked<CData/*0:0*/, 9> calculator__DOT__int_con__DOT__out_valid_s;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__out_a_w;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__out_b_w;
        VlUnpacked<SData/*15:0*/, 9> calculator__DOT__int_con__DOT__out_ctrl_w;
        VlUnpacked<CData/*0:0*/, 9> calculator__DOT__int_con__DOT__out_valid_w;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__host_out_a;
        VlUnpacked<CData/*0:0*/, 9> calculator__DOT__int_con__DOT__host_out_valid;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__in_a_n;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__in_b_n;
        VlUnpacked<SData/*15:0*/, 9> calculator__DOT__int_con__DOT__in_ctrl_n;
        VlUnpacked<CData/*0:0*/, 9> calculator__DOT__int_con__DOT__in_valid_n;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__in_a_e;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__in_b_e;
        VlUnpacked<SData/*15:0*/, 9> calculator__DOT__int_con__DOT__in_ctrl_e;
        VlUnpacked<CData/*0:0*/, 9> calculator__DOT__int_con__DOT__in_valid_e;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__in_a_s;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__in_b_s;
        VlUnpacked<SData/*15:0*/, 9> calculator__DOT__int_con__DOT__in_ctrl_s;
        VlUnpacked<CData/*0:0*/, 9> calculator__DOT__int_con__DOT__in_valid_s;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__in_a_w;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__in_b_w;
        VlUnpacked<SData/*15:0*/, 9> calculator__DOT__int_con__DOT__in_ctrl_w;
        VlUnpacked<CData/*0:0*/, 9> calculator__DOT__int_con__DOT__in_valid_w;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__host_in_a;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__host_in_b;
        VlUnpacked<SData/*15:0*/, 9> calculator__DOT__int_con__DOT__host_in_ctrl;
        VlUnpacked<CData/*0:0*/, 9> calculator__DOT__int_con__DOT__host_in_valid;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__next_in_a_n;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__next_in_b_n;
        VlUnpacked<SData/*15:0*/, 9> calculator__DOT__int_con__DOT__next_in_ctrl_n;
        VlUnpacked<CData/*0:0*/, 9> calculator__DOT__int_con__DOT__next_in_valid_n;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__next_in_a_e;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__next_in_b_e;
        VlUnpacked<SData/*15:0*/, 9> calculator__DOT__int_con__DOT__next_in_ctrl_e;
        VlUnpacked<CData/*0:0*/, 9> calculator__DOT__int_con__DOT__next_in_valid_e;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__next_in_a_s;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__next_in_b_s;
        VlUnpacked<SData/*15:0*/, 9> calculator__DOT__int_con__DOT__next_in_ctrl_s;
        VlUnpacked<CData/*0:0*/, 9> calculator__DOT__int_con__DOT__next_in_valid_s;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__next_in_a_w;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__next_in_b_w;
        VlUnpacked<SData/*15:0*/, 9> calculator__DOT__int_con__DOT__next_in_ctrl_w;
        VlUnpacked<CData/*0:0*/, 9> calculator__DOT__int_con__DOT__next_in_valid_w;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__next_host_in_a;
        VlUnpacked<QData/*63:0*/, 9> calculator__DOT__int_con__DOT__next_host_in_b;
        VlUnpacked<SData/*15:0*/, 9> calculator__DOT__int_con__DOT__next_host_in_ctrl;
        VlUnpacked<CData/*0:0*/, 9> calculator__DOT__int_con__DOT__next_host_in_valid;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
