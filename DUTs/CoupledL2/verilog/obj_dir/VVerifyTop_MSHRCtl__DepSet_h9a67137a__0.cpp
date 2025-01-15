// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_MSHR.h"
#include "VVerifyTop_MSHRCtl.h"
#include "VVerifyTop__Syms.h"

VL_INLINE_OPT void VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__1(VVerifyTop_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT__source_b_arb_io_out_bits_tag;
    __PVT__source_b_arb_io_out_bits_tag = 0;
    CData/*0:0*/ __PVT__source_b_arb_io_out_bits_set;
    __PVT__source_b_arb_io_out_bits_set = 0;
    // Body
    vlSelfRef.__PVT__source_a_arb__DOT__valids = ((
                                                   (8U 
                                                    & ((~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__state_s_acquire)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__state_s_acquire)) 
                                                         << 2U))) 
                                                  | ((2U 
                                                      & ((~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire)))));
    vlSelfRef.__PVT__mshrSelector_io_out_bits = ((1U 
                                                  & ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid)) 
                                                     | (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_valid))))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid)
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_valid)
                                                   ? 8U
                                                   : 4U));
    vlSelfRef.__PVT__source_b_arb__DOT__valids = ((
                                                   ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid)));
    vlSelfRef.__PVT__acquire_period_en = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
                                          & ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                             | (5U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode))));
    vlSelfRef.__PVT__release_period_en = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
                                          & (6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__source_a_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready) 
           & (0U != (IData)(vlSelfRef.__PVT__source_a_arb__DOT__valids)));
    vlSelfRef.__PVT__source_a_arb__DOT__chosenOH = 
        ((0U != ((IData)(vlSelfRef.__PVT__source_a_arb__DOT__rrSelOH) 
                 & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__valids)))
          ? (IData)(vlSelfRef.__PVT__source_a_arb__DOT__rrSelOH)
          : (((8U & (((~ ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire)) 
                          | ((~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire)) 
                             | (~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__state_s_acquire))))) 
                      & (~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__state_s_acquire))) 
                     << 3U)) | (4U & (((~ ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire)) 
                                           | (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire)))) 
                                       & (~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__state_s_acquire))) 
                                      << 2U))) | ((
                                                   ((IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire) 
                                                    & (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire))))));
    vlSelfRef.io_toMainPipe_mshr_alloc_ptr = (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                            >> 2U)))) 
                                               << 1U) 
                                              | (IData)(
                                                        (0U 
                                                         != 
                                                         (0xaU 
                                                          & (IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits)))));
    vlSelfRef.__PVT__source_b_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSelfRef.__PVT__sourceB_io_task_ready) 
           & (0U != (IData)(vlSelfRef.__PVT__source_b_arb__DOT__valids)));
    vlSelfRef.__PVT__source_b_arb__DOT__chosenOH = 
        ((0U != ((IData)(vlSelfRef.__PVT__source_b_arb__DOT__rrSelOH) 
                 & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__valids)))
          ? (IData)(vlSelfRef.__PVT__source_b_arb__DOT__rrSelOH)
          : (((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                    | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                       | (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid)))) 
                & (IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid)) 
               << 3U) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                              | (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid))) 
                          & (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid)) 
                         << 2U)) | ((((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid)) 
                                      & (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid)) 
                                     << 1U) | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid))));
    __PVT__source_b_arb_io_out_bits_tag = ((((1U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                              ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_tag)
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_tag)
                                                : 0U)) 
                                           | (((4U 
                                                & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_tag)
                                                : 0U) 
                                              | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                  ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_tag)
                                                  : 0U)));
    __PVT__source_b_arb_io_out_bits_set = (((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                            & (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_set)) 
                                           | ((((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                                >> 1U) 
                                               & (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_set)) 
                                              | ((((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                                   >> 2U) 
                                                  & (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_set)) 
                                                 | (((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                                     >> 3U) 
                                                    & (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_set)))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_0 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_0_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_0_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_0_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_1 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_1_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_1_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_1_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_2 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_2_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_2_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_2_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_3 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_3_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_3_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_3_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
}

VL_INLINE_OPT void VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__2(VVerifyTop_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mshrs_0_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT__mshrs_0_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (0U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__mshrs_1_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_1->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT__mshrs_1_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (1U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__mshrs_2_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (2U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT__mshrs_2_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (2U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__mshrs_3_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_3->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (3U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT__mshrs_3_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (3U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__mshr_task_arb__DOT__valids = (
                                                   (((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                                                     << 3U) 
                                                    | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid)));
    vlSelfRef.__PVT__acquire_period = (((IData)(vlSelfRef.__PVT__mshrs_0_io_resps_sink_d_valid)
                                         ? (vlSelf->__PVT__mshrs_0->__PVT__timer 
                                            - (QData)((IData)(vlSelf->__PVT__mshrs_0->__PVT__acquire_ts)))
                                         : 0ULL) | 
                                       (((IData)(vlSelfRef.__PVT__mshrs_1_io_resps_sink_d_valid)
                                          ? (vlSelf->__PVT__mshrs_1->__PVT__timer 
                                             - (QData)((IData)(vlSelf->__PVT__mshrs_1->__PVT__acquire_ts)))
                                          : 0ULL) | 
                                        (((IData)(vlSelfRef.__PVT__mshrs_2_io_resps_sink_d_valid)
                                           ? (vlSelf->__PVT__mshrs_2->__PVT__timer 
                                              - (QData)((IData)(vlSelf->__PVT__mshrs_2->__PVT__acquire_ts)))
                                           : 0ULL) 
                                         | ((IData)(vlSelfRef.__PVT__mshrs_3_io_resps_sink_d_valid)
                                             ? (vlSelf->__PVT__mshrs_3->__PVT__timer 
                                                - (QData)((IData)(vlSelf->__PVT__mshrs_3->__PVT__acquire_ts)))
                                             : 0ULL))));
    vlSelfRef.__PVT__release_period = (((IData)(vlSelfRef.__PVT__mshrs_0_io_resps_sink_d_valid)
                                         ? (vlSelf->__PVT__mshrs_0->__PVT__timer 
                                            - (QData)((IData)(vlSelf->__PVT__mshrs_0->__PVT__release_ts)))
                                         : 0ULL) | 
                                       (((IData)(vlSelfRef.__PVT__mshrs_1_io_resps_sink_d_valid)
                                          ? (vlSelf->__PVT__mshrs_1->__PVT__timer 
                                             - (QData)((IData)(vlSelf->__PVT__mshrs_1->__PVT__release_ts)))
                                          : 0ULL) | 
                                        (((IData)(vlSelfRef.__PVT__mshrs_2_io_resps_sink_d_valid)
                                           ? (vlSelf->__PVT__mshrs_2->__PVT__timer 
                                              - (QData)((IData)(vlSelf->__PVT__mshrs_2->__PVT__release_ts)))
                                           : 0ULL) 
                                         | ((IData)(vlSelfRef.__PVT__mshrs_3_io_resps_sink_d_valid)
                                             ? (vlSelf->__PVT__mshrs_3->__PVT__timer 
                                                - (QData)((IData)(vlSelf->__PVT__mshrs_3->__PVT__release_ts)))
                                             : 0ULL))));
    vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH = 
        ((0U != ((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__rrSelOH) 
                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__valids)))
          ? (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__rrSelOH)
          : (((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                    | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                       | (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid)))) 
                & (IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid)) 
               << 3U) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                              | (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid))) 
                          & (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid)) 
                         << 2U)) | ((((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid)) 
                                      & (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid)) 
                                     << 1U) | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid))));
}

