// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_SinkC.h"
#include "VVerifyTop__Syms.h"

VL_INLINE_OPT void VVerifyTop_SinkC___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC__0(VVerifyTop_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_c_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_timer,
                      64,vlSelfRef.__PVT__counter_1);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_1_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_c_stall_for_noSpace, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_1_timer,
                      64,vlSelfRef.__PVT__counter_2);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_toReqArb_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,(vlSelfRef.__PVT__counter_3 
                          + (QData)((IData)(((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
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
        vlSelfRef.__PVT__taskValids_2 = 0U;
        vlSelfRef.__PVT__taskValids_1 = 0U;
        vlSelfRef.__PVT__counter_1 = 0ULL;
        vlSelfRef.__PVT__counter_2 = 0ULL;
        vlSelfRef.__PVT__counter_4 = 0ULL;
        vlSelfRef.__PVT__counter_5 = 0ULL;
        vlSelfRef.__PVT__counter_3 = 0ULL;
        vlSelfRef.__PVT__dataBuf_3_0 = 0U;
        vlSelfRef.__PVT__dataBuf_2_0 = 0U;
        vlSelfRef.__PVT__dataBuf_1_0 = 0U;
        vlSelfRef.__PVT__dataBuf_0_0 = 0U;
        vlSelfRef.__PVT__dataBuf_3_1 = 0U;
        vlSelfRef.__PVT__dataBuf_2_1 = 0U;
        vlSelfRef.__PVT__dataBuf_1_1 = 0U;
        vlSelfRef.__PVT__dataBuf_0_1 = 0U;
    } else {
        if (vlSelfRef.__PVT___T_23) {
            vlSelfRef.__PVT__taskValids_0 = 0U;
        }
        if (vlSelfRef.__PVT___T_26) {
            vlSelfRef.__PVT__taskValids_3 = 0U;
        }
        if (vlSelfRef.__PVT___T_25) {
            vlSelfRef.__PVT__taskValids_2 = 0U;
        }
        if (vlSelfRef.__PVT___T_24) {
            vlSelfRef.__PVT__taskValids_1 = 0U;
        }
        vlSelfRef.__PVT__counter_1 = ((IData)(vlSelfRef.__PVT__helper_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter);
        vlSelfRef.__PVT__counter_2 = ((IData)(vlSelfRef.__PVT__helper_1_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_1);
        vlSelfRef.__PVT__counter_4 = ((IData)(vlSelfRef.__PVT__helper_3_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_3);
        vlSelfRef.__PVT__counter_5 = ((IData)(vlSelfRef.__PVT__helper_4_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_4);
        vlSelfRef.__PVT__counter_3 = ((IData)(vlSelfRef.__PVT__helper_2_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_2);
    }
    vlSelfRef.__PVT__io_refillBufWrite_valid_REG = 
        ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
         (((IData)(vlSelfRef.__PVT__taskArb__DOT___ctrl_validMask_grantMask_lastGrant_T) 
           & (7U == (IData)(vlSelfRef.io_task_bits_opcode))) 
          & ((IData)(vlSelfRef.__PVT___newdataMask_T_19) 
             | ((IData)(vlSelfRef.__PVT___newdataMask_T_14) 
                | (0U != (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_id_lo))))));
    vlSelfRef.__PVT__REG_2 = vlSelfRef.io_task_bits_bufIdx;
    vlSelfRef.__PVT___GEN_74 = vlSelfRef.__PVT__beatValids_0_0;
    vlSelfRef.__PVT___GEN_75 = vlSelfRef.__PVT__beatValids_0_1;
    vlSelfRef.__PVT___GEN_76 = vlSelfRef.__PVT__beatValids_1_0;
    vlSelfRef.__PVT___GEN_77 = vlSelfRef.__PVT__beatValids_1_1;
    vlSelfRef.__PVT___GEN_78 = vlSelfRef.__PVT__beatValids_2_0;
    vlSelfRef.__PVT___GEN_79 = vlSelfRef.__PVT__beatValids_2_1;
    vlSelfRef.__PVT___GEN_80 = vlSelfRef.__PVT__beatValids_3_0;
    vlSelfRef.__PVT___GEN_81 = vlSelfRef.__PVT__beatValids_3_1;
    vlSelfRef.__PVT__REG_1 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.io_sinkC_ready) 
                              & (IData)(vlSelfRef.io_task_valid));
    vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_3 
        = ((IData)(vlSelfRef.__PVT__taskValids_3) & 
           (3U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_2 
        = ((IData)(vlSelfRef.__PVT__taskValids_2) & 
           (2U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)));
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
    vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1 
        = ((IData)(vlSelfRef.__PVT__taskValids_1) & 
           (1U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)));
    vlSelfRef.__PVT__next_counter = vlSelfRef.__PVT__counter_1;
    vlSelfRef.__PVT__next_counter_1 = vlSelfRef.__PVT__counter_2;
    vlSelfRef.__PVT__next_counter_4 = (vlSelfRef.__PVT__counter_5 
                                       + (QData)((IData)(vlSelfRef.__PVT__io_refillBufWrite_valid_REG)));
    vlSelfRef.__PVT__next_counter_3 = (vlSelfRef.__PVT__counter_4 
                                       + (QData)((IData)(
                                                         (0xfU 
                                                          == (IData)(vlSelfRef.__PVT__bufValids)))));
    vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_2 
        = ((IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_2));
    vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_3 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_2) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_3));
    vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_4 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_3) 
           | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_5 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_4) 
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

VL_INLINE_OPT void VVerifyTop_SinkC___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC__1(VVerifyTop_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC__1\n"); );
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
    vlSelfRef.__PVT___newdataMask_T_14 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_blockRefill))));
    vlSelfRef.__PVT___newdataMask_T_19 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_blockRefill))));
    vlSelfRef.__PVT__io_refillBufWrite_bits_id_lo = 
        ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
           & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set) 
               == (IData)(vlSelfRef.io_task_bits_set)) 
              & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag) 
                  == (IData)(vlSelfRef.io_task_bits_tag)) 
                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_blockRefill)))) 
          << 1U) | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                    & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                        == (IData)(vlSelfRef.io_task_bits_set)) 
                       & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag) 
                           == (IData)(vlSelfRef.io_task_bits_tag)) 
                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_blockRefill)))));
    vlSelfRef.__PVT__io_refillBufWrite_bits_id_hi = 
        (((IData)(vlSelfRef.__PVT___newdataMask_T_19) 
          << 1U) | (IData)(vlSelfRef.__PVT___newdataMask_T_14));
}

