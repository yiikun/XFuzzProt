// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestTop_L2L3L2.h for the primary calling header

#ifndef VERILATED_VTESTTOP_L2L3L2___024UNIT_H_
#define VERILATED_VTESTTOP_L2L3L2___024UNIT_H_  // guard

#include "verilated.h"


class VTestTop_L2L3L2__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTestTop_L2L3L2___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VTestTop_L2L3L2__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestTop_L2L3L2___024unit(VTestTop_L2L3L2__Syms* symsp, const char* v__name);
    ~VTestTop_L2L3L2___024unit();
    VL_UNCOPYABLE(VTestTop_L2L3L2___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
