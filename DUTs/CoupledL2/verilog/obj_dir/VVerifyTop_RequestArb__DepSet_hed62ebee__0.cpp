// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_RequestArb.h"
#include "VVerifyTop__Syms.h"

VL_INLINE_OPT void VVerifyTop_RequestArb___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__0(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___sameSetCnt_T_4;
    __PVT___sameSetCnt_T_4 = 0;
    // Body
    if (vlSelfRef.__PVT___sinkValids_T_3) {
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag 
            = (7U & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_bits_tag));
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_sourceId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel = 2U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode 
            = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__ram_opcode
            [vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__deq_ptr_value];
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set 
            = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_bits_set;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow) {
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag 
                = (7U & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                         >> 2U));
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_sourceId = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__prefetcher__DOT__reqSource;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel = 1U;
        } else {
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_mshrId
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_reqSource
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag 
                = (7U & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_tag
                   [0U]);
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_sourceId 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_sourceId
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_opcode
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_channel
                [0U];
        }
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode 
            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_opcode;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set 
            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set;
    }
    vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mergeA 
        = ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_mergeA
               [0U]));
    vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrTask 
        = ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_mshrTask
               [0U]));
    vlSelfRef.__PVT__next_counter_8 = (vlSelfRef.__PVT__counter_8 
                                       + (QData)((IData)(
                                                         ((3U 
                                                           <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid)))));
    vlSelfRef.__PVT__next_counter_13 = (vlSelfRef.__PVT__counter_13 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockA_s1) 
                                                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid)))));
    vlSelfRef.__PVT__next_counter_22 = (vlSelfRef.__PVT__counter_22 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid) 
                                                           & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)))));
    vlSelfRef.__PVT___T_77 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid) 
                              & ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                 & (IData)(vlSelfRef.__PVT__sink_ready_basic)));
    vlSelfRef.__PVT___sinkValids_T_5 = ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid));
    __PVT___sameSetCnt_T_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                              & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_channel)));
    if (vlSelfRef.__PVT__mshr_task_s1_valid) {
        vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode 
            = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_opcode;
        vlSelfRef.io_taskInfo_s1_bits_mergeA = vlSelfRef.__PVT__mshr_task_s1_bits_mergeA;
        vlSelfRef.io_taskInfo_s1_bits_mshrTask = vlSelfRef.__PVT__mshr_task_s1_bits_mshrTask;
        vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
            = vlSelfRef.__PVT__mshr_task_s1_bits_channel;
        vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
            = vlSelfRef.__PVT__mshr_task_s1_bits_opcode;
        vlSelfRef.io_dirRead_s1_bits_set = vlSelfRef.__PVT__mshr_task_s1_bits_set;
    } else {
        if (vlSelfRef.__PVT___sinkValids_T_1) {
            vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode = 0U;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_channel;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_opcode;
            vlSelfRef.io_dirRead_s1_bits_set = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_set;
        } else {
            vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode;
            vlSelfRef.io_dirRead_s1_bits_set = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set;
        }
        vlSelfRef.io_taskInfo_s1_bits_mergeA = ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_1))) 
                                                && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mergeA));
        vlSelfRef.io_taskInfo_s1_bits_mshrTask = ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_1))) 
                                                  && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrTask));
    }
    vlSelfRef.__PVT__next_counter_20 = (vlSelfRef.__PVT__counter_20 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_77) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_1)))));
    vlSelfRef.__PVT__next_counter_19 = (vlSelfRef.__PVT__counter_19 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_77) 
                                                           & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_1)) 
                                                              & (IData)(vlSelfRef.__PVT___sinkValids_T_3))))));
    vlSelfRef.__PVT__next_counter_16 = (vlSelfRef.__PVT__counter_16 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_5)))));
    vlSelfRef.__PVT___sinkValids_T_6 = (2U > (7U & 
                                              ((3U 
                                                & ((IData)(__PVT___sameSetCnt_T_4) 
                                                   + 
                                                   (VL_SHIFTR_III(2,2,32, 
                                                                  ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                                     & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set) 
                                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_channel))) 
                                                                    << 1U) 
                                                                   | (IData)(__PVT___sameSetCnt_T_4)), 1U) 
                                                    + 
                                                    ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                     & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set) 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_channel)))))) 
                                               + (3U 
                                                  & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                      & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set) 
                                                          == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_channel))) 
                                                     + 
                                                     (((IData)(vlSelfRef.__PVT___sameSet_s2_T_2) 
                                                       & ((~ (IData)(vlSelfRef.__PVT__task_s2_bits_mshrTask)) 
                                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set) 
                                                             == (IData)(vlSelfRef.__PVT__task_s2_bits_set)))) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__sameSet_s3_REG) 
                                                       & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set) 
                                                          == (IData)(vlSelfRef.__PVT__sameSet_s3_r)))))))));
    vlSelfRef.__PVT__sinkValids = ((((IData)(vlSelfRef.__PVT___sinkValids_T_6) 
                                     & (IData)(vlSelfRef.__PVT___sinkValids_T_5)) 
                                    << 2U) | (((IData)(vlSelfRef.__PVT___sinkValids_T_3) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT___sinkValids_T_1)));
    vlSelfRef.io_sinkA_ready = ((IData)(vlSelfRef.__PVT__sink_ready_basic) 
                                & ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                   & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_3)) 
                                      & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_1)) 
                                         & (IData)(vlSelfRef.__PVT___sinkValids_T_6)))));
    vlSelfRef.__PVT__chnl_task_s1_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready) 
                                           & ((0U != (IData)(vlSelfRef.__PVT__sinkValids)) 
                                              & (IData)(vlSelfRef.__PVT__resetFinish)));
    vlSelfRef.__PVT__next_counter_5 = (vlSelfRef.__PVT__counter_5 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_sinkA_ready)) 
                                                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid)))));
    vlSelfRef.__PVT___s1_AHint_fire_T = ((IData)(vlSelfRef.io_sinkA_ready) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid));
    vlSelfRef.io_taskInfo_s1_valid = ((~ (IData)(vlSelfRef.__PVT__ds_mcp2_stall)) 
                                      & ((~ ((IData)(vlSelfRef.__PVT__mshr_task_s1_valid) 
                                             & ((IData)(vlSelfRef.io_dirRead_s1_bits_refill) 
                                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockG_s1))))) 
                                         & ((IData)(vlSelfRef.__PVT__mshr_task_s1_valid)
                                             ? (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)
                                             : (IData)(vlSelfRef.__PVT__chnl_task_s1_valid))));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_2 
                                       + (QData)((IData)(vlSelfRef.__PVT___s1_AHint_fire_T)));
}

