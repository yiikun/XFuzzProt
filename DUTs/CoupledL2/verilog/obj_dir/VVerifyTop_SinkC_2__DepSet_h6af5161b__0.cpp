// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_SinkC_2.h"
#include "VVerifyTop__Syms.h"

VL_INLINE_OPT void VVerifyTop_SinkC_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC__0(VVerifyTop_SinkC_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                        & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode)) 
                       & (IData)(vlSelfRef.__PVT__counter)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ (IData)(vlSelfRef.io_resp_respInfo_last))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at SinkC.scala:112 assert(last)\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_c_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_timer,
                      64,(vlSelfRef.__PVT__counter_1 
                          + (QData)((IData)(vlSelfRef.__PVT__stall))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_1_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_c_stall_for_noSpace, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_1_timer,
                      64,(vlSelfRef.__PVT__counter_2 
                          + (QData)((IData)(((IData)(vlSelfRef.__PVT__stall) 
                                             & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode) 
                                                & ((~ (IData)(vlSelfRef.__PVT__counter)) 
                                                   & (0xfU 
                                                      == (IData)(vlSelfRef.__PVT__bufValids)))))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_toReqArb_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,(vlSelfRef.__PVT__counter_3 
                          + (QData)((IData)(((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                                             & (IData)(vlSelfRef.io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_buf_full, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,(vlSelfRef.__PVT__counter_4 
                          + (QData)((IData)((0xfU == (IData)(vlSelfRef.__PVT__bufValids))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: NewDataNestC, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,(vlSelfRef.__PVT__counter_5 
                          + (QData)((IData)(vlSelfRef.__PVT__io_refillBufWrite_valid_REG))));
    }
    vlSelfRef.__PVT__io_refillBufWrite_bits_id_REG 
        = (((IData)((0U != (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_id_hi))) 
            << 1U) | (1U & (((IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_id_hi) 
                             | (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_id_lo)) 
                            >> 1U)));
    vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG 
        = vlSelfRef.io_task_bits_bufIdx;
    vlSelfRef.__PVT__beatValids_0_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((0U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_74))
                                            : (IData)(vlSelfRef.__PVT___GEN_74)));
    vlSelfRef.__PVT__beatValids_0_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((0U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_75))
                                            : (IData)(vlSelfRef.__PVT___GEN_75)));
    vlSelfRef.__PVT__beatValids_1_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((1U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_76))
                                            : (IData)(vlSelfRef.__PVT___GEN_76)));
    vlSelfRef.__PVT__beatValids_1_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((1U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_77))
                                            : (IData)(vlSelfRef.__PVT___GEN_77)));
    vlSelfRef.__PVT__beatValids_2_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((2U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_78))
                                            : (IData)(vlSelfRef.__PVT___GEN_78)));
    vlSelfRef.__PVT__beatValids_2_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((2U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_79))
                                            : (IData)(vlSelfRef.__PVT___GEN_79)));
    vlSelfRef.__PVT__beatValids_3_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((3U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_80))
                                            : (IData)(vlSelfRef.__PVT___GEN_80)));
    vlSelfRef.__PVT__beatValids_3_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((3U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_81))
                                            : (IData)(vlSelfRef.__PVT___GEN_81)));
    vlSelfRef.__PVT__REG___05F0 = vlSelfRef.__PVT__r_0;
    vlSelfRef.__PVT__REG___05F1 = vlSelfRef.__PVT__r_1;
    if (vlSelfRef.__PVT__taskArb__DOT___ctrl_validMask_grantMask_lastGrant_T) {
        vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant 
            = vlSelfRef.__PVT__taskArb_io_chosen;
        if ((3U == (IData)(vlSelfRef.io_task_bits_bufIdx))) {
            vlSelfRef.__PVT__r_0 = vlSelfRef.__PVT__dataBuf_3_0;
            vlSelfRef.__PVT__r_1 = vlSelfRef.__PVT__dataBuf_3_1;
        } else if ((2U == (IData)(vlSelfRef.io_task_bits_bufIdx))) {
            vlSelfRef.__PVT__r_0 = vlSelfRef.__PVT__dataBuf_2_0;
            vlSelfRef.__PVT__r_1 = vlSelfRef.__PVT__dataBuf_2_1;
        } else if ((1U == (IData)(vlSelfRef.io_task_bits_bufIdx))) {
            vlSelfRef.__PVT__r_0 = vlSelfRef.__PVT__dataBuf_1_0;
            vlSelfRef.__PVT__r_1 = vlSelfRef.__PVT__dataBuf_1_1;
        } else {
            vlSelfRef.__PVT__r_0 = vlSelfRef.__PVT__dataBuf_0_0;
            vlSelfRef.__PVT__r_1 = vlSelfRef.__PVT__dataBuf_0_1;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__taskValids_0 = 0U;
        vlSelfRef.__PVT__taskValids_3 = 0U;
        vlSelfRef.__PVT__probeAckDataBuf = 0U;
        vlSelfRef.__PVT__taskValids_2 = 0U;
        vlSelfRef.__PVT__taskValids_1 = 0U;
        vlSelfRef.__PVT__counter_1 = 0ULL;
        vlSelfRef.__PVT__counter_4 = 0ULL;
        vlSelfRef.__PVT__counter_5 = 0ULL;
        vlSelfRef.__PVT__counter_3 = 0ULL;
        vlSelfRef.__PVT__counter_2 = 0ULL;
        vlSelfRef.__PVT__dataBuf_3_0 = 0U;
        vlSelfRef.__PVT__dataBuf_2_0 = 0U;
        vlSelfRef.__PVT__dataBuf_1_0 = 0U;
        vlSelfRef.__PVT__dataBuf_0_0 = 0U;
        vlSelfRef.__PVT__dataBuf_3_1 = 0U;
        vlSelfRef.__PVT__dataBuf_2_1 = 0U;
        vlSelfRef.__PVT__dataBuf_1_1 = 0U;
        vlSelfRef.__PVT__dataBuf_0_1 = 0U;
    } else {
        if (vlSelfRef.__PVT___T_19) {
            vlSelfRef.__PVT__taskValids_0 = 0U;
        } else if (((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                    & (IData)(vlSelfRef.io_resp_respInfo_last))) {
            vlSelfRef.__PVT__taskValids_0 = ((1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_82)
                                              : (IData)(vlSelfRef.__PVT___GEN_266));
        }
        if (vlSelfRef.__PVT___T_22) {
            vlSelfRef.__PVT__taskValids_3 = 0U;
        } else if (((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                    & (IData)(vlSelfRef.io_resp_respInfo_last))) {
            vlSelfRef.__PVT__taskValids_3 = ((1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_85)
                                              : (IData)(vlSelfRef.__PVT___GEN_269));
        }
        if (((~ (IData)(vlSelfRef.__PVT__counter)) 
             & (IData)(vlSelfRef.__PVT___probeAckDataBuf_T_1))) {
            vlSelfRef.__PVT__probeAckDataBuf = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data;
        }
        if (vlSelfRef.__PVT___T_21) {
            vlSelfRef.__PVT__taskValids_2 = 0U;
        } else if (((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                    & (IData)(vlSelfRef.io_resp_respInfo_last))) {
            vlSelfRef.__PVT__taskValids_2 = ((1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_84)
                                              : (IData)(vlSelfRef.__PVT___GEN_268));
        }
        if (vlSelfRef.__PVT___T_20) {
            vlSelfRef.__PVT__taskValids_1 = 0U;
        } else if (((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                    & (IData)(vlSelfRef.io_resp_respInfo_last))) {
            vlSelfRef.__PVT__taskValids_1 = ((1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_83)
                                              : (IData)(vlSelfRef.__PVT___GEN_267));
        }
        vlSelfRef.__PVT__counter_1 = ((IData)(vlSelfRef.__PVT__helper_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter);
        vlSelfRef.__PVT__counter_4 = ((IData)(vlSelfRef.__PVT__helper_3_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_3);
        vlSelfRef.__PVT__counter_5 = ((IData)(vlSelfRef.__PVT__helper_4_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_4);
        vlSelfRef.__PVT__counter_3 = ((IData)(vlSelfRef.__PVT__helper_2_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_2);
        vlSelfRef.__PVT__counter_2 = ((IData)(vlSelfRef.__PVT__helper_1_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_1);
        if (vlSelfRef.__PVT___nextPtrReg_T_1) {
            if ((1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode))) {
                if (vlSelfRef.__PVT__counter) {
                    vlSelfRef.__PVT__dataBuf_3_0 = vlSelfRef.__PVT___GEN_24;
                    vlSelfRef.__PVT__dataBuf_2_0 = vlSelfRef.__PVT___GEN_22;
                    vlSelfRef.__PVT__dataBuf_1_0 = vlSelfRef.__PVT___GEN_20;
                    vlSelfRef.__PVT__dataBuf_0_0 = vlSelfRef.__PVT___GEN_18;
                    vlSelfRef.__PVT__dataBuf_3_1 = vlSelfRef.__PVT___GEN_25;
                    vlSelfRef.__PVT__dataBuf_2_1 = vlSelfRef.__PVT___GEN_23;
                    vlSelfRef.__PVT__dataBuf_1_1 = vlSelfRef.__PVT___GEN_21;
                    vlSelfRef.__PVT__dataBuf_0_1 = vlSelfRef.__PVT___GEN_19;
                } else {
                    vlSelfRef.__PVT__dataBuf_3_0 = vlSelfRef.__PVT___GEN_8;
                    vlSelfRef.__PVT__dataBuf_2_0 = vlSelfRef.__PVT___GEN_6;
                    vlSelfRef.__PVT__dataBuf_1_0 = vlSelfRef.__PVT___GEN_4;
                    vlSelfRef.__PVT__dataBuf_0_0 = vlSelfRef.__PVT___GEN_2;
                    vlSelfRef.__PVT__dataBuf_3_1 = vlSelfRef.__PVT___GEN_9;
                    vlSelfRef.__PVT__dataBuf_2_1 = vlSelfRef.__PVT___GEN_7;
                    vlSelfRef.__PVT__dataBuf_1_1 = vlSelfRef.__PVT___GEN_5;
                    vlSelfRef.__PVT__dataBuf_0_1 = vlSelfRef.__PVT___GEN_3;
                }
            }
        }
    }
    vlSelfRef.__PVT__io_refillBufWrite_valid_REG = 
        ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
         (((IData)(vlSelfRef.__PVT__taskArb__DOT___ctrl_validMask_grantMask_lastGrant_T) 
           & (7U == (IData)(vlSelfRef.io_task_bits_opcode))) 
          & ((IData)(vlSelfRef.__PVT___newdataMask_T_19) 
             | ((IData)(vlSelfRef.__PVT___newdataMask_T_14) 
                | (0U != (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_id_lo))))));
    vlSelfRef.__PVT__REG_2 = vlSelfRef.io_task_bits_bufIdx;
    vlSelfRef.__PVT__REG_1 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_sinkC_ready) 
                              & (IData)(vlSelfRef.io_task_valid));
    vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_3 
        = ((IData)(vlSelfRef.__PVT__taskValids_3) & 
           (3U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_2 
        = ((IData)(vlSelfRef.__PVT__taskValids_2) & 
           (2U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1 
        = ((IData)(vlSelfRef.__PVT__taskValids_1) & 
           (1U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)));
    vlSelfRef.__PVT__next_counter_4 = (vlSelfRef.__PVT__counter_5 
                                       + (QData)((IData)(vlSelfRef.__PVT__io_refillBufWrite_valid_REG)));
    vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_2 
        = ((IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_2));
    vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_3 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_2) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_3));
    vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_4 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_3) 
           | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_5 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_4) 
           | (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.io_refillBufWrite_bits_data_data = ((
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                     ? (IData)(vlSelfRef.__PVT__dataBuf_3_1)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                      ? (IData)(vlSelfRef.__PVT__dataBuf_2_1)
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                       ? (IData)(vlSelfRef.__PVT__dataBuf_1_1)
                                                       : (IData)(vlSelfRef.__PVT__dataBuf_0_1)))) 
                                                   << 8U) 
                                                  | ((3U 
                                                      == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                      ? (IData)(vlSelfRef.__PVT__dataBuf_3_0)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                       ? (IData)(vlSelfRef.__PVT__dataBuf_2_0)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                        ? (IData)(vlSelfRef.__PVT__dataBuf_1_0)
                                                        : (IData)(vlSelfRef.__PVT__dataBuf_0_0)))));
}

