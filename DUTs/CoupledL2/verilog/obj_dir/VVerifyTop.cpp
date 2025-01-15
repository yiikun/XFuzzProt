// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VVerifyTop__pch.h"

//============================================================
// Constructors

VVerifyTop::VVerifyTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VVerifyTop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_topInputRandomAddrs_0{vlSymsp->TOP.io_topInputRandomAddrs_0}
    , io_topInputRandomAddrs_1{vlSymsp->TOP.io_topInputRandomAddrs_1}
    , io_topInputNeedT_0{vlSymsp->TOP.io_topInputNeedT_0}
    , io_topInputNeedT_1{vlSymsp->TOP.io_topInputNeedT_1}
    , __PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb}
    , __PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf}
    , __PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe}
    , __PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl}
    , __PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC}
    , __PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf}
    , __PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb}
    , __PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf}
    , __PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe}
    , __PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl}
    , __PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC}
    , __PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf}
    , __PVT__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb}
    , __PVT__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf}
    , __PVT__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe}
    , __PVT__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC}
    , __PVT__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__grantBuf{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__grantBuf}
    , __PVT__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb}
    , __PVT__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf}
    , __PVT__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe}
    , __PVT__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC}
    , __PVT__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__grantBuf{vlSymsp->TOP.__PVT__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__grantBuf}
    , __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0{vlSymsp->TOP.__PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0}
    , __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1{vlSymsp->TOP.__PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1}
    , __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2{vlSymsp->TOP.__PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2}
    , __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3{vlSymsp->TOP.__PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3}
    , __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_4{vlSymsp->TOP.__PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_4}
    , __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5{vlSymsp->TOP.__PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5}
    , __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6{vlSymsp->TOP.__PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6}
    , __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7{vlSymsp->TOP.__PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VVerifyTop::VVerifyTop(const char* _vcname__)
    : VVerifyTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VVerifyTop::~VVerifyTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VVerifyTop___024root___eval_debug_assertions(VVerifyTop___024root* vlSelf);
#endif  // VL_DEBUG
void VVerifyTop___024root___eval_static(VVerifyTop___024root* vlSelf);
void VVerifyTop___024root___eval_initial(VVerifyTop___024root* vlSelf);
void VVerifyTop___024root___eval_settle(VVerifyTop___024root* vlSelf);
void VVerifyTop___024root___eval(VVerifyTop___024root* vlSelf);

void VVerifyTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VVerifyTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VVerifyTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VVerifyTop___024root___eval_static(&(vlSymsp->TOP));
        VVerifyTop___024root___eval_initial(&(vlSymsp->TOP));
        VVerifyTop___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VVerifyTop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VVerifyTop::eventsPending() { return false; }

uint64_t VVerifyTop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VVerifyTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VVerifyTop___024root___eval_final(VVerifyTop___024root* vlSelf);

VL_ATTR_COLD void VVerifyTop::final() {
    VVerifyTop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VVerifyTop::hierName() const { return vlSymsp->name(); }
const char* VVerifyTop::modelName() const { return "VVerifyTop"; }
unsigned VVerifyTop::threads() const { return 1; }
void VVerifyTop::prepareClone() const { contextp()->prepareClone(); }
void VVerifyTop::atClone() const {
    contextp()->threadPoolpOnClone();
}