VL_INLINE_OPT void VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__3(VVerifyTop_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_nestedwbDataId_bits = (((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_nestedwbData) 
                                         | (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_nestedwbData))
                                         ? (1U & (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_nestedwbData)))
                                         : ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_nestedwbData)
                                             ? 2U : 3U));
    vlSelfRef.io_nestedwbDataId_valid = ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_nestedwbData) 
                                         | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_nestedwbData) 
                                            | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_nestedwbData) 
                                               | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__nestedwb_match) 
                                                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty)))));
    vlSelfRef.__PVT___mshrFull_T_1 = (7U & ((3U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_0_valid) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                                                   << 1U) 
                                                                  | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_0_valid)), 1U))) 
                                            + ((3U 
                                                & ((IData)(vlSelf->__PVT__mshrs_3->__PVT__req_valid) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 (((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_valid) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_valid)), 1U))) 
                                               + (3U 
                                                  & ((IData)(vlSelf->__PVT__mshrs_1->__PVT__req_valid) 
                                                     + (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid))))));
    vlSelfRef.__PVT__mshrs_0_io_alloc_valid = ((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_1_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_2_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_3_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(
                                                       (3U 
                                                        <= (IData)(vlSelfRef.__PVT___mshrFull_T_1)))));
    vlSelfRef.__PVT__next_counter_1 = (vlSelfRef.__PVT__counter_1 
                                       + (QData)((IData)(
                                                         (4U 
                                                          <= (IData)(vlSelfRef.__PVT___mshrFull_T_1)))));
}

