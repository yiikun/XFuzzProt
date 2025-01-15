// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_MSHRCtl.h"
#include "VTestTop_L2L3L2__Syms.h"

VL_INLINE_OPT void VTestTop_L2L3L2_MSHRCtl___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__4(VTestTop_L2L3L2_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHRCtl___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mshr_task_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready) 
           & (0U != (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__valids)));
    vlSelfRef.__PVT__mshr_task_arb_io_in_0_ready = 
        ((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_1_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 1U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_2_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 2U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_3_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 3U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_4_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 4U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_5_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 5U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_6_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 6U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_7_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 7U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_8_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 8U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_9_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 9U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_10_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 0xaU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_11_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 0xbU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_12_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 0xcU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_13_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 0xdU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_14_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 0xeU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_15_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 0xfU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHRCtl___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__4(VTestTop_L2L3L2_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHRCtl___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mshr_task_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready) 
           & (0U != (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__valids)));
    vlSelfRef.__PVT__mshr_task_arb_io_in_0_ready = 
        ((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_1_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 1U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_2_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 2U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_3_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 3U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_4_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 4U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_5_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 5U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_6_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 6U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_7_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 7U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_8_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 8U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_9_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 9U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_10_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 0xaU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_11_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 0xbU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_12_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 0xcU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_13_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 0xdU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_14_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 0xeU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_15_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 0xfU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_mshrTask_ready));
}