VL_INLINE_OPT void VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__0(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__mshr_task_s1_valid;
    __Vdly__mshr_task_s1_valid = 0;
    // Body
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: mshr_req, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_timer,
                      64,(vlSelfRef.__PVT__counter 
                          + (QData)((IData)(vlSelfRef.__PVT__s0_fire))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_1_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: mshr_req_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_1_timer,
                      64,(vlSelfRef.__PVT__counter_1 
                          + (QData)((IData)(((~ (IData)(vlSelfRef.io_mshrTask_ready)) 
                                             & (0U 
                                                != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__valids)))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_req, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,(vlSelfRef.__PVT__counter_2 
                          + (QData)((IData)(vlSelfRef.__PVT___s1_AHint_fire_T))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_req, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,(vlSelfRef.__PVT__counter_3 
                          + (QData)((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_4))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_req, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,(vlSelfRef.__PVT__counter_4 
                          + (QData)((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_2))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,(vlSelfRef.__PVT__counter_5 
                          + (QData)((IData)(((~ (IData)(vlSelfRef.io_sinkA_ready)) 
                                             & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,(vlSelfRef.__PVT__counter_6 
                          + (QData)((IData)(((~ (IData)(vlSelfRef.io_sinkB_ready)) 
                                             & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_7_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_7_timer,
                      64,(vlSelfRef.__PVT__counter_7 
                          + (QData)((IData)(((~ (IData)(vlSelfRef.io_sinkC_ready)) 
                                             & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall_by_mshr, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,(vlSelfRef.__PVT__counter_8 
                          + (QData)((IData)(((3U <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                             & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_9_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_stall_by_mshr, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_9_timer,
                      64,(vlSelfRef.__PVT__counter_9 
                          + (QData)((IData)(((4U <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                             & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall_by_mainpipe, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_10);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_11_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_stall_by_mainpipe, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_11_timer,
                      64,(vlSelfRef.__PVT__counter_11 
                          + (QData)((IData)(((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockB_s1) 
                                             & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_stall_by_mainpipe, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,(vlSelfRef.__PVT__counter_12 
                          + (QData)((IData)(((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockC_s1) 
                                             & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall_by_grantbuf, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,(vlSelfRef.__PVT__counter_13 
                          + (QData)((IData)(((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockA_s1) 
                                             & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_14_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_stall_by_grantbuf, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_14_timer,
                      64,(vlSelfRef.__PVT__counter_14 
                          + (QData)((IData)(((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockB_s1) 
                                             & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_stall_by_grantbuf, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,(vlSelfRef.__PVT__counter_15 
                          + (QData)((IData)(((4U <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkReq_T_36)) 
                                             & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall_by_dir, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,(vlSelfRef.__PVT__counter_16 
                          + (QData)((IData)(((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                             & (IData)(vlSelfRef.__PVT___sinkValids_T_5))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_17_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_stall_by_dir, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_17_timer,
                      64,(vlSelfRef.__PVT__counter_17 
                          + (QData)((IData)(((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                             & (IData)(vlSelfRef.__PVT___sinkValids_T_3))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_stall_by_dir, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,(vlSelfRef.__PVT__counter_18 
                          + (QData)((IData)(((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                             & (IData)(vlSelfRef.__PVT___sinkValids_T_1))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall_by_sinkB, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,(vlSelfRef.__PVT__counter_19 
                          + (QData)((IData)(((IData)(vlSelfRef.__PVT___T_77) 
                                             & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_1)) 
                                                & (IData)(vlSelfRef.__PVT___sinkValids_T_3)))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_20_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall_by_sinkC, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_20_timer,
                      64,(vlSelfRef.__PVT__counter_20 
                          + (QData)((IData)(((IData)(vlSelfRef.__PVT___T_77) 
                                             & (IData)(vlSelfRef.__PVT___sinkValids_T_1))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_stall_by_sinkC, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,(vlSelfRef.__PVT__counter_21 
                          + (QData)((IData)(((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid) 
                                             & ((IData)(vlSelfRef.__PVT__sink_ready_basic) 
                                                & ((IData)(vlSelfRef.__PVT___sinkValids_T_2) 
                                                   & (IData)(vlSelfRef.__PVT___sinkValids_T_1))))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall_by_mshrTask, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,(vlSelfRef.__PVT__counter_22 
                          + (QData)((IData)(((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid) 
                                             & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_23_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_stall_by_mshrTask, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_23_timer,
                      64,(vlSelfRef.__PVT__counter_23 
                          + (QData)((IData)(((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid) 
                                             & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_24_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_stall_by_mshrTask, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_24_timer,
                      64,(vlSelfRef.__PVT__counter_24 
                          + (QData)((IData)(((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid) 
                                             & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid))))));
    }
    vlSelfRef.__Vdly__task_s2_bits_off = vlSelfRef.__PVT__task_s2_bits_off;
    vlSelfRef.__Vdly__task_s2_bits_param = vlSelfRef.__PVT__task_s2_bits_param;
    vlSelfRef.__Vdly__task_s2_bits_sourceId = vlSelfRef.__PVT__task_s2_bits_sourceId;
    vlSelfRef.__Vdly__task_s2_bits_needProbeAckData 
        = vlSelfRef.__PVT__task_s2_bits_needProbeAckData;
    vlSelfRef.__Vdly__task_s2_bits_fromL2pft = vlSelfRef.__PVT__task_s2_bits_fromL2pft;
    vlSelfRef.__Vdly__task_s2_bits_reqSource = vlSelfRef.__PVT__task_s2_bits_reqSource;
    vlSelfRef.__Vdly__task_s2_bits_opcode = vlSelfRef.__PVT__task_s2_bits_opcode;
    __Vdly__mshr_task_s1_valid = vlSelfRef.__PVT__mshr_task_s1_valid;
    vlSelfRef.__Vdly__task_s2_bits_channel = vlSelfRef.__PVT__task_s2_bits_channel;
    vlSelfRef.__Vdly__mshr_task_s1_bits_set = vlSelfRef.__PVT__mshr_task_s1_bits_set;
    vlSelfRef.__Vdly__mshr_task_s1_bits_tag = vlSelfRef.__PVT__mshr_task_s1_bits_tag;
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__mshr_task_s1_bits_set = 0U;
        vlSelfRef.__Vdly__mshr_task_s1_bits_tag = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_opcode = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_sourceId = 0U;
        vlSelfRef.__PVT__counter_10 = 0ULL;
        vlSelfRef.__PVT__counter = 0ULL;
        vlSelfRef.__PVT__counter_2 = 0ULL;
        vlSelfRef.__PVT__counter_3 = 0ULL;
        vlSelfRef.__PVT__counter_4 = 0ULL;
        vlSelfRef.__PVT__counter_1 = 0ULL;
        vlSelfRef.__PVT__counter_5 = 0ULL;
        vlSelfRef.__PVT__counter_6 = 0ULL;
        vlSelfRef.__PVT__counter_7 = 0ULL;
        vlSelfRef.__PVT__counter_8 = 0ULL;
        vlSelfRef.__PVT__counter_9 = 0ULL;
        vlSelfRef.__PVT__counter_11 = 0ULL;
        vlSelfRef.__PVT__counter_12 = 0ULL;
        vlSelfRef.__PVT__counter_13 = 0ULL;
        vlSelfRef.__PVT__counter_14 = 0ULL;
        vlSelfRef.__PVT__counter_15 = 0ULL;
        vlSelfRef.__PVT__counter_16 = 0ULL;
        vlSelfRef.__PVT__counter_17 = 0ULL;
        vlSelfRef.__PVT__counter_18 = 0ULL;
        vlSelfRef.__PVT__counter_20 = 0ULL;
        vlSelfRef.__PVT__counter_22 = 0ULL;
        vlSelfRef.__PVT__counter_23 = 0ULL;
        vlSelfRef.__PVT__counter_24 = 0ULL;
        vlSelfRef.__PVT__counter_19 = 0ULL;
        vlSelfRef.__PVT__counter_21 = 0ULL;
    } else {
        if (vlSelfRef.__PVT__s0_fire) {
            vlSelfRef.__Vdly__mshr_task_s1_bits_set 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)))));
            vlSelfRef.__Vdly__mshr_task_s1_bits_tag 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)
                          : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)
                              ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)
                              : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)))
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                    ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)
                                    : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)
                                        ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)
                                        : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)))
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)
                                                    ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)
                                                    : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)))
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)
                                                    ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)
                                                    : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)))
                                            : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_opcode 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((7U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112))
                              ? 4U : ((6U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112))
                                       ? 5U : ((5U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112))
                                                ? 2U
                                                : (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112))
                                                    ? 1U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112))
                                                      ? 1U
                                                      : 0U))))))
                          : 0U) : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? ((7U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112))
                                                  ? 4U
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112))
                                                   ? 5U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112))
                                                    ? 2U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112))
                                                     ? 1U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112))
                                                      ? 1U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112))
                                                       ? 1U
                                                       : 0U))))))
                                              : 0U)
                                          : 0U)) | 
                   (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((7U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112))
                              ? 4U : ((6U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112))
                                       ? 5U : ((5U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112))
                                                ? 2U
                                                : (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112))
                                                    ? 1U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112))
                                                      ? 1U
                                                      : 0U))))))
                          : 0U) : 0U) | ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? ((7U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112))
                                                  ? 4U
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112))
                                                   ? 5U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112))
                                                    ? 2U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112))
                                                     ? 1U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112))
                                                      ? 1U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112))
                                                       ? 1U
                                                       : 0U))))))
                                              : 0U)
                                          : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_sourceId 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid)
                              ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__prefetcher__DOT__reqSource)
                              : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_grant_task_merge_task_r_sourceId))
                          : 0U) : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid)
                                                  ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__prefetcher__DOT__reqSource)
                                                  : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_grant_task_merge_task_r_sourceId))
                                              : 0U)
                                          : 0U)) | 
                   (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid)
                              ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__prefetcher__DOT__reqSource)
                              : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_grant_task_merge_task_r_sourceId))
                          : 0U) : 0U) | ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid)
                                                  ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__prefetcher__DOT__reqSource)
                                                  : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_grant_task_merge_task_r_sourceId))
                                              : 0U)
                                          : 0U)));
        }
        vlSelfRef.__PVT__counter_10 = ((IData)(vlSelfRef.__PVT__helper_10_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_10);
        vlSelfRef.__PVT__counter = ((IData)(vlSelfRef.__PVT__helper_clean)
                                     ? 0ULL : vlSelfRef.__PVT__next_counter);
        vlSelfRef.__PVT__counter_2 = ((IData)(vlSelfRef.__PVT__helper_2_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_2);
        vlSelfRef.__PVT__counter_3 = ((IData)(vlSelfRef.__PVT__helper_3_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_3);
        vlSelfRef.__PVT__counter_4 = ((IData)(vlSelfRef.__PVT__helper_4_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_4);
        vlSelfRef.__PVT__counter_1 = ((IData)(vlSelfRef.__PVT__helper_1_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_1);
        vlSelfRef.__PVT__counter_5 = ((IData)(vlSelfRef.__PVT__helper_5_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_5);
        vlSelfRef.__PVT__counter_6 = ((IData)(vlSelfRef.__PVT__helper_6_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_6);
        vlSelfRef.__PVT__counter_7 = ((IData)(vlSelfRef.__PVT__helper_7_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_7);
        vlSelfRef.__PVT__counter_8 = ((IData)(vlSelfRef.__PVT__helper_8_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_8);
        vlSelfRef.__PVT__counter_9 = ((IData)(vlSelfRef.__PVT__helper_9_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_9);
        vlSelfRef.__PVT__counter_11 = ((IData)(vlSelfRef.__PVT__helper_11_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_11);
        vlSelfRef.__PVT__counter_12 = ((IData)(vlSelfRef.__PVT__helper_12_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_12);
        vlSelfRef.__PVT__counter_13 = ((IData)(vlSelfRef.__PVT__helper_13_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_13);
        vlSelfRef.__PVT__counter_14 = ((IData)(vlSelfRef.__PVT__helper_14_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_14);
        vlSelfRef.__PVT__counter_15 = ((IData)(vlSelfRef.__PVT__helper_15_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_15);
        vlSelfRef.__PVT__counter_16 = ((IData)(vlSelfRef.__PVT__helper_16_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_16);
        vlSelfRef.__PVT__counter_17 = ((IData)(vlSelfRef.__PVT__helper_17_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_17);
        vlSelfRef.__PVT__counter_18 = ((IData)(vlSelfRef.__PVT__helper_18_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_18);
        vlSelfRef.__PVT__counter_20 = ((IData)(vlSelfRef.__PVT__helper_20_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_20);
        vlSelfRef.__PVT__counter_22 = ((IData)(vlSelfRef.__PVT__helper_22_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_22);
        vlSelfRef.__PVT__counter_23 = ((IData)(vlSelfRef.__PVT__helper_23_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_23);
        vlSelfRef.__PVT__counter_24 = ((IData)(vlSelfRef.__PVT__helper_24_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_24);
        vlSelfRef.__PVT__counter_19 = ((IData)(vlSelfRef.__PVT__helper_19_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_19);
        vlSelfRef.__PVT__counter_21 = ((IData)(vlSelfRef.__PVT__helper_21_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_21);
    }
    vlSelfRef.__PVT__ds_mcp2_stall = ((IData)(vlSelfRef.io_taskInfo_s1_valid) 
                                      & (~ ((IData)(vlSelfRef.__PVT___s1_AHint_fire_T) 
                                            & (5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_opcode)))));
    vlSelfRef.__PVT__resetIdx = ((IData)(vlSymsp->TOP.reset) 
                                 | (IData)(vlSelfRef.__PVT___GEN_0));
    vlSelfRef.__PVT__resetFinish = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelfRef.__PVT___GEN_1));
    vlSelfRef.__PVT__sameSet_s3_REG = ((IData)(vlSelfRef.__PVT___sameSet_s2_T_2) 
                                       & (~ (IData)(vlSelfRef.__PVT__task_s2_bits_mshrTask)));
    if (vlSelfRef.__PVT__task_s2_valid) {
        vlSelfRef.__PVT__sameSet_s3_r = vlSelfRef.__PVT__task_s2_bits_set;
    }
    vlSelfRef.__PVT___GEN_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__resetIdx)) 
                                     | (IData)(vlSelfRef.__PVT__resetFinish)));
    vlSelfRef.__PVT___GEN_0 = (1U & ((IData)(vlSelfRef.__PVT__resetFinish)
                                      ? (IData)(vlSelfRef.__PVT__resetIdx)
                                      : (~ (IData)(vlSelfRef.__PVT__resetIdx))));
    vlSelfRef.__PVT__next_counter_10 = vlSelfRef.__PVT__counter_10;
}

VL_INLINE_OPT void VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__1(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__mshr_task_s1_valid;
    __Vdly__mshr_task_s1_valid = 0;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__mshr_task_s1_bits_mshrRetry = 0U;
        vlSelfRef.__Vdly__task_s2_bits_channel = 0U;
        vlSelfRef.__PVT__task_s2_bits_mshrTask = 0U;
        vlSelfRef.__PVT__task_s2_bits_set = 0U;
        vlSelfRef.__PVT__task_s2_bits_tag = 0U;
        vlSelfRef.__Vdly__task_s2_bits_off = 0U;
        vlSelfRef.__PVT__task_s2_bits_alias = 0U;
        vlSelfRef.__Vdly__task_s2_bits_opcode = 0U;
        vlSelfRef.__Vdly__task_s2_bits_param = 0U;
        vlSelfRef.__Vdly__task_s2_bits_sourceId = 0U;
        vlSelfRef.__Vdly__task_s2_bits_needProbeAckData = 0U;
        vlSelfRef.__PVT__task_s2_bits_mshrId = 0U;
        vlSelfRef.__PVT__task_s2_bits_useProbeData = 0U;
        vlSelfRef.__Vdly__task_s2_bits_fromL2pft = 0U;
        vlSelfRef.__PVT__task_s2_bits_needHint = 0U;
        vlSelfRef.__PVT__task_s2_bits_way = 0U;
        vlSelfRef.__PVT__task_s2_bits_meta_dirty = 0U;
        vlSelfRef.__PVT__task_s2_bits_meta_state = 0U;
        vlSelfRef.__PVT__task_s2_bits_meta_clients = 0U;
        vlSelfRef.__PVT__task_s2_bits_meta_alias = 0U;
        vlSelfRef.__PVT__task_s2_bits_meta_prefetch = 0U;
        vlSelfRef.__PVT__task_s2_bits_meta_prefetchSrc = 0U;
        vlSelfRef.__PVT__task_s2_bits_meta_accessed = 0U;
        vlSelfRef.__PVT__task_s2_bits_metaWen = 0U;
        vlSelfRef.__PVT__task_s2_bits_tagWen = 0U;
        vlSelfRef.__PVT__task_s2_bits_dsWen = 0U;
        vlSelfRef.__PVT__task_s2_bits_replTask = 0U;
        vlSelfRef.__Vdly__task_s2_bits_reqSource = 0U;
        vlSelfRef.__PVT__task_s2_bits_mergeA = 0U;
        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_dirty = 0U;
        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_state = 0U;
        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_clients = 0U;
        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_alias = 0U;
        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetch = 0U;
        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetchSrc = 0U;
        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_accessed = 0U;
        vlSelfRef.__PVT__task_s2_bits_snpHitRelease = 0U;
        vlSelfRef.__PVT__task_s2_bits_snpHitReleaseIdx = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_needProbeAckData = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_needHint = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_prefetch = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_prefetchSrc = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_snpHitRelease = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_snpHitReleaseIdx = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_mshrId = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_alias = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_meta_dirty = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_dirty = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_mshrTask = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_clients = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_accessed = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_alias = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_state = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_metaWen = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_mergeA = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_meta_alias = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_tagWen = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_replTask = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_way = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_reqSource = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_meta_prefetchSrc = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_sourceId = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_fromL2pft = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_off = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_meta_accessed = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_param = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_channel = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_useProbeData = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_meta_clients = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_dsWen = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_opcode = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_meta_prefetch = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_meta_state = 0U;
    } else {
        if (vlSelfRef.io_taskInfo_s1_valid) {
            if (vlSelfRef.__PVT__mshr_task_s1_valid) {
                vlSelfRef.__Vdly__task_s2_bits_channel 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_channel;
                vlSelfRef.__PVT__task_s2_bits_mshrTask 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_mshrTask;
                vlSelfRef.__PVT__task_s2_bits_set = vlSelfRef.__PVT__mshr_task_s1_bits_set;
                vlSelfRef.__PVT__task_s2_bits_tag = vlSelfRef.__PVT__mshr_task_s1_bits_tag;
                vlSelfRef.__Vdly__task_s2_bits_off 
                    = (1U & (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_off));
                vlSelfRef.__PVT__task_s2_bits_alias 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_alias;
                vlSelfRef.__Vdly__task_s2_bits_opcode 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_opcode;
                vlSelfRef.__Vdly__task_s2_bits_param 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_param;
                vlSelfRef.__Vdly__task_s2_bits_sourceId 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_sourceId;
                vlSelfRef.__Vdly__task_s2_bits_needProbeAckData 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_needProbeAckData;
                vlSelfRef.__PVT__task_s2_bits_mshrId 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_mshrId;
                vlSelfRef.__PVT__task_s2_bits_useProbeData 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_useProbeData;
                vlSelfRef.__Vdly__task_s2_bits_fromL2pft 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_fromL2pft;
                vlSelfRef.__PVT__task_s2_bits_needHint 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_needHint;
                vlSelfRef.__PVT__task_s2_bits_way = vlSelfRef.__PVT__mshr_task_s1_bits_way;
                vlSelfRef.__PVT__task_s2_bits_meta_dirty 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_meta_dirty;
                vlSelfRef.__PVT__task_s2_bits_meta_state 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_meta_state;
                vlSelfRef.__PVT__task_s2_bits_meta_clients 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_meta_clients;
                vlSelfRef.__PVT__task_s2_bits_meta_alias 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_meta_alias;
                vlSelfRef.__PVT__task_s2_bits_meta_prefetch 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_meta_prefetch;
                vlSelfRef.__PVT__task_s2_bits_meta_prefetchSrc 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_meta_prefetchSrc;
                vlSelfRef.__PVT__task_s2_bits_meta_accessed 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_meta_accessed;
                vlSelfRef.__PVT__task_s2_bits_metaWen 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_metaWen;
                vlSelfRef.__PVT__task_s2_bits_tagWen 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_tagWen;
                vlSelfRef.__PVT__task_s2_bits_dsWen 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_dsWen;
                vlSelfRef.__PVT__task_s2_bits_replTask 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_replTask;
                vlSelfRef.__Vdly__task_s2_bits_reqSource 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_reqSource;
                vlSelfRef.__PVT__task_s2_bits_mergeA 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_mergeA;
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_dirty 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_dirty;
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_state 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_state;
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_clients 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_clients;
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_alias 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_alias;
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetch 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_prefetch;
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetchSrc 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_prefetchSrc;
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_accessed 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_accessed;
                vlSelfRef.__PVT__task_s2_bits_snpHitRelease 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_snpHitRelease;
                vlSelfRef.__PVT__task_s2_bits_snpHitReleaseIdx 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_snpHitReleaseIdx;
            } else {
                if ((1U & (IData)(vlSelfRef.__PVT__sinkValids))) {
                    vlSelfRef.__Vdly__task_s2_bits_channel 
                        = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_channel;
                    vlSelfRef.__PVT__task_s2_bits_set 
                        = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_set;
                    vlSelfRef.__PVT__task_s2_bits_tag 
                        = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_tag;
                    if ((3U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.__PVT__taskArb_io_chosen))) {
                        vlSelfRef.__Vdly__task_s2_bits_off 
                            = (1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_3_off));
                        vlSelfRef.__Vdly__task_s2_bits_param 
                            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_3_param;
                    } else if ((2U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.__PVT__taskArb_io_chosen))) {
                        vlSelfRef.__Vdly__task_s2_bits_off 
                            = (1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_2_off));
                        vlSelfRef.__Vdly__task_s2_bits_param 
                            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_2_param;
                    } else if ((1U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.__PVT__taskArb_io_chosen))) {
                        vlSelfRef.__Vdly__task_s2_bits_off 
                            = (1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_1_off));
                        vlSelfRef.__Vdly__task_s2_bits_param 
                            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_1_param;
                    } else {
                        vlSelfRef.__Vdly__task_s2_bits_off 
                            = (1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_0_off));
                        vlSelfRef.__Vdly__task_s2_bits_param 
                            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_0_param;
                    }
                    vlSelfRef.__PVT__task_s2_bits_alias = 0U;
                    vlSelfRef.__Vdly__task_s2_bits_opcode 
                        = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_opcode;
                    vlSelfRef.__Vdly__task_s2_bits_sourceId 
                        = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_sourceId;
                    vlSelfRef.__PVT__task_s2_bits_mshrId = 0U;
                    vlSelfRef.__PVT__task_s2_bits_meta_state = 0U;
                    vlSelfRef.__PVT__task_s2_bits_meta_alias = 0U;
                    vlSelfRef.__PVT__task_s2_bits_meta_prefetchSrc = 0U;
                    vlSelfRef.__Vdly__task_s2_bits_reqSource = 0U;
                    vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_state = 0U;
                    vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_alias = 0U;
                    vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetchSrc = 0U;
                    vlSelfRef.__PVT__task_s2_bits_snpHitReleaseIdx = 0U;
                } else {
                    vlSelfRef.__Vdly__task_s2_bits_channel 
                        = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel;
                    vlSelfRef.__PVT__task_s2_bits_set 
                        = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set;
                    vlSelfRef.__PVT__task_s2_bits_tag 
                        = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag;
                    if (vlSelfRef.__PVT___sinkValids_T_3) {
                        vlSelfRef.__Vdly__task_s2_bits_off 
                            = (1U & vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__ram_address
                               [vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__deq_ptr_value]);
                        vlSelfRef.__PVT__task_s2_bits_alias = 0U;
                        vlSelfRef.__Vdly__task_s2_bits_param 
                            = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__ram_param
                            [vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__deq_ptr_value];
                        vlSelfRef.__PVT__task_s2_bits_meta_state = 0U;
                        vlSelfRef.__PVT__task_s2_bits_meta_alias = 0U;
                        vlSelfRef.__PVT__task_s2_bits_meta_prefetchSrc = 0U;
                        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_state = 0U;
                        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_alias = 0U;
                        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetchSrc = 0U;
                        vlSelfRef.__PVT__task_s2_bits_snpHitReleaseIdx = 0U;
                    } else {
                        vlSelfRef.__Vdly__task_s2_bits_off 
                            = (1U & ((1U & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow))) 
                                     && vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_off
                                     [0U]));
                        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow) {
                            vlSelfRef.__PVT__task_s2_bits_alias = 0U;
                            vlSelfRef.__Vdly__task_s2_bits_param 
                                = vlSymsp->TOP.io_topInputNeedT_0;
                            vlSelfRef.__PVT__task_s2_bits_meta_state = 0U;
                            vlSelfRef.__PVT__task_s2_bits_meta_alias = 0U;
                            vlSelfRef.__PVT__task_s2_bits_meta_prefetchSrc = 0U;
                            vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_state = 0U;
                            vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_alias = 0U;
                            vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetchSrc = 0U;
                            vlSelfRef.__PVT__task_s2_bits_snpHitReleaseIdx = 0U;
                        } else {
                            vlSelfRef.__PVT__task_s2_bits_alias 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_alias
                                [0U];
                            vlSelfRef.__Vdly__task_s2_bits_param 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_param
                                [0U];
                            vlSelfRef.__PVT__task_s2_bits_meta_state 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_meta_state
                                [0U];
                            vlSelfRef.__PVT__task_s2_bits_meta_alias 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_meta_alias
                                [0U];
                            vlSelfRef.__PVT__task_s2_bits_meta_prefetchSrc 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_meta_prefetchSrc
                                [0U];
                            vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_state 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_state
                                [0U];
                            vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_alias 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_alias
                                [0U];
                            vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetchSrc 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_prefetchSrc
                                [0U];
                            vlSelfRef.__PVT__task_s2_bits_snpHitReleaseIdx 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_snpHitReleaseIdx
                                [0U];
                        }
                    }
                    vlSelfRef.__Vdly__task_s2_bits_opcode 
                        = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode;
                    vlSelfRef.__Vdly__task_s2_bits_sourceId 
                        = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId;
                    vlSelfRef.__PVT__task_s2_bits_mshrId 
                        = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId;
                    vlSelfRef.__Vdly__task_s2_bits_reqSource 
                        = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource;
                }
                vlSelfRef.__PVT__task_s2_bits_mshrTask 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrTask));
                vlSelfRef.__Vdly__task_s2_bits_needProbeAckData 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && (1U & ((IData)(vlSelfRef.__PVT___sinkValids_T_3)
                                  ? vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__ram_data
                                 [vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__deq_ptr_value]
                                  : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                                     & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_needProbeAckData
                                     [0U]))));
                vlSelfRef.__PVT__task_s2_bits_useProbeData 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_useProbeData
                               [0U])));
                vlSelfRef.__Vdly__task_s2_bits_fromL2pft 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_fromL2pft
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_needHint 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_needHint
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_way = 
                    ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                     && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                         && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                             & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_way
                             [0U])));
                vlSelfRef.__PVT__task_s2_bits_meta_dirty 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_meta_dirty
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_meta_clients 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_meta_clients
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_meta_prefetch 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_meta_prefetch
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_meta_accessed 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_meta_accessed
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_metaWen 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_metaWen
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_tagWen 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_tagWen
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_dsWen 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_dsWen
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_replTask 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_replTask
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_mergeA 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mergeA));
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_dirty 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_dirty
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_clients 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_clients
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetch 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_prefetch
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_accessed 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_accessed
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_snpHitRelease 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_snpHitRelease
                               [0U])));
            }
        }
        if (vlSelfRef.__PVT__s0_fire) {
            vlSelfRef.__PVT__mshr_task_s1_bits_mshrRetry 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_s_retry)) 
                       & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_s_retry)) 
                                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_s_retry)) 
                                     & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_s_retry)) 
                                       & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_needProbeAckData = 0U;
            vlSelfRef.__PVT__mshr_task_s1_bits_needHint = 0U;
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_prefetch = 0U;
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_prefetchSrc = 0U;
            vlSelfRef.__PVT__mshr_task_s1_bits_snpHitRelease = 0U;
            vlSelfRef.__PVT__mshr_task_s1_bits_snpHitReleaseIdx = 0U;
            vlSelfRef.__PVT__mshr_task_s1_bits_mshrId 
                = (((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                     ? 1U : 0U) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                     ? 2U : 0U) | (
                                                   (8U 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                                    ? 3U
                                                    : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_alias 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias)
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias)
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias)
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias)
                                            : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_meta_dirty 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_meta_dirty)) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_meta_dirty)) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_meta_dirty)) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_meta_dirty)))));
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_dirty 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_meta_dirty)) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_meta_dirty)) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_meta_dirty)) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_meta_dirty)))));
            vlSelfRef.__PVT__mshr_task_s1_bits_mshrTask 
                = (IData)((0U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH)));
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_clients 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)))));
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_accessed 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)))));
            vlSelfRef.__PVT__mshr_task_s1_bits_alias 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_grant_task_aliasFinal)
                          : 0U) : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_grant_task_aliasFinal)
                                              : 0U)
                                          : 0U)) | 
                   (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_grant_task_aliasFinal)
                          : 0U) : 0U) | ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_grant_task_aliasFinal)
                                              : 0U)
                                          : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_state 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((1U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_promoteT) 
                                    | ((~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112) 
                                           >> 2U)) 
                                       | (((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112)) 
                                           & (1U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_113))) 
                                          | (((6U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112)) 
                                              | (7U 
                                                 == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112))) 
                                             & (0U 
                                                != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_113)))))))
                              ? 2U : 1U) : 0U) : 0U) 
                    | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                        ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                            ? ((1U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_promoteT) 
                                      | ((~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112) 
                                             >> 2U)) 
                                         | (((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112)) 
                                             & (1U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_113))) 
                                            | (((6U 
                                                 == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112)) 
                                                | (7U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112))) 
                                               & (0U 
                                                  != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_113)))))))
                                ? 2U : 1U) : 0U) : 0U)) 
                   | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                        ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                            ? ((1U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_promoteT) 
                                      | ((~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112) 
                                             >> 2U)) 
                                         | (((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112)) 
                                             & (1U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_113))) 
                                            | (((6U 
                                                 == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112)) 
                                                | (7U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112))) 
                                               & (0U 
                                                  != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_113)))))))
                                ? 2U : 1U) : 0U) : 0U) 
                      | ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                              ? ((1U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_promoteT) 
                                        | ((~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112) 
                                               >> 2U)) 
                                           | (((5U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112)) 
                                               & (1U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_113))) 
                                              | (((6U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112)) 
                                                  | (7U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112))) 
                                                 & (0U 
                                                    != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_113)))))))
                                  ? 2U : 1U) : 0U) : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_metaWen 
                = (1U & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                          & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)) 
                             | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                         | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                              >> 1U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)) 
                                        | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                            | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                 >> 2U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)) 
                                           | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                               | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                   >> 3U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)) 
                                             | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_mergeA 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                       & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid) 
                          | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mergeA)))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                  & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid) 
                                     | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mergeA)))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid) 
                                        | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mergeA)))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                       & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid) 
                                          | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mergeA)))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_meta_alias 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_grant_task_aliasFinal)
                          : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)
                              ? 0U : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_alias)))
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                    ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_grant_task_aliasFinal)
                                    : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)
                                        ? 0U : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_alias)))
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_grant_task_aliasFinal)
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)
                                                    ? 0U
                                                    : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_alias)))
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_grant_task_aliasFinal)
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)
                                                    ? 0U
                                                    : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_alias)))
                                            : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_tagWen 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit)) 
                       & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit)) 
                                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit)) 
                                     & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit)) 
                                       & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_replTask 
                = (1U & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                              ? (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit))
                              : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid))) 
                         | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                              >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                         ? (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit))
                                         : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid))) 
                            | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                 >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                            ? (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit))
                                            : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid))) 
                               | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                   >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit))
                                              : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_way 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_way)) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_way)) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_way)) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_way)))));
            vlSelfRef.__PVT__mshr_task_s1_bits_reqSource 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_reqSource)
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_reqSource)
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_reqSource)
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_reqSource)
                                            : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_meta_prefetchSrc 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((8U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_reqSource))
                              ? 2U : ((9U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_reqSource))
                                       ? 3U : ((0xaU 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_reqSource))
                                                ? 1U
                                                : (
                                                   (0xdU 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_reqSource))
                                                    ? 6U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_reqSource))
                                                     ? 4U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_reqSource))
                                                      ? 5U
                                                      : 0U))))))
                          : 0U) : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? ((8U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_reqSource))
                                                  ? 2U
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_reqSource))
                                                   ? 3U
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_reqSource))
                                                    ? 1U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_reqSource))
                                                     ? 6U
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_reqSource))
                                                      ? 4U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_reqSource))
                                                       ? 5U
                                                       : 0U))))))
                                              : 0U)
                                          : 0U)) | 
                   (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((8U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_reqSource))
                              ? 2U : ((9U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_reqSource))
                                       ? 3U : ((0xaU 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_reqSource))
                                                ? 1U
                                                : (
                                                   (0xdU 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_reqSource))
                                                    ? 6U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_reqSource))
                                                     ? 4U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_reqSource))
                                                      ? 5U
                                                      : 0U))))))
                          : 0U) : 0U) | ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? ((8U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_reqSource))
                                                  ? 2U
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_reqSource))
                                                   ? 3U
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_reqSource))
                                                    ? 1U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_reqSource))
                                                     ? 6U
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_reqSource))
                                                      ? 4U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_reqSource))
                                                       ? 5U
                                                       : 0U))))))
                                              : 0U)
                                          : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_sourceId 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_sourceId)
                          : 0U) : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_sourceId)
                                              : 0U)
                                          : 0U)) | 
                   (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_sourceId)
                          : 0U) : 0U) | ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_sourceId)
                                              : 0U)
                                          : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_fromL2pft 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                       & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_fromL2pft))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_fromL2pft))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                     & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_fromL2pft))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                       & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_fromL2pft))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_off 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                        ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_off)
                        : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)) 
                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_off)))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                   ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_off)
                                   : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)) 
                                      & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_off)))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_off)
                                      : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_off)))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                        ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_off)
                                        : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)) 
                                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_off)))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_meta_accessed 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                        ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___req_promoteT_T)
                        : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)) 
                           & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param)) 
                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_accessed))))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                   ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___req_promoteT_T)
                                   : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)) 
                                      & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param)) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_accessed))))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___req_promoteT_T)
                                      : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)) 
                                         & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param)) 
                                            & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_accessed))))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                        ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___req_promoteT_T)
                                        : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)) 
                                           & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param)) 
                                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_accessed))))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_param 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___mp_grant_task_mp_grant_param_T)
                              ? 0U : ((1U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param))
                                       ? 0U : ((2U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param))
                                                ? 0U
                                                : (
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_promoteT)
                                                     ? 0U
                                                     : 1U)
                                                    : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param)))))
                          : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)
                              ? ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_state))
                                  ? 1U : 2U) : (((2U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                  ? 2U
                                                  : 0U) 
                                                | ((6U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                    ? 1U
                                                    : 0U))))
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                    ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___mp_grant_task_mp_grant_param_T)
                                        ? 0U : ((1U 
                                                 == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param))
                                                  ? 0U
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_promoteT)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param)))))
                                    : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)
                                        ? ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_state))
                                            ? 1U : 2U)
                                        : (((2U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                             ? 2U : 0U) 
                                           | ((6U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                               ? 1U
                                               : 0U))))
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___mp_grant_task_mp_grant_param_T)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param))
                                                      ? 0U
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param))
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_promoteT)
                                                        ? 0U
                                                        : 1U)
                                                       : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param)))))
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_state))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                      ? 2U
                                                      : 0U) 
                                                    | ((6U 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                        ? 1U
                                                        : 0U))))
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___mp_grant_task_mp_grant_param_T)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param))
                                                      ? 0U
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param))
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_promoteT)
                                                        ? 0U
                                                        : 1U)
                                                       : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param)))))
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_state))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                      ? 2U
                                                      : 0U) 
                                                    | ((6U 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                        ? 1U
                                                        : 0U))))
                                            : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_channel 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_channel)
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_channel)
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_channel)
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_channel)
                                            : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_useProbeData 
                = (1U & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                              ? (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit) 
                                  & (4U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))) 
                                 | ((~ ((1U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_state)) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_needT))) 
                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_aliasTask)))
                              : (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)))) 
                         | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                              >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                         ? (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit) 
                                             & (4U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))) 
                                            | ((~ (
                                                   (1U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_state)) 
                                                   & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_needT))) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_aliasTask)))
                                         : (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)))) 
                            | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                 >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                            ? (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit) 
                                                & (4U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))) 
                                               | ((~ 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_state)) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_needT))) 
                                                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_aliasTask)))
                                            : (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)))) 
                               | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                   >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit) 
                                                  & (4U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))) 
                                                 | ((~ 
                                                     ((1U 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_state)) 
                                                      & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_needT))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_aliasTask)))
                                              : (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid))))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_meta_clients 
                = (1U & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                              ? ((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                                  ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit) 
                                     & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_clients))
                                  : (~ ((4U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode)) 
                                        & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit)) 
                                           | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_clients)) 
                                              | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__probeGotN))))))
                              : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)) 
                                 & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__probeGotN))))) 
                         | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                              >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                         ? ((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                             ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit) 
                                                & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_clients))
                                             : (~ (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode)) 
                                                   & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit)) 
                                                      | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_clients)) 
                                                         | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__probeGotN))))))
                                         : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)) 
                                            & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__probeGotN))))) 
                            | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                 >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                            ? ((5U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit) 
                                                   & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_clients))
                                                : (~ 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode)) 
                                                    & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit)) 
                                                       | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_clients)) 
                                                          | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__probeGotN))))))
                                            : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)) 
                                               & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__probeGotN))))) 
                               | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                   >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? ((5U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit) 
                                                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_clients))
                                                  : 
                                                 (~ 
                                                  ((4U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode)) 
                                                   & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit)) 
                                                      | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_clients)) 
                                                         | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__probeGotN))))))
                                              : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)) 
                                                 & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__probeGotN)))))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_dsWen 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                        ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__gotGrantData) 
                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__probeDirty) 
                              & ((4U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode)) 
                                 | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_aliasTask))))
                        : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid) 
                           | ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param)) 
                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__probeDirty))))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                   ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__gotGrantData) 
                                      | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__probeDirty) 
                                         & ((4U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode)) 
                                            | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_aliasTask))))
                                   : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid) 
                                      | ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param)) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__probeDirty))))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__gotGrantData) 
                                         | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__probeDirty) 
                                            & ((4U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode)) 
                                               | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_aliasTask))))
                                      : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid) 
                                         | ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param)) 
                                            & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__probeDirty))))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                        ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__gotGrantData) 
                                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__probeDirty) 
                                              & ((4U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode)) 
                                                 | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_aliasTask))))
                                        : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid) 
                                           | ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param)) 
                                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__probeDirty))))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_opcode 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((7U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                              ? 4U : ((6U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                                       ? 5U : ((5U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                                                ? 2U
                                                : (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                                                    ? 1U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                                                      ? 1U
                                                      : 0U))))))
                          : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)
                              ? 7U : ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_dirty) 
                                        & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_state) 
                                           >> 1U)) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__probeDirty) 
                                          | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_needProbeAckData)))
                                       ? 5U : 4U)))
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                    ? ((7U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                                 ? 5U
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                                  ? 2U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                                     ? 1U
                                                     : 0U))))))
                                    : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)
                                        ? 7U : ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_dirty) 
                                                  & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_state) 
                                                     >> 1U)) 
                                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__probeDirty) 
                                                    | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_needProbeAckData)))
                                                 ? 5U
                                                 : 4U)))
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (
                                                   (7U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                    ? 4U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                      ? 2U
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                       ? 1U
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                        ? 1U
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                         ? 1U
                                                         : 0U))))))
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)
                                                    ? 7U
                                                    : 
                                                   ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_dirty) 
                                                      & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_state) 
                                                         >> 1U)) 
                                                     | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__probeDirty) 
                                                        | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_needProbeAckData)))
                                                     ? 5U
                                                     : 4U)))
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (
                                                   (7U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                    ? 4U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                      ? 2U
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                       ? 1U
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                        ? 1U
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                         ? 1U
                                                         : 0U))))))
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)
                                                    ? 7U
                                                    : 
                                                   ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_dirty) 
                                                      & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_state) 
                                                         >> 1U)) 
                                                     | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__probeDirty) 
                                                        | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_needProbeAckData)))
                                                     ? 5U
                                                     : 4U)))
                                            : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_meta_prefetch 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                        ? ((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode)) 
                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit) 
                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_prefetch)))
                        : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)) 
                           & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param)) 
                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_prefetch))))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                   ? ((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode)) 
                                      | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_prefetch)))
                                   : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)) 
                                      & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param)) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_prefetch))))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? ((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode)) 
                                         | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit) 
                                            & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_prefetch)))
                                      : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)) 
                                         & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param)) 
                                            & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_prefetch))))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                        ? ((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode)) 
                                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit) 
                                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_prefetch)))
                                        : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)) 
                                           & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param)) 
                                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_prefetch))))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_meta_state 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((4U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                              ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit)
                                  ? ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_state))
                                      ? 3U : 1U) : 
                                 ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_promoteT)
                                   ? 3U : 1U)) : (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_promoteT) 
                                                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_needT))
                                                   ? 
                                                  ((5U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                                                    ? 3U
                                                    : 2U)
                                                   : 1U))
                          : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)
                              ? 0U : ((2U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param))
                                       ? 0U : ((1U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param))
                                                ? 1U
                                                : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_state)))))
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                    ? ((4U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                        ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit)
                                            ? ((2U 
                                                & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_state))
                                                ? 3U
                                                : 1U)
                                            : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_promoteT)
                                                ? 3U
                                                : 1U))
                                        : (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_promoteT) 
                                            | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_needT))
                                            ? ((5U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                                ? 3U
                                                : 2U)
                                            : 1U)) : 
                                   ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)
                                     ? 0U : ((2U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param))
                                              ? 0U : 
                                             ((1U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param))
                                               ? 1U
                                               : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_state)))))
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit)
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_state))
                                                      ? 3U
                                                      : 1U)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_promoteT)
                                                      ? 3U
                                                      : 1U))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_promoteT) 
                                                     | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_needT))
                                                     ? 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                      ? 3U
                                                      : 2U)
                                                     : 1U))
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param))
                                                      ? 1U
                                                      : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_state)))))
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit)
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_state))
                                                      ? 3U
                                                      : 1U)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_promoteT)
                                                      ? 3U
                                                      : 1U))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_promoteT) 
                                                     | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_needT))
                                                     ? 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                      ? 3U
                                                      : 2U)
                                                     : 1U))
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param))
                                                      ? 1U
                                                      : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_state)))))
                                            : 0U)));
        }
    }
    __Vdly__mshr_task_s1_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (((IData)(vlSelfRef.__PVT__mshr_task_s1_valid) 
                                       & (~ (IData)(vlSelfRef.io_taskInfo_s1_valid))) 
                                      | (IData)(vlSelfRef.__PVT__s0_fire)));
    vlSelfRef.__PVT__mshr_task_s1_bits_tag = vlSelfRef.__Vdly__mshr_task_s1_bits_tag;
    vlSelfRef.__PVT__mshr_task_s1_bits_set = vlSelfRef.__Vdly__mshr_task_s1_bits_set;
    vlSelfRef.__PVT__mshr_task_s1_valid = __Vdly__mshr_task_s1_valid;
    vlSelfRef.__PVT___s1_needs_replRead_T_9 = ((2U 
                                                == (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_opcode)) 
                                               & (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_dsWen));
    vlSelfRef.io_dirRead_s1_bits_refill = ((IData)(vlSelfRef.__PVT__mshr_task_s1_valid) 
                                           & ((IData)(vlSelfRef.__PVT__mshr_task_s1_bits_channel) 
                                              & ((IData)(vlSelfRef.__PVT__mshr_task_s1_bits_replTask) 
                                                 & ((2U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__mshr_task_s1_bits_opcode) 
                                                         >> 1U))) 
                                                    | ((1U 
                                                        == (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_opcode)) 
                                                       | (IData)(vlSelfRef.__PVT___s1_needs_replRead_T_9))))));
}

