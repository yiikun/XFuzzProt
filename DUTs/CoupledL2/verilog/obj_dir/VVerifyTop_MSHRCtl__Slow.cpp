// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_MSHRCtl.h"
#include "VVerifyTop__Syms.h"

void VVerifyTop_MSHRCtl___ctor_var_reset(VVerifyTop_MSHRCtl* vlSelf);

VVerifyTop_MSHRCtl::VVerifyTop_MSHRCtl(VVerifyTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVerifyTop_MSHRCtl___ctor_var_reset(this);
}

void VVerifyTop_MSHRCtl::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VVerifyTop_MSHRCtl::~VVerifyTop_MSHRCtl() {
}
