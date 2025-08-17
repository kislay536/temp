// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VCALCULATOR__DPI_H_
#define VERILATED_VCALCULATOR__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at alu_tile_noc.v:74:34
    extern void dpi_tile(int TILE_X, int TILE_Y, long long in_a_n, long long in_b_n, int in_ctrl_n, svBit in_valid_n, long long in_a_e, long long in_b_e, int in_ctrl_e, svBit in_valid_e, long long in_a_s, long long in_b_s, int in_ctrl_s, svBit in_valid_s, long long in_a_w, long long in_b_w, int in_ctrl_w, svBit in_valid_w, long long host_in_a, long long host_in_b, int host_in_ctrl, svBit host_in_valid, long long* out_a_n, long long* out_b_n, int* out_ctrl_n, svBit* out_valid_n, long long* out_a_e, long long* out_b_e, int* out_ctrl_e, svBit* out_valid_e, long long* out_a_s, long long* out_b_s, int* out_ctrl_s, svBit* out_valid_s, long long* out_a_w, long long* out_b_w, int* out_ctrl_w, svBit* out_valid_w, long long* host_out_a, svBit* host_out_valid);

#ifdef __cplusplus
}
#endif

#endif  // guard
