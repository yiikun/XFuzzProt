// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_MSHR_16.h"
#include "VVerifyTop__Syms.h"

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0__0(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__probe_dirty;
    __Vdly__probe_dirty = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_1;
    __Vdly__meta_reg_self_clientStates_1 = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_0;
    __Vdly__meta_reg_self_clientStates_0 = 0;
    // Body
    __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
    __Vdly__probe_dirty = vlSelfRef.__PVT__probe_dirty;
    if (vlSelfRef.__PVT__change_self_meta) {
        if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_toN) {
            __Vdly__meta_reg_self_clientStates_1 = 0U;
            __Vdly__meta_reg_self_clientStates_0 = 0U;
            vlSelfRef.__PVT__meta_reg_self_state = 0U;
        } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_toB) {
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_1))) {
                __Vdly__meta_reg_self_clientStates_1 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_0))) {
                __Vdly__meta_reg_self_clientStates_0 = 1U;
            }
            vlSelfRef.__PVT__meta_reg_self_state = 1U;
        } else {
            __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_5;
            __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_4;
            vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_3;
        }
        vlSelfRef.__PVT__meta_reg_self_hit = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_toN))) 
                                              && (IData)(vlSelfRef.io_tasks_source_d_bits_isHit));
        vlSelfRef.__PVT__meta_reg_self_dirty = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_c_set_dirty) 
                                                | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_set_dirty) 
                                                   | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_clr_dirty)) 
                                                      & (IData)(vlSelfRef.__PVT___GEN_2))));
    } else {
        __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_5;
        __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_4;
        vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_3;
        vlSelfRef.__PVT__meta_reg_self_hit = vlSelfRef.io_tasks_source_d_bits_isHit;
        if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__meta_reg_self_dirty = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
        }
    }
    if (vlSelfRef.__PVT__change_clients_meta_1) {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_1_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_12));
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_1_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_13));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = vlSelfRef.__PVT___GEN_12;
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = vlSelfRef.__PVT___GEN_13;
    }
    if (vlSelfRef.__PVT__change_clients_meta_0) {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_0_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_10));
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_0_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_11));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = vlSelfRef.__PVT___GEN_10;
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = vlSelfRef.__PVT___GEN_11;
    }
    vlSelfRef.__PVT__nestC_saveDirty_flag = ((1U & 
                                              (~ (IData)(vlSymsp->TOP.reset))) 
                                             && (IData)(vlSelfRef.__PVT___GEN_452));
    vlSelfRef.__PVT__someClientHasProbeAckData = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                      && (IData)(vlSelfRef.__PVT___GEN_360)));
    vlSelfRef.__PVT__s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_337))
                                      : (IData)(vlSelfRef.__PVT___GEN_337)));
    vlSelfRef.__PVT__s_execute = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_342));
    vlSelfRef.__PVT__s_probe = ((IData)(vlSymsp->TOP.reset) 
                                | (IData)(vlSelfRef.__PVT___GEN_339));
    vlSelfRef.__PVT__w_grant = ((IData)(vlSymsp->TOP.reset) 
                                | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                    ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_32)
                                        ? (((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                            & (IData)(vlSelfRef.__PVT__req_size)) 
                                           | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last))
                                        : (IData)(vlSelfRef.__PVT___GEN_394))
                                    : (IData)(vlSelfRef.__PVT___GEN_394)));
    vlSelfRef.__PVT__w_probeackfirst = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_386));
    vlSelfRef.__PVT__promoteT_safe = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                          ? ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                             & (IData)(vlSelfRef.__PVT___GEN_284))
                                          : (IData)(vlSelfRef.__PVT___GEN_284)));
    vlSelfRef.__PVT__w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_32) 
                                            | (IData)(vlSelfRef.__PVT___GEN_392))
                                         : (IData)(vlSelfRef.__PVT___GEN_392)));
    vlSelfRef.__PVT__w_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_388));
    vlSelfRef.__PVT__w_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_418));
    vlSelfRef.__PVT__w_putwritten = ((IData)(vlSymsp->TOP.reset) 
                                     | (IData)(vlSelfRef.__PVT___GEN_419));
    vlSelfRef.__PVT__s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                       ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)
                                           ? (IData)(vlSelfRef.__PVT___GEN_341)
                                           : ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_22)) 
                                              & (IData)(vlSelfRef.__PVT___GEN_341)))
                                       : (IData)(vlSelfRef.__PVT___GEN_341)));
    vlSelfRef.__PVT__w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_411));
    vlSelfRef.__PVT__s_release = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_340));
    vlSelfRef.__PVT__w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                         ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (IData)(vlSelfRef.__PVT___GEN_371))
                                         : (IData)(vlSelfRef.__PVT___GEN_371)));
    vlSelfRef.__PVT__nestC_save_flag = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                        && (IData)(vlSelfRef.__PVT___GEN_451));
    vlSelfRef.__PVT__transmit_from_other_client_latch 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__transmit_from_other_client));
    vlSelfRef.__PVT__w_probeacklast = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_387));
    vlSelfRef.__PVT__s_transferput = ((IData)(vlSymsp->TOP.reset) 
                                      | (IData)(vlSelfRef.__PVT___GEN_338));
    vlSelfRef.__PVT__preferCache_latch = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                          && (IData)(vlSelfRef.__PVT__preferCache));
    vlSelfRef.__PVT__s_writerelease = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__PVT___T_258)
                                           ? ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                              | (IData)(vlSelfRef.__PVT___GEN_272))
                                           : (IData)(vlSelfRef.__PVT___GEN_272)));
    vlSelfRef.__PVT__nested_c_hit_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                         && ((1U & 
                                              (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG))) 
                                             && (IData)(vlSelfRef.__PVT__nested_c_hit)));
    vlSelfRef.__PVT__acquire_flag = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((1U & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG))) 
                                         && (IData)(vlSelfRef.__PVT___GEN_92)));
    vlSelfRef.__PVT__s_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                       ? ((IData)(vlSelfRef.__PVT___T_293)
                                           ? ((~ ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__bypassPut_latch_reg)))) 
                                              & (IData)(vlSelfRef.__PVT___GEN_343))
                                           : (IData)(vlSelfRef.__PVT___GEN_343))
                                       : (IData)(vlSelfRef.__PVT___GEN_343)));
    vlSelfRef.__PVT__w_sinkcack = ((IData)(vlSymsp->TOP.reset) 
                                   | (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC__DOT__io_taskack_valid_REG) 
                                       & (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC__DOT__io_taskack_bits_sink_REG))) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                          ? ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)) 
                                             & (IData)(vlSelfRef.__PVT___GEN_283))
                                          : (IData)(vlSelfRef.__PVT___GEN_283))));
    if (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_resps_sink_c_valid) 
         & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode))) {
        vlSelfRef.__PVT__io_tasks_sink_c_bits_bufIdx_r 
            = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_bufIdx;
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_valid) {
        vlSelfRef.__PVT__req_dirty = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_dirty;
        vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_needProbeAckData;
        vlSelfRef.__PVT__req_source = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source;
        vlSelfRef.__PVT__req_fromProbeHelper = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromProbeHelper;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__transmit_from_other_client_reg = 0U;
        vlSelfRef.__PVT__a_c_through_reg = 0U;
        vlSelfRef.__PVT__highest_perm_reg_reg = 0U;
    } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__transmit_from_other_client_reg 
            = vlSelfRef.__PVT___transmit_from_other_client_T_12;
        vlSelfRef.__PVT__a_c_through_reg = vlSelfRef.io_tasks_source_d_bits_isHit;
        vlSelfRef.__PVT__highest_perm_reg_reg = (((IData)(vlSelfRef.__PVT___highest_perm_T_2) 
                                                  > (IData)(vlSelfRef.__PVT___highest_perm_T_6))
                                                  ? 
                                                 ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_3)
                                                   : 0U)
                                                  : 
                                                 (((IData)(vlSelfRef.__PVT___highest_perm_T_3) 
                                                   > (IData)(vlSelfRef.__PVT___highest_perm_T_4))
                                                   ? (IData)(vlSelfRef.__PVT___highest_perm_T_3)
                                                   : (IData)(vlSelfRef.__PVT___highest_perm_T_4)));
    } else if (vlSelfRef.io_status_bits_will_free) {
        vlSelfRef.__PVT__transmit_from_other_client_reg = 0U;
        vlSelfRef.__PVT__a_c_through_reg = 0U;
        vlSelfRef.__PVT__highest_perm_reg_reg = 0U;
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__meta_reg_self_tag = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_clients_tag = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_clients_way = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__way_s2;
        vlSelfRef.__PVT__meta_reg_self_way = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Directory result was sent to mismatch MSHR(mshrId:0, resultId:%1#)\n    at MSHR.scala:66 assert(\n",0,
                      3,(((IData)((0U != (0xfU & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                                  >> 4U)))) 
                          << 2U) | (((IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelfRef.__PVT___T_5) 
                                                >> 2U)))) 
                                     << 1U) | (IData)(
                                                      (0U 
                                                       != 
                                                       (0xaU 
                                                        & (IData)(vlSelfRef.__PVT___T_5)))))));
    }
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_resps_sink_d_valid))
                                  ? (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                        | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                       | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                      | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                      ? (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_285))
                                  : (IData)(vlSelfRef.__PVT___GEN_285)));
    vlSelfRef.__PVT__gotDirty = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (((IData)(vlSelfRef.__PVT__req_valid) 
                                      & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_resps_sink_d_valid))
                                      ? (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                          | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                          ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_dirty)
                                          : (IData)(vlSelfRef.__PVT___GEN_292))
                                      : (IData)(vlSelfRef.__PVT___GEN_292)));
    vlSelfRef.__PVT__no_schedule_REG = ((IData)(vlSymsp->TOP.reset) 
                                        | (((((IData)(vlSelfRef.__PVT__s_wbselfdir) 
                                              & (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                             & (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                            & (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                           & (IData)(vlSelfRef.__PVT__meta_valid)));
    vlSelfRef.__PVT__inv_self_dir = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && (((IData)(vlSelfRef.__PVT__req_valid) 
                                          & (IData)(vlSelfRef.__PVT__sink_c_resp_valid))
                                          ? ((IData)(vlSelfRef.__PVT___T_310)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_27) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_290))
                                              : (IData)(vlSelfRef.__PVT___GEN_290))
                                          : (IData)(vlSelfRef.__PVT___GEN_290)));
    if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            vlSelfRef.__PVT__sink = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_sink;
        }
    }
    vlSelfRef.__PVT__bad_grant = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (((IData)(vlSelfRef.__PVT__req_valid) 
                                       & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_resps_sink_d_valid))
                                       ? (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                             | (5U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                            | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                           ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_denied)
                                           : (IData)(vlSelfRef.__PVT___GEN_288))
                                       : (IData)(vlSelfRef.__PVT___GEN_288)));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_valid) {
        vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_bufIdx;
    } else if (((IData)(vlSelfRef.__PVT__req_valid) 
                & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            if ((0U != (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))) {
                vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_bufIdx;
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__probe_dirty = 0U;
        vlSelfRef.__PVT__a_do_release = 0U;
        vlSelfRef.__PVT__a_do_probe = 0U;
        vlSelfRef.__PVT__probes_done = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_reg_0 = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_reg_1 = 0U;
        vlSelfRef.__PVT__releaseThrough = 0U;
        vlSelfRef.__PVT__releaseDrop = 0U;
        vlSelfRef.__PVT__probeAckDataThrough = 0U;
        vlSelfRef.__PVT__probeAckDataDrop = 0U;
        vlSelfRef.__PVT__probeAckDataSave = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSelfRef.__PVT__sink_c_resp_valid))) {
            __Vdly__probe_dirty = (1U & (((IData)(vlSelfRef.__PVT__probe_dirty) 
                                          | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                         | (IData)(vlSelfRef.__PVT__nested_c_hit)));
            vlSelfRef.__PVT__probes_done = vlSelfRef.__PVT___probeack_last_T;
        } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) {
            __Vdly__probe_dirty = 0U;
            vlSelfRef.__PVT__probes_done = 0U;
        }
        if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__a_do_release = ((1U & 
                                              (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 2U))) 
                                             && ((~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17)) 
                                                    & (IData)(vlSelfRef.__PVT___T_130))));
            vlSelfRef.__PVT__a_do_probe = ((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 2U))) 
                                           && ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                               & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17)) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_36)
                                                      ? 
                                                     ((1U 
                                                       != (IData)(vlSelfRef.__PVT__iam))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT___T_182) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_156))
                                                       : (IData)(vlSelfRef.__PVT___GEN_156))
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19) 
                                                      | (IData)(vlSelfRef.__PVT___GEN_156))))));
        }
        if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSelfRef.__PVT__sinkc_resp_last))) {
            if ((0x100U & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_0 
                    = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                          >> 8U)))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_1 
                    = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
        }
        if (vlSelfRef.io_status_bits_will_free) {
            vlSelfRef.__PVT__releaseThrough = 0U;
            vlSelfRef.__PVT__releaseDrop = 0U;
            vlSelfRef.__PVT__probeAckDataThrough = 0U;
            vlSelfRef.__PVT__probeAckDataDrop = 0U;
            vlSelfRef.__PVT__probeAckDataSave = 0U;
        } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) {
            if (vlSelfRef.__PVT__req_fromCmoHelper) {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                       & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                          & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
                vlSelfRef.__PVT__probeAckDataDrop = 
                    (0U == (IData)(vlSelfRef.__PVT__req_param));
                vlSelfRef.__PVT__probeAckDataSave = 
                    ((IData)(vlSelfRef.__PVT___probeAckDataSave_T_4) 
                     & (IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_8));
            } else {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = vlSelfRef.__PVT___GEN_309;
                vlSelfRef.__PVT__probeAckDataDrop = vlSelfRef.__PVT___GEN_310;
                vlSelfRef.__PVT__probeAckDataSave = vlSelfRef.__PVT___GEN_311;
            }
        }
    }
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    vlSelfRef.__PVT__REG = (1U & ((IData)(vlSymsp->TOP.reset) 
                                  | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)) 
                                     | ((IData)(vlSelfRef.__PVT__req_valid) 
                                        & (~ (IData)(vlSelfRef.__PVT__meta_valid))))));
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_1)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: L3 Release should always hit: mshrId:[0] addr: [%x]\n    at MSHR.scala:479 assert(RegNext(!meta_valid || !req.fromC || req.fromCmoHelper || clients_meta(iam).hit),\n",0,
                      5,(((IData)(vlSelfRef.__PVT__req_tag) 
                          << 3U) | ((IData)(vlSelfRef.__PVT__req_set) 
                                    << 1U)));
    }
    if (VL_UNLIKELY(((((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) 
                         & (2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                        & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                       & (~ (IData)(vlSelfRef.__PVT___T_78))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((1U == (IData)(vlSelfRef.__PVT___GEN_3)) 
                           & (1U == (IData)(vlSelfRef.__PVT__req_param))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Probe not supported: [self: %1#] [req: %1#]\n\n    at MSHR.scala:693 assert(probe_is_report(self_meta.state, req.param),\n",0,
                      2,vlSelfRef.__PVT___GEN_3,3,(IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_481) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_11)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_10) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_10))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:703 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_10,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    vlSelfRef.__PVT__REG_1 = (1U & ((((~ (IData)(vlSelfRef.__PVT__meta_valid)) 
                                      | (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                            >> 2U))) 
                                     | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                    | (IData)(vlSelfRef.__PVT___GEN_28)));
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_481) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_13)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_12) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_12))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:703 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_12,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_480) 
                        & (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                              >> 1U))) & (~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((5U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                           | (IData)(vlSelfRef.__PVT__req_preferCache)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Hint should always preferCache!\n    at MSHR.scala:848 assert(req.opcode =/= Hint || req.preferCache, \"Hint should always preferCache!\")\n",0);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__req_valid) 
                       & ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_21) 
                          & ((IData)(vlSelfRef.__PVT__client_dir_conflict) 
                             & (IData)(vlSelfRef.__PVT__probe_helper_finish)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ (IData)(vlSelfRef.__PVT__REG_2))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Error L3: meta still conflict when probe helper finish! mshrId: 0\n    at MSHR.scala:954 assert(RegNext(!clients_meta_busy, true.B),\n",0);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT___T_246) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (0U == (IData)(vlSelfRef.__PVT__probe_clients))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid probe task\n\n    at MSHR.scala:1276 assert(io.tasks.source_b.bits.clients =/= 0.U, \"Invalid probe task\\n\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_3)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:1472 assert(RegNext(!req_valid || !io.alloc.valid, true.B)) // TODO: support fully-pipelined\n",0);
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__client_dir_conflict = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_21) 
                                                & (IData)(vlSelfRef.__PVT__clients_meta_busy));
        vlSelfRef.__PVT__probe_clients = ((((IData)(vlSelfRef.__PVT___probe_clients_T_3)
                                             ? (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__req_channel))
                                                 ? 
                                                ((~ 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.__PVT__iam)) 
                                                   & (IData)(vlSelfRef.__PVT__req_acquire))) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_13) 
                                                    & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                        & (0U 
                                                           != (IData)(vlSelfRef.__PVT___GEN_12))) 
                                                       | ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                          | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                             >> 1U)))))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? (IData)(vlSelfRef.__PVT___clients_have_T_T_3)
                                                   : (IData)(vlSelfRef.__PVT___GEN_13))
                                                  : (IData)(vlSelfRef.__PVT___GEN_13)))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.__PVT___probe_clients_T_3)
                                            ? (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0)
                                            : ((1U 
                                                & (IData)(vlSelfRef.__PVT__req_channel))
                                                ? (
                                                   (~ 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.__PVT__iam)) 
                                                     & (IData)(vlSelfRef.__PVT__req_acquire))) 
                                                   & ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                      & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                                         | ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                                                               >> 1U)))))
                                                : ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__req_param))
                                                     ? (IData)(vlSelfRef.__PVT___clients_have_T_T_1)
                                                     : (IData)(vlSelfRef.__PVT___GEN_11))
                                                    : (IData)(vlSelfRef.__PVT___GEN_11)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__bypassPut_latch_reg = vlSelfRef.__PVT__bypassPut;
    } else if (vlSelfRef.io_status_bits_will_free) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_valid) {
        vlSelfRef.__PVT__req_size = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_size;
        vlSelfRef.__PVT__req_off = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_off;
        vlSelfRef.__PVT__req_preferCache = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_preferCache;
        vlSelfRef.__PVT__req_set = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_set;
        vlSelfRef.__PVT__req_tag = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_tag;
        vlSelfRef.__PVT__req_opcode = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_opcode;
        vlSelfRef.__PVT__req_fromCmoHelper = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromCmoHelper;
        vlSelfRef.__PVT__iam = ((0U == (IData)(vlSelfRef.__PVT__clientBitOH))
                                 ? 2U : (1U & ((IData)(vlSelfRef.__PVT__clientBitOH) 
                                               >> 1U)));
        vlSelfRef.__PVT__req_channel = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_channel;
        vlSelfRef.__PVT__req_param = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_param;
    }
    vlSelfRef.__PVT__meta_reg_self_clientStates_1 = __Vdly__meta_reg_self_clientStates_1;
    vlSelfRef.__PVT__meta_reg_self_clientStates_0 = __Vdly__meta_reg_self_clientStates_0;
    vlSelfRef.__PVT__probe_dirty = __Vdly__probe_dirty;
    vlSelfRef.__PVT__s_writeprobe = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                         ? ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)) 
                                            & (IData)(vlSelfRef.__PVT___GEN_350))
                                         : (IData)(vlSelfRef.__PVT___GEN_350)));
    vlSelfRef.__PVT___GEN_92 = (1U & ((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                      | (IData)(vlSelfRef.__PVT__acquire_flag)));
    vlSelfRef.io_tasks_source_e_valid = ((~ (IData)(vlSelfRef.__PVT__s_grantack)) 
                                         & (IData)(vlSelfRef.__PVT__w_grantfirst));
    vlSelfRef.__PVT__no_wait = ((IData)(vlSelfRef.__PVT__w_grantlast) 
                                & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                   & ((IData)(vlSelfRef.__PVT__w_grantack) 
                                      & ((IData)(vlSelfRef.__PVT__w_releaseack) 
                                         & ((IData)(vlSelfRef.__PVT__w_putwritten) 
                                            & (IData)(vlSelfRef.__PVT__w_sinkcack))))));
    vlSelfRef.__PVT___probeAckDataSave_T_4 = (1U & 
                                              (~ (IData)(vlSelfRef.__PVT__probeAckDataDrop)));
    vlSelfRef.__PVT___new_self_meta_dirty_T_8 = (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)));
    vlSelfRef.__PVT___new_self_meta_dirty_T_9 = ((~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)) 
                                                 & (IData)(vlSelfRef.__PVT__req_fromProbeHelper));
    vlSelfRef.__PVT__releaseSave = (1U & ((~ (IData)(vlSelfRef.__PVT__releaseThrough)) 
                                          & (~ (IData)(vlSelfRef.__PVT__releaseDrop))));
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37 
        = ((IData)(vlSelfRef.__PVT__a_do_probe) & (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit));
    vlSelfRef.__PVT___new_self_meta_clientStates_1_T_37 
        = ((IData)(vlSelfRef.__PVT__a_do_probe) & (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit));
    vlSelfRef.__PVT___new_self_meta_dirty_T_15 = ((IData)(vlSelfRef.__PVT__gotDirty) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    vlSelfRef.__PVT__REG_2 = (1U & ((IData)(vlSymsp->TOP.reset) 
                                    | (~ (IData)(vlSelfRef.__PVT__clients_meta_busy))));
    vlSelfRef.__PVT__s_wbclientstag = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_347));
    vlSelfRef.__PVT__s_wbselftag = ((IData)(vlSymsp->TOP.reset) 
                                    | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                        ? ((IData)(vlSelfRef.__PVT___T_310)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_27) 
                                               | (IData)(vlSelfRef.__PVT___GEN_345))
                                            : (IData)(vlSelfRef.__PVT___GEN_345))
                                        : (IData)(vlSelfRef.__PVT___GEN_345)));
    vlSelfRef.__PVT__s_wbselfdir = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_344));
    vlSelfRef.__PVT__s_wbclientsdir = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_346));
    vlSelfRef.__PVT__meta_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                   && ((1U & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                       && (IData)(vlSelfRef.io_metaValid)));
    vlSelfRef.__PVT__probe_helper_finish = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                            && ((1U 
                                                 & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                && (IData)(vlSelfRef.__PVT___GEN_322)));
    vlSelfRef.__PVT__REG_3 = (1U & ((IData)(vlSymsp->TOP.reset) 
                                    | ((~ (IData)(vlSelfRef.__PVT__req_valid)) 
                                       | (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_valid)))));
    vlSelfRef.io_status_bits_will_free = ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & ((IData)(vlSelfRef.__PVT__s_execute) 
                                             & ((((IData)(vlSelfRef.__PVT__s_probeack) 
                                                  & ((IData)(vlSelfRef.__PVT__no_schedule_REG) 
                                                     & (IData)(vlSelfRef.__PVT__s_grantack))) 
                                                 & (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                                & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                   & (IData)(vlSelfRef.__PVT__s_writeprobe)))));
    vlSelfRef.__PVT__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT___GEN_430));
    vlSelfRef.__PVT___transmit_from_other_client_T_2 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                           >> 1U))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_36 = ((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                      >> 1U))) 
                                                 & (4U 
                                                    != (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___io_status_bits_nestB_T_7 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__w_grantfirst)) 
                                                     | ((~ (IData)(vlSelfRef.__PVT__probe_helper_finish)) 
                                                        & (IData)(vlSelfRef.__PVT__client_dir_conflict))));
    vlSelfRef.__PVT__can_start = (1U & ((~ (IData)(vlSelfRef.__PVT__client_dir_conflict)) 
                                        | (IData)(vlSelfRef.__PVT__probe_helper_finish)));
    vlSelfRef.__PVT___new_self_meta_state_T_34 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                                   & (IData)(vlSelfRef.__PVT__promoteT_safe))
                                                   ? 2U
                                                   : 3U);
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33 
        = ((IData)(vlSelfRef.__PVT__req_acquire) | 
           (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                         >> 1U))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_21 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                                 & (IData)(vlSelfRef.__PVT__req_acquire));
    vlSelfRef.__PVT___probe_clients_T_3 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                           & (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___GEN_234 = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 2U)) 
                                       | ((~ (IData)(vlSelfRef.__PVT__req_opcode)) 
                                          | (IData)(vlSelfRef.__PVT__req_fromCmoHelper))));
    vlSelfRef.__PVT___client_shrink_perm_T_4 = ((1U 
                                                 == (IData)(vlSelfRef.__PVT__req_param)) 
                                                | ((2U 
                                                    == (IData)(vlSelfRef.__PVT__req_param)) 
                                                   | (5U 
                                                      == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__PVT___client_shrink_perm_T_10 = ((0U 
                                                  == (IData)(vlSelfRef.__PVT__req_param)) 
                                                 | (4U 
                                                    == (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___GEN_334 = ((6U == (IData)(vlSelfRef.__PVT__req_opcode))
                                  ? (((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                                      & (7U == (IData)(vlSelfRef.__PVT__req_opcode)))
                                      ? 4U : 5U) : 
                                 ((5U == (IData)(vlSelfRef.__PVT__req_opcode))
                                   ? 2U : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                                            ? 1U : 
                                           ((3U == (IData)(vlSelfRef.__PVT__req_opcode))
                                             ? 1U : 
                                            ((2U == (IData)(vlSelfRef.__PVT__req_opcode))
                                              ? 1U : 0U)))));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | ((IData)(vlSelfRef.__PVT__req_acquire) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0__1(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__meta_no_clients;
    __PVT__meta_no_clients = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T;
    __PVT___highest_perm_except_me_T = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T_6;
    __PVT___highest_perm_except_me_T_6 = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T_12;
    __PVT___highest_perm_except_me_T_12 = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T_14;
    __PVT___highest_perm_except_me_T_14 = 0;
    CData/*1:0*/ __PVT__highest_perm_except_me;
    __PVT__highest_perm_except_me = 0;
    CData/*0:0*/ __PVT__replace_need_release;
    __PVT__replace_need_release = 0;
    CData/*0:0*/ __PVT__prefetch_miss_need_probe;
    __PVT__prefetch_miss_need_probe = 0;
    CData/*0:0*/ __PVT___T_260;
    __PVT___T_260 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_0_T_38;
    __PVT___new_self_meta_clientStates_0_T_38 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_1_T_38;
    __PVT___new_self_meta_clientStates_1_T_38 = 0;
    CData/*0:0*/ __PVT__nested_client_match;
    __PVT__nested_client_match = 0;
    CData/*0:0*/ __PVT___GEN_124;
    __PVT___GEN_124 = 0;
    CData/*0:0*/ __PVT___GEN_132;
    __PVT___GEN_132 = 0;
    CData/*0:0*/ __PVT___T_159;
    __PVT___T_159 = 0;
    CData/*0:0*/ __PVT___T_161;
    __PVT___T_161 = 0;
    CData/*0:0*/ __PVT___GEN_133;
    __PVT___GEN_133 = 0;
    CData/*0:0*/ __PVT___T_168;
    __PVT___T_168 = 0;
    CData/*0:0*/ __PVT___GEN_157;
    __PVT___GEN_157 = 0;
    CData/*0:0*/ __PVT___GEN_158;
    __PVT___GEN_158 = 0;
    CData/*0:0*/ __PVT___GEN_160;
    __PVT___GEN_160 = 0;
    CData/*0:0*/ __PVT___GEN_280;
    __PVT___GEN_280 = 0;
    CData/*0:0*/ __PVT___will_save_probeack_T_2;
    __PVT___will_save_probeack_T_2 = 0;
    CData/*0:0*/ __PVT__probeack_last;
    __PVT__probeack_last = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_5;
    __VdfgRegularize_hd4a67951_2_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_30;
    __VdfgRegularize_hd4a67951_2_30 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_35;
    __VdfgRegularize_hd4a67951_2_35 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_37;
    __VdfgRegularize_hd4a67951_2_37 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_39;
    __VdfgRegularize_hd4a67951_2_39 = 0;
    // Body
    vlSelfRef.__PVT__client_set_match = ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6.__PVT__req_set) 
                                         == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.__PVT__nest_c_tag_match = ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_tag) 
                                         == (IData)(vlSelfRef.__PVT__req_tag));
    vlSelfRef.__PVT___probeack_last_T = ((IData)(vlSelfRef.__PVT__probes_done) 
                                         | ((2U & (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                     >> 8U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                >> 8U))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_32 = ((4U 
                                                  == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                 | ((5U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                    | ((1U 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                       | (0U 
                                                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_33 = (1U 
                                                 & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode) 
                                                    | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData)));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_22 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                     >> 1U) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                                       | ((IData)(vlSelfRef.__PVT__probeAckDataThrough) 
                                                          & (5U 
                                                             != (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param))))));
    vlSelfRef.__PVT___T_40 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_set) 
                              == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.io_tasks_source_b_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_probe)) 
                                            & (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.io_tasks_sink_c_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_enable) 
                                       & ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                          | ((~ (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                             & ((~ (IData)(vlSelfRef.__PVT__releaseSave)) 
                                                | (IData)(vlSelfRef.__PVT__s_release)))));
    vlSelfRef.io_tasks_source_a_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_enable) 
                                         & (((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                             | (~ (IData)(vlSelfRef.__PVT__s_transferput))) 
                                            & ((IData)(vlSelfRef.__PVT__s_probe) 
                                               & ((IData)(vlSelfRef.__PVT__s_release) 
                                                  & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                                     & (IData)(vlSelfRef.__PVT__can_start))))));
    vlSelfRef.io_tasks_source_d_valid = ((~ (IData)(vlSelfRef.__PVT__s_execute)) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_enable) 
                                            & ((IData)(vlSelfRef.__PVT__can_start) 
                                               & ((IData)(vlSelfRef.__PVT__w_grant) 
                                                  & ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                                     & ((IData)(vlSelfRef.__PVT__w_sinkcack) 
                                                        & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                           & (IData)(vlSelfRef.__PVT__w_probeacklast))))))));
    vlSelfRef.io_tasks_source_c_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_release)) 
                                            | ((~ (IData)(vlSelfRef.__PVT__s_probeack)) 
                                               & ((IData)(vlSelfRef.__PVT__s_writerelease) 
                                                  & ((IData)(vlSelfRef.__PVT__w_probeack) 
                                                     & (IData)(vlSelfRef.__PVT__w_sinkcack))))));
    __VdfgRegularize_hd4a67951_2_30 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_enable) 
                                       & ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & (IData)(vlSelfRef.__PVT__can_start)));
    vlSelfRef.__PVT___nestedReleaseDataSave_T_1 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_c_status_nestedReleaseData) 
                                                   & ((IData)(vlSelfRef.__PVT__req_valid) 
                                                      & ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_set) 
                                                         == (IData)(vlSelfRef.__PVT__req_set))));
    vlSelfRef.io_metaValid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) 
                              | (IData)(vlSelfRef.__PVT__meta_valid));
    vlSelfRef.__PVT___GEN_285 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_292 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_290 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__inv_self_dir));
    vlSelfRef.__PVT___GEN_288 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__bad_grant));
    vlSelfRef.__PVT___GEN_284 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__promoteT_safe));
    vlSelfRef.__PVT___GEN_480 = ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                     >> 2U)) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG));
    vlSelfRef.__PVT___GEN_273 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__s_writeprobe));
    vlSelfRef.__PVT___T_5 = (0xfU & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                      >> 4U) | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg)));
    vlSelfRef.__PVT__clientBitOH = ((2U & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                               >> 8U)) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                             >> 8U)));
    vlSelfRef.__PVT__sink_c_resp_valid = ((~ (IData)(vlSelfRef.__PVT__w_probeacklast)) 
                                          & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_resps_sink_c_valid));
    vlSelfRef.__PVT___GEN_430 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_valid) 
                                 | ((~ (IData)(vlSelfRef.io_status_bits_will_free)) 
                                    & (IData)(vlSelfRef.__PVT__req_valid)));
    vlSelfRef.__PVT___GEN_322 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_b_status_probeHelperFinish) 
                                     & (IData)(vlSelfRef.__PVT__client_set_match))) 
                                 | (IData)(vlSelfRef.__PVT__probe_helper_finish));
    __PVT__probeack_last = ((IData)(vlSelfRef.__PVT___probeack_last_T) 
                            == (IData)(vlSelfRef.__PVT__probe_clients));
    __PVT__nested_client_match = (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_tag) 
                                   == ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                        ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag)
                                        : (IData)(vlSelfRef.__PVT__meta_reg_clients_tag))) 
                                  & (IData)(vlSelfRef.__PVT___T_40));
    vlSelfRef.io_tasks_client_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                                 & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                          & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselfdir)) 
                                          & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_client_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                                 & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.__PVT___GEN_481 = ((IData)(vlSelfRef.__PVT___GEN_480) 
                                 & ((IData)(vlSelfRef.__PVT__req_channel) 
                                    >> 1U));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_272 = vlSelfRef.__PVT___GEN_234;
        vlSelfRef.__PVT___GEN_283 = vlSelfRef.__PVT___GEN_234;
        vlSelfRef.io_status_bits_way = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
        vlSelfRef.io_tasks_source_d_bits_isHit = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__hit_s2;
    } else {
        vlSelfRef.__PVT___GEN_272 = vlSelfRef.__PVT__s_writerelease;
        vlSelfRef.__PVT___GEN_283 = vlSelfRef.__PVT__w_sinkcack;
        vlSelfRef.io_status_bits_way = vlSelfRef.__PVT__meta_reg_self_way;
        vlSelfRef.io_tasks_source_d_bits_isHit = vlSelfRef.__PVT__meta_reg_self_hit;
    }
    vlSelfRef.__PVT___GEN_103 = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                                          & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
    vlSelfRef.__PVT___T_57 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                    & (IData)(vlSelfRef.__PVT__req_opcode)));
    __VdfgRegularize_hd4a67951_2_35 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                    >> 1U)))));
    __VdfgRegularize_hd4a67951_2_37 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                             | (IData)(vlSelfRef.__PVT__req_needT)));
    vlSelfRef.__PVT___a_c_through_T_3 = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                         & (IData)(vlSelfRef.__PVT__nest_c_tag_match));
    vlSelfRef.__PVT___T_143 = (1U & (~ ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                        & (7U == (IData)(vlSelfRef.__PVT__req_opcode)))));
    vlSelfRef.__PVT__nested_c_hit = (((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                      & (((IData)(vlSelfRef.__PVT__meta_valid) 
                                          & ((IData)(vlSelfRef.__PVT__req_channel) 
                                             & (IData)(vlSelfRef.__PVT___T_40))) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT____VdfgRegularize_h3add2528_14_0) 
                                            & ((IData)(vlSelfRef.__PVT__req_tag) 
                                               == (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_tag))))) 
                                     | (IData)(vlSelfRef.__PVT__nested_c_hit_reg));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_8 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT___GEN_2 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
    } else {
        vlSelfRef.__PVT___GEN_8 = vlSelfRef.__PVT__meta_reg_self_tag;
        vlSelfRef.__PVT___GEN_2 = vlSelfRef.__PVT__meta_reg_self_dirty;
    }
    vlSelfRef.__PVT___new_self_meta_dirty_T = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                               & (IData)(vlSelfRef.__PVT___GEN_2));
    vlSelfRef.__PVT___new_self_meta_dirty_T_13 = ((IData)(vlSelfRef.__PVT___GEN_2) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_0;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_1;
    } else {
        vlSelfRef.__PVT___GEN_4 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
        vlSelfRef.__PVT___GEN_5 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    }
    __PVT__meta_no_clients = ((0U == (IData)(vlSelfRef.__PVT___GEN_4)) 
                              & (0U == (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT___GEN_3 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_state)
                                : (IData)(vlSelfRef.__PVT__meta_reg_self_state));
    vlSelfRef.__PVT___T_78 = ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                              | (((IData)(vlSelfRef.__PVT___GEN_3) 
                                  >> 1U) & (1U == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_38 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_3) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.__PVT__req_param))));
    __PVT__replace_need_release = (((IData)(vlSelfRef.__PVT___GEN_3) 
                                    > (((IData)(vlSelfRef.__PVT___GEN_4) 
                                        > (IData)(vlSelfRef.__PVT___GEN_5))
                                        ? (IData)(vlSelfRef.__PVT___GEN_4)
                                        : (IData)(vlSelfRef.__PVT___GEN_5))) 
                                   | ((IData)(vlSelfRef.__PVT___GEN_2) 
                                      & ((1U == (IData)(vlSelfRef.__PVT___GEN_3)) 
                                         | (3U == (IData)(vlSelfRef.__PVT___GEN_3)))));
    if (vlSelfRef.io_tasks_source_d_bits_isHit) {
        __PVT___highest_perm_except_me_T = vlSelfRef.__PVT___GEN_3;
        vlSelfRef.__PVT___highest_perm_T_2 = vlSelfRef.__PVT___GEN_3;
    } else {
        __PVT___highest_perm_except_me_T = 0U;
        vlSelfRef.__PVT___highest_perm_T_2 = 0U;
    }
    __VdfgRegularize_hd4a67951_2_5 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                            | (~ ((IData)(vlSelfRef.__PVT___GEN_3) 
                                                  >> 1U))));
    vlSelfRef.__PVT__change_self_meta = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                         & (((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                             & (IData)(vlSelfRef.__PVT___T_40)) 
                                            & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_tag) 
                                               == (IData)(vlSelfRef.__PVT___GEN_8))));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_12 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_0_state;
    } else {
        vlSelfRef.__PVT___GEN_12 = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
    }
    vlSelfRef.__PVT___GEN_24 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_12)
                                 : (IData)(vlSelfRef.__PVT___GEN_10));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_13 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_11 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_0_hit;
    } else {
        vlSelfRef.__PVT___GEN_13 = vlSelfRef.__PVT__meta_reg_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_11 = vlSelfRef.__PVT__meta_reg_clients_states_0_hit;
    }
    vlSelfRef.__PVT___GEN_28 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_13)
                                 : (IData)(vlSelfRef.__PVT___GEN_11));
    if (vlSelfRef.__PVT___GEN_13) {
        vlSelfRef.__PVT___clients_have_T_T_3 = ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                >> 1U);
        vlSelfRef.__PVT___highest_perm_T_4 = vlSelfRef.__PVT___GEN_12;
    } else {
        vlSelfRef.__PVT___clients_have_T_T_3 = 0U;
        vlSelfRef.__PVT___highest_perm_T_4 = 0U;
    }
    vlSelfRef.__PVT__clients_meta_busy = (((~ (IData)(vlSelfRef.__PVT___GEN_11)) 
                                           & (0U != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                          | ((~ (IData)(vlSelfRef.__PVT___GEN_13)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT___GEN_12))));
    vlSelfRef.__PVT___clients_have_T_T_1 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                                            & ((IData)(vlSelfRef.__PVT___GEN_10) 
                                               >> 1U));
    vlSelfRef.__PVT___GEN_101 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_13)) 
                                       & (~ (IData)(vlSelfRef.__PVT___GEN_11))));
    vlSelfRef.__PVT___transmit_from_other_client_T_12 
        = ((((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (1U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_13)) | 
           (((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (0U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_11)));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_17 = ((5U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_13) 
                                                    | (IData)(vlSelfRef.__PVT___GEN_11)));
    vlSelfRef.__PVT___highest_perm_T_3 = ((IData)(vlSelfRef.__PVT___GEN_11)
                                           ? (IData)(vlSelfRef.__PVT___GEN_10)
                                           : 0U);
    __PVT___GEN_124 = (1U & (~ ((IData)(vlSelfRef.__PVT___GEN_11) 
                                | (IData)(vlSelfRef.__PVT___GEN_13))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_28 = ((IData)(vlSelfRef.__PVT__req_valid) 
                                                 & (IData)(vlSelfRef.__PVT__sink_c_resp_valid));
    vlSelfRef.__PVT__sinkc_resp_last = ((IData)(vlSelfRef.__PVT__sink_c_resp_valid) 
                                        & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_26 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                                 & (IData)(__PVT__probeack_last));
    vlSelfRef.__PVT__change_clients_meta_0 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_10)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__PVT__change_clients_meta_1 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_12)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_19 = ((IData)(vlSelfRef.__PVT___GEN_13) 
                                                 & (((IData)(vlSelfRef.__PVT___GEN_12) 
                                                     >> 1U) 
                                                    | (IData)(__VdfgRegularize_hd4a67951_2_35)));
    __PVT___T_168 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                     & (((IData)(vlSelfRef.__PVT___GEN_10) 
                         >> 1U) | (IData)(__VdfgRegularize_hd4a67951_2_35)));
    vlSelfRef.io_status_bits_will_save_data = ((IData)(vlSelfRef.__PVT__req_channel) 
                                               & ((IData)(vlSelfRef.__PVT___T_143) 
                                                  & ((IData)(vlSelfRef.__PVT__preferCache_latch) 
                                                     | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
    vlSelfRef.__PVT__req_promoteT = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                     & ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                                         ? ((IData)(__PVT__meta_no_clients) 
                                            & (3U == (IData)(vlSelfRef.__PVT___GEN_3)))
                                         : ((IData)(vlSelfRef.__PVT__gotT) 
                                            & (IData)(vlSelfRef.__PVT__promoteT_safe))));
    vlSelfRef.__PVT___GEN_110 = (1U & (~ ((IData)(vlSelfRef.__PVT___T_57) 
                                          & ((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                             & (IData)(__PVT__replace_need_release)))));
    __PVT___highest_perm_except_me_T_12 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                            & (1U == (IData)(vlSelfRef.__PVT__iam)))
                                            ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    vlSelfRef.__PVT__clients_have_T = ((IData)(vlSelfRef.__PVT___clients_have_T_T_3) 
                                       | (IData)(vlSelfRef.__PVT___clients_have_T_T_1));
    vlSelfRef.__PVT__transmit_from_other_client = (
                                                   (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                   & ((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_12) 
                                                      | (IData)(vlSelfRef.__PVT__transmit_from_other_client_reg)));
    vlSelfRef.__PVT___GEN_418 = (1U & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_valid) 
                                        & (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_bits_sink))) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))))
                                           : (IData)(vlSelfRef.__PVT__w_grantack))));
    __PVT___highest_perm_except_me_T_6 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                           & (0U == (IData)(vlSelfRef.__PVT__iam)))
                                           ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_3));
    vlSelfRef.__PVT___highest_perm_T_6 = (((IData)(vlSelfRef.__PVT___highest_perm_T_3) 
                                           > (IData)(vlSelfRef.__PVT___highest_perm_T_4))
                                           ? (IData)(vlSelfRef.__PVT___highest_perm_T_3)
                                           : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    __VdfgRegularize_hd4a67951_2_39 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                             & (~ (IData)(vlSelfRef.__PVT___GEN_28))));
    vlSelfRef.__PVT___GEN_125 = ((IData)(__PVT___GEN_124) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_38));
    vlSelfRef.__PVT__bypassPut = (IData)((((0U == (6U 
                                                   & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                           & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))) 
                                          & (IData)(__PVT___GEN_124)));
    __PVT___T_260 = ((IData)(vlSelfRef.__PVT__req_valid) 
                     & (IData)(vlSelfRef.__PVT__sinkc_resp_last));
    vlSelfRef.__PVT___T_310 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_26) 
                               & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                  & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last) 
                                     & ((~ (IData)(vlSelfRef.__PVT__nested_c_hit)) 
                                        & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))))));
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27 
        = (((IData)(vlSelfRef.__PVT__req_needT) | (IData)(vlSelfRef.__PVT__req_promoteT))
            ? 3U : 1U);
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36 
        = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
           | ((IData)(vlSelfRef.__PVT__req_promoteT) 
              | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))));
    __PVT___highest_perm_except_me_T_14 = (((IData)(__PVT___highest_perm_except_me_T_6) 
                                            > (IData)(__PVT___highest_perm_except_me_T_12))
                                            ? (IData)(__PVT___highest_perm_except_me_T_6)
                                            : (IData)(__PVT___highest_perm_except_me_T_12));
    vlSelfRef.__PVT__highest_perm = (((IData)(vlSelfRef.__PVT___highest_perm_T_2) 
                                      > (IData)(vlSelfRef.__PVT___highest_perm_T_6))
                                      ? (IData)(vlSelfRef.__PVT___highest_perm_T_2)
                                      : (IData)(vlSelfRef.__PVT___highest_perm_T_6));
    vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0 
        = ((0U != (IData)(vlSelfRef.__PVT__iam)) & 
           (((1U == (IData)(vlSelfRef.__PVT__req_param)) 
             & (((IData)(vlSelfRef.__PVT___GEN_10) 
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_11) 
                           & (IData)(__VdfgRegularize_hd4a67951_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(__VdfgRegularize_hd4a67951_2_39)))));
    vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1 
        = ((1U != (IData)(vlSelfRef.__PVT__iam)) & 
           (((1U == (IData)(vlSelfRef.__PVT__req_param)) 
             & (((IData)(vlSelfRef.__PVT___GEN_12) 
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_13) 
                           & (IData)(__VdfgRegularize_hd4a67951_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_13) 
                  & (IData)(__VdfgRegularize_hd4a67951_2_39)))));
    vlSelfRef.__PVT__preferCache = ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                         ? (IData)(vlSelfRef.__PVT__bypassPut)
                                         : (IData)(vlSelfRef.__PVT__bypassPut_latch_reg))) 
                                    & (IData)(vlSelfRef.__PVT__req_preferCache));
    vlSelfRef.__PVT___GEN_360 = (((IData)(__PVT___T_260) 
                                  & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                 | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData));
    if (__PVT___T_260) {
        vlSelfRef.__VdfgRegularize_hd4a67951_2_24 = __PVT__probeack_last;
        if ((0x100U & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
        } else {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
        }
    } else {
        vlSelfRef.__VdfgRegularize_hd4a67951_2_24 = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_0 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
        vlSelfRef.__PVT__client_probeack_param_vec_1 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
    }
    __PVT__highest_perm_except_me = (((IData)(__PVT___highest_perm_except_me_T) 
                                      > (IData)(__PVT___highest_perm_except_me_T_14))
                                      ? (IData)(__PVT___highest_perm_except_me_T)
                                      : (IData)(__PVT___highest_perm_except_me_T_14));
    vlSelfRef.__PVT__will_probeack_through = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) 
                                              & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                                                    | ((IData)(vlSelfRef.__PVT__req_needProbeAckData) 
                                                       & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT__highest_perm)))))));
    vlSelfRef.__PVT__highest_perm_reg = ((IData)(vlSelfRef.__PVT__highest_perm) 
                                         | (IData)(vlSelfRef.__PVT__highest_perm_reg_reg));
    __PVT__prefetch_miss_need_probe = ((IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1) 
                                       | (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_27 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__preferCache) 
                                                     | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
    vlSelfRef.__PVT__bypassGet = ((~ (IData)(vlSelfRef.__PVT__preferCache)) 
                                  & (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___new_clients_meta_0_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)))
            ? 1U : 0U);
    vlSelfRef.__PVT___new_clients_meta_1_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)))
            ? 1U : 0U);
    vlSelfRef.__PVT___GEN_130 = (1U & (~ ((IData)(vlSelfRef.__PVT__req_acquire)
                                           ? ((IData)(vlSelfRef.__PVT__req_needT)
                                               ? (~ 
                                                  ((IData)(__PVT__highest_perm_except_me) 
                                                   >> 1U))
                                               : (0U 
                                                  == (IData)(__PVT__highest_perm_except_me)))
                                           : ((IData)(vlSelfRef.__PVT__req_needT)
                                               ? (~ 
                                                  ((IData)(vlSelfRef.__PVT__highest_perm) 
                                                   >> 1U))
                                               : (0U 
                                                  == (IData)(vlSelfRef.__PVT__highest_perm))))));
    __PVT___will_save_probeack_T_2 = ((IData)(vlSelfRef.__PVT__will_probeack_through) 
                                      & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit));
    if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        vlSelfRef.__PVT___GEN_310 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) 
                                     & ((~ (IData)(vlSelfRef.__PVT__will_probeack_through)) 
                                        & ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 1U)));
        if (vlSelfRef.__PVT__req_fromProbeHelper) {
            vlSelfRef.__PVT___GEN_309 = ((IData)(vlSelfRef.__PVT__will_probeack_through) 
                                         & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)));
            vlSelfRef.__PVT___GEN_311 = (1U & (IData)(__PVT___will_save_probeack_T_2));
        } else {
            vlSelfRef.__PVT___GEN_309 = vlSelfRef.__PVT__will_probeack_through;
            vlSelfRef.__PVT___GEN_311 = (1U & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)) 
                                               | ((~ 
                                                   ((IData)(vlSelfRef.__PVT__req_channel) 
                                                    >> 1U)) 
                                                  | ((IData)(__PVT___will_save_probeack_T_2) 
                                                     & (1U 
                                                        == (IData)(vlSelfRef.__PVT__req_param))))));
        }
    } else {
        vlSelfRef.__PVT___GEN_310 = vlSelfRef.__PVT__probeAckDataDrop;
        vlSelfRef.__PVT___GEN_309 = vlSelfRef.__PVT__probeAckDataThrough;
        vlSelfRef.__PVT___GEN_311 = (1U & ((~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)) 
                                           & (~ (IData)(vlSelfRef.__PVT__probeAckDataDrop))));
    }
    vlSelfRef.io_tasks_dir_write_bits_data_state = 
        ((IData)(vlSelfRef.__PVT__bad_grant) ? (IData)(vlSelfRef.__PVT___GEN_3)
          : ((4U & (IData)(vlSelfRef.__PVT__req_channel))
              ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                  ? ((1U == (IData)(vlSelfRef.__PVT__req_param))
                      ? ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_3))
                              ? 3U : 1U) : (IData)(vlSelfRef.__PVT___GEN_3))
                      : 0U) : ((2U == (IData)(vlSelfRef.__PVT__req_param))
                                ? (((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                    & (3U == (IData)(vlSelfRef.__PVT___GEN_3)))
                                    ? 3U : 1U) : ((1U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? 3U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.__PVT__req_param))
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__PVT__req_param))
                                                     ? 2U
                                                     : (IData)(vlSelfRef.__PVT___GEN_3))))))
              : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                  ? ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                      ? ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_9)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_3))
                              ? 3U : 1U) : ((((IData)(vlSelfRef.__PVT___GEN_3) 
                                              >> 1U) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__req_param)))
                                             ? (IData)(vlSelfRef.__PVT___GEN_3)
                                             : (((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                                 & (2U 
                                                    != (IData)(vlSelfRef.__PVT__req_param)))
                                                 ? 1U
                                                 : 0U)))
                      : (IData)(vlSelfRef.__PVT___GEN_3))
                  : ((IData)(vlSelfRef.__PVT__inv_self_dir)
                      ? 0U : ((IData)(vlSelfRef.__PVT__req_needT)
                               ? ((IData)(vlSelfRef.__PVT__req_acquire)
                                   ? 2U : 3U) : ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                                                  ? 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT___GEN_3))
                                                   ? 
                                                  (((IData)(__PVT__meta_no_clients) 
                                                    & (IData)(vlSelfRef.__PVT__req_acquire))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__PVT___GEN_3))
                                                    ? 3U
                                                    : 1U))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__transmit_from_other_client)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : (IData)(vlSelfRef.__PVT__highest_perm_reg))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : 1U))))))));
    vlSelfRef.__PVT__prefetch_need_data = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                           & ((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                              & (((0U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? 
                                                  (0U 
                                                   == (IData)(vlSelfRef.__PVT__highest_perm))
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.__PVT__highest_perm) 
                                                    >> 1U))) 
                                                 | (IData)(__PVT__prefetch_miss_need_probe))));
    __PVT___T_159 = ((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                     & (IData)(__PVT__prefetch_miss_need_probe));
    vlSelfRef.io_tasks_source_a_bits_opcode = ((1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__s_transferput)) 
                                                   | (IData)(vlSelfRef.__PVT__bypassGet)))
                                                ? (IData)(vlSelfRef.__PVT__req_opcode)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelfRef.__PVT__req_opcode))
                                                    ? 6U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                         >> 1U)))
                                                     ? 6U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__req_opcode))
                                                      ? 6U
                                                      : (IData)(vlSelfRef.__PVT__req_opcode)))));
    if (vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37) {
        __PVT___new_self_meta_clientStates_0_T_38 = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
    } else {
        __PVT___new_self_meta_clientStates_0_T_38 = 0U;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
    }
    if (__PVT__prefetch_miss_need_probe) {
        if ((0U == (IData)(vlSelfRef.__PVT__req_param))) {
            vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 
                = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
            vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 
                = vlSelfRef.__PVT___new_clients_meta_1_state_T_24;
        } else {
            vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 = 0U;
            vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 = 0U;
        }
    } else {
        vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
        vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
    }
    if (vlSelfRef.__PVT___new_self_meta_clientStates_1_T_37) {
        __PVT___new_self_meta_clientStates_1_T_38 = vlSelfRef.__PVT___new_clients_meta_1_state_T_24;
        vlSelfRef.__PVT___new_clients_meta_1_state_T_36 
            = vlSelfRef.__PVT___new_clients_meta_1_state_T_24;
    } else {
        __PVT___new_self_meta_clientStates_1_T_38 = 0U;
        vlSelfRef.__PVT___new_clients_meta_1_state_T_36 
            = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
    }
    vlSelfRef.__PVT___GEN_343 = (1U & ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT__chosen_reg) 
                                         & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT____VdfgRegularize_h528b8c7d_0_5)) 
                                        & (IData)(vlSelfRef.io_tasks_source_e_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                    | ((IData)(vlSelfRef.__PVT___GEN_130) 
                                                       | (~ 
                                                          ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                           & (~ (IData)(vlSelfRef.__PVT__bypassPut))))))))
                                           : (IData)(vlSelfRef.__PVT__s_grantack))));
    vlSelfRef.__PVT___GEN_237 = (1U & (IData)((((0U 
                                                 != 
                                                 (6U 
                                                  & (IData)(vlSelfRef.__PVT__req_channel))) 
                                                | (IData)(vlSelfRef.__PVT___GEN_130)) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))));
    __PVT___GEN_132 = (1U & ((IData)(vlSelfRef.__PVT___GEN_130) 
                             | (~ ((IData)(vlSelfRef.__PVT___T_143) 
                                   & (((4U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                                       & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                      | (IData)(vlSelfRef.__PVT__preferCache))))));
    vlSelfRef.__PVT___T_130 = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                               & ((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                  & ((IData)(__PVT__replace_need_release) 
                                     & (((IData)(vlSelfRef.__PVT__preferCache) 
                                         & ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            | (4U == (IData)(vlSelfRef.__PVT__req_opcode)))) 
                                        | ((IData)(vlSelfRef.__PVT__prefetch_need_data) 
                                           | (IData)(vlSelfRef.__PVT__transmit_from_other_client))))));
    vlSelfRef.__PVT___T_182 = ((IData)(vlSelfRef.__PVT___GEN_13) 
                               & (((IData)(vlSelfRef.__PVT__req_acquire) 
                                   & ((IData)(__VdfgRegularize_hd4a67951_2_37) 
                                      | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                         >> 1U))) | (IData)(__PVT___T_159)));
    __PVT___T_161 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                     & (((IData)(vlSelfRef.__PVT__req_acquire) 
                         & ((IData)(__VdfgRegularize_hd4a67951_2_37) 
                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                               >> 1U))) | (IData)(__PVT___T_159)));
    __PVT___GEN_133 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                       & (IData)(__PVT___GEN_132));
    vlSelfRef.__PVT___GEN_217 = (1U & (((IData)(vlSelfRef.__PVT__req_channel) 
                                        >> 1U) | ((~ (IData)(vlSelfRef.__PVT___T_130)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT___GEN_237;
        vlSelfRef.__PVT___GEN_279 = vlSelfRef.__PVT___GEN_237;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT___GEN_237;
        __PVT___GEN_280 = ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                            ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                ? (IData)(vlSelfRef.__PVT___GEN_103)
                                : (IData)(vlSelfRef.__PVT___GEN_110))
                            : (IData)(vlSelfRef.__PVT___GEN_217));
    } else {
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT__w_grantfirst;
        vlSelfRef.__PVT___GEN_279 = vlSelfRef.__PVT__w_grant;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT__w_grantlast;
        __PVT___GEN_280 = vlSelfRef.__PVT__w_releaseack;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.__PVT__req_fromCmoHelper) {
            if (vlSelfRef.io_tasks_source_d_bits_isHit) {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_4)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_5)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
            } else {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = vlSelfRef.__PVT___GEN_4;
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = vlSelfRef.__PVT___GEN_5;
            }
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((0U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_4)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((1U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_5)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state));
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.io_tasks_source_d_bits_isHit) {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((((IData)(vlSelfRef.__PVT___GEN_4) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_4)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_4)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((((IData)(vlSelfRef.__PVT___GEN_5) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_5)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_5)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = vlSelfRef.__PVT___GEN_4;
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = vlSelfRef.__PVT___GEN_5;
        }
    } else {
        vlSelfRef.__PVT__new_self_meta_clientStates_0 
            = ((0U == (IData)(vlSelfRef.__PVT__iam))
                ? ((IData)(vlSelfRef.__PVT__req_acquire)
                    ? (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27)
                    : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                        ? ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit)
                            ? 1U : 0U) : ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit)
                                           ? (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state)
                                           : 0U))) : 
               ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                 ? ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36)
                     ? 0U : (IData)(__PVT___new_self_meta_clientStates_0_T_38))
                 : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                     ? (IData)(__PVT___new_self_meta_clientStates_0_T_38)
                     : (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45))));
        vlSelfRef.__PVT__new_self_meta_clientStates_1 
            = ((1U == (IData)(vlSelfRef.__PVT__iam))
                ? ((IData)(vlSelfRef.__PVT__req_acquire)
                    ? (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27)
                    : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                        ? ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit)
                            ? 1U : 0U) : ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit)
                                           ? (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state)
                                           : 0U))) : 
               ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                 ? ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36)
                     ? 0U : (IData)(__PVT___new_self_meta_clientStates_1_T_38))
                 : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                     ? (IData)(__PVT___new_self_meta_clientStates_1_T_38)
                     : (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45))));
    }
    if (vlSelfRef.__VdfgRegularize_hd4a67951_2_36) {
        vlSelfRef.__PVT___GEN_156 = ((0U != (IData)(vlSelfRef.__PVT__iam)) 
                                     & (IData)(__PVT___T_161));
        vlSelfRef.__PVT___GEN_159 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                           | ((~ (IData)(__PVT___T_161)) 
                                              | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
        __PVT___GEN_157 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                 | (~ (IData)(__PVT___T_161))));
        __PVT___GEN_158 = ((0U != (IData)(vlSelfRef.__PVT__iam))
                            ? ((IData)(__PVT___T_161)
                                ? (IData)(__PVT___GEN_133)
                                : (IData)(__PVT___GEN_132))
                            : (IData)(__PVT___GEN_132));
        vlSelfRef.__PVT___GEN_184 = ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_182)) 
                                         & (IData)(__PVT___GEN_157))
                                      : (IData)(__PVT___GEN_157));
    } else {
        vlSelfRef.__PVT___GEN_156 = __PVT___T_168;
        vlSelfRef.__PVT___GEN_159 = (1U & ((~ (IData)(__PVT___T_168)) 
                                           | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)));
        __PVT___GEN_157 = (1U & (~ (IData)(__PVT___T_168)));
        __PVT___GEN_158 = ((IData)(__PVT___T_168) ? 
                           ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                            & (IData)(__PVT___GEN_133))
                            : (IData)(__PVT___GEN_132));
        vlSelfRef.__PVT___GEN_184 = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19)) 
                                     & (IData)(__PVT___GEN_157));
    }
    vlSelfRef.__PVT___GEN_227 = (1U & ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                        ? ((~ (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_101))
                                        : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                                            ? (IData)(vlSelfRef.__PVT___GEN_125)
                                            : ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                               | (IData)(vlSelfRef.__PVT___GEN_184)))));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                 & (IData)(vlSelfRef.__PVT___GEN_159));
    __PVT___GEN_160 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                       & (IData)(__PVT___GEN_158));
    vlSelfRef.__PVT___GEN_185 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_36)
                                  ? ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((IData)(vlSelfRef.__PVT___T_182)
                                          ? (IData)(__PVT___GEN_160)
                                          : (IData)(__PVT___GEN_158))
                                      : (IData)(__PVT___GEN_158))
                                  : ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19)
                                      ? ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                         & (IData)(__PVT___GEN_160))
                                      : (IData)(__PVT___GEN_158)));
    vlSelfRef.__PVT___GEN_371 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)
                                      ? ((~ (((((IData)(vlSelfRef.__PVT__req_channel) 
                                                >> 1U) 
                                               & (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                              | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                             & (IData)(vlSelfRef.__PVT__probeAckDataThrough))) 
                                         & (IData)(__PVT___GEN_280))
                                      : ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_22)
                                          ? ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                             & (IData)(__PVT___GEN_280))
                                          : (IData)(__PVT___GEN_280)))
                                  : (IData)(__PVT___GEN_280));
    if (vlSelfRef.__VdfgRegularize_hd4a67951_2_28) {
        vlSelfRef.__PVT___GEN_386 = ((IData)(vlSelfRef.__PVT__w_probeackfirst) 
                                     | (IData)(__PVT__probeack_last));
        vlSelfRef.__PVT___GEN_387 = ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                     | ((IData)(__PVT__probeack_last) 
                                        & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last)));
        vlSelfRef.__PVT___GEN_388 = ((IData)(vlSelfRef.__PVT__w_probeack) 
                                     | ((IData)(__PVT__probeack_last) 
                                        & ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                           | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last))));
    } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_386 = vlSelfRef.__PVT___GEN_227;
        vlSelfRef.__PVT___GEN_387 = vlSelfRef.__PVT___GEN_227;
        vlSelfRef.__PVT___GEN_388 = vlSelfRef.__PVT___GEN_227;
    } else {
        vlSelfRef.__PVT___GEN_386 = vlSelfRef.__PVT__w_probeackfirst;
        vlSelfRef.__PVT___GEN_387 = vlSelfRef.__PVT__w_probeacklast;
        vlSelfRef.__PVT___GEN_388 = vlSelfRef.__PVT__w_probeack;
    }
}

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0__2(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__nestedReleaseDataSave;
    __PVT__nestedReleaseDataSave = 0;
    CData/*0:0*/ __PVT___io_tasks_source_d_bits_useBypass_T_5;
    __PVT___io_tasks_source_d_bits_useBypass_T_5 = 0;
    CData/*0:0*/ __PVT__nestedReleaseDirtyDataSave;
    __PVT__nestedReleaseDirtyDataSave = 0;
    CData/*0:0*/ __PVT___T_245;
    __PVT___T_245 = 0;
    CData/*0:0*/ __PVT___T_251;
    __PVT___T_251 = 0;
    // Body
    vlSelfRef.__PVT__nest_c_way_match = ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.io_status_bits_way) 
                                         == (IData)(vlSelfRef.io_status_bits_way));
    vlSelfRef.__PVT___GEN_347 = (1U & ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter_2__DOT__chosenOH) 
                                         & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter_2_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_client_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_28)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientstag))));
    vlSelfRef.__PVT___GEN_345 = (1U & ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb__DOT__chosenOH) 
                                         & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper) 
                                                  | (~ (IData)(vlSelfRef.__PVT___T_57)))
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                     | ((~ 
                                                         ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                          & ((IData)(vlSelfRef.__PVT__preferCache) 
                                                             & ((4U 
                                                                 == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                                | ((6U 
                                                                    == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                                   | (IData)(vlSelfRef.__PVT__prefetch_need_data)))))) 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_36)
                                                            ? 
                                                           ((1U 
                                                             != (IData)(vlSelfRef.__PVT__iam))
                                                             ? 
                                                            ((IData)(vlSelfRef.__PVT___T_182)
                                                              ? (IData)(vlSelfRef.__PVT___GEN_161)
                                                              : (IData)(vlSelfRef.__PVT___GEN_159))
                                                             : (IData)(vlSelfRef.__PVT___GEN_159))
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19)
                                                             ? (IData)(vlSelfRef.__PVT___GEN_161)
                                                             : (IData)(vlSelfRef.__PVT___GEN_159)))))))
                                           : (IData)(vlSelfRef.__PVT__s_wbselftag))));
    vlSelfRef.__PVT___T_246 = (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT__chosen_reg) 
                                & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT____VdfgRegularize_hae52cd36_0_10)) 
                               & (IData)(vlSelfRef.io_tasks_source_b_valid));
    __PVT___T_251 = (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT__chosen_reg) 
                      & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT____VdfgRegularize_h20ebb837_0_10)) 
                     & (IData)(vlSelfRef.io_tasks_source_c_valid));
    vlSelfRef.__PVT___GEN_342 = (1U & ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT__chosen_reg) 
                                         & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT____VdfgRegularize_h1ec93158_0_10)) 
                                        & (IData)(vlSelfRef.io_tasks_source_d_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? (IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                     | (5U 
                                                        == (IData)(vlSelfRef.__PVT__req_opcode)))))
                                           : (IData)(vlSelfRef.__PVT__s_execute))));
    vlSelfRef.__PVT___GEN_344 = (1U & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH) 
                                        & (IData)(vlSelfRef.io_tasks_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? 
                                                  (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                    | (IData)(vlSelfRef.__PVT__req_opcode))))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.__PVT__req_channel))
                                                   ? 
                                                  ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                   | (~ (IData)(vlSelfRef.__PVT___T_78)))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                   | ((~ (IData)(
                                                                 (((0U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                                                   & (~ (IData)(vlSelfRef.__PVT___GEN_2))) 
                                                                  & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)))) 
                                                      & ((IData)(vlSelfRef.__PVT__req_acquire)
                                                          ? 
                                                         ((~ 
                                                           ((IData)(vlSelfRef.__PVT___T_143) 
                                                            & ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                               | (IData)(vlSelfRef.__PVT__preferCache)))) 
                                                          & (IData)(vlSelfRef.__PVT___GEN_185))
                                                          : (IData)(vlSelfRef.__PVT___GEN_185))))))
                                           : (IData)(vlSelfRef.__PVT__s_wbselfdir))));
    vlSelfRef.__PVT___GEN_346 = (1U & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter_1__DOT__chosenOH) 
                                        & (IData)(vlSelfRef.io_tasks_client_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_101)
                                                   : 
                                                  (~ 
                                                   (((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.__PVT___GEN_24))) 
                                                    | ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10) 
                                                       & ((IData)(vlSelfRef.__PVT___GEN_24) 
                                                          >> 1U)))))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.__PVT__req_channel))
                                                   ? (IData)(vlSelfRef.__PVT___GEN_125)
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                   | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                      & (IData)(vlSelfRef.__PVT___GEN_184)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientsdir))));
    __PVT___T_245 = (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT__chosen_reg) 
                      & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT____VdfgRegularize_h3b69c469_0_10)) 
                     & (IData)(vlSelfRef.io_tasks_source_a_valid));
    vlSelfRef.__PVT___T_258 = (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT__chosen_reg) 
                                & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT____VdfgRegularize_h5d7114fd_0_10)) 
                               & (IData)(vlSelfRef.io_tasks_sink_c_valid));
    vlSelfRef.__PVT__a_c_through = ((IData)(vlSelfRef.__PVT__req_channel) 
                                    & (((~ (IData)(vlSelfRef.__PVT__nest_c_way_match)) 
                                        & (IData)(vlSelfRef.__PVT___a_c_through_T_3)) 
                                       | (((~ (IData)(vlSelfRef.__PVT__nest_c_tag_match)) 
                                           & ((IData)(vlSelfRef.__PVT__nest_c_way_match) 
                                              & (((IData)(vlSelfRef.__PVT___T_143) 
                                                  & (IData)(vlSelfRef.__PVT__preferCache_latch)) 
                                                 | ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                    | ((IData)(vlSelfRef.__PVT__a_c_through_reg) 
                                                       | (IData)(vlSelfRef.__PVT__transmit_from_other_client_latch)))))) 
                                          | ((IData)(vlSelfRef.__PVT__nest_c_tag_match) 
                                             & ((IData)(vlSelfRef.__PVT__nest_c_way_match) 
                                                & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                   & (IData)(vlSelfRef.__PVT__a_do_release)))))));
    vlSelfRef.__PVT___GEN_339 = ((IData)(vlSelfRef.__PVT___T_246) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_227)
                                     : (IData)(vlSelfRef.__PVT__s_probe)));
    vlSelfRef.__PVT___GEN_341 = (1U & ((IData)(__PVT___T_251) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                           ? (1U & 
                                              ((2U 
                                                != 
                                                (6U 
                                                 & (IData)(vlSelfRef.__PVT__req_channel))) 
                                               | (~ 
                                                  ((~ (IData)(vlSelfRef.__PVT__will_probeack_through)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper))))))
                                           : (IData)(vlSelfRef.__PVT__s_probeack))));
    vlSelfRef.__PVT___GEN_340 = ((IData)(__PVT___T_251) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                     ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                         ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                             ? (IData)(vlSelfRef.__PVT___GEN_103)
                                             : (IData)(vlSelfRef.__PVT___GEN_110))
                                         : (IData)(vlSelfRef.__PVT___GEN_217))
                                     : (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.__PVT___GEN_337 = ((IData)(__PVT___T_245) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_237)
                                     : (IData)(vlSelfRef.__PVT__s_acquire)));
    vlSelfRef.__PVT___GEN_338 = (1U & ((IData)(__PVT___T_245) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__bypassPut)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))))
                                           : (IData)(vlSelfRef.__PVT__s_transferput))));
    vlSelfRef.__PVT___GEN_350 = (1U & ((IData)(vlSelfRef.__PVT___T_258)
                                        ? ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_273))
                                        : (IData)(vlSelfRef.__PVT___GEN_273)));
    __PVT__nestedReleaseDataSave = ((~ (IData)(vlSelfRef.__PVT__a_c_through)) 
                                    & ((IData)(vlSelfRef.__PVT___nestedReleaseDataSave_T_1) 
                                       & ((IData)(vlSelfRef.__PVT__nest_c_tag_match) 
                                          & ((IData)(vlSelfRef.__PVT__nest_c_way_match) 
                                             & (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.io_metaValid)))));
    vlSelfRef.__PVT___GEN_451 = ((IData)(__PVT__nestedReleaseDataSave) 
                                 | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)) 
                                    & (IData)(vlSelfRef.__PVT__nestC_save_flag)));
    __PVT__nestedReleaseDirtyDataSave = ((IData)(__PVT__nestedReleaseDataSave) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.io_reqDirty));
    __PVT___io_tasks_source_d_bits_useBypass_T_5 = 
        (1U & (~ ((IData)(vlSelfRef.__PVT__nestC_save_flag) 
                  | (IData)(__PVT__nestedReleaseDataSave))));
    vlSelfRef.__PVT___GEN_452 = ((IData)(__PVT__nestedReleaseDirtyDataSave) 
                                 | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)) 
                                    & (IData)(vlSelfRef.__PVT__nestC_saveDirty_flag)));
    vlSelfRef.__PVT__nestC_saveDirty = ((IData)(vlSelfRef.__PVT__nestC_saveDirty_flag) 
                                        | (IData)(__PVT__nestedReleaseDirtyDataSave));
    vlSelfRef.__PVT___T_293 = (((~ (IData)(vlSelfRef.__PVT__acquire_flag)) 
                                & (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_26)) 
                               & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last) 
                                  & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                     & ((~ (IData)(vlSelfRef.__PVT__nested_c_hit)) 
                                        & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                           & (IData)(__PVT___io_tasks_source_d_bits_useBypass_T_5))))));
    vlSelfRef.io_tasks_source_d_bits_useBypass = ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                       >> 1U))) 
                                                  & (((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.__PVT___GEN_3)) 
                                                         & (IData)(vlSelfRef.__PVT__req_needT))) 
                                                     & (((~ (IData)(vlSelfRef.__PVT__probe_dirty)) 
                                                         & (IData)(__PVT___io_tasks_source_d_bits_useBypass_T_5)) 
                                                        | ((IData)(vlSelfRef.__PVT__acquire_flag) 
                                                           & (7U 
                                                              != (IData)(vlSelfRef.io_tasks_source_a_bits_opcode))))));
    if (vlSelfRef.__VdfgRegularize_hd4a67951_2_28) {
        vlSelfRef.__PVT___GEN_392 = ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_277));
        vlSelfRef.__PVT___GEN_394 = ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_279));
        vlSelfRef.__PVT___GEN_393 = ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_278));
    } else {
        vlSelfRef.__PVT___GEN_392 = vlSelfRef.__PVT___GEN_277;
        vlSelfRef.__PVT___GEN_394 = vlSelfRef.__PVT___GEN_279;
        vlSelfRef.__PVT___GEN_393 = vlSelfRef.__PVT___GEN_278;
    }
}

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0__3(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hd4a67951_2_31 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_resps_sink_d_valid) 
                                                 & (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_419 = (1U & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD_io_resp_valid) 
                                        & (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s4_req_sinkId))) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ 
                                                     ((~ (IData)(vlSelfRef.__PVT__bypassPut)) 
                                                      & (0U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelfRef.__PVT__req_opcode))))) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))))
                                           : (IData)(vlSelfRef.__PVT__w_putwritten))));
    vlSelfRef.__PVT___GEN_411 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_32)
                                      ? ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last) 
                                         | (IData)(vlSelfRef.__PVT__w_grantlast))
                                      : (IData)(vlSelfRef.__PVT___GEN_393))
                                  : (IData)(vlSelfRef.__PVT___GEN_393));
}

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1__0(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__probe_dirty;
    __Vdly__probe_dirty = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_1;
    __Vdly__meta_reg_self_clientStates_1 = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_0;
    __Vdly__meta_reg_self_clientStates_0 = 0;
    // Body
    __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
    __Vdly__probe_dirty = vlSelfRef.__PVT__probe_dirty;
    if (vlSelfRef.__PVT__change_self_meta) {
        if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_toN) {
            __Vdly__meta_reg_self_clientStates_1 = 0U;
            __Vdly__meta_reg_self_clientStates_0 = 0U;
            vlSelfRef.__PVT__meta_reg_self_state = 0U;
        } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_toB) {
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_1))) {
                __Vdly__meta_reg_self_clientStates_1 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_0))) {
                __Vdly__meta_reg_self_clientStates_0 = 1U;
            }
            vlSelfRef.__PVT__meta_reg_self_state = 1U;
        } else {
            __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_5;
            __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_4;
            vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_3;
        }
        vlSelfRef.__PVT__meta_reg_self_hit = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_toN))) 
                                              && (IData)(vlSelfRef.io_tasks_source_d_bits_isHit));
        vlSelfRef.__PVT__meta_reg_self_dirty = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_c_set_dirty) 
                                                | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_set_dirty) 
                                                   | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_clr_dirty)) 
                                                      & (IData)(vlSelfRef.__PVT___GEN_2))));
    } else {
        __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_5;
        __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_4;
        vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_3;
        vlSelfRef.__PVT__meta_reg_self_hit = vlSelfRef.io_tasks_source_d_bits_isHit;
        if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__meta_reg_self_dirty = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
        }
    }
    if (vlSelfRef.__PVT__change_clients_meta_1) {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_1_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_12));
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_1_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_13));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = vlSelfRef.__PVT___GEN_12;
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = vlSelfRef.__PVT___GEN_13;
    }
    if (vlSelfRef.__PVT__change_clients_meta_0) {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_0_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_10));
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_0_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_11));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = vlSelfRef.__PVT___GEN_10;
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = vlSelfRef.__PVT___GEN_11;
    }
    vlSelfRef.__PVT__nestC_saveDirty_flag = ((1U & 
                                              (~ (IData)(vlSymsp->TOP.reset))) 
                                             && (IData)(vlSelfRef.__PVT___GEN_452));
    vlSelfRef.__PVT__someClientHasProbeAckData = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                      && (IData)(vlSelfRef.__PVT___GEN_360)));
    vlSelfRef.__PVT__s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_337))
                                      : (IData)(vlSelfRef.__PVT___GEN_337)));
    vlSelfRef.__PVT__s_execute = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_342));
    vlSelfRef.__PVT__s_probe = ((IData)(vlSymsp->TOP.reset) 
                                | (IData)(vlSelfRef.__PVT___GEN_339));
    vlSelfRef.__PVT__w_grant = ((IData)(vlSymsp->TOP.reset) 
                                | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                    ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_32)
                                        ? (((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                            & (IData)(vlSelfRef.__PVT__req_size)) 
                                           | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last))
                                        : (IData)(vlSelfRef.__PVT___GEN_394))
                                    : (IData)(vlSelfRef.__PVT___GEN_394)));
    vlSelfRef.__PVT__w_probeackfirst = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_386));
    vlSelfRef.__PVT__promoteT_safe = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                          ? ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                             & (IData)(vlSelfRef.__PVT___GEN_284))
                                          : (IData)(vlSelfRef.__PVT___GEN_284)));
    vlSelfRef.__PVT__w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_32) 
                                            | (IData)(vlSelfRef.__PVT___GEN_392))
                                         : (IData)(vlSelfRef.__PVT___GEN_392)));
    vlSelfRef.__PVT__w_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_388));
    vlSelfRef.__PVT__w_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_418));
    vlSelfRef.__PVT__w_putwritten = ((IData)(vlSymsp->TOP.reset) 
                                     | (IData)(vlSelfRef.__PVT___GEN_419));
    vlSelfRef.__PVT__s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                       ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)
                                           ? (IData)(vlSelfRef.__PVT___GEN_341)
                                           : ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_22)) 
                                              & (IData)(vlSelfRef.__PVT___GEN_341)))
                                       : (IData)(vlSelfRef.__PVT___GEN_341)));
    vlSelfRef.__PVT__w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_411));
    vlSelfRef.__PVT__s_release = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_340));
    vlSelfRef.__PVT__w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                         ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (IData)(vlSelfRef.__PVT___GEN_371))
                                         : (IData)(vlSelfRef.__PVT___GEN_371)));
    vlSelfRef.__PVT__nestC_save_flag = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                        && (IData)(vlSelfRef.__PVT___GEN_451));
    vlSelfRef.__PVT__transmit_from_other_client_latch 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__transmit_from_other_client));
    vlSelfRef.__PVT__w_probeacklast = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_387));
    vlSelfRef.__PVT__s_transferput = ((IData)(vlSymsp->TOP.reset) 
                                      | (IData)(vlSelfRef.__PVT___GEN_338));
    vlSelfRef.__PVT__preferCache_latch = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                          && (IData)(vlSelfRef.__PVT__preferCache));
    vlSelfRef.__PVT__s_writerelease = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__PVT___T_258)
                                           ? ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                              | (IData)(vlSelfRef.__PVT___GEN_272))
                                           : (IData)(vlSelfRef.__PVT___GEN_272)));
    vlSelfRef.__PVT__nested_c_hit_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                         && ((1U & 
                                              (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG))) 
                                             && (IData)(vlSelfRef.__PVT__nested_c_hit)));
    vlSelfRef.__PVT__acquire_flag = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((1U & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG))) 
                                         && (IData)(vlSelfRef.__PVT___GEN_92)));
    vlSelfRef.__PVT__s_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                       ? ((IData)(vlSelfRef.__PVT___T_293)
                                           ? ((~ ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__bypassPut_latch_reg)))) 
                                              & (IData)(vlSelfRef.__PVT___GEN_343))
                                           : (IData)(vlSelfRef.__PVT___GEN_343))
                                       : (IData)(vlSelfRef.__PVT___GEN_343)));
    vlSelfRef.__PVT__w_sinkcack = ((IData)(vlSymsp->TOP.reset) 
                                   | (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC__DOT__io_taskack_valid_REG) 
                                       & (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC__DOT__io_taskack_bits_sink_REG))) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                          ? ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)) 
                                             & (IData)(vlSelfRef.__PVT___GEN_283))
                                          : (IData)(vlSelfRef.__PVT___GEN_283))));
    if (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_resps_sink_c_valid) 
         & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode))) {
        vlSelfRef.__PVT__io_tasks_sink_c_bits_bufIdx_r 
            = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_bufIdx;
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_1_valid) {
        vlSelfRef.__PVT__req_dirty = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_dirty;
        vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_needProbeAckData;
        vlSelfRef.__PVT__req_source = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source;
        vlSelfRef.__PVT__req_fromProbeHelper = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromProbeHelper;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__transmit_from_other_client_reg = 0U;
        vlSelfRef.__PVT__a_c_through_reg = 0U;
        vlSelfRef.__PVT__highest_perm_reg_reg = 0U;
    } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__transmit_from_other_client_reg 
            = vlSelfRef.__PVT___transmit_from_other_client_T_12;
        vlSelfRef.__PVT__a_c_through_reg = vlSelfRef.io_tasks_source_d_bits_isHit;
        vlSelfRef.__PVT__highest_perm_reg_reg = (((IData)(vlSelfRef.__PVT___highest_perm_T_2) 
                                                  > (IData)(vlSelfRef.__PVT___highest_perm_T_6))
                                                  ? 
                                                 ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_3)
                                                   : 0U)
                                                  : 
                                                 (((IData)(vlSelfRef.__PVT___highest_perm_T_3) 
                                                   > (IData)(vlSelfRef.__PVT___highest_perm_T_4))
                                                   ? (IData)(vlSelfRef.__PVT___highest_perm_T_3)
                                                   : (IData)(vlSelfRef.__PVT___highest_perm_T_4)));
    } else if (vlSelfRef.io_status_bits_will_free) {
        vlSelfRef.__PVT__transmit_from_other_client_reg = 0U;
        vlSelfRef.__PVT__a_c_through_reg = 0U;
        vlSelfRef.__PVT__highest_perm_reg_reg = 0U;
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__meta_reg_self_tag = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_clients_tag = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_clients_way = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__way_s2;
        vlSelfRef.__PVT__meta_reg_self_way = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Directory result was sent to mismatch MSHR(mshrId:1, resultId:%1#)\n    at MSHR.scala:66 assert(\n",0,
                      3,(((IData)((0U != (0xfU & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                                  >> 4U)))) 
                          << 2U) | (((IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelfRef.__PVT___T_5) 
                                                >> 2U)))) 
                                     << 1U) | (IData)(
                                                      (0U 
                                                       != 
                                                       (0xaU 
                                                        & (IData)(vlSelfRef.__PVT___T_5)))))));
    }
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_resps_sink_d_valid))
                                  ? (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                        | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                       | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                      | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                      ? (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_285))
                                  : (IData)(vlSelfRef.__PVT___GEN_285)));
    vlSelfRef.__PVT__gotDirty = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (((IData)(vlSelfRef.__PVT__req_valid) 
                                      & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_resps_sink_d_valid))
                                      ? (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                          | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                          ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_dirty)
                                          : (IData)(vlSelfRef.__PVT___GEN_292))
                                      : (IData)(vlSelfRef.__PVT___GEN_292)));
    vlSelfRef.__PVT__no_schedule_REG = ((IData)(vlSymsp->TOP.reset) 
                                        | (((((IData)(vlSelfRef.__PVT__s_wbselfdir) 
                                              & (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                             & (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                            & (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                           & (IData)(vlSelfRef.__PVT__meta_valid)));
    vlSelfRef.__PVT__inv_self_dir = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && (((IData)(vlSelfRef.__PVT__req_valid) 
                                          & (IData)(vlSelfRef.__PVT__sink_c_resp_valid))
                                          ? ((IData)(vlSelfRef.__PVT___T_310)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_27) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_290))
                                              : (IData)(vlSelfRef.__PVT___GEN_290))
                                          : (IData)(vlSelfRef.__PVT___GEN_290)));
    if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            vlSelfRef.__PVT__sink = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_sink;
        }
    }
    vlSelfRef.__PVT__bad_grant = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (((IData)(vlSelfRef.__PVT__req_valid) 
                                       & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_resps_sink_d_valid))
                                       ? (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                             | (5U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                            | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                           ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_denied)
                                           : (IData)(vlSelfRef.__PVT___GEN_288))
                                       : (IData)(vlSelfRef.__PVT___GEN_288)));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_1_valid) {
        vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_bufIdx;
    } else if (((IData)(vlSelfRef.__PVT__req_valid) 
                & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            if ((0U != (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))) {
                vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_bufIdx;
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__probe_dirty = 0U;
        vlSelfRef.__PVT__a_do_release = 0U;
        vlSelfRef.__PVT__a_do_probe = 0U;
        vlSelfRef.__PVT__probes_done = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_reg_0 = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_reg_1 = 0U;
        vlSelfRef.__PVT__releaseThrough = 0U;
        vlSelfRef.__PVT__releaseDrop = 0U;
        vlSelfRef.__PVT__probeAckDataThrough = 0U;
        vlSelfRef.__PVT__probeAckDataDrop = 0U;
        vlSelfRef.__PVT__probeAckDataSave = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSelfRef.__PVT__sink_c_resp_valid))) {
            __Vdly__probe_dirty = (1U & (((IData)(vlSelfRef.__PVT__probe_dirty) 
                                          | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                         | (IData)(vlSelfRef.__PVT__nested_c_hit)));
            vlSelfRef.__PVT__probes_done = vlSelfRef.__PVT___probeack_last_T;
        } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) {
            __Vdly__probe_dirty = 0U;
            vlSelfRef.__PVT__probes_done = 0U;
        }
        if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__a_do_release = ((1U & 
                                              (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 2U))) 
                                             && ((~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17)) 
                                                    & (IData)(vlSelfRef.__PVT___T_130))));
            vlSelfRef.__PVT__a_do_probe = ((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 2U))) 
                                           && ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                               & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17)) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_36)
                                                      ? 
                                                     ((1U 
                                                       != (IData)(vlSelfRef.__PVT__iam))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT___T_182) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_156))
                                                       : (IData)(vlSelfRef.__PVT___GEN_156))
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19) 
                                                      | (IData)(vlSelfRef.__PVT___GEN_156))))));
        }
        if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSelfRef.__PVT__sinkc_resp_last))) {
            if ((0x100U & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_0 
                    = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                          >> 8U)))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_1 
                    = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
        }
        if (vlSelfRef.io_status_bits_will_free) {
            vlSelfRef.__PVT__releaseThrough = 0U;
            vlSelfRef.__PVT__releaseDrop = 0U;
            vlSelfRef.__PVT__probeAckDataThrough = 0U;
            vlSelfRef.__PVT__probeAckDataDrop = 0U;
            vlSelfRef.__PVT__probeAckDataSave = 0U;
        } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) {
            if (vlSelfRef.__PVT__req_fromCmoHelper) {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                       & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                          & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
                vlSelfRef.__PVT__probeAckDataDrop = 
                    (0U == (IData)(vlSelfRef.__PVT__req_param));
                vlSelfRef.__PVT__probeAckDataSave = 
                    ((IData)(vlSelfRef.__PVT___probeAckDataSave_T_4) 
                     & (IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_8));
            } else {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = vlSelfRef.__PVT___GEN_309;
                vlSelfRef.__PVT__probeAckDataDrop = vlSelfRef.__PVT___GEN_310;
                vlSelfRef.__PVT__probeAckDataSave = vlSelfRef.__PVT___GEN_311;
            }
        }
    }
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    vlSelfRef.__PVT__REG = (1U & ((IData)(vlSymsp->TOP.reset) 
                                  | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)) 
                                     | ((IData)(vlSelfRef.__PVT__req_valid) 
                                        & (~ (IData)(vlSelfRef.__PVT__meta_valid))))));
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_1)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: L3 Release should always hit: mshrId:[1] addr: [%x]\n    at MSHR.scala:479 assert(RegNext(!meta_valid || !req.fromC || req.fromCmoHelper || clients_meta(iam).hit),\n",0,
                      5,(((IData)(vlSelfRef.__PVT__req_tag) 
                          << 3U) | ((IData)(vlSelfRef.__PVT__req_set) 
                                    << 1U)));
    }
    if (VL_UNLIKELY(((((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) 
                         & (2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                        & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                       & (~ (IData)(vlSelfRef.__PVT___T_78))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((1U == (IData)(vlSelfRef.__PVT___GEN_3)) 
                           & (1U == (IData)(vlSelfRef.__PVT__req_param))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Probe not supported: [self: %1#] [req: %1#]\n\n    at MSHR.scala:693 assert(probe_is_report(self_meta.state, req.param),\n",0,
                      2,vlSelfRef.__PVT___GEN_3,3,(IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_481) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_11)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_10) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_10))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:703 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_10,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    vlSelfRef.__PVT__REG_1 = (1U & ((((~ (IData)(vlSelfRef.__PVT__meta_valid)) 
                                      | (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                            >> 2U))) 
                                     | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                    | (IData)(vlSelfRef.__PVT___GEN_28)));
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_481) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_13)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_12) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_12))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:703 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_12,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_480) 
                        & (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                              >> 1U))) & (~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((5U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                           | (IData)(vlSelfRef.__PVT__req_preferCache)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Hint should always preferCache!\n    at MSHR.scala:848 assert(req.opcode =/= Hint || req.preferCache, \"Hint should always preferCache!\")\n",0);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__req_valid) 
                       & ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_21) 
                          & ((IData)(vlSelfRef.__PVT__client_dir_conflict) 
                             & (IData)(vlSelfRef.__PVT__probe_helper_finish)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ (IData)(vlSelfRef.__PVT__REG_2))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Error L3: meta still conflict when probe helper finish! mshrId: 1\n    at MSHR.scala:954 assert(RegNext(!clients_meta_busy, true.B),\n",0);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT___T_246) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (0U == (IData)(vlSelfRef.__PVT__probe_clients))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid probe task\n\n    at MSHR.scala:1276 assert(io.tasks.source_b.bits.clients =/= 0.U, \"Invalid probe task\\n\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_3)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:1472 assert(RegNext(!req_valid || !io.alloc.valid, true.B)) // TODO: support fully-pipelined\n",0);
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__client_dir_conflict = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_21) 
                                                & (IData)(vlSelfRef.__PVT__clients_meta_busy));
        vlSelfRef.__PVT__probe_clients = ((((IData)(vlSelfRef.__PVT___probe_clients_T_3)
                                             ? (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__req_channel))
                                                 ? 
                                                ((~ 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.__PVT__iam)) 
                                                   & (IData)(vlSelfRef.__PVT__req_acquire))) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_13) 
                                                    & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                        & (0U 
                                                           != (IData)(vlSelfRef.__PVT___GEN_12))) 
                                                       | ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                          | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                             >> 1U)))))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? (IData)(vlSelfRef.__PVT___clients_have_T_T_3)
                                                   : (IData)(vlSelfRef.__PVT___GEN_13))
                                                  : (IData)(vlSelfRef.__PVT___GEN_13)))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.__PVT___probe_clients_T_3)
                                            ? (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0)
                                            : ((1U 
                                                & (IData)(vlSelfRef.__PVT__req_channel))
                                                ? (
                                                   (~ 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.__PVT__iam)) 
                                                     & (IData)(vlSelfRef.__PVT__req_acquire))) 
                                                   & ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                      & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                                         | ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                                                               >> 1U)))))
                                                : ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__req_param))
                                                     ? (IData)(vlSelfRef.__PVT___clients_have_T_T_1)
                                                     : (IData)(vlSelfRef.__PVT___GEN_11))
                                                    : (IData)(vlSelfRef.__PVT___GEN_11)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__bypassPut_latch_reg = vlSelfRef.__PVT__bypassPut;
    } else if (vlSelfRef.io_status_bits_will_free) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_1_valid) {
        vlSelfRef.__PVT__req_size = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_size;
        vlSelfRef.__PVT__req_off = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_off;
        vlSelfRef.__PVT__req_preferCache = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_preferCache;
        vlSelfRef.__PVT__req_set = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_set;
        vlSelfRef.__PVT__req_tag = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_tag;
        vlSelfRef.__PVT__req_opcode = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_opcode;
        vlSelfRef.__PVT__req_fromCmoHelper = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromCmoHelper;
        vlSelfRef.__PVT__iam = ((0U == (IData)(vlSelfRef.__PVT__clientBitOH))
                                 ? 2U : (1U & ((IData)(vlSelfRef.__PVT__clientBitOH) 
                                               >> 1U)));
        vlSelfRef.__PVT__req_channel = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_channel;
        vlSelfRef.__PVT__req_param = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_param;
    }
    vlSelfRef.__PVT__meta_reg_self_clientStates_1 = __Vdly__meta_reg_self_clientStates_1;
    vlSelfRef.__PVT__meta_reg_self_clientStates_0 = __Vdly__meta_reg_self_clientStates_0;
    vlSelfRef.__PVT__probe_dirty = __Vdly__probe_dirty;
    vlSelfRef.__PVT__s_writeprobe = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                         ? ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)) 
                                            & (IData)(vlSelfRef.__PVT___GEN_350))
                                         : (IData)(vlSelfRef.__PVT___GEN_350)));
    vlSelfRef.__PVT___GEN_92 = (1U & ((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                      | (IData)(vlSelfRef.__PVT__acquire_flag)));
    vlSelfRef.io_tasks_source_e_valid = ((~ (IData)(vlSelfRef.__PVT__s_grantack)) 
                                         & (IData)(vlSelfRef.__PVT__w_grantfirst));
    vlSelfRef.__PVT__no_wait = ((IData)(vlSelfRef.__PVT__w_grantlast) 
                                & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                   & ((IData)(vlSelfRef.__PVT__w_grantack) 
                                      & ((IData)(vlSelfRef.__PVT__w_releaseack) 
                                         & ((IData)(vlSelfRef.__PVT__w_putwritten) 
                                            & (IData)(vlSelfRef.__PVT__w_sinkcack))))));
    vlSelfRef.__PVT___probeAckDataSave_T_4 = (1U & 
                                              (~ (IData)(vlSelfRef.__PVT__probeAckDataDrop)));
    vlSelfRef.__PVT___new_self_meta_dirty_T_8 = (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)));
    vlSelfRef.__PVT___new_self_meta_dirty_T_9 = ((~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)) 
                                                 & (IData)(vlSelfRef.__PVT__req_fromProbeHelper));
    vlSelfRef.__PVT__releaseSave = (1U & ((~ (IData)(vlSelfRef.__PVT__releaseThrough)) 
                                          & (~ (IData)(vlSelfRef.__PVT__releaseDrop))));
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37 
        = ((IData)(vlSelfRef.__PVT__a_do_probe) & (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit));
    vlSelfRef.__PVT___new_self_meta_clientStates_1_T_37 
        = ((IData)(vlSelfRef.__PVT__a_do_probe) & (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit));
    vlSelfRef.__PVT___new_self_meta_dirty_T_15 = ((IData)(vlSelfRef.__PVT__gotDirty) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    vlSelfRef.__PVT__REG_2 = (1U & ((IData)(vlSymsp->TOP.reset) 
                                    | (~ (IData)(vlSelfRef.__PVT__clients_meta_busy))));
    vlSelfRef.__PVT__s_wbclientstag = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_347));
    vlSelfRef.__PVT__s_wbselftag = ((IData)(vlSymsp->TOP.reset) 
                                    | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                        ? ((IData)(vlSelfRef.__PVT___T_310)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_27) 
                                               | (IData)(vlSelfRef.__PVT___GEN_345))
                                            : (IData)(vlSelfRef.__PVT___GEN_345))
                                        : (IData)(vlSelfRef.__PVT___GEN_345)));
    vlSelfRef.__PVT__s_wbselfdir = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_344));
    vlSelfRef.__PVT__s_wbclientsdir = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_346));
    vlSelfRef.__PVT__meta_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                   && ((1U & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                       && (IData)(vlSelfRef.io_metaValid)));
    vlSelfRef.__PVT__probe_helper_finish = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                            && ((1U 
                                                 & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                && (IData)(vlSelfRef.__PVT___GEN_322)));
    vlSelfRef.__PVT__REG_3 = (1U & ((IData)(vlSymsp->TOP.reset) 
                                    | ((~ (IData)(vlSelfRef.__PVT__req_valid)) 
                                       | (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_1_valid)))));
    vlSelfRef.io_status_bits_will_free = ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & ((IData)(vlSelfRef.__PVT__s_execute) 
                                             & ((((IData)(vlSelfRef.__PVT__s_probeack) 
                                                  & ((IData)(vlSelfRef.__PVT__no_schedule_REG) 
                                                     & (IData)(vlSelfRef.__PVT__s_grantack))) 
                                                 & (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                                & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                   & (IData)(vlSelfRef.__PVT__s_writeprobe)))));
    vlSelfRef.__PVT__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT___GEN_430));
    vlSelfRef.__PVT___transmit_from_other_client_T_2 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                           >> 1U))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_36 = ((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                      >> 1U))) 
                                                 & (4U 
                                                    != (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___io_status_bits_nestB_T_7 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__w_grantfirst)) 
                                                     | ((~ (IData)(vlSelfRef.__PVT__probe_helper_finish)) 
                                                        & (IData)(vlSelfRef.__PVT__client_dir_conflict))));
    vlSelfRef.__PVT__can_start = (1U & ((~ (IData)(vlSelfRef.__PVT__client_dir_conflict)) 
                                        | (IData)(vlSelfRef.__PVT__probe_helper_finish)));
    vlSelfRef.__PVT___new_self_meta_state_T_34 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                                   & (IData)(vlSelfRef.__PVT__promoteT_safe))
                                                   ? 2U
                                                   : 3U);
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33 
        = ((IData)(vlSelfRef.__PVT__req_acquire) | 
           (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                         >> 1U))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_21 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                                 & (IData)(vlSelfRef.__PVT__req_acquire));
    vlSelfRef.__PVT___probe_clients_T_3 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                           & (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___GEN_234 = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 2U)) 
                                       | ((~ (IData)(vlSelfRef.__PVT__req_opcode)) 
                                          | (IData)(vlSelfRef.__PVT__req_fromCmoHelper))));
    vlSelfRef.__PVT___client_shrink_perm_T_4 = ((1U 
                                                 == (IData)(vlSelfRef.__PVT__req_param)) 
                                                | ((2U 
                                                    == (IData)(vlSelfRef.__PVT__req_param)) 
                                                   | (5U 
                                                      == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__PVT___client_shrink_perm_T_10 = ((0U 
                                                  == (IData)(vlSelfRef.__PVT__req_param)) 
                                                 | (4U 
                                                    == (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___GEN_334 = ((6U == (IData)(vlSelfRef.__PVT__req_opcode))
                                  ? (((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                                      & (7U == (IData)(vlSelfRef.__PVT__req_opcode)))
                                      ? 4U : 5U) : 
                                 ((5U == (IData)(vlSelfRef.__PVT__req_opcode))
                                   ? 2U : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                                            ? 1U : 
                                           ((3U == (IData)(vlSelfRef.__PVT__req_opcode))
                                             ? 1U : 
                                            ((2U == (IData)(vlSelfRef.__PVT__req_opcode))
                                              ? 1U : 0U)))));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | ((IData)(vlSelfRef.__PVT__req_acquire) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1__1(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__meta_no_clients;
    __PVT__meta_no_clients = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T;
    __PVT___highest_perm_except_me_T = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T_6;
    __PVT___highest_perm_except_me_T_6 = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T_12;
    __PVT___highest_perm_except_me_T_12 = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T_14;
    __PVT___highest_perm_except_me_T_14 = 0;
    CData/*1:0*/ __PVT__highest_perm_except_me;
    __PVT__highest_perm_except_me = 0;
    CData/*0:0*/ __PVT__replace_need_release;
    __PVT__replace_need_release = 0;
    CData/*0:0*/ __PVT__prefetch_miss_need_probe;
    __PVT__prefetch_miss_need_probe = 0;
    CData/*0:0*/ __PVT___T_260;
    __PVT___T_260 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_0_T_38;
    __PVT___new_self_meta_clientStates_0_T_38 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_1_T_38;
    __PVT___new_self_meta_clientStates_1_T_38 = 0;
    CData/*0:0*/ __PVT__nested_client_match;
    __PVT__nested_client_match = 0;
    CData/*0:0*/ __PVT___GEN_124;
    __PVT___GEN_124 = 0;
    CData/*0:0*/ __PVT___GEN_132;
    __PVT___GEN_132 = 0;
    CData/*0:0*/ __PVT___T_159;
    __PVT___T_159 = 0;
    CData/*0:0*/ __PVT___T_161;
    __PVT___T_161 = 0;
    CData/*0:0*/ __PVT___GEN_133;
    __PVT___GEN_133 = 0;
    CData/*0:0*/ __PVT___T_168;
    __PVT___T_168 = 0;
    CData/*0:0*/ __PVT___GEN_157;
    __PVT___GEN_157 = 0;
    CData/*0:0*/ __PVT___GEN_158;
    __PVT___GEN_158 = 0;
    CData/*0:0*/ __PVT___GEN_160;
    __PVT___GEN_160 = 0;
    CData/*0:0*/ __PVT___GEN_280;
    __PVT___GEN_280 = 0;
    CData/*0:0*/ __PVT___will_save_probeack_T_2;
    __PVT___will_save_probeack_T_2 = 0;
    CData/*0:0*/ __PVT__probeack_last;
    __PVT__probeack_last = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_5;
    __VdfgRegularize_hd4a67951_2_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_30;
    __VdfgRegularize_hd4a67951_2_30 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_35;
    __VdfgRegularize_hd4a67951_2_35 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_37;
    __VdfgRegularize_hd4a67951_2_37 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_39;
    __VdfgRegularize_hd4a67951_2_39 = 0;
    // Body
    vlSelfRef.__PVT__client_set_match = ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6.__PVT__req_set) 
                                         == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.__PVT__nest_c_tag_match = ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_tag) 
                                         == (IData)(vlSelfRef.__PVT__req_tag));
    vlSelfRef.__PVT___probeack_last_T = ((IData)(vlSelfRef.__PVT__probes_done) 
                                         | ((2U & (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                     >> 8U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                >> 8U))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_32 = ((4U 
                                                  == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                 | ((5U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                    | ((1U 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                       | (0U 
                                                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_33 = (1U 
                                                 & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode) 
                                                    | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData)));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_22 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                     >> 1U) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                                       | ((IData)(vlSelfRef.__PVT__probeAckDataThrough) 
                                                          & (5U 
                                                             != (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param))))));
    vlSelfRef.__PVT___T_40 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_set) 
                              == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.io_tasks_source_b_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_probe)) 
                                            & (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.io_tasks_sink_c_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_enable) 
                                       & ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                          | ((~ (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                             & ((~ (IData)(vlSelfRef.__PVT__releaseSave)) 
                                                | (IData)(vlSelfRef.__PVT__s_release)))));
    vlSelfRef.io_tasks_source_a_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_enable) 
                                         & (((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                             | (~ (IData)(vlSelfRef.__PVT__s_transferput))) 
                                            & ((IData)(vlSelfRef.__PVT__s_probe) 
                                               & ((IData)(vlSelfRef.__PVT__s_release) 
                                                  & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                                     & (IData)(vlSelfRef.__PVT__can_start))))));
    vlSelfRef.io_tasks_source_d_valid = ((~ (IData)(vlSelfRef.__PVT__s_execute)) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_enable) 
                                            & ((IData)(vlSelfRef.__PVT__can_start) 
                                               & ((IData)(vlSelfRef.__PVT__w_grant) 
                                                  & ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                                     & ((IData)(vlSelfRef.__PVT__w_sinkcack) 
                                                        & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                           & (IData)(vlSelfRef.__PVT__w_probeacklast))))))));
    vlSelfRef.io_tasks_source_c_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_release)) 
                                            | ((~ (IData)(vlSelfRef.__PVT__s_probeack)) 
                                               & ((IData)(vlSelfRef.__PVT__s_writerelease) 
                                                  & ((IData)(vlSelfRef.__PVT__w_probeack) 
                                                     & (IData)(vlSelfRef.__PVT__w_sinkcack))))));
    __VdfgRegularize_hd4a67951_2_30 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_enable) 
                                       & ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & (IData)(vlSelfRef.__PVT__can_start)));
    vlSelfRef.__PVT___nestedReleaseDataSave_T_1 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_c_status_nestedReleaseData) 
                                                   & ((IData)(vlSelfRef.__PVT__req_valid) 
                                                      & ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_set) 
                                                         == (IData)(vlSelfRef.__PVT__req_set))));
    vlSelfRef.io_metaValid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) 
                              | (IData)(vlSelfRef.__PVT__meta_valid));
    vlSelfRef.__PVT___GEN_285 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_292 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_290 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__inv_self_dir));
    vlSelfRef.__PVT___GEN_288 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__bad_grant));
    vlSelfRef.__PVT___GEN_284 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__promoteT_safe));
    vlSelfRef.__PVT___GEN_480 = ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                     >> 2U)) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG));
    vlSelfRef.__PVT___GEN_273 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__s_writeprobe));
    vlSelfRef.__PVT___T_5 = (0xfU & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                      >> 4U) | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg)));
    vlSelfRef.__PVT__clientBitOH = ((2U & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                               >> 8U)) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                             >> 8U)));
    vlSelfRef.__PVT__sink_c_resp_valid = ((~ (IData)(vlSelfRef.__PVT__w_probeacklast)) 
                                          & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_resps_sink_c_valid));
    vlSelfRef.__PVT___GEN_430 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_1_valid) 
                                 | ((~ (IData)(vlSelfRef.io_status_bits_will_free)) 
                                    & (IData)(vlSelfRef.__PVT__req_valid)));
    vlSelfRef.__PVT___GEN_322 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_b_status_probeHelperFinish) 
                                     & (IData)(vlSelfRef.__PVT__client_set_match))) 
                                 | (IData)(vlSelfRef.__PVT__probe_helper_finish));
    __PVT__probeack_last = ((IData)(vlSelfRef.__PVT___probeack_last_T) 
                            == (IData)(vlSelfRef.__PVT__probe_clients));
    __PVT__nested_client_match = (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_tag) 
                                   == ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                        ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag)
                                        : (IData)(vlSelfRef.__PVT__meta_reg_clients_tag))) 
                                  & (IData)(vlSelfRef.__PVT___T_40));
    vlSelfRef.io_tasks_client_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                                 & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                          & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselfdir)) 
                                          & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_client_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                                 & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.__PVT___GEN_481 = ((IData)(vlSelfRef.__PVT___GEN_480) 
                                 & ((IData)(vlSelfRef.__PVT__req_channel) 
                                    >> 1U));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_272 = vlSelfRef.__PVT___GEN_234;
        vlSelfRef.__PVT___GEN_283 = vlSelfRef.__PVT___GEN_234;
        vlSelfRef.io_status_bits_way = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
        vlSelfRef.io_tasks_source_d_bits_isHit = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__hit_s2;
    } else {
        vlSelfRef.__PVT___GEN_272 = vlSelfRef.__PVT__s_writerelease;
        vlSelfRef.__PVT___GEN_283 = vlSelfRef.__PVT__w_sinkcack;
        vlSelfRef.io_status_bits_way = vlSelfRef.__PVT__meta_reg_self_way;
        vlSelfRef.io_tasks_source_d_bits_isHit = vlSelfRef.__PVT__meta_reg_self_hit;
    }
    vlSelfRef.__PVT___GEN_103 = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                                          & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
    vlSelfRef.__PVT___T_57 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                    & (IData)(vlSelfRef.__PVT__req_opcode)));
    __VdfgRegularize_hd4a67951_2_35 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                    >> 1U)))));
    __VdfgRegularize_hd4a67951_2_37 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                             | (IData)(vlSelfRef.__PVT__req_needT)));
    vlSelfRef.__PVT___a_c_through_T_3 = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                         & (IData)(vlSelfRef.__PVT__nest_c_tag_match));
    vlSelfRef.__PVT___T_143 = (1U & (~ ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                        & (7U == (IData)(vlSelfRef.__PVT__req_opcode)))));
    vlSelfRef.__PVT__nested_c_hit = (((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                      & (((IData)(vlSelfRef.__PVT__meta_valid) 
                                          & ((IData)(vlSelfRef.__PVT__req_channel) 
                                             & (IData)(vlSelfRef.__PVT___T_40))) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT____VdfgRegularize_h3add2528_14_0) 
                                            & ((IData)(vlSelfRef.__PVT__req_tag) 
                                               == (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_tag))))) 
                                     | (IData)(vlSelfRef.__PVT__nested_c_hit_reg));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_8 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT___GEN_2 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
    } else {
        vlSelfRef.__PVT___GEN_8 = vlSelfRef.__PVT__meta_reg_self_tag;
        vlSelfRef.__PVT___GEN_2 = vlSelfRef.__PVT__meta_reg_self_dirty;
    }
    vlSelfRef.__PVT___new_self_meta_dirty_T = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                               & (IData)(vlSelfRef.__PVT___GEN_2));
    vlSelfRef.__PVT___new_self_meta_dirty_T_13 = ((IData)(vlSelfRef.__PVT___GEN_2) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_0;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_1;
    } else {
        vlSelfRef.__PVT___GEN_4 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
        vlSelfRef.__PVT___GEN_5 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    }
    __PVT__meta_no_clients = ((0U == (IData)(vlSelfRef.__PVT___GEN_4)) 
                              & (0U == (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT___GEN_3 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_state)
                                : (IData)(vlSelfRef.__PVT__meta_reg_self_state));
    vlSelfRef.__PVT___T_78 = ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                              | (((IData)(vlSelfRef.__PVT___GEN_3) 
                                  >> 1U) & (1U == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_38 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_3) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.__PVT__req_param))));
    __PVT__replace_need_release = (((IData)(vlSelfRef.__PVT___GEN_3) 
                                    > (((IData)(vlSelfRef.__PVT___GEN_4) 
                                        > (IData)(vlSelfRef.__PVT___GEN_5))
                                        ? (IData)(vlSelfRef.__PVT___GEN_4)
                                        : (IData)(vlSelfRef.__PVT___GEN_5))) 
                                   | ((IData)(vlSelfRef.__PVT___GEN_2) 
                                      & ((1U == (IData)(vlSelfRef.__PVT___GEN_3)) 
                                         | (3U == (IData)(vlSelfRef.__PVT___GEN_3)))));
    if (vlSelfRef.io_tasks_source_d_bits_isHit) {
        __PVT___highest_perm_except_me_T = vlSelfRef.__PVT___GEN_3;
        vlSelfRef.__PVT___highest_perm_T_2 = vlSelfRef.__PVT___GEN_3;
    } else {
        __PVT___highest_perm_except_me_T = 0U;
        vlSelfRef.__PVT___highest_perm_T_2 = 0U;
    }
    __VdfgRegularize_hd4a67951_2_5 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                            | (~ ((IData)(vlSelfRef.__PVT___GEN_3) 
                                                  >> 1U))));
    vlSelfRef.__PVT__change_self_meta = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                         & (((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                             & (IData)(vlSelfRef.__PVT___T_40)) 
                                            & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_tag) 
                                               == (IData)(vlSelfRef.__PVT___GEN_8))));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_12 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_0_state;
    } else {
        vlSelfRef.__PVT___GEN_12 = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
    }
    vlSelfRef.__PVT___GEN_24 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_12)
                                 : (IData)(vlSelfRef.__PVT___GEN_10));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_13 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_11 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_0_hit;
    } else {
        vlSelfRef.__PVT___GEN_13 = vlSelfRef.__PVT__meta_reg_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_11 = vlSelfRef.__PVT__meta_reg_clients_states_0_hit;
    }
    vlSelfRef.__PVT___GEN_28 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_13)
                                 : (IData)(vlSelfRef.__PVT___GEN_11));
    if (vlSelfRef.__PVT___GEN_13) {
        vlSelfRef.__PVT___clients_have_T_T_3 = ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                >> 1U);
        vlSelfRef.__PVT___highest_perm_T_4 = vlSelfRef.__PVT___GEN_12;
    } else {
        vlSelfRef.__PVT___clients_have_T_T_3 = 0U;
        vlSelfRef.__PVT___highest_perm_T_4 = 0U;
    }
    vlSelfRef.__PVT__clients_meta_busy = (((~ (IData)(vlSelfRef.__PVT___GEN_11)) 
                                           & (0U != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                          | ((~ (IData)(vlSelfRef.__PVT___GEN_13)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT___GEN_12))));
    vlSelfRef.__PVT___clients_have_T_T_1 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                                            & ((IData)(vlSelfRef.__PVT___GEN_10) 
                                               >> 1U));
    vlSelfRef.__PVT___GEN_101 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_13)) 
                                       & (~ (IData)(vlSelfRef.__PVT___GEN_11))));
    vlSelfRef.__PVT___transmit_from_other_client_T_12 
        = ((((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (1U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_13)) | 
           (((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (0U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_11)));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_17 = ((5U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_13) 
                                                    | (IData)(vlSelfRef.__PVT___GEN_11)));
    vlSelfRef.__PVT___highest_perm_T_3 = ((IData)(vlSelfRef.__PVT___GEN_11)
                                           ? (IData)(vlSelfRef.__PVT___GEN_10)
                                           : 0U);
    __PVT___GEN_124 = (1U & (~ ((IData)(vlSelfRef.__PVT___GEN_11) 
                                | (IData)(vlSelfRef.__PVT___GEN_13))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_28 = ((IData)(vlSelfRef.__PVT__req_valid) 
                                                 & (IData)(vlSelfRef.__PVT__sink_c_resp_valid));
    vlSelfRef.__PVT__sinkc_resp_last = ((IData)(vlSelfRef.__PVT__sink_c_resp_valid) 
                                        & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_26 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                                 & (IData)(__PVT__probeack_last));
    vlSelfRef.__PVT__change_clients_meta_0 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_10)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__PVT__change_clients_meta_1 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_12)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_19 = ((IData)(vlSelfRef.__PVT___GEN_13) 
                                                 & (((IData)(vlSelfRef.__PVT___GEN_12) 
                                                     >> 1U) 
                                                    | (IData)(__VdfgRegularize_hd4a67951_2_35)));
    __PVT___T_168 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                     & (((IData)(vlSelfRef.__PVT___GEN_10) 
                         >> 1U) | (IData)(__VdfgRegularize_hd4a67951_2_35)));
    vlSelfRef.io_status_bits_will_save_data = ((IData)(vlSelfRef.__PVT__req_channel) 
                                               & ((IData)(vlSelfRef.__PVT___T_143) 
                                                  & ((IData)(vlSelfRef.__PVT__preferCache_latch) 
                                                     | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
    vlSelfRef.__PVT__req_promoteT = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                     & ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                                         ? ((IData)(__PVT__meta_no_clients) 
                                            & (3U == (IData)(vlSelfRef.__PVT___GEN_3)))
                                         : ((IData)(vlSelfRef.__PVT__gotT) 
                                            & (IData)(vlSelfRef.__PVT__promoteT_safe))));
    vlSelfRef.__PVT___GEN_110 = (1U & (~ ((IData)(vlSelfRef.__PVT___T_57) 
                                          & ((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                             & (IData)(__PVT__replace_need_release)))));
    __PVT___highest_perm_except_me_T_12 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                            & (1U == (IData)(vlSelfRef.__PVT__iam)))
                                            ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    vlSelfRef.__PVT__clients_have_T = ((IData)(vlSelfRef.__PVT___clients_have_T_T_3) 
                                       | (IData)(vlSelfRef.__PVT___clients_have_T_T_1));
    vlSelfRef.__PVT__transmit_from_other_client = (
                                                   (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                   & ((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_12) 
                                                      | (IData)(vlSelfRef.__PVT__transmit_from_other_client_reg)));
    vlSelfRef.__PVT___GEN_418 = (1U & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_valid) 
                                        & (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_bits_sink))) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))))
                                           : (IData)(vlSelfRef.__PVT__w_grantack))));
    __PVT___highest_perm_except_me_T_6 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                           & (0U == (IData)(vlSelfRef.__PVT__iam)))
                                           ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_3));
    vlSelfRef.__PVT___highest_perm_T_6 = (((IData)(vlSelfRef.__PVT___highest_perm_T_3) 
                                           > (IData)(vlSelfRef.__PVT___highest_perm_T_4))
                                           ? (IData)(vlSelfRef.__PVT___highest_perm_T_3)
                                           : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    __VdfgRegularize_hd4a67951_2_39 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                             & (~ (IData)(vlSelfRef.__PVT___GEN_28))));
    vlSelfRef.__PVT___GEN_125 = ((IData)(__PVT___GEN_124) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_38));
    vlSelfRef.__PVT__bypassPut = (IData)((((0U == (6U 
                                                   & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                           & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))) 
                                          & (IData)(__PVT___GEN_124)));
    __PVT___T_260 = ((IData)(vlSelfRef.__PVT__req_valid) 
                     & (IData)(vlSelfRef.__PVT__sinkc_resp_last));
    vlSelfRef.__PVT___T_310 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_26) 
                               & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                  & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last) 
                                     & ((~ (IData)(vlSelfRef.__PVT__nested_c_hit)) 
                                        & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))))));
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27 
        = (((IData)(vlSelfRef.__PVT__req_needT) | (IData)(vlSelfRef.__PVT__req_promoteT))
            ? 3U : 1U);
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36 
        = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
           | ((IData)(vlSelfRef.__PVT__req_promoteT) 
              | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))));
    __PVT___highest_perm_except_me_T_14 = (((IData)(__PVT___highest_perm_except_me_T_6) 
                                            > (IData)(__PVT___highest_perm_except_me_T_12))
                                            ? (IData)(__PVT___highest_perm_except_me_T_6)
                                            : (IData)(__PVT___highest_perm_except_me_T_12));
    vlSelfRef.__PVT__highest_perm = (((IData)(vlSelfRef.__PVT___highest_perm_T_2) 
                                      > (IData)(vlSelfRef.__PVT___highest_perm_T_6))
                                      ? (IData)(vlSelfRef.__PVT___highest_perm_T_2)
                                      : (IData)(vlSelfRef.__PVT___highest_perm_T_6));
    vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0 
        = ((0U != (IData)(vlSelfRef.__PVT__iam)) & 
           (((1U == (IData)(vlSelfRef.__PVT__req_param)) 
             & (((IData)(vlSelfRef.__PVT___GEN_10) 
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_11) 
                           & (IData)(__VdfgRegularize_hd4a67951_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(__VdfgRegularize_hd4a67951_2_39)))));
    vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1 
        = ((1U != (IData)(vlSelfRef.__PVT__iam)) & 
           (((1U == (IData)(vlSelfRef.__PVT__req_param)) 
             & (((IData)(vlSelfRef.__PVT___GEN_12) 
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_13) 
                           & (IData)(__VdfgRegularize_hd4a67951_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_13) 
                  & (IData)(__VdfgRegularize_hd4a67951_2_39)))));
    vlSelfRef.__PVT__preferCache = ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                         ? (IData)(vlSelfRef.__PVT__bypassPut)
                                         : (IData)(vlSelfRef.__PVT__bypassPut_latch_reg))) 
                                    & (IData)(vlSelfRef.__PVT__req_preferCache));
    vlSelfRef.__PVT___GEN_360 = (((IData)(__PVT___T_260) 
                                  & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                 | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData));
    if (__PVT___T_260) {
        vlSelfRef.__VdfgRegularize_hd4a67951_2_24 = __PVT__probeack_last;
        if ((0x100U & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
        } else {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
        }
    } else {
        vlSelfRef.__VdfgRegularize_hd4a67951_2_24 = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_0 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
        vlSelfRef.__PVT__client_probeack_param_vec_1 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
    }
    __PVT__highest_perm_except_me = (((IData)(__PVT___highest_perm_except_me_T) 
                                      > (IData)(__PVT___highest_perm_except_me_T_14))
                                      ? (IData)(__PVT___highest_perm_except_me_T)
                                      : (IData)(__PVT___highest_perm_except_me_T_14));
    vlSelfRef.__PVT__will_probeack_through = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) 
                                              & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                                                    | ((IData)(vlSelfRef.__PVT__req_needProbeAckData) 
                                                       & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT__highest_perm)))))));
    vlSelfRef.__PVT__highest_perm_reg = ((IData)(vlSelfRef.__PVT__highest_perm) 
                                         | (IData)(vlSelfRef.__PVT__highest_perm_reg_reg));
    __PVT__prefetch_miss_need_probe = ((IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1) 
                                       | (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_27 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__preferCache) 
                                                     | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
    vlSelfRef.__PVT__bypassGet = ((~ (IData)(vlSelfRef.__PVT__preferCache)) 
                                  & (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___new_clients_meta_0_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)))
            ? 1U : 0U);
    vlSelfRef.__PVT___new_clients_meta_1_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)))
            ? 1U : 0U);
    vlSelfRef.__PVT___GEN_130 = (1U & (~ ((IData)(vlSelfRef.__PVT__req_acquire)
                                           ? ((IData)(vlSelfRef.__PVT__req_needT)
                                               ? (~ 
                                                  ((IData)(__PVT__highest_perm_except_me) 
                                                   >> 1U))
                                               : (0U 
                                                  == (IData)(__PVT__highest_perm_except_me)))
                                           : ((IData)(vlSelfRef.__PVT__req_needT)
                                               ? (~ 
                                                  ((IData)(vlSelfRef.__PVT__highest_perm) 
                                                   >> 1U))
                                               : (0U 
                                                  == (IData)(vlSelfRef.__PVT__highest_perm))))));
    __PVT___will_save_probeack_T_2 = ((IData)(vlSelfRef.__PVT__will_probeack_through) 
                                      & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit));
    if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        vlSelfRef.__PVT___GEN_310 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) 
                                     & ((~ (IData)(vlSelfRef.__PVT__will_probeack_through)) 
                                        & ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 1U)));
        if (vlSelfRef.__PVT__req_fromProbeHelper) {
            vlSelfRef.__PVT___GEN_309 = ((IData)(vlSelfRef.__PVT__will_probeack_through) 
                                         & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)));
            vlSelfRef.__PVT___GEN_311 = (1U & (IData)(__PVT___will_save_probeack_T_2));
        } else {
            vlSelfRef.__PVT___GEN_309 = vlSelfRef.__PVT__will_probeack_through;
            vlSelfRef.__PVT___GEN_311 = (1U & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)) 
                                               | ((~ 
                                                   ((IData)(vlSelfRef.__PVT__req_channel) 
                                                    >> 1U)) 
                                                  | ((IData)(__PVT___will_save_probeack_T_2) 
                                                     & (1U 
                                                        == (IData)(vlSelfRef.__PVT__req_param))))));
        }
    } else {
        vlSelfRef.__PVT___GEN_310 = vlSelfRef.__PVT__probeAckDataDrop;
        vlSelfRef.__PVT___GEN_309 = vlSelfRef.__PVT__probeAckDataThrough;
        vlSelfRef.__PVT___GEN_311 = (1U & ((~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)) 
                                           & (~ (IData)(vlSelfRef.__PVT__probeAckDataDrop))));
    }
    vlSelfRef.io_tasks_dir_write_bits_data_state = 
        ((IData)(vlSelfRef.__PVT__bad_grant) ? (IData)(vlSelfRef.__PVT___GEN_3)
          : ((4U & (IData)(vlSelfRef.__PVT__req_channel))
              ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                  ? ((1U == (IData)(vlSelfRef.__PVT__req_param))
                      ? ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_3))
                              ? 3U : 1U) : (IData)(vlSelfRef.__PVT___GEN_3))
                      : 0U) : ((2U == (IData)(vlSelfRef.__PVT__req_param))
                                ? (((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                    & (3U == (IData)(vlSelfRef.__PVT___GEN_3)))
                                    ? 3U : 1U) : ((1U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? 3U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.__PVT__req_param))
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__PVT__req_param))
                                                     ? 2U
                                                     : (IData)(vlSelfRef.__PVT___GEN_3))))))
              : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                  ? ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                      ? ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_9)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_3))
                              ? 3U : 1U) : ((((IData)(vlSelfRef.__PVT___GEN_3) 
                                              >> 1U) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__req_param)))
                                             ? (IData)(vlSelfRef.__PVT___GEN_3)
                                             : (((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                                 & (2U 
                                                    != (IData)(vlSelfRef.__PVT__req_param)))
                                                 ? 1U
                                                 : 0U)))
                      : (IData)(vlSelfRef.__PVT___GEN_3))
                  : ((IData)(vlSelfRef.__PVT__inv_self_dir)
                      ? 0U : ((IData)(vlSelfRef.__PVT__req_needT)
                               ? ((IData)(vlSelfRef.__PVT__req_acquire)
                                   ? 2U : 3U) : ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                                                  ? 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT___GEN_3))
                                                   ? 
                                                  (((IData)(__PVT__meta_no_clients) 
                                                    & (IData)(vlSelfRef.__PVT__req_acquire))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__PVT___GEN_3))
                                                    ? 3U
                                                    : 1U))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__transmit_from_other_client)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : (IData)(vlSelfRef.__PVT__highest_perm_reg))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : 1U))))))));
    vlSelfRef.__PVT__prefetch_need_data = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                           & ((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                              & (((0U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? 
                                                  (0U 
                                                   == (IData)(vlSelfRef.__PVT__highest_perm))
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.__PVT__highest_perm) 
                                                    >> 1U))) 
                                                 | (IData)(__PVT__prefetch_miss_need_probe))));
    __PVT___T_159 = ((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                     & (IData)(__PVT__prefetch_miss_need_probe));
    vlSelfRef.io_tasks_source_a_bits_opcode = ((1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__s_transferput)) 
                                                   | (IData)(vlSelfRef.__PVT__bypassGet)))
                                                ? (IData)(vlSelfRef.__PVT__req_opcode)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelfRef.__PVT__req_opcode))
                                                    ? 6U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                         >> 1U)))
                                                     ? 6U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__req_opcode))
                                                      ? 6U
                                                      : (IData)(vlSelfRef.__PVT__req_opcode)))));
    if (vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37) {
        __PVT___new_self_meta_clientStates_0_T_38 = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
    } else {
        __PVT___new_self_meta_clientStates_0_T_38 = 0U;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
    }
    if (__PVT__prefetch_miss_need_probe) {
        if ((0U == (IData)(vlSelfRef.__PVT__req_param))) {
            vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 
                = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
            vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 
                = vlSelfRef.__PVT___new_clients_meta_1_state_T_24;
        } else {
            vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 = 0U;
            vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 = 0U;
        }
    } else {
        vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
        vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
    }
    if (vlSelfRef.__PVT___new_self_meta_clientStates_1_T_37) {
        __PVT___new_self_meta_clientStates_1_T_38 = vlSelfRef.__PVT___new_clients_meta_1_state_T_24;
        vlSelfRef.__PVT___new_clients_meta_1_state_T_36 
            = vlSelfRef.__PVT___new_clients_meta_1_state_T_24;
    } else {
        __PVT___new_self_meta_clientStates_1_T_38 = 0U;
        vlSelfRef.__PVT___new_clients_meta_1_state_T_36 
            = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
    }
    vlSelfRef.__PVT___GEN_343 = (1U & (((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT__chosen_reg) 
                                          >> 1U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT____VdfgRegularize_h528b8c7d_0_5)) 
                                        & (IData)(vlSelfRef.io_tasks_source_e_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                    | ((IData)(vlSelfRef.__PVT___GEN_130) 
                                                       | (~ 
                                                          ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                           & (~ (IData)(vlSelfRef.__PVT__bypassPut))))))))
                                           : (IData)(vlSelfRef.__PVT__s_grantack))));
    vlSelfRef.__PVT___GEN_237 = (1U & (IData)((((0U 
                                                 != 
                                                 (6U 
                                                  & (IData)(vlSelfRef.__PVT__req_channel))) 
                                                | (IData)(vlSelfRef.__PVT___GEN_130)) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))));
    __PVT___GEN_132 = (1U & ((IData)(vlSelfRef.__PVT___GEN_130) 
                             | (~ ((IData)(vlSelfRef.__PVT___T_143) 
                                   & (((4U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                                       & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                      | (IData)(vlSelfRef.__PVT__preferCache))))));
    vlSelfRef.__PVT___T_130 = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                               & ((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                  & ((IData)(__PVT__replace_need_release) 
                                     & (((IData)(vlSelfRef.__PVT__preferCache) 
                                         & ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            | (4U == (IData)(vlSelfRef.__PVT__req_opcode)))) 
                                        | ((IData)(vlSelfRef.__PVT__prefetch_need_data) 
                                           | (IData)(vlSelfRef.__PVT__transmit_from_other_client))))));
    vlSelfRef.__PVT___T_182 = ((IData)(vlSelfRef.__PVT___GEN_13) 
                               & (((IData)(vlSelfRef.__PVT__req_acquire) 
                                   & ((IData)(__VdfgRegularize_hd4a67951_2_37) 
                                      | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                         >> 1U))) | (IData)(__PVT___T_159)));
    __PVT___T_161 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                     & (((IData)(vlSelfRef.__PVT__req_acquire) 
                         & ((IData)(__VdfgRegularize_hd4a67951_2_37) 
                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                               >> 1U))) | (IData)(__PVT___T_159)));
    __PVT___GEN_133 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                       & (IData)(__PVT___GEN_132));
    vlSelfRef.__PVT___GEN_217 = (1U & (((IData)(vlSelfRef.__PVT__req_channel) 
                                        >> 1U) | ((~ (IData)(vlSelfRef.__PVT___T_130)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT___GEN_237;
        vlSelfRef.__PVT___GEN_279 = vlSelfRef.__PVT___GEN_237;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT___GEN_237;
        __PVT___GEN_280 = ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                            ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                ? (IData)(vlSelfRef.__PVT___GEN_103)
                                : (IData)(vlSelfRef.__PVT___GEN_110))
                            : (IData)(vlSelfRef.__PVT___GEN_217));
    } else {
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT__w_grantfirst;
        vlSelfRef.__PVT___GEN_279 = vlSelfRef.__PVT__w_grant;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT__w_grantlast;
        __PVT___GEN_280 = vlSelfRef.__PVT__w_releaseack;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.__PVT__req_fromCmoHelper) {
            if (vlSelfRef.io_tasks_source_d_bits_isHit) {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_4)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_5)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
            } else {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = vlSelfRef.__PVT___GEN_4;
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = vlSelfRef.__PVT___GEN_5;
            }
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((0U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_4)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((1U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_5)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state));
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.io_tasks_source_d_bits_isHit) {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((((IData)(vlSelfRef.__PVT___GEN_4) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_4)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_4)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((((IData)(vlSelfRef.__PVT___GEN_5) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_5)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_5)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = vlSelfRef.__PVT___GEN_4;
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = vlSelfRef.__PVT___GEN_5;
        }
    } else {
        vlSelfRef.__PVT__new_self_meta_clientStates_0 
            = ((0U == (IData)(vlSelfRef.__PVT__iam))
                ? ((IData)(vlSelfRef.__PVT__req_acquire)
                    ? (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27)
                    : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                        ? ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit)
                            ? 1U : 0U) : ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit)
                                           ? (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state)
                                           : 0U))) : 
               ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                 ? ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36)
                     ? 0U : (IData)(__PVT___new_self_meta_clientStates_0_T_38))
                 : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                     ? (IData)(__PVT___new_self_meta_clientStates_0_T_38)
                     : (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45))));
        vlSelfRef.__PVT__new_self_meta_clientStates_1 
            = ((1U == (IData)(vlSelfRef.__PVT__iam))
                ? ((IData)(vlSelfRef.__PVT__req_acquire)
                    ? (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27)
                    : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                        ? ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit)
                            ? 1U : 0U) : ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit)
                                           ? (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state)
                                           : 0U))) : 
               ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                 ? ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36)
                     ? 0U : (IData)(__PVT___new_self_meta_clientStates_1_T_38))
                 : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                     ? (IData)(__PVT___new_self_meta_clientStates_1_T_38)
                     : (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45))));
    }
    if (vlSelfRef.__VdfgRegularize_hd4a67951_2_36) {
        vlSelfRef.__PVT___GEN_156 = ((0U != (IData)(vlSelfRef.__PVT__iam)) 
                                     & (IData)(__PVT___T_161));
        vlSelfRef.__PVT___GEN_159 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                           | ((~ (IData)(__PVT___T_161)) 
                                              | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
        __PVT___GEN_157 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                 | (~ (IData)(__PVT___T_161))));
        __PVT___GEN_158 = ((0U != (IData)(vlSelfRef.__PVT__iam))
                            ? ((IData)(__PVT___T_161)
                                ? (IData)(__PVT___GEN_133)
                                : (IData)(__PVT___GEN_132))
                            : (IData)(__PVT___GEN_132));
        vlSelfRef.__PVT___GEN_184 = ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_182)) 
                                         & (IData)(__PVT___GEN_157))
                                      : (IData)(__PVT___GEN_157));
    } else {
        vlSelfRef.__PVT___GEN_156 = __PVT___T_168;
        vlSelfRef.__PVT___GEN_159 = (1U & ((~ (IData)(__PVT___T_168)) 
                                           | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)));
        __PVT___GEN_157 = (1U & (~ (IData)(__PVT___T_168)));
        __PVT___GEN_158 = ((IData)(__PVT___T_168) ? 
                           ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                            & (IData)(__PVT___GEN_133))
                            : (IData)(__PVT___GEN_132));
        vlSelfRef.__PVT___GEN_184 = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19)) 
                                     & (IData)(__PVT___GEN_157));
    }
    vlSelfRef.__PVT___GEN_227 = (1U & ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                        ? ((~ (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_101))
                                        : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                                            ? (IData)(vlSelfRef.__PVT___GEN_125)
                                            : ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                               | (IData)(vlSelfRef.__PVT___GEN_184)))));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                 & (IData)(vlSelfRef.__PVT___GEN_159));
    __PVT___GEN_160 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                       & (IData)(__PVT___GEN_158));
    vlSelfRef.__PVT___GEN_185 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_36)
                                  ? ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((IData)(vlSelfRef.__PVT___T_182)
                                          ? (IData)(__PVT___GEN_160)
                                          : (IData)(__PVT___GEN_158))
                                      : (IData)(__PVT___GEN_158))
                                  : ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19)
                                      ? ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                         & (IData)(__PVT___GEN_160))
                                      : (IData)(__PVT___GEN_158)));
    vlSelfRef.__PVT___GEN_371 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)
                                      ? ((~ (((((IData)(vlSelfRef.__PVT__req_channel) 
                                                >> 1U) 
                                               & (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                              | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                             & (IData)(vlSelfRef.__PVT__probeAckDataThrough))) 
                                         & (IData)(__PVT___GEN_280))
                                      : ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_22)
                                          ? ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                             & (IData)(__PVT___GEN_280))
                                          : (IData)(__PVT___GEN_280)))
                                  : (IData)(__PVT___GEN_280));
    if (vlSelfRef.__VdfgRegularize_hd4a67951_2_28) {
        vlSelfRef.__PVT___GEN_386 = ((IData)(vlSelfRef.__PVT__w_probeackfirst) 
                                     | (IData)(__PVT__probeack_last));
        vlSelfRef.__PVT___GEN_387 = ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                     | ((IData)(__PVT__probeack_last) 
                                        & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last)));
        vlSelfRef.__PVT___GEN_388 = ((IData)(vlSelfRef.__PVT__w_probeack) 
                                     | ((IData)(__PVT__probeack_last) 
                                        & ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                           | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last))));
    } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_386 = vlSelfRef.__PVT___GEN_227;
        vlSelfRef.__PVT___GEN_387 = vlSelfRef.__PVT___GEN_227;
        vlSelfRef.__PVT___GEN_388 = vlSelfRef.__PVT___GEN_227;
    } else {
        vlSelfRef.__PVT___GEN_386 = vlSelfRef.__PVT__w_probeackfirst;
        vlSelfRef.__PVT___GEN_387 = vlSelfRef.__PVT__w_probeacklast;
        vlSelfRef.__PVT___GEN_388 = vlSelfRef.__PVT__w_probeack;
    }
}

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1__2(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__nestedReleaseDataSave;
    __PVT__nestedReleaseDataSave = 0;
    CData/*0:0*/ __PVT___io_tasks_source_d_bits_useBypass_T_5;
    __PVT___io_tasks_source_d_bits_useBypass_T_5 = 0;
    CData/*0:0*/ __PVT__nestedReleaseDirtyDataSave;
    __PVT__nestedReleaseDirtyDataSave = 0;
    CData/*0:0*/ __PVT___T_245;
    __PVT___T_245 = 0;
    CData/*0:0*/ __PVT___T_251;
    __PVT___T_251 = 0;
    // Body
    vlSelfRef.__PVT__nest_c_way_match = ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.io_status_bits_way) 
                                         == (IData)(vlSelfRef.io_status_bits_way));
    vlSelfRef.__PVT___GEN_347 = (1U & (((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter_2__DOT__chosenOH) 
                                          >> 1U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter_2_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_client_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_28)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientstag))));
    vlSelfRef.__PVT___GEN_345 = (1U & (((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb__DOT__chosenOH) 
                                          >> 1U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper) 
                                                  | (~ (IData)(vlSelfRef.__PVT___T_57)))
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                     | ((~ 
                                                         ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                          & ((IData)(vlSelfRef.__PVT__preferCache) 
                                                             & ((4U 
                                                                 == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                                | ((6U 
                                                                    == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                                   | (IData)(vlSelfRef.__PVT__prefetch_need_data)))))) 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_36)
                                                            ? 
                                                           ((1U 
                                                             != (IData)(vlSelfRef.__PVT__iam))
                                                             ? 
                                                            ((IData)(vlSelfRef.__PVT___T_182)
                                                              ? (IData)(vlSelfRef.__PVT___GEN_161)
                                                              : (IData)(vlSelfRef.__PVT___GEN_159))
                                                             : (IData)(vlSelfRef.__PVT___GEN_159))
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19)
                                                             ? (IData)(vlSelfRef.__PVT___GEN_161)
                                                             : (IData)(vlSelfRef.__PVT___GEN_159)))))))
                                           : (IData)(vlSelfRef.__PVT__s_wbselftag))));
    vlSelfRef.__PVT___T_246 = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT__chosen_reg) 
                                 >> 1U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT____VdfgRegularize_hae52cd36_0_10)) 
                               & (IData)(vlSelfRef.io_tasks_source_b_valid));
    __PVT___T_251 = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT__chosen_reg) 
                       >> 1U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT____VdfgRegularize_h20ebb837_0_10)) 
                     & (IData)(vlSelfRef.io_tasks_source_c_valid));
    vlSelfRef.__PVT___GEN_342 = (1U & (((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT__chosen_reg) 
                                          >> 1U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT____VdfgRegularize_h1ec93158_0_10)) 
                                        & (IData)(vlSelfRef.io_tasks_source_d_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? (IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                     | (5U 
                                                        == (IData)(vlSelfRef.__PVT__req_opcode)))))
                                           : (IData)(vlSelfRef.__PVT__s_execute))));
    vlSelfRef.__PVT___GEN_344 = (1U & ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH) 
                                         >> 1U) & (IData)(vlSelfRef.io_tasks_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? 
                                                  (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                    | (IData)(vlSelfRef.__PVT__req_opcode))))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.__PVT__req_channel))
                                                   ? 
                                                  ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                   | (~ (IData)(vlSelfRef.__PVT___T_78)))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                   | ((~ (IData)(
                                                                 (((0U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                                                   & (~ (IData)(vlSelfRef.__PVT___GEN_2))) 
                                                                  & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)))) 
                                                      & ((IData)(vlSelfRef.__PVT__req_acquire)
                                                          ? 
                                                         ((~ 
                                                           ((IData)(vlSelfRef.__PVT___T_143) 
                                                            & ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                               | (IData)(vlSelfRef.__PVT__preferCache)))) 
                                                          & (IData)(vlSelfRef.__PVT___GEN_185))
                                                          : (IData)(vlSelfRef.__PVT___GEN_185))))))
                                           : (IData)(vlSelfRef.__PVT__s_wbselfdir))));
    vlSelfRef.__PVT___GEN_346 = (1U & ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter_1__DOT__chosenOH) 
                                         >> 1U) & (IData)(vlSelfRef.io_tasks_client_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_101)
                                                   : 
                                                  (~ 
                                                   (((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.__PVT___GEN_24))) 
                                                    | ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10) 
                                                       & ((IData)(vlSelfRef.__PVT___GEN_24) 
                                                          >> 1U)))))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.__PVT__req_channel))
                                                   ? (IData)(vlSelfRef.__PVT___GEN_125)
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                   | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                      & (IData)(vlSelfRef.__PVT___GEN_184)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientsdir))));
    __PVT___T_245 = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT__chosen_reg) 
                       >> 1U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT____VdfgRegularize_h3b69c469_0_10)) 
                     & (IData)(vlSelfRef.io_tasks_source_a_valid));
    vlSelfRef.__PVT___T_258 = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT__chosen_reg) 
                                 >> 1U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT____VdfgRegularize_h5d7114fd_0_10)) 
                               & (IData)(vlSelfRef.io_tasks_sink_c_valid));
    vlSelfRef.__PVT__a_c_through = ((IData)(vlSelfRef.__PVT__req_channel) 
                                    & (((~ (IData)(vlSelfRef.__PVT__nest_c_way_match)) 
                                        & (IData)(vlSelfRef.__PVT___a_c_through_T_3)) 
                                       | (((~ (IData)(vlSelfRef.__PVT__nest_c_tag_match)) 
                                           & ((IData)(vlSelfRef.__PVT__nest_c_way_match) 
                                              & (((IData)(vlSelfRef.__PVT___T_143) 
                                                  & (IData)(vlSelfRef.__PVT__preferCache_latch)) 
                                                 | ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                    | ((IData)(vlSelfRef.__PVT__a_c_through_reg) 
                                                       | (IData)(vlSelfRef.__PVT__transmit_from_other_client_latch)))))) 
                                          | ((IData)(vlSelfRef.__PVT__nest_c_tag_match) 
                                             & ((IData)(vlSelfRef.__PVT__nest_c_way_match) 
                                                & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                   & (IData)(vlSelfRef.__PVT__a_do_release)))))));
    vlSelfRef.__PVT___GEN_339 = ((IData)(vlSelfRef.__PVT___T_246) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_227)
                                     : (IData)(vlSelfRef.__PVT__s_probe)));
    vlSelfRef.__PVT___GEN_341 = (1U & ((IData)(__PVT___T_251) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                           ? (1U & 
                                              ((2U 
                                                != 
                                                (6U 
                                                 & (IData)(vlSelfRef.__PVT__req_channel))) 
                                               | (~ 
                                                  ((~ (IData)(vlSelfRef.__PVT__will_probeack_through)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper))))))
                                           : (IData)(vlSelfRef.__PVT__s_probeack))));
    vlSelfRef.__PVT___GEN_340 = ((IData)(__PVT___T_251) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                     ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                         ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                             ? (IData)(vlSelfRef.__PVT___GEN_103)
                                             : (IData)(vlSelfRef.__PVT___GEN_110))
                                         : (IData)(vlSelfRef.__PVT___GEN_217))
                                     : (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.__PVT___GEN_337 = ((IData)(__PVT___T_245) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_237)
                                     : (IData)(vlSelfRef.__PVT__s_acquire)));
    vlSelfRef.__PVT___GEN_338 = (1U & ((IData)(__PVT___T_245) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__bypassPut)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))))
                                           : (IData)(vlSelfRef.__PVT__s_transferput))));
    vlSelfRef.__PVT___GEN_350 = (1U & ((IData)(vlSelfRef.__PVT___T_258)
                                        ? ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_273))
                                        : (IData)(vlSelfRef.__PVT___GEN_273)));
    __PVT__nestedReleaseDataSave = ((~ (IData)(vlSelfRef.__PVT__a_c_through)) 
                                    & ((IData)(vlSelfRef.__PVT___nestedReleaseDataSave_T_1) 
                                       & ((IData)(vlSelfRef.__PVT__nest_c_tag_match) 
                                          & ((IData)(vlSelfRef.__PVT__nest_c_way_match) 
                                             & (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.io_metaValid)))));
    vlSelfRef.__PVT___GEN_451 = ((IData)(__PVT__nestedReleaseDataSave) 
                                 | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)) 
                                    & (IData)(vlSelfRef.__PVT__nestC_save_flag)));
    __PVT__nestedReleaseDirtyDataSave = ((IData)(__PVT__nestedReleaseDataSave) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.io_reqDirty));
    __PVT___io_tasks_source_d_bits_useBypass_T_5 = 
        (1U & (~ ((IData)(vlSelfRef.__PVT__nestC_save_flag) 
                  | (IData)(__PVT__nestedReleaseDataSave))));
    vlSelfRef.__PVT___GEN_452 = ((IData)(__PVT__nestedReleaseDirtyDataSave) 
                                 | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)) 
                                    & (IData)(vlSelfRef.__PVT__nestC_saveDirty_flag)));
    vlSelfRef.__PVT__nestC_saveDirty = ((IData)(vlSelfRef.__PVT__nestC_saveDirty_flag) 
                                        | (IData)(__PVT__nestedReleaseDirtyDataSave));
    vlSelfRef.__PVT___T_293 = (((~ (IData)(vlSelfRef.__PVT__acquire_flag)) 
                                & (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_26)) 
                               & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last) 
                                  & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                     & ((~ (IData)(vlSelfRef.__PVT__nested_c_hit)) 
                                        & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                           & (IData)(__PVT___io_tasks_source_d_bits_useBypass_T_5))))));
    vlSelfRef.io_tasks_source_d_bits_useBypass = ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                       >> 1U))) 
                                                  & (((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.__PVT___GEN_3)) 
                                                         & (IData)(vlSelfRef.__PVT__req_needT))) 
                                                     & (((~ (IData)(vlSelfRef.__PVT__probe_dirty)) 
                                                         & (IData)(__PVT___io_tasks_source_d_bits_useBypass_T_5)) 
                                                        | ((IData)(vlSelfRef.__PVT__acquire_flag) 
                                                           & (7U 
                                                              != (IData)(vlSelfRef.io_tasks_source_a_bits_opcode))))));
    if (vlSelfRef.__VdfgRegularize_hd4a67951_2_28) {
        vlSelfRef.__PVT___GEN_392 = ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_277));
        vlSelfRef.__PVT___GEN_394 = ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_279));
        vlSelfRef.__PVT___GEN_393 = ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_278));
    } else {
        vlSelfRef.__PVT___GEN_392 = vlSelfRef.__PVT___GEN_277;
        vlSelfRef.__PVT___GEN_394 = vlSelfRef.__PVT___GEN_279;
        vlSelfRef.__PVT___GEN_393 = vlSelfRef.__PVT___GEN_278;
    }
}

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1__3(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hd4a67951_2_31 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_resps_sink_d_valid) 
                                                 & (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_419 = (1U & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD_io_resp_valid) 
                                        & (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s4_req_sinkId))) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ 
                                                     ((~ (IData)(vlSelfRef.__PVT__bypassPut)) 
                                                      & (0U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelfRef.__PVT__req_opcode))))) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))))
                                           : (IData)(vlSelfRef.__PVT__w_putwritten))));
    vlSelfRef.__PVT___GEN_411 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_32)
                                      ? ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last) 
                                         | (IData)(vlSelfRef.__PVT__w_grantlast))
                                      : (IData)(vlSelfRef.__PVT___GEN_393))
                                  : (IData)(vlSelfRef.__PVT___GEN_393));
}

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2__0(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__probe_dirty;
    __Vdly__probe_dirty = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_1;
    __Vdly__meta_reg_self_clientStates_1 = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_0;
    __Vdly__meta_reg_self_clientStates_0 = 0;
    // Body
    __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
    __Vdly__probe_dirty = vlSelfRef.__PVT__probe_dirty;
    if (vlSelfRef.__PVT__change_self_meta) {
        if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_toN) {
            __Vdly__meta_reg_self_clientStates_1 = 0U;
            __Vdly__meta_reg_self_clientStates_0 = 0U;
            vlSelfRef.__PVT__meta_reg_self_state = 0U;
        } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_toB) {
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_1))) {
                __Vdly__meta_reg_self_clientStates_1 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_0))) {
                __Vdly__meta_reg_self_clientStates_0 = 1U;
            }
            vlSelfRef.__PVT__meta_reg_self_state = 1U;
        } else {
            __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_5;
            __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_4;
            vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_3;
        }
        vlSelfRef.__PVT__meta_reg_self_hit = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_toN))) 
                                              && (IData)(vlSelfRef.io_tasks_source_d_bits_isHit));
        vlSelfRef.__PVT__meta_reg_self_dirty = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_c_set_dirty) 
                                                | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_set_dirty) 
                                                   | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_clr_dirty)) 
                                                      & (IData)(vlSelfRef.__PVT___GEN_2))));
    } else {
        __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_5;
        __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_4;
        vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_3;
        vlSelfRef.__PVT__meta_reg_self_hit = vlSelfRef.io_tasks_source_d_bits_isHit;
        if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__meta_reg_self_dirty = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
        }
    }
    if (vlSelfRef.__PVT__change_clients_meta_1) {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_1_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_12));
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_1_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_13));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = vlSelfRef.__PVT___GEN_12;
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = vlSelfRef.__PVT___GEN_13;
    }
    if (vlSelfRef.__PVT__change_clients_meta_0) {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_0_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_10));
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_0_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_11));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = vlSelfRef.__PVT___GEN_10;
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = vlSelfRef.__PVT___GEN_11;
    }
    vlSelfRef.__PVT__nestC_saveDirty_flag = ((1U & 
                                              (~ (IData)(vlSymsp->TOP.reset))) 
                                             && (IData)(vlSelfRef.__PVT___GEN_452));
    vlSelfRef.__PVT__someClientHasProbeAckData = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                      && (IData)(vlSelfRef.__PVT___GEN_360)));
    vlSelfRef.__PVT__s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_337))
                                      : (IData)(vlSelfRef.__PVT___GEN_337)));
    vlSelfRef.__PVT__s_execute = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_342));
    vlSelfRef.__PVT__s_probe = ((IData)(vlSymsp->TOP.reset) 
                                | (IData)(vlSelfRef.__PVT___GEN_339));
    vlSelfRef.__PVT__w_grant = ((IData)(vlSymsp->TOP.reset) 
                                | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                    ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_32)
                                        ? (((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                            & (IData)(vlSelfRef.__PVT__req_size)) 
                                           | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last))
                                        : (IData)(vlSelfRef.__PVT___GEN_394))
                                    : (IData)(vlSelfRef.__PVT___GEN_394)));
    vlSelfRef.__PVT__w_probeackfirst = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_386));
    vlSelfRef.__PVT__promoteT_safe = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                          ? ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                             & (IData)(vlSelfRef.__PVT___GEN_284))
                                          : (IData)(vlSelfRef.__PVT___GEN_284)));
    vlSelfRef.__PVT__w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_32) 
                                            | (IData)(vlSelfRef.__PVT___GEN_392))
                                         : (IData)(vlSelfRef.__PVT___GEN_392)));
    vlSelfRef.__PVT__w_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_388));
    vlSelfRef.__PVT__w_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_418));
    vlSelfRef.__PVT__w_putwritten = ((IData)(vlSymsp->TOP.reset) 
                                     | (IData)(vlSelfRef.__PVT___GEN_419));
    vlSelfRef.__PVT__s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                       ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)
                                           ? (IData)(vlSelfRef.__PVT___GEN_341)
                                           : ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_22)) 
                                              & (IData)(vlSelfRef.__PVT___GEN_341)))
                                       : (IData)(vlSelfRef.__PVT___GEN_341)));
    vlSelfRef.__PVT__w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_411));
    vlSelfRef.__PVT__s_release = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_340));
    vlSelfRef.__PVT__w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                         ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (IData)(vlSelfRef.__PVT___GEN_371))
                                         : (IData)(vlSelfRef.__PVT___GEN_371)));
    vlSelfRef.__PVT__nestC_save_flag = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                        && (IData)(vlSelfRef.__PVT___GEN_451));
    vlSelfRef.__PVT__transmit_from_other_client_latch 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__transmit_from_other_client));
    vlSelfRef.__PVT__w_probeacklast = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_387));
    vlSelfRef.__PVT__s_transferput = ((IData)(vlSymsp->TOP.reset) 
                                      | (IData)(vlSelfRef.__PVT___GEN_338));
    vlSelfRef.__PVT__preferCache_latch = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                          && (IData)(vlSelfRef.__PVT__preferCache));
    vlSelfRef.__PVT__s_writerelease = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__PVT___T_258)
                                           ? ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                              | (IData)(vlSelfRef.__PVT___GEN_272))
                                           : (IData)(vlSelfRef.__PVT___GEN_272)));
    vlSelfRef.__PVT__nested_c_hit_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                         && ((1U & 
                                              (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG))) 
                                             && (IData)(vlSelfRef.__PVT__nested_c_hit)));
    vlSelfRef.__PVT__acquire_flag = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((1U & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG))) 
                                         && (IData)(vlSelfRef.__PVT___GEN_92)));
    vlSelfRef.__PVT__s_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                       ? ((IData)(vlSelfRef.__PVT___T_293)
                                           ? ((~ ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__bypassPut_latch_reg)))) 
                                              & (IData)(vlSelfRef.__PVT___GEN_343))
                                           : (IData)(vlSelfRef.__PVT___GEN_343))
                                       : (IData)(vlSelfRef.__PVT___GEN_343)));
    vlSelfRef.__PVT__w_sinkcack = ((IData)(vlSymsp->TOP.reset) 
                                   | (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC__DOT__io_taskack_valid_REG) 
                                       & (2U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC__DOT__io_taskack_bits_sink_REG))) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                          ? ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)) 
                                             & (IData)(vlSelfRef.__PVT___GEN_283))
                                          : (IData)(vlSelfRef.__PVT___GEN_283))));
    if (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_resps_sink_c_valid) 
         & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode))) {
        vlSelfRef.__PVT__io_tasks_sink_c_bits_bufIdx_r 
            = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_bufIdx;
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_2_valid) {
        vlSelfRef.__PVT__req_dirty = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_dirty;
        vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_needProbeAckData;
        vlSelfRef.__PVT__req_source = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source;
        vlSelfRef.__PVT__req_fromProbeHelper = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromProbeHelper;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__transmit_from_other_client_reg = 0U;
        vlSelfRef.__PVT__a_c_through_reg = 0U;
        vlSelfRef.__PVT__highest_perm_reg_reg = 0U;
    } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__transmit_from_other_client_reg 
            = vlSelfRef.__PVT___transmit_from_other_client_T_12;
        vlSelfRef.__PVT__a_c_through_reg = vlSelfRef.io_tasks_source_d_bits_isHit;
        vlSelfRef.__PVT__highest_perm_reg_reg = (((IData)(vlSelfRef.__PVT___highest_perm_T_2) 
                                                  > (IData)(vlSelfRef.__PVT___highest_perm_T_6))
                                                  ? 
                                                 ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_3)
                                                   : 0U)
                                                  : 
                                                 (((IData)(vlSelfRef.__PVT___highest_perm_T_3) 
                                                   > (IData)(vlSelfRef.__PVT___highest_perm_T_4))
                                                   ? (IData)(vlSelfRef.__PVT___highest_perm_T_3)
                                                   : (IData)(vlSelfRef.__PVT___highest_perm_T_4)));
    } else if (vlSelfRef.io_status_bits_will_free) {
        vlSelfRef.__PVT__transmit_from_other_client_reg = 0U;
        vlSelfRef.__PVT__a_c_through_reg = 0U;
        vlSelfRef.__PVT__highest_perm_reg_reg = 0U;
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__meta_reg_self_tag = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_clients_tag = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_clients_way = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__way_s2;
        vlSelfRef.__PVT__meta_reg_self_way = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Directory result was sent to mismatch MSHR(mshrId:2, resultId:%1#)\n    at MSHR.scala:66 assert(\n",0,
                      3,(((IData)((0U != (0xfU & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                                  >> 4U)))) 
                          << 2U) | (((IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelfRef.__PVT___T_5) 
                                                >> 2U)))) 
                                     << 1U) | (IData)(
                                                      (0U 
                                                       != 
                                                       (0xaU 
                                                        & (IData)(vlSelfRef.__PVT___T_5)))))));
    }
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_resps_sink_d_valid))
                                  ? (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                        | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                       | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                      | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                      ? (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_285))
                                  : (IData)(vlSelfRef.__PVT___GEN_285)));
    vlSelfRef.__PVT__gotDirty = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (((IData)(vlSelfRef.__PVT__req_valid) 
                                      & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_resps_sink_d_valid))
                                      ? (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                          | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                          ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_dirty)
                                          : (IData)(vlSelfRef.__PVT___GEN_292))
                                      : (IData)(vlSelfRef.__PVT___GEN_292)));
    vlSelfRef.__PVT__no_schedule_REG = ((IData)(vlSymsp->TOP.reset) 
                                        | (((((IData)(vlSelfRef.__PVT__s_wbselfdir) 
                                              & (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                             & (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                            & (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                           & (IData)(vlSelfRef.__PVT__meta_valid)));
    vlSelfRef.__PVT__inv_self_dir = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && (((IData)(vlSelfRef.__PVT__req_valid) 
                                          & (IData)(vlSelfRef.__PVT__sink_c_resp_valid))
                                          ? ((IData)(vlSelfRef.__PVT___T_310)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_27) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_290))
                                              : (IData)(vlSelfRef.__PVT___GEN_290))
                                          : (IData)(vlSelfRef.__PVT___GEN_290)));
    if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            vlSelfRef.__PVT__sink = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_sink;
        }
    }
    vlSelfRef.__PVT__bad_grant = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (((IData)(vlSelfRef.__PVT__req_valid) 
                                       & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_resps_sink_d_valid))
                                       ? (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                             | (5U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                            | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                           ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_denied)
                                           : (IData)(vlSelfRef.__PVT___GEN_288))
                                       : (IData)(vlSelfRef.__PVT___GEN_288)));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_2_valid) {
        vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_bufIdx;
    } else if (((IData)(vlSelfRef.__PVT__req_valid) 
                & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            if ((0U != (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))) {
                vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_bufIdx;
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__probe_dirty = 0U;
        vlSelfRef.__PVT__a_do_release = 0U;
        vlSelfRef.__PVT__a_do_probe = 0U;
        vlSelfRef.__PVT__probes_done = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_reg_0 = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_reg_1 = 0U;
        vlSelfRef.__PVT__releaseThrough = 0U;
        vlSelfRef.__PVT__releaseDrop = 0U;
        vlSelfRef.__PVT__probeAckDataThrough = 0U;
        vlSelfRef.__PVT__probeAckDataDrop = 0U;
        vlSelfRef.__PVT__probeAckDataSave = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSelfRef.__PVT__sink_c_resp_valid))) {
            __Vdly__probe_dirty = (1U & (((IData)(vlSelfRef.__PVT__probe_dirty) 
                                          | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                         | (IData)(vlSelfRef.__PVT__nested_c_hit)));
            vlSelfRef.__PVT__probes_done = vlSelfRef.__PVT___probeack_last_T;
        } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) {
            __Vdly__probe_dirty = 0U;
            vlSelfRef.__PVT__probes_done = 0U;
        }
        if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__a_do_release = ((1U & 
                                              (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 2U))) 
                                             && ((~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17)) 
                                                    & (IData)(vlSelfRef.__PVT___T_130))));
            vlSelfRef.__PVT__a_do_probe = ((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 2U))) 
                                           && ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                               & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17)) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_36)
                                                      ? 
                                                     ((1U 
                                                       != (IData)(vlSelfRef.__PVT__iam))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT___T_182) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_156))
                                                       : (IData)(vlSelfRef.__PVT___GEN_156))
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19) 
                                                      | (IData)(vlSelfRef.__PVT___GEN_156))))));
        }
        if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSelfRef.__PVT__sinkc_resp_last))) {
            if ((0x100U & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_0 
                    = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                          >> 8U)))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_1 
                    = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
        }
        if (vlSelfRef.io_status_bits_will_free) {
            vlSelfRef.__PVT__releaseThrough = 0U;
            vlSelfRef.__PVT__releaseDrop = 0U;
            vlSelfRef.__PVT__probeAckDataThrough = 0U;
            vlSelfRef.__PVT__probeAckDataDrop = 0U;
            vlSelfRef.__PVT__probeAckDataSave = 0U;
        } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) {
            if (vlSelfRef.__PVT__req_fromCmoHelper) {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                       & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                          & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
                vlSelfRef.__PVT__probeAckDataDrop = 
                    (0U == (IData)(vlSelfRef.__PVT__req_param));
                vlSelfRef.__PVT__probeAckDataSave = 
                    ((IData)(vlSelfRef.__PVT___probeAckDataSave_T_4) 
                     & (IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_8));
            } else {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = vlSelfRef.__PVT___GEN_309;
                vlSelfRef.__PVT__probeAckDataDrop = vlSelfRef.__PVT___GEN_310;
                vlSelfRef.__PVT__probeAckDataSave = vlSelfRef.__PVT___GEN_311;
            }
        }
    }
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    vlSelfRef.__PVT__REG = (1U & ((IData)(vlSymsp->TOP.reset) 
                                  | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)) 
                                     | ((IData)(vlSelfRef.__PVT__req_valid) 
                                        & (~ (IData)(vlSelfRef.__PVT__meta_valid))))));
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_1)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: L3 Release should always hit: mshrId:[2] addr: [%x]\n    at MSHR.scala:479 assert(RegNext(!meta_valid || !req.fromC || req.fromCmoHelper || clients_meta(iam).hit),\n",0,
                      5,(((IData)(vlSelfRef.__PVT__req_tag) 
                          << 3U) | ((IData)(vlSelfRef.__PVT__req_set) 
                                    << 1U)));
    }
    if (VL_UNLIKELY(((((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) 
                         & (2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                        & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                       & (~ (IData)(vlSelfRef.__PVT___T_78))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((1U == (IData)(vlSelfRef.__PVT___GEN_3)) 
                           & (1U == (IData)(vlSelfRef.__PVT__req_param))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Probe not supported: [self: %1#] [req: %1#]\n\n    at MSHR.scala:693 assert(probe_is_report(self_meta.state, req.param),\n",0,
                      2,vlSelfRef.__PVT___GEN_3,3,(IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_481) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_11)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_10) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_10))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:703 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_10,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    vlSelfRef.__PVT__REG_1 = (1U & ((((~ (IData)(vlSelfRef.__PVT__meta_valid)) 
                                      | (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                            >> 2U))) 
                                     | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                    | (IData)(vlSelfRef.__PVT___GEN_28)));
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_481) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_13)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_12) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_12))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:703 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_12,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_480) 
                        & (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                              >> 1U))) & (~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((5U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                           | (IData)(vlSelfRef.__PVT__req_preferCache)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Hint should always preferCache!\n    at MSHR.scala:848 assert(req.opcode =/= Hint || req.preferCache, \"Hint should always preferCache!\")\n",0);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__req_valid) 
                       & ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_21) 
                          & ((IData)(vlSelfRef.__PVT__client_dir_conflict) 
                             & (IData)(vlSelfRef.__PVT__probe_helper_finish)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ (IData)(vlSelfRef.__PVT__REG_2))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Error L3: meta still conflict when probe helper finish! mshrId: 2\n    at MSHR.scala:954 assert(RegNext(!clients_meta_busy, true.B),\n",0);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT___T_246) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (0U == (IData)(vlSelfRef.__PVT__probe_clients))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid probe task\n\n    at MSHR.scala:1276 assert(io.tasks.source_b.bits.clients =/= 0.U, \"Invalid probe task\\n\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_3)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:1472 assert(RegNext(!req_valid || !io.alloc.valid, true.B)) // TODO: support fully-pipelined\n",0);
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__client_dir_conflict = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_21) 
                                                & (IData)(vlSelfRef.__PVT__clients_meta_busy));
        vlSelfRef.__PVT__probe_clients = ((((IData)(vlSelfRef.__PVT___probe_clients_T_3)
                                             ? (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__req_channel))
                                                 ? 
                                                ((~ 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.__PVT__iam)) 
                                                   & (IData)(vlSelfRef.__PVT__req_acquire))) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_13) 
                                                    & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                        & (0U 
                                                           != (IData)(vlSelfRef.__PVT___GEN_12))) 
                                                       | ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                          | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                             >> 1U)))))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? (IData)(vlSelfRef.__PVT___clients_have_T_T_3)
                                                   : (IData)(vlSelfRef.__PVT___GEN_13))
                                                  : (IData)(vlSelfRef.__PVT___GEN_13)))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.__PVT___probe_clients_T_3)
                                            ? (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0)
                                            : ((1U 
                                                & (IData)(vlSelfRef.__PVT__req_channel))
                                                ? (
                                                   (~ 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.__PVT__iam)) 
                                                     & (IData)(vlSelfRef.__PVT__req_acquire))) 
                                                   & ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                      & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                                         | ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                                                               >> 1U)))))
                                                : ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__req_param))
                                                     ? (IData)(vlSelfRef.__PVT___clients_have_T_T_1)
                                                     : (IData)(vlSelfRef.__PVT___GEN_11))
                                                    : (IData)(vlSelfRef.__PVT___GEN_11)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__bypassPut_latch_reg = vlSelfRef.__PVT__bypassPut;
    } else if (vlSelfRef.io_status_bits_will_free) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_2_valid) {
        vlSelfRef.__PVT__req_size = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_size;
        vlSelfRef.__PVT__req_off = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_off;
        vlSelfRef.__PVT__req_preferCache = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_preferCache;
        vlSelfRef.__PVT__req_set = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_set;
        vlSelfRef.__PVT__req_tag = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_tag;
        vlSelfRef.__PVT__req_opcode = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_opcode;
        vlSelfRef.__PVT__req_fromCmoHelper = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromCmoHelper;
        vlSelfRef.__PVT__iam = ((0U == (IData)(vlSelfRef.__PVT__clientBitOH))
                                 ? 2U : (1U & ((IData)(vlSelfRef.__PVT__clientBitOH) 
                                               >> 1U)));
        vlSelfRef.__PVT__req_channel = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_channel;
        vlSelfRef.__PVT__req_param = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_param;
    }
    vlSelfRef.__PVT__meta_reg_self_clientStates_1 = __Vdly__meta_reg_self_clientStates_1;
    vlSelfRef.__PVT__meta_reg_self_clientStates_0 = __Vdly__meta_reg_self_clientStates_0;
    vlSelfRef.__PVT__probe_dirty = __Vdly__probe_dirty;
    vlSelfRef.__PVT__s_writeprobe = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                         ? ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)) 
                                            & (IData)(vlSelfRef.__PVT___GEN_350))
                                         : (IData)(vlSelfRef.__PVT___GEN_350)));
    vlSelfRef.__PVT___GEN_92 = (1U & ((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                      | (IData)(vlSelfRef.__PVT__acquire_flag)));
    vlSelfRef.io_tasks_source_e_valid = ((~ (IData)(vlSelfRef.__PVT__s_grantack)) 
                                         & (IData)(vlSelfRef.__PVT__w_grantfirst));
    vlSelfRef.__PVT__no_wait = ((IData)(vlSelfRef.__PVT__w_grantlast) 
                                & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                   & ((IData)(vlSelfRef.__PVT__w_grantack) 
                                      & ((IData)(vlSelfRef.__PVT__w_releaseack) 
                                         & ((IData)(vlSelfRef.__PVT__w_putwritten) 
                                            & (IData)(vlSelfRef.__PVT__w_sinkcack))))));
    vlSelfRef.__PVT___probeAckDataSave_T_4 = (1U & 
                                              (~ (IData)(vlSelfRef.__PVT__probeAckDataDrop)));
    vlSelfRef.__PVT___new_self_meta_dirty_T_8 = (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)));
    vlSelfRef.__PVT___new_self_meta_dirty_T_9 = ((~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)) 
                                                 & (IData)(vlSelfRef.__PVT__req_fromProbeHelper));
    vlSelfRef.__PVT__releaseSave = (1U & ((~ (IData)(vlSelfRef.__PVT__releaseThrough)) 
                                          & (~ (IData)(vlSelfRef.__PVT__releaseDrop))));
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37 
        = ((IData)(vlSelfRef.__PVT__a_do_probe) & (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit));
    vlSelfRef.__PVT___new_self_meta_clientStates_1_T_37 
        = ((IData)(vlSelfRef.__PVT__a_do_probe) & (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit));
    vlSelfRef.__PVT___new_self_meta_dirty_T_15 = ((IData)(vlSelfRef.__PVT__gotDirty) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    vlSelfRef.__PVT__REG_2 = (1U & ((IData)(vlSymsp->TOP.reset) 
                                    | (~ (IData)(vlSelfRef.__PVT__clients_meta_busy))));
    vlSelfRef.__PVT__s_wbclientstag = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_347));
    vlSelfRef.__PVT__s_wbselftag = ((IData)(vlSymsp->TOP.reset) 
                                    | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                        ? ((IData)(vlSelfRef.__PVT___T_310)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_27) 
                                               | (IData)(vlSelfRef.__PVT___GEN_345))
                                            : (IData)(vlSelfRef.__PVT___GEN_345))
                                        : (IData)(vlSelfRef.__PVT___GEN_345)));
    vlSelfRef.__PVT__s_wbselfdir = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_344));
    vlSelfRef.__PVT__s_wbclientsdir = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_346));
    vlSelfRef.__PVT__meta_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                   && ((1U & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                       && (IData)(vlSelfRef.io_metaValid)));
    vlSelfRef.__PVT__probe_helper_finish = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                            && ((1U 
                                                 & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                && (IData)(vlSelfRef.__PVT___GEN_322)));
    vlSelfRef.__PVT__REG_3 = (1U & ((IData)(vlSymsp->TOP.reset) 
                                    | ((~ (IData)(vlSelfRef.__PVT__req_valid)) 
                                       | (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_2_valid)))));
    vlSelfRef.io_status_bits_will_free = ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & ((IData)(vlSelfRef.__PVT__s_execute) 
                                             & ((((IData)(vlSelfRef.__PVT__s_probeack) 
                                                  & ((IData)(vlSelfRef.__PVT__no_schedule_REG) 
                                                     & (IData)(vlSelfRef.__PVT__s_grantack))) 
                                                 & (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                                & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                   & (IData)(vlSelfRef.__PVT__s_writeprobe)))));
    vlSelfRef.__PVT__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT___GEN_430));
    vlSelfRef.__PVT___transmit_from_other_client_T_2 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                           >> 1U))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_36 = ((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                      >> 1U))) 
                                                 & (4U 
                                                    != (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___io_status_bits_nestB_T_7 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__w_grantfirst)) 
                                                     | ((~ (IData)(vlSelfRef.__PVT__probe_helper_finish)) 
                                                        & (IData)(vlSelfRef.__PVT__client_dir_conflict))));
    vlSelfRef.__PVT__can_start = (1U & ((~ (IData)(vlSelfRef.__PVT__client_dir_conflict)) 
                                        | (IData)(vlSelfRef.__PVT__probe_helper_finish)));
    vlSelfRef.__PVT___new_self_meta_state_T_34 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                                   & (IData)(vlSelfRef.__PVT__promoteT_safe))
                                                   ? 2U
                                                   : 3U);
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33 
        = ((IData)(vlSelfRef.__PVT__req_acquire) | 
           (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                         >> 1U))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_21 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                                 & (IData)(vlSelfRef.__PVT__req_acquire));
    vlSelfRef.__PVT___probe_clients_T_3 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                           & (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___GEN_234 = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 2U)) 
                                       | ((~ (IData)(vlSelfRef.__PVT__req_opcode)) 
                                          | (IData)(vlSelfRef.__PVT__req_fromCmoHelper))));
    vlSelfRef.__PVT___client_shrink_perm_T_4 = ((1U 
                                                 == (IData)(vlSelfRef.__PVT__req_param)) 
                                                | ((2U 
                                                    == (IData)(vlSelfRef.__PVT__req_param)) 
                                                   | (5U 
                                                      == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__PVT___client_shrink_perm_T_10 = ((0U 
                                                  == (IData)(vlSelfRef.__PVT__req_param)) 
                                                 | (4U 
                                                    == (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___GEN_334 = ((6U == (IData)(vlSelfRef.__PVT__req_opcode))
                                  ? (((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                                      & (7U == (IData)(vlSelfRef.__PVT__req_opcode)))
                                      ? 4U : 5U) : 
                                 ((5U == (IData)(vlSelfRef.__PVT__req_opcode))
                                   ? 2U : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                                            ? 1U : 
                                           ((3U == (IData)(vlSelfRef.__PVT__req_opcode))
                                             ? 1U : 
                                            ((2U == (IData)(vlSelfRef.__PVT__req_opcode))
                                              ? 1U : 0U)))));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | ((IData)(vlSelfRef.__PVT__req_acquire) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2__1(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__meta_no_clients;
    __PVT__meta_no_clients = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T;
    __PVT___highest_perm_except_me_T = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T_6;
    __PVT___highest_perm_except_me_T_6 = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T_12;
    __PVT___highest_perm_except_me_T_12 = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T_14;
    __PVT___highest_perm_except_me_T_14 = 0;
    CData/*1:0*/ __PVT__highest_perm_except_me;
    __PVT__highest_perm_except_me = 0;
    CData/*0:0*/ __PVT__replace_need_release;
    __PVT__replace_need_release = 0;
    CData/*0:0*/ __PVT__prefetch_miss_need_probe;
    __PVT__prefetch_miss_need_probe = 0;
    CData/*0:0*/ __PVT___T_260;
    __PVT___T_260 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_0_T_38;
    __PVT___new_self_meta_clientStates_0_T_38 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_1_T_38;
    __PVT___new_self_meta_clientStates_1_T_38 = 0;
    CData/*0:0*/ __PVT__nested_client_match;
    __PVT__nested_client_match = 0;
    CData/*0:0*/ __PVT___GEN_124;
    __PVT___GEN_124 = 0;
    CData/*0:0*/ __PVT___GEN_132;
    __PVT___GEN_132 = 0;
    CData/*0:0*/ __PVT___T_159;
    __PVT___T_159 = 0;
    CData/*0:0*/ __PVT___T_161;
    __PVT___T_161 = 0;
    CData/*0:0*/ __PVT___GEN_133;
    __PVT___GEN_133 = 0;
    CData/*0:0*/ __PVT___T_168;
    __PVT___T_168 = 0;
    CData/*0:0*/ __PVT___GEN_157;
    __PVT___GEN_157 = 0;
    CData/*0:0*/ __PVT___GEN_158;
    __PVT___GEN_158 = 0;
    CData/*0:0*/ __PVT___GEN_160;
    __PVT___GEN_160 = 0;
    CData/*0:0*/ __PVT___GEN_280;
    __PVT___GEN_280 = 0;
    CData/*0:0*/ __PVT___will_save_probeack_T_2;
    __PVT___will_save_probeack_T_2 = 0;
    CData/*0:0*/ __PVT__probeack_last;
    __PVT__probeack_last = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_5;
    __VdfgRegularize_hd4a67951_2_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_30;
    __VdfgRegularize_hd4a67951_2_30 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_35;
    __VdfgRegularize_hd4a67951_2_35 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_37;
    __VdfgRegularize_hd4a67951_2_37 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_39;
    __VdfgRegularize_hd4a67951_2_39 = 0;
    // Body
    vlSelfRef.__PVT__client_set_match = ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6.__PVT__req_set) 
                                         == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.__PVT__nest_c_tag_match = ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_tag) 
                                         == (IData)(vlSelfRef.__PVT__req_tag));
    vlSelfRef.__PVT___probeack_last_T = ((IData)(vlSelfRef.__PVT__probes_done) 
                                         | ((2U & (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                     >> 8U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                >> 8U))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_32 = ((4U 
                                                  == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                 | ((5U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                    | ((1U 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                       | (0U 
                                                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_33 = (1U 
                                                 & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode) 
                                                    | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData)));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_22 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                     >> 1U) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                                       | ((IData)(vlSelfRef.__PVT__probeAckDataThrough) 
                                                          & (5U 
                                                             != (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param))))));
    vlSelfRef.__PVT___T_40 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_set) 
                              == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.io_tasks_source_b_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_probe)) 
                                            & (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.io_tasks_sink_c_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_enable) 
                                       & ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                          | ((~ (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                             & ((~ (IData)(vlSelfRef.__PVT__releaseSave)) 
                                                | (IData)(vlSelfRef.__PVT__s_release)))));
    vlSelfRef.io_tasks_source_a_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_enable) 
                                         & (((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                             | (~ (IData)(vlSelfRef.__PVT__s_transferput))) 
                                            & ((IData)(vlSelfRef.__PVT__s_probe) 
                                               & ((IData)(vlSelfRef.__PVT__s_release) 
                                                  & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                                     & (IData)(vlSelfRef.__PVT__can_start))))));
    vlSelfRef.io_tasks_source_d_valid = ((~ (IData)(vlSelfRef.__PVT__s_execute)) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_enable) 
                                            & ((IData)(vlSelfRef.__PVT__can_start) 
                                               & ((IData)(vlSelfRef.__PVT__w_grant) 
                                                  & ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                                     & ((IData)(vlSelfRef.__PVT__w_sinkcack) 
                                                        & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                           & (IData)(vlSelfRef.__PVT__w_probeacklast))))))));
    vlSelfRef.io_tasks_source_c_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_release)) 
                                            | ((~ (IData)(vlSelfRef.__PVT__s_probeack)) 
                                               & ((IData)(vlSelfRef.__PVT__s_writerelease) 
                                                  & ((IData)(vlSelfRef.__PVT__w_probeack) 
                                                     & (IData)(vlSelfRef.__PVT__w_sinkcack))))));
    __VdfgRegularize_hd4a67951_2_30 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_enable) 
                                       & ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & (IData)(vlSelfRef.__PVT__can_start)));
    vlSelfRef.__PVT___nestedReleaseDataSave_T_1 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_c_status_nestedReleaseData) 
                                                   & ((IData)(vlSelfRef.__PVT__req_valid) 
                                                      & ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_set) 
                                                         == (IData)(vlSelfRef.__PVT__req_set))));
    vlSelfRef.io_metaValid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) 
                              | (IData)(vlSelfRef.__PVT__meta_valid));
    vlSelfRef.__PVT___GEN_285 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_292 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_290 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__inv_self_dir));
    vlSelfRef.__PVT___GEN_288 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__bad_grant));
    vlSelfRef.__PVT___GEN_284 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__promoteT_safe));
    vlSelfRef.__PVT___GEN_480 = ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                     >> 2U)) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG));
    vlSelfRef.__PVT___GEN_273 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__s_writeprobe));
    vlSelfRef.__PVT___T_5 = (0xfU & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                      >> 4U) | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg)));
    vlSelfRef.__PVT__clientBitOH = ((2U & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                               >> 8U)) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                             >> 8U)));
    vlSelfRef.__PVT__sink_c_resp_valid = ((~ (IData)(vlSelfRef.__PVT__w_probeacklast)) 
                                          & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_resps_sink_c_valid));
    vlSelfRef.__PVT___GEN_430 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_2_valid) 
                                 | ((~ (IData)(vlSelfRef.io_status_bits_will_free)) 
                                    & (IData)(vlSelfRef.__PVT__req_valid)));
    vlSelfRef.__PVT___GEN_322 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_b_status_probeHelperFinish) 
                                     & (IData)(vlSelfRef.__PVT__client_set_match))) 
                                 | (IData)(vlSelfRef.__PVT__probe_helper_finish));
    __PVT__probeack_last = ((IData)(vlSelfRef.__PVT___probeack_last_T) 
                            == (IData)(vlSelfRef.__PVT__probe_clients));
    __PVT__nested_client_match = (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_tag) 
                                   == ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                        ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag)
                                        : (IData)(vlSelfRef.__PVT__meta_reg_clients_tag))) 
                                  & (IData)(vlSelfRef.__PVT___T_40));
    vlSelfRef.io_tasks_client_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                                 & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                          & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselfdir)) 
                                          & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_client_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                                 & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.__PVT___GEN_481 = ((IData)(vlSelfRef.__PVT___GEN_480) 
                                 & ((IData)(vlSelfRef.__PVT__req_channel) 
                                    >> 1U));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_272 = vlSelfRef.__PVT___GEN_234;
        vlSelfRef.__PVT___GEN_283 = vlSelfRef.__PVT___GEN_234;
        vlSelfRef.io_status_bits_way = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
        vlSelfRef.io_tasks_source_d_bits_isHit = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__hit_s2;
    } else {
        vlSelfRef.__PVT___GEN_272 = vlSelfRef.__PVT__s_writerelease;
        vlSelfRef.__PVT___GEN_283 = vlSelfRef.__PVT__w_sinkcack;
        vlSelfRef.io_status_bits_way = vlSelfRef.__PVT__meta_reg_self_way;
        vlSelfRef.io_tasks_source_d_bits_isHit = vlSelfRef.__PVT__meta_reg_self_hit;
    }
    vlSelfRef.__PVT___GEN_103 = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                                          & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
    vlSelfRef.__PVT___T_57 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                    & (IData)(vlSelfRef.__PVT__req_opcode)));
    __VdfgRegularize_hd4a67951_2_35 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                    >> 1U)))));
    __VdfgRegularize_hd4a67951_2_37 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                             | (IData)(vlSelfRef.__PVT__req_needT)));
    vlSelfRef.__PVT___a_c_through_T_3 = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                         & (IData)(vlSelfRef.__PVT__nest_c_tag_match));
    vlSelfRef.__PVT___T_143 = (1U & (~ ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                        & (7U == (IData)(vlSelfRef.__PVT__req_opcode)))));
    vlSelfRef.__PVT__nested_c_hit = (((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                      & (((IData)(vlSelfRef.__PVT__meta_valid) 
                                          & ((IData)(vlSelfRef.__PVT__req_channel) 
                                             & (IData)(vlSelfRef.__PVT___T_40))) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT____VdfgRegularize_h3add2528_14_0) 
                                            & ((IData)(vlSelfRef.__PVT__req_tag) 
                                               == (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_tag))))) 
                                     | (IData)(vlSelfRef.__PVT__nested_c_hit_reg));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_8 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT___GEN_2 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
    } else {
        vlSelfRef.__PVT___GEN_8 = vlSelfRef.__PVT__meta_reg_self_tag;
        vlSelfRef.__PVT___GEN_2 = vlSelfRef.__PVT__meta_reg_self_dirty;
    }
    vlSelfRef.__PVT___new_self_meta_dirty_T = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                               & (IData)(vlSelfRef.__PVT___GEN_2));
    vlSelfRef.__PVT___new_self_meta_dirty_T_13 = ((IData)(vlSelfRef.__PVT___GEN_2) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_0;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_1;
    } else {
        vlSelfRef.__PVT___GEN_4 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
        vlSelfRef.__PVT___GEN_5 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    }
    __PVT__meta_no_clients = ((0U == (IData)(vlSelfRef.__PVT___GEN_4)) 
                              & (0U == (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT___GEN_3 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_state)
                                : (IData)(vlSelfRef.__PVT__meta_reg_self_state));
    vlSelfRef.__PVT___T_78 = ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                              | (((IData)(vlSelfRef.__PVT___GEN_3) 
                                  >> 1U) & (1U == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_38 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_3) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.__PVT__req_param))));
    __PVT__replace_need_release = (((IData)(vlSelfRef.__PVT___GEN_3) 
                                    > (((IData)(vlSelfRef.__PVT___GEN_4) 
                                        > (IData)(vlSelfRef.__PVT___GEN_5))
                                        ? (IData)(vlSelfRef.__PVT___GEN_4)
                                        : (IData)(vlSelfRef.__PVT___GEN_5))) 
                                   | ((IData)(vlSelfRef.__PVT___GEN_2) 
                                      & ((1U == (IData)(vlSelfRef.__PVT___GEN_3)) 
                                         | (3U == (IData)(vlSelfRef.__PVT___GEN_3)))));
    if (vlSelfRef.io_tasks_source_d_bits_isHit) {
        __PVT___highest_perm_except_me_T = vlSelfRef.__PVT___GEN_3;
        vlSelfRef.__PVT___highest_perm_T_2 = vlSelfRef.__PVT___GEN_3;
    } else {
        __PVT___highest_perm_except_me_T = 0U;
        vlSelfRef.__PVT___highest_perm_T_2 = 0U;
    }
    __VdfgRegularize_hd4a67951_2_5 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                            | (~ ((IData)(vlSelfRef.__PVT___GEN_3) 
                                                  >> 1U))));
    vlSelfRef.__PVT__change_self_meta = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                         & (((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                             & (IData)(vlSelfRef.__PVT___T_40)) 
                                            & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_tag) 
                                               == (IData)(vlSelfRef.__PVT___GEN_8))));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_12 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_0_state;
    } else {
        vlSelfRef.__PVT___GEN_12 = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
    }
    vlSelfRef.__PVT___GEN_24 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_12)
                                 : (IData)(vlSelfRef.__PVT___GEN_10));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_13 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_11 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_0_hit;
    } else {
        vlSelfRef.__PVT___GEN_13 = vlSelfRef.__PVT__meta_reg_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_11 = vlSelfRef.__PVT__meta_reg_clients_states_0_hit;
    }
    vlSelfRef.__PVT___GEN_28 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_13)
                                 : (IData)(vlSelfRef.__PVT___GEN_11));
    if (vlSelfRef.__PVT___GEN_13) {
        vlSelfRef.__PVT___clients_have_T_T_3 = ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                >> 1U);
        vlSelfRef.__PVT___highest_perm_T_4 = vlSelfRef.__PVT___GEN_12;
    } else {
        vlSelfRef.__PVT___clients_have_T_T_3 = 0U;
        vlSelfRef.__PVT___highest_perm_T_4 = 0U;
    }
    vlSelfRef.__PVT__clients_meta_busy = (((~ (IData)(vlSelfRef.__PVT___GEN_11)) 
                                           & (0U != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                          | ((~ (IData)(vlSelfRef.__PVT___GEN_13)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT___GEN_12))));
    vlSelfRef.__PVT___clients_have_T_T_1 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                                            & ((IData)(vlSelfRef.__PVT___GEN_10) 
                                               >> 1U));
    vlSelfRef.__PVT___GEN_101 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_13)) 
                                       & (~ (IData)(vlSelfRef.__PVT___GEN_11))));
    vlSelfRef.__PVT___transmit_from_other_client_T_12 
        = ((((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (1U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_13)) | 
           (((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (0U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_11)));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_17 = ((5U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_13) 
                                                    | (IData)(vlSelfRef.__PVT___GEN_11)));
    vlSelfRef.__PVT___highest_perm_T_3 = ((IData)(vlSelfRef.__PVT___GEN_11)
                                           ? (IData)(vlSelfRef.__PVT___GEN_10)
                                           : 0U);
    __PVT___GEN_124 = (1U & (~ ((IData)(vlSelfRef.__PVT___GEN_11) 
                                | (IData)(vlSelfRef.__PVT___GEN_13))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_28 = ((IData)(vlSelfRef.__PVT__req_valid) 
                                                 & (IData)(vlSelfRef.__PVT__sink_c_resp_valid));
    vlSelfRef.__PVT__sinkc_resp_last = ((IData)(vlSelfRef.__PVT__sink_c_resp_valid) 
                                        & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_26 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                                 & (IData)(__PVT__probeack_last));
    vlSelfRef.__PVT__change_clients_meta_0 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_10)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__PVT__change_clients_meta_1 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_12)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_19 = ((IData)(vlSelfRef.__PVT___GEN_13) 
                                                 & (((IData)(vlSelfRef.__PVT___GEN_12) 
                                                     >> 1U) 
                                                    | (IData)(__VdfgRegularize_hd4a67951_2_35)));
    __PVT___T_168 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                     & (((IData)(vlSelfRef.__PVT___GEN_10) 
                         >> 1U) | (IData)(__VdfgRegularize_hd4a67951_2_35)));
    vlSelfRef.io_status_bits_will_save_data = ((IData)(vlSelfRef.__PVT__req_channel) 
                                               & ((IData)(vlSelfRef.__PVT___T_143) 
                                                  & ((IData)(vlSelfRef.__PVT__preferCache_latch) 
                                                     | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
    vlSelfRef.__PVT__req_promoteT = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                     & ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                                         ? ((IData)(__PVT__meta_no_clients) 
                                            & (3U == (IData)(vlSelfRef.__PVT___GEN_3)))
                                         : ((IData)(vlSelfRef.__PVT__gotT) 
                                            & (IData)(vlSelfRef.__PVT__promoteT_safe))));
    vlSelfRef.__PVT___GEN_110 = (1U & (~ ((IData)(vlSelfRef.__PVT___T_57) 
                                          & ((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                             & (IData)(__PVT__replace_need_release)))));
    __PVT___highest_perm_except_me_T_12 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                            & (1U == (IData)(vlSelfRef.__PVT__iam)))
                                            ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    vlSelfRef.__PVT__clients_have_T = ((IData)(vlSelfRef.__PVT___clients_have_T_T_3) 
                                       | (IData)(vlSelfRef.__PVT___clients_have_T_T_1));
    vlSelfRef.__PVT__transmit_from_other_client = (
                                                   (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                   & ((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_12) 
                                                      | (IData)(vlSelfRef.__PVT__transmit_from_other_client_reg)));
    vlSelfRef.__PVT___GEN_418 = (1U & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_valid) 
                                        & (2U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_bits_sink))) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))))
                                           : (IData)(vlSelfRef.__PVT__w_grantack))));
    __PVT___highest_perm_except_me_T_6 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                           & (0U == (IData)(vlSelfRef.__PVT__iam)))
                                           ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_3));
    vlSelfRef.__PVT___highest_perm_T_6 = (((IData)(vlSelfRef.__PVT___highest_perm_T_3) 
                                           > (IData)(vlSelfRef.__PVT___highest_perm_T_4))
                                           ? (IData)(vlSelfRef.__PVT___highest_perm_T_3)
                                           : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    __VdfgRegularize_hd4a67951_2_39 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                             & (~ (IData)(vlSelfRef.__PVT___GEN_28))));
    vlSelfRef.__PVT___GEN_125 = ((IData)(__PVT___GEN_124) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_38));
    vlSelfRef.__PVT__bypassPut = (IData)((((0U == (6U 
                                                   & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                           & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))) 
                                          & (IData)(__PVT___GEN_124)));
    __PVT___T_260 = ((IData)(vlSelfRef.__PVT__req_valid) 
                     & (IData)(vlSelfRef.__PVT__sinkc_resp_last));
    vlSelfRef.__PVT___T_310 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_26) 
                               & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                  & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last) 
                                     & ((~ (IData)(vlSelfRef.__PVT__nested_c_hit)) 
                                        & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))))));
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27 
        = (((IData)(vlSelfRef.__PVT__req_needT) | (IData)(vlSelfRef.__PVT__req_promoteT))
            ? 3U : 1U);
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36 
        = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
           | ((IData)(vlSelfRef.__PVT__req_promoteT) 
              | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))));
    __PVT___highest_perm_except_me_T_14 = (((IData)(__PVT___highest_perm_except_me_T_6) 
                                            > (IData)(__PVT___highest_perm_except_me_T_12))
                                            ? (IData)(__PVT___highest_perm_except_me_T_6)
                                            : (IData)(__PVT___highest_perm_except_me_T_12));
    vlSelfRef.__PVT__highest_perm = (((IData)(vlSelfRef.__PVT___highest_perm_T_2) 
                                      > (IData)(vlSelfRef.__PVT___highest_perm_T_6))
                                      ? (IData)(vlSelfRef.__PVT___highest_perm_T_2)
                                      : (IData)(vlSelfRef.__PVT___highest_perm_T_6));
    vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0 
        = ((0U != (IData)(vlSelfRef.__PVT__iam)) & 
           (((1U == (IData)(vlSelfRef.__PVT__req_param)) 
             & (((IData)(vlSelfRef.__PVT___GEN_10) 
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_11) 
                           & (IData)(__VdfgRegularize_hd4a67951_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(__VdfgRegularize_hd4a67951_2_39)))));
    vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1 
        = ((1U != (IData)(vlSelfRef.__PVT__iam)) & 
           (((1U == (IData)(vlSelfRef.__PVT__req_param)) 
             & (((IData)(vlSelfRef.__PVT___GEN_12) 
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_13) 
                           & (IData)(__VdfgRegularize_hd4a67951_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_13) 
                  & (IData)(__VdfgRegularize_hd4a67951_2_39)))));
    vlSelfRef.__PVT__preferCache = ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                         ? (IData)(vlSelfRef.__PVT__bypassPut)
                                         : (IData)(vlSelfRef.__PVT__bypassPut_latch_reg))) 
                                    & (IData)(vlSelfRef.__PVT__req_preferCache));
    vlSelfRef.__PVT___GEN_360 = (((IData)(__PVT___T_260) 
                                  & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                 | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData));
    if (__PVT___T_260) {
        vlSelfRef.__VdfgRegularize_hd4a67951_2_24 = __PVT__probeack_last;
        if ((0x100U & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
        } else {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
        }
    } else {
        vlSelfRef.__VdfgRegularize_hd4a67951_2_24 = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_0 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
        vlSelfRef.__PVT__client_probeack_param_vec_1 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
    }
    __PVT__highest_perm_except_me = (((IData)(__PVT___highest_perm_except_me_T) 
                                      > (IData)(__PVT___highest_perm_except_me_T_14))
                                      ? (IData)(__PVT___highest_perm_except_me_T)
                                      : (IData)(__PVT___highest_perm_except_me_T_14));
    vlSelfRef.__PVT__will_probeack_through = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) 
                                              & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                                                    | ((IData)(vlSelfRef.__PVT__req_needProbeAckData) 
                                                       & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT__highest_perm)))))));
    vlSelfRef.__PVT__highest_perm_reg = ((IData)(vlSelfRef.__PVT__highest_perm) 
                                         | (IData)(vlSelfRef.__PVT__highest_perm_reg_reg));
    __PVT__prefetch_miss_need_probe = ((IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1) 
                                       | (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_27 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__preferCache) 
                                                     | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
    vlSelfRef.__PVT__bypassGet = ((~ (IData)(vlSelfRef.__PVT__preferCache)) 
                                  & (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___new_clients_meta_0_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)))
            ? 1U : 0U);
    vlSelfRef.__PVT___new_clients_meta_1_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)))
            ? 1U : 0U);
    vlSelfRef.__PVT___GEN_130 = (1U & (~ ((IData)(vlSelfRef.__PVT__req_acquire)
                                           ? ((IData)(vlSelfRef.__PVT__req_needT)
                                               ? (~ 
                                                  ((IData)(__PVT__highest_perm_except_me) 
                                                   >> 1U))
                                               : (0U 
                                                  == (IData)(__PVT__highest_perm_except_me)))
                                           : ((IData)(vlSelfRef.__PVT__req_needT)
                                               ? (~ 
                                                  ((IData)(vlSelfRef.__PVT__highest_perm) 
                                                   >> 1U))
                                               : (0U 
                                                  == (IData)(vlSelfRef.__PVT__highest_perm))))));
    __PVT___will_save_probeack_T_2 = ((IData)(vlSelfRef.__PVT__will_probeack_through) 
                                      & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit));
    if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        vlSelfRef.__PVT___GEN_310 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) 
                                     & ((~ (IData)(vlSelfRef.__PVT__will_probeack_through)) 
                                        & ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 1U)));
        if (vlSelfRef.__PVT__req_fromProbeHelper) {
            vlSelfRef.__PVT___GEN_309 = ((IData)(vlSelfRef.__PVT__will_probeack_through) 
                                         & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)));
            vlSelfRef.__PVT___GEN_311 = (1U & (IData)(__PVT___will_save_probeack_T_2));
        } else {
            vlSelfRef.__PVT___GEN_309 = vlSelfRef.__PVT__will_probeack_through;
            vlSelfRef.__PVT___GEN_311 = (1U & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)) 
                                               | ((~ 
                                                   ((IData)(vlSelfRef.__PVT__req_channel) 
                                                    >> 1U)) 
                                                  | ((IData)(__PVT___will_save_probeack_T_2) 
                                                     & (1U 
                                                        == (IData)(vlSelfRef.__PVT__req_param))))));
        }
    } else {
        vlSelfRef.__PVT___GEN_310 = vlSelfRef.__PVT__probeAckDataDrop;
        vlSelfRef.__PVT___GEN_309 = vlSelfRef.__PVT__probeAckDataThrough;
        vlSelfRef.__PVT___GEN_311 = (1U & ((~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)) 
                                           & (~ (IData)(vlSelfRef.__PVT__probeAckDataDrop))));
    }
    vlSelfRef.io_tasks_dir_write_bits_data_state = 
        ((IData)(vlSelfRef.__PVT__bad_grant) ? (IData)(vlSelfRef.__PVT___GEN_3)
          : ((4U & (IData)(vlSelfRef.__PVT__req_channel))
              ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                  ? ((1U == (IData)(vlSelfRef.__PVT__req_param))
                      ? ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_3))
                              ? 3U : 1U) : (IData)(vlSelfRef.__PVT___GEN_3))
                      : 0U) : ((2U == (IData)(vlSelfRef.__PVT__req_param))
                                ? (((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                    & (3U == (IData)(vlSelfRef.__PVT___GEN_3)))
                                    ? 3U : 1U) : ((1U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? 3U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.__PVT__req_param))
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__PVT__req_param))
                                                     ? 2U
                                                     : (IData)(vlSelfRef.__PVT___GEN_3))))))
              : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                  ? ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                      ? ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_9)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_3))
                              ? 3U : 1U) : ((((IData)(vlSelfRef.__PVT___GEN_3) 
                                              >> 1U) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__req_param)))
                                             ? (IData)(vlSelfRef.__PVT___GEN_3)
                                             : (((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                                 & (2U 
                                                    != (IData)(vlSelfRef.__PVT__req_param)))
                                                 ? 1U
                                                 : 0U)))
                      : (IData)(vlSelfRef.__PVT___GEN_3))
                  : ((IData)(vlSelfRef.__PVT__inv_self_dir)
                      ? 0U : ((IData)(vlSelfRef.__PVT__req_needT)
                               ? ((IData)(vlSelfRef.__PVT__req_acquire)
                                   ? 2U : 3U) : ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                                                  ? 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT___GEN_3))
                                                   ? 
                                                  (((IData)(__PVT__meta_no_clients) 
                                                    & (IData)(vlSelfRef.__PVT__req_acquire))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__PVT___GEN_3))
                                                    ? 3U
                                                    : 1U))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__transmit_from_other_client)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : (IData)(vlSelfRef.__PVT__highest_perm_reg))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : 1U))))))));
    vlSelfRef.__PVT__prefetch_need_data = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                           & ((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                              & (((0U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? 
                                                  (0U 
                                                   == (IData)(vlSelfRef.__PVT__highest_perm))
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.__PVT__highest_perm) 
                                                    >> 1U))) 
                                                 | (IData)(__PVT__prefetch_miss_need_probe))));
    __PVT___T_159 = ((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                     & (IData)(__PVT__prefetch_miss_need_probe));
    vlSelfRef.io_tasks_source_a_bits_opcode = ((1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__s_transferput)) 
                                                   | (IData)(vlSelfRef.__PVT__bypassGet)))
                                                ? (IData)(vlSelfRef.__PVT__req_opcode)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelfRef.__PVT__req_opcode))
                                                    ? 6U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                         >> 1U)))
                                                     ? 6U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__req_opcode))
                                                      ? 6U
                                                      : (IData)(vlSelfRef.__PVT__req_opcode)))));
    if (vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37) {
        __PVT___new_self_meta_clientStates_0_T_38 = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
    } else {
        __PVT___new_self_meta_clientStates_0_T_38 = 0U;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
    }
    if (__PVT__prefetch_miss_need_probe) {
        if ((0U == (IData)(vlSelfRef.__PVT__req_param))) {
            vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 
                = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
            vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 
                = vlSelfRef.__PVT___new_clients_meta_1_state_T_24;
        } else {
            vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 = 0U;
            vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 = 0U;
        }
    } else {
        vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
        vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
    }
    if (vlSelfRef.__PVT___new_self_meta_clientStates_1_T_37) {
        __PVT___new_self_meta_clientStates_1_T_38 = vlSelfRef.__PVT___new_clients_meta_1_state_T_24;
        vlSelfRef.__PVT___new_clients_meta_1_state_T_36 
            = vlSelfRef.__PVT___new_clients_meta_1_state_T_24;
    } else {
        __PVT___new_self_meta_clientStates_1_T_38 = 0U;
        vlSelfRef.__PVT___new_clients_meta_1_state_T_36 
            = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
    }
    vlSelfRef.__PVT___GEN_343 = (1U & (((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT__chosen_reg) 
                                          >> 2U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT____VdfgRegularize_h528b8c7d_0_5)) 
                                        & (IData)(vlSelfRef.io_tasks_source_e_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                    | ((IData)(vlSelfRef.__PVT___GEN_130) 
                                                       | (~ 
                                                          ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                           & (~ (IData)(vlSelfRef.__PVT__bypassPut))))))))
                                           : (IData)(vlSelfRef.__PVT__s_grantack))));
    vlSelfRef.__PVT___GEN_237 = (1U & (IData)((((0U 
                                                 != 
                                                 (6U 
                                                  & (IData)(vlSelfRef.__PVT__req_channel))) 
                                                | (IData)(vlSelfRef.__PVT___GEN_130)) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))));
    __PVT___GEN_132 = (1U & ((IData)(vlSelfRef.__PVT___GEN_130) 
                             | (~ ((IData)(vlSelfRef.__PVT___T_143) 
                                   & (((4U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                                       & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                      | (IData)(vlSelfRef.__PVT__preferCache))))));
    vlSelfRef.__PVT___T_130 = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                               & ((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                  & ((IData)(__PVT__replace_need_release) 
                                     & (((IData)(vlSelfRef.__PVT__preferCache) 
                                         & ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            | (4U == (IData)(vlSelfRef.__PVT__req_opcode)))) 
                                        | ((IData)(vlSelfRef.__PVT__prefetch_need_data) 
                                           | (IData)(vlSelfRef.__PVT__transmit_from_other_client))))));
    vlSelfRef.__PVT___T_182 = ((IData)(vlSelfRef.__PVT___GEN_13) 
                               & (((IData)(vlSelfRef.__PVT__req_acquire) 
                                   & ((IData)(__VdfgRegularize_hd4a67951_2_37) 
                                      | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                         >> 1U))) | (IData)(__PVT___T_159)));
    __PVT___T_161 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                     & (((IData)(vlSelfRef.__PVT__req_acquire) 
                         & ((IData)(__VdfgRegularize_hd4a67951_2_37) 
                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                               >> 1U))) | (IData)(__PVT___T_159)));
    __PVT___GEN_133 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                       & (IData)(__PVT___GEN_132));
    vlSelfRef.__PVT___GEN_217 = (1U & (((IData)(vlSelfRef.__PVT__req_channel) 
                                        >> 1U) | ((~ (IData)(vlSelfRef.__PVT___T_130)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT___GEN_237;
        vlSelfRef.__PVT___GEN_279 = vlSelfRef.__PVT___GEN_237;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT___GEN_237;
        __PVT___GEN_280 = ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                            ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                ? (IData)(vlSelfRef.__PVT___GEN_103)
                                : (IData)(vlSelfRef.__PVT___GEN_110))
                            : (IData)(vlSelfRef.__PVT___GEN_217));
    } else {
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT__w_grantfirst;
        vlSelfRef.__PVT___GEN_279 = vlSelfRef.__PVT__w_grant;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT__w_grantlast;
        __PVT___GEN_280 = vlSelfRef.__PVT__w_releaseack;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.__PVT__req_fromCmoHelper) {
            if (vlSelfRef.io_tasks_source_d_bits_isHit) {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_4)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_5)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
            } else {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = vlSelfRef.__PVT___GEN_4;
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = vlSelfRef.__PVT___GEN_5;
            }
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((0U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_4)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((1U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_5)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state));
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.io_tasks_source_d_bits_isHit) {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((((IData)(vlSelfRef.__PVT___GEN_4) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_4)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_4)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((((IData)(vlSelfRef.__PVT___GEN_5) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_5)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_5)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = vlSelfRef.__PVT___GEN_4;
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = vlSelfRef.__PVT___GEN_5;
        }
    } else {
        vlSelfRef.__PVT__new_self_meta_clientStates_0 
            = ((0U == (IData)(vlSelfRef.__PVT__iam))
                ? ((IData)(vlSelfRef.__PVT__req_acquire)
                    ? (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27)
                    : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                        ? ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit)
                            ? 1U : 0U) : ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit)
                                           ? (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state)
                                           : 0U))) : 
               ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                 ? ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36)
                     ? 0U : (IData)(__PVT___new_self_meta_clientStates_0_T_38))
                 : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                     ? (IData)(__PVT___new_self_meta_clientStates_0_T_38)
                     : (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45))));
        vlSelfRef.__PVT__new_self_meta_clientStates_1 
            = ((1U == (IData)(vlSelfRef.__PVT__iam))
                ? ((IData)(vlSelfRef.__PVT__req_acquire)
                    ? (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27)
                    : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                        ? ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit)
                            ? 1U : 0U) : ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit)
                                           ? (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state)
                                           : 0U))) : 
               ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                 ? ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36)
                     ? 0U : (IData)(__PVT___new_self_meta_clientStates_1_T_38))
                 : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                     ? (IData)(__PVT___new_self_meta_clientStates_1_T_38)
                     : (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45))));
    }
    if (vlSelfRef.__VdfgRegularize_hd4a67951_2_36) {
        vlSelfRef.__PVT___GEN_156 = ((0U != (IData)(vlSelfRef.__PVT__iam)) 
                                     & (IData)(__PVT___T_161));
        vlSelfRef.__PVT___GEN_159 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                           | ((~ (IData)(__PVT___T_161)) 
                                              | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
        __PVT___GEN_157 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                 | (~ (IData)(__PVT___T_161))));
        __PVT___GEN_158 = ((0U != (IData)(vlSelfRef.__PVT__iam))
                            ? ((IData)(__PVT___T_161)
                                ? (IData)(__PVT___GEN_133)
                                : (IData)(__PVT___GEN_132))
                            : (IData)(__PVT___GEN_132));
        vlSelfRef.__PVT___GEN_184 = ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_182)) 
                                         & (IData)(__PVT___GEN_157))
                                      : (IData)(__PVT___GEN_157));
    } else {
        vlSelfRef.__PVT___GEN_156 = __PVT___T_168;
        vlSelfRef.__PVT___GEN_159 = (1U & ((~ (IData)(__PVT___T_168)) 
                                           | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)));
        __PVT___GEN_157 = (1U & (~ (IData)(__PVT___T_168)));
        __PVT___GEN_158 = ((IData)(__PVT___T_168) ? 
                           ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                            & (IData)(__PVT___GEN_133))
                            : (IData)(__PVT___GEN_132));
        vlSelfRef.__PVT___GEN_184 = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19)) 
                                     & (IData)(__PVT___GEN_157));
    }
    vlSelfRef.__PVT___GEN_227 = (1U & ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                        ? ((~ (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_101))
                                        : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                                            ? (IData)(vlSelfRef.__PVT___GEN_125)
                                            : ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                               | (IData)(vlSelfRef.__PVT___GEN_184)))));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                 & (IData)(vlSelfRef.__PVT___GEN_159));
    __PVT___GEN_160 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                       & (IData)(__PVT___GEN_158));
    vlSelfRef.__PVT___GEN_185 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_36)
                                  ? ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((IData)(vlSelfRef.__PVT___T_182)
                                          ? (IData)(__PVT___GEN_160)
                                          : (IData)(__PVT___GEN_158))
                                      : (IData)(__PVT___GEN_158))
                                  : ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19)
                                      ? ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                         & (IData)(__PVT___GEN_160))
                                      : (IData)(__PVT___GEN_158)));
    vlSelfRef.__PVT___GEN_371 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)
                                      ? ((~ (((((IData)(vlSelfRef.__PVT__req_channel) 
                                                >> 1U) 
                                               & (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                              | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                             & (IData)(vlSelfRef.__PVT__probeAckDataThrough))) 
                                         & (IData)(__PVT___GEN_280))
                                      : ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_22)
                                          ? ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                             & (IData)(__PVT___GEN_280))
                                          : (IData)(__PVT___GEN_280)))
                                  : (IData)(__PVT___GEN_280));
    if (vlSelfRef.__VdfgRegularize_hd4a67951_2_28) {
        vlSelfRef.__PVT___GEN_386 = ((IData)(vlSelfRef.__PVT__w_probeackfirst) 
                                     | (IData)(__PVT__probeack_last));
        vlSelfRef.__PVT___GEN_387 = ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                     | ((IData)(__PVT__probeack_last) 
                                        & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last)));
        vlSelfRef.__PVT___GEN_388 = ((IData)(vlSelfRef.__PVT__w_probeack) 
                                     | ((IData)(__PVT__probeack_last) 
                                        & ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                           | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last))));
    } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_386 = vlSelfRef.__PVT___GEN_227;
        vlSelfRef.__PVT___GEN_387 = vlSelfRef.__PVT___GEN_227;
        vlSelfRef.__PVT___GEN_388 = vlSelfRef.__PVT___GEN_227;
    } else {
        vlSelfRef.__PVT___GEN_386 = vlSelfRef.__PVT__w_probeackfirst;
        vlSelfRef.__PVT___GEN_387 = vlSelfRef.__PVT__w_probeacklast;
        vlSelfRef.__PVT___GEN_388 = vlSelfRef.__PVT__w_probeack;
    }
}

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2__2(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__nestedReleaseDataSave;
    __PVT__nestedReleaseDataSave = 0;
    CData/*0:0*/ __PVT___io_tasks_source_d_bits_useBypass_T_5;
    __PVT___io_tasks_source_d_bits_useBypass_T_5 = 0;
    CData/*0:0*/ __PVT__nestedReleaseDirtyDataSave;
    __PVT__nestedReleaseDirtyDataSave = 0;
    CData/*0:0*/ __PVT___T_245;
    __PVT___T_245 = 0;
    CData/*0:0*/ __PVT___T_251;
    __PVT___T_251 = 0;
    // Body
    vlSelfRef.__PVT__nest_c_way_match = ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.io_status_bits_way) 
                                         == (IData)(vlSelfRef.io_status_bits_way));
    vlSelfRef.__PVT___GEN_347 = (1U & (((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter_2__DOT__chosenOH) 
                                          >> 2U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter_2_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_client_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_28)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientstag))));
    vlSelfRef.__PVT___GEN_345 = (1U & (((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb__DOT__chosenOH) 
                                          >> 2U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper) 
                                                  | (~ (IData)(vlSelfRef.__PVT___T_57)))
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                     | ((~ 
                                                         ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                          & ((IData)(vlSelfRef.__PVT__preferCache) 
                                                             & ((4U 
                                                                 == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                                | ((6U 
                                                                    == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                                   | (IData)(vlSelfRef.__PVT__prefetch_need_data)))))) 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_36)
                                                            ? 
                                                           ((1U 
                                                             != (IData)(vlSelfRef.__PVT__iam))
                                                             ? 
                                                            ((IData)(vlSelfRef.__PVT___T_182)
                                                              ? (IData)(vlSelfRef.__PVT___GEN_161)
                                                              : (IData)(vlSelfRef.__PVT___GEN_159))
                                                             : (IData)(vlSelfRef.__PVT___GEN_159))
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19)
                                                             ? (IData)(vlSelfRef.__PVT___GEN_161)
                                                             : (IData)(vlSelfRef.__PVT___GEN_159)))))))
                                           : (IData)(vlSelfRef.__PVT__s_wbselftag))));
    vlSelfRef.__PVT___T_246 = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT__chosen_reg) 
                                 >> 2U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT____VdfgRegularize_hae52cd36_0_10)) 
                               & (IData)(vlSelfRef.io_tasks_source_b_valid));
    __PVT___T_251 = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT__chosen_reg) 
                       >> 2U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT____VdfgRegularize_h20ebb837_0_10)) 
                     & (IData)(vlSelfRef.io_tasks_source_c_valid));
    vlSelfRef.__PVT___GEN_342 = (1U & (((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT__chosen_reg) 
                                          >> 2U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT____VdfgRegularize_h1ec93158_0_10)) 
                                        & (IData)(vlSelfRef.io_tasks_source_d_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? (IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                     | (5U 
                                                        == (IData)(vlSelfRef.__PVT__req_opcode)))))
                                           : (IData)(vlSelfRef.__PVT__s_execute))));
    vlSelfRef.__PVT___GEN_344 = (1U & ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH) 
                                         >> 2U) & (IData)(vlSelfRef.io_tasks_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? 
                                                  (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                    | (IData)(vlSelfRef.__PVT__req_opcode))))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.__PVT__req_channel))
                                                   ? 
                                                  ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                   | (~ (IData)(vlSelfRef.__PVT___T_78)))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                   | ((~ (IData)(
                                                                 (((0U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                                                   & (~ (IData)(vlSelfRef.__PVT___GEN_2))) 
                                                                  & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)))) 
                                                      & ((IData)(vlSelfRef.__PVT__req_acquire)
                                                          ? 
                                                         ((~ 
                                                           ((IData)(vlSelfRef.__PVT___T_143) 
                                                            & ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                               | (IData)(vlSelfRef.__PVT__preferCache)))) 
                                                          & (IData)(vlSelfRef.__PVT___GEN_185))
                                                          : (IData)(vlSelfRef.__PVT___GEN_185))))))
                                           : (IData)(vlSelfRef.__PVT__s_wbselfdir))));
    vlSelfRef.__PVT___GEN_346 = (1U & ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter_1__DOT__chosenOH) 
                                         >> 2U) & (IData)(vlSelfRef.io_tasks_client_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_101)
                                                   : 
                                                  (~ 
                                                   (((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.__PVT___GEN_24))) 
                                                    | ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10) 
                                                       & ((IData)(vlSelfRef.__PVT___GEN_24) 
                                                          >> 1U)))))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.__PVT__req_channel))
                                                   ? (IData)(vlSelfRef.__PVT___GEN_125)
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                   | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                      & (IData)(vlSelfRef.__PVT___GEN_184)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientsdir))));
    __PVT___T_245 = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT__chosen_reg) 
                       >> 2U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT____VdfgRegularize_h3b69c469_0_10)) 
                     & (IData)(vlSelfRef.io_tasks_source_a_valid));
    vlSelfRef.__PVT___T_258 = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT__chosen_reg) 
                                 >> 2U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT____VdfgRegularize_h5d7114fd_0_10)) 
                               & (IData)(vlSelfRef.io_tasks_sink_c_valid));
    vlSelfRef.__PVT__a_c_through = ((IData)(vlSelfRef.__PVT__req_channel) 
                                    & (((~ (IData)(vlSelfRef.__PVT__nest_c_way_match)) 
                                        & (IData)(vlSelfRef.__PVT___a_c_through_T_3)) 
                                       | (((~ (IData)(vlSelfRef.__PVT__nest_c_tag_match)) 
                                           & ((IData)(vlSelfRef.__PVT__nest_c_way_match) 
                                              & (((IData)(vlSelfRef.__PVT___T_143) 
                                                  & (IData)(vlSelfRef.__PVT__preferCache_latch)) 
                                                 | ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                    | ((IData)(vlSelfRef.__PVT__a_c_through_reg) 
                                                       | (IData)(vlSelfRef.__PVT__transmit_from_other_client_latch)))))) 
                                          | ((IData)(vlSelfRef.__PVT__nest_c_tag_match) 
                                             & ((IData)(vlSelfRef.__PVT__nest_c_way_match) 
                                                & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                   & (IData)(vlSelfRef.__PVT__a_do_release)))))));
    vlSelfRef.__PVT___GEN_339 = ((IData)(vlSelfRef.__PVT___T_246) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_227)
                                     : (IData)(vlSelfRef.__PVT__s_probe)));
    vlSelfRef.__PVT___GEN_341 = (1U & ((IData)(__PVT___T_251) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                           ? (1U & 
                                              ((2U 
                                                != 
                                                (6U 
                                                 & (IData)(vlSelfRef.__PVT__req_channel))) 
                                               | (~ 
                                                  ((~ (IData)(vlSelfRef.__PVT__will_probeack_through)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper))))))
                                           : (IData)(vlSelfRef.__PVT__s_probeack))));
    vlSelfRef.__PVT___GEN_340 = ((IData)(__PVT___T_251) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                     ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                         ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                             ? (IData)(vlSelfRef.__PVT___GEN_103)
                                             : (IData)(vlSelfRef.__PVT___GEN_110))
                                         : (IData)(vlSelfRef.__PVT___GEN_217))
                                     : (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.__PVT___GEN_337 = ((IData)(__PVT___T_245) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_237)
                                     : (IData)(vlSelfRef.__PVT__s_acquire)));
    vlSelfRef.__PVT___GEN_338 = (1U & ((IData)(__PVT___T_245) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__bypassPut)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))))
                                           : (IData)(vlSelfRef.__PVT__s_transferput))));
    vlSelfRef.__PVT___GEN_350 = (1U & ((IData)(vlSelfRef.__PVT___T_258)
                                        ? ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_273))
                                        : (IData)(vlSelfRef.__PVT___GEN_273)));
    __PVT__nestedReleaseDataSave = ((~ (IData)(vlSelfRef.__PVT__a_c_through)) 
                                    & ((IData)(vlSelfRef.__PVT___nestedReleaseDataSave_T_1) 
                                       & ((IData)(vlSelfRef.__PVT__nest_c_tag_match) 
                                          & ((IData)(vlSelfRef.__PVT__nest_c_way_match) 
                                             & (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.io_metaValid)))));
    vlSelfRef.__PVT___GEN_451 = ((IData)(__PVT__nestedReleaseDataSave) 
                                 | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)) 
                                    & (IData)(vlSelfRef.__PVT__nestC_save_flag)));
    __PVT__nestedReleaseDirtyDataSave = ((IData)(__PVT__nestedReleaseDataSave) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.io_reqDirty));
    __PVT___io_tasks_source_d_bits_useBypass_T_5 = 
        (1U & (~ ((IData)(vlSelfRef.__PVT__nestC_save_flag) 
                  | (IData)(__PVT__nestedReleaseDataSave))));
    vlSelfRef.__PVT___GEN_452 = ((IData)(__PVT__nestedReleaseDirtyDataSave) 
                                 | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)) 
                                    & (IData)(vlSelfRef.__PVT__nestC_saveDirty_flag)));
    vlSelfRef.__PVT__nestC_saveDirty = ((IData)(vlSelfRef.__PVT__nestC_saveDirty_flag) 
                                        | (IData)(__PVT__nestedReleaseDirtyDataSave));
    vlSelfRef.__PVT___T_293 = (((~ (IData)(vlSelfRef.__PVT__acquire_flag)) 
                                & (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_26)) 
                               & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last) 
                                  & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                     & ((~ (IData)(vlSelfRef.__PVT__nested_c_hit)) 
                                        & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                           & (IData)(__PVT___io_tasks_source_d_bits_useBypass_T_5))))));
    vlSelfRef.io_tasks_source_d_bits_useBypass = ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                       >> 1U))) 
                                                  & (((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.__PVT___GEN_3)) 
                                                         & (IData)(vlSelfRef.__PVT__req_needT))) 
                                                     & (((~ (IData)(vlSelfRef.__PVT__probe_dirty)) 
                                                         & (IData)(__PVT___io_tasks_source_d_bits_useBypass_T_5)) 
                                                        | ((IData)(vlSelfRef.__PVT__acquire_flag) 
                                                           & (7U 
                                                              != (IData)(vlSelfRef.io_tasks_source_a_bits_opcode))))));
    if (vlSelfRef.__VdfgRegularize_hd4a67951_2_28) {
        vlSelfRef.__PVT___GEN_392 = ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_277));
        vlSelfRef.__PVT___GEN_394 = ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_279));
        vlSelfRef.__PVT___GEN_393 = ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_278));
    } else {
        vlSelfRef.__PVT___GEN_392 = vlSelfRef.__PVT___GEN_277;
        vlSelfRef.__PVT___GEN_394 = vlSelfRef.__PVT___GEN_279;
        vlSelfRef.__PVT___GEN_393 = vlSelfRef.__PVT___GEN_278;
    }
}

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2__3(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hd4a67951_2_31 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_resps_sink_d_valid) 
                                                 & (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_419 = (1U & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD_io_resp_valid) 
                                        & (2U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s4_req_sinkId))) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ 
                                                     ((~ (IData)(vlSelfRef.__PVT__bypassPut)) 
                                                      & (0U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelfRef.__PVT__req_opcode))))) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))))
                                           : (IData)(vlSelfRef.__PVT__w_putwritten))));
    vlSelfRef.__PVT___GEN_411 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_32)
                                      ? ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last) 
                                         | (IData)(vlSelfRef.__PVT__w_grantlast))
                                      : (IData)(vlSelfRef.__PVT___GEN_393))
                                  : (IData)(vlSelfRef.__PVT___GEN_393));
}

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3__0(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__probe_dirty;
    __Vdly__probe_dirty = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_1;
    __Vdly__meta_reg_self_clientStates_1 = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_0;
    __Vdly__meta_reg_self_clientStates_0 = 0;
    // Body
    __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
    __Vdly__probe_dirty = vlSelfRef.__PVT__probe_dirty;
    if (vlSelfRef.__PVT__change_self_meta) {
        if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_toN) {
            __Vdly__meta_reg_self_clientStates_1 = 0U;
            __Vdly__meta_reg_self_clientStates_0 = 0U;
            vlSelfRef.__PVT__meta_reg_self_state = 0U;
        } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_toB) {
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_1))) {
                __Vdly__meta_reg_self_clientStates_1 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_0))) {
                __Vdly__meta_reg_self_clientStates_0 = 1U;
            }
            vlSelfRef.__PVT__meta_reg_self_state = 1U;
        } else {
            __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_5;
            __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_4;
            vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_3;
        }
        vlSelfRef.__PVT__meta_reg_self_hit = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_toN))) 
                                              && (IData)(vlSelfRef.io_tasks_source_d_bits_isHit));
        vlSelfRef.__PVT__meta_reg_self_dirty = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_c_set_dirty) 
                                                | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_set_dirty) 
                                                   | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_b_clr_dirty)) 
                                                      & (IData)(vlSelfRef.__PVT___GEN_2))));
    } else {
        __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_5;
        __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_4;
        vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_3;
        vlSelfRef.__PVT__meta_reg_self_hit = vlSelfRef.io_tasks_source_d_bits_isHit;
        if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__meta_reg_self_dirty = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
        }
    }
    if (vlSelfRef.__PVT__change_clients_meta_1) {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_1_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_12));
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_1_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_13));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = vlSelfRef.__PVT___GEN_12;
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = vlSelfRef.__PVT___GEN_13;
    }
    if (vlSelfRef.__PVT__change_clients_meta_0) {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_0_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_10));
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_clients_0_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_11));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = vlSelfRef.__PVT___GEN_10;
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = vlSelfRef.__PVT___GEN_11;
    }
    vlSelfRef.__PVT__nestC_saveDirty_flag = ((1U & 
                                              (~ (IData)(vlSymsp->TOP.reset))) 
                                             && (IData)(vlSelfRef.__PVT___GEN_452));
    vlSelfRef.__PVT__someClientHasProbeAckData = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                      && (IData)(vlSelfRef.__PVT___GEN_360)));
    vlSelfRef.__PVT__s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_337))
                                      : (IData)(vlSelfRef.__PVT___GEN_337)));
    vlSelfRef.__PVT__s_execute = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_342));
    vlSelfRef.__PVT__s_probe = ((IData)(vlSymsp->TOP.reset) 
                                | (IData)(vlSelfRef.__PVT___GEN_339));
    vlSelfRef.__PVT__w_grant = ((IData)(vlSymsp->TOP.reset) 
                                | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                    ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_32)
                                        ? (((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                            & (IData)(vlSelfRef.__PVT__req_size)) 
                                           | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last))
                                        : (IData)(vlSelfRef.__PVT___GEN_394))
                                    : (IData)(vlSelfRef.__PVT___GEN_394)));
    vlSelfRef.__PVT__w_probeackfirst = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_386));
    vlSelfRef.__PVT__promoteT_safe = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                          ? ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                             & (IData)(vlSelfRef.__PVT___GEN_284))
                                          : (IData)(vlSelfRef.__PVT___GEN_284)));
    vlSelfRef.__PVT__w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_32) 
                                            | (IData)(vlSelfRef.__PVT___GEN_392))
                                         : (IData)(vlSelfRef.__PVT___GEN_392)));
    vlSelfRef.__PVT__w_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_388));
    vlSelfRef.__PVT__w_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_418));
    vlSelfRef.__PVT__w_putwritten = ((IData)(vlSymsp->TOP.reset) 
                                     | (IData)(vlSelfRef.__PVT___GEN_419));
    vlSelfRef.__PVT__s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                       ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)
                                           ? (IData)(vlSelfRef.__PVT___GEN_341)
                                           : ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_22)) 
                                              & (IData)(vlSelfRef.__PVT___GEN_341)))
                                       : (IData)(vlSelfRef.__PVT___GEN_341)));
    vlSelfRef.__PVT__w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_411));
    vlSelfRef.__PVT__s_release = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_340));
    vlSelfRef.__PVT__w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                         ? ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (IData)(vlSelfRef.__PVT___GEN_371))
                                         : (IData)(vlSelfRef.__PVT___GEN_371)));
    vlSelfRef.__PVT__nestC_save_flag = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                        && (IData)(vlSelfRef.__PVT___GEN_451));
    vlSelfRef.__PVT__transmit_from_other_client_latch 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__transmit_from_other_client));
    vlSelfRef.__PVT__w_probeacklast = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_387));
    vlSelfRef.__PVT__s_transferput = ((IData)(vlSymsp->TOP.reset) 
                                      | (IData)(vlSelfRef.__PVT___GEN_338));
    vlSelfRef.__PVT__preferCache_latch = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                          && (IData)(vlSelfRef.__PVT__preferCache));
    vlSelfRef.__PVT__s_writerelease = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__PVT___T_258)
                                           ? ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                              | (IData)(vlSelfRef.__PVT___GEN_272))
                                           : (IData)(vlSelfRef.__PVT___GEN_272)));
    vlSelfRef.__PVT__nested_c_hit_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                         && ((1U & 
                                              (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG))) 
                                             && (IData)(vlSelfRef.__PVT__nested_c_hit)));
    vlSelfRef.__PVT__acquire_flag = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((1U & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG))) 
                                         && (IData)(vlSelfRef.__PVT___GEN_92)));
    vlSelfRef.__PVT__s_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                       ? ((IData)(vlSelfRef.__PVT___T_293)
                                           ? ((~ ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__bypassPut_latch_reg)))) 
                                              & (IData)(vlSelfRef.__PVT___GEN_343))
                                           : (IData)(vlSelfRef.__PVT___GEN_343))
                                       : (IData)(vlSelfRef.__PVT___GEN_343)));
    vlSelfRef.__PVT__w_sinkcack = ((IData)(vlSymsp->TOP.reset) 
                                   | (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC__DOT__io_taskack_valid_REG) 
                                       & (3U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC__DOT__io_taskack_bits_sink_REG))) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                          ? ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)) 
                                             & (IData)(vlSelfRef.__PVT___GEN_283))
                                          : (IData)(vlSelfRef.__PVT___GEN_283))));
    if (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_resps_sink_c_valid) 
         & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode))) {
        vlSelfRef.__PVT__io_tasks_sink_c_bits_bufIdx_r 
            = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_bufIdx;
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_3_valid) {
        vlSelfRef.__PVT__req_dirty = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_dirty;
        vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_needProbeAckData;
        vlSelfRef.__PVT__req_source = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source;
        vlSelfRef.__PVT__req_fromProbeHelper = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromProbeHelper;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__transmit_from_other_client_reg = 0U;
        vlSelfRef.__PVT__a_c_through_reg = 0U;
        vlSelfRef.__PVT__highest_perm_reg_reg = 0U;
    } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__transmit_from_other_client_reg 
            = vlSelfRef.__PVT___transmit_from_other_client_T_12;
        vlSelfRef.__PVT__a_c_through_reg = vlSelfRef.io_tasks_source_d_bits_isHit;
        vlSelfRef.__PVT__highest_perm_reg_reg = (((IData)(vlSelfRef.__PVT___highest_perm_T_2) 
                                                  > (IData)(vlSelfRef.__PVT___highest_perm_T_6))
                                                  ? 
                                                 ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_3)
                                                   : 0U)
                                                  : 
                                                 (((IData)(vlSelfRef.__PVT___highest_perm_T_3) 
                                                   > (IData)(vlSelfRef.__PVT___highest_perm_T_4))
                                                   ? (IData)(vlSelfRef.__PVT___highest_perm_T_3)
                                                   : (IData)(vlSelfRef.__PVT___highest_perm_T_4)));
    } else if (vlSelfRef.io_status_bits_will_free) {
        vlSelfRef.__PVT__transmit_from_other_client_reg = 0U;
        vlSelfRef.__PVT__a_c_through_reg = 0U;
        vlSelfRef.__PVT__highest_perm_reg_reg = 0U;
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__meta_reg_self_tag = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_clients_tag = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_clients_way = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__way_s2;
        vlSelfRef.__PVT__meta_reg_self_way = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Directory result was sent to mismatch MSHR(mshrId:3, resultId:%1#)\n    at MSHR.scala:66 assert(\n",0,
                      3,(((IData)((0U != (0xfU & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                                  >> 4U)))) 
                          << 2U) | (((IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelfRef.__PVT___T_5) 
                                                >> 2U)))) 
                                     << 1U) | (IData)(
                                                      (0U 
                                                       != 
                                                       (0xaU 
                                                        & (IData)(vlSelfRef.__PVT___T_5)))))));
    }
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_resps_sink_d_valid))
                                  ? (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                        | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                       | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                      | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                      ? (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_285))
                                  : (IData)(vlSelfRef.__PVT___GEN_285)));
    vlSelfRef.__PVT__gotDirty = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (((IData)(vlSelfRef.__PVT__req_valid) 
                                      & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_resps_sink_d_valid))
                                      ? (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                          | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                          ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_dirty)
                                          : (IData)(vlSelfRef.__PVT___GEN_292))
                                      : (IData)(vlSelfRef.__PVT___GEN_292)));
    vlSelfRef.__PVT__no_schedule_REG = ((IData)(vlSymsp->TOP.reset) 
                                        | (((((IData)(vlSelfRef.__PVT__s_wbselfdir) 
                                              & (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                             & (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                            & (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                           & (IData)(vlSelfRef.__PVT__meta_valid)));
    vlSelfRef.__PVT__inv_self_dir = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && (((IData)(vlSelfRef.__PVT__req_valid) 
                                          & (IData)(vlSelfRef.__PVT__sink_c_resp_valid))
                                          ? ((IData)(vlSelfRef.__PVT___T_310)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_27) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_290))
                                              : (IData)(vlSelfRef.__PVT___GEN_290))
                                          : (IData)(vlSelfRef.__PVT___GEN_290)));
    if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            vlSelfRef.__PVT__sink = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_sink;
        }
    }
    vlSelfRef.__PVT__bad_grant = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (((IData)(vlSelfRef.__PVT__req_valid) 
                                       & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_resps_sink_d_valid))
                                       ? (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                             | (5U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                            | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                           ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_denied)
                                           : (IData)(vlSelfRef.__PVT___GEN_288))
                                       : (IData)(vlSelfRef.__PVT___GEN_288)));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_3_valid) {
        vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_bufIdx;
    } else if (((IData)(vlSelfRef.__PVT__req_valid) 
                & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            if ((0U != (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))) {
                vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_bufIdx;
            }
        }
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__probe_dirty = 0U;
        vlSelfRef.__PVT__a_do_release = 0U;
        vlSelfRef.__PVT__a_do_probe = 0U;
        vlSelfRef.__PVT__probes_done = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_reg_0 = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_reg_1 = 0U;
        vlSelfRef.__PVT__releaseThrough = 0U;
        vlSelfRef.__PVT__releaseDrop = 0U;
        vlSelfRef.__PVT__probeAckDataThrough = 0U;
        vlSelfRef.__PVT__probeAckDataDrop = 0U;
        vlSelfRef.__PVT__probeAckDataSave = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSelfRef.__PVT__sink_c_resp_valid))) {
            __Vdly__probe_dirty = (1U & (((IData)(vlSelfRef.__PVT__probe_dirty) 
                                          | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                         | (IData)(vlSelfRef.__PVT__nested_c_hit)));
            vlSelfRef.__PVT__probes_done = vlSelfRef.__PVT___probeack_last_T;
        } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) {
            __Vdly__probe_dirty = 0U;
            vlSelfRef.__PVT__probes_done = 0U;
        }
        if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__a_do_release = ((1U & 
                                              (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 2U))) 
                                             && ((~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17)) 
                                                    & (IData)(vlSelfRef.__PVT___T_130))));
            vlSelfRef.__PVT__a_do_probe = ((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 2U))) 
                                           && ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                               & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17)) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_36)
                                                      ? 
                                                     ((1U 
                                                       != (IData)(vlSelfRef.__PVT__iam))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT___T_182) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_156))
                                                       : (IData)(vlSelfRef.__PVT___GEN_156))
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19) 
                                                      | (IData)(vlSelfRef.__PVT___GEN_156))))));
        }
        if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSelfRef.__PVT__sinkc_resp_last))) {
            if ((0x100U & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_0 
                    = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                          >> 8U)))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_1 
                    = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
        }
        if (vlSelfRef.io_status_bits_will_free) {
            vlSelfRef.__PVT__releaseThrough = 0U;
            vlSelfRef.__PVT__releaseDrop = 0U;
            vlSelfRef.__PVT__probeAckDataThrough = 0U;
            vlSelfRef.__PVT__probeAckDataDrop = 0U;
            vlSelfRef.__PVT__probeAckDataSave = 0U;
        } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) {
            if (vlSelfRef.__PVT__req_fromCmoHelper) {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                       & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                          & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
                vlSelfRef.__PVT__probeAckDataDrop = 
                    (0U == (IData)(vlSelfRef.__PVT__req_param));
                vlSelfRef.__PVT__probeAckDataSave = 
                    ((IData)(vlSelfRef.__PVT___probeAckDataSave_T_4) 
                     & (IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_8));
            } else {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = vlSelfRef.__PVT___GEN_309;
                vlSelfRef.__PVT__probeAckDataDrop = vlSelfRef.__PVT___GEN_310;
                vlSelfRef.__PVT__probeAckDataSave = vlSelfRef.__PVT___GEN_311;
            }
        }
    }
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    vlSelfRef.__PVT__REG = (1U & ((IData)(vlSymsp->TOP.reset) 
                                  | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)) 
                                     | ((IData)(vlSelfRef.__PVT__req_valid) 
                                        & (~ (IData)(vlSelfRef.__PVT__meta_valid))))));
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:225 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_1)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: L3 Release should always hit: mshrId:[3] addr: [%x]\n    at MSHR.scala:479 assert(RegNext(!meta_valid || !req.fromC || req.fromCmoHelper || clients_meta(iam).hit),\n",0,
                      5,(((IData)(vlSelfRef.__PVT__req_tag) 
                          << 3U) | ((IData)(vlSelfRef.__PVT__req_set) 
                                    << 1U)));
    }
    if (VL_UNLIKELY(((((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) 
                         & (2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                        & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                       & (~ (IData)(vlSelfRef.__PVT___T_78))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((1U == (IData)(vlSelfRef.__PVT___GEN_3)) 
                           & (1U == (IData)(vlSelfRef.__PVT__req_param))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Probe not supported: [self: %1#] [req: %1#]\n\n    at MSHR.scala:693 assert(probe_is_report(self_meta.state, req.param),\n",0,
                      2,vlSelfRef.__PVT___GEN_3,3,(IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_481) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_11)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_10) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_10))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:703 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_10,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    vlSelfRef.__PVT__REG_1 = (1U & ((((~ (IData)(vlSelfRef.__PVT__meta_valid)) 
                                      | (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                            >> 2U))) 
                                     | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                    | (IData)(vlSelfRef.__PVT___GEN_28)));
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_481) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_13)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_12) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_12))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:703 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_12,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_480) 
                        & (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                              >> 1U))) & (~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((5U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                           | (IData)(vlSelfRef.__PVT__req_preferCache)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Hint should always preferCache!\n    at MSHR.scala:848 assert(req.opcode =/= Hint || req.preferCache, \"Hint should always preferCache!\")\n",0);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__req_valid) 
                       & ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_21) 
                          & ((IData)(vlSelfRef.__PVT__client_dir_conflict) 
                             & (IData)(vlSelfRef.__PVT__probe_helper_finish)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ (IData)(vlSelfRef.__PVT__REG_2))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Error L3: meta still conflict when probe helper finish! mshrId: 3\n    at MSHR.scala:954 assert(RegNext(!clients_meta_busy, true.B),\n",0);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT___T_246) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (0U == (IData)(vlSelfRef.__PVT__probe_clients))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid probe task\n\n    at MSHR.scala:1276 assert(io.tasks.source_b.bits.clients =/= 0.U, \"Invalid probe task\\n\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_3)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:1472 assert(RegNext(!req_valid || !io.alloc.valid, true.B)) // TODO: support fully-pipelined\n",0);
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__client_dir_conflict = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_21) 
                                                & (IData)(vlSelfRef.__PVT__clients_meta_busy));
        vlSelfRef.__PVT__probe_clients = ((((IData)(vlSelfRef.__PVT___probe_clients_T_3)
                                             ? (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__req_channel))
                                                 ? 
                                                ((~ 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.__PVT__iam)) 
                                                   & (IData)(vlSelfRef.__PVT__req_acquire))) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_13) 
                                                    & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                        & (0U 
                                                           != (IData)(vlSelfRef.__PVT___GEN_12))) 
                                                       | ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                          | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                             >> 1U)))))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? (IData)(vlSelfRef.__PVT___clients_have_T_T_3)
                                                   : (IData)(vlSelfRef.__PVT___GEN_13))
                                                  : (IData)(vlSelfRef.__PVT___GEN_13)))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.__PVT___probe_clients_T_3)
                                            ? (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0)
                                            : ((1U 
                                                & (IData)(vlSelfRef.__PVT__req_channel))
                                                ? (
                                                   (~ 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.__PVT__iam)) 
                                                     & (IData)(vlSelfRef.__PVT__req_acquire))) 
                                                   & ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                      & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                                         | ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                                                               >> 1U)))))
                                                : ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__req_param))
                                                     ? (IData)(vlSelfRef.__PVT___clients_have_T_T_1)
                                                     : (IData)(vlSelfRef.__PVT___GEN_11))
                                                    : (IData)(vlSelfRef.__PVT___GEN_11)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__bypassPut_latch_reg = vlSelfRef.__PVT__bypassPut;
    } else if (vlSelfRef.io_status_bits_will_free) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    }
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_3_valid) {
        vlSelfRef.__PVT__req_size = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_size;
        vlSelfRef.__PVT__req_off = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_off;
        vlSelfRef.__PVT__req_preferCache = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_preferCache;
        vlSelfRef.__PVT__req_set = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_set;
        vlSelfRef.__PVT__req_tag = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_tag;
        vlSelfRef.__PVT__req_opcode = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_opcode;
        vlSelfRef.__PVT__req_fromCmoHelper = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromCmoHelper;
        vlSelfRef.__PVT__iam = ((0U == (IData)(vlSelfRef.__PVT__clientBitOH))
                                 ? 2U : (1U & ((IData)(vlSelfRef.__PVT__clientBitOH) 
                                               >> 1U)));
        vlSelfRef.__PVT__req_channel = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_channel;
        vlSelfRef.__PVT__req_param = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_param;
    }
    vlSelfRef.__PVT__meta_reg_self_clientStates_1 = __Vdly__meta_reg_self_clientStates_1;
    vlSelfRef.__PVT__meta_reg_self_clientStates_0 = __Vdly__meta_reg_self_clientStates_0;
    vlSelfRef.__PVT__probe_dirty = __Vdly__probe_dirty;
    vlSelfRef.__PVT__s_writeprobe = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                         ? ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)) 
                                            & (IData)(vlSelfRef.__PVT___GEN_350))
                                         : (IData)(vlSelfRef.__PVT___GEN_350)));
    vlSelfRef.__PVT___GEN_92 = (1U & ((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                      | (IData)(vlSelfRef.__PVT__acquire_flag)));
    vlSelfRef.io_tasks_source_e_valid = ((~ (IData)(vlSelfRef.__PVT__s_grantack)) 
                                         & (IData)(vlSelfRef.__PVT__w_grantfirst));
    vlSelfRef.__PVT__no_wait = ((IData)(vlSelfRef.__PVT__w_grantlast) 
                                & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                   & ((IData)(vlSelfRef.__PVT__w_grantack) 
                                      & ((IData)(vlSelfRef.__PVT__w_releaseack) 
                                         & ((IData)(vlSelfRef.__PVT__w_putwritten) 
                                            & (IData)(vlSelfRef.__PVT__w_sinkcack))))));
    vlSelfRef.__PVT___probeAckDataSave_T_4 = (1U & 
                                              (~ (IData)(vlSelfRef.__PVT__probeAckDataDrop)));
    vlSelfRef.__PVT___new_self_meta_dirty_T_8 = (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)));
    vlSelfRef.__PVT___new_self_meta_dirty_T_9 = ((~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)) 
                                                 & (IData)(vlSelfRef.__PVT__req_fromProbeHelper));
    vlSelfRef.__PVT__releaseSave = (1U & ((~ (IData)(vlSelfRef.__PVT__releaseThrough)) 
                                          & (~ (IData)(vlSelfRef.__PVT__releaseDrop))));
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37 
        = ((IData)(vlSelfRef.__PVT__a_do_probe) & (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit));
    vlSelfRef.__PVT___new_self_meta_clientStates_1_T_37 
        = ((IData)(vlSelfRef.__PVT__a_do_probe) & (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit));
    vlSelfRef.__PVT___new_self_meta_dirty_T_15 = ((IData)(vlSelfRef.__PVT__gotDirty) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    vlSelfRef.__PVT__REG_2 = (1U & ((IData)(vlSymsp->TOP.reset) 
                                    | (~ (IData)(vlSelfRef.__PVT__clients_meta_busy))));
    vlSelfRef.__PVT__s_wbclientstag = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_347));
    vlSelfRef.__PVT__s_wbselftag = ((IData)(vlSymsp->TOP.reset) 
                                    | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_28)
                                        ? ((IData)(vlSelfRef.__PVT___T_310)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_27) 
                                               | (IData)(vlSelfRef.__PVT___GEN_345))
                                            : (IData)(vlSelfRef.__PVT___GEN_345))
                                        : (IData)(vlSelfRef.__PVT___GEN_345)));
    vlSelfRef.__PVT__s_wbselfdir = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_344));
    vlSelfRef.__PVT__s_wbclientsdir = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_346));
    vlSelfRef.__PVT__meta_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                   && ((1U & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                       && (IData)(vlSelfRef.io_metaValid)));
    vlSelfRef.__PVT__probe_helper_finish = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                            && ((1U 
                                                 & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                && (IData)(vlSelfRef.__PVT___GEN_322)));
    vlSelfRef.__PVT__REG_3 = (1U & ((IData)(vlSymsp->TOP.reset) 
                                    | ((~ (IData)(vlSelfRef.__PVT__req_valid)) 
                                       | (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_3_valid)))));
    vlSelfRef.io_status_bits_will_free = ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & ((IData)(vlSelfRef.__PVT__s_execute) 
                                             & ((((IData)(vlSelfRef.__PVT__s_probeack) 
                                                  & ((IData)(vlSelfRef.__PVT__no_schedule_REG) 
                                                     & (IData)(vlSelfRef.__PVT__s_grantack))) 
                                                 & (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                                & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                   & (IData)(vlSelfRef.__PVT__s_writeprobe)))));
    vlSelfRef.__PVT__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT___GEN_430));
    vlSelfRef.__PVT___transmit_from_other_client_T_2 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                           >> 1U))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_36 = ((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                      >> 1U))) 
                                                 & (4U 
                                                    != (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___io_status_bits_nestB_T_7 = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__w_grantfirst)) 
                                                     | ((~ (IData)(vlSelfRef.__PVT__probe_helper_finish)) 
                                                        & (IData)(vlSelfRef.__PVT__client_dir_conflict))));
    vlSelfRef.__PVT__can_start = (1U & ((~ (IData)(vlSelfRef.__PVT__client_dir_conflict)) 
                                        | (IData)(vlSelfRef.__PVT__probe_helper_finish)));
    vlSelfRef.__PVT___new_self_meta_state_T_34 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                                   & (IData)(vlSelfRef.__PVT__promoteT_safe))
                                                   ? 2U
                                                   : 3U);
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33 
        = ((IData)(vlSelfRef.__PVT__req_acquire) | 
           (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                         >> 1U))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_21 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                                 & (IData)(vlSelfRef.__PVT__req_acquire));
    vlSelfRef.__PVT___probe_clients_T_3 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                           & (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___GEN_234 = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 2U)) 
                                       | ((~ (IData)(vlSelfRef.__PVT__req_opcode)) 
                                          | (IData)(vlSelfRef.__PVT__req_fromCmoHelper))));
    vlSelfRef.__PVT___client_shrink_perm_T_4 = ((1U 
                                                 == (IData)(vlSelfRef.__PVT__req_param)) 
                                                | ((2U 
                                                    == (IData)(vlSelfRef.__PVT__req_param)) 
                                                   | (5U 
                                                      == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__PVT___client_shrink_perm_T_10 = ((0U 
                                                  == (IData)(vlSelfRef.__PVT__req_param)) 
                                                 | (4U 
                                                    == (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___GEN_334 = ((6U == (IData)(vlSelfRef.__PVT__req_opcode))
                                  ? (((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                                      & (7U == (IData)(vlSelfRef.__PVT__req_opcode)))
                                      ? 4U : 5U) : 
                                 ((5U == (IData)(vlSelfRef.__PVT__req_opcode))
                                   ? 2U : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                                            ? 1U : 
                                           ((3U == (IData)(vlSelfRef.__PVT__req_opcode))
                                             ? 1U : 
                                            ((2U == (IData)(vlSelfRef.__PVT__req_opcode))
                                              ? 1U : 0U)))));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | ((IData)(vlSelfRef.__PVT__req_acquire) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
}

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3__1(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__meta_no_clients;
    __PVT__meta_no_clients = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T;
    __PVT___highest_perm_except_me_T = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T_6;
    __PVT___highest_perm_except_me_T_6 = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T_12;
    __PVT___highest_perm_except_me_T_12 = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T_14;
    __PVT___highest_perm_except_me_T_14 = 0;
    CData/*1:0*/ __PVT__highest_perm_except_me;
    __PVT__highest_perm_except_me = 0;
    CData/*0:0*/ __PVT__replace_need_release;
    __PVT__replace_need_release = 0;
    CData/*0:0*/ __PVT__prefetch_miss_need_probe;
    __PVT__prefetch_miss_need_probe = 0;
    CData/*0:0*/ __PVT___T_260;
    __PVT___T_260 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_0_T_38;
    __PVT___new_self_meta_clientStates_0_T_38 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_1_T_38;
    __PVT___new_self_meta_clientStates_1_T_38 = 0;
    CData/*0:0*/ __PVT__nested_client_match;
    __PVT__nested_client_match = 0;
    CData/*0:0*/ __PVT___GEN_124;
    __PVT___GEN_124 = 0;
    CData/*0:0*/ __PVT___GEN_132;
    __PVT___GEN_132 = 0;
    CData/*0:0*/ __PVT___T_159;
    __PVT___T_159 = 0;
    CData/*0:0*/ __PVT___T_161;
    __PVT___T_161 = 0;
    CData/*0:0*/ __PVT___GEN_133;
    __PVT___GEN_133 = 0;
    CData/*0:0*/ __PVT___T_168;
    __PVT___T_168 = 0;
    CData/*0:0*/ __PVT___GEN_157;
    __PVT___GEN_157 = 0;
    CData/*0:0*/ __PVT___GEN_158;
    __PVT___GEN_158 = 0;
    CData/*0:0*/ __PVT___GEN_160;
    __PVT___GEN_160 = 0;
    CData/*0:0*/ __PVT___GEN_280;
    __PVT___GEN_280 = 0;
    CData/*0:0*/ __PVT___will_save_probeack_T_2;
    __PVT___will_save_probeack_T_2 = 0;
    CData/*0:0*/ __PVT__probeack_last;
    __PVT__probeack_last = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_5;
    __VdfgRegularize_hd4a67951_2_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_30;
    __VdfgRegularize_hd4a67951_2_30 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_35;
    __VdfgRegularize_hd4a67951_2_35 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_37;
    __VdfgRegularize_hd4a67951_2_37 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_39;
    __VdfgRegularize_hd4a67951_2_39 = 0;
    // Body
    vlSelfRef.__PVT__client_set_match = ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6.__PVT__req_set) 
                                         == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.__PVT__nest_c_tag_match = ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_tag) 
                                         == (IData)(vlSelfRef.__PVT__req_tag));
    vlSelfRef.__PVT___probeack_last_T = ((IData)(vlSelfRef.__PVT__probes_done) 
                                         | ((2U & (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                     >> 8U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                >> 8U))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_32 = ((4U 
                                                  == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                 | ((5U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                    | ((1U 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                       | (0U 
                                                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_33 = (1U 
                                                 & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode) 
                                                    | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData)));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_22 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                     >> 1U) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                                       | ((IData)(vlSelfRef.__PVT__probeAckDataThrough) 
                                                          & (5U 
                                                             != (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param))))));
    vlSelfRef.__PVT___T_40 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_set) 
                              == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.io_tasks_source_b_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_probe)) 
                                            & (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.io_tasks_sink_c_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_enable) 
                                       & ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                          | ((~ (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                             & ((~ (IData)(vlSelfRef.__PVT__releaseSave)) 
                                                | (IData)(vlSelfRef.__PVT__s_release)))));
    vlSelfRef.io_tasks_source_a_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_enable) 
                                         & (((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                             | (~ (IData)(vlSelfRef.__PVT__s_transferput))) 
                                            & ((IData)(vlSelfRef.__PVT__s_probe) 
                                               & ((IData)(vlSelfRef.__PVT__s_release) 
                                                  & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                                     & (IData)(vlSelfRef.__PVT__can_start))))));
    vlSelfRef.io_tasks_source_d_valid = ((~ (IData)(vlSelfRef.__PVT__s_execute)) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_enable) 
                                            & ((IData)(vlSelfRef.__PVT__can_start) 
                                               & ((IData)(vlSelfRef.__PVT__w_grant) 
                                                  & ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                                     & ((IData)(vlSelfRef.__PVT__w_sinkcack) 
                                                        & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                           & (IData)(vlSelfRef.__PVT__w_probeacklast))))))));
    vlSelfRef.io_tasks_source_c_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_release)) 
                                            | ((~ (IData)(vlSelfRef.__PVT__s_probeack)) 
                                               & ((IData)(vlSelfRef.__PVT__s_writerelease) 
                                                  & ((IData)(vlSelfRef.__PVT__w_probeack) 
                                                     & (IData)(vlSelfRef.__PVT__w_sinkcack))))));
    __VdfgRegularize_hd4a67951_2_30 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_enable) 
                                       & ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & (IData)(vlSelfRef.__PVT__can_start)));
    vlSelfRef.__PVT___nestedReleaseDataSave_T_1 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_c_status_nestedReleaseData) 
                                                   & ((IData)(vlSelfRef.__PVT__req_valid) 
                                                      & ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_set) 
                                                         == (IData)(vlSelfRef.__PVT__req_set))));
    vlSelfRef.io_metaValid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) 
                              | (IData)(vlSelfRef.__PVT__meta_valid));
    vlSelfRef.__PVT___GEN_285 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_292 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_290 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__inv_self_dir));
    vlSelfRef.__PVT___GEN_288 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__bad_grant));
    vlSelfRef.__PVT___GEN_284 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__promoteT_safe));
    vlSelfRef.__PVT___GEN_480 = ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                     >> 2U)) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG));
    vlSelfRef.__PVT___GEN_273 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__s_writeprobe));
    vlSelfRef.__PVT___T_5 = (0xfU & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                      >> 4U) | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg)));
    vlSelfRef.__PVT__clientBitOH = ((2U & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                               >> 8U)) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                             >> 8U)));
    vlSelfRef.__PVT__sink_c_resp_valid = ((~ (IData)(vlSelfRef.__PVT__w_probeacklast)) 
                                          & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_resps_sink_c_valid));
    vlSelfRef.__PVT___GEN_430 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_3_valid) 
                                 | ((~ (IData)(vlSelfRef.io_status_bits_will_free)) 
                                    & (IData)(vlSelfRef.__PVT__req_valid)));
    vlSelfRef.__PVT___GEN_322 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_b_status_probeHelperFinish) 
                                     & (IData)(vlSelfRef.__PVT__client_set_match))) 
                                 | (IData)(vlSelfRef.__PVT__probe_helper_finish));
    __PVT__probeack_last = ((IData)(vlSelfRef.__PVT___probeack_last_T) 
                            == (IData)(vlSelfRef.__PVT__probe_clients));
    __PVT__nested_client_match = (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_tag) 
                                   == ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
                                        ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag)
                                        : (IData)(vlSelfRef.__PVT__meta_reg_clients_tag))) 
                                  & (IData)(vlSelfRef.__PVT___T_40));
    vlSelfRef.io_tasks_client_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                                 & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                          & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselfdir)) 
                                          & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_client_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                                 & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.__PVT___GEN_481 = ((IData)(vlSelfRef.__PVT___GEN_480) 
                                 & ((IData)(vlSelfRef.__PVT__req_channel) 
                                    >> 1U));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_272 = vlSelfRef.__PVT___GEN_234;
        vlSelfRef.__PVT___GEN_283 = vlSelfRef.__PVT___GEN_234;
        vlSelfRef.io_status_bits_way = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
        vlSelfRef.io_tasks_source_d_bits_isHit = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__hit_s2;
    } else {
        vlSelfRef.__PVT___GEN_272 = vlSelfRef.__PVT__s_writerelease;
        vlSelfRef.__PVT___GEN_283 = vlSelfRef.__PVT__w_sinkcack;
        vlSelfRef.io_status_bits_way = vlSelfRef.__PVT__meta_reg_self_way;
        vlSelfRef.io_tasks_source_d_bits_isHit = vlSelfRef.__PVT__meta_reg_self_hit;
    }
    vlSelfRef.__PVT___GEN_103 = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                                          & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
    vlSelfRef.__PVT___T_57 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                    & (IData)(vlSelfRef.__PVT__req_opcode)));
    __VdfgRegularize_hd4a67951_2_35 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                    >> 1U)))));
    __VdfgRegularize_hd4a67951_2_37 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                             | (IData)(vlSelfRef.__PVT__req_needT)));
    vlSelfRef.__PVT___a_c_through_T_3 = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                         & (IData)(vlSelfRef.__PVT__nest_c_tag_match));
    vlSelfRef.__PVT___T_143 = (1U & (~ ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                        & (7U == (IData)(vlSelfRef.__PVT__req_opcode)))));
    vlSelfRef.__PVT__nested_c_hit = (((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                      & (((IData)(vlSelfRef.__PVT__meta_valid) 
                                          & ((IData)(vlSelfRef.__PVT__req_channel) 
                                             & (IData)(vlSelfRef.__PVT___T_40))) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT____VdfgRegularize_h3add2528_14_0) 
                                            & ((IData)(vlSelfRef.__PVT__req_tag) 
                                               == (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_tag))))) 
                                     | (IData)(vlSelfRef.__PVT__nested_c_hit_reg));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_8 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT___GEN_2 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
    } else {
        vlSelfRef.__PVT___GEN_8 = vlSelfRef.__PVT__meta_reg_self_tag;
        vlSelfRef.__PVT___GEN_2 = vlSelfRef.__PVT__meta_reg_self_dirty;
    }
    vlSelfRef.__PVT___new_self_meta_dirty_T = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                               & (IData)(vlSelfRef.__PVT___GEN_2));
    vlSelfRef.__PVT___new_self_meta_dirty_T_13 = ((IData)(vlSelfRef.__PVT___GEN_2) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_0;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_1;
    } else {
        vlSelfRef.__PVT___GEN_4 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
        vlSelfRef.__PVT___GEN_5 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    }
    __PVT__meta_no_clients = ((0U == (IData)(vlSelfRef.__PVT___GEN_4)) 
                              & (0U == (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT___GEN_3 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_state)
                                : (IData)(vlSelfRef.__PVT__meta_reg_self_state));
    vlSelfRef.__PVT___T_78 = ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                              | (((IData)(vlSelfRef.__PVT___GEN_3) 
                                  >> 1U) & (1U == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_38 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_3) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.__PVT__req_param))));
    __PVT__replace_need_release = (((IData)(vlSelfRef.__PVT___GEN_3) 
                                    > (((IData)(vlSelfRef.__PVT___GEN_4) 
                                        > (IData)(vlSelfRef.__PVT___GEN_5))
                                        ? (IData)(vlSelfRef.__PVT___GEN_4)
                                        : (IData)(vlSelfRef.__PVT___GEN_5))) 
                                   | ((IData)(vlSelfRef.__PVT___GEN_2) 
                                      & ((1U == (IData)(vlSelfRef.__PVT___GEN_3)) 
                                         | (3U == (IData)(vlSelfRef.__PVT___GEN_3)))));
    if (vlSelfRef.io_tasks_source_d_bits_isHit) {
        __PVT___highest_perm_except_me_T = vlSelfRef.__PVT___GEN_3;
        vlSelfRef.__PVT___highest_perm_T_2 = vlSelfRef.__PVT___GEN_3;
    } else {
        __PVT___highest_perm_except_me_T = 0U;
        vlSelfRef.__PVT___highest_perm_T_2 = 0U;
    }
    __VdfgRegularize_hd4a67951_2_5 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                            | (~ ((IData)(vlSelfRef.__PVT___GEN_3) 
                                                  >> 1U))));
    vlSelfRef.__PVT__change_self_meta = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                         & (((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                             & (IData)(vlSelfRef.__PVT___T_40)) 
                                            & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_nestedwb_tag) 
                                               == (IData)(vlSelfRef.__PVT___GEN_8))));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_12 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_0_state;
    } else {
        vlSelfRef.__PVT___GEN_12 = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
    }
    vlSelfRef.__PVT___GEN_24 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_12)
                                 : (IData)(vlSelfRef.__PVT___GEN_10));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_13 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_11 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_0_hit;
    } else {
        vlSelfRef.__PVT___GEN_13 = vlSelfRef.__PVT__meta_reg_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_11 = vlSelfRef.__PVT__meta_reg_clients_states_0_hit;
    }
    vlSelfRef.__PVT___GEN_28 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_13)
                                 : (IData)(vlSelfRef.__PVT___GEN_11));
    if (vlSelfRef.__PVT___GEN_13) {
        vlSelfRef.__PVT___clients_have_T_T_3 = ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                >> 1U);
        vlSelfRef.__PVT___highest_perm_T_4 = vlSelfRef.__PVT___GEN_12;
    } else {
        vlSelfRef.__PVT___clients_have_T_T_3 = 0U;
        vlSelfRef.__PVT___highest_perm_T_4 = 0U;
    }
    vlSelfRef.__PVT__clients_meta_busy = (((~ (IData)(vlSelfRef.__PVT___GEN_11)) 
                                           & (0U != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                          | ((~ (IData)(vlSelfRef.__PVT___GEN_13)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT___GEN_12))));
    vlSelfRef.__PVT___clients_have_T_T_1 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                                            & ((IData)(vlSelfRef.__PVT___GEN_10) 
                                               >> 1U));
    vlSelfRef.__PVT___GEN_101 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_13)) 
                                       & (~ (IData)(vlSelfRef.__PVT___GEN_11))));
    vlSelfRef.__PVT___transmit_from_other_client_T_12 
        = ((((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (1U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_13)) | 
           (((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (0U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_11)));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_17 = ((5U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_13) 
                                                    | (IData)(vlSelfRef.__PVT___GEN_11)));
    vlSelfRef.__PVT___highest_perm_T_3 = ((IData)(vlSelfRef.__PVT___GEN_11)
                                           ? (IData)(vlSelfRef.__PVT___GEN_10)
                                           : 0U);
    __PVT___GEN_124 = (1U & (~ ((IData)(vlSelfRef.__PVT___GEN_11) 
                                | (IData)(vlSelfRef.__PVT___GEN_13))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_28 = ((IData)(vlSelfRef.__PVT__req_valid) 
                                                 & (IData)(vlSelfRef.__PVT__sink_c_resp_valid));
    vlSelfRef.__PVT__sinkc_resp_last = ((IData)(vlSelfRef.__PVT__sink_c_resp_valid) 
                                        & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_26 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                                 & (IData)(__PVT__probeack_last));
    vlSelfRef.__PVT__change_clients_meta_0 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_10)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__PVT__change_clients_meta_1 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_12)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_19 = ((IData)(vlSelfRef.__PVT___GEN_13) 
                                                 & (((IData)(vlSelfRef.__PVT___GEN_12) 
                                                     >> 1U) 
                                                    | (IData)(__VdfgRegularize_hd4a67951_2_35)));
    __PVT___T_168 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                     & (((IData)(vlSelfRef.__PVT___GEN_10) 
                         >> 1U) | (IData)(__VdfgRegularize_hd4a67951_2_35)));
    vlSelfRef.io_status_bits_will_save_data = ((IData)(vlSelfRef.__PVT__req_channel) 
                                               & ((IData)(vlSelfRef.__PVT___T_143) 
                                                  & ((IData)(vlSelfRef.__PVT__preferCache_latch) 
                                                     | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
    vlSelfRef.__PVT__req_promoteT = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                     & ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                                         ? ((IData)(__PVT__meta_no_clients) 
                                            & (3U == (IData)(vlSelfRef.__PVT___GEN_3)))
                                         : ((IData)(vlSelfRef.__PVT__gotT) 
                                            & (IData)(vlSelfRef.__PVT__promoteT_safe))));
    vlSelfRef.__PVT___GEN_110 = (1U & (~ ((IData)(vlSelfRef.__PVT___T_57) 
                                          & ((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                             & (IData)(__PVT__replace_need_release)))));
    __PVT___highest_perm_except_me_T_12 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                            & (1U == (IData)(vlSelfRef.__PVT__iam)))
                                            ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    vlSelfRef.__PVT__clients_have_T = ((IData)(vlSelfRef.__PVT___clients_have_T_T_3) 
                                       | (IData)(vlSelfRef.__PVT___clients_have_T_T_1));
    vlSelfRef.__PVT__transmit_from_other_client = (
                                                   (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                   & ((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_12) 
                                                      | (IData)(vlSelfRef.__PVT__transmit_from_other_client_reg)));
    vlSelfRef.__PVT___GEN_418 = (1U & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_valid) 
                                        & (3U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_bits_sink))) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))))
                                           : (IData)(vlSelfRef.__PVT__w_grantack))));
    __PVT___highest_perm_except_me_T_6 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                           & (0U == (IData)(vlSelfRef.__PVT__iam)))
                                           ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_3));
    vlSelfRef.__PVT___highest_perm_T_6 = (((IData)(vlSelfRef.__PVT___highest_perm_T_3) 
                                           > (IData)(vlSelfRef.__PVT___highest_perm_T_4))
                                           ? (IData)(vlSelfRef.__PVT___highest_perm_T_3)
                                           : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    __VdfgRegularize_hd4a67951_2_39 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                             & (~ (IData)(vlSelfRef.__PVT___GEN_28))));
    vlSelfRef.__PVT___GEN_125 = ((IData)(__PVT___GEN_124) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_38));
    vlSelfRef.__PVT__bypassPut = (IData)((((0U == (6U 
                                                   & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                           & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))) 
                                          & (IData)(__PVT___GEN_124)));
    __PVT___T_260 = ((IData)(vlSelfRef.__PVT__req_valid) 
                     & (IData)(vlSelfRef.__PVT__sinkc_resp_last));
    vlSelfRef.__PVT___T_310 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_26) 
                               & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                  & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last) 
                                     & ((~ (IData)(vlSelfRef.__PVT__nested_c_hit)) 
                                        & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))))));
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27 
        = (((IData)(vlSelfRef.__PVT__req_needT) | (IData)(vlSelfRef.__PVT__req_promoteT))
            ? 3U : 1U);
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36 
        = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
           | ((IData)(vlSelfRef.__PVT__req_promoteT) 
              | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))));
    __PVT___highest_perm_except_me_T_14 = (((IData)(__PVT___highest_perm_except_me_T_6) 
                                            > (IData)(__PVT___highest_perm_except_me_T_12))
                                            ? (IData)(__PVT___highest_perm_except_me_T_6)
                                            : (IData)(__PVT___highest_perm_except_me_T_12));
    vlSelfRef.__PVT__highest_perm = (((IData)(vlSelfRef.__PVT___highest_perm_T_2) 
                                      > (IData)(vlSelfRef.__PVT___highest_perm_T_6))
                                      ? (IData)(vlSelfRef.__PVT___highest_perm_T_2)
                                      : (IData)(vlSelfRef.__PVT___highest_perm_T_6));
    vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0 
        = ((0U != (IData)(vlSelfRef.__PVT__iam)) & 
           (((1U == (IData)(vlSelfRef.__PVT__req_param)) 
             & (((IData)(vlSelfRef.__PVT___GEN_10) 
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_11) 
                           & (IData)(__VdfgRegularize_hd4a67951_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(__VdfgRegularize_hd4a67951_2_39)))));
    vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1 
        = ((1U != (IData)(vlSelfRef.__PVT__iam)) & 
           (((1U == (IData)(vlSelfRef.__PVT__req_param)) 
             & (((IData)(vlSelfRef.__PVT___GEN_12) 
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_13) 
                           & (IData)(__VdfgRegularize_hd4a67951_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_13) 
                  & (IData)(__VdfgRegularize_hd4a67951_2_39)))));
    vlSelfRef.__PVT__preferCache = ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
                                         ? (IData)(vlSelfRef.__PVT__bypassPut)
                                         : (IData)(vlSelfRef.__PVT__bypassPut_latch_reg))) 
                                    & (IData)(vlSelfRef.__PVT__req_preferCache));
    vlSelfRef.__PVT___GEN_360 = (((IData)(__PVT___T_260) 
                                  & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                 | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData));
    if (__PVT___T_260) {
        vlSelfRef.__VdfgRegularize_hd4a67951_2_24 = __PVT__probeack_last;
        if ((0x100U & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
        } else {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
        }
    } else {
        vlSelfRef.__VdfgRegularize_hd4a67951_2_24 = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_0 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
        vlSelfRef.__PVT__client_probeack_param_vec_1 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
    }
    __PVT__highest_perm_except_me = (((IData)(__PVT___highest_perm_except_me_T) 
                                      > (IData)(__PVT___highest_perm_except_me_T_14))
                                      ? (IData)(__PVT___highest_perm_except_me_T)
                                      : (IData)(__PVT___highest_perm_except_me_T_14));
    vlSelfRef.__PVT__will_probeack_through = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) 
                                              & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                                                    | ((IData)(vlSelfRef.__PVT__req_needProbeAckData) 
                                                       & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT__highest_perm)))))));
    vlSelfRef.__PVT__highest_perm_reg = ((IData)(vlSelfRef.__PVT__highest_perm) 
                                         | (IData)(vlSelfRef.__PVT__highest_perm_reg_reg));
    __PVT__prefetch_miss_need_probe = ((IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1) 
                                       | (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_27 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__preferCache) 
                                                     | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
    vlSelfRef.__PVT__bypassGet = ((~ (IData)(vlSelfRef.__PVT__preferCache)) 
                                  & (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___new_clients_meta_0_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)))
            ? 1U : 0U);
    vlSelfRef.__PVT___new_clients_meta_1_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)))
            ? 1U : 0U);
    vlSelfRef.__PVT___GEN_130 = (1U & (~ ((IData)(vlSelfRef.__PVT__req_acquire)
                                           ? ((IData)(vlSelfRef.__PVT__req_needT)
                                               ? (~ 
                                                  ((IData)(__PVT__highest_perm_except_me) 
                                                   >> 1U))
                                               : (0U 
                                                  == (IData)(__PVT__highest_perm_except_me)))
                                           : ((IData)(vlSelfRef.__PVT__req_needT)
                                               ? (~ 
                                                  ((IData)(vlSelfRef.__PVT__highest_perm) 
                                                   >> 1U))
                                               : (0U 
                                                  == (IData)(vlSelfRef.__PVT__highest_perm))))));
    __PVT___will_save_probeack_T_2 = ((IData)(vlSelfRef.__PVT__will_probeack_through) 
                                      & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit));
    if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        vlSelfRef.__PVT___GEN_310 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) 
                                     & ((~ (IData)(vlSelfRef.__PVT__will_probeack_through)) 
                                        & ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 1U)));
        if (vlSelfRef.__PVT__req_fromProbeHelper) {
            vlSelfRef.__PVT___GEN_309 = ((IData)(vlSelfRef.__PVT__will_probeack_through) 
                                         & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)));
            vlSelfRef.__PVT___GEN_311 = (1U & (IData)(__PVT___will_save_probeack_T_2));
        } else {
            vlSelfRef.__PVT___GEN_309 = vlSelfRef.__PVT__will_probeack_through;
            vlSelfRef.__PVT___GEN_311 = (1U & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)) 
                                               | ((~ 
                                                   ((IData)(vlSelfRef.__PVT__req_channel) 
                                                    >> 1U)) 
                                                  | ((IData)(__PVT___will_save_probeack_T_2) 
                                                     & (1U 
                                                        == (IData)(vlSelfRef.__PVT__req_param))))));
        }
    } else {
        vlSelfRef.__PVT___GEN_310 = vlSelfRef.__PVT__probeAckDataDrop;
        vlSelfRef.__PVT___GEN_309 = vlSelfRef.__PVT__probeAckDataThrough;
        vlSelfRef.__PVT___GEN_311 = (1U & ((~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)) 
                                           & (~ (IData)(vlSelfRef.__PVT__probeAckDataDrop))));
    }
    vlSelfRef.io_tasks_dir_write_bits_data_state = 
        ((IData)(vlSelfRef.__PVT__bad_grant) ? (IData)(vlSelfRef.__PVT___GEN_3)
          : ((4U & (IData)(vlSelfRef.__PVT__req_channel))
              ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                  ? ((1U == (IData)(vlSelfRef.__PVT__req_param))
                      ? ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_3))
                              ? 3U : 1U) : (IData)(vlSelfRef.__PVT___GEN_3))
                      : 0U) : ((2U == (IData)(vlSelfRef.__PVT__req_param))
                                ? (((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                    & (3U == (IData)(vlSelfRef.__PVT___GEN_3)))
                                    ? 3U : 1U) : ((1U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? 3U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.__PVT__req_param))
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__PVT__req_param))
                                                     ? 2U
                                                     : (IData)(vlSelfRef.__PVT___GEN_3))))))
              : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                  ? ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                      ? ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_9)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_3))
                              ? 3U : 1U) : ((((IData)(vlSelfRef.__PVT___GEN_3) 
                                              >> 1U) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__req_param)))
                                             ? (IData)(vlSelfRef.__PVT___GEN_3)
                                             : (((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                                 & (2U 
                                                    != (IData)(vlSelfRef.__PVT__req_param)))
                                                 ? 1U
                                                 : 0U)))
                      : (IData)(vlSelfRef.__PVT___GEN_3))
                  : ((IData)(vlSelfRef.__PVT__inv_self_dir)
                      ? 0U : ((IData)(vlSelfRef.__PVT__req_needT)
                               ? ((IData)(vlSelfRef.__PVT__req_acquire)
                                   ? 2U : 3U) : ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                                                  ? 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT___GEN_3))
                                                   ? 
                                                  (((IData)(__PVT__meta_no_clients) 
                                                    & (IData)(vlSelfRef.__PVT__req_acquire))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__PVT___GEN_3))
                                                    ? 3U
                                                    : 1U))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__transmit_from_other_client)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : (IData)(vlSelfRef.__PVT__highest_perm_reg))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : 1U))))))));
    vlSelfRef.__PVT__prefetch_need_data = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                           & ((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                              & (((0U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? 
                                                  (0U 
                                                   == (IData)(vlSelfRef.__PVT__highest_perm))
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.__PVT__highest_perm) 
                                                    >> 1U))) 
                                                 | (IData)(__PVT__prefetch_miss_need_probe))));
    __PVT___T_159 = ((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                     & (IData)(__PVT__prefetch_miss_need_probe));
    vlSelfRef.io_tasks_source_a_bits_opcode = ((1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__s_transferput)) 
                                                   | (IData)(vlSelfRef.__PVT__bypassGet)))
                                                ? (IData)(vlSelfRef.__PVT__req_opcode)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelfRef.__PVT__req_opcode))
                                                    ? 6U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                         >> 1U)))
                                                     ? 6U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__PVT__req_opcode))
                                                      ? 6U
                                                      : (IData)(vlSelfRef.__PVT__req_opcode)))));
    if (vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37) {
        __PVT___new_self_meta_clientStates_0_T_38 = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
    } else {
        __PVT___new_self_meta_clientStates_0_T_38 = 0U;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
    }
    if (__PVT__prefetch_miss_need_probe) {
        if ((0U == (IData)(vlSelfRef.__PVT__req_param))) {
            vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 
                = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
            vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 
                = vlSelfRef.__PVT___new_clients_meta_1_state_T_24;
        } else {
            vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 = 0U;
            vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 = 0U;
        }
    } else {
        vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
        vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
    }
    if (vlSelfRef.__PVT___new_self_meta_clientStates_1_T_37) {
        __PVT___new_self_meta_clientStates_1_T_38 = vlSelfRef.__PVT___new_clients_meta_1_state_T_24;
        vlSelfRef.__PVT___new_clients_meta_1_state_T_36 
            = vlSelfRef.__PVT___new_clients_meta_1_state_T_24;
    } else {
        __PVT___new_self_meta_clientStates_1_T_38 = 0U;
        vlSelfRef.__PVT___new_clients_meta_1_state_T_36 
            = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
    }
    vlSelfRef.__PVT___GEN_343 = (1U & (((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT__chosen_reg) 
                                          >> 3U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT____VdfgRegularize_h528b8c7d_0_5)) 
                                        & (IData)(vlSelfRef.io_tasks_source_e_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                    | ((IData)(vlSelfRef.__PVT___GEN_130) 
                                                       | (~ 
                                                          ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                           & (~ (IData)(vlSelfRef.__PVT__bypassPut))))))))
                                           : (IData)(vlSelfRef.__PVT__s_grantack))));
    vlSelfRef.__PVT___GEN_237 = (1U & (IData)((((0U 
                                                 != 
                                                 (6U 
                                                  & (IData)(vlSelfRef.__PVT__req_channel))) 
                                                | (IData)(vlSelfRef.__PVT___GEN_130)) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))));
    __PVT___GEN_132 = (1U & ((IData)(vlSelfRef.__PVT___GEN_130) 
                             | (~ ((IData)(vlSelfRef.__PVT___T_143) 
                                   & (((4U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                                       & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                      | (IData)(vlSelfRef.__PVT__preferCache))))));
    vlSelfRef.__PVT___T_130 = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                               & ((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                  & ((IData)(__PVT__replace_need_release) 
                                     & (((IData)(vlSelfRef.__PVT__preferCache) 
                                         & ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            | (4U == (IData)(vlSelfRef.__PVT__req_opcode)))) 
                                        | ((IData)(vlSelfRef.__PVT__prefetch_need_data) 
                                           | (IData)(vlSelfRef.__PVT__transmit_from_other_client))))));
    vlSelfRef.__PVT___T_182 = ((IData)(vlSelfRef.__PVT___GEN_13) 
                               & (((IData)(vlSelfRef.__PVT__req_acquire) 
                                   & ((IData)(__VdfgRegularize_hd4a67951_2_37) 
                                      | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                         >> 1U))) | (IData)(__PVT___T_159)));
    __PVT___T_161 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                     & (((IData)(vlSelfRef.__PVT__req_acquire) 
                         & ((IData)(__VdfgRegularize_hd4a67951_2_37) 
                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                               >> 1U))) | (IData)(__PVT___T_159)));
    __PVT___GEN_133 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                       & (IData)(__PVT___GEN_132));
    vlSelfRef.__PVT___GEN_217 = (1U & (((IData)(vlSelfRef.__PVT__req_channel) 
                                        >> 1U) | ((~ (IData)(vlSelfRef.__PVT___T_130)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT___GEN_237;
        vlSelfRef.__PVT___GEN_279 = vlSelfRef.__PVT___GEN_237;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT___GEN_237;
        __PVT___GEN_280 = ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                            ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                ? (IData)(vlSelfRef.__PVT___GEN_103)
                                : (IData)(vlSelfRef.__PVT___GEN_110))
                            : (IData)(vlSelfRef.__PVT___GEN_217));
    } else {
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT__w_grantfirst;
        vlSelfRef.__PVT___GEN_279 = vlSelfRef.__PVT__w_grant;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT__w_grantlast;
        __PVT___GEN_280 = vlSelfRef.__PVT__w_releaseack;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.__PVT__req_fromCmoHelper) {
            if (vlSelfRef.io_tasks_source_d_bits_isHit) {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_4)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_5)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
            } else {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = vlSelfRef.__PVT___GEN_4;
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = vlSelfRef.__PVT___GEN_5;
            }
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((0U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_4)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((1U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_5)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state));
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.io_tasks_source_d_bits_isHit) {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((((IData)(vlSelfRef.__PVT___GEN_4) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_4)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_4)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((((IData)(vlSelfRef.__PVT___GEN_5) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_5)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_5)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = vlSelfRef.__PVT___GEN_4;
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = vlSelfRef.__PVT___GEN_5;
        }
    } else {
        vlSelfRef.__PVT__new_self_meta_clientStates_0 
            = ((0U == (IData)(vlSelfRef.__PVT__iam))
                ? ((IData)(vlSelfRef.__PVT__req_acquire)
                    ? (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27)
                    : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                        ? ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit)
                            ? 1U : 0U) : ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit)
                                           ? (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state)
                                           : 0U))) : 
               ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                 ? ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36)
                     ? 0U : (IData)(__PVT___new_self_meta_clientStates_0_T_38))
                 : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                     ? (IData)(__PVT___new_self_meta_clientStates_0_T_38)
                     : (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45))));
        vlSelfRef.__PVT__new_self_meta_clientStates_1 
            = ((1U == (IData)(vlSelfRef.__PVT__iam))
                ? ((IData)(vlSelfRef.__PVT__req_acquire)
                    ? (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27)
                    : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                        ? ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit)
                            ? 1U : 0U) : ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit)
                                           ? (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state)
                                           : 0U))) : 
               ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                 ? ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36)
                     ? 0U : (IData)(__PVT___new_self_meta_clientStates_1_T_38))
                 : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                     ? (IData)(__PVT___new_self_meta_clientStates_1_T_38)
                     : (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45))));
    }
    if (vlSelfRef.__VdfgRegularize_hd4a67951_2_36) {
        vlSelfRef.__PVT___GEN_156 = ((0U != (IData)(vlSelfRef.__PVT__iam)) 
                                     & (IData)(__PVT___T_161));
        vlSelfRef.__PVT___GEN_159 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                           | ((~ (IData)(__PVT___T_161)) 
                                              | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
        __PVT___GEN_157 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                 | (~ (IData)(__PVT___T_161))));
        __PVT___GEN_158 = ((0U != (IData)(vlSelfRef.__PVT__iam))
                            ? ((IData)(__PVT___T_161)
                                ? (IData)(__PVT___GEN_133)
                                : (IData)(__PVT___GEN_132))
                            : (IData)(__PVT___GEN_132));
        vlSelfRef.__PVT___GEN_184 = ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_182)) 
                                         & (IData)(__PVT___GEN_157))
                                      : (IData)(__PVT___GEN_157));
    } else {
        vlSelfRef.__PVT___GEN_156 = __PVT___T_168;
        vlSelfRef.__PVT___GEN_159 = (1U & ((~ (IData)(__PVT___T_168)) 
                                           | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)));
        __PVT___GEN_157 = (1U & (~ (IData)(__PVT___T_168)));
        __PVT___GEN_158 = ((IData)(__PVT___T_168) ? 
                           ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                            & (IData)(__PVT___GEN_133))
                            : (IData)(__PVT___GEN_132));
        vlSelfRef.__PVT___GEN_184 = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19)) 
                                     & (IData)(__PVT___GEN_157));
    }
    vlSelfRef.__PVT___GEN_227 = (1U & ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                        ? ((~ (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_101))
                                        : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                                            ? (IData)(vlSelfRef.__PVT___GEN_125)
                                            : ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                               | (IData)(vlSelfRef.__PVT___GEN_184)))));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                 & (IData)(vlSelfRef.__PVT___GEN_159));
    __PVT___GEN_160 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                       & (IData)(__PVT___GEN_158));
    vlSelfRef.__PVT___GEN_185 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_36)
                                  ? ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((IData)(vlSelfRef.__PVT___T_182)
                                          ? (IData)(__PVT___GEN_160)
                                          : (IData)(__PVT___GEN_158))
                                      : (IData)(__PVT___GEN_158))
                                  : ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19)
                                      ? ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                         & (IData)(__PVT___GEN_160))
                                      : (IData)(__PVT___GEN_158)));
    vlSelfRef.__PVT___GEN_371 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)
                                      ? ((~ (((((IData)(vlSelfRef.__PVT__req_channel) 
                                                >> 1U) 
                                               & (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                              | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                             & (IData)(vlSelfRef.__PVT__probeAckDataThrough))) 
                                         & (IData)(__PVT___GEN_280))
                                      : ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_22)
                                          ? ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                             & (IData)(__PVT___GEN_280))
                                          : (IData)(__PVT___GEN_280)))
                                  : (IData)(__PVT___GEN_280));
    if (vlSelfRef.__VdfgRegularize_hd4a67951_2_28) {
        vlSelfRef.__PVT___GEN_386 = ((IData)(vlSelfRef.__PVT__w_probeackfirst) 
                                     | (IData)(__PVT__probeack_last));
        vlSelfRef.__PVT___GEN_387 = ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                     | ((IData)(__PVT__probeack_last) 
                                        & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last)));
        vlSelfRef.__PVT___GEN_388 = ((IData)(vlSelfRef.__PVT__w_probeack) 
                                     | ((IData)(__PVT__probeack_last) 
                                        & ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                           | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last))));
    } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_386 = vlSelfRef.__PVT___GEN_227;
        vlSelfRef.__PVT___GEN_387 = vlSelfRef.__PVT___GEN_227;
        vlSelfRef.__PVT___GEN_388 = vlSelfRef.__PVT___GEN_227;
    } else {
        vlSelfRef.__PVT___GEN_386 = vlSelfRef.__PVT__w_probeackfirst;
        vlSelfRef.__PVT___GEN_387 = vlSelfRef.__PVT__w_probeacklast;
        vlSelfRef.__PVT___GEN_388 = vlSelfRef.__PVT__w_probeack;
    }
}
