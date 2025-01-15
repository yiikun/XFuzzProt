// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_Directory.h"
#include "VTestTop_L2L3L2__Syms.h"

VL_INLINE_OPT void VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__0(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__hitVec_1;
    __PVT__hitVec_1 = 0;
    CData/*0:0*/ __PVT__hitVec_2;
    __PVT__hitVec_2 = 0;
    CData/*0:0*/ __PVT__hitVec_3;
    __PVT__hitVec_3 = 0;
    CData/*1:0*/ __PVT__hitWay_hi_1;
    __PVT__hitWay_hi_1 = 0;
    CData/*1:0*/ __PVT__replaceWay;
    __PVT__replaceWay = 0;
    CData/*1:0*/ __PVT__chosenWay;
    __PVT__chosenWay = 0;
    CData/*1:0*/ __PVT__touch_way_s3;
    __PVT__touch_way_s3 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_0__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_0__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_0__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_0__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_0__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_0__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_0__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_0__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_0__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_0__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_0__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_0__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_0__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_0__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_0__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_0__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_0__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_0__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_0__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_0__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_0__DOT__array_3__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_1__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_1__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_1__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_1__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_1__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_1__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_1__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_1__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_1__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_1__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_1__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_1__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_1__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_1__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_1__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_1__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_1__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_1__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_3__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_2__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_2__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_2__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_2__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_2__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_2__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_2__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_2__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_2__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_2__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_2__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_2__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_2__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_2__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_2__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_2__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_2__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_2__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_3__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_3__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_3__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_3__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_3__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_3__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_3__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_3__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_3__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_3__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_3__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_3__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_3__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_3__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_3__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_3__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_3__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_3__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_3__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_3__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_4__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_4__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_4__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_4__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_4__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_4__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_4__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_4__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_4__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_4__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_4__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_4__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_4__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_4__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_4__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_4__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_4__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_4__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_3__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_5__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_5__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_5__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_5__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_5__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_5__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_5__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_5__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_5__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_5__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_5__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_5__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_5__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_5__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_5__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_5__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_5__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_5__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_3__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_6__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_6__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_6__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_6__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_6__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_6__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_6__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_6__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_6__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_6__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_6__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_6__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_6__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_6__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_6__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_6__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_6__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_6__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_3__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_7__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_7__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_7__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_7__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_7__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_7__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_7__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_7__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_7__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_7__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_7__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_7__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_7__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_7__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_7__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_7__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_7__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_7__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_0__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_0__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_0__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_0__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_0__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_0__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_0__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_0__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_0__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_0__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_0__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_0__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_0__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_0__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_0__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_0__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_0__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_0__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_0__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_0__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_0__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_1__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_1__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_1__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_1__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_1__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_1__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_1__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_1__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_1__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_1__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_1__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_1__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_1__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_1__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_1__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_1__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_1__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_1__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_2__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_2__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_2__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_2__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_2__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_2__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_2__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_2__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_2__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_2__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_2__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_2__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_2__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_2__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_2__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_2__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_2__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_2__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_3__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_3__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_3__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_3__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_3__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_3__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_3__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_3__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_3__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_3__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_3__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_3__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_3__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_3__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_3__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_3__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_3__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_3__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_4__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_4__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_4__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_4__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_4__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_4__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_4__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_4__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_4__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_4__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_4__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_4__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_4__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_4__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_4__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_4__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_4__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_4__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_5__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_5__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_5__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_5__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_5__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_5__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_5__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_5__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_5__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_5__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_5__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_5__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_5__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_5__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_5__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_5__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_5__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_5__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_6__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_6__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_6__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_6__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_6__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_6__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_6__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_6__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_6__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_6__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_6__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_6__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_6__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_6__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_6__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_6__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_6__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_6__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_7__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_7__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_7__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_7__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_7__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_7__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_7__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_7__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_7__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_7__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_7__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_7__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_7__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_7__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_7__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_7__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_7__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_7__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_3__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 = 0;
    // Body
    __VdlySet__metaArray__DOT__banks_0__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_0__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_0__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_0__DOT__array_3__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_3__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_3__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_3__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_3__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_3__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_3__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_3__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 = 0U;
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (1U < (0xfU & ((7U & ((3U & 
                                              ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F0) 
                                               + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F1))) 
                                             + (3U 
                                                & ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F2) 
                                                   + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F3))))) 
                                      + (7U & ((3U 
                                                & ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F4) 
                                                   + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F5))) 
                                               + (3U 
                                                  & ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F6) 
                                                     + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F7))))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at BankedSRAM.scala:52 assert({PopCount(ren_vec) <= 1.U})\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (1U < (0xfU & ((7U & ((3U & 
                                              (((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_r_req_ready) 
                                                & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid)) 
                                               + VL_SHIFTR_III(2,2,32, 
                                                               ((((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_r_req_ready) 
                                                                  & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_r_req_ready) 
                                                                   & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid))), 1U))) 
                                             + (3U 
                                                & (((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_r_req_ready) 
                                                    & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid)) 
                                                   + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_4))))) 
                                      + (7U & ((3U 
                                                & ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_3) 
                                                   + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_2))) 
                                               + (3U 
                                                  & (((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_r_req_ready) 
                                                      & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid)) 
                                                     + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_0))))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at BankedSRAM.scala:53 assert({PopCount(Cat(banks.map(_.io.r.req.fire))) <= 1.U})\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (1U < (0xfU & ((7U & ((3U & 
                                              ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F0) 
                                               + (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F1))) 
                                             + (3U 
                                                & ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F2) 
                                                   + (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F3))))) 
                                      + (7U & ((3U 
                                                & ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F4) 
                                                   + (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F5))) 
                                               + (3U 
                                                  & ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F6) 
                                                     + (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F7))))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at BankedSRAM.scala:52 assert({PopCount(ren_vec) <= 1.U})\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (1U < (0xfU & ((7U & ((3U & 
                                              (((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid)) 
                                                & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid)) 
                                               + VL_SHIFTR_III(2,2,32, 
                                                               ((((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid)) 
                                                                  & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid)) 
                                                                 << 1U) 
                                                                | ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid)) 
                                                                   & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid))), 1U))) 
                                             + (3U 
                                                & (((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid)) 
                                                   + (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_4))))) 
                                      + (7U & ((3U 
                                                & ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_3) 
                                                   + (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_2))) 
                                               + (3U 
                                                  & (((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid)) 
                                                      & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid)) 
                                                     + (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_0))))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at BankedSRAM.scala:53 assert({PopCount(Cat(banks.map(_.io.r.req.fire))) <= 1.U})\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (1U < (0xfU & ((7U & ((3U & 
                                              ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0) 
                                               + (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1))) 
                                             + (3U 
                                                & ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2) 
                                                   + (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3))))) 
                                      + (7U & ((3U 
                                                & ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4) 
                                                   + (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5))) 
                                               + (3U 
                                                  & ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6) 
                                                     + (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7))))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at BankedSRAM.scala:52 assert({PopCount(ren_vec) <= 1.U})\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (1U < (0xfU & ((7U & ((3U & 
                                              (((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid)) 
                                                & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid)) 
                                               + VL_SHIFTR_III(2,2,32, 
                                                               ((((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid)) 
                                                                  & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid)) 
                                                                 << 1U) 
                                                                | ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid)) 
                                                                   & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid))), 1U))) 
                                             + (3U 
                                                & (((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid)) 
                                                   + (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_4))))) 
                                      + (7U & ((3U 
                                                & ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_3) 
                                                   + (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_2))) 
                                               + (3U 
                                                  & (((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid)) 
                                                      & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid)) 
                                                     + (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_0))))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at BankedSRAM.scala:53 assert({PopCount(Cat(banks.map(_.io.r.req.fire))) <= 1.U})\n",0);
    }
    __VdlySet__tagArray__DOT__banks_0__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_0__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_0__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_0__DOT__array_3__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_3__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_3__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_3__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_3__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_3__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_3__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_3__v0 = 0U;
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_0__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_0__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_0__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_0__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_0__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_0__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_0__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_0__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_0__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_0__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_0__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_0__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_1__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_1__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_1__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_1__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_1__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_1__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_1__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_1__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_1__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_1__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_1__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_1__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_2__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_2__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_2__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_2__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_2__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_2__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_2__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_2__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_2__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_2__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_2__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_2__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_3__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_3__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_3__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_3__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_3__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_3__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_3__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_3__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_3__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_3__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_3__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_3__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_4__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_4__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_4__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_4__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_4__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_4__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_4__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_4__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_4__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_4__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_4__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_4__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_5__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_5__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_5__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_5__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_5__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_5__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_5__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_5__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_5__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_5__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_5__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_5__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_6__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_6__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_6__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_6__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_6__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_6__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_6__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_6__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_6__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_6__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_6__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_6__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_7__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_7__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_7__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_7__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_7__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_7__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_7__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_7__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_7__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_7__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_7__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_7__DOT__array_3__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_0__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_0__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_0__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_0__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_0__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_0__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_0__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_0__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_0__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_0__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_0__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_0__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_1__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_1__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_1__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_1__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_1__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_1__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_1__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_1__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_1__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_1__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_1__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_1__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_2__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_2__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_2__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_2__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_2__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_2__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_2__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_2__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_2__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_2__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_2__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_2__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_3__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_3__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_3__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_3__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_3__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_3__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_3__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_3__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_3__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_3__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_3__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_3__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_4__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_4__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_4__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_4__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_4__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_4__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_4__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_4__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_4__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_4__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_4__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_4__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_5__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_5__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_5__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_5__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_5__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_5__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_5__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_5__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_5__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_5__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_5__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_5__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_6__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_6__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_6__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_6__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_6__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_6__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_6__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_6__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_6__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_6__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_6__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_6__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_7__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_7__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_7__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_7__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_7__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_7__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_7__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_7__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_7__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_7__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_7__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_7__DOT__array_3__v0 = 1U;
    }
    vlSelfRef.__PVT__refillReqValid_s3 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                          && (IData)(vlSelfRef.__PVT__refillReqValid_s2));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__resetIdx = 0x7fU;
        vlSelfRef.__PVT__req_s3_tag = 0U;
        vlSelfRef.__PVT__req_s3_set = 0U;
        vlSelfRef.__PVT__req_s3_wayMask = 0U;
        vlSelfRef.__PVT__req_s3_replacerInfo_channel = 0U;
        vlSelfRef.__PVT__req_s3_replacerInfo_opcode = 0U;
        vlSelfRef.__PVT__req_s3_replacerInfo_reqSource = 0U;
        vlSelfRef.__PVT__req_s3_mshrId = 0U;
        vlSelfRef.__PVT__metaAll_s3_0_dirty = 0U;
        vlSelfRef.__PVT__metaAll_s3_0_state = 0U;
        vlSelfRef.__PVT__metaAll_s3_0_clients = 0U;
        vlSelfRef.__PVT__metaAll_s3_0_alias = 0U;
        vlSelfRef.__PVT__metaAll_s3_0_accessed = 0U;
        vlSelfRef.__PVT__metaAll_s3_1_dirty = 0U;
        vlSelfRef.__PVT__metaAll_s3_1_state = 0U;
        vlSelfRef.__PVT__metaAll_s3_1_clients = 0U;
        vlSelfRef.__PVT__metaAll_s3_1_alias = 0U;
        vlSelfRef.__PVT__metaAll_s3_1_accessed = 0U;
        vlSelfRef.__PVT__metaAll_s3_2_dirty = 0U;
        vlSelfRef.__PVT__metaAll_s3_2_state = 0U;
        vlSelfRef.__PVT__metaAll_s3_2_clients = 0U;
        vlSelfRef.__PVT__metaAll_s3_2_alias = 0U;
        vlSelfRef.__PVT__metaAll_s3_2_accessed = 0U;
        vlSelfRef.__PVT__metaAll_s3_3_dirty = 0U;
        vlSelfRef.__PVT__metaAll_s3_3_state = 0U;
        vlSelfRef.__PVT__metaAll_s3_3_clients = 0U;
        vlSelfRef.__PVT__metaAll_s3_3_alias = 0U;
        vlSelfRef.__PVT__metaAll_s3_3_accessed = 0U;
        vlSelfRef.__PVT__tagAll_s3_0 = 0U;
        vlSelfRef.__PVT__tagAll_s3_1 = 0U;
        vlSelfRef.__PVT__tagAll_s3_2 = 0U;
        vlSelfRef.__PVT__tagAll_s3_3 = 0U;
        vlSelfRef.__PVT__repl_state_s3 = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetSet = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetSet = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetSet = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetSet = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetSet = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetSet = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetSet = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetSet = 0U;
        vlSelfRef.__PVT__req_s2_wayMask = 0U;
        vlSelfRef.__PVT__req_s2_replacerInfo_channel = 0U;
        vlSelfRef.__PVT__req_s2_set = 0U;
        vlSelfRef.__PVT__req_s2_mshrId = 0U;
        vlSelfRef.__PVT__req_s2_replacerInfo_reqSource = 0U;
        vlSelfRef.__PVT__req_s2_tag = 0U;
        vlSelfRef.__PVT__req_s2_replacerInfo_opcode = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__resetFinish)))) {
            vlSelfRef.__PVT__resetIdx = vlSelfRef.__PVT___resetIdx_T_1;
        }
        if (vlSelfRef.__PVT__reqValid_s2) {
            vlSelfRef.__PVT__req_s3_tag = vlSelfRef.__PVT__req_s2_tag;
            vlSelfRef.__PVT__req_s3_set = vlSelfRef.__PVT__req_s2_set;
            vlSelfRef.__PVT__req_s3_wayMask = vlSelfRef.__PVT__req_s2_wayMask;
            vlSelfRef.__PVT__req_s3_replacerInfo_channel 
                = vlSelfRef.__PVT__req_s2_replacerInfo_channel;
            vlSelfRef.__PVT__req_s3_replacerInfo_opcode 
                = vlSelfRef.__PVT__req_s2_replacerInfo_opcode;
            vlSelfRef.__PVT__req_s3_replacerInfo_reqSource 
                = vlSelfRef.__PVT__req_s2_replacerInfo_reqSource;
            vlSelfRef.__PVT__req_s3_mshrId = vlSelfRef.__PVT__req_s2_mshrId;
            vlSelfRef.__PVT__metaAll_s3_0_dirty = (
                                                   ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0
                                                     [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                     >> 6U) 
                                                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                                                   | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0
                                                        [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                        >> 6U) 
                                                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                                                      | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 6U) 
                                                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                                                         | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 6U) 
                                                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                                                            | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 6U) 
                                                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                                                               | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 6U) 
                                                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                                                  | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0
                                                                       [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                       >> 6U) 
                                                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                                                     | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0
                                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                         >> 6U) 
                                                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_0_state = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 4U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 4U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 4U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 4U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 4U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 4U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_0_clients = 
                (((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0
                   [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                   >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                 | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0
                      [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                      >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                    | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0
                         [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                         >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                       | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0
                            [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                            >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                          | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0
                               [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                               >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                             | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0
                                  [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                  >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0
                                     [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                     >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0
                                       [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_0_alias = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 1U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 1U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 1U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 1U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 1U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 1U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_0_accessed 
                = ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0
                    [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0
                       [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                      | ((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0
                          [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                         | ((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0
                             [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                            | ((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0
                                [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                               | ((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0
                                   [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                  | ((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0
                                      [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                     | (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0
                                        [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_1_dirty = (
                                                   ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_1
                                                     [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                     >> 6U) 
                                                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                                                   | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_1
                                                        [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                        >> 6U) 
                                                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                                                      | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_1
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 6U) 
                                                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                                                         | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_1
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 6U) 
                                                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                                                            | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_1
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 6U) 
                                                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                                                               | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_1
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 6U) 
                                                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                                                  | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_1
                                                                       [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                       >> 6U) 
                                                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                                                     | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_1
                                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                         >> 6U) 
                                                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_1_state = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_1
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 4U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_1
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 4U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_1
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 4U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_1
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_1
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_1
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 4U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_1
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 4U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_1
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 4U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_1_clients = 
                (((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_1
                   [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                   >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                 | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_1
                      [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                      >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                    | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_1
                         [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                         >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                       | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_1
                            [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                            >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                          | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_1
                               [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                               >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                             | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_1
                                  [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                  >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_1
                                     [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                     >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_1
                                       [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_1_alias = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_1
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 1U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_1
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 1U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_1
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 1U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_1
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_1
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_1
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 1U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_1
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 1U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_1
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 1U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_1_accessed 
                = ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_1
                    [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_1
                       [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                      | ((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_1
                          [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                         | ((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_1
                             [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                            | ((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_1
                                [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                               | ((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_1
                                   [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                  | ((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_1
                                      [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                     | (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_1
                                        [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_2_dirty = (
                                                   ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_2
                                                     [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                     >> 6U) 
                                                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                                                   | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_2
                                                        [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                        >> 6U) 
                                                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                                                      | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_2
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 6U) 
                                                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                                                         | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_2
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 6U) 
                                                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                                                            | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_2
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 6U) 
                                                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                                                               | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_2
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 6U) 
                                                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                                                  | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_2
                                                                       [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                       >> 6U) 
                                                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                                                     | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_2
                                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                         >> 6U) 
                                                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_2_state = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_2
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 4U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_2
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 4U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_2
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 4U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_2
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_2
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_2
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 4U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_2
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 4U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_2
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 4U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_2_clients = 
                (((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_2
                   [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                   >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                 | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_2
                      [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                      >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                    | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_2
                         [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                         >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                       | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_2
                            [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                            >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                          | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_2
                               [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                               >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                             | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_2
                                  [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                  >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_2
                                     [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                     >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_2
                                       [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_2_alias = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_2
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 1U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_2
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 1U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_2
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 1U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_2
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_2
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_2
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 1U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_2
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 1U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_2
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 1U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_2_accessed 
                = ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_2
                    [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_2
                       [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                      | ((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_2
                          [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                         | ((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_2
                             [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                            | ((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_2
                                [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                               | ((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_2
                                   [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                  | ((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_2
                                      [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                     | (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_2
                                        [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_3_dirty = (
                                                   ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_3
                                                     [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                     >> 6U) 
                                                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                                                   | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_3
                                                        [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                        >> 6U) 
                                                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                                                      | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_3
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 6U) 
                                                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                                                         | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_3
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 6U) 
                                                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                                                            | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_3
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 6U) 
                                                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                                                               | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_3
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 6U) 
                                                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                                                  | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_3
                                                                       [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                       >> 6U) 
                                                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                                                     | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_3
                                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                         >> 6U) 
                                                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_3_state = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_3
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 4U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_3
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 4U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_3
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 4U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_3
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_3
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_3
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 4U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_3
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 4U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_3
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 4U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_3_clients = 
                (((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_3
                   [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                   >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                 | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_3
                      [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                      >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                    | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_3
                         [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                         >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                       | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_3
                            [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                            >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                          | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_3
                               [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                               >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                             | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_3
                                  [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                  >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_3
                                     [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                     >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_3
                                       [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_3_alias = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_3
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 1U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_3
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 1U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_3
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 1U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_3
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_3
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_3
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 1U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_3
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 1U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_3
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 1U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_3_accessed 
                = ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_3
                    [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_3
                       [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                      | ((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_3
                          [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                         | ((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_3
                             [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                            | ((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_3
                                [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                               | ((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_3
                                   [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                  | ((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_3
                                      [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                     | (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_3
                                        [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__tagAll_s3_0 = ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F0)
                                               ? vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_0
                                              [vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                               : 0U) 
                                             | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F1)
                                                 ? 
                                                vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_0
                                                [vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                 : 0U)) 
                                            | ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F2)
                                                  ? 
                                                 vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_0
                                                 [vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0]
                                                  : 0U) 
                                                | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F3)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_0
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U)) 
                                               | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F4)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_0
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U) 
                                                  | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F5)
                                                       ? 
                                                      vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_0
                                                      [vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U) 
                                                     | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F6)
                                                          ? 
                                                         vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_0
                                                         [vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U) 
                                                        | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F7)
                                                            ? 
                                                           vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_0
                                                           [vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U))))));
            vlSelfRef.__PVT__tagAll_s3_1 = ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F0)
                                               ? vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_1
                                              [vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                               : 0U) 
                                             | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F1)
                                                 ? 
                                                vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_1
                                                [vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                 : 0U)) 
                                            | ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F2)
                                                  ? 
                                                 vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_1
                                                 [vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0]
                                                  : 0U) 
                                                | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F3)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_1
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U)) 
                                               | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F4)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_1
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U) 
                                                  | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F5)
                                                       ? 
                                                      vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_1
                                                      [vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U) 
                                                     | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F6)
                                                          ? 
                                                         vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_1
                                                         [vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U) 
                                                        | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F7)
                                                            ? 
                                                           vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_1
                                                           [vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U))))));
            vlSelfRef.__PVT__tagAll_s3_2 = ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F0)
                                               ? vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_2
                                              [vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                               : 0U) 
                                             | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F1)
                                                 ? 
                                                vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_2
                                                [vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                 : 0U)) 
                                            | ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F2)
                                                  ? 
                                                 vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_2
                                                 [vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0]
                                                  : 0U) 
                                                | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F3)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_2
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U)) 
                                               | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F4)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_2
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U) 
                                                  | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F5)
                                                       ? 
                                                      vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_2
                                                      [vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U) 
                                                     | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F6)
                                                          ? 
                                                         vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_2
                                                         [vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U) 
                                                        | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F7)
                                                            ? 
                                                           vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_2
                                                           [vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U))))));
            vlSelfRef.__PVT__tagAll_s3_3 = ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F0)
                                               ? vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_3
                                              [vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                               : 0U) 
                                             | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F1)
                                                 ? 
                                                vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_3
                                                [vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                 : 0U)) 
                                            | ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F2)
                                                  ? 
                                                 vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_3
                                                 [vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0]
                                                  : 0U) 
                                                | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F3)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_3
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U)) 
                                               | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F4)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_3
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U) 
                                                  | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F5)
                                                       ? 
                                                      vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_3
                                                      [vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U) 
                                                     | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F6)
                                                          ? 
                                                         vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_3
                                                         [vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U) 
                                                        | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F7)
                                                            ? 
                                                           vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_3
                                                           [vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U))))));
            vlSelfRef.__PVT__repl_state_s3 = ((((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F0)
                                                 ? 
                                                vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0
                                                [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                 : 0U) 
                                               | ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F1)
                                                   ? 
                                                  vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0
                                                  [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                   : 0U)) 
                                              | ((((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F2)
                                                    ? 
                                                   vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0
                                                   [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U) 
                                                  | ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F3)
                                                      ? 
                                                     vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0
                                                     [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0]
                                                      : 0U)) 
                                                 | (((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F4)
                                                      ? 
                                                     vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0
                                                     [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0]
                                                      : 0U) 
                                                    | (((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F5)
                                                         ? 
                                                        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0
                                                        [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0]
                                                         : 0U) 
                                                       | (((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F6)
                                                            ? 
                                                           vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0
                                                           [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F7)
                                                              ? 
                                                             vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0
                                                             [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0]
                                                              : 0U))))));
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__tagArray_io_r_req_valid) {
            vlSelfRef.__PVT__req_s2_wayMask = 0xfU;
            vlSelfRef.__PVT__req_s2_replacerInfo_channel 
                = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_replacerInfo_channel;
            vlSelfRef.__PVT__req_s2_set = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set;
            if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_valid) {
                vlSelfRef.__PVT__req_s2_mshrId = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_bits_mshrId;
                vlSelfRef.__PVT__req_s2_replacerInfo_reqSource 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_bits_reqSource;
                vlSelfRef.__PVT__req_s2_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_bits_tag;
                vlSelfRef.__PVT__req_s2_replacerInfo_opcode 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_bits_opcode;
            } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_1) {
                vlSelfRef.__PVT__req_s2_mshrId = 0U;
                vlSelfRef.__PVT__req_s2_replacerInfo_reqSource = 0U;
                vlSelfRef.__PVT__req_s2_tag = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_task_bits_tag;
                vlSelfRef.__PVT__req_s2_replacerInfo_opcode 
                    = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_task_bits_opcode;
            } else {
                vlSelfRef.__PVT__req_s2_mshrId = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_mshrId;
                vlSelfRef.__PVT__req_s2_replacerInfo_reqSource 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_reqSource;
                vlSelfRef.__PVT__req_s2_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_tag;
                vlSelfRef.__PVT__req_s2_replacerInfo_opcode 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_opcode;
            }
        }
    }
    vlSelfRef.__PVT__reqValid_s3 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelfRef.__PVT__reqValid_s2));
    if (__VdlySet__metaArray__DOT__banks_0__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_0__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_0__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_1__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_1__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_1__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_2__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_2__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_2__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_3__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_3__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_3__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_4__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_4__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_4__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_5__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_5__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_5__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_6__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_6__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_6__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_7__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_7__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_7__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_0__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_0__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_0__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_1__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_1__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_1__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_2__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_2__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_2__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_3__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_3__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_3__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_4__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_4__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_4__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_5__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_5__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_5__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_6__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_6__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_6__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_7__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_7__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_7__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_0__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_0__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_0__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_1__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_1__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_1__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_2__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_2__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_2__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_3__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_3__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_3__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_4__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_4__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_4__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_5__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_5__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_5__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_6__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_6__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_6__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_7__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_7__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_7__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_0__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_0__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_0__DOT__array_3__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_1__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_1__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_1__DOT__array_3__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_2__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_2__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_2__DOT__array_3__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_3__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_3__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_3__DOT__array_3__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_4__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_4__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_4__DOT__array_3__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_5__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_5__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_5__DOT__array_3__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_6__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_6__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_6__DOT__array_3__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_7__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_7__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_7__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_0__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_0__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_0__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_1__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_1__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_1__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_2__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_2__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_2__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_3__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_3__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_3__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_4__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_4__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_4__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_5__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_5__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_5__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_6__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_6__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_6__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_7__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_7__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_7__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_0__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_0__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_0__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_1__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_1__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_1__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_2__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_2__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_2__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_3__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_3__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_3__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_4__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_4__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_4__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_5__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_5__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_5__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_6__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_6__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_6__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_7__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_7__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_7__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_0__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_0__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_0__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_1__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_1__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_1__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_2__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_2__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_2__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_3__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_3__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_3__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_4__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_4__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_4__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_5__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_5__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_5__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_6__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_6__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_6__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_7__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_7__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_7__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_0__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_0__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_0__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_1__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_1__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_1__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_2__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_2__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_2__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_3__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_3__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_3__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_4__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_4__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_4__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_5__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_5__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_5__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_6__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_6__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_6__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_7__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_7__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_7__DOT__array_3__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0;
    }
    vlSelfRef.__PVT__refillReqValid_s2 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                          && ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
                                              & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_refill)));
    vlSelfRef.__PVT___resetIdx_T_1 = (0x7fU & ((IData)(vlSelfRef.__PVT__resetIdx) 
                                               - (IData)(1U)));
    vlSelfRef.__PVT__resetFinish = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelfRef.__PVT___GEN_89));
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_0));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_2));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_3));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_4));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_0));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_2));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F3 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_3));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F4 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_4));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_0));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F3 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_3));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F4 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_4));
    vlSelfRef.__PVT__reqValid_s2 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_r_req_ready) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F5 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_r_req_ready) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F6 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_r_req_ready) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F7 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_r_req_ready) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid)));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid)));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid)));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid)));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid)));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid)));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F5 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid)));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F6 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid)));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F7 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid)));
    __PVT__replaceWay = ((2U & ((IData)(vlSelfRef.__PVT__repl_state_s3) 
                                >> 1U)) | (1U & ((4U 
                                                  & (IData)(vlSelfRef.__PVT__repl_state_s3))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__repl_state_s3) 
                                                  >> 1U)
                                                  : (IData)(vlSelfRef.__PVT__repl_state_s3))));
    __PVT__hitVec_1 = (((IData)(vlSelfRef.__PVT__req_s3_tag) 
                        == (IData)(vlSelfRef.__PVT__tagAll_s3_1)) 
                       & (0U != (IData)(vlSelfRef.__PVT__metaAll_s3_1_state)));
    __PVT__hitVec_2 = (((IData)(vlSelfRef.__PVT__req_s3_tag) 
                        == (IData)(vlSelfRef.__PVT__tagAll_s3_2)) 
                       & (0U != (IData)(vlSelfRef.__PVT__metaAll_s3_2_state)));
    __PVT__hitVec_3 = (((IData)(vlSelfRef.__PVT__req_s3_tag) 
                        == (IData)(vlSelfRef.__PVT__tagAll_s3_3)) 
                       & (0U != (IData)(vlSelfRef.__PVT__metaAll_s3_3_state)));
    __PVT__chosenWay = (((0U == (IData)(vlSelfRef.__PVT__metaAll_s3_0_state)) 
                         | ((0U == (IData)(vlSelfRef.__PVT__metaAll_s3_1_state)) 
                            | ((0U == (IData)(vlSelfRef.__PVT__metaAll_s3_2_state)) 
                               | (0U == (IData)(vlSelfRef.__PVT__metaAll_s3_3_state)))))
                         ? (((0U == (IData)(vlSelfRef.__PVT__metaAll_s3_0_state)) 
                             | (0U == (IData)(vlSelfRef.__PVT__metaAll_s3_1_state)))
                             ? ((0U == (IData)(vlSelfRef.__PVT__metaAll_s3_0_state))
                                 ? 0U : 1U) : ((0U 
                                                == (IData)(vlSelfRef.__PVT__metaAll_s3_2_state))
                                                ? 2U
                                                : 3U))
                         : (IData)(__PVT__replaceWay));
    __PVT__hitWay_hi_1 = (((IData)(__PVT__hitVec_3) 
                           << 1U) | (IData)(__PVT__hitVec_2));
    vlSelfRef.io_resp_hit = ((((IData)(vlSelfRef.__PVT__req_s3_tag) 
                               == (IData)(vlSelfRef.__PVT__tagAll_s3_0)) 
                              & (0U != (IData)(vlSelfRef.__PVT__metaAll_s3_0_state))) 
                             | ((IData)(__PVT__hitVec_1) 
                                | ((IData)(__PVT__hitVec_2) 
                                   | (IData)(__PVT__hitVec_3))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT___GEN_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT___GEN_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT___GEN_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT___GEN_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT___GEN_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT___GEN_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT___GEN_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT___GEN_2));
    vlSelfRef.__PVT___GEN_89 = ((0U == (IData)(vlSelfRef.__PVT__resetIdx)) 
                                | (IData)(vlSelfRef.__PVT__resetFinish));
    vlSelfRef.io_replResp_bits_way = ((1U & ((IData)(vlSelfRef.__PVT__req_s3_wayMask) 
                                             >> (IData)(__PVT__chosenWay)))
                                       ? (IData)(__PVT__chosenWay)
                                       : ((1U & (IData)(vlSelfRef.__PVT__req_s3_wayMask))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__req_s3_wayMask))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.__PVT__req_s3_wayMask))
                                                     ? 2U
                                                     : 3U))));
    if ((3U == (IData)(vlSelfRef.io_replResp_bits_way))) {
        vlSelfRef.io_replResp_bits_tag = vlSelfRef.__PVT__tagAll_s3_3;
        vlSelfRef.io_replResp_bits_meta_alias = vlSelfRef.__PVT__metaAll_s3_3_alias;
        vlSelfRef.io_replResp_bits_meta_accessed = vlSelfRef.__PVT__metaAll_s3_3_accessed;
        vlSelfRef.io_replResp_bits_meta_dirty = vlSelfRef.__PVT__metaAll_s3_3_dirty;
        vlSelfRef.io_replResp_bits_meta_clients = vlSelfRef.__PVT__metaAll_s3_3_clients;
        vlSelfRef.io_replResp_bits_meta_state = vlSelfRef.__PVT__metaAll_s3_3_state;
    } else if ((2U == (IData)(vlSelfRef.io_replResp_bits_way))) {
        vlSelfRef.io_replResp_bits_tag = vlSelfRef.__PVT__tagAll_s3_2;
        vlSelfRef.io_replResp_bits_meta_alias = vlSelfRef.__PVT__metaAll_s3_2_alias;
        vlSelfRef.io_replResp_bits_meta_accessed = vlSelfRef.__PVT__metaAll_s3_2_accessed;
        vlSelfRef.io_replResp_bits_meta_dirty = vlSelfRef.__PVT__metaAll_s3_2_dirty;
        vlSelfRef.io_replResp_bits_meta_clients = vlSelfRef.__PVT__metaAll_s3_2_clients;
        vlSelfRef.io_replResp_bits_meta_state = vlSelfRef.__PVT__metaAll_s3_2_state;
    } else if ((1U == (IData)(vlSelfRef.io_replResp_bits_way))) {
        vlSelfRef.io_replResp_bits_tag = vlSelfRef.__PVT__tagAll_s3_1;
        vlSelfRef.io_replResp_bits_meta_alias = vlSelfRef.__PVT__metaAll_s3_1_alias;
        vlSelfRef.io_replResp_bits_meta_accessed = vlSelfRef.__PVT__metaAll_s3_1_accessed;
        vlSelfRef.io_replResp_bits_meta_dirty = vlSelfRef.__PVT__metaAll_s3_1_dirty;
        vlSelfRef.io_replResp_bits_meta_clients = vlSelfRef.__PVT__metaAll_s3_1_clients;
        vlSelfRef.io_replResp_bits_meta_state = vlSelfRef.__PVT__metaAll_s3_1_state;
    } else {
        vlSelfRef.io_replResp_bits_tag = vlSelfRef.__PVT__tagAll_s3_0;
        vlSelfRef.io_replResp_bits_meta_alias = vlSelfRef.__PVT__metaAll_s3_0_alias;
        vlSelfRef.io_replResp_bits_meta_accessed = vlSelfRef.__PVT__metaAll_s3_0_accessed;
        vlSelfRef.io_replResp_bits_meta_dirty = vlSelfRef.__PVT__metaAll_s3_0_dirty;
        vlSelfRef.io_replResp_bits_meta_clients = vlSelfRef.__PVT__metaAll_s3_0_clients;
        vlSelfRef.io_replResp_bits_meta_state = vlSelfRef.__PVT__metaAll_s3_0_state;
    }
    vlSelfRef.io_resp_way = ((IData)(vlSelfRef.io_resp_hit)
                              ? (((IData)((0U != (IData)(__PVT__hitWay_hi_1))) 
                                  << 1U) | (IData)(
                                                   (((IData)(__PVT__hitWay_hi_1) 
                                                     >> 1U) 
                                                    | (IData)(__PVT__hitVec_1))))
                              : (IData)(vlSelfRef.io_replResp_bits_way));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState));
    if ((3U == (IData)(vlSelfRef.io_resp_way))) {
        vlSelfRef.io_resp_tag = vlSelfRef.__PVT__tagAll_s3_3;
        vlSelfRef.io_resp_meta_accessed = vlSelfRef.__PVT__metaAll_s3_3_accessed;
        vlSelfRef.io_resp_meta_dirty = vlSelfRef.__PVT__metaAll_s3_3_dirty;
        vlSelfRef.io_resp_meta_alias = vlSelfRef.__PVT__metaAll_s3_3_alias;
        vlSelfRef.io_resp_meta_clients = vlSelfRef.__PVT__metaAll_s3_3_clients;
        vlSelfRef.io_resp_meta_state = vlSelfRef.__PVT__metaAll_s3_3_state;
    } else if ((2U == (IData)(vlSelfRef.io_resp_way))) {
        vlSelfRef.io_resp_tag = vlSelfRef.__PVT__tagAll_s3_2;
        vlSelfRef.io_resp_meta_accessed = vlSelfRef.__PVT__metaAll_s3_2_accessed;
        vlSelfRef.io_resp_meta_dirty = vlSelfRef.__PVT__metaAll_s3_2_dirty;
        vlSelfRef.io_resp_meta_alias = vlSelfRef.__PVT__metaAll_s3_2_alias;
        vlSelfRef.io_resp_meta_clients = vlSelfRef.__PVT__metaAll_s3_2_clients;
        vlSelfRef.io_resp_meta_state = vlSelfRef.__PVT__metaAll_s3_2_state;
    } else if ((1U == (IData)(vlSelfRef.io_resp_way))) {
        vlSelfRef.io_resp_tag = vlSelfRef.__PVT__tagAll_s3_1;
        vlSelfRef.io_resp_meta_accessed = vlSelfRef.__PVT__metaAll_s3_1_accessed;
        vlSelfRef.io_resp_meta_dirty = vlSelfRef.__PVT__metaAll_s3_1_dirty;
        vlSelfRef.io_resp_meta_alias = vlSelfRef.__PVT__metaAll_s3_1_alias;
        vlSelfRef.io_resp_meta_clients = vlSelfRef.__PVT__metaAll_s3_1_clients;
        vlSelfRef.io_resp_meta_state = vlSelfRef.__PVT__metaAll_s3_1_state;
    } else {
        vlSelfRef.io_resp_tag = vlSelfRef.__PVT__tagAll_s3_0;
        vlSelfRef.io_resp_meta_accessed = vlSelfRef.__PVT__metaAll_s3_0_accessed;
        vlSelfRef.io_resp_meta_dirty = vlSelfRef.__PVT__metaAll_s3_0_dirty;
        vlSelfRef.io_resp_meta_alias = vlSelfRef.__PVT__metaAll_s3_0_alias;
        vlSelfRef.io_resp_meta_clients = vlSelfRef.__PVT__metaAll_s3_0_clients;
        vlSelfRef.io_resp_meta_state = vlSelfRef.__PVT__metaAll_s3_0_state;
    }
    __PVT__touch_way_s3 = ((IData)(vlSelfRef.__PVT__refillReqValid_s3)
                            ? (IData)(__PVT__replaceWay)
                            : (IData)(vlSelfRef.io_resp_way));
    if (vlSelfRef.__PVT__resetFinish) {
        vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx 
            = vlSelfRef.__PVT__req_s3_set;
        vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0 
            = ((4U & ((~ ((IData)(__PVT__touch_way_s3) 
                          >> 1U)) << 2U)) | ((2U & 
                                              (((2U 
                                                 & (IData)(__PVT__touch_way_s3))
                                                 ? 
                                                (~ (IData)(__PVT__touch_way_s3))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__repl_state_s3) 
                                                 >> 1U)) 
                                               << 1U)) 
                                             | (1U 
                                                & ((2U 
                                                    & (IData)(__PVT__touch_way_s3))
                                                    ? (IData)(vlSelfRef.__PVT__repl_state_s3)
                                                    : 
                                                   (~ (IData)(__PVT__touch_way_s3))))));
    } else {
        vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx 
            = vlSelfRef.__PVT__resetIdx;
        vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0 = 0U;
    }
}