VL_INLINE_OPT void VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__1(VVerifyTop_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT__source_b_arb_io_out_bits_tag;
    __PVT__source_b_arb_io_out_bits_tag = 0;
    CData/*0:0*/ __PVT__source_b_arb_io_out_bits_set;
    __PVT__source_b_arb_io_out_bits_set = 0;
    // Body
    vlSelfRef.__PVT__source_a_arb__DOT__valids = ((
                                                   (8U 
                                                    & ((~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__state_s_acquire)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__state_s_acquire)) 
                                                         << 2U))) 
                                                  | ((2U 
                                                      & ((~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire)))));
    vlSelfRef.__PVT__mshrSelector_io_out_bits = ((1U 
                                                  & ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid)) 
                                                     | (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_valid))))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid)
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_valid)
                                                   ? 8U
                                                   : 4U));
    vlSelfRef.__PVT__source_b_arb__DOT__valids = ((
                                                   ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid)));
    vlSelfRef.__PVT__acquire_period_en = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
                                          & ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                             | (5U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode))));
    vlSelfRef.__PVT__release_period_en = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
                                          & (6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__source_a_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready) 
           & (0U != (IData)(vlSelfRef.__PVT__source_a_arb__DOT__valids)));
    vlSelfRef.__PVT__source_a_arb__DOT__chosenOH = 
        ((0U != ((IData)(vlSelfRef.__PVT__source_a_arb__DOT__rrSelOH) 
                 & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__valids)))
          ? (IData)(vlSelfRef.__PVT__source_a_arb__DOT__rrSelOH)
          : (((8U & (((~ ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire)) 
                          | ((~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire)) 
                             | (~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__state_s_acquire))))) 
                      & (~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__state_s_acquire))) 
                     << 3U)) | (4U & (((~ ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire)) 
                                           | (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire)))) 
                                       & (~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__state_s_acquire))) 
                                      << 2U))) | ((
                                                   ((IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire) 
                                                    & (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire))))));
    vlSelfRef.io_toMainPipe_mshr_alloc_ptr = (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                            >> 2U)))) 
                                               << 1U) 
                                              | (IData)(
                                                        (0U 
                                                         != 
                                                         (0xaU 
                                                          & (IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits)))));
    vlSelfRef.__PVT__source_b_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSelfRef.__PVT__sourceB_io_task_ready) 
           & (0U != (IData)(vlSelfRef.__PVT__source_b_arb__DOT__valids)));
    vlSelfRef.__PVT__source_b_arb__DOT__chosenOH = 
        ((0U != ((IData)(vlSelfRef.__PVT__source_b_arb__DOT__rrSelOH) 
                 & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__valids)))
          ? (IData)(vlSelfRef.__PVT__source_b_arb__DOT__rrSelOH)
          : (((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                    | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                       | (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid)))) 
                & (IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid)) 
               << 3U) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                              | (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid))) 
                          & (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid)) 
                         << 2U)) | ((((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid)) 
                                      & (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid)) 
                                     << 1U) | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid))));
    __PVT__source_b_arb_io_out_bits_tag = ((((1U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                              ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_tag)
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_tag)
                                                : 0U)) 
                                           | (((4U 
                                                & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_tag)
                                                : 0U) 
                                              | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                  ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_tag)
                                                  : 0U)));
    __PVT__source_b_arb_io_out_bits_set = (((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                            & (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_set)) 
                                           | ((((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                                >> 1U) 
                                               & (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_set)) 
                                              | ((((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                                   >> 2U) 
                                                  & (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_set)) 
                                                 | (((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                                     >> 3U) 
                                                    & (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_set)))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_0 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_0_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_0_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_0_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_1 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_1_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_1_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_1_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_2 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_2_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_2_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_2_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_3 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_3_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_3_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_3_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
}

VL_INLINE_OPT void VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__2(VVerifyTop_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mshrs_0_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT__mshrs_0_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (0U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__mshrs_1_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_1->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT__mshrs_1_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (1U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__mshrs_2_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (2U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT__mshrs_2_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (2U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__mshrs_3_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_3->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (3U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT__mshrs_3_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (3U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__mshr_task_arb__DOT__valids = (
                                                   (((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                                                     << 3U) 
                                                    | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid)));
    vlSelfRef.__PVT__acquire_period = (((IData)(vlSelfRef.__PVT__mshrs_0_io_resps_sink_d_valid)
                                         ? (vlSelf->__PVT__mshrs_0->__PVT__timer 
                                            - (QData)((IData)(vlSelf->__PVT__mshrs_0->__PVT__acquire_ts)))
                                         : 0ULL) | 
                                       (((IData)(vlSelfRef.__PVT__mshrs_1_io_resps_sink_d_valid)
                                          ? (vlSelf->__PVT__mshrs_1->__PVT__timer 
                                             - (QData)((IData)(vlSelf->__PVT__mshrs_1->__PVT__acquire_ts)))
                                          : 0ULL) | 
                                        (((IData)(vlSelfRef.__PVT__mshrs_2_io_resps_sink_d_valid)
                                           ? (vlSelf->__PVT__mshrs_2->__PVT__timer 
                                              - (QData)((IData)(vlSelf->__PVT__mshrs_2->__PVT__acquire_ts)))
                                           : 0ULL) 
                                         | ((IData)(vlSelfRef.__PVT__mshrs_3_io_resps_sink_d_valid)
                                             ? (vlSelf->__PVT__mshrs_3->__PVT__timer 
                                                - (QData)((IData)(vlSelf->__PVT__mshrs_3->__PVT__acquire_ts)))
                                             : 0ULL))));
    vlSelfRef.__PVT__release_period = (((IData)(vlSelfRef.__PVT__mshrs_0_io_resps_sink_d_valid)
                                         ? (vlSelf->__PVT__mshrs_0->__PVT__timer 
                                            - (QData)((IData)(vlSelf->__PVT__mshrs_0->__PVT__release_ts)))
                                         : 0ULL) | 
                                       (((IData)(vlSelfRef.__PVT__mshrs_1_io_resps_sink_d_valid)
                                          ? (vlSelf->__PVT__mshrs_1->__PVT__timer 
                                             - (QData)((IData)(vlSelf->__PVT__mshrs_1->__PVT__release_ts)))
                                          : 0ULL) | 
                                        (((IData)(vlSelfRef.__PVT__mshrs_2_io_resps_sink_d_valid)
                                           ? (vlSelf->__PVT__mshrs_2->__PVT__timer 
                                              - (QData)((IData)(vlSelf->__PVT__mshrs_2->__PVT__release_ts)))
                                           : 0ULL) 
                                         | ((IData)(vlSelfRef.__PVT__mshrs_3_io_resps_sink_d_valid)
                                             ? (vlSelf->__PVT__mshrs_3->__PVT__timer 
                                                - (QData)((IData)(vlSelf->__PVT__mshrs_3->__PVT__release_ts)))
                                             : 0ULL))));
    vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH = 
        ((0U != ((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__rrSelOH) 
                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__valids)))
          ? (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__rrSelOH)
          : (((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                    | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                       | (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid)))) 
                & (IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid)) 
               << 3U) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                              | (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid))) 
                          & (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid)) 
                         << 2U)) | ((((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid)) 
                                      & (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid)) 
                                     << 1U) | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid))));
}

