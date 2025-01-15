// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_MainPipe.h"
#include "VVerifyTop__Syms.h"

void VVerifyTop_MainPipe___ctor_var_reset(VVerifyTop_MainPipe* vlSelf);

VVerifyTop_MainPipe::VVerifyTop_MainPipe(VVerifyTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVerifyTop_MainPipe___ctor_var_reset(this);
}

void VVerifyTop_MainPipe::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VVerifyTop_MainPipe::~VVerifyTop_MainPipe() {
}