VL_INLINE_OPT void VVerifyTop_SinkC___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC__2(VVerifyTop_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__taskArb__DOT___ctrl_validMask_grantMask_lastGrant_T 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.io_sinkC_ready) 
           & (IData)(vlSelfRef.io_task_valid));
    vlSelfRef.__PVT___T_23 = (((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_3)) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_3 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                                                          & (IData)(vlSelfRef.io_task_valid)))));
    vlSelfRef.__PVT___T_24 = ((((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_4)) 
                                | (1U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant))) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___T_25 = ((((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_5)) 
                                | ((~ (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1)) 
                                   & (2U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)))) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___T_26 = ((((~ ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_5) 
                                    | (IData)(vlSelfRef.__PVT__taskValids_2))) 
                                | ((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_2)) 
                                   & (3U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)))) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_3));
}

VL_INLINE_OPT void VVerifyTop_SinkC___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC__0(VVerifyTop_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_c_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_timer,
                      64,vlSelfRef.__PVT__counter_1);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_1_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_c_stall_for_noSpace, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_1_timer,
                      64,vlSelfRef.__PVT__counter_2);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: sinkC_toReqArb_stall, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,(vlSelfRef.__PVT__counter_3 
                          + (QData)((IData)(((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
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
        vlSelfRef.__PVT__taskValids_2 = 0U;
        vlSelfRef.__PVT__taskValids_1 = 0U;
        vlSelfRef.__PVT__counter_1 = 0ULL;
        vlSelfRef.__PVT__counter_2 = 0ULL;
        vlSelfRef.__PVT__counter_4 = 0ULL;
        vlSelfRef.__PVT__counter_5 = 0ULL;
        vlSelfRef.__PVT__counter_3 = 0ULL;
        vlSelfRef.__PVT__dataBuf_3_0 = 0U;
        vlSelfRef.__PVT__dataBuf_2_0 = 0U;
        vlSelfRef.__PVT__dataBuf_1_0 = 0U;
        vlSelfRef.__PVT__dataBuf_0_0 = 0U;
        vlSelfRef.__PVT__dataBuf_3_1 = 0U;
        vlSelfRef.__PVT__dataBuf_2_1 = 0U;
        vlSelfRef.__PVT__dataBuf_1_1 = 0U;
        vlSelfRef.__PVT__dataBuf_0_1 = 0U;
    } else {
        if (vlSelfRef.__PVT___T_23) {
            vlSelfRef.__PVT__taskValids_0 = 0U;
        }
        if (vlSelfRef.__PVT___T_26) {
            vlSelfRef.__PVT__taskValids_3 = 0U;
        }
        if (vlSelfRef.__PVT___T_25) {
            vlSelfRef.__PVT__taskValids_2 = 0U;
        }
        if (vlSelfRef.__PVT___T_24) {
            vlSelfRef.__PVT__taskValids_1 = 0U;
        }
        vlSelfRef.__PVT__counter_1 = ((IData)(vlSelfRef.__PVT__helper_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter);
        vlSelfRef.__PVT__counter_2 = ((IData)(vlSelfRef.__PVT__helper_1_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_1);
        vlSelfRef.__PVT__counter_4 = ((IData)(vlSelfRef.__PVT__helper_3_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_3);
        vlSelfRef.__PVT__counter_5 = ((IData)(vlSelfRef.__PVT__helper_4_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_4);
        vlSelfRef.__PVT__counter_3 = ((IData)(vlSelfRef.__PVT__helper_2_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_2);
    }
    vlSelfRef.__PVT__io_refillBufWrite_valid_REG = 
        ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
         (((IData)(vlSelfRef.__PVT__taskArb__DOT___ctrl_validMask_grantMask_lastGrant_T) 
           & (7U == (IData)(vlSelfRef.io_task_bits_opcode))) 
          & ((IData)(vlSelfRef.__PVT___newdataMask_T_19) 
             | ((IData)(vlSelfRef.__PVT___newdataMask_T_14) 
                | (0U != (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_id_lo))))));
    vlSelfRef.__PVT__REG_2 = vlSelfRef.io_task_bits_bufIdx;
    vlSelfRef.__PVT___GEN_74 = vlSelfRef.__PVT__beatValids_0_0;
    vlSelfRef.__PVT___GEN_75 = vlSelfRef.__PVT__beatValids_0_1;
    vlSelfRef.__PVT___GEN_76 = vlSelfRef.__PVT__beatValids_1_0;
    vlSelfRef.__PVT___GEN_77 = vlSelfRef.__PVT__beatValids_1_1;
    vlSelfRef.__PVT___GEN_78 = vlSelfRef.__PVT__beatValids_2_0;
    vlSelfRef.__PVT___GEN_79 = vlSelfRef.__PVT__beatValids_2_1;
    vlSelfRef.__PVT___GEN_80 = vlSelfRef.__PVT__beatValids_3_0;
    vlSelfRef.__PVT___GEN_81 = vlSelfRef.__PVT__beatValids_3_1;
    vlSelfRef.__PVT__REG_1 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready) 
                              & (IData)(vlSelfRef.io_task_valid));
    vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_3 
        = ((IData)(vlSelfRef.__PVT__taskValids_3) & 
           (3U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_2 
        = ((IData)(vlSelfRef.__PVT__taskValids_2) & 
           (2U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)));
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
    vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1 
        = ((IData)(vlSelfRef.__PVT__taskValids_1) & 
           (1U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)));
    vlSelfRef.__PVT__next_counter = vlSelfRef.__PVT__counter_1;
    vlSelfRef.__PVT__next_counter_1 = vlSelfRef.__PVT__counter_2;
    vlSelfRef.__PVT__next_counter_4 = (vlSelfRef.__PVT__counter_5 
                                       + (QData)((IData)(vlSelfRef.__PVT__io_refillBufWrite_valid_REG)));
    vlSelfRef.__PVT__next_counter_3 = (vlSelfRef.__PVT__counter_4 
                                       + (QData)((IData)(
                                                         (0xfU 
                                                          == (IData)(vlSelfRef.__PVT__bufValids)))));
    vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_2 
        = ((IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_2));
    vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_3 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_2) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_3));
    vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_4 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_3) 
           | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_5 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_4) 
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

VL_INLINE_OPT void VVerifyTop_SinkC___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC__1(VVerifyTop_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC__1\n"); );
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
    vlSelfRef.__PVT___newdataMask_T_14 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_blockRefill))));
    vlSelfRef.__PVT___newdataMask_T_19 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_blockRefill))));
    vlSelfRef.__PVT__io_refillBufWrite_bits_id_lo = 
        ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
           & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set) 
               == (IData)(vlSelfRef.io_task_bits_set)) 
              & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag) 
                  == (IData)(vlSelfRef.io_task_bits_tag)) 
                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_blockRefill)))) 
          << 1U) | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                    & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                        == (IData)(vlSelfRef.io_task_bits_set)) 
                       & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag) 
                           == (IData)(vlSelfRef.io_task_bits_tag)) 
                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_blockRefill)))));
    vlSelfRef.__PVT__io_refillBufWrite_bits_id_hi = 
        (((IData)(vlSelfRef.__PVT___newdataMask_T_19) 
          << 1U) | (IData)(vlSelfRef.__PVT___newdataMask_T_14));
}

VL_INLINE_OPT void VVerifyTop_SinkC___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC__2(VVerifyTop_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__taskArb__DOT___ctrl_validMask_grantMask_lastGrant_T 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready) 
           & (IData)(vlSelfRef.io_task_valid));
    vlSelfRef.__PVT___T_23 = (((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_3)) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_3 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                                                          & (IData)(vlSelfRef.io_task_valid)))));
    vlSelfRef.__PVT___T_24 = ((((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_4)) 
                                | (1U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant))) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___T_25 = ((((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_5)) 
                                | ((~ (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1)) 
                                   & (2U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)))) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___T_26 = ((((~ ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_5) 
                                    | (IData)(vlSelfRef.__PVT__taskValids_2))) 
                                | ((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_2)) 
                                   & (3U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)))) 
                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_3));
}