VL_INLINE_OPT void VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__2(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__next_counter_23 = (vlSelfRef.__PVT__counter_23 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid) 
                                                           & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)))));
    vlSelfRef.__PVT__next_counter_24 = (vlSelfRef.__PVT__counter_24 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid) 
                                                           & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)))));
    vlSelfRef.__PVT__task_s2_bits_reqSource = vlSelfRef.__Vdly__task_s2_bits_reqSource;
    vlSelfRef.__PVT__task_s2_bits_sourceId = vlSelfRef.__Vdly__task_s2_bits_sourceId;
    vlSelfRef.__PVT__task_s2_bits_fromL2pft = vlSelfRef.__Vdly__task_s2_bits_fromL2pft;
    vlSelfRef.__PVT__task_s2_bits_off = vlSelfRef.__Vdly__task_s2_bits_off;
    vlSelfRef.__PVT__task_s2_bits_channel = vlSelfRef.__Vdly__task_s2_bits_channel;
    vlSelfRef.__PVT__task_s2_bits_needProbeAckData 
        = vlSelfRef.__Vdly__task_s2_bits_needProbeAckData;
    vlSelfRef.__PVT__task_s2_bits_param = vlSelfRef.__Vdly__task_s2_bits_param;
    vlSelfRef.__PVT__task_s2_bits_opcode = vlSelfRef.__Vdly__task_s2_bits_opcode;
    vlSelfRef.__PVT__next_counter_14 = (vlSelfRef.__PVT__counter_14 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockB_s1) 
                                                           & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
    vlSelfRef.__PVT__mshrTask_s2_a_upwards = ((IData)(vlSelfRef.__PVT__task_s2_bits_channel) 
                                              & ((5U 
                                                  == (IData)(vlSelfRef.__PVT__task_s2_bits_opcode)) 
                                                 | (((4U 
                                                      == (IData)(vlSelfRef.__PVT__task_s2_bits_opcode)) 
                                                     | (1U 
                                                        == (IData)(vlSelfRef.__PVT__task_s2_bits_opcode))) 
                                                    | ((2U 
                                                        == (IData)(vlSelfRef.__PVT__task_s2_bits_opcode)) 
                                                       & (IData)(vlSelfRef.__PVT__task_s2_bits_dsWen)))));
    vlSelfRef.__PVT__task_s2_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelfRef.io_taskInfo_s1_valid));
    vlSelfRef.__PVT__mshrTask_s2 = ((IData)(vlSelfRef.__PVT__task_s2_bits_mshrTask) 
                                    & (IData)(vlSelfRef.__PVT__task_s2_valid));
    vlSelfRef.__PVT___sameSet_s2_T_2 = ((IData)(vlSelfRef.__PVT__task_s2_valid) 
                                        & (IData)(vlSelfRef.__PVT__task_s2_bits_channel));
    vlSelfRef.io_releaseBufRead_s2_valid = ((IData)(vlSelfRef.__PVT__mshrTask_s2) 
                                            & ((7U 
                                                == (IData)(vlSelfRef.__PVT__task_s2_bits_opcode)) 
                                               | ((((IData)(vlSelfRef.__PVT__task_s2_bits_channel) 
                                                    >> 1U) 
                                                   & (5U 
                                                      == (IData)(vlSelfRef.__PVT__task_s2_bits_opcode))) 
                                                  | ((IData)(vlSelfRef.__PVT__mshrTask_s2_a_upwards) 
                                                     & (IData)(vlSelfRef.__PVT__task_s2_bits_useProbeData)))));
}