VL_INLINE_OPT void VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__1(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data 
        = (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__resetFinish) 
              & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                  ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a) 
                     & (IData)(vlSelfRef.io_resp_meta_dirty))
                  : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                      ? ((IData)(vlSelfRef.io_resp_meta_dirty) 
                         | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__wen_c))
                      : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_dirty)))) 
             << 6U) | ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__resetFinish)
                          ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                              ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a)
                                  ? (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__req_needT_s3) 
                                      | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__sink_resp_s3_a_promoteT))
                                      ? 2U : (IData)(vlSelfRef.io_resp_meta_state))
                                  : ((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param))
                                      ? 0U : 1U)) : 
                             ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                               ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___wen_c_T_4)
                                   ? 3U : (IData)(vlSelfRef.io_resp_meta_state))
                               : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_state)))
                          : 0U) << 4U) | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__resetFinish) 
                                           & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                                               ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a) 
                                                  | ((2U 
                                                      != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                                     & (IData)(vlSelfRef.io_resp_meta_clients)))
                                               : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                                                   ? 
                                                  (~ 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                                    | ((2U 
                                                        == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                                       | (5U 
                                                          == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)))))
                                                   : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_clients)))) 
                                          << 3U))) 
           | ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__resetFinish)
                 ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                     ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a)
                         ? (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__req_get_s3) 
                             | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__req_prefetch_s3))
                             ? (IData)(vlSelfRef.io_resp_meta_alias)
                             : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_alias))
                         : ((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param))
                             ? 0U : (IData)(vlSelfRef.io_resp_meta_alias)))
                     : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                         ? (IData)(vlSelfRef.io_resp_meta_alias)
                         : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_alias)))
                 : 0U) << 1U) | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__resetFinish) 
                                 & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                                     ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a) 
                                        | ((2U != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                           & (IData)(vlSelfRef.io_resp_meta_accessed)))
                                     : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                                         ? (IData)(vlSelfRef.io_resp_meta_accessed)
                                         : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_accessed))))));
}

