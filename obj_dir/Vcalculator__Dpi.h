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
    // DPI import at calculator.v:11:37
    extern long long dpi_multiplier_eval();
    // DPI import at _mul.v:10:34
    extern void dpi_multiplier_eval2(unsigned long long a, unsigned long long b, unsigned long long* result);
    // DPI import at calculator.v:8:34
    extern void dpi_multiplier_init();
    // DPI import at calculator.v:9:34
    extern void dpi_multiplier_send(unsigned long long a, unsigned long long b);

#ifdef __cplusplus
}
#endif

#endif  // guard