VL_INLINE_OPT void VVerifyTop_SinkC_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC__1(VVerifyTop_SinkC_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__taskArb_io_chosen = ((IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1)
                                           ? 1U : ((IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_2)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_3)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__taskValids_0)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__taskValids_1)
                                                       ? 1U
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__taskValids_2)
                                                        ? 2U
                                                        : 3U))))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__taskBuf_0_channel = 0U;
        vlSelfRef.__PVT__taskBuf_0_set = 0U;
        vlSelfRef.__PVT__taskBuf_0_tag = 0U;
        vlSelfRef.__PVT__taskBuf_0_off = 0U;
        vlSelfRef.__PVT__taskBuf_0_opcode = 0U;
        vlSelfRef.__PVT__taskBuf_0_param = 0U;
        vlSelfRef.__PVT__taskBuf_0_sourceId = 0U;
        vlSelfRef.__PVT__taskBuf_0_bufIdx = 0U;
        vlSelfRef.__PVT__taskBuf_1_channel = 0U;
        vlSelfRef.__PVT__taskBuf_1_set = 0U;
        vlSelfRef.__PVT__taskBuf_1_tag = 0U;
        vlSelfRef.__PVT__taskBuf_1_off = 0U;
        vlSelfRef.__PVT__taskBuf_1_opcode = 0U;
        vlSelfRef.__PVT__taskBuf_1_param = 0U;
        vlSelfRef.__PVT__taskBuf_1_sourceId = 0U;
        vlSelfRef.__PVT__taskBuf_1_bufIdx = 0U;
        vlSelfRef.__PVT__taskBuf_2_channel = 0U;
        vlSelfRef.__PVT__taskBuf_2_set = 0U;
        vlSelfRef.__PVT__taskBuf_2_tag = 0U;
        vlSelfRef.__PVT__taskBuf_2_off = 0U;
        vlSelfRef.__PVT__taskBuf_2_opcode = 0U;
        vlSelfRef.__PVT__taskBuf_2_param = 0U;
        vlSelfRef.__PVT__taskBuf_2_sourceId = 0U;
        vlSelfRef.__PVT__taskBuf_2_bufIdx = 0U;
        vlSelfRef.__PVT__taskBuf_3_channel = 0U;
        vlSelfRef.__PVT__taskBuf_3_set = 0U;
        vlSelfRef.__PVT__taskBuf_3_tag = 0U;
        vlSelfRef.__PVT__taskBuf_3_off = 0U;
        vlSelfRef.__PVT__taskBuf_3_opcode = 0U;
        vlSelfRef.__PVT__taskBuf_3_param = 0U;
        vlSelfRef.__PVT__taskBuf_3_sourceId = 0U;
        vlSelfRef.__PVT__taskBuf_3_bufIdx = 0U;
        vlSelfRef.__PVT__nextPtrReg = 0U;
        vlSelfRef.__PVT__counter = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
             & (IData)(vlSelfRef.io_resp_respInfo_last))) {
            if ((1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                    vlSelfRef.__PVT__taskBuf_0_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_0_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_0_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_0_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_0_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_0_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_0_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_0_bufIdx 
                        = vlSelfRef.__PVT__nextPtrReg;
                } else {
                    vlSelfRef.__PVT__taskBuf_0_bufIdx 
                        = vlSelfRef.__PVT___GEN_126;
                }
                if ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                    vlSelfRef.__PVT__taskBuf_1_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_1_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_1_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_1_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_1_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_1_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_1_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_1_bufIdx 
                        = vlSelfRef.__PVT__nextPtrReg;
                } else {
                    vlSelfRef.__PVT__taskBuf_1_bufIdx 
                        = vlSelfRef.__PVT___GEN_127;
                }
                if ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                    vlSelfRef.__PVT__taskBuf_2_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_2_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_2_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_2_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_2_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_2_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_2_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_2_bufIdx 
                        = vlSelfRef.__PVT__nextPtrReg;
                } else {
                    vlSelfRef.__PVT__taskBuf_2_bufIdx 
                        = vlSelfRef.__PVT___GEN_128;
                }
                if ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                    vlSelfRef.__PVT__taskBuf_3_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_3_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_3_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_3_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_3_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_3_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_3_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_3_bufIdx 
                        = vlSelfRef.__PVT__nextPtrReg;
                } else {
                    vlSelfRef.__PVT__taskBuf_3_bufIdx 
                        = vlSelfRef.__PVT___GEN_129;
                }
            } else {
                if ((0U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                    vlSelfRef.__PVT__taskBuf_0_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_0_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_0_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_0_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_0_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_0_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_0_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_0_bufIdx 
                        = vlSelfRef.__PVT__nextPtr;
                } else {
                    vlSelfRef.__PVT__taskBuf_0_bufIdx 
                        = vlSelfRef.__PVT___GEN_310;
                }
                if ((1U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                    vlSelfRef.__PVT__taskBuf_1_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_1_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_1_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_1_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_1_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_1_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_1_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_1_bufIdx 
                        = vlSelfRef.__PVT__nextPtr;
                } else {
                    vlSelfRef.__PVT__taskBuf_1_bufIdx 
                        = vlSelfRef.__PVT___GEN_311;
                }
                if ((2U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                    vlSelfRef.__PVT__taskBuf_2_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_2_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_2_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_2_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_2_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_2_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_2_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_2_bufIdx 
                        = vlSelfRef.__PVT__nextPtr;
                } else {
                    vlSelfRef.__PVT__taskBuf_2_bufIdx 
                        = vlSelfRef.__PVT___GEN_312;
                }
                if ((3U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                    vlSelfRef.__PVT__taskBuf_3_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_3_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_3_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_3_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_3_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_3_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_3_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_3_bufIdx 
                        = vlSelfRef.__PVT__nextPtr;
                } else {
                    vlSelfRef.__PVT__taskBuf_3_bufIdx 
                        = vlSelfRef.__PVT___GEN_313;
                }
            }
        }
        if (((((IData)(vlSelfRef.__PVT___T) & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode) 
                                               >> 1U)) 
              & (~ (IData)(vlSelfRef.__PVT__counter))) 
             & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode))) {
            vlSelfRef.__PVT__nextPtrReg = ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.__PVT__bufValids))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__bufValids))
                                                    ? 3U
                                                    : 2U)
                                                : 1U)
                                            : 0U);
        }
        if (vlSelfRef.__PVT___T) {
            vlSelfRef.__PVT__counter = ((IData)(vlSelfRef.__PVT__counter1)
                                         ? (IData)(vlSelfRef.__PVT__beats1)
                                         : (IData)(vlSelfRef.__PVT__counter1));
        }
    }
    if ((3U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
        vlSelfRef.io_task_valid = vlSelfRef.__PVT__taskValids_3;
        vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_3_bufIdx;
        vlSelfRef.io_task_bits_sourceId = vlSelfRef.__PVT__taskBuf_3_sourceId;
        vlSelfRef.io_task_bits_tag = vlSelfRef.__PVT__taskBuf_3_tag;
        vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_3_opcode;
        vlSelfRef.io_task_bits_channel = vlSelfRef.__PVT__taskBuf_3_channel;
        vlSelfRef.io_task_bits_set = vlSelfRef.__PVT__taskBuf_3_set;
    } else if ((2U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
        vlSelfRef.io_task_valid = vlSelfRef.__PVT__taskValids_2;
        vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_2_bufIdx;
        vlSelfRef.io_task_bits_sourceId = vlSelfRef.__PVT__taskBuf_2_sourceId;
        vlSelfRef.io_task_bits_tag = vlSelfRef.__PVT__taskBuf_2_tag;
        vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_2_opcode;
        vlSelfRef.io_task_bits_channel = vlSelfRef.__PVT__taskBuf_2_channel;
        vlSelfRef.io_task_bits_set = vlSelfRef.__PVT__taskBuf_2_set;
    } else if ((1U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
        vlSelfRef.io_task_valid = vlSelfRef.__PVT__taskValids_1;
        vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_1_bufIdx;
        vlSelfRef.io_task_bits_sourceId = vlSelfRef.__PVT__taskBuf_1_sourceId;
        vlSelfRef.io_task_bits_tag = vlSelfRef.__PVT__taskBuf_1_tag;
        vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_1_opcode;
        vlSelfRef.io_task_bits_channel = vlSelfRef.__PVT__taskBuf_1_channel;
        vlSelfRef.io_task_bits_set = vlSelfRef.__PVT__taskBuf_1_set;
    } else {
        vlSelfRef.io_task_valid = vlSelfRef.__PVT__taskValids_0;
        vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_0_bufIdx;
        vlSelfRef.io_task_bits_sourceId = vlSelfRef.__PVT__taskBuf_0_sourceId;
        vlSelfRef.io_task_bits_tag = vlSelfRef.__PVT__taskBuf_0_tag;
        vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_0_opcode;
        vlSelfRef.io_task_bits_channel = vlSelfRef.__PVT__taskBuf_0_channel;
        vlSelfRef.io_task_bits_set = vlSelfRef.__PVT__taskBuf_0_set;
    }
    vlSelfRef.__PVT___newdataMask_T_14 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                          & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_blockRefill))));
    vlSelfRef.__PVT___newdataMask_T_19 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                          & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_blockRefill))));
    vlSelfRef.__PVT__io_refillBufWrite_bits_id_lo = 
        ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
           & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_set) 
               == (IData)(vlSelfRef.io_task_bits_set)) 
              & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_tag) 
                  == (IData)(vlSelfRef.io_task_bits_tag)) 
                 & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io_msInfo_bits_blockRefill)))) 
          << 1U) | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                    & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_set) 
                        == (IData)(vlSelfRef.io_task_bits_set)) 
                       & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_tag) 
                           == (IData)(vlSelfRef.io_task_bits_tag)) 
                          & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io___05FmsInfo_bits_blockRefill)))));
    vlSelfRef.__PVT__bufValids = (((((IData)(vlSelfRef.__PVT__taskValids_3) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__taskValids_2) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__taskValids_1) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__taskValids_0))) 
                                  | (((((IData)(vlSelfRef.__PVT__beatValids_3_1) 
                                        | (IData)(vlSelfRef.__PVT__beatValids_3_0)) 
                                       << 3U) | (((IData)(vlSelfRef.__PVT__beatValids_2_1) 
                                                  | (IData)(vlSelfRef.__PVT__beatValids_2_0)) 
                                                 << 2U)) 
                                     | ((((IData)(vlSelfRef.__PVT__beatValids_1_1) 
                                          | (IData)(vlSelfRef.__PVT__beatValids_1_0)) 
                                         << 1U) | ((IData)(vlSelfRef.__PVT__beatValids_0_1) 
                                                   | (IData)(vlSelfRef.__PVT__beatValids_0_0)))));
    vlSelfRef.__PVT__io_refillBufWrite_bits_id_hi = 
        (((IData)(vlSelfRef.__PVT___newdataMask_T_19) 
          << 1U) | (IData)(vlSelfRef.__PVT___newdataMask_T_14));
    vlSelfRef.__PVT___GEN_126 = ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_0_bufIdx));
    vlSelfRef.__PVT___GEN_127 = ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_1_bufIdx));
    vlSelfRef.__PVT___GEN_128 = ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_2_bufIdx));
    vlSelfRef.__PVT___GEN_129 = ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_3_bufIdx));
    vlSelfRef.__PVT___GEN_82 = ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT___GEN_83 = ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___GEN_84 = ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___GEN_85 = ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_3));
    vlSelfRef.__PVT__next_counter_3 = (vlSelfRef.__PVT__counter_4 
                                       + (QData)((IData)(
                                                         (0xfU 
                                                          == (IData)(vlSelfRef.__PVT__bufValids)))));
    vlSelfRef.__PVT__nextPtr = ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                                 ? ((2U & (IData)(vlSelfRef.__PVT__bufValids))
                                     ? ((4U & (IData)(vlSelfRef.__PVT__bufValids))
                                         ? 3U : 2U)
                                     : 1U) : 0U);
    vlSelfRef.__PVT___GEN_310 = ((0U == (IData)(vlSelfRef.__PVT__nextPtr))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_0_bufIdx));
    vlSelfRef.__PVT___GEN_311 = ((1U == (IData)(vlSelfRef.__PVT__nextPtr))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_1_bufIdx));
    vlSelfRef.__PVT___GEN_312 = ((2U == (IData)(vlSelfRef.__PVT__nextPtr))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_2_bufIdx));
    vlSelfRef.__PVT___GEN_313 = ((3U == (IData)(vlSelfRef.__PVT__nextPtr))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_3_bufIdx));
    vlSelfRef.__PVT___GEN_266 = ((0U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT___GEN_267 = ((1U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___GEN_268 = ((2U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___GEN_269 = ((3U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_3));
    vlSelfRef.__PVT__counter1 = (1U & (~ (IData)(vlSelfRef.__PVT__counter)));
}

VL_INLINE_OPT void VVerifyTop_SinkC_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC__2(VVerifyTop_SinkC_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__beat;
    __PVT__beat = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_0;
    __VdfgRegularize_hd88b912b_1_0 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_1;
    __VdfgRegularize_hd88b912b_1_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_2;
    __VdfgRegularize_hd88b912b_1_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_3;
    __VdfgRegularize_hd88b912b_1_3 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_4;
    __VdfgRegularize_hd88b912b_1_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_5;
    __VdfgRegularize_hd88b912b_1_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_6;
    __VdfgRegularize_hd88b912b_1_6 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_7;
    __VdfgRegularize_hd88b912b_1_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_11;
    __VdfgRegularize_hd88b912b_1_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_12;
    __VdfgRegularize_hd88b912b_1_12 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_13;
    __VdfgRegularize_hd88b912b_1_13 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_14;
    __VdfgRegularize_hd88b912b_1_14 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_15;
    __VdfgRegularize_hd88b912b_1_15 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_16;
    __VdfgRegularize_hd88b912b_1_16 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_17;
    __VdfgRegularize_hd88b912b_1_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_18;
    __VdfgRegularize_hd88b912b_1_18 = 0;
    // Body
    vlSelfRef.io_releaseBufWrite_bits_data_data = (
                                                   ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.__PVT__probeAckDataBuf));
    vlSelfRef.__PVT__beats1 = (1U & ((~ ((IData)(1U) 
                                         << (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_size))) 
                                     & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.io_c_ready = (1U & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode) 
                                      >> 1U)) | ((~ (IData)(
                                                            (0xfU 
                                                             == (IData)(vlSelfRef.__PVT__bufValids)))) 
                                                 | (IData)(vlSelfRef.__PVT__counter))));
    vlSelfRef.__PVT___probeAckDataBuf_T_1 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q_io_deq_valid) 
                                             & (5U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__taskArb__DOT___ctrl_validMask_grantMask_lastGrant_T 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_sinkC_ready) 
           & (IData)(vlSelfRef.io_task_valid));
    vlSelfRef.__PVT___T_19 = (((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_3)) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_3 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                                                          & (IData)(vlSelfRef.io_task_valid)))));
    vlSelfRef.__PVT___T_20 = ((((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_4)) 
                                | (1U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant))) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___T_21 = ((((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_5)) 
                                | ((~ (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1)) 
                                   & (2U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)))) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___T_22 = ((((~ ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_5) 
                                    | (IData)(vlSelfRef.__PVT__taskValids_2))) 
                                | ((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_2)) 
                                   & (3U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)))) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_3));
    __PVT__beat = ((IData)(vlSelfRef.__PVT__counter) 
                   & (IData)(vlSelfRef.__PVT__beats1));
    vlSelfRef.io_resp_respInfo_last = (1U & ((~ (IData)(vlSelfRef.__PVT__beats1)) 
                                             | (IData)(vlSelfRef.__PVT__counter)));
    vlSelfRef.__PVT__stall = ((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q_io_deq_valid) 
                              & ((~ (IData)(vlSelfRef.io_c_ready)) 
                                 & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode) 
                                    >> 1U)));
    vlSelfRef.__PVT___T = ((IData)(vlSelfRef.io_c_ready) 
                           & (IData)(vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q_io_deq_valid));
    __VdfgRegularize_hd88b912b_1_18 = ((~ (IData)(__PVT__beat)) 
                                       & (0U == (IData)(vlSelfRef.__PVT__nextPtr)));
    __VdfgRegularize_hd88b912b_1_0 = ((0U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                      & (IData)(__PVT__beat));
    __VdfgRegularize_hd88b912b_1_17 = ((~ (IData)(__PVT__beat)) 
                                       & (1U == (IData)(vlSelfRef.__PVT__nextPtr)));
    __VdfgRegularize_hd88b912b_1_1 = ((1U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                      & (IData)(__PVT__beat));
    __VdfgRegularize_hd88b912b_1_16 = ((~ (IData)(__PVT__beat)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__nextPtr)));
    __VdfgRegularize_hd88b912b_1_2 = ((2U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                      & (IData)(__PVT__beat));
    __VdfgRegularize_hd88b912b_1_15 = ((~ (IData)(__PVT__beat)) 
                                       & (3U == (IData)(vlSelfRef.__PVT__nextPtr)));
    __VdfgRegularize_hd88b912b_1_3 = ((3U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                      & (IData)(__PVT__beat));
    __VdfgRegularize_hd88b912b_1_14 = ((~ (IData)(__PVT__beat)) 
                                       & (0U == (IData)(vlSelfRef.__PVT__nextPtrReg)));
    __VdfgRegularize_hd88b912b_1_4 = ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                      & (IData)(__PVT__beat));
    __VdfgRegularize_hd88b912b_1_13 = ((~ (IData)(__PVT__beat)) 
                                       & (1U == (IData)(vlSelfRef.__PVT__nextPtrReg)));
    __VdfgRegularize_hd88b912b_1_5 = ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                      & (IData)(__PVT__beat));
    __VdfgRegularize_hd88b912b_1_12 = ((~ (IData)(__PVT__beat)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__nextPtrReg)));
    __VdfgRegularize_hd88b912b_1_6 = ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                      & (IData)(__PVT__beat));
    __VdfgRegularize_hd88b912b_1_11 = ((~ (IData)(__PVT__beat)) 
                                       & (3U == (IData)(vlSelfRef.__PVT__nextPtrReg)));
    __VdfgRegularize_hd88b912b_1_7 = ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                      & (IData)(__PVT__beat));
    vlSelfRef.io_releaseBufWrite_valid = ((IData)(vlSelfRef.__PVT___probeAckDataBuf_T_1) 
                                          & (IData)(vlSelfRef.io_resp_respInfo_last));
    vlSelfRef.io_resp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_c_q_io_deq_valid) 
                               & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode) 
                                      >> 1U)) & ((~ (IData)(vlSelfRef.__PVT__counter)) 
                                                 | (IData)(vlSelfRef.io_resp_respInfo_last))));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter_1 
                                     + (QData)((IData)(vlSelfRef.__PVT__stall)));
    vlSelfRef.__PVT__next_counter_1 = (vlSelfRef.__PVT__counter_2 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__stall) 
                                                          & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode) 
                                                             & ((~ (IData)(vlSelfRef.__PVT__counter)) 
                                                                & (0xfU 
                                                                   == (IData)(vlSelfRef.__PVT__bufValids))))))));
    vlSelfRef.__PVT___nextPtrReg_T_1 = ((IData)(vlSelfRef.__PVT___T) 
                                        & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode) 
                                           >> 1U));
    vlSelfRef.__PVT___GEN_2 = ((IData)(__VdfgRegularize_hd88b912b_1_18)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_0_0));
    vlSelfRef.__PVT___GEN_3 = ((IData)(__VdfgRegularize_hd88b912b_1_0)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_0_1));
    vlSelfRef.__PVT___GEN_4 = ((IData)(__VdfgRegularize_hd88b912b_1_17)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_1_0));
    vlSelfRef.__PVT___GEN_5 = ((IData)(__VdfgRegularize_hd88b912b_1_1)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_1_1));
    vlSelfRef.__PVT___GEN_6 = ((IData)(__VdfgRegularize_hd88b912b_1_16)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_2_0));
    vlSelfRef.__PVT___GEN_7 = ((IData)(__VdfgRegularize_hd88b912b_1_2)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_2_1));
    vlSelfRef.__PVT___GEN_8 = ((IData)(__VdfgRegularize_hd88b912b_1_15)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_3_0));
    vlSelfRef.__PVT___GEN_9 = ((IData)(__VdfgRegularize_hd88b912b_1_3)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_3_1));
    vlSelfRef.__PVT___GEN_18 = ((IData)(__VdfgRegularize_hd88b912b_1_14)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_0_0));
    vlSelfRef.__PVT___GEN_19 = ((IData)(__VdfgRegularize_hd88b912b_1_4)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_0_1));
    vlSelfRef.__PVT___GEN_20 = ((IData)(__VdfgRegularize_hd88b912b_1_13)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_1_0));
    vlSelfRef.__PVT___GEN_21 = ((IData)(__VdfgRegularize_hd88b912b_1_5)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_1_1));
    vlSelfRef.__PVT___GEN_22 = ((IData)(__VdfgRegularize_hd88b912b_1_12)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_2_0));
    vlSelfRef.__PVT___GEN_23 = ((IData)(__VdfgRegularize_hd88b912b_1_6)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_2_1));
    vlSelfRef.__PVT___GEN_24 = ((IData)(__VdfgRegularize_hd88b912b_1_11)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_3_0));
    vlSelfRef.__PVT___GEN_25 = ((IData)(__VdfgRegularize_hd88b912b_1_7)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_3_1));
    if (vlSelfRef.__PVT___nextPtrReg_T_1) {
        if ((1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_c_bits_opcode))) {
            if (vlSelfRef.__PVT__counter) {
                vlSelfRef.__PVT___GEN_74 = ((IData)(__VdfgRegularize_hd88b912b_1_14) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_0));
                vlSelfRef.__PVT___GEN_75 = ((IData)(__VdfgRegularize_hd88b912b_1_4) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_1));
                vlSelfRef.__PVT___GEN_76 = ((IData)(__VdfgRegularize_hd88b912b_1_13) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_0));
                vlSelfRef.__PVT___GEN_77 = ((IData)(__VdfgRegularize_hd88b912b_1_5) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_1));
                vlSelfRef.__PVT___GEN_78 = ((IData)(__VdfgRegularize_hd88b912b_1_12) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_0));
                vlSelfRef.__PVT___GEN_79 = ((IData)(__VdfgRegularize_hd88b912b_1_6) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_1));
                vlSelfRef.__PVT___GEN_80 = ((IData)(__VdfgRegularize_hd88b912b_1_11) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_0));
                vlSelfRef.__PVT___GEN_81 = ((IData)(__VdfgRegularize_hd88b912b_1_7) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_1));
            } else {
                vlSelfRef.__PVT___GEN_74 = ((IData)(__VdfgRegularize_hd88b912b_1_18) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_0));
                vlSelfRef.__PVT___GEN_75 = ((IData)(__VdfgRegularize_hd88b912b_1_0) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_1));
                vlSelfRef.__PVT___GEN_76 = ((IData)(__VdfgRegularize_hd88b912b_1_17) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_0));
                vlSelfRef.__PVT___GEN_77 = ((IData)(__VdfgRegularize_hd88b912b_1_1) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_1));
                vlSelfRef.__PVT___GEN_78 = ((IData)(__VdfgRegularize_hd88b912b_1_16) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_0));
                vlSelfRef.__PVT___GEN_79 = ((IData)(__VdfgRegularize_hd88b912b_1_2) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_1));
                vlSelfRef.__PVT___GEN_80 = ((IData)(__VdfgRegularize_hd88b912b_1_15) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_0));
                vlSelfRef.__PVT___GEN_81 = ((IData)(__VdfgRegularize_hd88b912b_1_3) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_1));
            }
        } else {
            vlSelfRef.__PVT___GEN_74 = vlSelfRef.__PVT__beatValids_0_0;
            vlSelfRef.__PVT___GEN_75 = vlSelfRef.__PVT__beatValids_0_1;
            vlSelfRef.__PVT___GEN_76 = vlSelfRef.__PVT__beatValids_1_0;
            vlSelfRef.__PVT___GEN_77 = vlSelfRef.__PVT__beatValids_1_1;
            vlSelfRef.__PVT___GEN_78 = vlSelfRef.__PVT__beatValids_2_0;
            vlSelfRef.__PVT___GEN_79 = vlSelfRef.__PVT__beatValids_2_1;
            vlSelfRef.__PVT___GEN_80 = vlSelfRef.__PVT__beatValids_3_0;
            vlSelfRef.__PVT___GEN_81 = vlSelfRef.__PVT__beatValids_3_1;
        }
    } else {
        vlSelfRef.__PVT___GEN_74 = vlSelfRef.__PVT__beatValids_0_0;
        vlSelfRef.__PVT___GEN_75 = vlSelfRef.__PVT__beatValids_0_1;
        vlSelfRef.__PVT___GEN_76 = vlSelfRef.__PVT__beatValids_1_0;
        vlSelfRef.__PVT___GEN_77 = vlSelfRef.__PVT__beatValids_1_1;
        vlSelfRef.__PVT___GEN_78 = vlSelfRef.__PVT__beatValids_2_0;
        vlSelfRef.__PVT___GEN_79 = vlSelfRef.__PVT__beatValids_2_1;
        vlSelfRef.__PVT___GEN_80 = vlSelfRef.__PVT__beatValids_3_0;
        vlSelfRef.__PVT___GEN_81 = vlSelfRef.__PVT__beatValids_3_1;
    }
}

