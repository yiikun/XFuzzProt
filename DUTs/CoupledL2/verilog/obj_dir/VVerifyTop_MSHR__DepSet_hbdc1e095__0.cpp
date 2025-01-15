// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_MSHR.h"
#include "VVerifyTop__Syms.h"

VL_INLINE_OPT void VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_113 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid)
                                  ? (IData)(vlSymsp->TOP.io_topInputNeedT_0)
                                  : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_param));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT___GEN_33 = 0ULL;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        vlSelfRef.__PVT___GEN_33 = (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                     & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)))
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__release_ts)));
    }
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__io_status_bits_w_c_resp;
    __PVT__io_status_bits_w_c_resp = 0;
    CData/*0:0*/ __PVT__mp_grant_task_merge_task_r_off;
    __PVT__mp_grant_task_merge_task_r_off = 0;
    CData/*0:0*/ __Vdly__req_valid;
    __Vdly__req_valid = 0;
    // Body
    __Vdly__req_valid = vlSelfRef.__PVT__req_valid;
    vlSelfRef.__PVT__acquire_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_31));
    vlSelfRef.__PVT__release_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_33));
    vlSelfRef.__PVT__state_w_pprobeack = ((IData)(vlSymsp->TOP.reset) 
                                          | (IData)(vlSelfRef.__PVT___GEN_12));
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid)
                                  ? ((IData)(vlSelfRef.__PVT___T_19)
                                      ? (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_84))
                                  : (IData)(vlSelfRef.__PVT___GEN_84)));
    vlSelfRef.__PVT__state_s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_164));
    vlSelfRef.__PVT__state_s_pprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_165));
    vlSelfRef.__PVT__state_s_rprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                           ? ((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                               ? ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_166))
                                               : (IData)(vlSelfRef.__PVT___GEN_166))
                                           : (IData)(vlSelfRef.__PVT___GEN_166)));
    vlSelfRef.__PVT__state_w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid)
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_13))
                                               : (IData)(vlSelfRef.__PVT___GEN_13)));
    vlSelfRef.__PVT__state_w_pprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | (IData)(vlSelfRef.__PVT___GEN_11));
    vlSelfRef.__PVT__state_w_replResp = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSelfRef.__PVT___GEN_220));
    vlSelfRef.__PVT__state_s_refill = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)
                                              ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_6))
                                              : (IData)(vlSelfRef.__PVT___GEN_6))));
    vlSelfRef.__PVT__state_w_rprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                                  ? 
                                                 ((0U 
                                                   != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                                   ? 
                                                  ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                   & (IData)(vlSelfRef.__PVT___GEN_9))
                                                   : (IData)(vlSelfRef.__PVT___GEN_9))
                                                  : (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__PVT__state_s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                         | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                 ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__mp_release_valid)
                                                  ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_5))))
                                             : (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1));
    __Vdly__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                         && ((1U & (~ ((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
                                       & (IData)(vlSelfRef.__PVT__req_valid)))) 
                             && (IData)(vlSelfRef.__PVT___GEN_0)));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_param = 0U;
        vlSelfRef.__PVT__timer = 0ULL;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid) {
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 5U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_param 
                = vlSymsp->TOP.io_topInputNeedT_0;
        }
        if (((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
             & (IData)(vlSelfRef.__PVT__req_valid))) {
            vlSelfRef.__PVT__timer = 0ULL;
        } else if (vlSelfRef.__PVT__req_valid) {
            vlSelfRef.__PVT__timer = vlSelfRef.__PVT___timer_T_1;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
            vlSelfRef.__PVT__timer = 1ULL;
        }
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (((IData)(vlSelfRef.__PVT__req_valid) 
                         & (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                        & (IData)(vlSelfRef.__PVT__dirResult_hit))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: MSHR can not receive prefetch hit req\n    at MSHR.scala:108 assert(!(req_valid && req_prefetch && dirResult.hit), \"MSHR can not receive prefetch hit req\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid) 
                        & (~ ((~ (IData)(vlSelfRef.__PVT__state_w_grantlast)) 
                              | ((~ (IData)(vlSelfRef.__PVT__state_w_grant)) 
                                 | (~ (IData)(vlSelfRef.__PVT__state_w_releaseack))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:564 assert(!(d_resp.valid && !io.status.bits.w_d_resp))\n",0);
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__dirResult_set = 0U;
        vlSelfRef.__PVT__req_alias = 0U;
        vlSelfRef.__PVT__req_set = 0U;
        vlSelfRef.__PVT__dirResult_tag = 0U;
        vlSelfRef.__PVT__req_tag = 0U;
        __PVT__mp_grant_task_merge_task_r_off = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId = 0U;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_set = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__req_s3_set;
            vlSelfRef.__PVT__req_alias = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_alias;
            vlSelfRef.__PVT__req_set = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set;
            vlSelfRef.__PVT__req_tag = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag;
        }
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_tag;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_tag;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid) {
            __PVT__mp_grant_task_merge_task_r_off = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__prefetcher__DOT__reqSource;
        }
    }
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__req_valid = __Vdly__req_valid;
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    __PVT__io_status_bits_w_c_resp = (1U & (~ ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast)))));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
    vlSelfRef.__PVT__state_w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                          | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                  ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last)
                                                  : (IData)(vlSelfRef.__PVT___GEN_14))
                                              : (IData)(vlSelfRef.__PVT___GEN_14)));
    vlSelfRef.__PVT__state_w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                               ? ((0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_208))
                                               : (IData)(vlSelfRef.__PVT___GEN_208)));
    vlSelfRef.__PVT__state_w_grant = (1U & ((IData)(vlSymsp->TOP.reset) 
                                            | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                    ? 
                                                   ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                    | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last))
                                                    : (IData)(vlSelfRef.__PVT___GEN_15))
                                                : (IData)(vlSelfRef.__PVT___GEN_15))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__state_s_release = ((IData)(vlSymsp->TOP.reset) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                            ? ((0U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                               & (IData)(vlSelfRef.__PVT___GEN_178))
                                            : (IData)(vlSelfRef.__PVT___GEN_178)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                      | ((IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG) 
                                                         | (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2))));
    vlSelfRef.__PVT__io_msInfo_bits_willFree = ((IData)(vlSelfRef.__PVT__state_s_refill) 
                                                & (((IData)(vlSelfRef.__PVT__state_s_probeack) 
                                                    & (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                   & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                                      & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                         & ((IData)(vlSelfRef.__PVT__state_w_pprobeacklast) 
                                                            & ((IData)(vlSelfRef.__PVT__state_w_releaseack) 
                                                               & (IData)(vlSelfRef.__PVT__state_w_replResp)))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH)) 
                             & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_0;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT__dirResult_meta_alias = 0U;
        vlSelfRef.__PVT__dirResult_way = 0U;
        vlSelfRef.__PVT__req_reqSource = 0U;
        vlSelfRef.__PVT__req_sourceId = 0U;
        vlSelfRef.__PVT__req_fromL2pft = 0U;
        vlSelfRef.__PVT__req_off = 0U;
        vlSelfRef.__PVT__dirResult_meta_accessed = 0U;
        vlSelfRef.__PVT__req_channel = 0U;
        vlSelfRef.__PVT__probeGotN = 0U;
        vlSelfRef.__PVT__dirResult_meta_clients = 0U;
        vlSelfRef.__PVT__gotGrantData = 0U;
        vlSelfRef.__PVT__req_aliasTask = 0U;
        vlSelfRef.__PVT__probeDirty = 0U;
        vlSelfRef.__PVT__dirResult_meta_dirty = 0U;
        vlSelfRef.__PVT__req_needProbeAckData = 0U;
        vlSelfRef.__PVT__dirResult_meta_prefetch = 0U;
        vlSelfRef.__PVT__dirResult_meta_state = 0U;
        vlSelfRef.__PVT__dirResult_hit = 0U;
        vlSelfRef.__PVT__req_param = 0U;
        vlSelfRef.__PVT__req_opcode = 0U;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_alias = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_alias;
            vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            vlSelfRef.__PVT__dirResult_meta_accessed 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_accessed;
            vlSelfRef.__PVT__dirResult_meta_clients 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients;
            vlSelfRef.__PVT__dirResult_meta_prefetch 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_prefetch;
            vlSelfRef.__PVT__dirResult_meta_state = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state;
        } else {
            if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_meta_alias 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_alias;
                vlSelfRef.__PVT__dirResult_meta_accessed 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_accessed;
                vlSelfRef.__PVT__dirResult_meta_clients 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_clients;
                vlSelfRef.__PVT__dirResult_meta_prefetch 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch;
            }
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid) 
                 & (~ (IData)((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))))) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_way;
            }
            vlSelfRef.__PVT__dirResult_meta_state = 
                ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)
                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                      ? (IData)(vlSelfRef.__PVT___GEN_23)
                      : ((IData)(vlSelfRef.__PVT__mp_release_valid)
                          ? 0U : (IData)(vlSelfRef.__PVT___GEN_23)))
                  : (IData)(vlSelfRef.__PVT___GEN_23));
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
            vlSelfRef.__PVT__req_reqSource = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_reqSource;
            vlSelfRef.__PVT__req_sourceId = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_sourceId;
            vlSelfRef.__PVT__req_fromL2pft = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_fromL2pft;
            vlSelfRef.__PVT__req_off = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_off;
            vlSelfRef.__PVT__req_channel = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel;
            vlSelfRef.__PVT__probeGotN = 0U;
            vlSelfRef.__PVT__req_aliasTask = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask;
            vlSelfRef.__PVT__probeDirty = 0U;
            vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_needProbeAckData;
            vlSelfRef.__PVT__dirResult_hit = (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1));
            vlSelfRef.__PVT__req_param = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_param;
            vlSelfRef.__PVT__req_opcode = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_opcode;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid) {
            vlSelfRef.__PVT__gotGrantData = vlSelfRef.__PVT___GEN_200;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
            vlSelfRef.__PVT__gotGrantData = 0U;
        }
        if (vlSelfRef.__PVT__nestedwb_match) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSelfRef.__PVT___GEN_238;
        } else if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid) 
                    & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty;
        }
    }
    vlSelfRef.__PVT__state_s_retry = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                         & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                | (IData)(vlSelfRef.__PVT___GEN_7))
                                             : (IData)(vlSelfRef.__PVT___GEN_7))));
    vlSelfRef.__PVT__mergeA = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                               && (IData)(vlSelfRef.__PVT___GEN_91));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias))
            : 0U);
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
           & ((IData)(vlSelfRef.__PVT__dirResult_hit) 
              & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                 | (IData)(vlSelfRef.__PVT__probeDirty))));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | (((6U 
                                                == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                               | (7U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_promoteT = (((IData)(vlSelfRef.__PVT___req_promoteT_T) 
                                      | (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                     & (((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                         & ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                            & (3U == (IData)(vlSelfRef.__PVT__dirResult_meta_state)))) 
                                        | (((~ (IData)(vlSelfRef.__PVT__dirResult_hit)) 
                                            & (IData)(vlSelfRef.__PVT__gotT)) 
                                           | ((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                              & ((IData)(vlSelfRef.__PVT__req_aliasTask) 
                                                 & ((2U 
                                                     == (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                                    | (3U 
                                                       == (IData)(vlSelfRef.__PVT__dirResult_meta_state))))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__2(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__3(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___GEN_84 = ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_7 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_retry));
    vlSelfRef.__PVT___GEN_200 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_23 = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_6 = (1U & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_9 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
        vlSelfRef.__PVT___GEN_11 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_12 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_13 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_14 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_15 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
    } else {
        vlSelfRef.__PVT___GEN_23 = vlSelfRef.__PVT__dirResult_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (IData)(vlSelfRef.__PVT__state_s_probeack));
        vlSelfRef.__PVT___GEN_6 = (1U & (IData)(vlSelfRef.__PVT__state_s_refill));
        vlSelfRef.__PVT___GEN_9 = vlSelfRef.__PVT__state_w_rprobeacklast;
        vlSelfRef.__PVT___GEN_11 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
        vlSelfRef.__PVT___GEN_12 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeack));
        vlSelfRef.__PVT___GEN_13 = vlSelfRef.__PVT__state_w_grantfirst;
        vlSelfRef.__PVT___GEN_14 = vlSelfRef.__PVT__state_w_grantlast;
        vlSelfRef.__PVT___GEN_15 = vlSelfRef.__PVT__state_w_grant;
    }
    vlSelfRef.__PVT___GEN_91 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid) 
                                | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                   & (IData)(vlSelfRef.__PVT__mergeA)));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__4(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_113 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid)
                                  ? (IData)(vlSymsp->TOP.io_topInputNeedT_0)
                                  : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_param));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT___GEN_33 = 0ULL;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        vlSelfRef.__PVT___GEN_33 = (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                     & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)))
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__release_ts)));
    }
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__io_status_bits_w_c_resp;
    __PVT__io_status_bits_w_c_resp = 0;
    CData/*0:0*/ __PVT__mp_grant_task_merge_task_r_off;
    __PVT__mp_grant_task_merge_task_r_off = 0;
    CData/*0:0*/ __Vdly__req_valid;
    __Vdly__req_valid = 0;
    // Body
    __Vdly__req_valid = vlSelfRef.__PVT__req_valid;
    vlSelfRef.__PVT__acquire_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_31));
    vlSelfRef.__PVT__release_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_33));
    vlSelfRef.__PVT__state_w_pprobeack = ((IData)(vlSymsp->TOP.reset) 
                                          | (IData)(vlSelfRef.__PVT___GEN_12));
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid)
                                  ? ((IData)(vlSelfRef.__PVT___T_19)
                                      ? (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_84))
                                  : (IData)(vlSelfRef.__PVT___GEN_84)));
    vlSelfRef.__PVT__state_s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_164));
    vlSelfRef.__PVT__state_s_pprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_165));
    vlSelfRef.__PVT__state_s_rprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                           ? ((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                               ? ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_166))
                                               : (IData)(vlSelfRef.__PVT___GEN_166))
                                           : (IData)(vlSelfRef.__PVT___GEN_166)));
    vlSelfRef.__PVT__state_w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid)
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_13))
                                               : (IData)(vlSelfRef.__PVT___GEN_13)));
    vlSelfRef.__PVT__state_w_pprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | (IData)(vlSelfRef.__PVT___GEN_11));
    vlSelfRef.__PVT__state_w_replResp = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSelfRef.__PVT___GEN_220));
    vlSelfRef.__PVT__state_s_refill = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)
                                              ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_6))
                                              : (IData)(vlSelfRef.__PVT___GEN_6))));
    vlSelfRef.__PVT__state_w_rprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                                  ? 
                                                 ((0U 
                                                   != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                                   ? 
                                                  ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                   & (IData)(vlSelfRef.__PVT___GEN_9))
                                                   : (IData)(vlSelfRef.__PVT___GEN_9))
                                                  : (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__PVT__state_s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                         | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                 ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__mp_release_valid)
                                                  ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_5))))
                                             : (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1));
    __Vdly__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                         && ((1U & (~ ((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
                                       & (IData)(vlSelfRef.__PVT__req_valid)))) 
                             && (IData)(vlSelfRef.__PVT___GEN_0)));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_param = 0U;
        vlSelfRef.__PVT__timer = 0ULL;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid) {
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 5U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_param 
                = vlSymsp->TOP.io_topInputNeedT_0;
        }
        if (((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
             & (IData)(vlSelfRef.__PVT__req_valid))) {
            vlSelfRef.__PVT__timer = 0ULL;
        } else if (vlSelfRef.__PVT__req_valid) {
            vlSelfRef.__PVT__timer = vlSelfRef.__PVT___timer_T_1;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
            vlSelfRef.__PVT__timer = 1ULL;
        }
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (((IData)(vlSelfRef.__PVT__req_valid) 
                         & (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                        & (IData)(vlSelfRef.__PVT__dirResult_hit))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: MSHR can not receive prefetch hit req\n    at MSHR.scala:108 assert(!(req_valid && req_prefetch && dirResult.hit), \"MSHR can not receive prefetch hit req\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid) 
                        & (~ ((~ (IData)(vlSelfRef.__PVT__state_w_grantlast)) 
                              | ((~ (IData)(vlSelfRef.__PVT__state_w_grant)) 
                                 | (~ (IData)(vlSelfRef.__PVT__state_w_releaseack))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:564 assert(!(d_resp.valid && !io.status.bits.w_d_resp))\n",0);
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__dirResult_set = 0U;
        vlSelfRef.__PVT__req_alias = 0U;
        vlSelfRef.__PVT__req_set = 0U;
        vlSelfRef.__PVT__dirResult_tag = 0U;
        vlSelfRef.__PVT__req_tag = 0U;
        __PVT__mp_grant_task_merge_task_r_off = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId = 0U;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_set = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__req_s3_set;
            vlSelfRef.__PVT__req_alias = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_alias;
            vlSelfRef.__PVT__req_set = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set;
            vlSelfRef.__PVT__req_tag = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag;
        }
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_tag;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_tag;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid) {
            __PVT__mp_grant_task_merge_task_r_off = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__prefetcher__DOT__reqSource;
        }
    }
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__req_valid = __Vdly__req_valid;
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    __PVT__io_status_bits_w_c_resp = (1U & (~ ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast)))));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
    vlSelfRef.__PVT__state_w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                          | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                  ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last)
                                                  : (IData)(vlSelfRef.__PVT___GEN_14))
                                              : (IData)(vlSelfRef.__PVT___GEN_14)));
    vlSelfRef.__PVT__state_w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                               ? ((0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_208))
                                               : (IData)(vlSelfRef.__PVT___GEN_208)));
    vlSelfRef.__PVT__state_w_grant = (1U & ((IData)(vlSymsp->TOP.reset) 
                                            | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                    ? 
                                                   ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                    | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last))
                                                    : (IData)(vlSelfRef.__PVT___GEN_15))
                                                : (IData)(vlSelfRef.__PVT___GEN_15))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__state_s_release = ((IData)(vlSymsp->TOP.reset) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                            ? ((0U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                               & (IData)(vlSelfRef.__PVT___GEN_178))
                                            : (IData)(vlSelfRef.__PVT___GEN_178)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                      | ((IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG) 
                                                         | (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2))));
    vlSelfRef.__PVT__io_msInfo_bits_willFree = ((IData)(vlSelfRef.__PVT__state_s_refill) 
                                                & (((IData)(vlSelfRef.__PVT__state_s_probeack) 
                                                    & (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                   & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                                      & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                         & ((IData)(vlSelfRef.__PVT__state_w_pprobeacklast) 
                                                            & ((IData)(vlSelfRef.__PVT__state_w_releaseack) 
                                                               & (IData)(vlSelfRef.__PVT__state_w_replResp)))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                 >> 1U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 1U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_0;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT__dirResult_meta_alias = 0U;
        vlSelfRef.__PVT__dirResult_way = 0U;
        vlSelfRef.__PVT__req_reqSource = 0U;
        vlSelfRef.__PVT__req_sourceId = 0U;
        vlSelfRef.__PVT__req_fromL2pft = 0U;
        vlSelfRef.__PVT__req_off = 0U;
        vlSelfRef.__PVT__dirResult_meta_accessed = 0U;
        vlSelfRef.__PVT__req_channel = 0U;
        vlSelfRef.__PVT__probeGotN = 0U;
        vlSelfRef.__PVT__dirResult_meta_clients = 0U;
        vlSelfRef.__PVT__gotGrantData = 0U;
        vlSelfRef.__PVT__req_aliasTask = 0U;
        vlSelfRef.__PVT__probeDirty = 0U;
        vlSelfRef.__PVT__dirResult_meta_dirty = 0U;
        vlSelfRef.__PVT__req_needProbeAckData = 0U;
        vlSelfRef.__PVT__dirResult_meta_prefetch = 0U;
        vlSelfRef.__PVT__dirResult_meta_state = 0U;
        vlSelfRef.__PVT__dirResult_hit = 0U;
        vlSelfRef.__PVT__req_param = 0U;
        vlSelfRef.__PVT__req_opcode = 0U;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_alias = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_alias;
            vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            vlSelfRef.__PVT__dirResult_meta_accessed 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_accessed;
            vlSelfRef.__PVT__dirResult_meta_clients 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients;
            vlSelfRef.__PVT__dirResult_meta_prefetch 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_prefetch;
            vlSelfRef.__PVT__dirResult_meta_state = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state;
        } else {
            if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_meta_alias 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_alias;
                vlSelfRef.__PVT__dirResult_meta_accessed 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_accessed;
                vlSelfRef.__PVT__dirResult_meta_clients 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_clients;
                vlSelfRef.__PVT__dirResult_meta_prefetch 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch;
            }
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid) 
                 & (~ (IData)((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))))) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_way;
            }
            vlSelfRef.__PVT__dirResult_meta_state = 
                ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)
                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                      ? (IData)(vlSelfRef.__PVT___GEN_23)
                      : ((IData)(vlSelfRef.__PVT__mp_release_valid)
                          ? 0U : (IData)(vlSelfRef.__PVT___GEN_23)))
                  : (IData)(vlSelfRef.__PVT___GEN_23));
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
            vlSelfRef.__PVT__req_reqSource = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_reqSource;
            vlSelfRef.__PVT__req_sourceId = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_sourceId;
            vlSelfRef.__PVT__req_fromL2pft = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_fromL2pft;
            vlSelfRef.__PVT__req_off = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_off;
            vlSelfRef.__PVT__req_channel = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel;
            vlSelfRef.__PVT__probeGotN = 0U;
            vlSelfRef.__PVT__req_aliasTask = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask;
            vlSelfRef.__PVT__probeDirty = 0U;
            vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_needProbeAckData;
            vlSelfRef.__PVT__dirResult_hit = (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1));
            vlSelfRef.__PVT__req_param = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_param;
            vlSelfRef.__PVT__req_opcode = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_opcode;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid) {
            vlSelfRef.__PVT__gotGrantData = vlSelfRef.__PVT___GEN_200;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
            vlSelfRef.__PVT__gotGrantData = 0U;
        }
        if (vlSelfRef.__PVT__nestedwb_match) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSelfRef.__PVT___GEN_238;
        } else if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid) 
                    & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty;
        }
    }
    vlSelfRef.__PVT__state_s_retry = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                         & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                | (IData)(vlSelfRef.__PVT___GEN_7))
                                             : (IData)(vlSelfRef.__PVT___GEN_7))));
    vlSelfRef.__PVT__mergeA = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                               && (IData)(vlSelfRef.__PVT___GEN_91));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias))
            : 0U);
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
           & ((IData)(vlSelfRef.__PVT__dirResult_hit) 
              & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                 | (IData)(vlSelfRef.__PVT__probeDirty))));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | (((6U 
                                                == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                               | (7U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_promoteT = (((IData)(vlSelfRef.__PVT___req_promoteT_T) 
                                      | (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                     & (((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                         & ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                            & (3U == (IData)(vlSelfRef.__PVT__dirResult_meta_state)))) 
                                        | (((~ (IData)(vlSelfRef.__PVT__dirResult_hit)) 
                                            & (IData)(vlSelfRef.__PVT__gotT)) 
                                           | ((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                              & ((IData)(vlSelfRef.__PVT__req_aliasTask) 
                                                 & ((2U 
                                                     == (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                                    | (3U 
                                                       == (IData)(vlSelfRef.__PVT__dirResult_meta_state))))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__2(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__3(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___GEN_84 = ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_7 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_retry));
    vlSelfRef.__PVT___GEN_200 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_23 = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_6 = (1U & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_9 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
        vlSelfRef.__PVT___GEN_11 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_12 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_13 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_14 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_15 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
    } else {
        vlSelfRef.__PVT___GEN_23 = vlSelfRef.__PVT__dirResult_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (IData)(vlSelfRef.__PVT__state_s_probeack));
        vlSelfRef.__PVT___GEN_6 = (1U & (IData)(vlSelfRef.__PVT__state_s_refill));
        vlSelfRef.__PVT___GEN_9 = vlSelfRef.__PVT__state_w_rprobeacklast;
        vlSelfRef.__PVT___GEN_11 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
        vlSelfRef.__PVT___GEN_12 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeack));
        vlSelfRef.__PVT___GEN_13 = vlSelfRef.__PVT__state_w_grantfirst;
        vlSelfRef.__PVT___GEN_14 = vlSelfRef.__PVT__state_w_grantlast;
        vlSelfRef.__PVT___GEN_15 = vlSelfRef.__PVT__state_w_grant;
    }
    vlSelfRef.__PVT___GEN_91 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid) 
                                | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                   & (IData)(vlSelfRef.__PVT__mergeA)));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__4(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_113 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid)
                                  ? (IData)(vlSymsp->TOP.io_topInputNeedT_0)
                                  : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_param));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT___GEN_33 = 0ULL;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        vlSelfRef.__PVT___GEN_33 = (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                     & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)))
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__release_ts)));
    }
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__io_status_bits_w_c_resp;
    __PVT__io_status_bits_w_c_resp = 0;
    CData/*0:0*/ __PVT__mp_grant_task_merge_task_r_off;
    __PVT__mp_grant_task_merge_task_r_off = 0;
    CData/*0:0*/ __Vdly__req_valid;
    __Vdly__req_valid = 0;
    // Body
    __Vdly__req_valid = vlSelfRef.__PVT__req_valid;
    vlSelfRef.__PVT__acquire_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_31));
    vlSelfRef.__PVT__release_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_33));
    vlSelfRef.__PVT__state_w_pprobeack = ((IData)(vlSymsp->TOP.reset) 
                                          | (IData)(vlSelfRef.__PVT___GEN_12));
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid)
                                  ? ((IData)(vlSelfRef.__PVT___T_19)
                                      ? (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_84))
                                  : (IData)(vlSelfRef.__PVT___GEN_84)));
    vlSelfRef.__PVT__state_s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_164));
    vlSelfRef.__PVT__state_s_pprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_165));
    vlSelfRef.__PVT__state_s_rprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                           ? ((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                               ? ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_166))
                                               : (IData)(vlSelfRef.__PVT___GEN_166))
                                           : (IData)(vlSelfRef.__PVT___GEN_166)));
    vlSelfRef.__PVT__state_w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid)
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_13))
                                               : (IData)(vlSelfRef.__PVT___GEN_13)));
    vlSelfRef.__PVT__state_w_pprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | (IData)(vlSelfRef.__PVT___GEN_11));
    vlSelfRef.__PVT__state_w_replResp = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSelfRef.__PVT___GEN_220));
    vlSelfRef.__PVT__state_s_refill = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)
                                              ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_6))
                                              : (IData)(vlSelfRef.__PVT___GEN_6))));
    vlSelfRef.__PVT__state_w_rprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                                  ? 
                                                 ((0U 
                                                   != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                                   ? 
                                                  ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                   & (IData)(vlSelfRef.__PVT___GEN_9))
                                                   : (IData)(vlSelfRef.__PVT___GEN_9))
                                                  : (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__PVT__state_s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                         | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                 ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__mp_release_valid)
                                                  ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_5))))
                                             : (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1));
    __Vdly__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                         && ((1U & (~ ((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
                                       & (IData)(vlSelfRef.__PVT__req_valid)))) 
                             && (IData)(vlSelfRef.__PVT___GEN_0)));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_param = 0U;
        vlSelfRef.__PVT__timer = 0ULL;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid) {
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 5U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_param 
                = vlSymsp->TOP.io_topInputNeedT_0;
        }
        if (((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
             & (IData)(vlSelfRef.__PVT__req_valid))) {
            vlSelfRef.__PVT__timer = 0ULL;
        } else if (vlSelfRef.__PVT__req_valid) {
            vlSelfRef.__PVT__timer = vlSelfRef.__PVT___timer_T_1;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
            vlSelfRef.__PVT__timer = 1ULL;
        }
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (((IData)(vlSelfRef.__PVT__req_valid) 
                         & (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                        & (IData)(vlSelfRef.__PVT__dirResult_hit))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: MSHR can not receive prefetch hit req\n    at MSHR.scala:108 assert(!(req_valid && req_prefetch && dirResult.hit), \"MSHR can not receive prefetch hit req\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid) 
                        & (~ ((~ (IData)(vlSelfRef.__PVT__state_w_grantlast)) 
                              | ((~ (IData)(vlSelfRef.__PVT__state_w_grant)) 
                                 | (~ (IData)(vlSelfRef.__PVT__state_w_releaseack))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:564 assert(!(d_resp.valid && !io.status.bits.w_d_resp))\n",0);
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__dirResult_set = 0U;
        vlSelfRef.__PVT__req_alias = 0U;
        vlSelfRef.__PVT__req_set = 0U;
        vlSelfRef.__PVT__dirResult_tag = 0U;
        vlSelfRef.__PVT__req_tag = 0U;
        __PVT__mp_grant_task_merge_task_r_off = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId = 0U;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_set = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__req_s3_set;
            vlSelfRef.__PVT__req_alias = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_alias;
            vlSelfRef.__PVT__req_set = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set;
            vlSelfRef.__PVT__req_tag = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag;
        }
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_tag;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_tag;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid) {
            __PVT__mp_grant_task_merge_task_r_off = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__prefetcher__DOT__reqSource;
        }
    }
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__req_valid = __Vdly__req_valid;
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    __PVT__io_status_bits_w_c_resp = (1U & (~ ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast)))));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
    vlSelfRef.__PVT__state_w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                          | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                  ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last)
                                                  : (IData)(vlSelfRef.__PVT___GEN_14))
                                              : (IData)(vlSelfRef.__PVT___GEN_14)));
    vlSelfRef.__PVT__state_w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                               ? ((0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_208))
                                               : (IData)(vlSelfRef.__PVT___GEN_208)));
    vlSelfRef.__PVT__state_w_grant = (1U & ((IData)(vlSymsp->TOP.reset) 
                                            | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                    ? 
                                                   ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                    | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last))
                                                    : (IData)(vlSelfRef.__PVT___GEN_15))
                                                : (IData)(vlSelfRef.__PVT___GEN_15))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__state_s_release = ((IData)(vlSymsp->TOP.reset) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                            ? ((0U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                               & (IData)(vlSelfRef.__PVT___GEN_178))
                                            : (IData)(vlSelfRef.__PVT___GEN_178)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                      | ((IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG) 
                                                         | (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2))));
    vlSelfRef.__PVT__io_msInfo_bits_willFree = ((IData)(vlSelfRef.__PVT__state_s_refill) 
                                                & (((IData)(vlSelfRef.__PVT__state_s_probeack) 
                                                    & (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                   & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                                      & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                         & ((IData)(vlSelfRef.__PVT__state_w_pprobeacklast) 
                                                            & ((IData)(vlSelfRef.__PVT__state_w_releaseack) 
                                                               & (IData)(vlSelfRef.__PVT__state_w_replResp)))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                 >> 2U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 2U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_0;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT__dirResult_meta_alias = 0U;
        vlSelfRef.__PVT__dirResult_way = 0U;
        vlSelfRef.__PVT__req_reqSource = 0U;
        vlSelfRef.__PVT__req_sourceId = 0U;
        vlSelfRef.__PVT__req_fromL2pft = 0U;
        vlSelfRef.__PVT__req_off = 0U;
        vlSelfRef.__PVT__dirResult_meta_accessed = 0U;
        vlSelfRef.__PVT__req_channel = 0U;
        vlSelfRef.__PVT__probeGotN = 0U;
        vlSelfRef.__PVT__dirResult_meta_clients = 0U;
        vlSelfRef.__PVT__gotGrantData = 0U;
        vlSelfRef.__PVT__req_aliasTask = 0U;
        vlSelfRef.__PVT__probeDirty = 0U;
        vlSelfRef.__PVT__dirResult_meta_dirty = 0U;
        vlSelfRef.__PVT__req_needProbeAckData = 0U;
        vlSelfRef.__PVT__dirResult_meta_prefetch = 0U;
        vlSelfRef.__PVT__dirResult_meta_state = 0U;
        vlSelfRef.__PVT__dirResult_hit = 0U;
        vlSelfRef.__PVT__req_param = 0U;
        vlSelfRef.__PVT__req_opcode = 0U;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_alias = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_alias;
            vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            vlSelfRef.__PVT__dirResult_meta_accessed 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_accessed;
            vlSelfRef.__PVT__dirResult_meta_clients 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients;
            vlSelfRef.__PVT__dirResult_meta_prefetch 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_prefetch;
            vlSelfRef.__PVT__dirResult_meta_state = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state;
        } else {
            if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_meta_alias 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_alias;
                vlSelfRef.__PVT__dirResult_meta_accessed 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_accessed;
                vlSelfRef.__PVT__dirResult_meta_clients 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_clients;
                vlSelfRef.__PVT__dirResult_meta_prefetch 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch;
            }
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid) 
                 & (~ (IData)((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))))) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_way;
            }
            vlSelfRef.__PVT__dirResult_meta_state = 
                ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)
                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                      ? (IData)(vlSelfRef.__PVT___GEN_23)
                      : ((IData)(vlSelfRef.__PVT__mp_release_valid)
                          ? 0U : (IData)(vlSelfRef.__PVT___GEN_23)))
                  : (IData)(vlSelfRef.__PVT___GEN_23));
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
            vlSelfRef.__PVT__req_reqSource = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_reqSource;
            vlSelfRef.__PVT__req_sourceId = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_sourceId;
            vlSelfRef.__PVT__req_fromL2pft = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_fromL2pft;
            vlSelfRef.__PVT__req_off = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_off;
            vlSelfRef.__PVT__req_channel = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel;
            vlSelfRef.__PVT__probeGotN = 0U;
            vlSelfRef.__PVT__req_aliasTask = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask;
            vlSelfRef.__PVT__probeDirty = 0U;
            vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_needProbeAckData;
            vlSelfRef.__PVT__dirResult_hit = (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1));
            vlSelfRef.__PVT__req_param = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_param;
            vlSelfRef.__PVT__req_opcode = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_opcode;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid) {
            vlSelfRef.__PVT__gotGrantData = vlSelfRef.__PVT___GEN_200;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
            vlSelfRef.__PVT__gotGrantData = 0U;
        }
        if (vlSelfRef.__PVT__nestedwb_match) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSelfRef.__PVT___GEN_238;
        } else if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid) 
                    & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty;
        }
    }
    vlSelfRef.__PVT__state_s_retry = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                         & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                | (IData)(vlSelfRef.__PVT___GEN_7))
                                             : (IData)(vlSelfRef.__PVT___GEN_7))));
    vlSelfRef.__PVT__mergeA = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                               && (IData)(vlSelfRef.__PVT___GEN_91));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias))
            : 0U);
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
           & ((IData)(vlSelfRef.__PVT__dirResult_hit) 
              & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                 | (IData)(vlSelfRef.__PVT__probeDirty))));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | (((6U 
                                                == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                               | (7U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_promoteT = (((IData)(vlSelfRef.__PVT___req_promoteT_T) 
                                      | (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                     & (((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                         & ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                            & (3U == (IData)(vlSelfRef.__PVT__dirResult_meta_state)))) 
                                        | (((~ (IData)(vlSelfRef.__PVT__dirResult_hit)) 
                                            & (IData)(vlSelfRef.__PVT__gotT)) 
                                           | ((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                              & ((IData)(vlSelfRef.__PVT__req_aliasTask) 
                                                 & ((2U 
                                                     == (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                                    | (3U 
                                                       == (IData)(vlSelfRef.__PVT__dirResult_meta_state))))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__2(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__3(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___GEN_84 = ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_7 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_retry));
    vlSelfRef.__PVT___GEN_200 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_23 = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_6 = (1U & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_9 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
        vlSelfRef.__PVT___GEN_11 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_12 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_13 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_14 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_15 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
    } else {
        vlSelfRef.__PVT___GEN_23 = vlSelfRef.__PVT__dirResult_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (IData)(vlSelfRef.__PVT__state_s_probeack));
        vlSelfRef.__PVT___GEN_6 = (1U & (IData)(vlSelfRef.__PVT__state_s_refill));
        vlSelfRef.__PVT___GEN_9 = vlSelfRef.__PVT__state_w_rprobeacklast;
        vlSelfRef.__PVT___GEN_11 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
        vlSelfRef.__PVT___GEN_12 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeack));
        vlSelfRef.__PVT___GEN_13 = vlSelfRef.__PVT__state_w_grantfirst;
        vlSelfRef.__PVT___GEN_14 = vlSelfRef.__PVT__state_w_grantlast;
        vlSelfRef.__PVT___GEN_15 = vlSelfRef.__PVT__state_w_grant;
    }
    vlSelfRef.__PVT___GEN_91 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid) 
                                | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                   & (IData)(vlSelfRef.__PVT__mergeA)));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__4(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_113 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid)
                                  ? (IData)(vlSymsp->TOP.io_topInputNeedT_0)
                                  : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_param));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT___GEN_33 = 0ULL;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        vlSelfRef.__PVT___GEN_33 = (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                     & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)))
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__release_ts)));
    }
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__mp_grant_task_merge_task_r_off;
    __PVT__mp_grant_task_merge_task_r_off = 0;
    CData/*0:0*/ __Vdly__req_valid;
    __Vdly__req_valid = 0;
    // Body
    __Vdly__req_valid = vlSelfRef.__PVT__req_valid;
    vlSelfRef.__PVT__acquire_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_31));
    vlSelfRef.__PVT__release_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_33));
    vlSelfRef.__PVT__state_w_pprobeack = ((IData)(vlSymsp->TOP.reset) 
                                          | (IData)(vlSelfRef.__PVT___GEN_12));
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid)
                                  ? ((IData)(vlSelfRef.__PVT___T_19)
                                      ? (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_84))
                                  : (IData)(vlSelfRef.__PVT___GEN_84)));
    vlSelfRef.__PVT__state_s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_164));
    vlSelfRef.__PVT__state_s_pprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_165));
    vlSelfRef.__PVT__state_s_rprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                           ? ((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                               ? ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_166))
                                               : (IData)(vlSelfRef.__PVT___GEN_166))
                                           : (IData)(vlSelfRef.__PVT___GEN_166)));
    vlSelfRef.__PVT__state_w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid)
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_13))
                                               : (IData)(vlSelfRef.__PVT___GEN_13)));
    vlSelfRef.__PVT__state_w_pprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | (IData)(vlSelfRef.__PVT___GEN_11));
    vlSelfRef.__PVT__state_w_replResp = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSelfRef.__PVT___GEN_220));
    vlSelfRef.__PVT__state_s_refill = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)
                                              ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_6))
                                              : (IData)(vlSelfRef.__PVT___GEN_6))));
    vlSelfRef.__PVT__state_w_rprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                                  ? 
                                                 ((0U 
                                                   != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                                   ? 
                                                  ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                   & (IData)(vlSelfRef.__PVT___GEN_9))
                                                   : (IData)(vlSelfRef.__PVT___GEN_9))
                                                  : (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__PVT__state_s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                         | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                 ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__mp_release_valid)
                                                  ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_5))))
                                             : (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1));
    __Vdly__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                         && ((1U & (~ ((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
                                       & (IData)(vlSelfRef.__PVT__req_valid)))) 
                             && (IData)(vlSelfRef.__PVT___GEN_0)));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_param = 0U;
        vlSelfRef.__PVT__timer = 0ULL;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid) {
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 5U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_param 
                = vlSymsp->TOP.io_topInputNeedT_0;
        }
        if (((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
             & (IData)(vlSelfRef.__PVT__req_valid))) {
            vlSelfRef.__PVT__timer = 0ULL;
        } else if (vlSelfRef.__PVT__req_valid) {
            vlSelfRef.__PVT__timer = vlSelfRef.__PVT___timer_T_1;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
            vlSelfRef.__PVT__timer = 1ULL;
        }
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (((IData)(vlSelfRef.__PVT__req_valid) 
                         & (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                        & (IData)(vlSelfRef.__PVT__dirResult_hit))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: MSHR can not receive prefetch hit req\n    at MSHR.scala:108 assert(!(req_valid && req_prefetch && dirResult.hit), \"MSHR can not receive prefetch hit req\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid) 
                        & (~ ((~ (IData)(vlSelfRef.__PVT__state_w_grantlast)) 
                              | ((~ (IData)(vlSelfRef.__PVT__state_w_grant)) 
                                 | (~ (IData)(vlSelfRef.__PVT__state_w_releaseack))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:564 assert(!(d_resp.valid && !io.status.bits.w_d_resp))\n",0);
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__dirResult_set = 0U;
        vlSelfRef.__PVT__req_alias = 0U;
        vlSelfRef.__PVT__req_set = 0U;
        vlSelfRef.__PVT__dirResult_tag = 0U;
        vlSelfRef.__PVT__req_tag = 0U;
        __PVT__mp_grant_task_merge_task_r_off = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId = 0U;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_set = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__req_s3_set;
            vlSelfRef.__PVT__req_alias = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_alias;
            vlSelfRef.__PVT__req_set = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set;
            vlSelfRef.__PVT__req_tag = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag;
        }
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_tag;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_tag;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid) {
            __PVT__mp_grant_task_merge_task_r_off = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__prefetcher__DOT__reqSource;
        }
    }
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__req_valid = __Vdly__req_valid;
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
    vlSelfRef.__PVT__state_w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                          | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                  ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last)
                                                  : (IData)(vlSelfRef.__PVT___GEN_14))
                                              : (IData)(vlSelfRef.__PVT___GEN_14)));
    vlSelfRef.__PVT__state_w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                               ? ((0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_208))
                                               : (IData)(vlSelfRef.__PVT___GEN_208)));
    vlSelfRef.__PVT__state_w_grant = (1U & ((IData)(vlSymsp->TOP.reset) 
                                            | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                    ? 
                                                   ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                    | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last))
                                                    : (IData)(vlSelfRef.__PVT___GEN_15))
                                                : (IData)(vlSelfRef.__PVT___GEN_15))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__state_s_release = ((IData)(vlSymsp->TOP.reset) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                            ? ((0U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                               & (IData)(vlSelfRef.__PVT___GEN_178))
                                            : (IData)(vlSelfRef.__PVT___GEN_178)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                      | ((IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG) 
                                                         | (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2))));
    vlSelfRef.__PVT__io_msInfo_bits_willFree = ((IData)(vlSelfRef.__PVT__state_s_refill) 
                                                & (((IData)(vlSelfRef.__PVT__state_s_probeack) 
                                                    & (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                   & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                                      & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                         & ((IData)(vlSelfRef.__PVT__state_w_pprobeacklast) 
                                                            & ((IData)(vlSelfRef.__PVT__state_w_releaseack) 
                                                               & (IData)(vlSelfRef.__PVT__state_w_replResp)))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                 >> 3U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 3U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_0;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT__dirResult_meta_alias = 0U;
        vlSelfRef.__PVT__dirResult_way = 0U;
        vlSelfRef.__PVT__req_reqSource = 0U;
        vlSelfRef.__PVT__req_sourceId = 0U;
        vlSelfRef.__PVT__req_fromL2pft = 0U;
        vlSelfRef.__PVT__req_off = 0U;
        vlSelfRef.__PVT__dirResult_meta_accessed = 0U;
        vlSelfRef.__PVT__req_channel = 0U;
        vlSelfRef.__PVT__probeGotN = 0U;
        vlSelfRef.__PVT__dirResult_meta_clients = 0U;
        vlSelfRef.__PVT__gotGrantData = 0U;
        vlSelfRef.__PVT__req_aliasTask = 0U;
        vlSelfRef.__PVT__probeDirty = 0U;
        vlSelfRef.__PVT__dirResult_meta_dirty = 0U;
        vlSelfRef.__PVT__req_needProbeAckData = 0U;
        vlSelfRef.__PVT__dirResult_meta_prefetch = 0U;
        vlSelfRef.__PVT__dirResult_meta_state = 0U;
        vlSelfRef.__PVT__dirResult_hit = 0U;
        vlSelfRef.__PVT__req_param = 0U;
        vlSelfRef.__PVT__req_opcode = 0U;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_alias = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_alias;
            vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            vlSelfRef.__PVT__dirResult_meta_accessed 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_accessed;
            vlSelfRef.__PVT__dirResult_meta_clients 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients;
            vlSelfRef.__PVT__dirResult_meta_prefetch 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_prefetch;
            vlSelfRef.__PVT__dirResult_meta_state = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state;
        } else {
            if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_meta_alias 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_alias;
                vlSelfRef.__PVT__dirResult_meta_accessed 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_accessed;
                vlSelfRef.__PVT__dirResult_meta_clients 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_clients;
                vlSelfRef.__PVT__dirResult_meta_prefetch 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch;
            }
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid) 
                 & (~ (IData)((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))))) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_way;
            }
            vlSelfRef.__PVT__dirResult_meta_state = 
                ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)
                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                      ? (IData)(vlSelfRef.__PVT___GEN_23)
                      : ((IData)(vlSelfRef.__PVT__mp_release_valid)
                          ? 0U : (IData)(vlSelfRef.__PVT___GEN_23)))
                  : (IData)(vlSelfRef.__PVT___GEN_23));
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
            vlSelfRef.__PVT__req_reqSource = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_reqSource;
            vlSelfRef.__PVT__req_sourceId = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_sourceId;
            vlSelfRef.__PVT__req_fromL2pft = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_fromL2pft;
            vlSelfRef.__PVT__req_off = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_off;
            vlSelfRef.__PVT__req_channel = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel;
            vlSelfRef.__PVT__probeGotN = 0U;
            vlSelfRef.__PVT__req_aliasTask = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask;
            vlSelfRef.__PVT__probeDirty = 0U;
            vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_needProbeAckData;
            vlSelfRef.__PVT__dirResult_hit = (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1));
            vlSelfRef.__PVT__req_param = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_param;
            vlSelfRef.__PVT__req_opcode = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_opcode;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid) {
            vlSelfRef.__PVT__gotGrantData = vlSelfRef.__PVT___GEN_200;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
            vlSelfRef.__PVT__gotGrantData = 0U;
        }
        if (vlSelfRef.__PVT__nestedwb_match) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSelfRef.__PVT___GEN_238;
        } else if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid) 
                    & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty;
        }
    }
    vlSelfRef.__PVT__state_s_retry = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                         & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                | (IData)(vlSelfRef.__PVT___GEN_7))
                                             : (IData)(vlSelfRef.__PVT___GEN_7))));
    vlSelfRef.__PVT__mergeA = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                               && (IData)(vlSelfRef.__PVT___GEN_91));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias))
            : 0U);
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
           & ((IData)(vlSelfRef.__PVT__dirResult_hit) 
              & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                 | (IData)(vlSelfRef.__PVT__probeDirty))));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | (((6U 
                                                == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                               | (7U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_promoteT = (((IData)(vlSelfRef.__PVT___req_promoteT_T) 
                                      | (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                     & (((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                         & ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                            & (3U == (IData)(vlSelfRef.__PVT__dirResult_meta_state)))) 
                                        | (((~ (IData)(vlSelfRef.__PVT__dirResult_hit)) 
                                            & (IData)(vlSelfRef.__PVT__gotT)) 
                                           | ((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                              & ((IData)(vlSelfRef.__PVT__req_aliasTask) 
                                                 & ((2U 
                                                     == (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                                    | (3U 
                                                       == (IData)(vlSelfRef.__PVT__dirResult_meta_state))))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__2(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__3(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___GEN_84 = ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_7 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_retry));
    vlSelfRef.__PVT___GEN_200 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_23 = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_6 = (1U & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_9 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
        vlSelfRef.__PVT___GEN_11 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_12 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_13 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_14 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_15 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
    } else {
        vlSelfRef.__PVT___GEN_23 = vlSelfRef.__PVT__dirResult_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (IData)(vlSelfRef.__PVT__state_s_probeack));
        vlSelfRef.__PVT___GEN_6 = (1U & (IData)(vlSelfRef.__PVT__state_s_refill));
        vlSelfRef.__PVT___GEN_9 = vlSelfRef.__PVT__state_w_rprobeacklast;
        vlSelfRef.__PVT___GEN_11 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
        vlSelfRef.__PVT___GEN_12 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeack));
        vlSelfRef.__PVT___GEN_13 = vlSelfRef.__PVT__state_w_grantfirst;
        vlSelfRef.__PVT___GEN_14 = vlSelfRef.__PVT__state_w_grantlast;
        vlSelfRef.__PVT___GEN_15 = vlSelfRef.__PVT__state_w_grant;
    }
    vlSelfRef.__PVT___GEN_91 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid) 
                                | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                   & (IData)(vlSelfRef.__PVT__mergeA)));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__4(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_113 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid)
                                  ? (IData)(vlSymsp->TOP.io_topInputNeedT_1)
                                  : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_param));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT___GEN_33 = 0ULL;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        vlSelfRef.__PVT___GEN_33 = (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                     & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)))
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__release_ts)));
    }
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__io_status_bits_w_c_resp;
    __PVT__io_status_bits_w_c_resp = 0;
    CData/*0:0*/ __PVT__mp_grant_task_merge_task_r_off;
    __PVT__mp_grant_task_merge_task_r_off = 0;
    CData/*0:0*/ __Vdly__req_valid;
    __Vdly__req_valid = 0;
    // Body
    __Vdly__req_valid = vlSelfRef.__PVT__req_valid;
    vlSelfRef.__PVT__acquire_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_31));
    vlSelfRef.__PVT__release_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_33));
    vlSelfRef.__PVT__state_w_pprobeack = ((IData)(vlSymsp->TOP.reset) 
                                          | (IData)(vlSelfRef.__PVT___GEN_12));
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid)
                                  ? ((IData)(vlSelfRef.__PVT___T_19)
                                      ? (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_84))
                                  : (IData)(vlSelfRef.__PVT___GEN_84)));
    vlSelfRef.__PVT__state_s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_164));
    vlSelfRef.__PVT__state_s_pprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_165));
    vlSelfRef.__PVT__state_s_rprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                           ? ((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                               ? ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_166))
                                               : (IData)(vlSelfRef.__PVT___GEN_166))
                                           : (IData)(vlSelfRef.__PVT___GEN_166)));
    vlSelfRef.__PVT__state_w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid)
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_13))
                                               : (IData)(vlSelfRef.__PVT___GEN_13)));
    vlSelfRef.__PVT__state_w_pprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | (IData)(vlSelfRef.__PVT___GEN_11));
    vlSelfRef.__PVT__state_w_replResp = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSelfRef.__PVT___GEN_220));
    vlSelfRef.__PVT__state_s_refill = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)
                                              ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_6))
                                              : (IData)(vlSelfRef.__PVT___GEN_6))));
    vlSelfRef.__PVT__state_w_rprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                                  ? 
                                                 ((0U 
                                                   != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                                   ? 
                                                  ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                   & (IData)(vlSelfRef.__PVT___GEN_9))
                                                   : (IData)(vlSelfRef.__PVT___GEN_9))
                                                  : (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__PVT__state_s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                         | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                 ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__mp_release_valid)
                                                  ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_5))))
                                             : (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1));
    __Vdly__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                         && ((1U & (~ ((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
                                       & (IData)(vlSelfRef.__PVT__req_valid)))) 
                             && (IData)(vlSelfRef.__PVT___GEN_0)));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_param = 0U;
        vlSelfRef.__PVT__timer = 0ULL;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid) {
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 5U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_param 
                = vlSymsp->TOP.io_topInputNeedT_1;
        }
        if (((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
             & (IData)(vlSelfRef.__PVT__req_valid))) {
            vlSelfRef.__PVT__timer = 0ULL;
        } else if (vlSelfRef.__PVT__req_valid) {
            vlSelfRef.__PVT__timer = vlSelfRef.__PVT___timer_T_1;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
            vlSelfRef.__PVT__timer = 1ULL;
        }
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (((IData)(vlSelfRef.__PVT__req_valid) 
                         & (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                        & (IData)(vlSelfRef.__PVT__dirResult_hit))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: MSHR can not receive prefetch hit req\n    at MSHR.scala:108 assert(!(req_valid && req_prefetch && dirResult.hit), \"MSHR can not receive prefetch hit req\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid) 
                        & (~ ((~ (IData)(vlSelfRef.__PVT__state_w_grantlast)) 
                              | ((~ (IData)(vlSelfRef.__PVT__state_w_grant)) 
                                 | (~ (IData)(vlSelfRef.__PVT__state_w_releaseack))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:564 assert(!(d_resp.valid && !io.status.bits.w_d_resp))\n",0);
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__dirResult_set = 0U;
        vlSelfRef.__PVT__req_alias = 0U;
        vlSelfRef.__PVT__req_set = 0U;
        vlSelfRef.__PVT__dirResult_tag = 0U;
        vlSelfRef.__PVT__req_tag = 0U;
        __PVT__mp_grant_task_merge_task_r_off = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId = 0U;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_set = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__req_s3_set;
            vlSelfRef.__PVT__req_alias = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_alias;
            vlSelfRef.__PVT__req_set = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set;
            vlSelfRef.__PVT__req_tag = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag;
        }
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_tag;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_tag;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid) {
            __PVT__mp_grant_task_merge_task_r_off = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__prefetcher__DOT__reqSource;
        }
    }
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__req_valid = __Vdly__req_valid;
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    __PVT__io_status_bits_w_c_resp = (1U & (~ ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast)))));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
    vlSelfRef.__PVT__state_w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                          | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                  ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last)
                                                  : (IData)(vlSelfRef.__PVT___GEN_14))
                                              : (IData)(vlSelfRef.__PVT___GEN_14)));
    vlSelfRef.__PVT__state_w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                               ? ((0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_208))
                                               : (IData)(vlSelfRef.__PVT___GEN_208)));
    vlSelfRef.__PVT__state_w_grant = (1U & ((IData)(vlSymsp->TOP.reset) 
                                            | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                    ? 
                                                   ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                    | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last))
                                                    : (IData)(vlSelfRef.__PVT___GEN_15))
                                                : (IData)(vlSelfRef.__PVT___GEN_15))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__state_s_release = ((IData)(vlSymsp->TOP.reset) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                            ? ((0U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                               & (IData)(vlSelfRef.__PVT___GEN_178))
                                            : (IData)(vlSelfRef.__PVT___GEN_178)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                      | ((IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG) 
                                                         | (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2))));
    vlSelfRef.__PVT__io_msInfo_bits_willFree = ((IData)(vlSelfRef.__PVT__state_s_refill) 
                                                & (((IData)(vlSelfRef.__PVT__state_s_probeack) 
                                                    & (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                   & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                                      & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                         & ((IData)(vlSelfRef.__PVT__state_w_pprobeacklast) 
                                                            & ((IData)(vlSelfRef.__PVT__state_w_releaseack) 
                                                               & (IData)(vlSelfRef.__PVT__state_w_replResp)))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH)) 
                             & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_1;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT__dirResult_meta_alias = 0U;
        vlSelfRef.__PVT__dirResult_way = 0U;
        vlSelfRef.__PVT__req_reqSource = 0U;
        vlSelfRef.__PVT__req_sourceId = 0U;
        vlSelfRef.__PVT__req_fromL2pft = 0U;
        vlSelfRef.__PVT__req_off = 0U;
        vlSelfRef.__PVT__dirResult_meta_accessed = 0U;
        vlSelfRef.__PVT__req_channel = 0U;
        vlSelfRef.__PVT__probeGotN = 0U;
        vlSelfRef.__PVT__dirResult_meta_clients = 0U;
        vlSelfRef.__PVT__gotGrantData = 0U;
        vlSelfRef.__PVT__req_aliasTask = 0U;
        vlSelfRef.__PVT__probeDirty = 0U;
        vlSelfRef.__PVT__dirResult_meta_dirty = 0U;
        vlSelfRef.__PVT__req_needProbeAckData = 0U;
        vlSelfRef.__PVT__dirResult_meta_prefetch = 0U;
        vlSelfRef.__PVT__dirResult_meta_state = 0U;
        vlSelfRef.__PVT__dirResult_hit = 0U;
        vlSelfRef.__PVT__req_param = 0U;
        vlSelfRef.__PVT__req_opcode = 0U;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_alias = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_alias;
            vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            vlSelfRef.__PVT__dirResult_meta_accessed 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_accessed;
            vlSelfRef.__PVT__dirResult_meta_clients 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients;
            vlSelfRef.__PVT__dirResult_meta_prefetch 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_prefetch;
            vlSelfRef.__PVT__dirResult_meta_state = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state;
        } else {
            if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_meta_alias 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_alias;
                vlSelfRef.__PVT__dirResult_meta_accessed 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_accessed;
                vlSelfRef.__PVT__dirResult_meta_clients 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_clients;
                vlSelfRef.__PVT__dirResult_meta_prefetch 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch;
            }
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid) 
                 & (~ (IData)((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))))) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_way;
            }
            vlSelfRef.__PVT__dirResult_meta_state = 
                ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)
                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                      ? (IData)(vlSelfRef.__PVT___GEN_23)
                      : ((IData)(vlSelfRef.__PVT__mp_release_valid)
                          ? 0U : (IData)(vlSelfRef.__PVT___GEN_23)))
                  : (IData)(vlSelfRef.__PVT___GEN_23));
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
            vlSelfRef.__PVT__req_reqSource = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_reqSource;
            vlSelfRef.__PVT__req_sourceId = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_sourceId;
            vlSelfRef.__PVT__req_fromL2pft = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_fromL2pft;
            vlSelfRef.__PVT__req_off = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_off;
            vlSelfRef.__PVT__req_channel = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel;
            vlSelfRef.__PVT__probeGotN = 0U;
            vlSelfRef.__PVT__req_aliasTask = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask;
            vlSelfRef.__PVT__probeDirty = 0U;
            vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_needProbeAckData;
            vlSelfRef.__PVT__dirResult_hit = (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1));
            vlSelfRef.__PVT__req_param = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_param;
            vlSelfRef.__PVT__req_opcode = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_opcode;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid) {
            vlSelfRef.__PVT__gotGrantData = vlSelfRef.__PVT___GEN_200;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
            vlSelfRef.__PVT__gotGrantData = 0U;
        }
        if (vlSelfRef.__PVT__nestedwb_match) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSelfRef.__PVT___GEN_238;
        } else if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid) 
                    & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty;
        }
    }
    vlSelfRef.__PVT__state_s_retry = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                         & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                | (IData)(vlSelfRef.__PVT___GEN_7))
                                             : (IData)(vlSelfRef.__PVT___GEN_7))));
    vlSelfRef.__PVT__mergeA = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                               && (IData)(vlSelfRef.__PVT___GEN_91));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias))
            : 0U);
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
           & ((IData)(vlSelfRef.__PVT__dirResult_hit) 
              & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                 | (IData)(vlSelfRef.__PVT__probeDirty))));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | (((6U 
                                                == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                               | (7U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_promoteT = (((IData)(vlSelfRef.__PVT___req_promoteT_T) 
                                      | (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                     & (((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                         & ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                            & (3U == (IData)(vlSelfRef.__PVT__dirResult_meta_state)))) 
                                        | (((~ (IData)(vlSelfRef.__PVT__dirResult_hit)) 
                                            & (IData)(vlSelfRef.__PVT__gotT)) 
                                           | ((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                              & ((IData)(vlSelfRef.__PVT__req_aliasTask) 
                                                 & ((2U 
                                                     == (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                                    | (3U 
                                                       == (IData)(vlSelfRef.__PVT__dirResult_meta_state))))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__2(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__3(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___GEN_84 = ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_7 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_retry));
    vlSelfRef.__PVT___GEN_200 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_23 = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_6 = (1U & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_9 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
        vlSelfRef.__PVT___GEN_11 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_12 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_13 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_14 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_15 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
    } else {
        vlSelfRef.__PVT___GEN_23 = vlSelfRef.__PVT__dirResult_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (IData)(vlSelfRef.__PVT__state_s_probeack));
        vlSelfRef.__PVT___GEN_6 = (1U & (IData)(vlSelfRef.__PVT__state_s_refill));
        vlSelfRef.__PVT___GEN_9 = vlSelfRef.__PVT__state_w_rprobeacklast;
        vlSelfRef.__PVT___GEN_11 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
        vlSelfRef.__PVT___GEN_12 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeack));
        vlSelfRef.__PVT___GEN_13 = vlSelfRef.__PVT__state_w_grantfirst;
        vlSelfRef.__PVT___GEN_14 = vlSelfRef.__PVT__state_w_grantlast;
        vlSelfRef.__PVT___GEN_15 = vlSelfRef.__PVT__state_w_grant;
    }
    vlSelfRef.__PVT___GEN_91 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid) 
                                | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                   & (IData)(vlSelfRef.__PVT__mergeA)));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__4(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_113 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid)
                                  ? (IData)(vlSymsp->TOP.io_topInputNeedT_1)
                                  : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_param));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT___GEN_33 = 0ULL;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        vlSelfRef.__PVT___GEN_33 = (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                     & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)))
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__release_ts)));
    }
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__io_status_bits_w_c_resp;
    __PVT__io_status_bits_w_c_resp = 0;
    CData/*0:0*/ __PVT__mp_grant_task_merge_task_r_off;
    __PVT__mp_grant_task_merge_task_r_off = 0;
    CData/*0:0*/ __Vdly__req_valid;
    __Vdly__req_valid = 0;
    // Body
    __Vdly__req_valid = vlSelfRef.__PVT__req_valid;
    vlSelfRef.__PVT__acquire_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_31));
    vlSelfRef.__PVT__release_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_33));
    vlSelfRef.__PVT__state_w_pprobeack = ((IData)(vlSymsp->TOP.reset) 
                                          | (IData)(vlSelfRef.__PVT___GEN_12));
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid)
                                  ? ((IData)(vlSelfRef.__PVT___T_19)
                                      ? (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_84))
                                  : (IData)(vlSelfRef.__PVT___GEN_84)));
    vlSelfRef.__PVT__state_s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_164));
    vlSelfRef.__PVT__state_s_pprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_165));
    vlSelfRef.__PVT__state_s_rprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                           ? ((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                               ? ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_166))
                                               : (IData)(vlSelfRef.__PVT___GEN_166))
                                           : (IData)(vlSelfRef.__PVT___GEN_166)));
    vlSelfRef.__PVT__state_w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid)
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_13))
                                               : (IData)(vlSelfRef.__PVT___GEN_13)));
    vlSelfRef.__PVT__state_w_pprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | (IData)(vlSelfRef.__PVT___GEN_11));
    vlSelfRef.__PVT__state_w_replResp = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSelfRef.__PVT___GEN_220));
    vlSelfRef.__PVT__state_s_refill = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)
                                              ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_6))
                                              : (IData)(vlSelfRef.__PVT___GEN_6))));
    vlSelfRef.__PVT__state_w_rprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                                  ? 
                                                 ((0U 
                                                   != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                                   ? 
                                                  ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                   & (IData)(vlSelfRef.__PVT___GEN_9))
                                                   : (IData)(vlSelfRef.__PVT___GEN_9))
                                                  : (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__PVT__state_s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                         | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                 ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__mp_release_valid)
                                                  ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_5))))
                                             : (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1));
    __Vdly__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                         && ((1U & (~ ((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
                                       & (IData)(vlSelfRef.__PVT__req_valid)))) 
                             && (IData)(vlSelfRef.__PVT___GEN_0)));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_param = 0U;
        vlSelfRef.__PVT__timer = 0ULL;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid) {
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 5U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_param 
                = vlSymsp->TOP.io_topInputNeedT_1;
        }
        if (((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
             & (IData)(vlSelfRef.__PVT__req_valid))) {
            vlSelfRef.__PVT__timer = 0ULL;
        } else if (vlSelfRef.__PVT__req_valid) {
            vlSelfRef.__PVT__timer = vlSelfRef.__PVT___timer_T_1;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
            vlSelfRef.__PVT__timer = 1ULL;
        }
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (((IData)(vlSelfRef.__PVT__req_valid) 
                         & (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                        & (IData)(vlSelfRef.__PVT__dirResult_hit))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: MSHR can not receive prefetch hit req\n    at MSHR.scala:108 assert(!(req_valid && req_prefetch && dirResult.hit), \"MSHR can not receive prefetch hit req\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid) 
                        & (~ ((~ (IData)(vlSelfRef.__PVT__state_w_grantlast)) 
                              | ((~ (IData)(vlSelfRef.__PVT__state_w_grant)) 
                                 | (~ (IData)(vlSelfRef.__PVT__state_w_releaseack))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:564 assert(!(d_resp.valid && !io.status.bits.w_d_resp))\n",0);
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__dirResult_set = 0U;
        vlSelfRef.__PVT__req_alias = 0U;
        vlSelfRef.__PVT__req_set = 0U;
        vlSelfRef.__PVT__dirResult_tag = 0U;
        vlSelfRef.__PVT__req_tag = 0U;
        __PVT__mp_grant_task_merge_task_r_off = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId = 0U;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_set = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__req_s3_set;
            vlSelfRef.__PVT__req_alias = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_alias;
            vlSelfRef.__PVT__req_set = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set;
            vlSelfRef.__PVT__req_tag = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag;
        }
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_tag;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_tag;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid) {
            __PVT__mp_grant_task_merge_task_r_off = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__prefetcher__DOT__reqSource;
        }
    }
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__req_valid = __Vdly__req_valid;
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    __PVT__io_status_bits_w_c_resp = (1U & (~ ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast)))));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
    vlSelfRef.__PVT__state_w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                          | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                  ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last)
                                                  : (IData)(vlSelfRef.__PVT___GEN_14))
                                              : (IData)(vlSelfRef.__PVT___GEN_14)));
    vlSelfRef.__PVT__state_w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                               ? ((0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_208))
                                               : (IData)(vlSelfRef.__PVT___GEN_208)));
    vlSelfRef.__PVT__state_w_grant = (1U & ((IData)(vlSymsp->TOP.reset) 
                                            | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                    ? 
                                                   ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                    | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last))
                                                    : (IData)(vlSelfRef.__PVT___GEN_15))
                                                : (IData)(vlSelfRef.__PVT___GEN_15))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__state_s_release = ((IData)(vlSymsp->TOP.reset) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                            ? ((0U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                               & (IData)(vlSelfRef.__PVT___GEN_178))
                                            : (IData)(vlSelfRef.__PVT___GEN_178)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                      | ((IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG) 
                                                         | (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2))));
    vlSelfRef.__PVT__io_msInfo_bits_willFree = ((IData)(vlSelfRef.__PVT__state_s_refill) 
                                                & (((IData)(vlSelfRef.__PVT__state_s_probeack) 
                                                    & (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                   & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                                      & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                         & ((IData)(vlSelfRef.__PVT__state_w_pprobeacklast) 
                                                            & ((IData)(vlSelfRef.__PVT__state_w_releaseack) 
                                                               & (IData)(vlSelfRef.__PVT__state_w_replResp)))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                 >> 1U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 1U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_1;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT__dirResult_meta_alias = 0U;
        vlSelfRef.__PVT__dirResult_way = 0U;
        vlSelfRef.__PVT__req_reqSource = 0U;
        vlSelfRef.__PVT__req_sourceId = 0U;
        vlSelfRef.__PVT__req_fromL2pft = 0U;
        vlSelfRef.__PVT__req_off = 0U;
        vlSelfRef.__PVT__dirResult_meta_accessed = 0U;
        vlSelfRef.__PVT__req_channel = 0U;
        vlSelfRef.__PVT__probeGotN = 0U;
        vlSelfRef.__PVT__dirResult_meta_clients = 0U;
        vlSelfRef.__PVT__gotGrantData = 0U;
        vlSelfRef.__PVT__req_aliasTask = 0U;
        vlSelfRef.__PVT__probeDirty = 0U;
        vlSelfRef.__PVT__dirResult_meta_dirty = 0U;
        vlSelfRef.__PVT__req_needProbeAckData = 0U;
        vlSelfRef.__PVT__dirResult_meta_prefetch = 0U;
        vlSelfRef.__PVT__dirResult_meta_state = 0U;
        vlSelfRef.__PVT__dirResult_hit = 0U;
        vlSelfRef.__PVT__req_param = 0U;
        vlSelfRef.__PVT__req_opcode = 0U;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_alias = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_alias;
            vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            vlSelfRef.__PVT__dirResult_meta_accessed 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_accessed;
            vlSelfRef.__PVT__dirResult_meta_clients 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients;
            vlSelfRef.__PVT__dirResult_meta_prefetch 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_prefetch;
            vlSelfRef.__PVT__dirResult_meta_state = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state;
        } else {
            if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_meta_alias 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_alias;
                vlSelfRef.__PVT__dirResult_meta_accessed 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_accessed;
                vlSelfRef.__PVT__dirResult_meta_clients 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_clients;
                vlSelfRef.__PVT__dirResult_meta_prefetch 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch;
            }
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid) 
                 & (~ (IData)((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))))) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_way;
            }
            vlSelfRef.__PVT__dirResult_meta_state = 
                ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)
                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                      ? (IData)(vlSelfRef.__PVT___GEN_23)
                      : ((IData)(vlSelfRef.__PVT__mp_release_valid)
                          ? 0U : (IData)(vlSelfRef.__PVT___GEN_23)))
                  : (IData)(vlSelfRef.__PVT___GEN_23));
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
            vlSelfRef.__PVT__req_reqSource = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_reqSource;
            vlSelfRef.__PVT__req_sourceId = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_sourceId;
            vlSelfRef.__PVT__req_fromL2pft = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_fromL2pft;
            vlSelfRef.__PVT__req_off = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_off;
            vlSelfRef.__PVT__req_channel = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel;
            vlSelfRef.__PVT__probeGotN = 0U;
            vlSelfRef.__PVT__req_aliasTask = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask;
            vlSelfRef.__PVT__probeDirty = 0U;
            vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_needProbeAckData;
            vlSelfRef.__PVT__dirResult_hit = (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1));
            vlSelfRef.__PVT__req_param = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_param;
            vlSelfRef.__PVT__req_opcode = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_opcode;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid) {
            vlSelfRef.__PVT__gotGrantData = vlSelfRef.__PVT___GEN_200;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
            vlSelfRef.__PVT__gotGrantData = 0U;
        }
        if (vlSelfRef.__PVT__nestedwb_match) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSelfRef.__PVT___GEN_238;
        } else if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid) 
                    & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty;
        }
    }
    vlSelfRef.__PVT__state_s_retry = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                         & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                | (IData)(vlSelfRef.__PVT___GEN_7))
                                             : (IData)(vlSelfRef.__PVT___GEN_7))));
    vlSelfRef.__PVT__mergeA = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                               && (IData)(vlSelfRef.__PVT___GEN_91));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias))
            : 0U);
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
           & ((IData)(vlSelfRef.__PVT__dirResult_hit) 
              & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                 | (IData)(vlSelfRef.__PVT__probeDirty))));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | (((6U 
                                                == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                               | (7U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_promoteT = (((IData)(vlSelfRef.__PVT___req_promoteT_T) 
                                      | (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                     & (((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                         & ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                            & (3U == (IData)(vlSelfRef.__PVT__dirResult_meta_state)))) 
                                        | (((~ (IData)(vlSelfRef.__PVT__dirResult_hit)) 
                                            & (IData)(vlSelfRef.__PVT__gotT)) 
                                           | ((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                              & ((IData)(vlSelfRef.__PVT__req_aliasTask) 
                                                 & ((2U 
                                                     == (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                                    | (3U 
                                                       == (IData)(vlSelfRef.__PVT__dirResult_meta_state))))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__2(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__3(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___GEN_84 = ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_7 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_retry));
    vlSelfRef.__PVT___GEN_200 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_23 = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_6 = (1U & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_9 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
        vlSelfRef.__PVT___GEN_11 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_12 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_13 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_14 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_15 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
    } else {
        vlSelfRef.__PVT___GEN_23 = vlSelfRef.__PVT__dirResult_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (IData)(vlSelfRef.__PVT__state_s_probeack));
        vlSelfRef.__PVT___GEN_6 = (1U & (IData)(vlSelfRef.__PVT__state_s_refill));
        vlSelfRef.__PVT___GEN_9 = vlSelfRef.__PVT__state_w_rprobeacklast;
        vlSelfRef.__PVT___GEN_11 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
        vlSelfRef.__PVT___GEN_12 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeack));
        vlSelfRef.__PVT___GEN_13 = vlSelfRef.__PVT__state_w_grantfirst;
        vlSelfRef.__PVT___GEN_14 = vlSelfRef.__PVT__state_w_grantlast;
        vlSelfRef.__PVT___GEN_15 = vlSelfRef.__PVT__state_w_grant;
    }
    vlSelfRef.__PVT___GEN_91 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid) 
                                | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                   & (IData)(vlSelfRef.__PVT__mergeA)));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__4(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_113 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid)
                                  ? (IData)(vlSymsp->TOP.io_topInputNeedT_1)
                                  : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_param));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT___GEN_33 = 0ULL;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        vlSelfRef.__PVT___GEN_33 = (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                     & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)))
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__release_ts)));
    }
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__io_status_bits_w_c_resp;
    __PVT__io_status_bits_w_c_resp = 0;
    CData/*0:0*/ __PVT__mp_grant_task_merge_task_r_off;
    __PVT__mp_grant_task_merge_task_r_off = 0;
    CData/*0:0*/ __Vdly__req_valid;
    __Vdly__req_valid = 0;
    // Body
    __Vdly__req_valid = vlSelfRef.__PVT__req_valid;
    vlSelfRef.__PVT__acquire_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_31));
    vlSelfRef.__PVT__release_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_33));
    vlSelfRef.__PVT__state_w_pprobeack = ((IData)(vlSymsp->TOP.reset) 
                                          | (IData)(vlSelfRef.__PVT___GEN_12));
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid)
                                  ? ((IData)(vlSelfRef.__PVT___T_19)
                                      ? (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_84))
                                  : (IData)(vlSelfRef.__PVT___GEN_84)));
    vlSelfRef.__PVT__state_s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_164));
    vlSelfRef.__PVT__state_s_pprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_165));
    vlSelfRef.__PVT__state_s_rprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                           ? ((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                               ? ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_166))
                                               : (IData)(vlSelfRef.__PVT___GEN_166))
                                           : (IData)(vlSelfRef.__PVT___GEN_166)));
    vlSelfRef.__PVT__state_w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid)
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_13))
                                               : (IData)(vlSelfRef.__PVT___GEN_13)));
    vlSelfRef.__PVT__state_w_pprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | (IData)(vlSelfRef.__PVT___GEN_11));
    vlSelfRef.__PVT__state_w_replResp = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSelfRef.__PVT___GEN_220));
    vlSelfRef.__PVT__state_s_refill = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)
                                              ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_6))
                                              : (IData)(vlSelfRef.__PVT___GEN_6))));
    vlSelfRef.__PVT__state_w_rprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                                  ? 
                                                 ((0U 
                                                   != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                                   ? 
                                                  ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                   & (IData)(vlSelfRef.__PVT___GEN_9))
                                                   : (IData)(vlSelfRef.__PVT___GEN_9))
                                                  : (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__PVT__state_s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                         | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                 ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__mp_release_valid)
                                                  ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_5))))
                                             : (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1));
    __Vdly__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                         && ((1U & (~ ((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
                                       & (IData)(vlSelfRef.__PVT__req_valid)))) 
                             && (IData)(vlSelfRef.__PVT___GEN_0)));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_param = 0U;
        vlSelfRef.__PVT__timer = 0ULL;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid) {
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 5U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_param 
                = vlSymsp->TOP.io_topInputNeedT_1;
        }
        if (((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
             & (IData)(vlSelfRef.__PVT__req_valid))) {
            vlSelfRef.__PVT__timer = 0ULL;
        } else if (vlSelfRef.__PVT__req_valid) {
            vlSelfRef.__PVT__timer = vlSelfRef.__PVT___timer_T_1;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
            vlSelfRef.__PVT__timer = 1ULL;
        }
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (((IData)(vlSelfRef.__PVT__req_valid) 
                         & (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                        & (IData)(vlSelfRef.__PVT__dirResult_hit))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: MSHR can not receive prefetch hit req\n    at MSHR.scala:108 assert(!(req_valid && req_prefetch && dirResult.hit), \"MSHR can not receive prefetch hit req\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid) 
                        & (~ ((~ (IData)(vlSelfRef.__PVT__state_w_grantlast)) 
                              | ((~ (IData)(vlSelfRef.__PVT__state_w_grant)) 
                                 | (~ (IData)(vlSelfRef.__PVT__state_w_releaseack))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:564 assert(!(d_resp.valid && !io.status.bits.w_d_resp))\n",0);
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__dirResult_set = 0U;
        vlSelfRef.__PVT__req_alias = 0U;
        vlSelfRef.__PVT__req_set = 0U;
        vlSelfRef.__PVT__dirResult_tag = 0U;
        vlSelfRef.__PVT__req_tag = 0U;
        __PVT__mp_grant_task_merge_task_r_off = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId = 0U;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_set = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__req_s3_set;
            vlSelfRef.__PVT__req_alias = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_alias;
            vlSelfRef.__PVT__req_set = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set;
            vlSelfRef.__PVT__req_tag = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag;
        }
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_tag;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_tag;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid) {
            __PVT__mp_grant_task_merge_task_r_off = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__prefetcher__DOT__reqSource;
        }
    }
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__req_valid = __Vdly__req_valid;
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    __PVT__io_status_bits_w_c_resp = (1U & (~ ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast)))));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
    vlSelfRef.__PVT__state_w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                          | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                  ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last)
                                                  : (IData)(vlSelfRef.__PVT___GEN_14))
                                              : (IData)(vlSelfRef.__PVT___GEN_14)));
    vlSelfRef.__PVT__state_w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                               ? ((0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_208))
                                               : (IData)(vlSelfRef.__PVT___GEN_208)));
    vlSelfRef.__PVT__state_w_grant = (1U & ((IData)(vlSymsp->TOP.reset) 
                                            | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                    ? 
                                                   ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                    | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last))
                                                    : (IData)(vlSelfRef.__PVT___GEN_15))
                                                : (IData)(vlSelfRef.__PVT___GEN_15))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__state_s_release = ((IData)(vlSymsp->TOP.reset) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                            ? ((0U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                               & (IData)(vlSelfRef.__PVT___GEN_178))
                                            : (IData)(vlSelfRef.__PVT___GEN_178)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                      | ((IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG) 
                                                         | (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2))));
    vlSelfRef.__PVT__io_msInfo_bits_willFree = ((IData)(vlSelfRef.__PVT__state_s_refill) 
                                                & (((IData)(vlSelfRef.__PVT__state_s_probeack) 
                                                    & (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                   & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                                      & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                         & ((IData)(vlSelfRef.__PVT__state_w_pprobeacklast) 
                                                            & ((IData)(vlSelfRef.__PVT__state_w_releaseack) 
                                                               & (IData)(vlSelfRef.__PVT__state_w_replResp)))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                 >> 2U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 2U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_1;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT__dirResult_meta_alias = 0U;
        vlSelfRef.__PVT__dirResult_way = 0U;
        vlSelfRef.__PVT__req_reqSource = 0U;
        vlSelfRef.__PVT__req_sourceId = 0U;
        vlSelfRef.__PVT__req_fromL2pft = 0U;
        vlSelfRef.__PVT__req_off = 0U;
        vlSelfRef.__PVT__dirResult_meta_accessed = 0U;
        vlSelfRef.__PVT__req_channel = 0U;
        vlSelfRef.__PVT__probeGotN = 0U;
        vlSelfRef.__PVT__dirResult_meta_clients = 0U;
        vlSelfRef.__PVT__gotGrantData = 0U;
        vlSelfRef.__PVT__req_aliasTask = 0U;
        vlSelfRef.__PVT__probeDirty = 0U;
        vlSelfRef.__PVT__dirResult_meta_dirty = 0U;
        vlSelfRef.__PVT__req_needProbeAckData = 0U;
        vlSelfRef.__PVT__dirResult_meta_prefetch = 0U;
        vlSelfRef.__PVT__dirResult_meta_state = 0U;
        vlSelfRef.__PVT__dirResult_hit = 0U;
        vlSelfRef.__PVT__req_param = 0U;
        vlSelfRef.__PVT__req_opcode = 0U;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_alias = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_alias;
            vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            vlSelfRef.__PVT__dirResult_meta_accessed 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_accessed;
            vlSelfRef.__PVT__dirResult_meta_clients 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients;
            vlSelfRef.__PVT__dirResult_meta_prefetch 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_prefetch;
            vlSelfRef.__PVT__dirResult_meta_state = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state;
        } else {
            if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_meta_alias 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_alias;
                vlSelfRef.__PVT__dirResult_meta_accessed 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_accessed;
                vlSelfRef.__PVT__dirResult_meta_clients 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_clients;
                vlSelfRef.__PVT__dirResult_meta_prefetch 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch;
            }
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid) 
                 & (~ (IData)((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))))) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_way;
            }
            vlSelfRef.__PVT__dirResult_meta_state = 
                ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)
                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                      ? (IData)(vlSelfRef.__PVT___GEN_23)
                      : ((IData)(vlSelfRef.__PVT__mp_release_valid)
                          ? 0U : (IData)(vlSelfRef.__PVT___GEN_23)))
                  : (IData)(vlSelfRef.__PVT___GEN_23));
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
            vlSelfRef.__PVT__req_reqSource = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_reqSource;
            vlSelfRef.__PVT__req_sourceId = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_sourceId;
            vlSelfRef.__PVT__req_fromL2pft = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_fromL2pft;
            vlSelfRef.__PVT__req_off = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_off;
            vlSelfRef.__PVT__req_channel = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel;
            vlSelfRef.__PVT__probeGotN = 0U;
            vlSelfRef.__PVT__req_aliasTask = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask;
            vlSelfRef.__PVT__probeDirty = 0U;
            vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_needProbeAckData;
            vlSelfRef.__PVT__dirResult_hit = (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1));
            vlSelfRef.__PVT__req_param = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_param;
            vlSelfRef.__PVT__req_opcode = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_opcode;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid) {
            vlSelfRef.__PVT__gotGrantData = vlSelfRef.__PVT___GEN_200;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
            vlSelfRef.__PVT__gotGrantData = 0U;
        }
        if (vlSelfRef.__PVT__nestedwb_match) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSelfRef.__PVT___GEN_238;
        } else if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid) 
                    & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty;
        }
    }
    vlSelfRef.__PVT__state_s_retry = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                         & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                | (IData)(vlSelfRef.__PVT___GEN_7))
                                             : (IData)(vlSelfRef.__PVT___GEN_7))));
    vlSelfRef.__PVT__mergeA = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                               && (IData)(vlSelfRef.__PVT___GEN_91));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias))
            : 0U);
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
           & ((IData)(vlSelfRef.__PVT__dirResult_hit) 
              & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                 | (IData)(vlSelfRef.__PVT__probeDirty))));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | (((6U 
                                                == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                               | (7U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_promoteT = (((IData)(vlSelfRef.__PVT___req_promoteT_T) 
                                      | (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                     & (((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                         & ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                            & (3U == (IData)(vlSelfRef.__PVT__dirResult_meta_state)))) 
                                        | (((~ (IData)(vlSelfRef.__PVT__dirResult_hit)) 
                                            & (IData)(vlSelfRef.__PVT__gotT)) 
                                           | ((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                              & ((IData)(vlSelfRef.__PVT__req_aliasTask) 
                                                 & ((2U 
                                                     == (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                                    | (3U 
                                                       == (IData)(vlSelfRef.__PVT__dirResult_meta_state))))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__2(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__3(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___GEN_84 = ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_7 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_retry));
    vlSelfRef.__PVT___GEN_200 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_23 = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_6 = (1U & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_9 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
        vlSelfRef.__PVT___GEN_11 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_12 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_13 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_14 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_15 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
    } else {
        vlSelfRef.__PVT___GEN_23 = vlSelfRef.__PVT__dirResult_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (IData)(vlSelfRef.__PVT__state_s_probeack));
        vlSelfRef.__PVT___GEN_6 = (1U & (IData)(vlSelfRef.__PVT__state_s_refill));
        vlSelfRef.__PVT___GEN_9 = vlSelfRef.__PVT__state_w_rprobeacklast;
        vlSelfRef.__PVT___GEN_11 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
        vlSelfRef.__PVT___GEN_12 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeack));
        vlSelfRef.__PVT___GEN_13 = vlSelfRef.__PVT__state_w_grantfirst;
        vlSelfRef.__PVT___GEN_14 = vlSelfRef.__PVT__state_w_grantlast;
        vlSelfRef.__PVT___GEN_15 = vlSelfRef.__PVT__state_w_grant;
    }
    vlSelfRef.__PVT___GEN_91 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid) 
                                | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                   & (IData)(vlSelfRef.__PVT__mergeA)));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__4(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___ico_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_113 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid)
                                  ? (IData)(vlSymsp->TOP.io_topInputNeedT_1)
                                  : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_param));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT___GEN_33 = 0ULL;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        vlSelfRef.__PVT___GEN_33 = (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                     & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)))
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__release_ts)));
    }
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__mp_grant_task_merge_task_r_off;
    __PVT__mp_grant_task_merge_task_r_off = 0;
    CData/*0:0*/ __Vdly__req_valid;
    __Vdly__req_valid = 0;
    // Body
    __Vdly__req_valid = vlSelfRef.__PVT__req_valid;
    vlSelfRef.__PVT__acquire_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_31));
    vlSelfRef.__PVT__release_ts = (1U & (IData)(vlSelfRef.__PVT___GEN_33));
    vlSelfRef.__PVT__state_w_pprobeack = ((IData)(vlSymsp->TOP.reset) 
                                          | (IData)(vlSelfRef.__PVT___GEN_12));
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid)
                                  ? ((IData)(vlSelfRef.__PVT___T_19)
                                      ? (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_84))
                                  : (IData)(vlSelfRef.__PVT___GEN_84)));
    vlSelfRef.__PVT__state_s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_164));
    vlSelfRef.__PVT__state_s_pprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_165));
    vlSelfRef.__PVT__state_s_rprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                           ? ((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                               ? ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_166))
                                               : (IData)(vlSelfRef.__PVT___GEN_166))
                                           : (IData)(vlSelfRef.__PVT___GEN_166)));
    vlSelfRef.__PVT__state_w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid)
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_13))
                                               : (IData)(vlSelfRef.__PVT___GEN_13)));
    vlSelfRef.__PVT__state_w_pprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | (IData)(vlSelfRef.__PVT___GEN_11));
    vlSelfRef.__PVT__state_w_replResp = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSelfRef.__PVT___GEN_220));
    vlSelfRef.__PVT__state_s_refill = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)
                                              ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_6))
                                              : (IData)(vlSelfRef.__PVT___GEN_6))));
    vlSelfRef.__PVT__state_w_rprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                                  ? 
                                                 ((0U 
                                                   != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state))
                                                   ? 
                                                  ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients)) 
                                                   & (IData)(vlSelfRef.__PVT___GEN_9))
                                                   : (IData)(vlSelfRef.__PVT___GEN_9))
                                                  : (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__PVT__state_s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                         | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                                 ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__mp_release_valid)
                                                  ? (IData)(vlSelfRef.__PVT___GEN_5)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_5))))
                                             : (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1));
    __Vdly__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                         && ((1U & (~ ((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
                                       & (IData)(vlSelfRef.__PVT__req_valid)))) 
                             && (IData)(vlSelfRef.__PVT___GEN_0)));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_param = 0U;
        vlSelfRef.__PVT__timer = 0ULL;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid) {
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode = 5U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_param 
                = vlSymsp->TOP.io_topInputNeedT_1;
        }
        if (((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
             & (IData)(vlSelfRef.__PVT__req_valid))) {
            vlSelfRef.__PVT__timer = 0ULL;
        } else if (vlSelfRef.__PVT__req_valid) {
            vlSelfRef.__PVT__timer = vlSelfRef.__PVT___timer_T_1;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
            vlSelfRef.__PVT__timer = 1ULL;
        }
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (((IData)(vlSelfRef.__PVT__req_valid) 
                         & (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                        & (IData)(vlSelfRef.__PVT__dirResult_hit))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: MSHR can not receive prefetch hit req\n    at MSHR.scala:108 assert(!(req_valid && req_prefetch && dirResult.hit), \"MSHR can not receive prefetch hit req\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid) 
                        & (~ ((~ (IData)(vlSelfRef.__PVT__state_w_grantlast)) 
                              | ((~ (IData)(vlSelfRef.__PVT__state_w_grant)) 
                                 | (~ (IData)(vlSelfRef.__PVT__state_w_releaseack))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:564 assert(!(d_resp.valid && !io.status.bits.w_d_resp))\n",0);
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__dirResult_set = 0U;
        vlSelfRef.__PVT__req_alias = 0U;
        vlSelfRef.__PVT__req_set = 0U;
        vlSelfRef.__PVT__dirResult_tag = 0U;
        vlSelfRef.__PVT__req_tag = 0U;
        __PVT__mp_grant_task_merge_task_r_off = 0U;
        vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId = 0U;
    } else {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_set = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__req_s3_set;
            vlSelfRef.__PVT__req_alias = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_alias;
            vlSelfRef.__PVT__req_set = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set;
            vlSelfRef.__PVT__req_tag = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag;
        }
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_tag;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_tag;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid) {
            __PVT__mp_grant_task_merge_task_r_off = 0U;
            vlSelfRef.__PVT__mp_grant_task_merge_task_r_sourceId 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__prefetcher__DOT__reqSource;
        }
    }
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__req_valid = __Vdly__req_valid;
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_1 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (~ (IData)(vlSelfRef.__PVT__state_s_release))));
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
    vlSelfRef.__PVT__state_w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                          | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                  ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last)
                                                  : (IData)(vlSelfRef.__PVT___GEN_14))
                                              : (IData)(vlSelfRef.__PVT___GEN_14)));
    vlSelfRef.__PVT__state_w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                               ? ((0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_208))
                                               : (IData)(vlSelfRef.__PVT___GEN_208)));
    vlSelfRef.__PVT__state_w_grant = (1U & ((IData)(vlSymsp->TOP.reset) 
                                            | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_7)
                                                    ? 
                                                   ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                    | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last))
                                                    : (IData)(vlSelfRef.__PVT___GEN_15))
                                                : (IData)(vlSelfRef.__PVT___GEN_15))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__state_s_release = ((IData)(vlSymsp->TOP.reset) 
                                        | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                            ? ((0U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                                               & (IData)(vlSelfRef.__PVT___GEN_178))
                                            : (IData)(vlSelfRef.__PVT___GEN_178)));
    vlSelfRef.__PVT__io_msInfo_bits_blockRefill = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                      | ((IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG) 
                                                         | (IData)(vlSelfRef.__PVT__io_msInfo_bits_blockRefill_REG_2))));
    vlSelfRef.__PVT__io_msInfo_bits_willFree = ((IData)(vlSelfRef.__PVT__state_s_refill) 
                                                & (((IData)(vlSelfRef.__PVT__state_s_probeack) 
                                                    & (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                   & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                                      & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                         & ((IData)(vlSelfRef.__PVT__state_w_pprobeacklast) 
                                                            & ((IData)(vlSelfRef.__PVT__state_w_releaseack) 
                                                               & (IData)(vlSelfRef.__PVT__state_w_replResp)))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                 >> 3U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 3U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_1;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT___GEN_31 = 0ULL;
        vlSelfRef.__PVT__dirResult_meta_alias = 0U;
        vlSelfRef.__PVT__dirResult_way = 0U;
        vlSelfRef.__PVT__req_reqSource = 0U;
        vlSelfRef.__PVT__req_sourceId = 0U;
        vlSelfRef.__PVT__req_fromL2pft = 0U;
        vlSelfRef.__PVT__req_off = 0U;
        vlSelfRef.__PVT__dirResult_meta_accessed = 0U;
        vlSelfRef.__PVT__req_channel = 0U;
        vlSelfRef.__PVT__probeGotN = 0U;
        vlSelfRef.__PVT__dirResult_meta_clients = 0U;
        vlSelfRef.__PVT__gotGrantData = 0U;
        vlSelfRef.__PVT__req_aliasTask = 0U;
        vlSelfRef.__PVT__probeDirty = 0U;
        vlSelfRef.__PVT__dirResult_meta_dirty = 0U;
        vlSelfRef.__PVT__req_needProbeAckData = 0U;
        vlSelfRef.__PVT__dirResult_meta_prefetch = 0U;
        vlSelfRef.__PVT__dirResult_meta_state = 0U;
        vlSelfRef.__PVT__dirResult_hit = 0U;
        vlSelfRef.__PVT__req_param = 0U;
        vlSelfRef.__PVT__req_opcode = 0U;
    } else {
        vlSelfRef.__PVT___GEN_31 = ((IData)(vlSelfRef.__PVT___T_6)
                                     ? vlSelfRef.__PVT__timer
                                     : (QData)((IData)(vlSelfRef.__PVT__acquire_ts)));
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid) 
             & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_alias = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_alias;
            vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            vlSelfRef.__PVT__dirResult_meta_accessed 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_accessed;
            vlSelfRef.__PVT__dirResult_meta_clients 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_clients;
            vlSelfRef.__PVT__dirResult_meta_prefetch 
                = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_prefetch;
            vlSelfRef.__PVT__dirResult_meta_state = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state;
        } else {
            if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_meta_alias 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_alias;
                vlSelfRef.__PVT__dirResult_meta_accessed 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_accessed;
                vlSelfRef.__PVT__dirResult_meta_clients 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_clients;
                vlSelfRef.__PVT__dirResult_meta_prefetch 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch;
            }
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid) 
                 & (~ (IData)((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))))) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
            } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_way;
            }
            vlSelfRef.__PVT__dirResult_meta_state = 
                ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)
                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                      ? (IData)(vlSelfRef.__PVT___GEN_23)
                      : ((IData)(vlSelfRef.__PVT__mp_release_valid)
                          ? 0U : (IData)(vlSelfRef.__PVT___GEN_23)))
                  : (IData)(vlSelfRef.__PVT___GEN_23));
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
            vlSelfRef.__PVT__req_reqSource = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_reqSource;
            vlSelfRef.__PVT__req_sourceId = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_sourceId;
            vlSelfRef.__PVT__req_fromL2pft = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_fromL2pft;
            vlSelfRef.__PVT__req_off = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_off;
            vlSelfRef.__PVT__req_channel = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel;
            vlSelfRef.__PVT__probeGotN = 0U;
            vlSelfRef.__PVT__req_aliasTask = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask;
            vlSelfRef.__PVT__probeDirty = 0U;
            vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_needProbeAckData;
            vlSelfRef.__PVT__dirResult_hit = (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1));
            vlSelfRef.__PVT__req_param = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_param;
            vlSelfRef.__PVT__req_opcode = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_opcode;
        }
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid) {
            vlSelfRef.__PVT__gotGrantData = vlSelfRef.__PVT___GEN_200;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
            vlSelfRef.__PVT__gotGrantData = 0U;
        }
        if (vlSelfRef.__PVT__nestedwb_match) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSelfRef.__PVT___GEN_238;
        } else if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid) 
                    & (0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty;
        } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty;
        }
    }
    vlSelfRef.__PVT__state_s_retry = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_8) 
                                         & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)
                                             ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
                                                | (IData)(vlSelfRef.__PVT___GEN_7))
                                             : (IData)(vlSelfRef.__PVT___GEN_7))));
    vlSelfRef.__PVT__mergeA = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                               && (IData)(vlSelfRef.__PVT___GEN_91));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
            ? ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias))
            : 0U);
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
        = ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) 
           & ((IData)(vlSelfRef.__PVT__dirResult_hit) 
              & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                 | (IData)(vlSelfRef.__PVT__probeDirty))));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | (((6U 
                                                == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                               | (7U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_promoteT = (((IData)(vlSelfRef.__PVT___req_promoteT_T) 
                                      | (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                     & (((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                         & ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                            & (3U == (IData)(vlSelfRef.__PVT__dirResult_meta_state)))) 
                                        | (((~ (IData)(vlSelfRef.__PVT__dirResult_hit)) 
                                            & (IData)(vlSelfRef.__PVT__gotT)) 
                                           | ((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                              & ((IData)(vlSelfRef.__PVT__req_aliasTask) 
                                                 & ((2U 
                                                     == (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                                    | (3U 
                                                       == (IData)(vlSelfRef.__PVT__dirResult_meta_state))))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__2(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__3(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___GEN_84 = ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_7 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_retry));
    vlSelfRef.__PVT___GEN_200 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_23 = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_6 = (1U & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_9 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
        vlSelfRef.__PVT___GEN_11 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_12 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_13 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_14 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_15 = vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
    } else {
        vlSelfRef.__PVT___GEN_23 = vlSelfRef.__PVT__dirResult_meta_state;
        vlSelfRef.__PVT___GEN_5 = (1U & (IData)(vlSelfRef.__PVT__state_s_probeack));
        vlSelfRef.__PVT___GEN_6 = (1U & (IData)(vlSelfRef.__PVT__state_s_refill));
        vlSelfRef.__PVT___GEN_9 = vlSelfRef.__PVT__state_w_rprobeacklast;
        vlSelfRef.__PVT___GEN_11 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
        vlSelfRef.__PVT___GEN_12 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeack));
        vlSelfRef.__PVT___GEN_13 = vlSelfRef.__PVT__state_w_grantfirst;
        vlSelfRef.__PVT___GEN_14 = vlSelfRef.__PVT__state_w_grantlast;
        vlSelfRef.__PVT___GEN_15 = vlSelfRef.__PVT__state_w_grant;
    }
    vlSelfRef.__PVT___GEN_91 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid) 
                                | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                   & (IData)(vlSelfRef.__PVT__mergeA)));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
}

VL_INLINE_OPT void VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__4(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
}
