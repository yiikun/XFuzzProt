// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_RequestArb.h"
#include "VVerifyTop__Syms.h"

VL_ATTR_COLD void VVerifyTop_RequestArb___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__1(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___sameSetCnt_T_4;
    __PVT___sameSetCnt_T_4 = 0;
    // Body
    vlSelfRef.__PVT__next_counter_24 = (vlSelfRef.__PVT__counter_24 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid) 
                                                           & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)))));
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
    vlSelfRef.__PVT__next_counter_15 = (vlSelfRef.__PVT__counter_15 
                                        + (QData)((IData)(
                                                          ((4U 
                                                            <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkReq_T_36)) 
                                                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid)))));
    vlSelfRef.io_mshrTask_ready = (1U & ((~ ((3U <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkReq_T_36)) 
                                             | ((3U 
                                                 <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceWaitSinkEForSinkReq_T_30)) 
                                                | (9U 
                                                   <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkPft_T_24))))) 
                                         & (~ ((IData)(vlSelfRef.io_dirRead_s1_bits_refill) 
                                               | ((IData)(vlSelfRef.__PVT__ds_mcp2_stall) 
                                                  & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid))))));
    vlSelfRef.__PVT___sinkValids_T_4 = (1U & (~ ((3U 
                                                  <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                                 | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockA_s1))));
    vlSelfRef.__PVT__sink_ready_basic = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready) 
                                         & ((IData)(vlSelfRef.__PVT__resetFinish) 
                                            & ((~ (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)) 
                                               & (~ (IData)(vlSelfRef.__PVT__ds_mcp2_stall)))));
    vlSelfRef.__PVT__next_counter_11 = (vlSelfRef.__PVT__counter_11 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockB_s1) 
                                                           & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
    vlSelfRef.__PVT__next_counter_14 = (vlSelfRef.__PVT__counter_14 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockB_s1) 
                                                           & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
    vlSelfRef.__PVT__next_counter_23 = (vlSelfRef.__PVT__counter_23 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid) 
                                                           & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)))));
    vlSelfRef.__PVT__next_counter_9 = (vlSelfRef.__PVT__counter_9 
                                       + (QData)((IData)(
                                                         ((4U 
                                                           <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                                          & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
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
    __PVT___sameSetCnt_T_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                              & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_channel)));
    vlSelfRef.__PVT___sinkValids_T_3 = ((IData)(vlSelfRef.__PVT___sinkValids_T_2) 
                                        & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid));
    vlSelfRef.__PVT___sinkValids_T_5 = ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid));
    vlSelfRef.__PVT___T_77 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid) 
                              & ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                 & (IData)(vlSelfRef.__PVT__sink_ready_basic)));
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
    if (vlSelfRef.__PVT___sinkValids_T_3) {
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag 
            = (7U & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_bits_tag));
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set 
            = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_bits_set;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_sourceId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode 
            = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__ram_opcode
            [vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__deq_ptr_value];
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel = 2U;
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
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set 
            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode 
            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_opcode;
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
    vlSelfRef.__PVT__next_counter_17 = (vlSelfRef.__PVT__counter_17 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_3)))));
    vlSelfRef.__PVT__next_counter_16 = (vlSelfRef.__PVT__counter_16 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_5)))));
}