VL_INLINE_OPT void VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__3(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___sinkValids_T;
    __PVT___sinkValids_T = 0;
    // Body
    vlSelfRef.__PVT__next_counter_11 = (vlSelfRef.__PVT__counter_11 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockB_s1) 
                                                           & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
    vlSelfRef.__PVT__next_counter_12 = (vlSelfRef.__PVT__counter_12 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockC_s1) 
                                                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid)))));
    vlSelfRef.__PVT__next_counter_15 = (vlSelfRef.__PVT__counter_15 
                                        + (QData)((IData)(
                                                          ((4U 
                                                            <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkReq_T_36)) 
                                                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid)))));
    __PVT___sinkValids_T = (1U & (~ ((4U <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkReq_T_36)) 
                                     | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockC_s1))));
    vlSelfRef.io_mshrTask_ready = (1U & ((~ ((3U <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkReq_T_36)) 
                                             | ((3U 
                                                 <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceWaitSinkEForSinkReq_T_30)) 
                                                | (9U 
                                                   <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkPft_T_24))))) 
                                         & (~ ((IData)(vlSelfRef.io_dirRead_s1_bits_refill) 
                                               | ((IData)(vlSelfRef.__PVT__ds_mcp2_stall) 
                                                  & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid))))));
    vlSelfRef.__PVT__sink_ready_basic = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready) 
                                         & ((IData)(vlSelfRef.__PVT__resetFinish) 
                                            & ((~ (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)) 
                                               & (~ (IData)(vlSelfRef.__PVT__ds_mcp2_stall)))));
    vlSelfRef.__PVT__next_counter_9 = (vlSelfRef.__PVT__counter_9 
                                       + (QData)((IData)(
                                                         ((4U 
                                                           <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                                          & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
    vlSelfRef.__PVT___sinkValids_T_2 = (1U & (~ ((4U 
                                                  <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockB_s1) 
                                                    | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockB_s1) 
                                                       | (4U 
                                                          <= 
                                                          (7U 
                                                           & ((3U 
                                                               & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sourceC__DOT___noSpaceForSinkBReq_T_5) 
                                                                  + 
                                                                  VL_SHIFTR_III(2,2,32, 
                                                                                (((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_valid) 
                                                                                & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_mshrTask)) 
                                                                                | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT___isC_s3_T))) 
                                                                                << 1U) 
                                                                                & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                                                << 1U) 
                                                                                | (0xfffffffeU 
                                                                                & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel)))) 
                                                                                | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sourceC__DOT___noSpaceForSinkBReq_T_5)), 1U))) 
                                                              + 
                                                              ((3U 
                                                                & ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_valid) 
                                                                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__isC_s4) 
                                                                        | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__pendingC_s4))) 
                                                                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_channel) 
                                                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_channel) 
                                                                          >> 1U))) 
                                                                   + 
                                                                   ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_status_vec_toC_2_valid) 
                                                                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_channel) 
                                                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_channel) 
                                                                          >> 1U))))) 
                                                               + 
                                                               ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sourceC__DOT__queue__DOT__maybe_full) 
                                                                  & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sourceC__DOT__queue__DOT__ptr_match))
                                                                  ? 4U
                                                                  : 0U) 
                                                                | (3U 
                                                                   & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sourceC__DOT__queue__DOT__enq_ptr_value) 
                                                                      - (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)))))))))))));
    vlSelfRef.__PVT___sinkValids_T_4 = (1U & (~ ((3U 
                                                  <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                                 | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockA_s1))));
    vlSelfRef.__PVT___sinkValids_T_1 = ((IData)(__PVT___sinkValids_T) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid));
    vlSelfRef.__PVT__next_counter_1 = (vlSelfRef.__PVT__counter_1 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_mshrTask_ready)) 
                                                          & (0U 
                                                             != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__valids))))));
    vlSelfRef.__PVT__s0_fire = ((0U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__valids)) 
                                & (IData)(vlSelfRef.io_mshrTask_ready));
    vlSelfRef.io_sinkC_ready = ((IData)(__PVT___sinkValids_T) 
                                & (IData)(vlSelfRef.__PVT__sink_ready_basic));
    vlSelfRef.__PVT___sinkValids_T_3 = ((IData)(vlSelfRef.__PVT___sinkValids_T_2) 
                                        & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid));
    vlSelfRef.__PVT__next_counter_18 = (vlSelfRef.__PVT__counter_18 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_1)))));
    vlSelfRef.__PVT__next_counter_21 = (vlSelfRef.__PVT__counter_21 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid) 
                                                           & ((IData)(vlSelfRef.__PVT__sink_ready_basic) 
                                                              & ((IData)(vlSelfRef.__PVT___sinkValids_T_2) 
                                                                 & (IData)(vlSelfRef.__PVT___sinkValids_T_1)))))));
    vlSelfRef.io_sinkB_ready = ((IData)(vlSelfRef.__PVT__sink_ready_basic) 
                                & ((IData)(vlSelfRef.__PVT___sinkValids_T_2) 
                                   & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_1))));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(vlSelfRef.__PVT__s0_fire)));
    vlSelfRef.__PVT__next_counter_7 = (vlSelfRef.__PVT__counter_7 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_sinkC_ready)) 
                                                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid)))));
    vlSelfRef.__PVT___io_s1Entrance_valid_T_2 = ((IData)(vlSelfRef.io_sinkC_ready) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid));
    vlSelfRef.__PVT__next_counter_17 = (vlSelfRef.__PVT__counter_17 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_3)))));
    vlSelfRef.__PVT__next_counter_6 = (vlSelfRef.__PVT__counter_6 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_sinkB_ready)) 
                                                          & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
    vlSelfRef.__PVT___io_s1Entrance_valid_T_4 = ((IData)(vlSelfRef.io_sinkB_ready) 
                                                 & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid));
    vlSelfRef.__PVT__next_counter_4 = (vlSelfRef.__PVT__counter_4 
                                       + (QData)((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_2)));
    vlSelfRef.io_s1Entrance_bits_set = (((IData)(vlSelfRef.__PVT__mshr_task_s1_bits_metaWen) 
                                         & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid))
                                         ? (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_set)
                                         : ((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_2)
                                             ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_set)
                                             : (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_bits_set)));
    vlSelfRef.__PVT__next_counter_3 = (vlSelfRef.__PVT__counter_3 
                                       + (QData)((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_4)));
    vlSelfRef.io_s1Entrance_valid = (((IData)(vlSelfRef.__PVT__mshr_task_s1_valid) 
                                      & ((~ (IData)(vlSelfRef.__PVT__ds_mcp2_stall)) 
                                         & (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_metaWen))) 
                                     | ((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_2) 
                                        | (IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_4)));
}

VL_INLINE_OPT void VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__4(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___sameSetCnt_T_4;
    __PVT___sameSetCnt_T_4 = 0;
    // Body
    if (vlSelfRef.__PVT___sinkValids_T_3) {
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag 
            = (7U & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_bits_tag));
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_sourceId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel = 2U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode 
            = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__ram_opcode
            [vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__deq_ptr_value];
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set 
            = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_bits_set;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow) {
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag 
                = (7U & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                         >> 2U));
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_sourceId = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__prefetcher__DOT__reqSource;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel = 1U;
        } else {
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_mshrId
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_reqSource
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag 
                = (7U & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_tag
                   [0U]);
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_sourceId 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_sourceId
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_opcode
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_channel
                [0U];
        }
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode 
            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_opcode;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set 
            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set;
    }
    vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mergeA 
        = ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_mergeA
               [0U]));
    vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrTask 
        = ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_mshrTask
               [0U]));
    vlSelfRef.__PVT__next_counter_8 = (vlSelfRef.__PVT__counter_8 
                                       + (QData)((IData)(
                                                         ((3U 
                                                           <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid)))));
    vlSelfRef.__PVT__next_counter_22 = (vlSelfRef.__PVT__counter_22 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid) 
                                                           & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)))));
    vlSelfRef.__PVT__next_counter_13 = (vlSelfRef.__PVT__counter_13 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockA_s1) 
                                                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid)))));
    vlSelfRef.__PVT___sinkValids_T_5 = ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid));
    vlSelfRef.__PVT___T_77 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid) 
                              & ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                 & (IData)(vlSelfRef.__PVT__sink_ready_basic)));
    __PVT___sameSetCnt_T_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                              & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_channel)));
    if (vlSelfRef.__PVT__mshr_task_s1_valid) {
        vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode 
            = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_opcode;
        vlSelfRef.io_taskInfo_s1_bits_mergeA = vlSelfRef.__PVT__mshr_task_s1_bits_mergeA;
        vlSelfRef.io_taskInfo_s1_bits_mshrTask = vlSelfRef.__PVT__mshr_task_s1_bits_mshrTask;
        vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
            = vlSelfRef.__PVT__mshr_task_s1_bits_channel;
        vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
            = vlSelfRef.__PVT__mshr_task_s1_bits_opcode;
        vlSelfRef.io_dirRead_s1_bits_set = vlSelfRef.__PVT__mshr_task_s1_bits_set;
    } else {
        if (vlSelfRef.__PVT___sinkValids_T_1) {
            vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode = 0U;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_channel;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_opcode;
            vlSelfRef.io_dirRead_s1_bits_set = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_set;
        } else {
            vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode;
            vlSelfRef.io_dirRead_s1_bits_set = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set;
        }
        vlSelfRef.io_taskInfo_s1_bits_mergeA = ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_1))) 
                                                && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mergeA));
        vlSelfRef.io_taskInfo_s1_bits_mshrTask = ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_1))) 
                                                  && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrTask));
    }
    vlSelfRef.__PVT__next_counter_16 = (vlSelfRef.__PVT__counter_16 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_5)))));
    vlSelfRef.__PVT__next_counter_20 = (vlSelfRef.__PVT__counter_20 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_77) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_1)))));
    vlSelfRef.__PVT__next_counter_19 = (vlSelfRef.__PVT__counter_19 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_77) 
                                                           & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_1)) 
                                                              & (IData)(vlSelfRef.__PVT___sinkValids_T_3))))));
    vlSelfRef.__PVT___sinkValids_T_6 = (2U > (7U & 
                                              ((3U 
                                                & ((IData)(__PVT___sameSetCnt_T_4) 
                                                   + 
                                                   (VL_SHIFTR_III(2,2,32, 
                                                                  ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                                     & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set) 
                                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_channel))) 
                                                                    << 1U) 
                                                                   | (IData)(__PVT___sameSetCnt_T_4)), 1U) 
                                                    + 
                                                    ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                     & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set) 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_channel)))))) 
                                               + (3U 
                                                  & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                      & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set) 
                                                          == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_channel))) 
                                                     + 
                                                     (((IData)(vlSelfRef.__PVT___sameSet_s2_T_2) 
                                                       & ((~ (IData)(vlSelfRef.__PVT__task_s2_bits_mshrTask)) 
                                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set) 
                                                             == (IData)(vlSelfRef.__PVT__task_s2_bits_set)))) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__sameSet_s3_REG) 
                                                       & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set) 
                                                          == (IData)(vlSelfRef.__PVT__sameSet_s3_r)))))))));
    vlSelfRef.__PVT__sinkValids = ((((IData)(vlSelfRef.__PVT___sinkValids_T_6) 
                                     & (IData)(vlSelfRef.__PVT___sinkValids_T_5)) 
                                    << 2U) | (((IData)(vlSelfRef.__PVT___sinkValids_T_3) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT___sinkValids_T_1)));
    vlSelfRef.io_sinkA_ready = ((IData)(vlSelfRef.__PVT__sink_ready_basic) 
                                & ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                   & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_3)) 
                                      & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_1)) 
                                         & (IData)(vlSelfRef.__PVT___sinkValids_T_6)))));
    vlSelfRef.__PVT__chnl_task_s1_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready) 
                                           & ((0U != (IData)(vlSelfRef.__PVT__sinkValids)) 
                                              & (IData)(vlSelfRef.__PVT__resetFinish)));
    vlSelfRef.__PVT__next_counter_5 = (vlSelfRef.__PVT__counter_5 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_sinkA_ready)) 
                                                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid)))));
    vlSelfRef.__PVT___s1_AHint_fire_T = ((IData)(vlSelfRef.io_sinkA_ready) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid));
    vlSelfRef.io_taskInfo_s1_valid = ((~ (IData)(vlSelfRef.__PVT__ds_mcp2_stall)) 
                                      & ((~ ((IData)(vlSelfRef.__PVT__mshr_task_s1_valid) 
                                             & ((IData)(vlSelfRef.io_dirRead_s1_bits_refill) 
                                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockG_s1))))) 
                                         & ((IData)(vlSelfRef.__PVT__mshr_task_s1_valid)
                                             ? (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)
                                             : (IData)(vlSelfRef.__PVT__chnl_task_s1_valid))));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_2 
                                       + (QData)((IData)(vlSelfRef.__PVT___s1_AHint_fire_T)));
}