VL_INLINE_OPT void VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__2(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__replacer_sram_opt_io_w_req_valid;
    __PVT__replacer_sram_opt_io_w_req_valid = 0;
    // Body
    vlSelfRef.io_replResp_bits_retry = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set) 
                                             == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_hit) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_status_bits_needsRepl)) 
                                               & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_way) 
                                                  == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                        | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set) 
                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_hit) 
                                                   | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_status_bits_needsRepl)) 
                                                  & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_way) 
                                                     == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                           | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set) 
                                                   == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_hit) 
                                                      | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_status_bits_needsRepl)) 
                                                     & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_way) 
                                                        == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                              | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set) 
                                                      == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_hit) 
                                                         | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_status_bits_needsRepl)) 
                                                        & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_way) 
                                                           == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set) 
                                                         == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_hit) 
                                                            | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_status_bits_needsRepl)) 
                                                           & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_way) 
                                                              == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                    | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set) 
                                                            == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_hit) 
                                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_status_bits_needsRepl)) 
                                                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_way) 
                                                                 == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                       | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set) 
                                                               == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_hit) 
                                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_status_bits_needsRepl)) 
                                                                 & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_way) 
                                                                    == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                          | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set) 
                                                                  == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                 & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_hit) 
                                                                     | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_status_bits_needsRepl)) 
                                                                    & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_way) 
                                                                       == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                             | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                                 & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set) 
                                                                     == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                    & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_hit) 
                                                                        | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_status_bits_needsRepl)) 
                                                                       & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_way) 
                                                                          == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                                    & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set) 
                                                                        == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_hit) 
                                                                           | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_status_bits_needsRepl)) 
                                                                          & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_way) 
                                                                             == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set) 
                                                                           == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_hit) 
                                                                              | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_status_bits_needsRepl)) 
                                                                             & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                      | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set) 
                                                                              == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                         | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                            | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                               | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                                | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))))))))))))))))));
    __PVT__replacer_sram_opt_io_w_req_valid = (1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__resetFinish)) 
                                                | (((IData)(vlSelfRef.__PVT__reqValid_s3) 
                                                    & ((IData)(vlSelfRef.io_resp_hit) 
                                                       & ((IData)(vlSelfRef.__PVT__req_s3_replacerInfo_channel) 
                                                          & ((7U 
                                                              == (IData)(vlSelfRef.__PVT__req_s3_replacerInfo_opcode)) 
                                                             | (6U 
                                                                == (IData)(vlSelfRef.__PVT__req_s3_replacerInfo_opcode)))))) 
                                                   | ((~ (IData)(vlSelfRef.io_replResp_bits_retry)) 
                                                      & (IData)(vlSelfRef.__PVT__refillReqValid_s3)))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (7U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (6U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (5U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (1U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (4U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (3U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (2U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (0U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_MPORT_en))));
}

VL_INLINE_OPT void VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__3(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (7U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (6U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (5U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (1U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (4U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (3U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (2U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (0U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (7U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (6U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (5U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (1U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (4U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (3U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (2U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (0U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
}

VL_INLINE_OPT void VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__4(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_read_ready = (1U & ((((((0x80U & (
                                                   (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid)) 
                                                   << 7U)) 
                                         | (0x40U & 
                                            ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid)) 
                                             << 6U))) 
                                        | ((0x20U & 
                                            ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid)) 
                                             << 5U)) 
                                           | (0x10U 
                                              & ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid)) 
                                                 << 4U)))) 
                                       | (((8U & ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid)) 
                                                  << 3U)) 
                                           | (4U & 
                                              ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid)) 
                                               << 2U))) 
                                          | ((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid)))))) 
                                      >> (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))) 
                                     & ((((((0x80U 
                                             & ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid)) 
                                                << 7U)) 
                                            | (0x40U 
                                               & ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid)) 
                                                  << 6U))) 
                                           | ((0x20U 
                                               & ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid)) 
                                                  << 5U)) 
                                              | (0x10U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid)) 
                                                    << 4U)))) 
                                          | (((8U & 
                                               ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid)) 
                                                << 3U)) 
                                              | (4U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid)) 
                                                    << 2U))) 
                                             | ((2U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid)))))) 
                                         >> (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))) 
                                        & (((((((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_w_req_valid)) 
                                                & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_r_req_ready)) 
                                               << 7U) 
                                              | (((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_w_req_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_r_req_ready)) 
                                                 << 6U)) 
                                             | ((((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_w_req_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_r_req_ready)) 
                                                 << 5U) 
                                                | (((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_w_req_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_r_req_ready)) 
                                                   << 4U))) 
                                            | (((((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_w_req_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_r_req_ready)) 
                                                 << 3U) 
                                                | (((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_w_req_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_r_req_ready)) 
                                                   << 2U)) 
                                               | ((((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_w_req_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_r_req_ready)) 
                                                   << 1U) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_w_req_valid)) 
                                                     & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_r_req_ready))))) 
                                           >> (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))))));
}