VL_ATTR_COLD void VVerifyTop_RequestArb___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__2(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___sinkValids_T;
    __PVT___sinkValids_T = 0;
    // Body
    vlSelfRef.__PVT__next_counter_12 = (vlSelfRef.__PVT__counter_12 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockC_s1) 
                                                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid)))));
    __PVT___sinkValids_T = (1U & (~ ((4U <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkReq_T_36)) 
                                     | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockC_s1))));
    vlSelfRef.__PVT__next_counter_1 = (vlSelfRef.__PVT__counter_1 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_mshrTask_ready)) 
                                                          & (0U 
                                                             != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__valids))))));
    vlSelfRef.__PVT__s0_fire = ((0U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__valids)) 
                                & (IData)(vlSelfRef.io_mshrTask_ready));
    vlSelfRef.__PVT___sinkValids_T_1 = ((IData)(__PVT___sinkValids_T) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid));
    vlSelfRef.io_sinkC_ready = ((IData)(__PVT___sinkValids_T) 
                                & (IData)(vlSelfRef.__PVT__sink_ready_basic));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(vlSelfRef.__PVT__s0_fire)));
    if (vlSelfRef.__PVT__mshr_task_s1_valid) {
        vlSelfRef.io_dirRead_s1_bits_set = vlSelfRef.__PVT__mshr_task_s1_bits_set;
        vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode 
            = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_opcode;
        vlSelfRef.io_taskInfo_s1_bits_mergeA = vlSelfRef.__PVT__mshr_task_s1_bits_mergeA;
        vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
            = vlSelfRef.__PVT__mshr_task_s1_bits_opcode;
        vlSelfRef.io_taskInfo_s1_bits_mshrTask = vlSelfRef.__PVT__mshr_task_s1_bits_mshrTask;
        vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
            = vlSelfRef.__PVT__mshr_task_s1_bits_channel;
    } else {
        if (vlSelfRef.__PVT___sinkValids_T_1) {
            vlSelfRef.io_dirRead_s1_bits_set = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_set;
            vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode = 0U;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_opcode;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_channel;
        } else {
            vlSelfRef.io_dirRead_s1_bits_set = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set;
            vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel;
        }
        vlSelfRef.io_taskInfo_s1_bits_mergeA = ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_1))) 
                                                && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mergeA));
        vlSelfRef.io_taskInfo_s1_bits_mshrTask = ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_1))) 
                                                  && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrTask));
    }
    vlSelfRef.__PVT__sinkValids = ((((IData)(vlSelfRef.__PVT___sinkValids_T_6) 
                                     & (IData)(vlSelfRef.__PVT___sinkValids_T_5)) 
                                    << 2U) | (((IData)(vlSelfRef.__PVT___sinkValids_T_3) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT___sinkValids_T_1)));
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
    vlSelfRef.io_sinkA_ready = ((IData)(vlSelfRef.__PVT__sink_ready_basic) 
                                & ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                   & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_3)) 
                                      & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_1)) 
                                         & (IData)(vlSelfRef.__PVT___sinkValids_T_6)))));
    vlSelfRef.__PVT__next_counter_20 = (vlSelfRef.__PVT__counter_20 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_77) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_1)))));
    vlSelfRef.__PVT__next_counter_19 = (vlSelfRef.__PVT__counter_19 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_77) 
                                                           & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_1)) 
                                                              & (IData)(vlSelfRef.__PVT___sinkValids_T_3))))));
    vlSelfRef.__PVT__next_counter_7 = (vlSelfRef.__PVT__counter_7 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_sinkC_ready)) 
                                                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid)))));
    vlSelfRef.__PVT___io_s1Entrance_valid_T_2 = ((IData)(vlSelfRef.io_sinkC_ready) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_valid));
    vlSelfRef.__PVT__chnl_task_s1_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready) 
                                           & ((0U != (IData)(vlSelfRef.__PVT__sinkValids)) 
                                              & (IData)(vlSelfRef.__PVT__resetFinish)));
    vlSelfRef.__PVT__next_counter_6 = (vlSelfRef.__PVT__counter_6 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_sinkB_ready)) 
                                                          & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
    vlSelfRef.__PVT___io_s1Entrance_valid_T_4 = ((IData)(vlSelfRef.io_sinkB_ready) 
                                                 & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_valid));
    vlSelfRef.__PVT__next_counter_5 = (vlSelfRef.__PVT__counter_5 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_sinkA_ready)) 
                                                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid)))));
    vlSelfRef.__PVT___s1_AHint_fire_T = ((IData)(vlSelfRef.io_sinkA_ready) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_out_valid));
    vlSelfRef.__PVT__next_counter_4 = (vlSelfRef.__PVT__counter_4 
                                       + (QData)((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_2)));
    vlSelfRef.io_s1Entrance_bits_set = (((IData)(vlSelfRef.__PVT__mshr_task_s1_bits_metaWen) 
                                         & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid))
                                         ? (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_set)
                                         : ((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_2)
                                             ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_set)
                                             : (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_bits_set)));
    vlSelfRef.io_taskInfo_s1_valid = ((~ (IData)(vlSelfRef.__PVT__ds_mcp2_stall)) 
                                      & ((~ ((IData)(vlSelfRef.__PVT__mshr_task_s1_valid) 
                                             & ((IData)(vlSelfRef.io_dirRead_s1_bits_refill) 
                                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockG_s1))))) 
                                         & ((IData)(vlSelfRef.__PVT__mshr_task_s1_valid)
                                             ? (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)
                                             : (IData)(vlSelfRef.__PVT__chnl_task_s1_valid))));
    vlSelfRef.__PVT__next_counter_3 = (vlSelfRef.__PVT__counter_3 
                                       + (QData)((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_4)));
    vlSelfRef.io_s1Entrance_valid = (((IData)(vlSelfRef.__PVT__mshr_task_s1_valid) 
                                      & ((~ (IData)(vlSelfRef.__PVT__ds_mcp2_stall)) 
                                         & (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_metaWen))) 
                                     | ((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_2) 
                                        | (IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_4)));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_2 
                                       + (QData)((IData)(vlSelfRef.__PVT___s1_AHint_fire_T)));
}

