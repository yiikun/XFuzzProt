// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_SinkC.h"
#include "VTestTop_L2L3L2__Syms.h"

void VTestTop_L2L3L2_SinkC___ctor_var_reset(VTestTop_L2L3L2_SinkC* vlSelf);

VTestTop_L2L3L2_SinkC::VTestTop_L2L3L2_SinkC(VTestTop_L2L3L2__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTestTop_L2L3L2_SinkC___ctor_var_reset(this);
}

void VTestTop_L2L3L2_SinkC::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTestTop_L2L3L2_SinkC::~VTestTop_L2L3L2_SinkC() {
}