VL_INLINE_OPT void VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__5(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tagArray_io_r_req_valid = ((IData)(vlSelfRef.io_read_ready) 
                                                & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_valid));
    vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (1U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (5U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (6U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (7U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_0_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (0U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_2_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (2U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_3_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (3U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_4_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (4U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_0 = (
                                                   (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_r_req_valid));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_0 = 
        ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid)) 
         & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_r_req_valid));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_0 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_r_req_ready) 
           & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_r_req_valid));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_2 = (
                                                   (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_r_req_valid));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_2 = 
        ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid)) 
         & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_r_req_valid));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_2 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_r_req_ready) 
           & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_r_req_valid));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_3 = (
                                                   (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_r_req_valid));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_3 = 
        ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid)) 
         & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_r_req_valid));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_3 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_r_req_ready) 
           & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_r_req_valid));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_4 = (
                                                   (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_r_req_valid));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_4 = 
        ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid)) 
         & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_r_req_valid));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_4 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_r_req_ready) 
           & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_r_req_valid));
}

VL_INLINE_OPT void VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory__0(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__hitVec_1;
    __PVT__hitVec_1 = 0;
    CData/*0:0*/ __PVT__hitVec_2;
    __PVT__hitVec_2 = 0;
    CData/*0:0*/ __PVT__hitVec_3;
    __PVT__hitVec_3 = 0;
    CData/*1:0*/ __PVT__hitWay_hi_1;
    __PVT__hitWay_hi_1 = 0;
    CData/*1:0*/ __PVT__replaceWay;
    __PVT__replaceWay = 0;
    CData/*1:0*/ __PVT__chosenWay;
    __PVT__chosenWay = 0;
    CData/*1:0*/ __PVT__touch_way_s3;
    __PVT__touch_way_s3 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_0__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_0__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_0__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_0__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_0__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_0__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_0__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_0__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_0__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_0__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_0__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_0__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_0__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_0__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_0__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_0__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_0__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_0__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_0__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_0__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_0__DOT__array_3__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_1__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_1__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_1__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_1__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_1__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_1__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_1__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_1__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_1__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_1__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_1__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_1__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_1__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_1__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_1__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_1__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_1__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_1__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_3__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_2__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_2__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_2__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_2__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_2__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_2__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_2__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_2__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_2__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_2__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_2__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_2__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_2__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_2__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_2__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_2__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_2__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_2__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_3__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_3__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_3__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_3__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_3__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_3__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_3__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_3__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_3__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_3__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_3__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_3__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_3__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_3__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_3__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_3__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_3__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_3__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_3__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_3__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_4__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_4__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_4__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_4__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_4__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_4__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_4__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_4__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_4__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_4__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_4__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_4__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_4__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_4__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_4__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_4__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_4__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_4__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_3__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_5__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_5__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_5__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_5__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_5__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_5__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_5__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_5__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_5__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_5__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_5__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_5__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_5__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_5__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_5__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_5__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_5__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_5__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_3__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_6__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_6__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_6__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_6__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_6__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_6__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_6__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_6__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_6__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_6__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_6__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_6__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_6__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_6__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_6__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_6__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_6__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_6__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_3__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_7__DOT__array_0__v0;
    __VdlyVal__tagArray__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_7__DOT__array_0__v0;
    __VdlyDim0__tagArray__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_7__DOT__array_0__v0;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_7__DOT__array_1__v0;
    __VdlyVal__tagArray__DOT__banks_7__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_7__DOT__array_1__v0;
    __VdlyDim0__tagArray__DOT__banks_7__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_7__DOT__array_1__v0;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_7__DOT__array_2__v0;
    __VdlyVal__tagArray__DOT__banks_7__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_7__DOT__array_2__v0;
    __VdlyDim0__tagArray__DOT__banks_7__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_7__DOT__array_2__v0;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tagArray__DOT__banks_7__DOT__array_3__v0;
    __VdlyVal__tagArray__DOT__banks_7__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tagArray__DOT__banks_7__DOT__array_3__v0;
    __VdlyDim0__tagArray__DOT__banks_7__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__tagArray__DOT__banks_7__DOT__array_3__v0;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_0__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_0__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_0__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_0__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_0__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_0__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_0__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_0__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_0__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_0__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_0__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_0__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_0__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_0__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_0__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_0__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_0__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_0__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_0__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_0__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_0__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_1__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_1__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_1__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_1__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_1__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_1__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_1__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_1__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_1__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_1__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_1__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_1__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_1__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_1__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_1__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_1__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_1__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_1__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_2__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_2__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_2__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_2__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_2__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_2__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_2__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_2__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_2__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_2__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_2__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_2__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_2__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_2__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_2__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_2__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_2__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_2__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_3__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_3__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_3__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_3__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_3__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_3__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_3__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_3__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_3__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_3__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_3__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_3__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_3__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_3__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_3__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_3__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_3__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_3__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_4__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_4__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_4__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_4__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_4__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_4__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_4__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_4__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_4__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_4__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_4__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_4__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_4__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_4__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_4__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_4__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_4__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_4__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_5__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_5__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_5__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_5__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_5__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_5__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_5__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_5__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_5__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_5__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_5__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_5__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_5__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_5__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_5__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_5__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_5__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_5__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_6__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_6__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_6__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_6__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_6__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_6__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_6__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_6__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_6__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_6__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_6__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_6__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_6__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_6__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_6__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_6__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_6__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_6__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_3__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_7__DOT__array_0__v0;
    __VdlyVal__metaArray__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_7__DOT__array_0__v0;
    __VdlyDim0__metaArray__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_7__DOT__array_0__v0;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_7__DOT__array_1__v0;
    __VdlyVal__metaArray__DOT__banks_7__DOT__array_1__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_7__DOT__array_1__v0;
    __VdlyDim0__metaArray__DOT__banks_7__DOT__array_1__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_7__DOT__array_1__v0;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_1__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_7__DOT__array_2__v0;
    __VdlyVal__metaArray__DOT__banks_7__DOT__array_2__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_7__DOT__array_2__v0;
    __VdlyDim0__metaArray__DOT__banks_7__DOT__array_2__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_7__DOT__array_2__v0;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_2__v0 = 0;
    CData/*6:0*/ __VdlyVal__metaArray__DOT__banks_7__DOT__array_3__v0;
    __VdlyVal__metaArray__DOT__banks_7__DOT__array_3__v0 = 0;
    CData/*3:0*/ __VdlyDim0__metaArray__DOT__banks_7__DOT__array_3__v0;
    __VdlyDim0__metaArray__DOT__banks_7__DOT__array_3__v0 = 0;
    CData/*0:0*/ __VdlySet__metaArray__DOT__banks_7__DOT__array_3__v0;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_3__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 = 0;
    CData/*2:0*/ __VdlyVal__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0;
    __VdlyVal__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*3:0*/ __VdlyDim0__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0;
    __VdlyDim0__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 = 0;
    CData/*0:0*/ __VdlySet__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0;
    __VdlySet__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 = 0;
    // Body
    __VdlySet__metaArray__DOT__banks_0__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_0__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_0__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_0__DOT__array_3__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_1__DOT__array_3__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_2__DOT__array_3__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_3__DOT__array_3__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_4__DOT__array_3__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_5__DOT__array_3__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_6__DOT__array_3__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_0__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_1__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_2__v0 = 0U;
    __VdlySet__metaArray__DOT__banks_7__DOT__array_3__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 = 0U;
    __VdlySet__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 = 0U;
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (1U < (0xfU & ((7U & ((3U & 
                                              ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F0) 
                                               + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F1))) 
                                             + (3U 
                                                & ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F2) 
                                                   + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F3))))) 
                                      + (7U & ((3U 
                                                & ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F4) 
                                                   + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F5))) 
                                               + (3U 
                                                  & ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F6) 
                                                     + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F7))))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at BankedSRAM.scala:52 assert({PopCount(ren_vec) <= 1.U})\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (1U < (0xfU & ((7U & ((3U & 
                                              (((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_r_req_ready) 
                                                & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid)) 
                                               + VL_SHIFTR_III(2,2,32, 
                                                               ((((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_r_req_ready) 
                                                                  & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_r_req_ready) 
                                                                   & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid))), 1U))) 
                                             + (3U 
                                                & (((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_r_req_ready) 
                                                    & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid)) 
                                                   + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_4))))) 
                                      + (7U & ((3U 
                                                & ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_3) 
                                                   + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_2))) 
                                               + (3U 
                                                  & (((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_r_req_ready) 
                                                      & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid)) 
                                                     + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_0))))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at BankedSRAM.scala:53 assert({PopCount(Cat(banks.map(_.io.r.req.fire))) <= 1.U})\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (1U < (0xfU & ((7U & ((3U & 
                                              ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F0) 
                                               + (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F1))) 
                                             + (3U 
                                                & ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F2) 
                                                   + (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F3))))) 
                                      + (7U & ((3U 
                                                & ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F4) 
                                                   + (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F5))) 
                                               + (3U 
                                                  & ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F6) 
                                                     + (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F7))))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at BankedSRAM.scala:52 assert({PopCount(ren_vec) <= 1.U})\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (1U < (0xfU & ((7U & ((3U & 
                                              (((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid)) 
                                                & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid)) 
                                               + VL_SHIFTR_III(2,2,32, 
                                                               ((((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid)) 
                                                                  & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid)) 
                                                                 << 1U) 
                                                                | ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid)) 
                                                                   & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid))), 1U))) 
                                             + (3U 
                                                & (((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid)) 
                                                   + (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_4))))) 
                                      + (7U & ((3U 
                                                & ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_3) 
                                                   + (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_2))) 
                                               + (3U 
                                                  & (((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid)) 
                                                      & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid)) 
                                                     + (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_0))))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at BankedSRAM.scala:53 assert({PopCount(Cat(banks.map(_.io.r.req.fire))) <= 1.U})\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (1U < (0xfU & ((7U & ((3U & 
                                              ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0) 
                                               + (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1))) 
                                             + (3U 
                                                & ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2) 
                                                   + (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3))))) 
                                      + (7U & ((3U 
                                                & ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4) 
                                                   + (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5))) 
                                               + (3U 
                                                  & ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6) 
                                                     + (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7))))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at BankedSRAM.scala:52 assert({PopCount(ren_vec) <= 1.U})\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (1U < (0xfU & ((7U & ((3U & 
                                              (((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid)) 
                                                & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid)) 
                                               + VL_SHIFTR_III(2,2,32, 
                                                               ((((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid)) 
                                                                  & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid)) 
                                                                 << 1U) 
                                                                | ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid)) 
                                                                   & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid))), 1U))) 
                                             + (3U 
                                                & (((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid)) 
                                                   + (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_4))))) 
                                      + (7U & ((3U 
                                                & ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_3) 
                                                   + (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_2))) 
                                               + (3U 
                                                  & (((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid)) 
                                                      & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid)) 
                                                     + (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_0))))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at BankedSRAM.scala:53 assert({PopCount(Cat(banks.map(_.io.r.req.fire))) <= 1.U})\n",0);
    }
    __VdlySet__tagArray__DOT__banks_0__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_0__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_0__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_0__DOT__array_3__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_1__DOT__array_3__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_2__DOT__array_3__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_3__DOT__array_3__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_4__DOT__array_3__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_5__DOT__array_3__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_6__DOT__array_3__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_0__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_1__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_2__v0 = 0U;
    __VdlySet__tagArray__DOT__banks_7__DOT__array_3__v0 = 0U;
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_0__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_0__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_0__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_0__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_0__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_0__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_0__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_0__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_0__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_0__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_0__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_0__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_1__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_1__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_1__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_1__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_1__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_1__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_1__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_1__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_1__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_1__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_1__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_1__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_2__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_2__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_2__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_2__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_2__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_2__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_2__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_2__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_2__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_2__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_2__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_2__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_3__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_3__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_3__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_3__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_3__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_3__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_3__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_3__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_3__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_3__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_3__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_3__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_4__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_4__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_4__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_4__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_4__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_4__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_4__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_4__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_4__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_4__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_4__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_4__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_5__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_5__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_5__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_5__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_5__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_5__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_5__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_5__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_5__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_5__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_5__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_5__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_6__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_6__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_6__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_6__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_6__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_6__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_6__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_6__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_6__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_6__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_6__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_6__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH))) {
        __VdlyVal__metaArray__DOT__banks_7__DOT__array_0__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_7__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_7__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 1U))) {
        __VdlyVal__metaArray__DOT__banks_7__DOT__array_1__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_7__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_7__DOT__array_1__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 2U))) {
        __VdlyVal__metaArray__DOT__banks_7__DOT__array_2__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_7__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_7__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid) 
         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_wayOH) 
            >> 3U))) {
        __VdlyVal__metaArray__DOT__banks_7__DOT__array_3__v0 
            = vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data;
        __VdlyDim0__metaArray__DOT__banks_7__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set) 
                       >> 3U));
        __VdlySet__metaArray__DOT__banks_7__DOT__array_3__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0 = 1U;
    }
    if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_MPORT_en) {
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState) {
            __VdlyVal__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 = 0U;
            __VdlyDim0__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 
                = (0xfU & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetSet));
        } else {
            __VdlyVal__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 
                = vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0;
            __VdlyDim0__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 
                = (0xfU & ((IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx) 
                           >> 3U));
        }
        __VdlySet__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_0__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_0__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_0__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_0__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_0__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_0__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_0__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_0__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_0__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_0__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_0__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_0__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_1__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_1__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_1__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_1__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_1__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_1__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_1__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_1__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_1__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_1__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_1__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_1__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_2__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_2__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_2__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_2__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_2__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_2__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_2__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_2__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_2__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_2__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_2__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_2__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_3__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_3__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_3__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_3__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_3__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_3__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_3__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_3__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_3__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_3__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_3__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_3__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_4__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_4__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_4__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_4__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_4__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_4__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_4__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_4__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_4__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_4__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_4__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_4__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_5__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_5__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_5__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_5__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_5__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_5__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_5__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_5__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_5__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_5__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_5__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_5__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_6__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_6__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_6__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_6__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_6__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_6__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_6__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_6__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_6__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_6__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_6__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_6__DOT__array_3__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid) 
         & ((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)))) {
        __VdlyVal__tagArray__DOT__banks_7__DOT__array_0__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_7__DOT__array_0__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_7__DOT__array_0__v0 = 1U;
    }
    if ((7U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 1U)))) {
        __VdlyVal__tagArray__DOT__banks_7__DOT__array_1__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_7__DOT__array_1__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_7__DOT__array_1__v0 = 1U;
    }
    if ((3U & ((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid) 
               & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
                  >> 2U)))) {
        __VdlyVal__tagArray__DOT__banks_7__DOT__array_2__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_7__DOT__array_2__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_7__DOT__array_2__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid) 
         & (((IData)(1U) << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_bits_way)) 
            >> 3U))) {
        __VdlyVal__tagArray__DOT__banks_7__DOT__array_3__v0 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
        __VdlyDim0__tagArray__DOT__banks_7__DOT__array_3__v0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set) 
                       >> 3U));
        __VdlySet__tagArray__DOT__banks_7__DOT__array_3__v0 = 1U;
    }
    vlSelfRef.__PVT__refillReqValid_s3 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                          && (IData)(vlSelfRef.__PVT__refillReqValid_s2));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__resetIdx = 0x7fU;
        vlSelfRef.__PVT__req_s3_tag = 0U;
        vlSelfRef.__PVT__req_s3_set = 0U;
        vlSelfRef.__PVT__req_s3_wayMask = 0U;
        vlSelfRef.__PVT__req_s3_replacerInfo_channel = 0U;
        vlSelfRef.__PVT__req_s3_replacerInfo_opcode = 0U;
        vlSelfRef.__PVT__req_s3_replacerInfo_reqSource = 0U;
        vlSelfRef.__PVT__req_s3_mshrId = 0U;
        vlSelfRef.__PVT__metaAll_s3_0_dirty = 0U;
        vlSelfRef.__PVT__metaAll_s3_0_state = 0U;
        vlSelfRef.__PVT__metaAll_s3_0_clients = 0U;
        vlSelfRef.__PVT__metaAll_s3_0_alias = 0U;
        vlSelfRef.__PVT__metaAll_s3_0_accessed = 0U;
        vlSelfRef.__PVT__metaAll_s3_1_dirty = 0U;
        vlSelfRef.__PVT__metaAll_s3_1_state = 0U;
        vlSelfRef.__PVT__metaAll_s3_1_clients = 0U;
        vlSelfRef.__PVT__metaAll_s3_1_alias = 0U;
        vlSelfRef.__PVT__metaAll_s3_1_accessed = 0U;
        vlSelfRef.__PVT__metaAll_s3_2_dirty = 0U;
        vlSelfRef.__PVT__metaAll_s3_2_state = 0U;
        vlSelfRef.__PVT__metaAll_s3_2_clients = 0U;
        vlSelfRef.__PVT__metaAll_s3_2_alias = 0U;
        vlSelfRef.__PVT__metaAll_s3_2_accessed = 0U;
        vlSelfRef.__PVT__metaAll_s3_3_dirty = 0U;
        vlSelfRef.__PVT__metaAll_s3_3_state = 0U;
        vlSelfRef.__PVT__metaAll_s3_3_clients = 0U;
        vlSelfRef.__PVT__metaAll_s3_3_alias = 0U;
        vlSelfRef.__PVT__metaAll_s3_3_accessed = 0U;
        vlSelfRef.__PVT__tagAll_s3_0 = 0U;
        vlSelfRef.__PVT__tagAll_s3_1 = 0U;
        vlSelfRef.__PVT__tagAll_s3_2 = 0U;
        vlSelfRef.__PVT__tagAll_s3_3 = 0U;
        vlSelfRef.__PVT__repl_state_s3 = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetSet = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetSet = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetSet = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetSet = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetSet = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetSet = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetSet = 0U;
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetSet = 0U;
        vlSelfRef.__PVT__req_s2_wayMask = 0U;
        vlSelfRef.__PVT__req_s2_replacerInfo_channel = 0U;
        vlSelfRef.__PVT__req_s2_set = 0U;
        vlSelfRef.__PVT__req_s2_mshrId = 0U;
        vlSelfRef.__PVT__req_s2_replacerInfo_reqSource = 0U;
        vlSelfRef.__PVT__req_s2_tag = 0U;
        vlSelfRef.__PVT__req_s2_replacerInfo_opcode = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__resetFinish)))) {
            vlSelfRef.__PVT__resetIdx = vlSelfRef.__PVT___resetIdx_T_1;
        }
        if (vlSelfRef.__PVT__reqValid_s2) {
            vlSelfRef.__PVT__req_s3_tag = vlSelfRef.__PVT__req_s2_tag;
            vlSelfRef.__PVT__req_s3_set = vlSelfRef.__PVT__req_s2_set;
            vlSelfRef.__PVT__req_s3_wayMask = vlSelfRef.__PVT__req_s2_wayMask;
            vlSelfRef.__PVT__req_s3_replacerInfo_channel 
                = vlSelfRef.__PVT__req_s2_replacerInfo_channel;
            vlSelfRef.__PVT__req_s3_replacerInfo_opcode 
                = vlSelfRef.__PVT__req_s2_replacerInfo_opcode;
            vlSelfRef.__PVT__req_s3_replacerInfo_reqSource 
                = vlSelfRef.__PVT__req_s2_replacerInfo_reqSource;
            vlSelfRef.__PVT__req_s3_mshrId = vlSelfRef.__PVT__req_s2_mshrId;
            vlSelfRef.__PVT__metaAll_s3_0_dirty = (
                                                   ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0
                                                     [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                     >> 6U) 
                                                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                                                   | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0
                                                        [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                        >> 6U) 
                                                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                                                      | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 6U) 
                                                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                                                         | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 6U) 
                                                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                                                            | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 6U) 
                                                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                                                               | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 6U) 
                                                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                                                  | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0
                                                                       [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                       >> 6U) 
                                                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                                                     | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0
                                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                         >> 6U) 
                                                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_0_state = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 4U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 4U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 4U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 4U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 4U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 4U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_0_clients = 
                (((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0
                   [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                   >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                 | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0
                      [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                      >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                    | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0
                         [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                         >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                       | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0
                            [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                            >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                          | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0
                               [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                               >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                             | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0
                                  [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                  >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0
                                     [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                     >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0
                                       [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_0_alias = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 1U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 1U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 1U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 1U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 1U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 1U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_0_accessed 
                = ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0
                    [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0
                       [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                      | ((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0
                          [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                         | ((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0
                             [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                            | ((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0
                                [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                               | ((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0
                                   [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                  | ((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0
                                      [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                     | (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0
                                        [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_1_dirty = (
                                                   ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_1
                                                     [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                     >> 6U) 
                                                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                                                   | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_1
                                                        [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                        >> 6U) 
                                                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                                                      | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_1
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 6U) 
                                                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                                                         | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_1
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 6U) 
                                                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                                                            | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_1
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 6U) 
                                                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                                                               | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_1
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 6U) 
                                                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                                                  | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_1
                                                                       [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                       >> 6U) 
                                                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                                                     | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_1
                                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                         >> 6U) 
                                                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_1_state = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_1
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 4U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_1
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 4U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_1
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 4U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_1
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_1
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_1
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 4U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_1
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 4U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_1
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 4U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_1_clients = 
                (((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_1
                   [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                   >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                 | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_1
                      [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                      >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                    | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_1
                         [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                         >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                       | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_1
                            [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                            >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                          | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_1
                               [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                               >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                             | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_1
                                  [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                  >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_1
                                     [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                     >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_1
                                       [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_1_alias = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_1
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 1U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_1
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 1U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_1
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 1U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_1
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_1
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_1
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 1U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_1
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 1U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_1
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 1U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_1_accessed 
                = ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_1
                    [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_1
                       [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                      | ((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_1
                          [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                         | ((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_1
                             [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                            | ((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_1
                                [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                               | ((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_1
                                   [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                  | ((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_1
                                      [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                     | (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_1
                                        [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_2_dirty = (
                                                   ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_2
                                                     [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                     >> 6U) 
                                                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                                                   | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_2
                                                        [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                        >> 6U) 
                                                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                                                      | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_2
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 6U) 
                                                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                                                         | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_2
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 6U) 
                                                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                                                            | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_2
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 6U) 
                                                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                                                               | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_2
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 6U) 
                                                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                                                  | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_2
                                                                       [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                       >> 6U) 
                                                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                                                     | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_2
                                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                         >> 6U) 
                                                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_2_state = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_2
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 4U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_2
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 4U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_2
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 4U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_2
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_2
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_2
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 4U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_2
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 4U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_2
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 4U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_2_clients = 
                (((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_2
                   [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                   >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                 | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_2
                      [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                      >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                    | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_2
                         [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                         >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                       | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_2
                            [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                            >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                          | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_2
                               [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                               >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                             | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_2
                                  [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                  >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_2
                                     [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                     >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_2
                                       [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_2_alias = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_2
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 1U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_2
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 1U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_2
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 1U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_2
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_2
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_2
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 1U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_2
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 1U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_2
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 1U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_2_accessed 
                = ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_2
                    [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_2
                       [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                      | ((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_2
                          [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                         | ((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_2
                             [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                            | ((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_2
                                [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                               | ((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_2
                                   [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                  | ((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_2
                                      [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                     | (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_2
                                        [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_3_dirty = (
                                                   ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_3
                                                     [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                     >> 6U) 
                                                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                                                   | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_3
                                                        [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                        >> 6U) 
                                                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                                                      | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_3
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 6U) 
                                                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                                                         | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_3
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 6U) 
                                                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                                                            | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_3
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 6U) 
                                                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                                                               | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_3
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 6U) 
                                                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                                                  | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_3
                                                                       [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                       >> 6U) 
                                                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                                                     | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_3
                                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                         >> 6U) 
                                                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_3_state = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_3
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 4U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_3
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 4U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_3
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 4U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_3
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_3
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 4U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_3
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 4U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_3
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 4U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_3
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 4U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_3_clients = 
                (((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_3
                   [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                   >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                 | (((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_3
                      [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                      >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                    | (((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_3
                         [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                         >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                       | (((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_3
                            [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                            >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                          | (((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_3
                               [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                               >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                             | (((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_3
                                  [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                  >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                | (((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_3
                                     [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                     >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_3
                                       [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                       >> 3U) & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__metaAll_s3_3_alias = (3U 
                                                   & ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)
                                                         ? 
                                                        (vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_3
                                                         [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                         >> 1U)
                                                         : 0U) 
                                                       | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)
                                                           ? 
                                                          (vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_3
                                                           [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                           >> 1U)
                                                           : 0U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)
                                                            ? 
                                                           (vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_3
                                                            [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                            >> 1U)
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_3
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U)) 
                                                         | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)
                                                              ? 
                                                             (vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_3
                                                              [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                              >> 1U)
                                                              : 0U) 
                                                            | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)
                                                                 ? 
                                                                (vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_3
                                                                 [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                 >> 1U)
                                                                 : 0U) 
                                                               | (((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)
                                                                    ? 
                                                                   (vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_3
                                                                    [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                    >> 1U)
                                                                    : 0U) 
                                                                  | ((IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)
                                                                      ? 
                                                                     (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_3
                                                                      [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                                                      >> 1U)
                                                                      : 0U)))))));
            vlSelfRef.__PVT__metaAll_s3_3_accessed 
                = ((vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_3
                    [vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0] 
                    & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0)) 
                   | ((vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_3
                       [vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0] 
                       & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1)) 
                      | ((vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_3
                          [vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0] 
                          & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2)) 
                         | ((vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_3
                             [vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0] 
                             & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3)) 
                            | ((vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_3
                                [vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0] 
                                & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4)) 
                               | ((vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_3
                                   [vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0] 
                                   & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5)) 
                                  | ((vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_3
                                      [vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0] 
                                      & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6)) 
                                     | (vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_3
                                        [vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0] 
                                        & (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7)))))))));
            vlSelfRef.__PVT__tagAll_s3_0 = ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F0)
                                               ? vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_0
                                              [vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                               : 0U) 
                                             | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F1)
                                                 ? 
                                                vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_0
                                                [vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                 : 0U)) 
                                            | ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F2)
                                                  ? 
                                                 vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_0
                                                 [vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0]
                                                  : 0U) 
                                                | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F3)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_0
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U)) 
                                               | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F4)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_0
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U) 
                                                  | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F5)
                                                       ? 
                                                      vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_0
                                                      [vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U) 
                                                     | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F6)
                                                          ? 
                                                         vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_0
                                                         [vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U) 
                                                        | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F7)
                                                            ? 
                                                           vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_0
                                                           [vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U))))));
            vlSelfRef.__PVT__tagAll_s3_1 = ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F0)
                                               ? vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_1
                                              [vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                               : 0U) 
                                             | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F1)
                                                 ? 
                                                vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_1
                                                [vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                 : 0U)) 
                                            | ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F2)
                                                  ? 
                                                 vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_1
                                                 [vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0]
                                                  : 0U) 
                                                | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F3)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_1
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U)) 
                                               | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F4)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_1
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U) 
                                                  | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F5)
                                                       ? 
                                                      vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_1
                                                      [vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U) 
                                                     | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F6)
                                                          ? 
                                                         vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_1
                                                         [vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U) 
                                                        | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F7)
                                                            ? 
                                                           vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_1
                                                           [vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U))))));
            vlSelfRef.__PVT__tagAll_s3_2 = ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F0)
                                               ? vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_2
                                              [vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                               : 0U) 
                                             | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F1)
                                                 ? 
                                                vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_2
                                                [vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                 : 0U)) 
                                            | ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F2)
                                                  ? 
                                                 vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_2
                                                 [vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0]
                                                  : 0U) 
                                                | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F3)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_2
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U)) 
                                               | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F4)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_2
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U) 
                                                  | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F5)
                                                       ? 
                                                      vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_2
                                                      [vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U) 
                                                     | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F6)
                                                          ? 
                                                         vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_2
                                                         [vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U) 
                                                        | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F7)
                                                            ? 
                                                           vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_2
                                                           [vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U))))));
            vlSelfRef.__PVT__tagAll_s3_3 = ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F0)
                                               ? vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_3
                                              [vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                               : 0U) 
                                             | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F1)
                                                 ? 
                                                vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_3
                                                [vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                 : 0U)) 
                                            | ((((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F2)
                                                  ? 
                                                 vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_3
                                                 [vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0]
                                                  : 0U) 
                                                | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F3)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_3
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U)) 
                                               | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F4)
                                                    ? 
                                                   vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_3
                                                   [vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U) 
                                                  | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F5)
                                                       ? 
                                                      vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_3
                                                      [vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U) 
                                                     | (((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F6)
                                                          ? 
                                                         vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_3
                                                         [vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U) 
                                                        | ((IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F7)
                                                            ? 
                                                           vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_3
                                                           [vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U))))));
            vlSelfRef.__PVT__repl_state_s3 = ((((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F0)
                                                 ? 
                                                vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0
                                                [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                 : 0U) 
                                               | ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F1)
                                                   ? 
                                                  vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0
                                                  [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                   : 0U)) 
                                              | ((((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F2)
                                                    ? 
                                                   vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0
                                                   [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0]
                                                    : 0U) 
                                                  | ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F3)
                                                      ? 
                                                     vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0
                                                     [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0]
                                                      : 0U)) 
                                                 | (((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F4)
                                                      ? 
                                                     vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0
                                                     [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0]
                                                      : 0U) 
                                                    | (((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F5)
                                                         ? 
                                                        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0
                                                        [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0]
                                                         : 0U) 
                                                       | (((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F6)
                                                            ? 
                                                           vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0
                                                           [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U) 
                                                          | ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F7)
                                                              ? 
                                                             vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0
                                                             [vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0]
                                                              : 0U))))));
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState) {
            vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetSet 
                = vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT___wrap_value_T_1;
        }
        if (vlSelfRef.__PVT__tagArray_io_r_req_valid) {
            vlSelfRef.__PVT__req_s2_wayMask = 0xfU;
            vlSelfRef.__PVT__req_s2_replacerInfo_channel 
                = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_replacerInfo_channel;
            vlSelfRef.__PVT__req_s2_set = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set;
            if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_valid) {
                vlSelfRef.__PVT__req_s2_mshrId = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_bits_mshrId;
                vlSelfRef.__PVT__req_s2_replacerInfo_reqSource 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_bits_reqSource;
                vlSelfRef.__PVT__req_s2_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_bits_tag;
                vlSelfRef.__PVT__req_s2_replacerInfo_opcode 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_bits_opcode;
            } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_1) {
                vlSelfRef.__PVT__req_s2_mshrId = 0U;
                vlSelfRef.__PVT__req_s2_replacerInfo_reqSource = 0U;
                vlSelfRef.__PVT__req_s2_tag = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_task_bits_tag;
                vlSelfRef.__PVT__req_s2_replacerInfo_opcode 
                    = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_task_bits_opcode;
            } else {
                vlSelfRef.__PVT__req_s2_mshrId = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_mshrId;
                vlSelfRef.__PVT__req_s2_replacerInfo_reqSource 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_reqSource;
                vlSelfRef.__PVT__req_s2_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_tag;
                vlSelfRef.__PVT__req_s2_replacerInfo_opcode 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_opcode;
            }
        }
    }
    vlSelfRef.__PVT__reqValid_s3 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelfRef.__PVT__reqValid_s2));
    if (__VdlySet__metaArray__DOT__banks_0__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_0__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_0__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_1__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_1__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_1__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_2__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_2__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_2__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_3__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_3__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_3__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_4__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_4__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_4__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_5__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_5__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_5__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_6__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_6__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_6__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_7__DOT__array_0__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0[__VdlyDim0__metaArray__DOT__banks_7__DOT__array_0__v0] 
            = __VdlyVal__metaArray__DOT__banks_7__DOT__array_0__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_0__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_0__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_0__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_1__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_1__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_1__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_2__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_2__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_2__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_3__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_3__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_3__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_4__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_4__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_4__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_5__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_5__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_5__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_6__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_6__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_6__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_7__DOT__array_1__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_1[__VdlyDim0__metaArray__DOT__banks_7__DOT__array_1__v0] 
            = __VdlyVal__metaArray__DOT__banks_7__DOT__array_1__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_0__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_0__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_0__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_1__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_1__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_1__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_2__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_2__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_2__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_3__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_3__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_3__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_4__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_4__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_4__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_5__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_5__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_5__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_6__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_6__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_6__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_7__DOT__array_2__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_2[__VdlyDim0__metaArray__DOT__banks_7__DOT__array_2__v0] 
            = __VdlyVal__metaArray__DOT__banks_7__DOT__array_2__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_0__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_0__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_0__DOT__array_3__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_1__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_1__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_1__DOT__array_3__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_2__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_2__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_2__DOT__array_3__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_3__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_3__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_3__DOT__array_3__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_4__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_4__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_4__DOT__array_3__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_5__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_5__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_5__DOT__array_3__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_6__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_6__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_6__DOT__array_3__v0;
    }
    if (__VdlySet__metaArray__DOT__banks_7__DOT__array_3__v0) {
        vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_3[__VdlyDim0__metaArray__DOT__banks_7__DOT__array_3__v0] 
            = __VdlyVal__metaArray__DOT__banks_7__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_0__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_0__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_0__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_1__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_1__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_1__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_2__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_2__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_2__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_3__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_3__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_3__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_4__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_4__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_4__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_5__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_5__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_5__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_6__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_6__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_6__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_7__DOT__array_0__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_0[__VdlyDim0__tagArray__DOT__banks_7__DOT__array_0__v0] 
            = __VdlyVal__tagArray__DOT__banks_7__DOT__array_0__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_0__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_0__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_0__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_1__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_1__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_1__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_2__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_2__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_2__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_3__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_3__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_3__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_4__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_4__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_4__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_5__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_5__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_5__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_6__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_6__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_6__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_7__DOT__array_1__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_1[__VdlyDim0__tagArray__DOT__banks_7__DOT__array_1__v0] 
            = __VdlyVal__tagArray__DOT__banks_7__DOT__array_1__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_0__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_0__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_0__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_1__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_1__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_1__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_2__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_2__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_2__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_3__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_3__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_3__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_4__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_4__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_4__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_5__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_5__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_5__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_6__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_6__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_6__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_7__DOT__array_2__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_2[__VdlyDim0__tagArray__DOT__banks_7__DOT__array_2__v0] 
            = __VdlyVal__tagArray__DOT__banks_7__DOT__array_2__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_0__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_0__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_0__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_1__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_1__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_1__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_2__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_2__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_2__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_3__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_3__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_3__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_4__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_4__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_4__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_5__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_5__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_5__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_6__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_6__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_6__DOT__array_3__v0;
    }
    if (__VdlySet__tagArray__DOT__banks_7__DOT__array_3__v0) {
        vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_3[__VdlyDim0__tagArray__DOT__banks_7__DOT__array_3__v0] 
            = __VdlyVal__tagArray__DOT__banks_7__DOT__array_3__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_0__DOT__array_0__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_1__DOT__array_0__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_2__DOT__array_0__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_3__DOT__array_0__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_4__DOT__array_0__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_5__DOT__array_0__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_6__DOT__array_0__v0;
    }
    if (__VdlySet__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0[__VdlyDim0__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0] 
            = __VdlyVal__replacer_sram_opt__DOT__banks_7__DOT__array_0__v0;
    }
    vlSelfRef.__PVT__refillReqValid_s2 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                          && ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
                                              & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_refill)));
    vlSelfRef.__PVT___resetIdx_T_1 = (0x7fU & ((IData)(vlSelfRef.__PVT__resetIdx) 
                                               - (IData)(1U)));
    vlSelfRef.__PVT__resetFinish = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelfRef.__PVT___GEN_89));
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_MPORT_en)))) {
        vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid)))) {
        vlSelfRef.__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    if (((IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid) 
         & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid)))) {
        vlSelfRef.__PVT__tagArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0 
            = (0xfU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set) 
                       >> 3U));
    }
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_0));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_2));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F3 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_3));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F4 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_4));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_0));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_2));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F3 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_3));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F4 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_4));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F0 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_0));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F3 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_3));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F4 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_4));
    vlSelfRef.__PVT__reqValid_s2 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_r_req_ready) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F5 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_r_req_ready) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F6 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_r_req_ready) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec___05F7 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_r_req_ready) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid)));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid)));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F5 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid)));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F6 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid)));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec___05F7 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid)));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid)));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F5 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid)));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F6 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid)));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec___05F7 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid)) 
            & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid)));
    __PVT__replaceWay = ((2U & ((IData)(vlSelfRef.__PVT__repl_state_s3) 
                                >> 1U)) | (1U & ((4U 
                                                  & (IData)(vlSelfRef.__PVT__repl_state_s3))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__repl_state_s3) 
                                                  >> 1U)
                                                  : (IData)(vlSelfRef.__PVT__repl_state_s3))));
    __PVT__hitVec_1 = (((IData)(vlSelfRef.__PVT__req_s3_tag) 
                        == (IData)(vlSelfRef.__PVT__tagAll_s3_1)) 
                       & (0U != (IData)(vlSelfRef.__PVT__metaAll_s3_1_state)));
    __PVT__hitVec_2 = (((IData)(vlSelfRef.__PVT__req_s3_tag) 
                        == (IData)(vlSelfRef.__PVT__tagAll_s3_2)) 
                       & (0U != (IData)(vlSelfRef.__PVT__metaAll_s3_2_state)));
    __PVT__hitVec_3 = (((IData)(vlSelfRef.__PVT__req_s3_tag) 
                        == (IData)(vlSelfRef.__PVT__tagAll_s3_3)) 
                       & (0U != (IData)(vlSelfRef.__PVT__metaAll_s3_3_state)));
    __PVT__chosenWay = (((0U == (IData)(vlSelfRef.__PVT__metaAll_s3_0_state)) 
                         | ((0U == (IData)(vlSelfRef.__PVT__metaAll_s3_1_state)) 
                            | ((0U == (IData)(vlSelfRef.__PVT__metaAll_s3_2_state)) 
                               | (0U == (IData)(vlSelfRef.__PVT__metaAll_s3_3_state)))))
                         ? (((0U == (IData)(vlSelfRef.__PVT__metaAll_s3_0_state)) 
                             | (0U == (IData)(vlSelfRef.__PVT__metaAll_s3_1_state)))
                             ? ((0U == (IData)(vlSelfRef.__PVT__metaAll_s3_0_state))
                                 ? 0U : 1U) : ((0U 
                                                == (IData)(vlSelfRef.__PVT__metaAll_s3_2_state))
                                                ? 2U
                                                : 3U))
                         : (IData)(__PVT__replaceWay));
    __PVT__hitWay_hi_1 = (((IData)(__PVT__hitVec_3) 
                           << 1U) | (IData)(__PVT__hitVec_2));
    vlSelfRef.io_resp_hit = ((((IData)(vlSelfRef.__PVT__req_s3_tag) 
                               == (IData)(vlSelfRef.__PVT__tagAll_s3_0)) 
                              & (0U != (IData)(vlSelfRef.__PVT__metaAll_s3_0_state))) 
                             | ((IData)(__PVT__hitVec_1) 
                                | ((IData)(__PVT__hitVec_2) 
                                   | (IData)(__PVT__hitVec_3))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT___GEN_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT___GEN_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT___GEN_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT___GEN_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT___GEN_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT___GEN_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT___GEN_2));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState 
        = ((IData)(vlSymsp->TOP.reset) | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT___GEN_2));
    vlSelfRef.__PVT___GEN_89 = ((0U == (IData)(vlSelfRef.__PVT__resetIdx)) 
                                | (IData)(vlSelfRef.__PVT__resetFinish));
    vlSelfRef.io_replResp_bits_way = ((1U & ((IData)(vlSelfRef.__PVT__req_s3_wayMask) 
                                             >> (IData)(__PVT__chosenWay)))
                                       ? (IData)(__PVT__chosenWay)
                                       : ((1U & (IData)(vlSelfRef.__PVT__req_s3_wayMask))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__req_s3_wayMask))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.__PVT__req_s3_wayMask))
                                                     ? 2U
                                                     : 3U))));
    if ((3U == (IData)(vlSelfRef.io_replResp_bits_way))) {
        vlSelfRef.io_replResp_bits_tag = vlSelfRef.__PVT__tagAll_s3_3;
        vlSelfRef.io_replResp_bits_meta_alias = vlSelfRef.__PVT__metaAll_s3_3_alias;
        vlSelfRef.io_replResp_bits_meta_accessed = vlSelfRef.__PVT__metaAll_s3_3_accessed;
        vlSelfRef.io_replResp_bits_meta_dirty = vlSelfRef.__PVT__metaAll_s3_3_dirty;
        vlSelfRef.io_replResp_bits_meta_clients = vlSelfRef.__PVT__metaAll_s3_3_clients;
        vlSelfRef.io_replResp_bits_meta_state = vlSelfRef.__PVT__metaAll_s3_3_state;
    } else if ((2U == (IData)(vlSelfRef.io_replResp_bits_way))) {
        vlSelfRef.io_replResp_bits_tag = vlSelfRef.__PVT__tagAll_s3_2;
        vlSelfRef.io_replResp_bits_meta_alias = vlSelfRef.__PVT__metaAll_s3_2_alias;
        vlSelfRef.io_replResp_bits_meta_accessed = vlSelfRef.__PVT__metaAll_s3_2_accessed;
        vlSelfRef.io_replResp_bits_meta_dirty = vlSelfRef.__PVT__metaAll_s3_2_dirty;
        vlSelfRef.io_replResp_bits_meta_clients = vlSelfRef.__PVT__metaAll_s3_2_clients;
        vlSelfRef.io_replResp_bits_meta_state = vlSelfRef.__PVT__metaAll_s3_2_state;
    } else if ((1U == (IData)(vlSelfRef.io_replResp_bits_way))) {
        vlSelfRef.io_replResp_bits_tag = vlSelfRef.__PVT__tagAll_s3_1;
        vlSelfRef.io_replResp_bits_meta_alias = vlSelfRef.__PVT__metaAll_s3_1_alias;
        vlSelfRef.io_replResp_bits_meta_accessed = vlSelfRef.__PVT__metaAll_s3_1_accessed;
        vlSelfRef.io_replResp_bits_meta_dirty = vlSelfRef.__PVT__metaAll_s3_1_dirty;
        vlSelfRef.io_replResp_bits_meta_clients = vlSelfRef.__PVT__metaAll_s3_1_clients;
        vlSelfRef.io_replResp_bits_meta_state = vlSelfRef.__PVT__metaAll_s3_1_state;
    } else {
        vlSelfRef.io_replResp_bits_tag = vlSelfRef.__PVT__tagAll_s3_0;
        vlSelfRef.io_replResp_bits_meta_alias = vlSelfRef.__PVT__metaAll_s3_0_alias;
        vlSelfRef.io_replResp_bits_meta_accessed = vlSelfRef.__PVT__metaAll_s3_0_accessed;
        vlSelfRef.io_replResp_bits_meta_dirty = vlSelfRef.__PVT__metaAll_s3_0_dirty;
        vlSelfRef.io_replResp_bits_meta_clients = vlSelfRef.__PVT__metaAll_s3_0_clients;
        vlSelfRef.io_replResp_bits_meta_state = vlSelfRef.__PVT__metaAll_s3_0_state;
    }
    vlSelfRef.io_resp_way = ((IData)(vlSelfRef.io_resp_hit)
                              ? (((IData)((0U != (IData)(__PVT__hitWay_hi_1))) 
                                  << 1U) | (IData)(
                                                   (((IData)(__PVT__hitWay_hi_1) 
                                                     >> 1U) 
                                                    | (IData)(__PVT__hitVec_1))))
                              : (IData)(vlSelfRef.io_replResp_bits_way));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState));
    if ((3U == (IData)(vlSelfRef.io_resp_way))) {
        vlSelfRef.io_resp_tag = vlSelfRef.__PVT__tagAll_s3_3;
        vlSelfRef.io_resp_meta_accessed = vlSelfRef.__PVT__metaAll_s3_3_accessed;
        vlSelfRef.io_resp_meta_dirty = vlSelfRef.__PVT__metaAll_s3_3_dirty;
        vlSelfRef.io_resp_meta_alias = vlSelfRef.__PVT__metaAll_s3_3_alias;
        vlSelfRef.io_resp_meta_clients = vlSelfRef.__PVT__metaAll_s3_3_clients;
        vlSelfRef.io_resp_meta_state = vlSelfRef.__PVT__metaAll_s3_3_state;
    } else if ((2U == (IData)(vlSelfRef.io_resp_way))) {
        vlSelfRef.io_resp_tag = vlSelfRef.__PVT__tagAll_s3_2;
        vlSelfRef.io_resp_meta_accessed = vlSelfRef.__PVT__metaAll_s3_2_accessed;
        vlSelfRef.io_resp_meta_dirty = vlSelfRef.__PVT__metaAll_s3_2_dirty;
        vlSelfRef.io_resp_meta_alias = vlSelfRef.__PVT__metaAll_s3_2_alias;
        vlSelfRef.io_resp_meta_clients = vlSelfRef.__PVT__metaAll_s3_2_clients;
        vlSelfRef.io_resp_meta_state = vlSelfRef.__PVT__metaAll_s3_2_state;
    } else if ((1U == (IData)(vlSelfRef.io_resp_way))) {
        vlSelfRef.io_resp_tag = vlSelfRef.__PVT__tagAll_s3_1;
        vlSelfRef.io_resp_meta_accessed = vlSelfRef.__PVT__metaAll_s3_1_accessed;
        vlSelfRef.io_resp_meta_dirty = vlSelfRef.__PVT__metaAll_s3_1_dirty;
        vlSelfRef.io_resp_meta_alias = vlSelfRef.__PVT__metaAll_s3_1_alias;
        vlSelfRef.io_resp_meta_clients = vlSelfRef.__PVT__metaAll_s3_1_clients;
        vlSelfRef.io_resp_meta_state = vlSelfRef.__PVT__metaAll_s3_1_state;
    } else {
        vlSelfRef.io_resp_tag = vlSelfRef.__PVT__tagAll_s3_0;
        vlSelfRef.io_resp_meta_accessed = vlSelfRef.__PVT__metaAll_s3_0_accessed;
        vlSelfRef.io_resp_meta_dirty = vlSelfRef.__PVT__metaAll_s3_0_dirty;
        vlSelfRef.io_resp_meta_alias = vlSelfRef.__PVT__metaAll_s3_0_alias;
        vlSelfRef.io_resp_meta_clients = vlSelfRef.__PVT__metaAll_s3_0_clients;
        vlSelfRef.io_resp_meta_state = vlSelfRef.__PVT__metaAll_s3_0_state;
    }
    __PVT__touch_way_s3 = ((IData)(vlSelfRef.__PVT__refillReqValid_s3)
                            ? (IData)(__PVT__replaceWay)
                            : (IData)(vlSelfRef.io_resp_way));
    if (vlSelfRef.__PVT__resetFinish) {
        vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx 
            = vlSelfRef.__PVT__req_s3_set;
        vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0 
            = ((4U & ((~ ((IData)(__PVT__touch_way_s3) 
                          >> 1U)) << 2U)) | ((2U & 
                                              (((2U 
                                                 & (IData)(__PVT__touch_way_s3))
                                                 ? 
                                                (~ (IData)(__PVT__touch_way_s3))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__repl_state_s3) 
                                                 >> 1U)) 
                                               << 1U)) 
                                             | (1U 
                                                & ((2U 
                                                    & (IData)(__PVT__touch_way_s3))
                                                    ? (IData)(vlSelfRef.__PVT__repl_state_s3)
                                                    : 
                                                   (~ (IData)(__PVT__touch_way_s3))))));
    } else {
        vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx 
            = vlSelfRef.__PVT__resetIdx;
        vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0 = 0U;
    }
}