VL_INLINE_OPT void VVerifyTop_RequestArb___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__0(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___sameSetCnt_T_4;
    __PVT___sameSetCnt_T_4 = 0;
    // Body
    if (vlSelfRef.__PVT___sinkValids_T_3) {
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag 
            = (7U & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_bits_tag));
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_sourceId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel = 2U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode 
            = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__ram_opcode
            [vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__deq_ptr_value];
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set 
            = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_bits_set;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow) {
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag 
                = (7U & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                         >> 2U));
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_sourceId = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__prefetcher__DOT__reqSource;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel = 1U;
        } else {
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_mshrId
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_reqSource
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag 
                = (7U & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_tag
                   [0U]);
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_sourceId 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_sourceId
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_opcode
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_channel
                [0U];
        }
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode 
            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_opcode;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set 
            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set;
    }
    vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mergeA 
        = ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_mergeA
               [0U]));
    vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrTask 
        = ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_mshrTask
               [0U]));
    vlSelfRef.__PVT__next_counter_8 = (vlSelfRef.__PVT__counter_8 
                                       + (QData)((IData)(
                                                         ((3U 
                                                           <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid)))));
    vlSelfRef.__PVT__next_counter_13 = (vlSelfRef.__PVT__counter_13 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockA_s1) 
                                                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid)))));
    vlSelfRef.__PVT__next_counter_22 = (vlSelfRef.__PVT__counter_22 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid) 
                                                           & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)))));
    vlSelfRef.__PVT___T_77 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid) 
                              & ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                 & (IData)(vlSelfRef.__PVT__sink_ready_basic)));
    vlSelfRef.__PVT___sinkValids_T_5 = ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid));
    __PVT___sameSetCnt_T_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                              & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_channel)));
    if (vlSelfRef.__PVT__mshr_task_s1_valid) {
        vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode 
            = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_opcode;
        vlSelfRef.io_taskInfo_s1_bits_mergeA = vlSelfRef.__PVT__mshr_task_s1_bits_mergeA;
        vlSelfRef.io_taskInfo_s1_bits_mshrTask = vlSelfRef.__PVT__mshr_task_s1_bits_mshrTask;
        vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
            = vlSelfRef.__PVT__mshr_task_s1_bits_channel;
        vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
            = vlSelfRef.__PVT__mshr_task_s1_bits_opcode;
        vlSelfRef.io_dirRead_s1_bits_set = vlSelfRef.__PVT__mshr_task_s1_bits_set;
    } else {
        if (vlSelfRef.__PVT___sinkValids_T_1) {
            vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode = 0U;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_channel;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_opcode;
            vlSelfRef.io_dirRead_s1_bits_set = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_set;
        } else {
            vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode;
            vlSelfRef.io_dirRead_s1_bits_set = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set;
        }
        vlSelfRef.io_taskInfo_s1_bits_mergeA = ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_1))) 
                                                && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mergeA));
        vlSelfRef.io_taskInfo_s1_bits_mshrTask = ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_1))) 
                                                  && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrTask));
    }
    vlSelfRef.__PVT__next_counter_20 = (vlSelfRef.__PVT__counter_20 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_77) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_1)))));
    vlSelfRef.__PVT__next_counter_19 = (vlSelfRef.__PVT__counter_19 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_77) 
                                                           & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_1)) 
                                                              & (IData)(vlSelfRef.__PVT___sinkValids_T_3))))));
    vlSelfRef.__PVT__next_counter_16 = (vlSelfRef.__PVT__counter_16 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_5)))));
    vlSelfRef.__PVT___sinkValids_T_6 = (2U > (7U & 
                                              ((3U 
                                                & ((IData)(__PVT___sameSetCnt_T_4) 
                                                   + 
                                                   (VL_SHIFTR_III(2,2,32, 
                                                                  ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                                     & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set) 
                                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_channel))) 
                                                                    << 1U) 
                                                                   | (IData)(__PVT___sameSetCnt_T_4)), 1U) 
                                                    + 
                                                    ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                     & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set) 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_channel)))))) 
                                               + (3U 
                                                  & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                      & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set) 
                                                          == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_channel))) 
                                                     + 
                                                     (((IData)(vlSelfRef.__PVT___sameSet_s2_T_2) 
                                                       & ((~ (IData)(vlSelfRef.__PVT__task_s2_bits_mshrTask)) 
                                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set) 
                                                             == (IData)(vlSelfRef.__PVT__task_s2_bits_set)))) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__sameSet_s3_REG) 
                                                       & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set) 
                                                          == (IData)(vlSelfRef.__PVT__sameSet_s3_r)))))))));
    vlSelfRef.__PVT__sinkValids = ((((IData)(vlSelfRef.__PVT___sinkValids_T_6) 
                                     & (IData)(vlSelfRef.__PVT___sinkValids_T_5)) 
                                    << 2U) | (((IData)(vlSelfRef.__PVT___sinkValids_T_3) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT___sinkValids_T_1)));
    vlSelfRef.io_sinkA_ready = ((IData)(vlSelfRef.__PVT__sink_ready_basic) 
                                & ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                   & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_3)) 
                                      & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_1)) 
                                         & (IData)(vlSelfRef.__PVT___sinkValids_T_6)))));
    vlSelfRef.__PVT__chnl_task_s1_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready) 
                                           & ((0U != (IData)(vlSelfRef.__PVT__sinkValids)) 
                                              & (IData)(vlSelfRef.__PVT__resetFinish)));
    vlSelfRef.__PVT__next_counter_5 = (vlSelfRef.__PVT__counter_5 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_sinkA_ready)) 
                                                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid)))));
    vlSelfRef.__PVT___s1_AHint_fire_T = ((IData)(vlSelfRef.io_sinkA_ready) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid));
    vlSelfRef.io_taskInfo_s1_valid = ((~ (IData)(vlSelfRef.__PVT__ds_mcp2_stall)) 
                                      & ((~ ((IData)(vlSelfRef.__PVT__mshr_task_s1_valid) 
                                             & ((IData)(vlSelfRef.io_dirRead_s1_bits_refill) 
                                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockG_s1))))) 
                                         & ((IData)(vlSelfRef.__PVT__mshr_task_s1_valid)
                                             ? (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)
                                             : (IData)(vlSelfRef.__PVT__chnl_task_s1_valid))));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_2 
                                       + (QData)((IData)(vlSelfRef.__PVT___s1_AHint_fire_T)));
}

