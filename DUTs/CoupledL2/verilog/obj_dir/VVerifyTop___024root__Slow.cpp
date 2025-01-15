// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop__Syms.h"
#include "VVerifyTop___024root.h"

void VVerifyTop___024root___ctor_var_reset(VVerifyTop___024root* vlSelf);

VVerifyTop___024root::VVerifyTop___024root(VVerifyTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVerifyTop___024root___ctor_var_reset(this);
}

void VVerifyTop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VVerifyTop___024root::~VVerifyTop___024root() {
}
