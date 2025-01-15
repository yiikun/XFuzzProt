// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_SinkC.h"
#include "VVerifyTop__Syms.h"

void VVerifyTop_SinkC___ctor_var_reset(VVerifyTop_SinkC* vlSelf);

VVerifyTop_SinkC::VVerifyTop_SinkC(VVerifyTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVerifyTop_SinkC___ctor_var_reset(this);
}

void VVerifyTop_SinkC::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VVerifyTop_SinkC::~VVerifyTop_SinkC() {
}