VL_INLINE_OPT void VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory__1(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data 
        = (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__resetFinish) 
              & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                  ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a) 
                     & (IData)(vlSelfRef.io_resp_meta_dirty))
                  : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                      ? ((IData)(vlSelfRef.io_resp_meta_dirty) 
                         | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__wen_c))
                      : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_dirty)))) 
             << 6U) | ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__resetFinish)
                          ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                              ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a)
                                  ? (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__req_needT_s3) 
                                      | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__sink_resp_s3_a_promoteT))
                                      ? 2U : (IData)(vlSelfRef.io_resp_meta_state))
                                  : ((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param))
                                      ? 0U : 1U)) : 
                             ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                               ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___wen_c_T_4)
                                   ? 3U : (IData)(vlSelfRef.io_resp_meta_state))
                               : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_state)))
                          : 0U) << 4U) | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__resetFinish) 
                                           & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                                               ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a) 
                                                  | ((2U 
                                                      != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                                     & (IData)(vlSelfRef.io_resp_meta_clients)))
                                               : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                                                   ? 
                                                  (~ 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                                    | ((2U 
                                                        == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                                       | (5U 
                                                          == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)))))
                                                   : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_clients)))) 
                                          << 3U))) 
           | ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__resetFinish)
                 ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                     ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a)
                         ? (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__req_get_s3) 
                             | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__req_prefetch_s3))
                             ? (IData)(vlSelfRef.io_resp_meta_alias)
                             : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_alias))
                         : ((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param))
                             ? 0U : (IData)(vlSelfRef.io_resp_meta_alias)))
                     : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                         ? (IData)(vlSelfRef.io_resp_meta_alias)
                         : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_alias)))
                 : 0U) << 1U) | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__resetFinish) 
                                 & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                                     ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a) 
                                        | ((2U != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                           & (IData)(vlSelfRef.io_resp_meta_accessed)))
                                     : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                                         ? (IData)(vlSelfRef.io_resp_meta_accessed)
                                         : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_accessed))))));
}