VL_INLINE_OPT void VVerifyTop_SinkC_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC__0(VVerifyTop_SinkC_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                        & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode)) 
                       & (IData)(vlSelfRef.__PVT__counter)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ (IData)(vlSelfRef.io_resp_respInfo_last))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at SinkC.scala:112 assert(last)\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_c_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_timer,
                      64,(vlSelfRef.__PVT__counter_1 
                          + (QData)((IData)(vlSelfRef.__PVT__stall))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_1_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_c_stall_for_noSpace, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_1_timer,
                      64,(vlSelfRef.__PVT__counter_2 
                          + (QData)((IData)(((IData)(vlSelfRef.__PVT__stall) 
                                             & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode) 
                                                & ((~ (IData)(vlSelfRef.__PVT__counter)) 
                                                   & (0xfU 
                                                      == (IData)(vlSelfRef.__PVT__bufValids)))))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_toReqArb_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,(vlSelfRef.__PVT__counter_3 
                          + (QData)((IData)(((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                                             & (IData)(vlSelfRef.io_task_valid))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_buf_full, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,(vlSelfRef.__PVT__counter_4 
                          + (QData)((IData)((0xfU == (IData)(vlSelfRef.__PVT__bufValids))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: NewDataNestC, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,(vlSelfRef.__PVT__counter_5 
                          + (QData)((IData)(vlSelfRef.__PVT__io_refillBufWrite_valid_REG))));
    }
    vlSelfRef.__PVT__io_refillBufWrite_bits_id_REG 
        = (((IData)((0U != (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_id_hi))) 
            << 1U) | (1U & (((IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_id_hi) 
                             | (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_id_lo)) 
                            >> 1U)));
    vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG 
        = vlSelfRef.io_task_bits_bufIdx;
    vlSelfRef.__PVT__beatValids_0_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((0U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_74))
                                            : (IData)(vlSelfRef.__PVT___GEN_74)));
    vlSelfRef.__PVT__beatValids_0_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((0U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_75))
                                            : (IData)(vlSelfRef.__PVT___GEN_75)));
    vlSelfRef.__PVT__beatValids_1_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((1U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_76))
                                            : (IData)(vlSelfRef.__PVT___GEN_76)));
    vlSelfRef.__PVT__beatValids_1_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((1U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_77))
                                            : (IData)(vlSelfRef.__PVT___GEN_77)));
    vlSelfRef.__PVT__beatValids_2_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((2U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_78))
                                            : (IData)(vlSelfRef.__PVT___GEN_78)));
    vlSelfRef.__PVT__beatValids_2_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((2U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_79))
                                            : (IData)(vlSelfRef.__PVT___GEN_79)));
    vlSelfRef.__PVT__beatValids_3_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((3U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_80))
                                            : (IData)(vlSelfRef.__PVT___GEN_80)));
    vlSelfRef.__PVT__beatValids_3_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSelfRef.__PVT__REG_1)
                                            ? ((3U 
                                                != (IData)(vlSelfRef.__PVT__REG_2)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_81))
                                            : (IData)(vlSelfRef.__PVT___GEN_81)));
    vlSelfRef.__PVT__REG___05F0 = vlSelfRef.__PVT__r_0;
    vlSelfRef.__PVT__REG___05F1 = vlSelfRef.__PVT__r_1;
    if (vlSelfRef.__PVT__taskArb__DOT___ctrl_validMask_grantMask_lastGrant_T) {
        vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant 
            = vlSelfRef.__PVT__taskArb_io_chosen;
        if ((3U == (IData)(vlSelfRef.io_task_bits_bufIdx))) {
            vlSelfRef.__PVT__r_0 = vlSelfRef.__PVT__dataBuf_3_0;
            vlSelfRef.__PVT__r_1 = vlSelfRef.__PVT__dataBuf_3_1;
        } else if ((2U == (IData)(vlSelfRef.io_task_bits_bufIdx))) {
            vlSelfRef.__PVT__r_0 = vlSelfRef.__PVT__dataBuf_2_0;
            vlSelfRef.__PVT__r_1 = vlSelfRef.__PVT__dataBuf_2_1;
        } else if ((1U == (IData)(vlSelfRef.io_task_bits_bufIdx))) {
            vlSelfRef.__PVT__r_0 = vlSelfRef.__PVT__dataBuf_1_0;
            vlSelfRef.__PVT__r_1 = vlSelfRef.__PVT__dataBuf_1_1;
        } else {
            vlSelfRef.__PVT__r_0 = vlSelfRef.__PVT__dataBuf_0_0;
            vlSelfRef.__PVT__r_1 = vlSelfRef.__PVT__dataBuf_0_1;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__taskValids_0 = 0U;
        vlSelfRef.__PVT__taskValids_3 = 0U;
        vlSelfRef.__PVT__probeAckDataBuf = 0U;
        vlSelfRef.__PVT__taskValids_2 = 0U;
        vlSelfRef.__PVT__taskValids_1 = 0U;
        vlSelfRef.__PVT__counter_1 = 0ULL;
        vlSelfRef.__PVT__counter_4 = 0ULL;
        vlSelfRef.__PVT__counter_5 = 0ULL;
        vlSelfRef.__PVT__counter_3 = 0ULL;
        vlSelfRef.__PVT__counter_2 = 0ULL;
        vlSelfRef.__PVT__dataBuf_3_0 = 0U;
        vlSelfRef.__PVT__dataBuf_2_0 = 0U;
        vlSelfRef.__PVT__dataBuf_1_0 = 0U;
        vlSelfRef.__PVT__dataBuf_0_0 = 0U;
        vlSelfRef.__PVT__dataBuf_3_1 = 0U;
        vlSelfRef.__PVT__dataBuf_2_1 = 0U;
        vlSelfRef.__PVT__dataBuf_1_1 = 0U;
        vlSelfRef.__PVT__dataBuf_0_1 = 0U;
    } else {
        if (vlSelfRef.__PVT___T_19) {
            vlSelfRef.__PVT__taskValids_0 = 0U;
        } else if (((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                    & (IData)(vlSelfRef.io_resp_respInfo_last))) {
            vlSelfRef.__PVT__taskValids_0 = ((1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_82)
                                              : (IData)(vlSelfRef.__PVT___GEN_266));
        }
        if (vlSelfRef.__PVT___T_22) {
            vlSelfRef.__PVT__taskValids_3 = 0U;
        } else if (((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                    & (IData)(vlSelfRef.io_resp_respInfo_last))) {
            vlSelfRef.__PVT__taskValids_3 = ((1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_85)
                                              : (IData)(vlSelfRef.__PVT___GEN_269));
        }
        if (((~ (IData)(vlSelfRef.__PVT__counter)) 
             & (IData)(vlSelfRef.__PVT___probeAckDataBuf_T_1))) {
            vlSelfRef.__PVT__probeAckDataBuf = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data;
        }
        if (vlSelfRef.__PVT___T_21) {
            vlSelfRef.__PVT__taskValids_2 = 0U;
        } else if (((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                    & (IData)(vlSelfRef.io_resp_respInfo_last))) {
            vlSelfRef.__PVT__taskValids_2 = ((1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_84)
                                              : (IData)(vlSelfRef.__PVT___GEN_268));
        }
        if (vlSelfRef.__PVT___T_20) {
            vlSelfRef.__PVT__taskValids_1 = 0U;
        } else if (((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                    & (IData)(vlSelfRef.io_resp_respInfo_last))) {
            vlSelfRef.__PVT__taskValids_1 = ((1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_83)
                                              : (IData)(vlSelfRef.__PVT___GEN_267));
        }
        vlSelfRef.__PVT__counter_1 = ((IData)(vlSelfRef.__PVT__helper_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter);
        vlSelfRef.__PVT__counter_4 = ((IData)(vlSelfRef.__PVT__helper_3_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_3);
        vlSelfRef.__PVT__counter_5 = ((IData)(vlSelfRef.__PVT__helper_4_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_4);
        vlSelfRef.__PVT__counter_3 = ((IData)(vlSelfRef.__PVT__helper_2_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_2);
        vlSelfRef.__PVT__counter_2 = ((IData)(vlSelfRef.__PVT__helper_1_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_1);
        if (vlSelfRef.__PVT___nextPtrReg_T_1) {
            if ((1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode))) {
                if (vlSelfRef.__PVT__counter) {
                    vlSelfRef.__PVT__dataBuf_3_0 = vlSelfRef.__PVT___GEN_24;
                    vlSelfRef.__PVT__dataBuf_2_0 = vlSelfRef.__PVT___GEN_22;
                    vlSelfRef.__PVT__dataBuf_1_0 = vlSelfRef.__PVT___GEN_20;
                    vlSelfRef.__PVT__dataBuf_0_0 = vlSelfRef.__PVT___GEN_18;
                    vlSelfRef.__PVT__dataBuf_3_1 = vlSelfRef.__PVT___GEN_25;
                    vlSelfRef.__PVT__dataBuf_2_1 = vlSelfRef.__PVT___GEN_23;
                    vlSelfRef.__PVT__dataBuf_1_1 = vlSelfRef.__PVT___GEN_21;
                    vlSelfRef.__PVT__dataBuf_0_1 = vlSelfRef.__PVT___GEN_19;
                } else {
                    vlSelfRef.__PVT__dataBuf_3_0 = vlSelfRef.__PVT___GEN_8;
                    vlSelfRef.__PVT__dataBuf_2_0 = vlSelfRef.__PVT___GEN_6;
                    vlSelfRef.__PVT__dataBuf_1_0 = vlSelfRef.__PVT___GEN_4;
                    vlSelfRef.__PVT__dataBuf_0_0 = vlSelfRef.__PVT___GEN_2;
                    vlSelfRef.__PVT__dataBuf_3_1 = vlSelfRef.__PVT___GEN_9;
                    vlSelfRef.__PVT__dataBuf_2_1 = vlSelfRef.__PVT___GEN_7;
                    vlSelfRef.__PVT__dataBuf_1_1 = vlSelfRef.__PVT___GEN_5;
                    vlSelfRef.__PVT__dataBuf_0_1 = vlSelfRef.__PVT___GEN_3;
                }
            }
        }
    }
    vlSelfRef.__PVT__io_refillBufWrite_valid_REG = 
        ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
         (((IData)(vlSelfRef.__PVT__taskArb__DOT___ctrl_validMask_grantMask_lastGrant_T) 
           & (7U == (IData)(vlSelfRef.io_task_bits_opcode))) 
          & ((IData)(vlSelfRef.__PVT___newdataMask_T_19) 
             | ((IData)(vlSelfRef.__PVT___newdataMask_T_14) 
                | (0U != (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_id_lo))))));
    vlSelfRef.__PVT__REG_2 = vlSelfRef.io_task_bits_bufIdx;
    vlSelfRef.__PVT__REG_1 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready) 
                              & (IData)(vlSelfRef.io_task_valid));
    vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_3 
        = ((IData)(vlSelfRef.__PVT__taskValids_3) & 
           (3U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_2 
        = ((IData)(vlSelfRef.__PVT__taskValids_2) & 
           (2U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1 
        = ((IData)(vlSelfRef.__PVT__taskValids_1) & 
           (1U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)));
    vlSelfRef.__PVT__next_counter_4 = (vlSelfRef.__PVT__counter_5 
                                       + (QData)((IData)(vlSelfRef.__PVT__io_refillBufWrite_valid_REG)));
    vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_2 
        = ((IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_2));
    vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_3 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_2) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_3));
    vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_4 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_3) 
           | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_5 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_4) 
           | (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.io_refillBufWrite_bits_data_data = ((
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                     ? (IData)(vlSelfRef.__PVT__dataBuf_3_1)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                      ? (IData)(vlSelfRef.__PVT__dataBuf_2_1)
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                       ? (IData)(vlSelfRef.__PVT__dataBuf_1_1)
                                                       : (IData)(vlSelfRef.__PVT__dataBuf_0_1)))) 
                                                   << 8U) 
                                                  | ((3U 
                                                      == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                      ? (IData)(vlSelfRef.__PVT__dataBuf_3_0)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                       ? (IData)(vlSelfRef.__PVT__dataBuf_2_0)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                        ? (IData)(vlSelfRef.__PVT__dataBuf_1_0)
                                                        : (IData)(vlSelfRef.__PVT__dataBuf_0_0)))));
}