VL_INLINE_OPT void VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__0(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__mshr_task_s1_valid;
    __Vdly__mshr_task_s1_valid = 0;
    // Body
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: mshr_req, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_timer,
                      64,(vlSelfRef.__PVT__counter 
                          + (QData)((IData)(vlSelfRef.__PVT__s0_fire))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_1_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: mshr_req_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_1_timer,
                      64,(vlSelfRef.__PVT__counter_1 
                          + (QData)((IData)(((~ (IData)(vlSelfRef.io_mshrTask_ready)) 
                                             & (0U 
                                                != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__valids)))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_req, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,(vlSelfRef.__PVT__counter_2 
                          + (QData)((IData)(vlSelfRef.__PVT___s1_AHint_fire_T))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_req, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,(vlSelfRef.__PVT__counter_3 
                          + (QData)((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_4))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_req, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,(vlSelfRef.__PVT__counter_4 
                          + (QData)((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_2))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,(vlSelfRef.__PVT__counter_5 
                          + (QData)((IData)(((~ (IData)(vlSelfRef.io_sinkA_ready)) 
                                             & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,(vlSelfRef.__PVT__counter_6 
                          + (QData)((IData)(((~ (IData)(vlSelfRef.io_sinkB_ready)) 
                                             & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_7_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_7_timer,
                      64,(vlSelfRef.__PVT__counter_7 
                          + (QData)((IData)(((~ (IData)(vlSelfRef.io_sinkC_ready)) 
                                             & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall_by_mshr, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,(vlSelfRef.__PVT__counter_8 
                          + (QData)((IData)(((3U <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                             & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_9_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_stall_by_mshr, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_9_timer,
                      64,(vlSelfRef.__PVT__counter_9 
                          + (QData)((IData)(((4U <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                             & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall_by_mainpipe, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_10);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_11_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_stall_by_mainpipe, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_11_timer,
                      64,(vlSelfRef.__PVT__counter_11 
                          + (QData)((IData)(((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockB_s1) 
                                             & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_stall_by_mainpipe, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,(vlSelfRef.__PVT__counter_12 
                          + (QData)((IData)(((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockC_s1) 
                                             & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall_by_grantbuf, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,(vlSelfRef.__PVT__counter_13 
                          + (QData)((IData)(((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockA_s1) 
                                             & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_14_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_stall_by_grantbuf, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_14_timer,
                      64,(vlSelfRef.__PVT__counter_14 
                          + (QData)((IData)(((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockB_s1) 
                                             & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_stall_by_grantbuf, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,(vlSelfRef.__PVT__counter_15 
                          + (QData)((IData)(((4U <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkReq_T_36)) 
                                             & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall_by_dir, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,(vlSelfRef.__PVT__counter_16 
                          + (QData)((IData)(((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                             & (IData)(vlSelfRef.__PVT___sinkValids_T_5))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_17_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_stall_by_dir, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_17_timer,
                      64,(vlSelfRef.__PVT__counter_17 
                          + (QData)((IData)(((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                             & (IData)(vlSelfRef.__PVT___sinkValids_T_3))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_stall_by_dir, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,(vlSelfRef.__PVT__counter_18 
                          + (QData)((IData)(((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                             & (IData)(vlSelfRef.__PVT___sinkValids_T_1))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall_by_sinkB, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,(vlSelfRef.__PVT__counter_19 
                          + (QData)((IData)(((IData)(vlSelfRef.__PVT___T_77) 
                                             & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_1)) 
                                                & (IData)(vlSelfRef.__PVT___sinkValids_T_3)))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_20_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall_by_sinkC, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_20_timer,
                      64,(vlSelfRef.__PVT__counter_20 
                          + (QData)((IData)(((IData)(vlSelfRef.__PVT___T_77) 
                                             & (IData)(vlSelfRef.__PVT___sinkValids_T_1))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_stall_by_sinkC, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,(vlSelfRef.__PVT__counter_21 
                          + (QData)((IData)(((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid) 
                                             & ((IData)(vlSelfRef.__PVT__sink_ready_basic) 
                                                & ((IData)(vlSelfRef.__PVT___sinkValids_T_2) 
                                                   & (IData)(vlSelfRef.__PVT___sinkValids_T_1))))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkA_stall_by_mshrTask, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,(vlSelfRef.__PVT__counter_22 
                          + (QData)((IData)(((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid) 
                                             & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_23_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkB_stall_by_mshrTask, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_23_timer,
                      64,(vlSelfRef.__PVT__counter_23 
                          + (QData)((IData)(((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid) 
                                             & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_24_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_stall_by_mshrTask, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_24_timer,
                      64,(vlSelfRef.__PVT__counter_24 
                          + (QData)((IData)(((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid) 
                                             & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid))))));
    }
    vlSelfRef.__Vdly__task_s2_bits_off = vlSelfRef.__PVT__task_s2_bits_off;
    vlSelfRef.__Vdly__task_s2_bits_param = vlSelfRef.__PVT__task_s2_bits_param;
    vlSelfRef.__Vdly__task_s2_bits_sourceId = vlSelfRef.__PVT__task_s2_bits_sourceId;
    vlSelfRef.__Vdly__task_s2_bits_needProbeAckData 
        = vlSelfRef.__PVT__task_s2_bits_needProbeAckData;
    vlSelfRef.__Vdly__task_s2_bits_fromL2pft = vlSelfRef.__PVT__task_s2_bits_fromL2pft;
    vlSelfRef.__Vdly__task_s2_bits_reqSource = vlSelfRef.__PVT__task_s2_bits_reqSource;
    vlSelfRef.__Vdly__task_s2_bits_opcode = vlSelfRef.__PVT__task_s2_bits_opcode;
    __Vdly__mshr_task_s1_valid = vlSelfRef.__PVT__mshr_task_s1_valid;
    vlSelfRef.__Vdly__task_s2_bits_channel = vlSelfRef.__PVT__task_s2_bits_channel;
    vlSelfRef.__Vdly__mshr_task_s1_bits_set = vlSelfRef.__PVT__mshr_task_s1_bits_set;
    vlSelfRef.__Vdly__mshr_task_s1_bits_tag = vlSelfRef.__PVT__mshr_task_s1_bits_tag;
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__mshr_task_s1_bits_set = 0U;
        vlSelfRef.__Vdly__mshr_task_s1_bits_tag = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_opcode = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_sourceId = 0U;
        vlSelfRef.__PVT__counter_10 = 0ULL;
        vlSelfRef.__PVT__counter = 0ULL;
        vlSelfRef.__PVT__counter_2 = 0ULL;
        vlSelfRef.__PVT__counter_3 = 0ULL;
        vlSelfRef.__PVT__counter_4 = 0ULL;
        vlSelfRef.__PVT__counter_1 = 0ULL;
        vlSelfRef.__PVT__counter_5 = 0ULL;
        vlSelfRef.__PVT__counter_6 = 0ULL;
        vlSelfRef.__PVT__counter_7 = 0ULL;
        vlSelfRef.__PVT__counter_8 = 0ULL;
        vlSelfRef.__PVT__counter_9 = 0ULL;
        vlSelfRef.__PVT__counter_11 = 0ULL;
        vlSelfRef.__PVT__counter_12 = 0ULL;
        vlSelfRef.__PVT__counter_13 = 0ULL;
        vlSelfRef.__PVT__counter_14 = 0ULL;
        vlSelfRef.__PVT__counter_15 = 0ULL;
        vlSelfRef.__PVT__counter_16 = 0ULL;
        vlSelfRef.__PVT__counter_17 = 0ULL;
        vlSelfRef.__PVT__counter_18 = 0ULL;
        vlSelfRef.__PVT__counter_20 = 0ULL;
        vlSelfRef.__PVT__counter_22 = 0ULL;
        vlSelfRef.__PVT__counter_23 = 0ULL;
        vlSelfRef.__PVT__counter_24 = 0ULL;
        vlSelfRef.__PVT__counter_19 = 0ULL;
        vlSelfRef.__PVT__counter_21 = 0ULL;
    } else {
        if (vlSelfRef.__PVT__s0_fire) {
            vlSelfRef.__Vdly__mshr_task_s1_bits_set 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)))));
            vlSelfRef.__Vdly__mshr_task_s1_bits_tag 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)
                          : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)
                              ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)
                              : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)))
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                    ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)
                                    : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)
                                        ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)
                                        : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)))
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)
                                                    ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)
                                                    : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)))
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)
                                                    ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)
                                                    : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)))
                                            : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_opcode 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((7U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112))
                              ? 4U : ((6U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112))
                                       ? 5U : ((5U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112))
                                                ? 2U
                                                : (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112))
                                                    ? 1U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112))
                                                      ? 1U
                                                      : 0U))))))
                          : 0U) : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? ((7U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112))
                                                  ? 4U
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112))
                                                   ? 5U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112))
                                                    ? 2U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112))
                                                     ? 1U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112))
                                                      ? 1U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112))
                                                       ? 1U
                                                       : 0U))))))
                                              : 0U)
                                          : 0U)) | 
                   (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((7U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112))
                              ? 4U : ((6U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112))
                                       ? 5U : ((5U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112))
                                                ? 2U
                                                : (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112))
                                                    ? 1U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112))
                                                      ? 1U
                                                      : 0U))))))
                          : 0U) : 0U) | ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? ((7U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112))
                                                  ? 4U
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112))
                                                   ? 5U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112))
                                                    ? 2U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112))
                                                     ? 1U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112))
                                                      ? 1U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112))
                                                       ? 1U
                                                       : 0U))))))
                                              : 0U)
                                          : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_sourceId 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid)
                              ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__prefetcher__DOT__reqSource)
                              : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_grant_task_merge_task_r_sourceId))
                          : 0U) : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid)
                                                  ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__prefetcher__DOT__reqSource)
                                                  : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_grant_task_merge_task_r_sourceId))
                                              : 0U)
                                          : 0U)) | 
                   (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid)
                              ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__prefetcher__DOT__reqSource)
                              : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_grant_task_merge_task_r_sourceId))
                          : 0U) : 0U) | ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid)
                                                  ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__prefetcher__DOT__reqSource)
                                                  : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_grant_task_merge_task_r_sourceId))
                                              : 0U)
                                          : 0U)));
        }
        vlSelfRef.__PVT__counter_10 = ((IData)(vlSelfRef.__PVT__helper_10_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_10);
        vlSelfRef.__PVT__counter = ((IData)(vlSelfRef.__PVT__helper_clean)
                                     ? 0ULL : vlSelfRef.__PVT__next_counter);
        vlSelfRef.__PVT__counter_2 = ((IData)(vlSelfRef.__PVT__helper_2_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_2);
        vlSelfRef.__PVT__counter_3 = ((IData)(vlSelfRef.__PVT__helper_3_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_3);
        vlSelfRef.__PVT__counter_4 = ((IData)(vlSelfRef.__PVT__helper_4_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_4);
        vlSelfRef.__PVT__counter_1 = ((IData)(vlSelfRef.__PVT__helper_1_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_1);
        vlSelfRef.__PVT__counter_5 = ((IData)(vlSelfRef.__PVT__helper_5_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_5);
        vlSelfRef.__PVT__counter_6 = ((IData)(vlSelfRef.__PVT__helper_6_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_6);
        vlSelfRef.__PVT__counter_7 = ((IData)(vlSelfRef.__PVT__helper_7_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_7);
        vlSelfRef.__PVT__counter_8 = ((IData)(vlSelfRef.__PVT__helper_8_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_8);
        vlSelfRef.__PVT__counter_9 = ((IData)(vlSelfRef.__PVT__helper_9_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_9);
        vlSelfRef.__PVT__counter_11 = ((IData)(vlSelfRef.__PVT__helper_11_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_11);
        vlSelfRef.__PVT__counter_12 = ((IData)(vlSelfRef.__PVT__helper_12_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_12);
        vlSelfRef.__PVT__counter_13 = ((IData)(vlSelfRef.__PVT__helper_13_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_13);
        vlSelfRef.__PVT__counter_14 = ((IData)(vlSelfRef.__PVT__helper_14_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_14);
        vlSelfRef.__PVT__counter_15 = ((IData)(vlSelfRef.__PVT__helper_15_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_15);
        vlSelfRef.__PVT__counter_16 = ((IData)(vlSelfRef.__PVT__helper_16_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_16);
        vlSelfRef.__PVT__counter_17 = ((IData)(vlSelfRef.__PVT__helper_17_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_17);
        vlSelfRef.__PVT__counter_18 = ((IData)(vlSelfRef.__PVT__helper_18_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_18);
        vlSelfRef.__PVT__counter_20 = ((IData)(vlSelfRef.__PVT__helper_20_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_20);
        vlSelfRef.__PVT__counter_22 = ((IData)(vlSelfRef.__PVT__helper_22_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_22);
        vlSelfRef.__PVT__counter_23 = ((IData)(vlSelfRef.__PVT__helper_23_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_23);
        vlSelfRef.__PVT__counter_24 = ((IData)(vlSelfRef.__PVT__helper_24_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_24);
        vlSelfRef.__PVT__counter_19 = ((IData)(vlSelfRef.__PVT__helper_19_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_19);
        vlSelfRef.__PVT__counter_21 = ((IData)(vlSelfRef.__PVT__helper_21_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_21);
    }
    vlSelfRef.__PVT__ds_mcp2_stall = ((IData)(vlSelfRef.io_taskInfo_s1_valid) 
                                      & (~ ((IData)(vlSelfRef.__PVT___s1_AHint_fire_T) 
                                            & (5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_opcode)))));
    vlSelfRef.__PVT__resetIdx = ((IData)(vlSymsp->TOP.reset) 
                                 | (IData)(vlSelfRef.__PVT___GEN_0));
    vlSelfRef.__PVT__resetFinish = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                    && (IData)(vlSelfRef.__PVT___GEN_1));
    vlSelfRef.__PVT__sameSet_s3_REG = ((IData)(vlSelfRef.__PVT___sameSet_s2_T_2) 
                                       & (~ (IData)(vlSelfRef.__PVT__task_s2_bits_mshrTask)));
    if (vlSelfRef.__PVT__task_s2_valid) {
        vlSelfRef.__PVT__sameSet_s3_r = vlSelfRef.__PVT__task_s2_bits_set;
    }
    vlSelfRef.__PVT___GEN_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__resetIdx)) 
                                     | (IData)(vlSelfRef.__PVT__resetFinish)));
    vlSelfRef.__PVT___GEN_0 = (1U & ((IData)(vlSelfRef.__PVT__resetFinish)
                                      ? (IData)(vlSelfRef.__PVT__resetIdx)
                                      : (~ (IData)(vlSelfRef.__PVT__resetIdx))));
    vlSelfRef.__PVT__next_counter_10 = vlSelfRef.__PVT__counter_10;
}

VL_INLINE_OPT void VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__1(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__mshr_task_s1_valid;
    __Vdly__mshr_task_s1_valid = 0;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__mshr_task_s1_bits_mshrRetry = 0U;
        vlSelfRef.__Vdly__task_s2_bits_channel = 0U;
        vlSelfRef.__PVT__task_s2_bits_mshrTask = 0U;
        vlSelfRef.__PVT__task_s2_bits_set = 0U;
        vlSelfRef.__PVT__task_s2_bits_tag = 0U;
        vlSelfRef.__Vdly__task_s2_bits_off = 0U;
        vlSelfRef.__PVT__task_s2_bits_alias = 0U;
        vlSelfRef.__Vdly__task_s2_bits_opcode = 0U;
        vlSelfRef.__Vdly__task_s2_bits_param = 0U;
        vlSelfRef.__Vdly__task_s2_bits_sourceId = 0U;
        vlSelfRef.__Vdly__task_s2_bits_needProbeAckData = 0U;
        vlSelfRef.__PVT__task_s2_bits_mshrId = 0U;
        vlSelfRef.__PVT__task_s2_bits_useProbeData = 0U;
        vlSelfRef.__Vdly__task_s2_bits_fromL2pft = 0U;
        vlSelfRef.__PVT__task_s2_bits_needHint = 0U;
        vlSelfRef.__PVT__task_s2_bits_way = 0U;
        vlSelfRef.__PVT__task_s2_bits_meta_dirty = 0U;
        vlSelfRef.__PVT__task_s2_bits_meta_state = 0U;
        vlSelfRef.__PVT__task_s2_bits_meta_clients = 0U;
        vlSelfRef.__PVT__task_s2_bits_meta_alias = 0U;
        vlSelfRef.__PVT__task_s2_bits_meta_prefetch = 0U;
        vlSelfRef.__PVT__task_s2_bits_meta_prefetchSrc = 0U;
        vlSelfRef.__PVT__task_s2_bits_meta_accessed = 0U;
        vlSelfRef.__PVT__task_s2_bits_metaWen = 0U;
        vlSelfRef.__PVT__task_s2_bits_tagWen = 0U;
        vlSelfRef.__PVT__task_s2_bits_dsWen = 0U;
        vlSelfRef.__PVT__task_s2_bits_replTask = 0U;
        vlSelfRef.__Vdly__task_s2_bits_reqSource = 0U;
        vlSelfRef.__PVT__task_s2_bits_mergeA = 0U;
        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_dirty = 0U;
        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_state = 0U;
        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_clients = 0U;
        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_alias = 0U;
        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetch = 0U;
        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetchSrc = 0U;
        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_accessed = 0U;
        vlSelfRef.__PVT__task_s2_bits_snpHitRelease = 0U;
        vlSelfRef.__PVT__task_s2_bits_snpHitReleaseIdx = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_needProbeAckData = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_needHint = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_prefetch = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_prefetchSrc = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_snpHitRelease = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_snpHitReleaseIdx = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_mshrId = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_alias = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_meta_dirty = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_dirty = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_mshrTask = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_clients = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_accessed = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_alias = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_state = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_metaWen = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_mergeA = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_meta_alias = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_tagWen = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_replTask = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_way = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_reqSource = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_meta_prefetchSrc = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_sourceId = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_fromL2pft = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_off = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_meta_accessed = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_param = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_channel = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_useProbeData = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_meta_clients = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_dsWen = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_opcode = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_meta_prefetch = 0U;
        vlSelfRef.__PVT__mshr_task_s1_bits_meta_state = 0U;
    } else {
        if (vlSelfRef.io_taskInfo_s1_valid) {
            if (vlSelfRef.__PVT__mshr_task_s1_valid) {
                vlSelfRef.__Vdly__task_s2_bits_channel 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_channel;
                vlSelfRef.__PVT__task_s2_bits_mshrTask 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_mshrTask;
                vlSelfRef.__PVT__task_s2_bits_set = vlSelfRef.__PVT__mshr_task_s1_bits_set;
                vlSelfRef.__PVT__task_s2_bits_tag = vlSelfRef.__PVT__mshr_task_s1_bits_tag;
                vlSelfRef.__Vdly__task_s2_bits_off 
                    = (1U & (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_off));
                vlSelfRef.__PVT__task_s2_bits_alias 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_alias;
                vlSelfRef.__Vdly__task_s2_bits_opcode 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_opcode;
                vlSelfRef.__Vdly__task_s2_bits_param 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_param;
                vlSelfRef.__Vdly__task_s2_bits_sourceId 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_sourceId;
                vlSelfRef.__Vdly__task_s2_bits_needProbeAckData 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_needProbeAckData;
                vlSelfRef.__PVT__task_s2_bits_mshrId 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_mshrId;
                vlSelfRef.__PVT__task_s2_bits_useProbeData 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_useProbeData;
                vlSelfRef.__Vdly__task_s2_bits_fromL2pft 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_fromL2pft;
                vlSelfRef.__PVT__task_s2_bits_needHint 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_needHint;
                vlSelfRef.__PVT__task_s2_bits_way = vlSelfRef.__PVT__mshr_task_s1_bits_way;
                vlSelfRef.__PVT__task_s2_bits_meta_dirty 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_meta_dirty;
                vlSelfRef.__PVT__task_s2_bits_meta_state 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_meta_state;
                vlSelfRef.__PVT__task_s2_bits_meta_clients 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_meta_clients;
                vlSelfRef.__PVT__task_s2_bits_meta_alias 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_meta_alias;
                vlSelfRef.__PVT__task_s2_bits_meta_prefetch 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_meta_prefetch;
                vlSelfRef.__PVT__task_s2_bits_meta_prefetchSrc 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_meta_prefetchSrc;
                vlSelfRef.__PVT__task_s2_bits_meta_accessed 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_meta_accessed;
                vlSelfRef.__PVT__task_s2_bits_metaWen 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_metaWen;
                vlSelfRef.__PVT__task_s2_bits_tagWen 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_tagWen;
                vlSelfRef.__PVT__task_s2_bits_dsWen 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_dsWen;
                vlSelfRef.__PVT__task_s2_bits_replTask 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_replTask;
                vlSelfRef.__Vdly__task_s2_bits_reqSource 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_reqSource;
                vlSelfRef.__PVT__task_s2_bits_mergeA 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_mergeA;
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_dirty 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_dirty;
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_state 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_state;
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_clients 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_clients;
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_alias 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_alias;
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetch 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_prefetch;
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetchSrc 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_prefetchSrc;
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_accessed 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_accessed;
                vlSelfRef.__PVT__task_s2_bits_snpHitRelease 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_snpHitRelease;
                vlSelfRef.__PVT__task_s2_bits_snpHitReleaseIdx 
                    = vlSelfRef.__PVT__mshr_task_s1_bits_snpHitReleaseIdx;
            } else {
                if ((1U & (IData)(vlSelfRef.__PVT__sinkValids))) {
                    vlSelfRef.__Vdly__task_s2_bits_channel 
                        = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_channel;
                    vlSelfRef.__PVT__task_s2_bits_set 
                        = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_set;
                    vlSelfRef.__PVT__task_s2_bits_tag 
                        = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_tag;
                    if ((3U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.__PVT__taskArb_io_chosen))) {
                        vlSelfRef.__Vdly__task_s2_bits_off 
                            = (1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_3_off));
                        vlSelfRef.__Vdly__task_s2_bits_param 
                            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_3_param;
                    } else if ((2U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.__PVT__taskArb_io_chosen))) {
                        vlSelfRef.__Vdly__task_s2_bits_off 
                            = (1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_2_off));
                        vlSelfRef.__Vdly__task_s2_bits_param 
                            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_2_param;
                    } else if ((1U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.__PVT__taskArb_io_chosen))) {
                        vlSelfRef.__Vdly__task_s2_bits_off 
                            = (1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_1_off));
                        vlSelfRef.__Vdly__task_s2_bits_param 
                            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_1_param;
                    } else {
                        vlSelfRef.__Vdly__task_s2_bits_off 
                            = (1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_0_off));
                        vlSelfRef.__Vdly__task_s2_bits_param 
                            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.__PVT__taskBuf_0_param;
                    }
                    vlSelfRef.__PVT__task_s2_bits_alias = 0U;
                    vlSelfRef.__Vdly__task_s2_bits_opcode 
                        = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_opcode;
                    vlSelfRef.__Vdly__task_s2_bits_sourceId 
                        = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_sourceId;
                    vlSelfRef.__PVT__task_s2_bits_mshrId = 0U;
                    vlSelfRef.__PVT__task_s2_bits_meta_state = 0U;
                    vlSelfRef.__PVT__task_s2_bits_meta_alias = 0U;
                    vlSelfRef.__PVT__task_s2_bits_meta_prefetchSrc = 0U;
                    vlSelfRef.__Vdly__task_s2_bits_reqSource = 0U;
                    vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_state = 0U;
                    vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_alias = 0U;
                    vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetchSrc = 0U;
                    vlSelfRef.__PVT__task_s2_bits_snpHitReleaseIdx = 0U;
                } else {
                    vlSelfRef.__Vdly__task_s2_bits_channel 
                        = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel;
                    vlSelfRef.__PVT__task_s2_bits_set 
                        = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set;
                    vlSelfRef.__PVT__task_s2_bits_tag 
                        = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag;
                    if (vlSelfRef.__PVT___sinkValids_T_3) {
                        vlSelfRef.__Vdly__task_s2_bits_off 
                            = (1U & vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__ram_address
                               [vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__deq_ptr_value]);
                        vlSelfRef.__PVT__task_s2_bits_alias = 0U;
                        vlSelfRef.__Vdly__task_s2_bits_param 
                            = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__ram_param
                            [vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__deq_ptr_value];
                        vlSelfRef.__PVT__task_s2_bits_meta_state = 0U;
                        vlSelfRef.__PVT__task_s2_bits_meta_alias = 0U;
                        vlSelfRef.__PVT__task_s2_bits_meta_prefetchSrc = 0U;
                        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_state = 0U;
                        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_alias = 0U;
                        vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetchSrc = 0U;
                        vlSelfRef.__PVT__task_s2_bits_snpHitReleaseIdx = 0U;
                    } else {
                        vlSelfRef.__Vdly__task_s2_bits_off 
                            = (1U & ((1U & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow))) 
                                     && vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_off
                                     [0U]));
                        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow) {
                            vlSelfRef.__PVT__task_s2_bits_alias = 0U;
                            vlSelfRef.__Vdly__task_s2_bits_param 
                                = vlSymsp->TOP.io_topInputNeedT_1;
                            vlSelfRef.__PVT__task_s2_bits_meta_state = 0U;
                            vlSelfRef.__PVT__task_s2_bits_meta_alias = 0U;
                            vlSelfRef.__PVT__task_s2_bits_meta_prefetchSrc = 0U;
                            vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_state = 0U;
                            vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_alias = 0U;
                            vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetchSrc = 0U;
                            vlSelfRef.__PVT__task_s2_bits_snpHitReleaseIdx = 0U;
                        } else {
                            vlSelfRef.__PVT__task_s2_bits_alias 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_alias
                                [0U];
                            vlSelfRef.__Vdly__task_s2_bits_param 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_param
                                [0U];
                            vlSelfRef.__PVT__task_s2_bits_meta_state 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_meta_state
                                [0U];
                            vlSelfRef.__PVT__task_s2_bits_meta_alias 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_meta_alias
                                [0U];
                            vlSelfRef.__PVT__task_s2_bits_meta_prefetchSrc 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_meta_prefetchSrc
                                [0U];
                            vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_state 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_state
                                [0U];
                            vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_alias 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_alias
                                [0U];
                            vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetchSrc 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_prefetchSrc
                                [0U];
                            vlSelfRef.__PVT__task_s2_bits_snpHitReleaseIdx 
                                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_snpHitReleaseIdx
                                [0U];
                        }
                    }
                    vlSelfRef.__Vdly__task_s2_bits_opcode 
                        = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode;
                    vlSelfRef.__Vdly__task_s2_bits_sourceId 
                        = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId;
                    vlSelfRef.__PVT__task_s2_bits_mshrId 
                        = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId;
                    vlSelfRef.__Vdly__task_s2_bits_reqSource 
                        = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource;
                }
                vlSelfRef.__PVT__task_s2_bits_mshrTask 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrTask));
                vlSelfRef.__Vdly__task_s2_bits_needProbeAckData 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && (1U & ((IData)(vlSelfRef.__PVT___sinkValids_T_3)
                                  ? vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__ram_data
                                 [vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__deq_ptr_value]
                                  : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                                     & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_needProbeAckData
                                     [0U]))));
                vlSelfRef.__PVT__task_s2_bits_useProbeData 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_useProbeData
                               [0U])));
                vlSelfRef.__Vdly__task_s2_bits_fromL2pft 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_fromL2pft
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_needHint 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_needHint
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_way = 
                    ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                     && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                         && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                             & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_way
                             [0U])));
                vlSelfRef.__PVT__task_s2_bits_meta_dirty 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_meta_dirty
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_meta_clients 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_meta_clients
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_meta_prefetch 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_meta_prefetch
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_meta_accessed 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_meta_accessed
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_metaWen 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_metaWen
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_tagWen 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_tagWen
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_dsWen 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_dsWen
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_replTask 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_replTask
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_mergeA 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mergeA));
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_dirty 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_dirty
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_clients 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_clients
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_prefetch 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_prefetch
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_aMergeTask_meta_accessed 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_accessed
                               [0U])));
                vlSelfRef.__PVT__task_s2_bits_snpHitRelease 
                    = ((1U & (~ (IData)(vlSelfRef.__PVT__sinkValids))) 
                       && ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
                           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
                               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_snpHitRelease
                               [0U])));
            }
        }
        if (vlSelfRef.__PVT__s0_fire) {
            vlSelfRef.__PVT__mshr_task_s1_bits_mshrRetry 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_s_retry)) 
                       & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_s_retry)) 
                                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_s_retry)) 
                                     & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_s_retry)) 
                                       & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_needProbeAckData = 0U;
            vlSelfRef.__PVT__mshr_task_s1_bits_needHint = 0U;
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_prefetch = 0U;
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_prefetchSrc = 0U;
            vlSelfRef.__PVT__mshr_task_s1_bits_snpHitRelease = 0U;
            vlSelfRef.__PVT__mshr_task_s1_bits_snpHitReleaseIdx = 0U;
            vlSelfRef.__PVT__mshr_task_s1_bits_mshrId 
                = (((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                     ? 1U : 0U) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                     ? 2U : 0U) | (
                                                   (8U 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                                    ? 3U
                                                    : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_alias 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias)
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias)
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias)
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias)
                                            : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_meta_dirty 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_meta_dirty)) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_meta_dirty)) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_meta_dirty)) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_meta_dirty)))));
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_dirty 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_meta_dirty)) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_meta_dirty)) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_meta_dirty)) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_meta_dirty)))));
            vlSelfRef.__PVT__mshr_task_s1_bits_mshrTask 
                = (IData)((0U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH)));
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_clients 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)))));
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_accessed 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)))));
            vlSelfRef.__PVT__mshr_task_s1_bits_alias 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_grant_task_aliasFinal)
                          : 0U) : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_grant_task_aliasFinal)
                                              : 0U)
                                          : 0U)) | 
                   (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_grant_task_aliasFinal)
                          : 0U) : 0U) | ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_grant_task_aliasFinal)
                                              : 0U)
                                          : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_meta_state 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((1U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_promoteT) 
                                    | ((~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112) 
                                           >> 2U)) 
                                       | (((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112)) 
                                           & (1U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_113))) 
                                          | (((6U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112)) 
                                              | (7U 
                                                 == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_112))) 
                                             & (0U 
                                                != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___GEN_113)))))))
                              ? 2U : 1U) : 0U) : 0U) 
                    | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                        ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                            ? ((1U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_promoteT) 
                                      | ((~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112) 
                                             >> 2U)) 
                                         | (((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112)) 
                                             & (1U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_113))) 
                                            | (((6U 
                                                 == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112)) 
                                                | (7U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_112))) 
                                               & (0U 
                                                  != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___GEN_113)))))))
                                ? 2U : 1U) : 0U) : 0U)) 
                   | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                        ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                            ? ((1U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_promoteT) 
                                      | ((~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112) 
                                             >> 2U)) 
                                         | (((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112)) 
                                             & (1U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_113))) 
                                            | (((6U 
                                                 == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112)) 
                                                | (7U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_112))) 
                                               & (0U 
                                                  != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___GEN_113)))))))
                                ? 2U : 1U) : 0U) : 0U) 
                      | ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                              ? ((1U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_promoteT) 
                                        | ((~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112) 
                                               >> 2U)) 
                                           | (((5U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112)) 
                                               & (1U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_113))) 
                                              | (((6U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112)) 
                                                  | (7U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_112))) 
                                                 & (0U 
                                                    != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___GEN_113)))))))
                                  ? 2U : 1U) : 0U) : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_metaWen 
                = (1U & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                          & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)) 
                             | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                         | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                              >> 1U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)) 
                                        | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                            | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                 >> 2U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)) 
                                           | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                               | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                   >> 3U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)) 
                                             | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_mergeA 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                       & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid) 
                          | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mergeA)))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                  & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid) 
                                     | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mergeA)))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid) 
                                        | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mergeA)))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                       & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid) 
                                          | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mergeA)))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_meta_alias 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_grant_task_aliasFinal)
                          : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)
                              ? 0U : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_alias)))
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                    ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_grant_task_aliasFinal)
                                    : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)
                                        ? 0U : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_alias)))
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_grant_task_aliasFinal)
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)
                                                    ? 0U
                                                    : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_alias)))
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_grant_task_aliasFinal)
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)
                                                    ? 0U
                                                    : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_alias)))
                                            : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_tagWen 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit)) 
                       & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit)) 
                                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit)) 
                                     & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit)) 
                                       & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_replTask 
                = (1U & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                              ? (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit))
                              : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid))) 
                         | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                              >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                         ? (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit))
                                         : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid))) 
                            | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                 >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                            ? (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit))
                                            : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid))) 
                               | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                   >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit))
                                              : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_way 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_way)) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_way)) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_way)) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_way)))));
            vlSelfRef.__PVT__mshr_task_s1_bits_reqSource 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_reqSource)
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_reqSource)
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_reqSource)
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_reqSource)
                                            : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_meta_prefetchSrc 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((8U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_reqSource))
                              ? 2U : ((9U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_reqSource))
                                       ? 3U : ((0xaU 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_reqSource))
                                                ? 1U
                                                : (
                                                   (0xdU 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_reqSource))
                                                    ? 6U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_reqSource))
                                                     ? 4U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_reqSource))
                                                      ? 5U
                                                      : 0U))))))
                          : 0U) : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? ((8U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_reqSource))
                                                  ? 2U
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_reqSource))
                                                   ? 3U
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_reqSource))
                                                    ? 1U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_reqSource))
                                                     ? 6U
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_reqSource))
                                                      ? 4U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_reqSource))
                                                       ? 5U
                                                       : 0U))))))
                                              : 0U)
                                          : 0U)) | 
                   (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((8U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_reqSource))
                              ? 2U : ((9U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_reqSource))
                                       ? 3U : ((0xaU 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_reqSource))
                                                ? 1U
                                                : (
                                                   (0xdU 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_reqSource))
                                                    ? 6U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_reqSource))
                                                     ? 4U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_reqSource))
                                                      ? 5U
                                                      : 0U))))))
                          : 0U) : 0U) | ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? ((8U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_reqSource))
                                                  ? 2U
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_reqSource))
                                                   ? 3U
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_reqSource))
                                                    ? 1U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_reqSource))
                                                     ? 6U
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_reqSource))
                                                      ? 4U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_reqSource))
                                                       ? 5U
                                                       : 0U))))))
                                              : 0U)
                                          : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_sourceId 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_sourceId)
                          : 0U) : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_sourceId)
                                              : 0U)
                                          : 0U)) | 
                   (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_sourceId)
                          : 0U) : 0U) | ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_sourceId)
                                              : 0U)
                                          : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_fromL2pft 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                       & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_fromL2pft))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_fromL2pft))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                     & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_fromL2pft))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                       & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_fromL2pft))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_off 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                        ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_off)
                        : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)) 
                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_off)))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                   ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_off)
                                   : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)) 
                                      & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_off)))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_off)
                                      : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_off)))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                        ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_off)
                                        : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)) 
                                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_off)))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_meta_accessed 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                        ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___req_promoteT_T)
                        : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)) 
                           & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param)) 
                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_accessed))))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                   ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___req_promoteT_T)
                                   : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)) 
                                      & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param)) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_accessed))))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___req_promoteT_T)
                                      : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)) 
                                         & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param)) 
                                            & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_accessed))))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                        ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___req_promoteT_T)
                                        : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)) 
                                           & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param)) 
                                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_accessed))))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_param 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___mp_grant_task_mp_grant_param_T)
                              ? 0U : ((1U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param))
                                       ? 0U : ((2U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param))
                                                ? 0U
                                                : (
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_promoteT)
                                                     ? 0U
                                                     : 1U)
                                                    : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param)))))
                          : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)
                              ? ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_state))
                                  ? 1U : 2U) : (((2U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                  ? 2U
                                                  : 0U) 
                                                | ((6U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                    ? 1U
                                                    : 0U))))
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                    ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___mp_grant_task_mp_grant_param_T)
                                        ? 0U : ((1U 
                                                 == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param))
                                                  ? 0U
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_promoteT)
                                                    ? 0U
                                                    : 1U)
                                                   : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param)))))
                                    : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)
                                        ? ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_state))
                                            ? 1U : 2U)
                                        : (((2U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                             ? 2U : 0U) 
                                           | ((6U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                               ? 1U
                                               : 0U))))
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___mp_grant_task_mp_grant_param_T)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param))
                                                      ? 0U
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param))
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_promoteT)
                                                        ? 0U
                                                        : 1U)
                                                       : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param)))))
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_state))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                      ? 2U
                                                      : 0U) 
                                                    | ((6U 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                        ? 1U
                                                        : 0U))))
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___mp_grant_task_mp_grant_param_T)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param))
                                                      ? 0U
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param))
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_promoteT)
                                                        ? 0U
                                                        : 1U)
                                                       : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param)))))
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_state))
                                                     ? 1U
                                                     : 2U)
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                      ? 2U
                                                      : 0U) 
                                                    | ((6U 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                        ? 1U
                                                        : 0U))))
                                            : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_channel 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_channel)
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_channel)
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_channel)
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_channel)
                                            : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_useProbeData 
                = (1U & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                              ? (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit) 
                                  & (4U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))) 
                                 | ((~ ((1U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_state)) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_needT))) 
                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_aliasTask)))
                              : (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)))) 
                         | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                              >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                         ? (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit) 
                                             & (4U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))) 
                                            | ((~ (
                                                   (1U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_state)) 
                                                   & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_needT))) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_aliasTask)))
                                         : (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)))) 
                            | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                 >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                            ? (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit) 
                                                & (4U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))) 
                                               | ((~ 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_state)) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_needT))) 
                                                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_aliasTask)))
                                            : (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)))) 
                               | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                   >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit) 
                                                  & (4U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))) 
                                                 | ((~ 
                                                     ((1U 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_state)) 
                                                      & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_needT))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_aliasTask)))
                                              : (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid))))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_meta_clients 
                = (1U & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                              ? ((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                                  ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit) 
                                     & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_clients))
                                  : (~ ((4U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode)) 
                                        & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit)) 
                                           | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_clients)) 
                                              | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__probeGotN))))))
                              : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)) 
                                 & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__probeGotN))))) 
                         | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                              >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                         ? ((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                             ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit) 
                                                & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_clients))
                                             : (~ (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode)) 
                                                   & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit)) 
                                                      | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_clients)) 
                                                         | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__probeGotN))))))
                                         : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)) 
                                            & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__probeGotN))))) 
                            | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                 >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                            ? ((5U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit) 
                                                   & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_clients))
                                                : (~ 
                                                   ((4U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode)) 
                                                    & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit)) 
                                                       | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_clients)) 
                                                          | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__probeGotN))))))
                                            : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)) 
                                               & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__probeGotN))))) 
                               | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                                   >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                              ? ((5U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit) 
                                                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_clients))
                                                  : 
                                                 (~ 
                                                  ((4U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode)) 
                                                   & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit)) 
                                                      | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_clients)) 
                                                         | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__probeGotN))))))
                                              : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)) 
                                                 & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__probeGotN)))))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_dsWen 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                        ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__gotGrantData) 
                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__probeDirty) 
                              & ((4U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode)) 
                                 | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_aliasTask))))
                        : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid) 
                           | ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param)) 
                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__probeDirty))))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                   ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__gotGrantData) 
                                      | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__probeDirty) 
                                         & ((4U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode)) 
                                            | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_aliasTask))))
                                   : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid) 
                                      | ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param)) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__probeDirty))))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__gotGrantData) 
                                         | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__probeDirty) 
                                            & ((4U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode)) 
                                               | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_aliasTask))))
                                      : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid) 
                                         | ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param)) 
                                            & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__probeDirty))))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                        ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__gotGrantData) 
                                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__probeDirty) 
                                              & ((4U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode)) 
                                                 | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_aliasTask))))
                                        : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid) 
                                           | ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param)) 
                                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__probeDirty))))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_opcode 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((7U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                              ? 4U : ((6U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                                       ? 5U : ((5U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                                                ? 2U
                                                : (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                                                    ? 1U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                                                      ? 1U
                                                      : 0U))))))
                          : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)
                              ? 7U : ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_dirty) 
                                        & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_state) 
                                           >> 1U)) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__probeDirty) 
                                          | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_needProbeAckData)))
                                       ? 5U : 4U)))
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                    ? ((7U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                                 ? 5U
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                                  ? 2U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                                     ? 1U
                                                     : 0U))))))
                                    : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)
                                        ? 7U : ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_dirty) 
                                                  & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_state) 
                                                     >> 1U)) 
                                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__probeDirty) 
                                                    | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_needProbeAckData)))
                                                 ? 5U
                                                 : 4U)))
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (
                                                   (7U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                    ? 4U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                      ? 2U
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                       ? 1U
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                        ? 1U
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                         ? 1U
                                                         : 0U))))))
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)
                                                    ? 7U
                                                    : 
                                                   ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_dirty) 
                                                      & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_state) 
                                                         >> 1U)) 
                                                     | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__probeDirty) 
                                                        | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_needProbeAckData)))
                                                     ? 5U
                                                     : 4U)))
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (
                                                   (7U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                    ? 4U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                      ? 2U
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                       ? 1U
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                        ? 1U
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                         ? 1U
                                                         : 0U))))))
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)
                                                    ? 7U
                                                    : 
                                                   ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_dirty) 
                                                      & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_state) 
                                                         >> 1U)) 
                                                     | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__probeDirty) 
                                                        | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_needProbeAckData)))
                                                     ? 5U
                                                     : 4U)))
                                            : 0U)));
            vlSelfRef.__PVT__mshr_task_s1_bits_meta_prefetch 
                = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                        ? ((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode)) 
                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit) 
                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_prefetch)))
                        : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)) 
                           & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param)) 
                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_prefetch))))) 
                   | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                        >> 1U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                   ? ((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode)) 
                                      | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_prefetch)))
                                   : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)) 
                                      & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param)) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_prefetch))))) 
                      | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                           >> 2U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? ((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode)) 
                                         | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit) 
                                            & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_prefetch)))
                                      : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)) 
                                         & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param)) 
                                            & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_prefetch))))) 
                         | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH) 
                             >> 3U) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                        ? ((5U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode)) 
                                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit) 
                                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_prefetch)))
                                        : ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)) 
                                           & ((2U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param)) 
                                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_prefetch))))))));
            vlSelfRef.__PVT__mshr_task_s1_bits_meta_state 
                = ((((1U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                      ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                          ? ((4U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                              ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit)
                                  ? ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_state))
                                      ? 3U : 1U) : 
                                 ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_promoteT)
                                   ? 3U : 1U)) : (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_promoteT) 
                                                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_needT))
                                                   ? 
                                                  ((5U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))
                                                    ? 3U
                                                    : 2U)
                                                   : 1U))
                          : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__mp_release_valid)
                              ? 0U : ((2U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param))
                                       ? 0U : ((1U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_param))
                                                ? 1U
                                                : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_meta_state)))))
                      : 0U) | ((2U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                    ? ((4U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                        ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit)
                                            ? ((2U 
                                                & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_state))
                                                ? 3U
                                                : 1U)
                                            : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_promoteT)
                                                ? 3U
                                                : 1U))
                                        : (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_promoteT) 
                                            | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_needT))
                                            ? ((5U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))
                                                ? 3U
                                                : 2U)
                                            : 1U)) : 
                                   ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__mp_release_valid)
                                     ? 0U : ((2U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param))
                                              ? 0U : 
                                             ((1U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_param))
                                               ? 1U
                                               : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_meta_state)))))
                                : 0U)) | (((4U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit)
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_state))
                                                      ? 3U
                                                      : 1U)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_promoteT)
                                                      ? 3U
                                                      : 1U))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_promoteT) 
                                                     | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_needT))
                                                     ? 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))
                                                      ? 3U
                                                      : 2U)
                                                     : 1U))
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__mp_release_valid)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_param))
                                                      ? 1U
                                                      : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_meta_state)))))
                                            : 0U) | 
                                          ((8U & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                ? (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit)
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_state))
                                                      ? 3U
                                                      : 1U)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_promoteT)
                                                      ? 3U
                                                      : 1U))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_promoteT) 
                                                     | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_needT))
                                                     ? 
                                                    ((5U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))
                                                      ? 3U
                                                      : 2U)
                                                     : 1U))
                                                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__mp_release_valid)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_param))
                                                      ? 1U
                                                      : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_meta_state)))))
                                            : 0U)));
        }
    }
    __Vdly__mshr_task_s1_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (((IData)(vlSelfRef.__PVT__mshr_task_s1_valid) 
                                       & (~ (IData)(vlSelfRef.io_taskInfo_s1_valid))) 
                                      | (IData)(vlSelfRef.__PVT__s0_fire)));
    vlSelfRef.__PVT__mshr_task_s1_bits_tag = vlSelfRef.__Vdly__mshr_task_s1_bits_tag;
    vlSelfRef.__PVT__mshr_task_s1_bits_set = vlSelfRef.__Vdly__mshr_task_s1_bits_set;
    vlSelfRef.__PVT__mshr_task_s1_valid = __Vdly__mshr_task_s1_valid;
    vlSelfRef.__PVT___s1_needs_replRead_T_9 = ((2U 
                                                == (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_opcode)) 
                                               & (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_dsWen));
    vlSelfRef.io_dirRead_s1_bits_refill = ((IData)(vlSelfRef.__PVT__mshr_task_s1_valid) 
                                           & ((IData)(vlSelfRef.__PVT__mshr_task_s1_bits_channel) 
                                              & ((IData)(vlSelfRef.__PVT__mshr_task_s1_bits_replTask) 
                                                 & ((2U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__mshr_task_s1_bits_opcode) 
                                                         >> 1U))) 
                                                    | ((1U 
                                                        == (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_opcode)) 
                                                       | (IData)(vlSelfRef.__PVT___s1_needs_replRead_T_9))))));
}

