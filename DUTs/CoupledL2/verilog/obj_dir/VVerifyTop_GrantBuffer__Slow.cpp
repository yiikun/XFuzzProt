// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_GrantBuffer.h"
#include "VVerifyTop__Syms.h"

void VVerifyTop_GrantBuffer___ctor_var_reset(VVerifyTop_GrantBuffer* vlSelf);

VVerifyTop_GrantBuffer::VVerifyTop_GrantBuffer(VVerifyTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVerifyTop_GrantBuffer___ctor_var_reset(this);
}

void VVerifyTop_GrantBuffer::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VVerifyTop_GrantBuffer::~VVerifyTop_GrantBuffer() {
}