VL_INLINE_OPT void VVerifyTop_SinkC_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC__1(VVerifyTop_SinkC_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__taskArb_io_chosen = ((IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1)
                                           ? 1U : ((IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_2)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_3)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__taskValids_0)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__taskValids_1)
                                                       ? 1U
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__taskValids_2)
                                                        ? 2U
                                                        : 3U))))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__taskBuf_0_channel = 0U;
        vlSelfRef.__PVT__taskBuf_0_set = 0U;
        vlSelfRef.__PVT__taskBuf_0_tag = 0U;
        vlSelfRef.__PVT__taskBuf_0_off = 0U;
        vlSelfRef.__PVT__taskBuf_0_opcode = 0U;
        vlSelfRef.__PVT__taskBuf_0_param = 0U;
        vlSelfRef.__PVT__taskBuf_0_sourceId = 0U;
        vlSelfRef.__PVT__taskBuf_0_bufIdx = 0U;
        vlSelfRef.__PVT__taskBuf_1_channel = 0U;
        vlSelfRef.__PVT__taskBuf_1_set = 0U;
        vlSelfRef.__PVT__taskBuf_1_tag = 0U;
        vlSelfRef.__PVT__taskBuf_1_off = 0U;
        vlSelfRef.__PVT__taskBuf_1_opcode = 0U;
        vlSelfRef.__PVT__taskBuf_1_param = 0U;
        vlSelfRef.__PVT__taskBuf_1_sourceId = 0U;
        vlSelfRef.__PVT__taskBuf_1_bufIdx = 0U;
        vlSelfRef.__PVT__taskBuf_2_channel = 0U;
        vlSelfRef.__PVT__taskBuf_2_set = 0U;
        vlSelfRef.__PVT__taskBuf_2_tag = 0U;
        vlSelfRef.__PVT__taskBuf_2_off = 0U;
        vlSelfRef.__PVT__taskBuf_2_opcode = 0U;
        vlSelfRef.__PVT__taskBuf_2_param = 0U;
        vlSelfRef.__PVT__taskBuf_2_sourceId = 0U;
        vlSelfRef.__PVT__taskBuf_2_bufIdx = 0U;
        vlSelfRef.__PVT__taskBuf_3_channel = 0U;
        vlSelfRef.__PVT__taskBuf_3_set = 0U;
        vlSelfRef.__PVT__taskBuf_3_tag = 0U;
        vlSelfRef.__PVT__taskBuf_3_off = 0U;
        vlSelfRef.__PVT__taskBuf_3_opcode = 0U;
        vlSelfRef.__PVT__taskBuf_3_param = 0U;
        vlSelfRef.__PVT__taskBuf_3_sourceId = 0U;
        vlSelfRef.__PVT__taskBuf_3_bufIdx = 0U;
        vlSelfRef.__PVT__nextPtrReg = 0U;
        vlSelfRef.__PVT__counter = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
             & (IData)(vlSelfRef.io_resp_respInfo_last))) {
            if ((1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                    vlSelfRef.__PVT__taskBuf_0_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_0_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_0_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_0_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_0_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_0_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_0_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_0_bufIdx 
                        = vlSelfRef.__PVT__nextPtrReg;
                } else {
                    vlSelfRef.__PVT__taskBuf_0_bufIdx 
                        = vlSelfRef.__PVT___GEN_126;
                }
                if ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                    vlSelfRef.__PVT__taskBuf_1_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_1_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_1_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_1_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_1_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_1_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_1_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_1_bufIdx 
                        = vlSelfRef.__PVT__nextPtrReg;
                } else {
                    vlSelfRef.__PVT__taskBuf_1_bufIdx 
                        = vlSelfRef.__PVT___GEN_127;
                }
                if ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                    vlSelfRef.__PVT__taskBuf_2_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_2_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_2_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_2_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_2_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_2_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_2_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_2_bufIdx 
                        = vlSelfRef.__PVT__nextPtrReg;
                } else {
                    vlSelfRef.__PVT__taskBuf_2_bufIdx 
                        = vlSelfRef.__PVT___GEN_128;
                }
                if ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                    vlSelfRef.__PVT__taskBuf_3_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_3_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_3_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_3_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_3_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_3_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_3_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_3_bufIdx 
                        = vlSelfRef.__PVT__nextPtrReg;
                } else {
                    vlSelfRef.__PVT__taskBuf_3_bufIdx 
                        = vlSelfRef.__PVT___GEN_129;
                }
            } else {
                if ((0U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                    vlSelfRef.__PVT__taskBuf_0_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_0_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_0_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_0_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_0_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_0_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_0_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_0_bufIdx 
                        = vlSelfRef.__PVT__nextPtr;
                } else {
                    vlSelfRef.__PVT__taskBuf_0_bufIdx 
                        = vlSelfRef.__PVT___GEN_310;
                }
                if ((1U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                    vlSelfRef.__PVT__taskBuf_1_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_1_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_1_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_1_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_1_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_1_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_1_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_1_bufIdx 
                        = vlSelfRef.__PVT__nextPtr;
                } else {
                    vlSelfRef.__PVT__taskBuf_1_bufIdx 
                        = vlSelfRef.__PVT___GEN_311;
                }
                if ((2U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                    vlSelfRef.__PVT__taskBuf_2_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_2_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_2_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_2_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_2_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_2_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_2_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_2_bufIdx 
                        = vlSelfRef.__PVT__nextPtr;
                } else {
                    vlSelfRef.__PVT__taskBuf_2_bufIdx 
                        = vlSelfRef.__PVT___GEN_312;
                }
                if ((3U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                    vlSelfRef.__PVT__taskBuf_3_channel = 4U;
                    vlSelfRef.__PVT__taskBuf_3_set 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 1U));
                    vlSelfRef.__PVT__taskBuf_3_tag 
                        = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 3U));
                    vlSelfRef.__PVT__taskBuf_3_off 
                        = (1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_address));
                    vlSelfRef.__PVT__taskBuf_3_opcode 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode;
                    vlSelfRef.__PVT__taskBuf_3_param 
                        = vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_param;
                    vlSelfRef.__PVT__taskBuf_3_sourceId 
                        = vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__ram_source
                        [vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__deq_ptr_value];
                    vlSelfRef.__PVT__taskBuf_3_bufIdx 
                        = vlSelfRef.__PVT__nextPtr;
                } else {
                    vlSelfRef.__PVT__taskBuf_3_bufIdx 
                        = vlSelfRef.__PVT___GEN_313;
                }
            }
        }
        if (((((IData)(vlSelfRef.__PVT___T) & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode) 
                                               >> 1U)) 
              & (~ (IData)(vlSelfRef.__PVT__counter))) 
             & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode))) {
            vlSelfRef.__PVT__nextPtrReg = ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.__PVT__bufValids))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__bufValids))
                                                    ? 3U
                                                    : 2U)
                                                : 1U)
                                            : 0U);
        }
        if (vlSelfRef.__PVT___T) {
            vlSelfRef.__PVT__counter = ((IData)(vlSelfRef.__PVT__counter1)
                                         ? (IData)(vlSelfRef.__PVT__beats1)
                                         : (IData)(vlSelfRef.__PVT__counter1));
        }
    }
    if ((3U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
        vlSelfRef.io_task_valid = vlSelfRef.__PVT__taskValids_3;
        vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_3_bufIdx;
        vlSelfRef.io_task_bits_sourceId = vlSelfRef.__PVT__taskBuf_3_sourceId;
        vlSelfRef.io_task_bits_tag = vlSelfRef.__PVT__taskBuf_3_tag;
        vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_3_opcode;
        vlSelfRef.io_task_bits_channel = vlSelfRef.__PVT__taskBuf_3_channel;
        vlSelfRef.io_task_bits_set = vlSelfRef.__PVT__taskBuf_3_set;
    } else if ((2U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
        vlSelfRef.io_task_valid = vlSelfRef.__PVT__taskValids_2;
        vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_2_bufIdx;
        vlSelfRef.io_task_bits_sourceId = vlSelfRef.__PVT__taskBuf_2_sourceId;
        vlSelfRef.io_task_bits_tag = vlSelfRef.__PVT__taskBuf_2_tag;
        vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_2_opcode;
        vlSelfRef.io_task_bits_channel = vlSelfRef.__PVT__taskBuf_2_channel;
        vlSelfRef.io_task_bits_set = vlSelfRef.__PVT__taskBuf_2_set;
    } else if ((1U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
        vlSelfRef.io_task_valid = vlSelfRef.__PVT__taskValids_1;
        vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_1_bufIdx;
        vlSelfRef.io_task_bits_sourceId = vlSelfRef.__PVT__taskBuf_1_sourceId;
        vlSelfRef.io_task_bits_tag = vlSelfRef.__PVT__taskBuf_1_tag;
        vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_1_opcode;
        vlSelfRef.io_task_bits_channel = vlSelfRef.__PVT__taskBuf_1_channel;
        vlSelfRef.io_task_bits_set = vlSelfRef.__PVT__taskBuf_1_set;
    } else {
        vlSelfRef.io_task_valid = vlSelfRef.__PVT__taskValids_0;
        vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_0_bufIdx;
        vlSelfRef.io_task_bits_sourceId = vlSelfRef.__PVT__taskBuf_0_sourceId;
        vlSelfRef.io_task_bits_tag = vlSelfRef.__PVT__taskBuf_0_tag;
        vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_0_opcode;
        vlSelfRef.io_task_bits_channel = vlSelfRef.__PVT__taskBuf_0_channel;
        vlSelfRef.io_task_bits_set = vlSelfRef.__PVT__taskBuf_0_set;
    }
    vlSelfRef.__PVT___newdataMask_T_14 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                          & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_blockRefill))));
    vlSelfRef.__PVT___newdataMask_T_19 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                          & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_blockRefill))));
    vlSelfRef.__PVT__io_refillBufWrite_bits_id_lo = 
        ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
           & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_set) 
               == (IData)(vlSelfRef.io_task_bits_set)) 
              & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_tag) 
                  == (IData)(vlSelfRef.io_task_bits_tag)) 
                 & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io___05FmsInfo_bits_blockRefill)))) 
          << 1U) | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                    & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_set) 
                        == (IData)(vlSelfRef.io_task_bits_set)) 
                       & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_tag) 
                           == (IData)(vlSelfRef.io_task_bits_tag)) 
                          & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io_msInfo_bits_blockRefill)))));
    vlSelfRef.__PVT__bufValids = (((((IData)(vlSelfRef.__PVT__taskValids_3) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__taskValids_2) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__taskValids_1) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__taskValids_0))) 
                                  | (((((IData)(vlSelfRef.__PVT__beatValids_3_1) 
                                        | (IData)(vlSelfRef.__PVT__beatValids_3_0)) 
                                       << 3U) | (((IData)(vlSelfRef.__PVT__beatValids_2_1) 
                                                  | (IData)(vlSelfRef.__PVT__beatValids_2_0)) 
                                                 << 2U)) 
                                     | ((((IData)(vlSelfRef.__PVT__beatValids_1_1) 
                                          | (IData)(vlSelfRef.__PVT__beatValids_1_0)) 
                                         << 1U) | ((IData)(vlSelfRef.__PVT__beatValids_0_1) 
                                                   | (IData)(vlSelfRef.__PVT__beatValids_0_0)))));
    vlSelfRef.__PVT__io_refillBufWrite_bits_id_hi = 
        (((IData)(vlSelfRef.__PVT___newdataMask_T_19) 
          << 1U) | (IData)(vlSelfRef.__PVT___newdataMask_T_14));
    vlSelfRef.__PVT___GEN_126 = ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_0_bufIdx));
    vlSelfRef.__PVT___GEN_127 = ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_1_bufIdx));
    vlSelfRef.__PVT___GEN_128 = ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_2_bufIdx));
    vlSelfRef.__PVT___GEN_129 = ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_3_bufIdx));
    vlSelfRef.__PVT___GEN_82 = ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT___GEN_83 = ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___GEN_84 = ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___GEN_85 = ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_3));
    vlSelfRef.__PVT__next_counter_3 = (vlSelfRef.__PVT__counter_4 
                                       + (QData)((IData)(
                                                         (0xfU 
                                                          == (IData)(vlSelfRef.__PVT__bufValids)))));
    vlSelfRef.__PVT__nextPtr = ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                                 ? ((2U & (IData)(vlSelfRef.__PVT__bufValids))
                                     ? ((4U & (IData)(vlSelfRef.__PVT__bufValids))
                                         ? 3U : 2U)
                                     : 1U) : 0U);
    vlSelfRef.__PVT___GEN_310 = ((0U == (IData)(vlSelfRef.__PVT__nextPtr))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_0_bufIdx));
    vlSelfRef.__PVT___GEN_311 = ((1U == (IData)(vlSelfRef.__PVT__nextPtr))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_1_bufIdx));
    vlSelfRef.__PVT___GEN_312 = ((2U == (IData)(vlSelfRef.__PVT__nextPtr))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_2_bufIdx));
    vlSelfRef.__PVT___GEN_313 = ((3U == (IData)(vlSelfRef.__PVT__nextPtr))
                                  ? 0U : (IData)(vlSelfRef.__PVT__taskBuf_3_bufIdx));
    vlSelfRef.__PVT___GEN_266 = ((0U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT___GEN_267 = ((1U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___GEN_268 = ((2U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___GEN_269 = ((3U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_3));
    vlSelfRef.__PVT__counter1 = (1U & (~ (IData)(vlSelfRef.__PVT__counter)));
}

VL_INLINE_OPT void VVerifyTop_SinkC_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC__2(VVerifyTop_SinkC_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__beat;
    __PVT__beat = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_0;
    __VdfgRegularize_hd88b912b_1_0 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_1;
    __VdfgRegularize_hd88b912b_1_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_2;
    __VdfgRegularize_hd88b912b_1_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_3;
    __VdfgRegularize_hd88b912b_1_3 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_4;
    __VdfgRegularize_hd88b912b_1_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_5;
    __VdfgRegularize_hd88b912b_1_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_6;
    __VdfgRegularize_hd88b912b_1_6 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_7;
    __VdfgRegularize_hd88b912b_1_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_11;
    __VdfgRegularize_hd88b912b_1_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_12;
    __VdfgRegularize_hd88b912b_1_12 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_13;
    __VdfgRegularize_hd88b912b_1_13 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_14;
    __VdfgRegularize_hd88b912b_1_14 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_15;
    __VdfgRegularize_hd88b912b_1_15 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_16;
    __VdfgRegularize_hd88b912b_1_16 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_17;
    __VdfgRegularize_hd88b912b_1_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hd88b912b_1_18;
    __VdfgRegularize_hd88b912b_1_18 = 0;
    // Body
    vlSelfRef.io_releaseBufWrite_bits_data_data = (
                                                   ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.__PVT__probeAckDataBuf));
    vlSelfRef.__PVT__beats1 = (1U & ((~ ((IData)(1U) 
                                         << (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_size))) 
                                     & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.io_c_ready = (1U & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode) 
                                      >> 1U)) | ((~ (IData)(
                                                            (0xfU 
                                                             == (IData)(vlSelfRef.__PVT__bufValids)))) 
                                                 | (IData)(vlSelfRef.__PVT__counter))));
    vlSelfRef.__PVT___probeAckDataBuf_T_1 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q_io_deq_valid) 
                                             & (5U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__taskArb__DOT___ctrl_validMask_grantMask_lastGrant_T 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready) 
           & (IData)(vlSelfRef.io_task_valid));
    vlSelfRef.__PVT___T_19 = (((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_3)) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_3 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                                                          & (IData)(vlSelfRef.io_task_valid)))));
    vlSelfRef.__PVT___T_20 = ((((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_4)) 
                                | (1U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant))) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___T_21 = ((((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_5)) 
                                | ((~ (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1)) 
                                   & (2U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)))) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___T_22 = ((((~ ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_5) 
                                    | (IData)(vlSelfRef.__PVT__taskValids_2))) 
                                | ((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_hc75b2cfb_0_2)) 
                                   & (3U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)))) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_3));
    __PVT__beat = ((IData)(vlSelfRef.__PVT__counter) 
                   & (IData)(vlSelfRef.__PVT__beats1));
    vlSelfRef.io_resp_respInfo_last = (1U & ((~ (IData)(vlSelfRef.__PVT__beats1)) 
                                             | (IData)(vlSelfRef.__PVT__counter)));
    vlSelfRef.__PVT__stall = ((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q_io_deq_valid) 
                              & ((~ (IData)(vlSelfRef.io_c_ready)) 
                                 & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode) 
                                    >> 1U)));
    vlSelfRef.__PVT___T = ((IData)(vlSelfRef.io_c_ready) 
                           & (IData)(vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q_io_deq_valid));
    __VdfgRegularize_hd88b912b_1_18 = ((~ (IData)(__PVT__beat)) 
                                       & (0U == (IData)(vlSelfRef.__PVT__nextPtr)));
    __VdfgRegularize_hd88b912b_1_0 = ((0U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                      & (IData)(__PVT__beat));
    __VdfgRegularize_hd88b912b_1_17 = ((~ (IData)(__PVT__beat)) 
                                       & (1U == (IData)(vlSelfRef.__PVT__nextPtr)));
    __VdfgRegularize_hd88b912b_1_1 = ((1U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                      & (IData)(__PVT__beat));
    __VdfgRegularize_hd88b912b_1_16 = ((~ (IData)(__PVT__beat)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__nextPtr)));
    __VdfgRegularize_hd88b912b_1_2 = ((2U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                      & (IData)(__PVT__beat));
    __VdfgRegularize_hd88b912b_1_15 = ((~ (IData)(__PVT__beat)) 
                                       & (3U == (IData)(vlSelfRef.__PVT__nextPtr)));
    __VdfgRegularize_hd88b912b_1_3 = ((3U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                      & (IData)(__PVT__beat));
    __VdfgRegularize_hd88b912b_1_14 = ((~ (IData)(__PVT__beat)) 
                                       & (0U == (IData)(vlSelfRef.__PVT__nextPtrReg)));
    __VdfgRegularize_hd88b912b_1_4 = ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                      & (IData)(__PVT__beat));
    __VdfgRegularize_hd88b912b_1_13 = ((~ (IData)(__PVT__beat)) 
                                       & (1U == (IData)(vlSelfRef.__PVT__nextPtrReg)));
    __VdfgRegularize_hd88b912b_1_5 = ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                      & (IData)(__PVT__beat));
    __VdfgRegularize_hd88b912b_1_12 = ((~ (IData)(__PVT__beat)) 
                                       & (2U == (IData)(vlSelfRef.__PVT__nextPtrReg)));
    __VdfgRegularize_hd88b912b_1_6 = ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                      & (IData)(__PVT__beat));
    __VdfgRegularize_hd88b912b_1_11 = ((~ (IData)(__PVT__beat)) 
                                       & (3U == (IData)(vlSelfRef.__PVT__nextPtrReg)));
    __VdfgRegularize_hd88b912b_1_7 = ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                      & (IData)(__PVT__beat));
    vlSelfRef.io_releaseBufWrite_valid = ((IData)(vlSelfRef.__PVT___probeAckDataBuf_T_1) 
                                          & (IData)(vlSelfRef.io_resp_respInfo_last));
    vlSelfRef.io_resp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q_io_deq_valid) 
                               & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode) 
                                      >> 1U)) & ((~ (IData)(vlSelfRef.__PVT__counter)) 
                                                 | (IData)(vlSelfRef.io_resp_respInfo_last))));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter_1 
                                     + (QData)((IData)(vlSelfRef.__PVT__stall)));
    vlSelfRef.__PVT__next_counter_1 = (vlSelfRef.__PVT__counter_2 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__stall) 
                                                          & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode) 
                                                             & ((~ (IData)(vlSelfRef.__PVT__counter)) 
                                                                & (0xfU 
                                                                   == (IData)(vlSelfRef.__PVT__bufValids))))))));
    vlSelfRef.__PVT___nextPtrReg_T_1 = ((IData)(vlSelfRef.__PVT___T) 
                                        & ((IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode) 
                                           >> 1U));
    vlSelfRef.__PVT___GEN_2 = ((IData)(__VdfgRegularize_hd88b912b_1_18)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_0_0));
    vlSelfRef.__PVT___GEN_3 = ((IData)(__VdfgRegularize_hd88b912b_1_0)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_0_1));
    vlSelfRef.__PVT___GEN_4 = ((IData)(__VdfgRegularize_hd88b912b_1_17)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_1_0));
    vlSelfRef.__PVT___GEN_5 = ((IData)(__VdfgRegularize_hd88b912b_1_1)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_1_1));
    vlSelfRef.__PVT___GEN_6 = ((IData)(__VdfgRegularize_hd88b912b_1_16)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_2_0));
    vlSelfRef.__PVT___GEN_7 = ((IData)(__VdfgRegularize_hd88b912b_1_2)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_2_1));
    vlSelfRef.__PVT___GEN_8 = ((IData)(__VdfgRegularize_hd88b912b_1_15)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_3_0));
    vlSelfRef.__PVT___GEN_9 = ((IData)(__VdfgRegularize_hd88b912b_1_3)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                : (IData)(vlSelfRef.__PVT__dataBuf_3_1));
    vlSelfRef.__PVT___GEN_18 = ((IData)(__VdfgRegularize_hd88b912b_1_14)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_0_0));
    vlSelfRef.__PVT___GEN_19 = ((IData)(__VdfgRegularize_hd88b912b_1_4)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_0_1));
    vlSelfRef.__PVT___GEN_20 = ((IData)(__VdfgRegularize_hd88b912b_1_13)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_1_0));
    vlSelfRef.__PVT___GEN_21 = ((IData)(__VdfgRegularize_hd88b912b_1_5)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_1_1));
    vlSelfRef.__PVT___GEN_22 = ((IData)(__VdfgRegularize_hd88b912b_1_12)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_2_0));
    vlSelfRef.__PVT___GEN_23 = ((IData)(__VdfgRegularize_hd88b912b_1_6)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_2_1));
    vlSelfRef.__PVT___GEN_24 = ((IData)(__VdfgRegularize_hd88b912b_1_11)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_3_0));
    vlSelfRef.__PVT___GEN_25 = ((IData)(__VdfgRegularize_hd88b912b_1_7)
                                 ? (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_data)
                                 : (IData)(vlSelfRef.__PVT__dataBuf_3_1));
    if (vlSelfRef.__PVT___nextPtrReg_T_1) {
        if ((1U & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_c_bits_opcode))) {
            if (vlSelfRef.__PVT__counter) {
                vlSelfRef.__PVT___GEN_74 = ((IData)(__VdfgRegularize_hd88b912b_1_14) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_0));
                vlSelfRef.__PVT___GEN_75 = ((IData)(__VdfgRegularize_hd88b912b_1_4) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_1));
                vlSelfRef.__PVT___GEN_76 = ((IData)(__VdfgRegularize_hd88b912b_1_13) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_0));
                vlSelfRef.__PVT___GEN_77 = ((IData)(__VdfgRegularize_hd88b912b_1_5) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_1));
                vlSelfRef.__PVT___GEN_78 = ((IData)(__VdfgRegularize_hd88b912b_1_12) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_0));
                vlSelfRef.__PVT___GEN_79 = ((IData)(__VdfgRegularize_hd88b912b_1_6) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_1));
                vlSelfRef.__PVT___GEN_80 = ((IData)(__VdfgRegularize_hd88b912b_1_11) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_0));
                vlSelfRef.__PVT___GEN_81 = ((IData)(__VdfgRegularize_hd88b912b_1_7) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_1));
            } else {
                vlSelfRef.__PVT___GEN_74 = ((IData)(__VdfgRegularize_hd88b912b_1_18) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_0));
                vlSelfRef.__PVT___GEN_75 = ((IData)(__VdfgRegularize_hd88b912b_1_0) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_1));
                vlSelfRef.__PVT___GEN_76 = ((IData)(__VdfgRegularize_hd88b912b_1_17) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_0));
                vlSelfRef.__PVT___GEN_77 = ((IData)(__VdfgRegularize_hd88b912b_1_1) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_1));
                vlSelfRef.__PVT___GEN_78 = ((IData)(__VdfgRegularize_hd88b912b_1_16) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_0));
                vlSelfRef.__PVT___GEN_79 = ((IData)(__VdfgRegularize_hd88b912b_1_2) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_1));
                vlSelfRef.__PVT___GEN_80 = ((IData)(__VdfgRegularize_hd88b912b_1_15) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_0));
                vlSelfRef.__PVT___GEN_81 = ((IData)(__VdfgRegularize_hd88b912b_1_3) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_1));
            }
        } else {
            vlSelfRef.__PVT___GEN_74 = vlSelfRef.__PVT__beatValids_0_0;
            vlSelfRef.__PVT___GEN_75 = vlSelfRef.__PVT__beatValids_0_1;
            vlSelfRef.__PVT___GEN_76 = vlSelfRef.__PVT__beatValids_1_0;
            vlSelfRef.__PVT___GEN_77 = vlSelfRef.__PVT__beatValids_1_1;
            vlSelfRef.__PVT___GEN_78 = vlSelfRef.__PVT__beatValids_2_0;
            vlSelfRef.__PVT___GEN_79 = vlSelfRef.__PVT__beatValids_2_1;
            vlSelfRef.__PVT___GEN_80 = vlSelfRef.__PVT__beatValids_3_0;
            vlSelfRef.__PVT___GEN_81 = vlSelfRef.__PVT__beatValids_3_1;
        }
    } else {
        vlSelfRef.__PVT___GEN_74 = vlSelfRef.__PVT__beatValids_0_0;
        vlSelfRef.__PVT___GEN_75 = vlSelfRef.__PVT__beatValids_0_1;
        vlSelfRef.__PVT___GEN_76 = vlSelfRef.__PVT__beatValids_1_0;
        vlSelfRef.__PVT___GEN_77 = vlSelfRef.__PVT__beatValids_1_1;
        vlSelfRef.__PVT___GEN_78 = vlSelfRef.__PVT__beatValids_2_0;
        vlSelfRef.__PVT___GEN_79 = vlSelfRef.__PVT__beatValids_2_1;
        vlSelfRef.__PVT___GEN_80 = vlSelfRef.__PVT__beatValids_3_0;
        vlSelfRef.__PVT___GEN_81 = vlSelfRef.__PVT__beatValids_3_1;
    }
}
