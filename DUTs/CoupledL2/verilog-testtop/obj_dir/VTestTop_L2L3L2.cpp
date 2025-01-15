// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTestTop_L2L3L2__pch.h"

//============================================================
// Constructors

VTestTop_L2L3L2::VTestTop_L2L3L2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTestTop_L2L3L2__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , master_port_0_0_a_ready{vlSymsp->TOP.master_port_0_0_a_ready}
    , master_port_0_0_a_valid{vlSymsp->TOP.master_port_0_0_a_valid}
    , master_port_0_0_a_bits_opcode{vlSymsp->TOP.master_port_0_0_a_bits_opcode}
    , master_port_0_0_a_bits_param{vlSymsp->TOP.master_port_0_0_a_bits_param}
    , master_port_0_0_a_bits_size{vlSymsp->TOP.master_port_0_0_a_bits_size}
    , master_port_0_0_a_bits_source{vlSymsp->TOP.master_port_0_0_a_bits_source}
    , master_port_0_0_a_bits_user_alias{vlSymsp->TOP.master_port_0_0_a_bits_user_alias}
    , master_port_0_0_a_bits_mask{vlSymsp->TOP.master_port_0_0_a_bits_mask}
    , master_port_0_0_a_bits_data{vlSymsp->TOP.master_port_0_0_a_bits_data}
    , master_port_0_0_a_bits_corrupt{vlSymsp->TOP.master_port_0_0_a_bits_corrupt}
    , master_port_0_0_b_ready{vlSymsp->TOP.master_port_0_0_b_ready}
    , master_port_0_0_b_valid{vlSymsp->TOP.master_port_0_0_b_valid}
    , master_port_0_0_b_bits_opcode{vlSymsp->TOP.master_port_0_0_b_bits_opcode}
    , master_port_0_0_b_bits_param{vlSymsp->TOP.master_port_0_0_b_bits_param}
    , master_port_0_0_b_bits_size{vlSymsp->TOP.master_port_0_0_b_bits_size}
    , master_port_0_0_b_bits_source{vlSymsp->TOP.master_port_0_0_b_bits_source}
    , master_port_0_0_b_bits_mask{vlSymsp->TOP.master_port_0_0_b_bits_mask}
    , master_port_0_0_b_bits_data{vlSymsp->TOP.master_port_0_0_b_bits_data}
    , master_port_0_0_b_bits_corrupt{vlSymsp->TOP.master_port_0_0_b_bits_corrupt}
    , master_port_0_0_c_ready{vlSymsp->TOP.master_port_0_0_c_ready}
    , master_port_0_0_c_valid{vlSymsp->TOP.master_port_0_0_c_valid}
    , master_port_0_0_c_bits_opcode{vlSymsp->TOP.master_port_0_0_c_bits_opcode}
    , master_port_0_0_c_bits_param{vlSymsp->TOP.master_port_0_0_c_bits_param}
    , master_port_0_0_c_bits_size{vlSymsp->TOP.master_port_0_0_c_bits_size}
    , master_port_0_0_c_bits_source{vlSymsp->TOP.master_port_0_0_c_bits_source}
    , master_port_0_0_c_bits_user_alias{vlSymsp->TOP.master_port_0_0_c_bits_user_alias}
    , master_port_0_0_c_bits_data{vlSymsp->TOP.master_port_0_0_c_bits_data}
    , master_port_0_0_c_bits_corrupt{vlSymsp->TOP.master_port_0_0_c_bits_corrupt}
    , master_port_0_0_d_ready{vlSymsp->TOP.master_port_0_0_d_ready}
    , master_port_0_0_d_valid{vlSymsp->TOP.master_port_0_0_d_valid}
    , master_port_0_0_d_bits_opcode{vlSymsp->TOP.master_port_0_0_d_bits_opcode}
    , master_port_0_0_d_bits_param{vlSymsp->TOP.master_port_0_0_d_bits_param}
    , master_port_0_0_d_bits_size{vlSymsp->TOP.master_port_0_0_d_bits_size}
    , master_port_0_0_d_bits_source{vlSymsp->TOP.master_port_0_0_d_bits_source}
    , master_port_0_0_d_bits_sink{vlSymsp->TOP.master_port_0_0_d_bits_sink}
    , master_port_0_0_d_bits_denied{vlSymsp->TOP.master_port_0_0_d_bits_denied}
    , master_port_0_0_d_bits_data{vlSymsp->TOP.master_port_0_0_d_bits_data}
    , master_port_0_0_d_bits_corrupt{vlSymsp->TOP.master_port_0_0_d_bits_corrupt}
    , master_port_0_0_e_ready{vlSymsp->TOP.master_port_0_0_e_ready}
    , master_port_0_0_e_valid{vlSymsp->TOP.master_port_0_0_e_valid}
    , master_port_0_0_e_bits_sink{vlSymsp->TOP.master_port_0_0_e_bits_sink}
    , master_port_1_0_a_ready{vlSymsp->TOP.master_port_1_0_a_ready}
    , master_port_1_0_a_valid{vlSymsp->TOP.master_port_1_0_a_valid}
    , master_port_1_0_a_bits_opcode{vlSymsp->TOP.master_port_1_0_a_bits_opcode}
    , master_port_1_0_a_bits_param{vlSymsp->TOP.master_port_1_0_a_bits_param}
    , master_port_1_0_a_bits_size{vlSymsp->TOP.master_port_1_0_a_bits_size}
    , master_port_1_0_a_bits_source{vlSymsp->TOP.master_port_1_0_a_bits_source}
    , master_port_1_0_a_bits_user_alias{vlSymsp->TOP.master_port_1_0_a_bits_user_alias}
    , master_port_1_0_a_bits_mask{vlSymsp->TOP.master_port_1_0_a_bits_mask}
    , master_port_1_0_a_bits_data{vlSymsp->TOP.master_port_1_0_a_bits_data}
    , master_port_1_0_a_bits_corrupt{vlSymsp->TOP.master_port_1_0_a_bits_corrupt}
    , master_port_1_0_b_ready{vlSymsp->TOP.master_port_1_0_b_ready}
    , master_port_1_0_b_valid{vlSymsp->TOP.master_port_1_0_b_valid}
    , master_port_1_0_b_bits_opcode{vlSymsp->TOP.master_port_1_0_b_bits_opcode}
    , master_port_1_0_b_bits_param{vlSymsp->TOP.master_port_1_0_b_bits_param}
    , master_port_1_0_b_bits_size{vlSymsp->TOP.master_port_1_0_b_bits_size}
    , master_port_1_0_b_bits_source{vlSymsp->TOP.master_port_1_0_b_bits_source}
    , master_port_1_0_b_bits_mask{vlSymsp->TOP.master_port_1_0_b_bits_mask}
    , master_port_1_0_b_bits_data{vlSymsp->TOP.master_port_1_0_b_bits_data}
    , master_port_1_0_b_bits_corrupt{vlSymsp->TOP.master_port_1_0_b_bits_corrupt}
    , master_port_1_0_c_ready{vlSymsp->TOP.master_port_1_0_c_ready}
    , master_port_1_0_c_valid{vlSymsp->TOP.master_port_1_0_c_valid}
    , master_port_1_0_c_bits_opcode{vlSymsp->TOP.master_port_1_0_c_bits_opcode}
    , master_port_1_0_c_bits_param{vlSymsp->TOP.master_port_1_0_c_bits_param}
    , master_port_1_0_c_bits_size{vlSymsp->TOP.master_port_1_0_c_bits_size}
    , master_port_1_0_c_bits_source{vlSymsp->TOP.master_port_1_0_c_bits_source}
    , master_port_1_0_c_bits_user_alias{vlSymsp->TOP.master_port_1_0_c_bits_user_alias}
    , master_port_1_0_c_bits_data{vlSymsp->TOP.master_port_1_0_c_bits_data}
    , master_port_1_0_c_bits_corrupt{vlSymsp->TOP.master_port_1_0_c_bits_corrupt}
    , master_port_1_0_d_ready{vlSymsp->TOP.master_port_1_0_d_ready}
    , master_port_1_0_d_valid{vlSymsp->TOP.master_port_1_0_d_valid}
    , master_port_1_0_d_bits_opcode{vlSymsp->TOP.master_port_1_0_d_bits_opcode}
    , master_port_1_0_d_bits_param{vlSymsp->TOP.master_port_1_0_d_bits_param}
    , master_port_1_0_d_bits_size{vlSymsp->TOP.master_port_1_0_d_bits_size}
    , master_port_1_0_d_bits_source{vlSymsp->TOP.master_port_1_0_d_bits_source}
    , master_port_1_0_d_bits_sink{vlSymsp->TOP.master_port_1_0_d_bits_sink}
    , master_port_1_0_d_bits_denied{vlSymsp->TOP.master_port_1_0_d_bits_denied}
    , master_port_1_0_d_bits_data{vlSymsp->TOP.master_port_1_0_d_bits_data}
    , master_port_1_0_d_bits_corrupt{vlSymsp->TOP.master_port_1_0_d_bits_corrupt}
    , master_port_1_0_e_ready{vlSymsp->TOP.master_port_1_0_e_ready}
    , master_port_1_0_e_valid{vlSymsp->TOP.master_port_1_0_e_valid}
    , master_port_1_0_e_bits_sink{vlSymsp->TOP.master_port_1_0_e_bits_sink}
    , master_port_0_0_a_bits_address{vlSymsp->TOP.master_port_0_0_a_bits_address}
    , master_port_0_0_b_bits_address{vlSymsp->TOP.master_port_0_0_b_bits_address}
    , master_port_0_0_c_bits_address{vlSymsp->TOP.master_port_0_0_c_bits_address}
    , master_port_1_0_a_bits_address{vlSymsp->TOP.master_port_1_0_a_bits_address}
    , master_port_1_0_b_bits_address{vlSymsp->TOP.master_port_1_0_b_bits_address}
    , master_port_1_0_c_bits_address{vlSymsp->TOP.master_port_1_0_c_bits_address}
    , __PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf}
    , __PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl}
    , __PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory}
    , __PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC}
    , __PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__grantBuf{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__grantBuf}
    , __PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillBuf{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillBuf}
    , __PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__releaseBuf{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__releaseBuf}
    , __PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf}
    , __PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl}
    , __PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory}
    , __PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC}
    , __PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf}
    , __PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillBuf{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillBuf}
    , __PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__releaseBuf{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__releaseBuf}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr}
    , __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr{vlSymsp->TOP.__PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTestTop_L2L3L2::VTestTop_L2L3L2(const char* _vcname__)
    : VTestTop_L2L3L2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTestTop_L2L3L2::~VTestTop_L2L3L2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTestTop_L2L3L2___024root___eval_debug_assertions(VTestTop_L2L3L2___024root* vlSelf);
#endif  // VL_DEBUG
void VTestTop_L2L3L2___024root___eval_static(VTestTop_L2L3L2___024root* vlSelf);
void VTestTop_L2L3L2___024root___eval_initial(VTestTop_L2L3L2___024root* vlSelf);
void VTestTop_L2L3L2___024root___eval_settle(VTestTop_L2L3L2___024root* vlSelf);
void VTestTop_L2L3L2___024root___eval(VTestTop_L2L3L2___024root* vlSelf);

void VTestTop_L2L3L2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTestTop_L2L3L2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTestTop_L2L3L2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTestTop_L2L3L2___024root___eval_static(&(vlSymsp->TOP));
        VTestTop_L2L3L2___024root___eval_initial(&(vlSymsp->TOP));
        VTestTop_L2L3L2___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTestTop_L2L3L2___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTestTop_L2L3L2::eventsPending() { return false; }

uint64_t VTestTop_L2L3L2::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTestTop_L2L3L2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTestTop_L2L3L2___024root___eval_final(VTestTop_L2L3L2___024root* vlSelf);

VL_ATTR_COLD void VTestTop_L2L3L2::final() {
    VTestTop_L2L3L2___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTestTop_L2L3L2::hierName() const { return vlSymsp->name(); }
const char* VTestTop_L2L3L2::modelName() const { return "VTestTop_L2L3L2"; }
unsigned VTestTop_L2L3L2::threads() const { return 1; }
void VTestTop_L2L3L2::prepareClone() const { contextp()->prepareClone(); }
void VTestTop_L2L3L2::atClone() const {
    contextp()->threadPoolpOnClone();
}