VL_INLINE_OPT void VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory__2(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__replacer_sram_opt_io_w_req_valid;
    __PVT__replacer_sram_opt_io_w_req_valid = 0;
    // Body
    vlSelfRef.io_replResp_bits_retry = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set) 
                                             == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_hit) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_status_bits_needsRepl)) 
                                               & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_way) 
                                                  == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                        | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set) 
                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_hit) 
                                                   | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_status_bits_needsRepl)) 
                                                  & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_way) 
                                                     == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                           | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set) 
                                                   == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_hit) 
                                                      | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_status_bits_needsRepl)) 
                                                     & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_way) 
                                                        == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                              | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set) 
                                                      == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_hit) 
                                                         | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_status_bits_needsRepl)) 
                                                        & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_way) 
                                                           == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set) 
                                                         == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_hit) 
                                                            | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_status_bits_needsRepl)) 
                                                           & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_way) 
                                                              == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                    | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set) 
                                                            == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_hit) 
                                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_status_bits_needsRepl)) 
                                                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_way) 
                                                                 == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                       | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set) 
                                                               == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_hit) 
                                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_status_bits_needsRepl)) 
                                                                 & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_way) 
                                                                    == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                          | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set) 
                                                                  == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                 & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_hit) 
                                                                     | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_status_bits_needsRepl)) 
                                                                    & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_way) 
                                                                       == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                             | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                                 & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set) 
                                                                     == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                    & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_hit) 
                                                                        | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_status_bits_needsRepl)) 
                                                                       & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_way) 
                                                                          == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                                    & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set) 
                                                                        == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_hit) 
                                                                           | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_status_bits_needsRepl)) 
                                                                          & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_way) 
                                                                             == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set) 
                                                                           == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_hit) 
                                                                              | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_status_bits_needsRepl)) 
                                                                             & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                      | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set) 
                                                                              == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                         | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                            | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                               | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                                | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))))))))))))))))));
    __PVT__replacer_sram_opt_io_w_req_valid = (1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__resetFinish)) 
                                                | (((IData)(vlSelfRef.__PVT__reqValid_s3) 
                                                    & ((IData)(vlSelfRef.io_resp_hit) 
                                                       & ((IData)(vlSelfRef.__PVT__req_s3_replacerInfo_channel) 
                                                          & ((7U 
                                                              == (IData)(vlSelfRef.__PVT__req_s3_replacerInfo_opcode)) 
                                                             | (6U 
                                                                == (IData)(vlSelfRef.__PVT__req_s3_replacerInfo_opcode)))))) 
                                                   | ((~ (IData)(vlSelfRef.io_replResp_bits_retry)) 
                                                      & (IData)(vlSelfRef.__PVT__refillReqValid_s3)))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (7U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (6U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (5U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (1U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (4U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (3U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (2U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (0U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_MPORT_en))));
}

VL_INLINE_OPT void VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory__3(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (7U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (6U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (5U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (1U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (4U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (3U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (2U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid) 
           & (0U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (7U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (6U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (5U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (1U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (4U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (3U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (2U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid) 
           & (0U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set))));
}

VL_INLINE_OPT void VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory__4(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_read_ready = (1U & ((((((0x80U & (
                                                   (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_7_io_w_req_valid)) 
                                                   << 7U)) 
                                         | (0x40U & 
                                            ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_6_io_w_req_valid)) 
                                             << 6U))) 
                                        | ((0x20U & 
                                            ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_5_io_w_req_valid)) 
                                             << 5U)) 
                                           | (0x10U 
                                              & ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid)) 
                                                 << 4U)))) 
                                       | (((8U & ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid)) 
                                                  << 3U)) 
                                           | (4U & 
                                              ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid)) 
                                               << 2U))) 
                                          | ((2U & 
                                              ((~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_1_io_w_req_valid)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid)))))) 
                                      >> (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))) 
                                     & ((((((0x80U 
                                             & ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_7_io_w_req_valid)) 
                                                << 7U)) 
                                            | (0x40U 
                                               & ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_6_io_w_req_valid)) 
                                                  << 6U))) 
                                           | ((0x20U 
                                               & ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_5_io_w_req_valid)) 
                                                  << 5U)) 
                                              | (0x10U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid)) 
                                                    << 4U)))) 
                                          | (((8U & 
                                               ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid)) 
                                                << 3U)) 
                                              | (4U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid)) 
                                                    << 2U))) 
                                             | ((2U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_1_io_w_req_valid)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid)))))) 
                                         >> (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))) 
                                        & (((((((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_w_req_valid)) 
                                                & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_r_req_ready)) 
                                               << 7U) 
                                              | (((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_w_req_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_r_req_ready)) 
                                                 << 6U)) 
                                             | ((((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_w_req_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_r_req_ready)) 
                                                 << 5U) 
                                                | (((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_w_req_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_r_req_ready)) 
                                                   << 4U))) 
                                            | (((((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_w_req_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_r_req_ready)) 
                                                 << 3U) 
                                                | (((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_w_req_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_r_req_ready)) 
                                                   << 2U)) 
                                               | ((((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_w_req_valid)) 
                                                    & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_r_req_ready)) 
                                                   << 1U) 
                                                  | ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_w_req_valid)) 
                                                     & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_r_req_ready))))) 
                                           >> (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))))));
}

