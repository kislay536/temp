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
    // DPI import at adder.v:10:34
    extern void dpi_adder(unsigned long long a, unsigned long long b, unsigned long long* result);
    // DPI import at divider.v:9:34
    extern void dpi_divider(unsigned long long a, unsigned long long b, unsigned long long* result);
    // DPI import at multiplier.v:9:34
    extern void dpi_multiplier(unsigned long long a, unsigned long long b, unsigned long long* result);
    // DPI import at subtractor.v:11:34
    extern void dpi_subtractor(unsigned long long a, unsigned long long b, unsigned long long* result);

#ifdef __cplusplus
}
#endif

#endif  // guard