VL_INLINE_OPT void VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__2(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__next_counter_23 = (vlSelfRef.__PVT__counter_23 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid) 
                                                           & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)))));
    vlSelfRef.__PVT__next_counter_24 = (vlSelfRef.__PVT__counter_24 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid) 
                                                           & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)))));
    vlSelfRef.__PVT__task_s2_bits_reqSource = vlSelfRef.__Vdly__task_s2_bits_reqSource;
    vlSelfRef.__PVT__task_s2_bits_sourceId = vlSelfRef.__Vdly__task_s2_bits_sourceId;
    vlSelfRef.__PVT__task_s2_bits_fromL2pft = vlSelfRef.__Vdly__task_s2_bits_fromL2pft;
    vlSelfRef.__PVT__task_s2_bits_off = vlSelfRef.__Vdly__task_s2_bits_off;
    vlSelfRef.__PVT__task_s2_bits_channel = vlSelfRef.__Vdly__task_s2_bits_channel;
    vlSelfRef.__PVT__task_s2_bits_needProbeAckData 
        = vlSelfRef.__Vdly__task_s2_bits_needProbeAckData;
    vlSelfRef.__PVT__task_s2_bits_param = vlSelfRef.__Vdly__task_s2_bits_param;
    vlSelfRef.__PVT__task_s2_bits_opcode = vlSelfRef.__Vdly__task_s2_bits_opcode;
    vlSelfRef.__PVT__next_counter_14 = (vlSelfRef.__PVT__counter_14 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockB_s1) 
                                                           & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
    vlSelfRef.__PVT__mshrTask_s2_a_upwards = ((IData)(vlSelfRef.__PVT__task_s2_bits_channel) 
                                              & ((5U 
                                                  == (IData)(vlSelfRef.__PVT__task_s2_bits_opcode)) 
                                                 | (((4U 
                                                      == (IData)(vlSelfRef.__PVT__task_s2_bits_opcode)) 
                                                     | (1U 
                                                        == (IData)(vlSelfRef.__PVT__task_s2_bits_opcode))) 
                                                    | ((2U 
                                                        == (IData)(vlSelfRef.__PVT__task_s2_bits_opcode)) 
                                                       & (IData)(vlSelfRef.__PVT__task_s2_bits_dsWen)))));
    vlSelfRef.__PVT__task_s2_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                      && (IData)(vlSelfRef.io_taskInfo_s1_valid));
    vlSelfRef.__PVT__mshrTask_s2 = ((IData)(vlSelfRef.__PVT__task_s2_bits_mshrTask) 
                                    & (IData)(vlSelfRef.__PVT__task_s2_valid));
    vlSelfRef.__PVT___sameSet_s2_T_2 = ((IData)(vlSelfRef.__PVT__task_s2_valid) 
                                        & (IData)(vlSelfRef.__PVT__task_s2_bits_channel));
    vlSelfRef.io_releaseBufRead_s2_valid = ((IData)(vlSelfRef.__PVT__mshrTask_s2) 
                                            & ((7U 
                                                == (IData)(vlSelfRef.__PVT__task_s2_bits_opcode)) 
                                               | ((((IData)(vlSelfRef.__PVT__task_s2_bits_channel) 
                                                    >> 1U) 
                                                   & (5U 
                                                      == (IData)(vlSelfRef.__PVT__task_s2_bits_opcode))) 
                                                  | ((IData)(vlSelfRef.__PVT__mshrTask_s2_a_upwards) 
                                                     & (IData)(vlSelfRef.__PVT__task_s2_bits_useProbeData)))));
}