VL_ATTR_COLD void VVerifyTop_RequestArb___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__1(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___sameSetCnt_T_4;
    __PVT___sameSetCnt_T_4 = 0;
    // Body
    vlSelfRef.__PVT__next_counter_24 = (vlSelfRef.__PVT__counter_24 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid) 
                                                           & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)))));
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
    vlSelfRef.__PVT__next_counter_15 = (vlSelfRef.__PVT__counter_15 
                                        + (QData)((IData)(
                                                          ((4U 
                                                            <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkReq_T_36)) 
                                                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid)))));
    vlSelfRef.io_mshrTask_ready = (1U & ((~ ((3U <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkReq_T_36)) 
                                             | ((3U 
                                                 <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceWaitSinkEForSinkReq_T_30)) 
                                                | (9U 
                                                   <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkPft_T_24))))) 
                                         & (~ ((IData)(vlSelfRef.io_dirRead_s1_bits_refill) 
                                               | ((IData)(vlSelfRef.__PVT__ds_mcp2_stall) 
                                                  & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid))))));
    vlSelfRef.__PVT___sinkValids_T_4 = (1U & (~ ((3U 
                                                  <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                                 | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockA_s1))));
    vlSelfRef.__PVT__sink_ready_basic = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready) 
                                         & ((IData)(vlSelfRef.__PVT__resetFinish) 
                                            & ((~ (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)) 
                                               & (~ (IData)(vlSelfRef.__PVT__ds_mcp2_stall)))));
    vlSelfRef.__PVT__next_counter_11 = (vlSelfRef.__PVT__counter_11 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockB_s1) 
                                                           & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
    vlSelfRef.__PVT__next_counter_14 = (vlSelfRef.__PVT__counter_14 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockB_s1) 
                                                           & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
    vlSelfRef.__PVT__next_counter_23 = (vlSelfRef.__PVT__counter_23 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid) 
                                                           & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)))));
    vlSelfRef.__PVT__next_counter_9 = (vlSelfRef.__PVT__counter_9 
                                       + (QData)((IData)(
                                                         ((4U 
                                                           <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                                                          & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
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
    __PVT___sameSetCnt_T_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                              & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                                  == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set)) 
                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_channel)));
    vlSelfRef.__PVT___sinkValids_T_3 = ((IData)(vlSelfRef.__PVT___sinkValids_T_2) 
                                        & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid));
    vlSelfRef.__PVT___sinkValids_T_5 = ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid));
    vlSelfRef.__PVT___T_77 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid) 
                              & ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                 & (IData)(vlSelfRef.__PVT__sink_ready_basic)));
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
    if (vlSelfRef.__PVT___sinkValids_T_3) {
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_reqSource = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_tag 
            = (7U & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_bits_tag));
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set 
            = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_bits_set;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_sourceId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_sourceId = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode = 0U;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode 
            = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__ram_opcode
            [vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__deq_ptr_value];
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel = 2U;
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
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set 
            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set;
        vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode 
            = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_opcode;
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
    vlSelfRef.__PVT__next_counter_17 = (vlSelfRef.__PVT__counter_17 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_3)))));
    vlSelfRef.__PVT__next_counter_16 = (vlSelfRef.__PVT__counter_16 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_5)))));
}

