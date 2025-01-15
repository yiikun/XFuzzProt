// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_MSHR.h"
#include "VVerifyTop__Syms.h"

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__io_status_bits_w_c_resp;
    __PVT__io_status_bits_w_c_resp = 0;
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
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
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    __PVT__io_status_bits_w_c_resp = (1U & (~ ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast)))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
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
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_0;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid));
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
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty));
    if (vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
            = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias));
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
            = ((IData)(vlSelfRef.__PVT__dirResult_hit) 
               & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                  | (IData)(vlSelfRef.__PVT__probeDirty)));
    } else {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias = 0U;
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty = 0U;
    }
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
    vlSelfRef.__PVT___GEN_31 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : ((IData)(vlSelfRef.__PVT___T_6)
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__acquire_ts))));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
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

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH)) 
                             & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
}

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__io_status_bits_w_c_resp;
    __PVT__io_status_bits_w_c_resp = 0;
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
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
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    __PVT__io_status_bits_w_c_resp = (1U & (~ ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast)))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
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
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_0;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid));
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
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                 >> 1U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty));
    if (vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
            = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias));
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
            = ((IData)(vlSelfRef.__PVT__dirResult_hit) 
               & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                  | (IData)(vlSelfRef.__PVT__probeDirty)));
    } else {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias = 0U;
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty = 0U;
    }
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
    vlSelfRef.__PVT___GEN_31 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : ((IData)(vlSelfRef.__PVT___T_6)
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__acquire_ts))));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
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

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 1U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
}

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__io_status_bits_w_c_resp;
    __PVT__io_status_bits_w_c_resp = 0;
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
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
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    __PVT__io_status_bits_w_c_resp = (1U & (~ ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast)))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
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
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_0;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid));
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
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                 >> 2U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty));
    if (vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
            = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias));
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
            = ((IData)(vlSelfRef.__PVT__dirResult_hit) 
               & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                  | (IData)(vlSelfRef.__PVT__probeDirty)));
    } else {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias = 0U;
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty = 0U;
    }
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
    vlSelfRef.__PVT___GEN_31 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : ((IData)(vlSelfRef.__PVT___T_6)
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__acquire_ts))));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
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

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 2U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
}

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
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
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
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
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_0;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid));
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
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                 >> 3U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    if (vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
            = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias));
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
            = ((IData)(vlSelfRef.__PVT__dirResult_hit) 
               & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                  | (IData)(vlSelfRef.__PVT__probeDirty)));
    } else {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias = 0U;
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty = 0U;
    }
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
    vlSelfRef.__PVT___GEN_31 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : ((IData)(vlSelfRef.__PVT___T_6)
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__acquire_ts))));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
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

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 3U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
}

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__io_status_bits_w_c_resp;
    __PVT__io_status_bits_w_c_resp = 0;
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
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
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    __PVT__io_status_bits_w_c_resp = (1U & (~ ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast)))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
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
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_1;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid));
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
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty));
    if (vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
            = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias));
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
            = ((IData)(vlSelfRef.__PVT__dirResult_hit) 
               & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                  | (IData)(vlSelfRef.__PVT__probeDirty)));
    } else {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias = 0U;
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty = 0U;
    }
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
    vlSelfRef.__PVT___GEN_31 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : ((IData)(vlSelfRef.__PVT___T_6)
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__acquire_ts))));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
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

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH)) 
                             & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_0_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
}

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__io_status_bits_w_c_resp;
    __PVT__io_status_bits_w_c_resp = 0;
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
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
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    __PVT__io_status_bits_w_c_resp = (1U & (~ ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast)))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
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
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_1;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid));
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
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                 >> 1U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty));
    if (vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
            = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias));
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
            = ((IData)(vlSelfRef.__PVT__dirResult_hit) 
               & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                  | (IData)(vlSelfRef.__PVT__probeDirty)));
    } else {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias = 0U;
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty = 0U;
    }
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
    vlSelfRef.__PVT___GEN_31 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : ((IData)(vlSelfRef.__PVT___T_6)
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__acquire_ts))));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
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

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 1U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_1_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
}

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__io_status_bits_w_c_resp;
    __PVT__io_status_bits_w_c_resp = 0;
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
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
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    __PVT__io_status_bits_w_c_resp = (1U & (~ ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast)))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
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
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_1;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid));
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
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                 >> 2U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty));
    if (vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
            = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias));
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
            = ((IData)(vlSelfRef.__PVT__dirResult_hit) 
               & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                  | (IData)(vlSelfRef.__PVT__probeDirty)));
    } else {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias = 0U;
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty = 0U;
    }
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
    vlSelfRef.__PVT___GEN_31 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : ((IData)(vlSelfRef.__PVT___T_6)
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__acquire_ts))));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
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

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 2U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_2_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
}

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__0(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_16;
    __PVT___GEN_16 = 0;
    // Body
    vlSelfRef.__PVT___timer_T_1 = (1ULL + vlSelfRef.__PVT__timer);
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
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                               & (IData)(vlSelfRef.__PVT__state_w_replResp))));
    vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients 
        = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
           & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
              & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
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
    vlSelfRef.__PVT___T_19 = ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    if (vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid) {
        vlSelfRef.__PVT___GEN_112 = 5U;
        vlSelfRef.__PVT___GEN_113 = vlSymsp->TOP.io_topInputNeedT_1;
    } else {
        vlSelfRef.__PVT___GEN_112 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_opcode;
        vlSelfRef.__PVT___GEN_113 = vlSelfRef.__PVT__mp_grant_task_merge_task_r_param;
    }
    vlSelfRef.__VdfgRegularize_h47ff5784_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid))));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_13 = ((0U 
                                                  != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)) 
                                                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid));
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
    __PVT___GEN_16 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                      | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_4 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_6 = ((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                 >> 3U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready)));
    vlSelfRef.__PVT__mp_grant_task_aliasFinal = ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                                                  ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                                                  : (IData)(vlSelfRef.__PVT__req_alias));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    if (vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients) {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias 
            = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_aMergeTask_valid)
                ? 0U : (IData)(vlSelfRef.__PVT__mp_grant_task_merge_task_r_alias));
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty 
            = ((IData)(vlSelfRef.__PVT__dirResult_hit) 
               & ((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                  | (IData)(vlSelfRef.__PVT__probeDirty)));
    } else {
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_alias = 0U;
        vlSelfRef.__PVT__io_tasks_mainpipe_bits_meta_dirty = 0U;
    }
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)));
    vlSelfRef.__VdfgRegularize_h47ff5784_0_7 = ((IData)(vlSelfRef.__PVT___T_19) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT___GEN_220 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_238 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_0_13)
                                     ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    vlSelfRef.__PVT___GEN_208 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_16))
                                  : (IData)(__PVT___GEN_16));
    vlSelfRef.__PVT___GEN_31 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : ((IData)(vlSelfRef.__PVT___T_6)
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__acquire_ts))));
    vlSelfRef.__PVT___GEN_164 = ((IData)(vlSelfRef.__PVT___T_6) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
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

VL_ATTR_COLD void VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__1(VVerifyTop_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VVerifyTop_MSHR___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_7 = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 3U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__PVT___GEN_33 = ((IData)(vlSymsp->TOP.reset)
                                 ? 0ULL : (((~ (IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                                            & ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)))
                                            ? vlSelfRef.__PVT__timer
                                            : (QData)((IData)(vlSelfRef.__PVT__release_ts))));
    vlSelfRef.__PVT___GEN_178 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_3_ready)
                                  ? ((IData)(vlSelfRef.__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                                      ? (IData)(vlSelfRef.__PVT___GEN_4)
                                      : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                         | (IData)(vlSelfRef.__PVT___GEN_4)))
                                  : (IData)(vlSelfRef.__PVT___GEN_4));
    vlSelfRef.__PVT___GEN_165 = (1U & ((IData)(vlSelfRef.__PVT___T_7) 
                                       | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_166 = ((IData)(vlSelfRef.__PVT___T_7) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
}
