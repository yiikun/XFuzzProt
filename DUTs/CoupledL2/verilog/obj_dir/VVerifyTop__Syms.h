// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVERIFYTOP__SYMS_H_
#define VERILATED_VVERIFYTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VVerifyTop.h"

// INCLUDE MODULE CLASSES
#include "VVerifyTop___024root.h"
#include "VVerifyTop_RequestArb.h"
#include "VVerifyTop_RequestBuffer.h"
#include "VVerifyTop_MainPipe.h"
#include "VVerifyTop_MSHRCtl.h"
#include "VVerifyTop_SinkC.h"
#include "VVerifyTop_GrantBuffer.h"
#include "VVerifyTop_RequestArb_2.h"
#include "VVerifyTop_RequestBuffer_2.h"
#include "VVerifyTop_MainPipe_2.h"
#include "VVerifyTop_SinkC_2.h"
#include "VVerifyTop_GrantBuffer_2.h"
#include "VVerifyTop_MSHR_16.h"
#include "VVerifyTop_MSHR.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VVerifyTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VVerifyTop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VVerifyTop___024root           TOP;
    VVerifyTop_RequestBuffer       TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf;
    VVerifyTop_GrantBuffer         TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf;
    VVerifyTop_MainPipe            TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe;
    VVerifyTop_MSHRCtl             TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl;
    VVerifyTop_MSHR                TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0;
    VVerifyTop_MSHR                TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1;
    VVerifyTop_MSHR                TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2;
    VVerifyTop_MSHR                TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3;
    VVerifyTop_RequestArb          TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb;
    VVerifyTop_SinkC               TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC;
    VVerifyTop_RequestBuffer       TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf;
    VVerifyTop_GrantBuffer         TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf;
    VVerifyTop_MainPipe            TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe;
    VVerifyTop_MSHRCtl             TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl;
    VVerifyTop_MSHR                TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0;
    VVerifyTop_MSHR                TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1;
    VVerifyTop_MSHR                TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2;
    VVerifyTop_MSHR                TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3;
    VVerifyTop_RequestArb          TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb;
    VVerifyTop_SinkC               TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC;
    VVerifyTop_RequestBuffer_2     TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf;
    VVerifyTop_GrantBuffer_2       TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__grantBuf;
    VVerifyTop_MainPipe_2          TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe;
    VVerifyTop_RequestArb_2        TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb;
    VVerifyTop_SinkC_2             TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC;
    VVerifyTop_RequestBuffer_2     TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf;
    VVerifyTop_GrantBuffer_2       TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__grantBuf;
    VVerifyTop_MainPipe_2          TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe;
    VVerifyTop_RequestArb_2        TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb;
    VVerifyTop_SinkC_2             TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC;
    VVerifyTop_MSHR_16             TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0;
    VVerifyTop_MSHR_16             TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1;
    VVerifyTop_MSHR_16             TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2;
    VVerifyTop_MSHR_16             TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3;
    VVerifyTop_MSHR_16             TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_4;
    VVerifyTop_MSHR_16             TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5;
    VVerifyTop_MSHR_16             TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6;
    VVerifyTop_MSHR_16             TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7;

    // CONSTRUCTORS
    VVerifyTop__Syms(VerilatedContext* contextp, const char* namep, VVerifyTop* modelp);
    ~VVerifyTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