VL_INLINE_OPT void VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__3(VVerifyTop_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_nestedwbDataId_bits = (((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_nestedwbData) 
                                         | (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_nestedwbData))
                                         ? (1U & (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_nestedwbData)))
                                         : ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_nestedwbData)
                                             ? 2U : 3U));
    vlSelfRef.io_nestedwbDataId_valid = ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_nestedwbData) 
                                         | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_nestedwbData) 
                                            | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_nestedwbData) 
                                               | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__nestedwb_match) 
                                                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty)))));
    vlSelfRef.__PVT___mshrFull_T_1 = (7U & ((3U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_0_valid) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                                                   << 1U) 
                                                                  | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_0_valid)), 1U))) 
                                            + ((3U 
                                                & ((IData)(vlSelf->__PVT__mshrs_3->__PVT__req_valid) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 (((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_valid) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_valid)), 1U))) 
                                               + (3U 
                                                  & ((IData)(vlSelf->__PVT__mshrs_1->__PVT__req_valid) 
                                                     + (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid))))));
    vlSelfRef.__PVT__mshrs_0_io_alloc_valid = ((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_1_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_2_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_3_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(
                                                       (3U 
                                                        <= (IData)(vlSelfRef.__PVT___mshrFull_T_1)))));
    vlSelfRef.__PVT__next_counter_1 = (vlSelfRef.__PVT__counter_1 
                                       + (QData)((IData)(
                                                         (4U 
                                                          <= (IData)(vlSelfRef.__PVT___mshrFull_T_1)))));
}
