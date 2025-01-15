// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_MSHR_16.h"
#include "VVerifyTop__Syms.h"

void VVerifyTop_MSHR_16___ctor_var_reset(VVerifyTop_MSHR_16* vlSelf);

VVerifyTop_MSHR_16::VVerifyTop_MSHR_16(VVerifyTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVerifyTop_MSHR_16___ctor_var_reset(this);
}

void VVerifyTop_MSHR_16::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VVerifyTop_MSHR_16::~VVerifyTop_MSHR_16() {
}