VL_INLINE_OPT void VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory__5(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tagArray_io_r_req_valid = ((IData)(vlSelfRef.io_read_ready) 
                                                & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_valid));
    vlSelfRef.__PVT__tagArray__DOT__banks_1_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (1U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_5_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (5U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_6_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (6U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_7_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (7U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_0_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (0U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_2_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (2U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_3_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (3U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__banks_4_io_r_req_valid 
        = ((IData)(vlSelfRef.__PVT__tagArray_io_r_req_valid) 
           & (4U == (7U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set))));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_0 = (
                                                   (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_w_req_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_r_req_valid));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_0 = 
        ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_0_io_w_req_valid)) 
         & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_r_req_valid));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_0 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_r_req_ready) 
           & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_0_io_r_req_valid));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_2 = (
                                                   (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_w_req_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_r_req_valid));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_2 = 
        ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_2_io_w_req_valid)) 
         & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_r_req_valid));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_2 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_r_req_ready) 
           & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_2_io_r_req_valid));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_3 = (
                                                   (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_w_req_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_r_req_valid));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_3 = 
        ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_3_io_w_req_valid)) 
         & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_r_req_valid));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_3 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_r_req_ready) 
           & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_3_io_r_req_valid));
    vlSelfRef.__PVT__tagArray__DOT__ren_vec_0_4 = (
                                                   (~ (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_w_req_valid)) 
                                                   & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_r_req_valid));
    vlSelfRef.__PVT__metaArray__DOT__ren_vec_0_4 = 
        ((~ (IData)(vlSelfRef.__PVT__metaArray__DOT__banks_4_io_w_req_valid)) 
         & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_r_req_valid));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__ren_vec_0_4 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_r_req_ready) 
           & (IData)(vlSelfRef.__PVT__tagArray__DOT__banks_4_io_r_req_valid));
}
