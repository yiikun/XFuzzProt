// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_RequestBuffer_2.h"
#include "VVerifyTop__Syms.h"

void VVerifyTop_RequestBuffer_2___ctor_var_reset(VVerifyTop_RequestBuffer_2* vlSelf);

VVerifyTop_RequestBuffer_2::VVerifyTop_RequestBuffer_2(VVerifyTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVerifyTop_RequestBuffer_2___ctor_var_reset(this);
}

void VVerifyTop_RequestBuffer_2::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VVerifyTop_RequestBuffer_2::~VVerifyTop_RequestBuffer_2() {
}
