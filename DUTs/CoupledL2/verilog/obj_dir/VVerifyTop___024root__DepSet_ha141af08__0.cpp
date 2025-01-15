// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop___024root.h"

VL_INLINE_OPT void VVerifyTop___024root___ico_sequent__TOP__0(VVerifyTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVerifyTop___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_30 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_31 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_30 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_31 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_30 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_31 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_30 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_31 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_30 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_31 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_30 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_31 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_30 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_31 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_30 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_31 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_33 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_33 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_33 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_33 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_33 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_33 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_33 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_33 = 0ULL;
    } else {
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_30 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___T_6)
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__acquire_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_31 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___T_7)
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__probe_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_30 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___T_6)
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__acquire_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_31 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___T_7)
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__probe_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_30 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___T_6)
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__acquire_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_31 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___T_7)
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__probe_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_30 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___T_6)
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__acquire_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_31 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___T_7)
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__probe_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_30 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___T_6)
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__acquire_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_31 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___T_7)
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__probe_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_30 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___T_6)
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__acquire_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_31 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___T_7)
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__probe_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_30 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___T_6)
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__acquire_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_31 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___T_7)
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__probe_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_30 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___T_6)
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__acquire_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_31 
            = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___T_7)
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__probe_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io___05Ftasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_0_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__release_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_1_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__release_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_2_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__release_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_3_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__release_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_0_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__release_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io___05Ftasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_1_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__release_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_2_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__release_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_3_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__release_ts)));
    }
}

void VVerifyTop___024root___eval_triggers__ico(VVerifyTop___024root* vlSelf);
void VVerifyTop___024root___eval_ico(VVerifyTop___024root* vlSelf);

bool VVerifyTop___024root___eval_phase__ico(VVerifyTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVerifyTop___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VVerifyTop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VVerifyTop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VVerifyTop___024root___eval_act(VVerifyTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVerifyTop___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VVerifyTop___024root___eval_triggers__act(VVerifyTop___024root* vlSelf);

bool VVerifyTop___024root___eval_phase__act(VVerifyTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVerifyTop___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VVerifyTop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VVerifyTop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VVerifyTop___024root___eval_nba(VVerifyTop___024root* vlSelf);

bool VVerifyTop___024root___eval_phase__nba(VVerifyTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVerifyTop___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VVerifyTop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VVerifyTop___024root___dump_triggers__ico(VVerifyTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VVerifyTop___024root___dump_triggers__nba(VVerifyTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VVerifyTop___024root___dump_triggers__act(VVerifyTop___024root* vlSelf);
#endif  // VL_DEBUG

void VVerifyTop___024root___eval(VVerifyTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVerifyTop___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VVerifyTop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("VerifyTop.sv", 166943, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VVerifyTop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VVerifyTop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("VerifyTop.sv", 166943, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VVerifyTop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("VerifyTop.sv", 166943, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VVerifyTop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VVerifyTop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VVerifyTop___024root___eval_debug_assertions(VVerifyTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVerifyTop___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelfRef.io_topInputRandomAddrs_0 
                     & 0xe0U))) {
        Verilated::overWidthError("io_topInputRandomAddrs_0");}
    if (VL_UNLIKELY((vlSelfRef.io_topInputRandomAddrs_1 
                     & 0xe0U))) {
        Verilated::overWidthError("io_topInputRandomAddrs_1");}
    if (VL_UNLIKELY((vlSelfRef.io_topInputNeedT_0 & 0xfeU))) {
        Verilated::overWidthError("io_topInputNeedT_0");}
    if (VL_UNLIKELY((vlSelfRef.io_topInputNeedT_1 & 0xfeU))) {
        Verilated::overWidthError("io_topInputNeedT_1");}
}
#endif  // VL_DEBUG