VL_INLINE_OPT void VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__3(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___sinkValids_T;
    __PVT___sinkValids_T = 0;
    // Body
    vlSelfRef.__PVT__next_counter_11 = (vlSelfRef.__PVT__counter_11 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockB_s1) 
                                                           & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
    vlSelfRef.__PVT__next_counter_12 = (vlSelfRef.__PVT__counter_12 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockC_s1) 
                                                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid)))));
    vlSelfRef.__PVT__next_counter_15 = (vlSelfRef.__PVT__counter_15 
                                        + (QData)((IData)(
                                                          ((4U 
                                                            <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkReq_T_36)) 
                                                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid)))));
    __PVT___sinkValids_T = (1U & (~ ((4U <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkReq_T_36)) 
                                     | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockC_s1))));
    vlSelfRef.io_mshrTask_ready = (1U & ((~ ((3U <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkReq_T_36)) 
                                             | ((3U 
                                                 <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceWaitSinkEForSinkReq_T_30)) 
                                                | (9U 
                                                   <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkPft_T_24))))) 
                                         & (~ ((IData)(vlSelfRef.io_dirRead_s1_bits_refill) 
                                               | ((IData)(vlSelfRef.__PVT__ds_mcp2_stall) 
                                                  & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid))))));
    vlSelfRef.__PVT__sink_ready_basic = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready) 
                                         & ((IData)(vlSelfRef.__PVT__resetFinish) 
                                            & ((~ (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)) 
                                               & (~ (IData)(vlSelfRef.__PVT__ds_mcp2_stall)))));
    vlSelfRef.__PVT__next_counter_9 = (vlSelfRef.__PVT__counter_9 
                                       + (QData)((IData)(
                                                         ((4U 
                                                           <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                                          & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
    vlSelfRef.__PVT___sinkValids_T_2 = (1U & (~ ((4U 
                                                  <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockB_s1) 
                                                    | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockB_s1) 
                                                       | (4U 
                                                          <= 
                                                          (7U 
                                                           & ((3U 
                                                               & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sourceC__DOT___noSpaceForSinkBReq_T_5) 
                                                                  + 
                                                                  VL_SHIFTR_III(2,2,32, 
                                                                                (((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_valid) 
                                                                                & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_mshrTask)) 
                                                                                | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT___isC_s3_T))) 
                                                                                << 1U) 
                                                                                & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                                                << 1U) 
                                                                                | (0xfffffffeU 
                                                                                & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel)))) 
                                                                                | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sourceC__DOT___noSpaceForSinkBReq_T_5)), 1U))) 
                                                              + 
                                                              ((3U 
                                                                & ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_valid) 
                                                                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__isC_s4) 
                                                                        | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__pendingC_s4))) 
                                                                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_channel) 
                                                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_channel) 
                                                                          >> 1U))) 
                                                                   + 
                                                                   ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_status_vec_toC_2_valid) 
                                                                    & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_channel) 
                                                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_channel) 
                                                                          >> 1U))))) 
                                                               + 
                                                               ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sourceC__DOT__queue__DOT__maybe_full) 
                                                                  & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sourceC__DOT__queue__DOT__ptr_match))
                                                                  ? 4U
                                                                  : 0U) 
                                                                | (3U 
                                                                   & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sourceC__DOT__queue__DOT__enq_ptr_value) 
                                                                      - (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sourceC__DOT__queue__DOT__deq_ptr_value)))))))))))));
    vlSelfRef.__PVT___sinkValids_T_4 = (1U & (~ ((3U 
                                                  <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                                 | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockA_s1))));
    vlSelfRef.__PVT___sinkValids_T_1 = ((IData)(__PVT___sinkValids_T) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid));
    vlSelfRef.__PVT__next_counter_1 = (vlSelfRef.__PVT__counter_1 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_mshrTask_ready)) 
                                                          & (0U 
                                                             != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__valids))))));
    vlSelfRef.__PVT__s0_fire = ((0U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__valids)) 
                                & (IData)(vlSelfRef.io_mshrTask_ready));
    vlSelfRef.io_sinkC_ready = ((IData)(__PVT___sinkValids_T) 
                                & (IData)(vlSelfRef.__PVT__sink_ready_basic));
    vlSelfRef.__PVT___sinkValids_T_3 = ((IData)(vlSelfRef.__PVT___sinkValids_T_2) 
                                        & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid));
    vlSelfRef.__PVT__next_counter_18 = (vlSelfRef.__PVT__counter_18 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_1)))));
    vlSelfRef.__PVT__next_counter_21 = (vlSelfRef.__PVT__counter_21 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid) 
                                                           & ((IData)(vlSelfRef.__PVT__sink_ready_basic) 
                                                              & ((IData)(vlSelfRef.__PVT___sinkValids_T_2) 
                                                                 & (IData)(vlSelfRef.__PVT___sinkValids_T_1)))))));
    vlSelfRef.io_sinkB_ready = ((IData)(vlSelfRef.__PVT__sink_ready_basic) 
                                & ((IData)(vlSelfRef.__PVT___sinkValids_T_2) 
                                   & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_1))));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(vlSelfRef.__PVT__s0_fire)));
    vlSelfRef.__PVT__next_counter_7 = (vlSelfRef.__PVT__counter_7 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_sinkC_ready)) 
                                                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid)))));
    vlSelfRef.__PVT___io_s1Entrance_valid_T_2 = ((IData)(vlSelfRef.io_sinkC_ready) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid));
    vlSelfRef.__PVT__next_counter_17 = (vlSelfRef.__PVT__counter_17 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_3)))));
    vlSelfRef.__PVT__next_counter_6 = (vlSelfRef.__PVT__counter_6 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_sinkB_ready)) 
                                                          & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
    vlSelfRef.__PVT___io_s1Entrance_valid_T_4 = ((IData)(vlSelfRef.io_sinkB_ready) 
                                                 & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid));
    vlSelfRef.__PVT__next_counter_4 = (vlSelfRef.__PVT__counter_4 
                                       + (QData)((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_2)));
    vlSelfRef.io_s1Entrance_bits_set = (((IData)(vlSelfRef.__PVT__mshr_task_s1_bits_metaWen) 
                                         & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid))
                                         ? (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_set)
                                         : ((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_2)
                                             ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_set)
                                             : (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_bits_set)));
    vlSelfRef.__PVT__next_counter_3 = (vlSelfRef.__PVT__counter_3 
                                       + (QData)((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_4)));
    vlSelfRef.io_s1Entrance_valid = (((IData)(vlSelfRef.__PVT__mshr_task_s1_valid) 
                                      & ((~ (IData)(vlSelfRef.__PVT__ds_mcp2_stall)) 
                                         & (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_metaWen))) 
                                     | ((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_2) 
                                        | (IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_4)));
}

VL_INLINE_OPT void VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__4(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___sameSetCnt_T_4;
    __PVT___sameSetCnt_T_4 = 0;
    // Body
    if (vlSelfRef.__PVT___sinkValids_T_3) {
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag 
            = (7U & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_bits_tag));
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_sourceId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel = 2U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode 
            = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__ram_opcode
            [vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__deq_ptr_value];
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set 
            = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_bits_set;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow) {
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag 
                = (7U & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                         >> 2U));
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_sourceId = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__prefetcher__DOT__reqSource;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode = 0U;
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel = 1U;
        } else {
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_mshrId
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_reqSource
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag 
                = (7U & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_tag
                   [0U]);
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_sourceId 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_sourceId
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_opcode
                [0U];
            vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_channel
                [0U];
        }
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode 
            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_opcode;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set 
            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set;
    }
    vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mergeA 
        = ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_mergeA
               [0U]));
    vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrTask 
        = ((1U & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_3))) 
           && ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow)) 
               & vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_mshrTask
               [0U]));
    vlSelfRef.__PVT__next_counter_8 = (vlSelfRef.__PVT__counter_8 
                                       + (QData)((IData)(
                                                         ((3U 
                                                           <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid)))));
    vlSelfRef.__PVT__next_counter_22 = (vlSelfRef.__PVT__counter_22 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid) 
                                                           & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)))));
    vlSelfRef.__PVT__next_counter_13 = (vlSelfRef.__PVT__counter_13 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockA_s1) 
                                                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid)))));
    vlSelfRef.__PVT___sinkValids_T_5 = ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid));
    vlSelfRef.__PVT___T_77 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid) 
                              & ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                 & (IData)(vlSelfRef.__PVT__sink_ready_basic)));
    __PVT___sameSetCnt_T_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                              & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_channel)));
    if (vlSelfRef.__PVT__mshr_task_s1_valid) {
        vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode 
            = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_opcode;
        vlSelfRef.io_taskInfo_s1_bits_mergeA = vlSelfRef.__PVT__mshr_task_s1_bits_mergeA;
        vlSelfRef.io_taskInfo_s1_bits_mshrTask = vlSelfRef.__PVT__mshr_task_s1_bits_mshrTask;
        vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
            = vlSelfRef.__PVT__mshr_task_s1_bits_channel;
        vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
            = vlSelfRef.__PVT__mshr_task_s1_bits_opcode;
        vlSelfRef.io_dirRead_s1_bits_set = vlSelfRef.__PVT__mshr_task_s1_bits_set;
    } else {
        if (vlSelfRef.__PVT___sinkValids_T_1) {
            vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode = 0U;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_channel;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_opcode;
            vlSelfRef.io_dirRead_s1_bits_set = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_set;
        } else {
            vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode;
            vlSelfRef.io_dirRead_s1_bits_set = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set;
        }
        vlSelfRef.io_taskInfo_s1_bits_mergeA = ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_1))) 
                                                && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mergeA));
        vlSelfRef.io_taskInfo_s1_bits_mshrTask = ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_1))) 
                                                  && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrTask));
    }
    vlSelfRef.__PVT__next_counter_16 = (vlSelfRef.__PVT__counter_16 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_5)))));
    vlSelfRef.__PVT__next_counter_20 = (vlSelfRef.__PVT__counter_20 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_77) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_1)))));
    vlSelfRef.__PVT__next_counter_19 = (vlSelfRef.__PVT__counter_19 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_77) 
                                                           & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_1)) 
                                                              & (IData)(vlSelfRef.__PVT___sinkValids_T_3))))));
    vlSelfRef.__PVT___sinkValids_T_6 = (2U > (7U & 
                                              ((3U 
                                                & ((IData)(__PVT___sameSetCnt_T_4) 
                                                   + 
                                                   (VL_SHIFTR_III(2,2,32, 
                                                                  ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                                     & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set) 
                                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_channel))) 
                                                                    << 1U) 
                                                                   | (IData)(__PVT___sameSetCnt_T_4)), 1U) 
                                                    + 
                                                    ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                     & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set) 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_channel)))))) 
                                               + (3U 
                                                  & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                      & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set) 
                                                          == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_channel))) 
                                                     + 
                                                     (((IData)(vlSelfRef.__PVT___sameSet_s2_T_2) 
                                                       & ((~ (IData)(vlSelfRef.__PVT__task_s2_bits_mshrTask)) 
                                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set) 
                                                             == (IData)(vlSelfRef.__PVT__task_s2_bits_set)))) 
                                                      + 
                                                      ((IData)(vlSelfRef.__PVT__sameSet_s3_REG) 
                                                       & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set) 
                                                          == (IData)(vlSelfRef.__PVT__sameSet_s3_r)))))))));
    vlSelfRef.__PVT__sinkValids = ((((IData)(vlSelfRef.__PVT___sinkValids_T_6) 
                                     & (IData)(vlSelfRef.__PVT___sinkValids_T_5)) 
                                    << 2U) | (((IData)(vlSelfRef.__PVT___sinkValids_T_3) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT___sinkValids_T_1)));
    vlSelfRef.io_sinkA_ready = ((IData)(vlSelfRef.__PVT__sink_ready_basic) 
                                & ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                   & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_3)) 
                                      & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_1)) 
                                         & (IData)(vlSelfRef.__PVT___sinkValids_T_6)))));
    vlSelfRef.__PVT__chnl_task_s1_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready) 
                                           & ((0U != (IData)(vlSelfRef.__PVT__sinkValids)) 
                                              & (IData)(vlSelfRef.__PVT__resetFinish)));
    vlSelfRef.__PVT__next_counter_5 = (vlSelfRef.__PVT__counter_5 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_sinkA_ready)) 
                                                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid)))));
    vlSelfRef.__PVT___s1_AHint_fire_T = ((IData)(vlSelfRef.io_sinkA_ready) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid));
    vlSelfRef.io_taskInfo_s1_valid = ((~ (IData)(vlSelfRef.__PVT__ds_mcp2_stall)) 
                                      & ((~ ((IData)(vlSelfRef.__PVT__mshr_task_s1_valid) 
                                             & ((IData)(vlSelfRef.io_dirRead_s1_bits_refill) 
                                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockG_s1))))) 
                                         & ((IData)(vlSelfRef.__PVT__mshr_task_s1_valid)
                                             ? (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)
                                             : (IData)(vlSelfRef.__PVT__chnl_task_s1_valid))));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_2 
                                       + (QData)((IData)(vlSelfRef.__PVT___s1_AHint_fire_T)));
}