VL_ATTR_COLD void VVerifyTop_RequestArb___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__2(VVerifyTop_RequestArb* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestArb___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___sinkValids_T;
    __PVT___sinkValids_T = 0;
    // Body
    vlSelfRef.__PVT__next_counter_12 = (vlSelfRef.__PVT__counter_12 
                                        + (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockC_s1) 
                                                           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid)))));
    __PVT___sinkValids_T = (1U & (~ ((4U <= (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT___noSpaceForSinkReq_T_36)) 
                                     | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockC_s1))));
    vlSelfRef.__PVT__next_counter_1 = (vlSelfRef.__PVT__counter_1 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_mshrTask_ready)) 
                                                          & (0U 
                                                             != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__valids))))));
    vlSelfRef.__PVT__s0_fire = ((0U != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb__DOT__valids)) 
                                & (IData)(vlSelfRef.io_mshrTask_ready));
    vlSelfRef.__PVT___sinkValids_T_1 = ((IData)(__PVT___sinkValids_T) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid));
    vlSelfRef.io_sinkC_ready = ((IData)(__PVT___sinkValids_T) 
                                & (IData)(vlSelfRef.__PVT__sink_ready_basic));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(vlSelfRef.__PVT__s0_fire)));
    if (vlSelfRef.__PVT__mshr_task_s1_valid) {
        vlSelfRef.io_dirRead_s1_bits_set = vlSelfRef.__PVT__mshr_task_s1_bits_set;
        vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode 
            = vlSelfRef.__PVT__mshr_task_s1_bits_aMergeTask_opcode;
        vlSelfRef.io_taskInfo_s1_bits_mergeA = vlSelfRef.__PVT__mshr_task_s1_bits_mergeA;
        vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
            = vlSelfRef.__PVT__mshr_task_s1_bits_opcode;
        vlSelfRef.io_taskInfo_s1_bits_mshrTask = vlSelfRef.__PVT__mshr_task_s1_bits_mshrTask;
        vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
            = vlSelfRef.__PVT__mshr_task_s1_bits_channel;
    } else {
        if (vlSelfRef.__PVT___sinkValids_T_1) {
            vlSelfRef.io_dirRead_s1_bits_set = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_set;
            vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode = 0U;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_opcode;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_channel;
        } else {
            vlSelfRef.io_dirRead_s1_bits_set = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_set;
            vlSelfRef.io_taskInfo_s1_bits_aMergeTask_opcode 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_aMergeTask_opcode;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_opcode 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_opcode;
            vlSelfRef.io_dirRead_s1_bits_replacerInfo_channel 
                = vlSelfRef.__PVT___chnl_task_s1_bits_T_4_channel;
        }
        vlSelfRef.io_taskInfo_s1_bits_mergeA = ((1U 
                                                 & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_1))) 
                                                && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mergeA));
        vlSelfRef.io_taskInfo_s1_bits_mshrTask = ((1U 
                                                   & (~ (IData)(vlSelfRef.__PVT___sinkValids_T_1))) 
                                                  && (IData)(vlSelfRef.__PVT___chnl_task_s1_bits_T_4_mshrTask));
    }
    vlSelfRef.__PVT__sinkValids = ((((IData)(vlSelfRef.__PVT___sinkValids_T_6) 
                                     & (IData)(vlSelfRef.__PVT___sinkValids_T_5)) 
                                    << 2U) | (((IData)(vlSelfRef.__PVT___sinkValids_T_3) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__PVT___sinkValids_T_1)));
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
    vlSelfRef.io_sinkA_ready = ((IData)(vlSelfRef.__PVT__sink_ready_basic) 
                                & ((IData)(vlSelfRef.__PVT___sinkValids_T_4) 
                                   & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_3)) 
                                      & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_1)) 
                                         & (IData)(vlSelfRef.__PVT___sinkValids_T_6)))));
    vlSelfRef.__PVT__next_counter_20 = (vlSelfRef.__PVT__counter_20 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_77) 
                                                           & (IData)(vlSelfRef.__PVT___sinkValids_T_1)))));
    vlSelfRef.__PVT__next_counter_19 = (vlSelfRef.__PVT__counter_19 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_77) 
                                                           & ((~ (IData)(vlSelfRef.__PVT___sinkValids_T_1)) 
                                                              & (IData)(vlSelfRef.__PVT___sinkValids_T_3))))));
    vlSelfRef.__PVT__next_counter_7 = (vlSelfRef.__PVT__counter_7 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_sinkC_ready)) 
                                                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid)))));
    vlSelfRef.__PVT___io_s1Entrance_valid_T_2 = ((IData)(vlSelfRef.io_sinkC_ready) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_valid));
    vlSelfRef.__PVT__chnl_task_s1_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready) 
                                           & ((0U != (IData)(vlSelfRef.__PVT__sinkValids)) 
                                              & (IData)(vlSelfRef.__PVT__resetFinish)));
    vlSelfRef.__PVT__next_counter_6 = (vlSelfRef.__PVT__counter_6 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_sinkB_ready)) 
                                                          & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid)))));
    vlSelfRef.__PVT___io_s1Entrance_valid_T_4 = ((IData)(vlSelfRef.io_sinkB_ready) 
                                                 & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_valid));
    vlSelfRef.__PVT__next_counter_5 = (vlSelfRef.__PVT__counter_5 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.io_sinkA_ready)) 
                                                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid)))));
    vlSelfRef.__PVT___s1_AHint_fire_T = ((IData)(vlSelfRef.io_sinkA_ready) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid));
    vlSelfRef.__PVT__next_counter_4 = (vlSelfRef.__PVT__counter_4 
                                       + (QData)((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_2)));
    vlSelfRef.io_s1Entrance_bits_set = (((IData)(vlSelfRef.__PVT__mshr_task_s1_bits_metaWen) 
                                         & (IData)(vlSelfRef.__PVT__mshr_task_s1_valid))
                                         ? (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_set)
                                         : ((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_2)
                                             ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_set)
                                             : (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_bits_set)));
    vlSelfRef.io_taskInfo_s1_valid = ((~ (IData)(vlSelfRef.__PVT__ds_mcp2_stall)) 
                                      & ((~ ((IData)(vlSelfRef.__PVT__mshr_task_s1_valid) 
                                             & ((IData)(vlSelfRef.io_dirRead_s1_bits_refill) 
                                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_read_ready)) 
                                                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockG_s1))))) 
                                         & ((IData)(vlSelfRef.__PVT__mshr_task_s1_valid)
                                             ? (IData)(vlSelfRef.__PVT__mshr_task_s1_valid)
                                             : (IData)(vlSelfRef.__PVT__chnl_task_s1_valid))));
    vlSelfRef.__PVT__next_counter_3 = (vlSelfRef.__PVT__counter_3 
                                       + (QData)((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_4)));
    vlSelfRef.io_s1Entrance_valid = (((IData)(vlSelfRef.__PVT__mshr_task_s1_valid) 
                                      & ((~ (IData)(vlSelfRef.__PVT__ds_mcp2_stall)) 
                                         & (IData)(vlSelfRef.__PVT__mshr_task_s1_bits_metaWen))) 
                                     | ((IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_2) 
                                        | (IData)(vlSelfRef.__PVT___io_s1Entrance_valid_T_4)));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_2 
                                       + (QData)((IData)(vlSelfRef.__PVT___s1_AHint_fire_T)));
}
