// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_SinkC_2.h"
#include "VVerifyTop__Syms.h"

void VVerifyTop_SinkC_2___ctor_var_reset(VVerifyTop_SinkC_2* vlSelf);

VVerifyTop_SinkC_2::VVerifyTop_SinkC_2(VVerifyTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVerifyTop_SinkC_2___ctor_var_reset(this);
}

void VVerifyTop_SinkC_2::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VVerifyTop_SinkC_2::~VVerifyTop_SinkC_2() {
}
