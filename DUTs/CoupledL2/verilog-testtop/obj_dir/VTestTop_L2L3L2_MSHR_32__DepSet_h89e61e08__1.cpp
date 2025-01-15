// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_MSHR_32.h"
#include "VTestTop_L2L3L2__Syms.h"

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3__2(VTestTop_L2L3L2_MSHR_32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___T_248;
    __PVT___T_248 = 0;
    CData/*0:0*/ __PVT___T_254;
    __PVT___T_254 = 0;
    // Body
    vlSelfRef.__PVT__nest_c_way_match = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.io_status_bits_way) 
                                         == (IData)(vlSelfRef.io_status_bits_way));
    vlSelfRef.__PVT___GEN_343 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter_2__DOT__chosenOH) 
                                          >> 3U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter_2_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_client_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_27)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientstag))));
    vlSelfRef.__PVT___GEN_341 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb__DOT__chosenOH) 
                                          >> 3U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper) 
                                                  | (~ (IData)(vlSelfRef.__PVT___T_60)))
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                     | ((~ 
                                                         ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                          & ((IData)(vlSelfRef.__PVT__preferCache) 
                                                             & ((4U 
                                                                 == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                                | ((6U 
                                                                    == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                                   | (IData)(vlSelfRef.__PVT__prefetch_need_data)))))) 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_36)
                                                            ? 
                                                           ((1U 
                                                             != (IData)(vlSelfRef.__PVT__iam))
                                                             ? 
                                                            ((IData)(vlSelfRef.__PVT___T_185)
                                                              ? (IData)(vlSelfRef.__PVT___GEN_160)
                                                              : (IData)(vlSelfRef.__PVT___GEN_158))
                                                             : (IData)(vlSelfRef.__PVT___GEN_158))
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19)
                                                             ? (IData)(vlSelfRef.__PVT___GEN_160)
                                                             : (IData)(vlSelfRef.__PVT___GEN_158)))))))
                                           : (IData)(vlSelfRef.__PVT__s_wbselftag))));
    vlSelfRef.__PVT___T_249 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT__chosen_reg) 
                                 >> 3U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT____VdfgRegularize_hae52cd36_0_26)) 
                               & (IData)(vlSelfRef.io_tasks_source_b_valid));
    __PVT___T_254 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT__chosen_reg) 
                       >> 3U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT____VdfgRegularize_h20ebb837_0_26)) 
                     & (IData)(vlSelfRef.io_tasks_source_c_valid));
    vlSelfRef.__PVT___GEN_338 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT__chosen_reg) 
                                          >> 3U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT____VdfgRegularize_h1ec93158_0_26)) 
                                        & (IData)(vlSelfRef.io_tasks_source_d_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? (IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                     | (5U 
                                                        == (IData)(vlSelfRef.__PVT__req_opcode)))))
                                           : (IData)(vlSelfRef.__PVT__s_execute))));
    vlSelfRef.__PVT___GEN_340 = (1U & ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH) 
                                         >> 3U) & (IData)(vlSelfRef.io_tasks_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? 
                                                  (~ (IData)(vlSelfRef.__PVT___GEN_16))
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.__PVT___GEN_16) 
                                                    | (IData)(vlSelfRef.__PVT__req_opcode))))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.__PVT__req_channel))
                                                   ? 
                                                  ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                   | (~ (IData)(vlSelfRef.__PVT___T_81)))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                   | ((~ (IData)(
                                                                 (((0U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                                                   & (~ (IData)(vlSelfRef.__PVT___GEN_20))) 
                                                                  & (IData)(vlSelfRef.__PVT___GEN_16)))) 
                                                      & ((IData)(vlSelfRef.__PVT__req_acquire)
                                                          ? 
                                                         ((~ 
                                                           ((IData)(vlSelfRef.__PVT___T_146) 
                                                            & ((IData)(vlSelfRef.__PVT___GEN_16) 
                                                               | (IData)(vlSelfRef.__PVT__preferCache)))) 
                                                          & (IData)(vlSelfRef.__PVT___GEN_184))
                                                          : (IData)(vlSelfRef.__PVT___GEN_184))))))
                                           : (IData)(vlSelfRef.__PVT__s_wbselfdir))));
    vlSelfRef.__PVT___GEN_342 = (1U & ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter_1__DOT__chosenOH) 
                                         >> 3U) & (IData)(vlSelfRef.io_tasks_client_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_100)
                                                   : 
                                                  (~ 
                                                   (((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.__PVT___GEN_23))) 
                                                    | ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10) 
                                                       & ((IData)(vlSelfRef.__PVT___GEN_23) 
                                                          >> 1U)))))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.__PVT__req_channel))
                                                   ? (IData)(vlSelfRef.__PVT___GEN_124)
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                   | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                      & (IData)(vlSelfRef.__PVT___GEN_183)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientsdir))));
    __PVT___T_248 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT__chosen_reg) 
                       >> 3U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT____VdfgRegularize_h3b69c469_0_26)) 
                     & (IData)(vlSelfRef.io_tasks_source_a_valid));
    vlSelfRef.__PVT___T_261 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT__chosen_reg) 
                                 >> 3U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT____VdfgRegularize_h5d7114fd_0_26)) 
                               & (IData)(vlSelfRef.io_tasks_sink_c_valid));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_30 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3_io_resps_sink_d_valid) 
                                                 & (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_413 = (1U & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_resp_valid) 
                                        & (3U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s4_req_sinkId))) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
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
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))))
                                           : (IData)(vlSelfRef.__PVT__w_putwritten))));
    vlSelfRef.__PVT___GEN_335 = ((IData)(vlSelfRef.__PVT___T_249) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_226)
                                     : (IData)(vlSelfRef.__PVT__s_probe)));
    vlSelfRef.__PVT___GEN_337 = (1U & ((IData)(__PVT___T_254) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
                                           ? (1U & 
                                              ((2U 
                                                != 
                                                (6U 
                                                 & (IData)(vlSelfRef.__PVT__req_channel))) 
                                               | (~ 
                                                  ((~ (IData)(vlSelfRef.__PVT__will_probeack_through)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper))))))
                                           : (IData)(vlSelfRef.__PVT__s_probeack))));
    vlSelfRef.__PVT___GEN_336 = ((IData)(__PVT___T_254) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
                                     ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                         ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                             ? (IData)(vlSelfRef.__PVT___GEN_102)
                                             : (IData)(vlSelfRef.__PVT___GEN_109))
                                         : (IData)(vlSelfRef.__PVT___GEN_216))
                                     : (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.__PVT___GEN_333 = ((IData)(__PVT___T_248) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_236)
                                     : (IData)(vlSelfRef.__PVT__s_acquire)));
    vlSelfRef.__PVT___GEN_334 = (1U & ((IData)(__PVT___T_248) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_3_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__bypassPut)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))))
                                           : (IData)(vlSelfRef.__PVT__s_transferput))));
    vlSelfRef.__PVT___GEN_346 = (1U & ((IData)(vlSelfRef.__PVT___T_261)
                                        ? ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_272))
                                        : (IData)(vlSelfRef.__PVT___GEN_272)));
    vlSelfRef.__PVT___GEN_405 = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_31)
                                      ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last) 
                                         | (IData)(vlSelfRef.__PVT__w_grantlast))
                                      : (IData)(vlSelfRef.__PVT___GEN_387))
                                  : (IData)(vlSelfRef.__PVT___GEN_387));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4__0(VTestTop_L2L3L2_MSHR_32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__probe_dirty;
    __Vdly__probe_dirty = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_0;
    __Vdly__meta_reg_self_clientStates_0 = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_1;
    __Vdly__meta_reg_self_clientStates_1 = 0;
    // Body
    __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
    __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    __Vdly__probe_dirty = vlSelfRef.__PVT__probe_dirty;
    if (vlSelfRef.__PVT__change_self_meta) {
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_toN) {
            __Vdly__meta_reg_self_clientStates_0 = 0U;
            __Vdly__meta_reg_self_clientStates_1 = 0U;
            vlSelfRef.__PVT__meta_reg_self_state = 0U;
        } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_toB) {
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_0))) {
                __Vdly__meta_reg_self_clientStates_0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_1))) {
                __Vdly__meta_reg_self_clientStates_1 = 1U;
            }
            vlSelfRef.__PVT__meta_reg_self_state = 1U;
        } else {
            __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_17;
            __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_18;
            vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_19;
        }
        vlSelfRef.__PVT__meta_reg_self_hit = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_toN))) 
                                              && (IData)(vlSelfRef.__PVT___GEN_16));
        vlSelfRef.__PVT__meta_reg_self_dirty = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_c_set_dirty) 
                                                | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_set_dirty) 
                                                   | ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_clr_dirty)) 
                                                      & (IData)(vlSelfRef.__PVT___GEN_20))));
    } else {
        __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_17;
        __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_18;
        vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_19;
        vlSelfRef.__PVT__meta_reg_self_hit = vlSelfRef.__PVT___GEN_16;
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__meta_reg_self_dirty = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
        }
    }
    vlSelfRef.__PVT__someClientHasProbeAckData = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                      && (IData)(vlSelfRef.__PVT___GEN_356)));
    vlSelfRef.__PVT__transmit_from_other_client_latch 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__transmit_from_other_client));
    vlSelfRef.__PVT__s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                  | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_333))
                                      : (IData)(vlSelfRef.__PVT___GEN_333)));
    vlSelfRef.__PVT__w_probeackfirst = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_380));
    vlSelfRef.__PVT__s_execute = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_338));
    vlSelfRef.__PVT__w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_31) 
                                            | (IData)(vlSelfRef.__PVT___GEN_386))
                                         : (IData)(vlSelfRef.__PVT___GEN_386)));
    vlSelfRef.__PVT__w_grant = ((IData)(vlSymsp->TOP.reset) 
                                | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                    ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_31)
                                        ? (((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                            & (IData)(vlSelfRef.__PVT__req_size)) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last))
                                        : (IData)(vlSelfRef.__PVT___GEN_388))
                                    : (IData)(vlSelfRef.__PVT___GEN_388)));
    vlSelfRef.__PVT__s_probe = ((IData)(vlSymsp->TOP.reset) 
                                | (IData)(vlSelfRef.__PVT___GEN_335));
    if (vlSelfRef.__PVT__change_clients_meta_1) {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_1_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_12));
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_1_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_11));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = vlSelfRef.__PVT___GEN_12;
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = vlSelfRef.__PVT___GEN_11;
    }
    if (vlSelfRef.__PVT__change_clients_meta_0) {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_0_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_10));
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_0_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_9));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = vlSelfRef.__PVT___GEN_10;
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = vlSelfRef.__PVT___GEN_9;
    }
    vlSelfRef.__PVT__promoteT_safe = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                          ? ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                             & (IData)(vlSelfRef.__PVT___GEN_282))
                                          : (IData)(vlSelfRef.__PVT___GEN_282)));
    vlSelfRef.__PVT__w_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_382));
    vlSelfRef.__PVT__s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_23)
                                       ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_33)
                                           ? (IData)(vlSelfRef.__PVT___GEN_337)
                                           : ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_22)) 
                                              & (IData)(vlSelfRef.__PVT___GEN_337)))
                                       : (IData)(vlSelfRef.__PVT___GEN_337)));
    vlSelfRef.__PVT__s_release = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_336));
    vlSelfRef.__PVT__preferCache_latch = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                          && (IData)(vlSelfRef.__PVT__preferCache));
    vlSelfRef.__PVT__w_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_412));
    vlSelfRef.__PVT__w_putwritten = ((IData)(vlSymsp->TOP.reset) 
                                     | (IData)(vlSelfRef.__PVT___GEN_413));
    vlSelfRef.__PVT__w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_405));
    vlSelfRef.__PVT__s_transferput = ((IData)(vlSymsp->TOP.reset) 
                                      | (IData)(vlSelfRef.__PVT___GEN_334));
    vlSelfRef.__PVT__w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                         ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (IData)(vlSelfRef.__PVT___GEN_365))
                                         : (IData)(vlSelfRef.__PVT___GEN_365)));
    vlSelfRef.__PVT__w_probeacklast = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_381));
    vlSelfRef.__PVT__s_writerelease = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__PVT___T_261)
                                           ? ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                              | (IData)(vlSelfRef.__PVT___GEN_271))
                                           : (IData)(vlSelfRef.__PVT___GEN_271)));
    if (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4_io_resps_sink_c_valid))) {
        vlSelfRef.__PVT__io_tasks_sink_c_bits_bufIdx_r 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_bufIdx;
    }
    vlSelfRef.__PVT__nested_c_hit_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                         && ((1U & 
                                              (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG))) 
                                             && (IData)(vlSelfRef.__PVT__nested_c_hit)));
    vlSelfRef.__PVT__acquire_flag = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG))) 
                                         && (IData)(vlSelfRef.__PVT___GEN_91)));
    vlSelfRef.__PVT__s_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                       ? ((IData)(vlSelfRef.__PVT___T_294)
                                           ? ((~ ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__bypassPut_latch_reg)))) 
                                              & (IData)(vlSelfRef.__PVT___GEN_339))
                                           : (IData)(vlSelfRef.__PVT___GEN_339))
                                       : (IData)(vlSelfRef.__PVT___GEN_339)));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_4_valid) {
        vlSelfRef.__PVT__req_source = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source;
        vlSelfRef.__PVT__req_dirty = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_dirty;
        vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_needProbeAckData;
        vlSelfRef.__PVT__req_fromProbeHelper = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromProbeHelper;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__transmit_from_other_client_reg = 0U;
        vlSelfRef.__PVT__a_c_through_reg = 0U;
        vlSelfRef.__PVT__highest_perm_reg_reg = 0U;
    } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__transmit_from_other_client_reg 
            = vlSelfRef.__PVT___transmit_from_other_client_T_12;
        vlSelfRef.__PVT__a_c_through_reg = vlSelfRef.__PVT___GEN_16;
        vlSelfRef.__PVT__highest_perm_reg_reg = (((IData)(vlSelfRef.__PVT___highest_perm_T_2) 
                                                  > (IData)(vlSelfRef.__PVT___highest_perm_T_6))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT___GEN_16)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_19)
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
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__meta_reg_clients_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_self_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_self_way = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
        vlSelfRef.__PVT__meta_reg_clients_way = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__way_s2;
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Directory result was sent to mismatch MSHR(mshrId: 4, resultId:%2#)\n    at MSHR.scala:60 assert(\n",0,
                      4,(((((IData)((0U != (0xffU & 
                                            ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                             >> 8U)))) 
                            << 1U) | (0U != (0xfU & 
                                             ((IData)(vlSelfRef.__PVT___T_5) 
                                              >> 4U)))) 
                          << 2U) | (((IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelfRef.__PVT___T_7) 
                                                >> 2U)))) 
                                     << 1U) | (IData)(
                                                      (0U 
                                                       != 
                                                       (0xaU 
                                                        & (IData)(vlSelfRef.__PVT___T_7)))))));
    }
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4_io_resps_sink_d_valid))
                                  ? (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                        | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                       | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                      | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                      ? (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_283))
                                  : (IData)(vlSelfRef.__PVT___GEN_283)));
    vlSelfRef.__PVT__gotDirty = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (((IData)(vlSelfRef.__PVT__req_valid) 
                                      & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4_io_resps_sink_d_valid))
                                      ? (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                          | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                          ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_dirty)
                                          : (IData)(vlSelfRef.__PVT___GEN_290))
                                      : (IData)(vlSelfRef.__PVT___GEN_290)));
    vlSelfRef.__PVT__no_schedule_REG = ((IData)(vlSymsp->TOP.reset) 
                                        | (((((IData)(vlSelfRef.__PVT__s_wbselfdir) 
                                              & (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                             & (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                            & (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                           & (IData)(vlSelfRef.__PVT__meta_valid)));
    vlSelfRef.__PVT__inv_self_dir = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && (((IData)(vlSelfRef.__PVT__req_valid) 
                                          & (IData)(vlSelfRef.__PVT__sink_c_resp_valid))
                                          ? ((IData)(vlSelfRef.__PVT___T_311)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_26) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_288))
                                              : (IData)(vlSelfRef.__PVT___GEN_288))
                                          : (IData)(vlSelfRef.__PVT___GEN_288)));
    if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            vlSelfRef.__PVT__sink = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_sink;
        }
    }
    vlSelfRef.__PVT__bad_grant = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (((IData)(vlSelfRef.__PVT__req_valid) 
                                       & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4_io_resps_sink_d_valid))
                                       ? (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                             | (5U 
                                                == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                            | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                           ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_denied)
                                           : (IData)(vlSelfRef.__PVT___GEN_286))
                                       : (IData)(vlSelfRef.__PVT___GEN_286)));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_4_valid) {
        vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_bufIdx;
    } else if (((IData)(vlSelfRef.__PVT__req_valid) 
                & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            if ((0U != (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))) {
                vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_bufIdx;
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
                                          | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                         | (IData)(vlSelfRef.__PVT__nested_c_hit)));
            vlSelfRef.__PVT__probes_done = vlSelfRef.__PVT___probeack_last_T;
        } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) {
            __Vdly__probe_dirty = 0U;
            vlSelfRef.__PVT__probes_done = 0U;
        }
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__a_do_release = ((1U & 
                                              (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 2U))) 
                                             && ((~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17)) 
                                                    & (IData)(vlSelfRef.__PVT___T_133))));
            vlSelfRef.__PVT__a_do_probe = ((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 2U))) 
                                           && ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                               & ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17)) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_36)
                                                      ? 
                                                     ((1U 
                                                       != (IData)(vlSelfRef.__PVT__iam))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT___T_185) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_155))
                                                       : (IData)(vlSelfRef.__PVT___GEN_155))
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19) 
                                                      | (IData)(vlSelfRef.__PVT___GEN_155))))));
        }
        if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSelfRef.__PVT__sinkc_resp_last))) {
            if ((0x100U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_0 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                          >> 8U)))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_1 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
        }
        if (vlSelfRef.io_status_bits_will_free) {
            vlSelfRef.__PVT__releaseThrough = 0U;
            vlSelfRef.__PVT__releaseDrop = 0U;
            vlSelfRef.__PVT__probeAckDataThrough = 0U;
            vlSelfRef.__PVT__probeAckDataDrop = 0U;
            vlSelfRef.__PVT__probeAckDataSave = 0U;
        } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) {
            if (vlSelfRef.__PVT__req_fromCmoHelper) {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                       & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                          & (~ (IData)(vlSelfRef.__PVT___GEN_16))));
                vlSelfRef.__PVT__probeAckDataDrop = 
                    (0U == (IData)(vlSelfRef.__PVT__req_param));
                vlSelfRef.__PVT__probeAckDataSave = 
                    ((IData)(vlSelfRef.__PVT___probeAckDataSave_T_4) 
                     & (IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_8));
            } else {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = vlSelfRef.__PVT___GEN_305;
                vlSelfRef.__PVT__probeAckDataDrop = vlSelfRef.__PVT___GEN_306;
                vlSelfRef.__PVT__probeAckDataSave = vlSelfRef.__PVT___GEN_307;
            }
        }
    }
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    vlSelfRef.__PVT__REG = (1U & ((IData)(vlSymsp->TOP.reset) 
                                  | ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)) 
                                     | ((IData)(vlSelfRef.__PVT__req_valid) 
                                        & (~ (IData)(vlSelfRef.__PVT__meta_valid))))));
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_1)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: L3 Release should always hit: mshrId:[ 4] addr: [%x]\n    at MSHR.scala:469 assert(RegNext(!meta_valid || !req.fromC || req.fromCmoHelper || clients_meta(iam).hit),\n",0,
                      16,(((IData)(vlSelfRef.__PVT__req_tag) 
                           << 8U) | ((IData)(vlSelfRef.__PVT__req_set) 
                                     << 1U)));
    }
    if (VL_UNLIKELY(((((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) 
                         & (2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                        & (IData)(vlSelfRef.__PVT___GEN_16)) 
                       & (~ (IData)(vlSelfRef.__PVT___T_81))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((1U == (IData)(vlSelfRef.__PVT___GEN_19)) 
                           & (1U == (IData)(vlSelfRef.__PVT__req_param))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Probe not supported: [self: %1#] [req: %1#]\n\n    at MSHR.scala:675 assert(probe_is_report(self_meta.state, req.param),\n",0,
                      2,vlSelfRef.__PVT___GEN_19,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_472) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_9)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_10) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_10))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:685 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_10,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    vlSelfRef.__PVT__REG_1 = (1U & ((((~ (IData)(vlSelfRef.__PVT__meta_valid)) 
                                      | (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                            >> 2U))) 
                                     | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                    | (IData)(vlSelfRef.__PVT___GEN_27)));
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_472) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_11)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_12) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_12))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:685 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_12,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_471) 
                        & (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                              >> 1U))) & (~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((5U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                           | (IData)(vlSelfRef.__PVT__req_preferCache)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Hint should always preferCache!\n    at MSHR.scala:830 assert(req.opcode =/= Hint || req.preferCache, \"Hint should always preferCache!\")\n",0);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__req_valid) 
                       & ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_21) 
                          & ((IData)(vlSelfRef.__PVT__client_dir_conflict) 
                             & (IData)(vlSelfRef.__PVT__probe_helper_finish)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ (IData)(vlSelfRef.__PVT__REG_2))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Error L3: meta still conflict when probe helper finish! mshrId:  4\n    at MSHR.scala:936 assert(RegNext(!clients_meta_busy, true.B),\n",0);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT___T_249) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (0U == (IData)(vlSelfRef.__PVT__probe_clients))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid probe task\n\n    at MSHR.scala:1250 assert(io.tasks.source_b.bits.clients =/= 0.U, \"Invalid probe task\\n\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_3)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:1441 assert(RegNext(!req_valid || !io.alloc.valid, true.B)) // TODO: support fully-pipelined\n",0);
    }
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__client_dir_conflict = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_21) 
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
                                                 & ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                    & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                        & (0U 
                                                           != (IData)(vlSelfRef.__PVT___GEN_12))) 
                                                       | ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                          | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                             >> 1U)))))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? (IData)(vlSelfRef.__PVT___clients_have_T_T_3)
                                                   : (IData)(vlSelfRef.__PVT___GEN_11))
                                                  : (IData)(vlSelfRef.__PVT___GEN_11)))) 
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
                                                   & ((IData)(vlSelfRef.__PVT___GEN_9) 
                                                      & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                                         | ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                                                               >> 1U)))))
                                                : ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__req_param))
                                                     ? (IData)(vlSelfRef.__PVT___clients_have_T_T_1)
                                                     : (IData)(vlSelfRef.__PVT___GEN_9))
                                                    : (IData)(vlSelfRef.__PVT___GEN_9)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__bypassPut_latch_reg = vlSelfRef.__PVT__bypassPut;
    } else if (vlSelfRef.io_status_bits_will_free) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    }
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_4_valid) {
        vlSelfRef.__PVT__req_size = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_size;
        vlSelfRef.__PVT__req_off = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_off;
        vlSelfRef.__PVT__req_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_tag;
        vlSelfRef.__PVT__req_preferCache = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_preferCache;
        vlSelfRef.__PVT__req_set = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_set;
        vlSelfRef.__PVT__req_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_opcode;
        vlSelfRef.__PVT__req_fromCmoHelper = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromCmoHelper;
        vlSelfRef.__PVT__iam = ((0U == (IData)(vlSelfRef.__PVT__clientBitOH))
                                 ? 2U : (1U & ((IData)(vlSelfRef.__PVT__clientBitOH) 
                                               >> 1U)));
        vlSelfRef.__PVT__req_channel = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_channel;
        vlSelfRef.__PVT__req_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_param;
    }
    vlSelfRef.__PVT__meta_reg_self_clientStates_0 = __Vdly__meta_reg_self_clientStates_0;
    vlSelfRef.__PVT__meta_reg_self_clientStates_1 = __Vdly__meta_reg_self_clientStates_1;
    vlSelfRef.__PVT__probe_dirty = __Vdly__probe_dirty;
    vlSelfRef.__PVT__no_wait = ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                & ((IData)(vlSelfRef.__PVT__w_grantlast) 
                                   & ((IData)(vlSelfRef.__PVT__w_releaseack) 
                                      & ((IData)(vlSelfRef.__PVT__w_grantack) 
                                         & (IData)(vlSelfRef.__PVT__w_putwritten)))));
    vlSelfRef.__PVT__s_writeprobe = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_23)
                                         ? ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_33)) 
                                            & (IData)(vlSelfRef.__PVT___GEN_346))
                                         : (IData)(vlSelfRef.__PVT___GEN_346)));
    vlSelfRef.__PVT___GEN_91 = (1U & ((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                      | (IData)(vlSelfRef.__PVT__acquire_flag)));
    vlSelfRef.io_tasks_source_e_valid = ((~ (IData)(vlSelfRef.__PVT__s_grantack)) 
                                         & (IData)(vlSelfRef.__PVT__w_grantfirst));
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
                                       | (IData)(vlSelfRef.__PVT___GEN_343));
    vlSelfRef.__PVT__s_wbselftag = ((IData)(vlSymsp->TOP.reset) 
                                    | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                        ? ((IData)(vlSelfRef.__PVT___T_311)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_26) 
                                               | (IData)(vlSelfRef.__PVT___GEN_341))
                                            : (IData)(vlSelfRef.__PVT___GEN_341))
                                        : (IData)(vlSelfRef.__PVT___GEN_341)));
    vlSelfRef.__PVT__meta_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                   && ((1U & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                       && (IData)(vlSelfRef.__PVT___GEN_0)));
    vlSelfRef.__PVT__s_wbselfdir = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_340));
    vlSelfRef.__PVT__s_wbclientsdir = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_342));
    vlSelfRef.__PVT__probe_helper_finish = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                            && ((1U 
                                                 & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                && (IData)(vlSelfRef.__PVT___GEN_318)));
    vlSelfRef.__PVT__REG_3 = (1U & ((IData)(vlSymsp->TOP.reset) 
                                    | ((~ (IData)(vlSelfRef.__PVT__req_valid)) 
                                       | (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_4_valid)))));
    vlSelfRef.io_status_bits_will_free = ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & ((IData)(vlSelfRef.__PVT__s_execute) 
                                             & ((((IData)(vlSelfRef.__PVT__s_probeack) 
                                                  & ((IData)(vlSelfRef.__PVT__no_schedule_REG) 
                                                     & (IData)(vlSelfRef.__PVT__s_grantack))) 
                                                 & (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                                & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                   & (IData)(vlSelfRef.__PVT__s_writeprobe)))));
    vlSelfRef.__PVT__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT___GEN_423));
    vlSelfRef.__PVT___transmit_from_other_client_T_2 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                           >> 1U))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_36 = ((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                      >> 1U))) 
                                                 & (4U 
                                                    != (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___io_status_bits_nestB_T_6 = (1U 
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
    vlSelfRef.__VdfgRegularize_h42e69e07_2_21 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                                 & (IData)(vlSelfRef.__PVT__req_acquire));
    vlSelfRef.__PVT___probe_clients_T_3 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                           & (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
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
    vlSelfRef.__PVT___GEN_330 = ((6U == (IData)(vlSelfRef.__PVT__req_opcode))
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

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4__1(VTestTop_L2L3L2_MSHR_32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4__1\n"); );
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
    CData/*0:0*/ __PVT___T_263;
    __PVT___T_263 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_0_T_38;
    __PVT___new_self_meta_clientStates_0_T_38 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_1_T_38;
    __PVT___new_self_meta_clientStates_1_T_38 = 0;
    CData/*0:0*/ __PVT__nested_client_match;
    __PVT__nested_client_match = 0;
    CData/*0:0*/ __PVT___GEN_123;
    __PVT___GEN_123 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    CData/*0:0*/ __PVT___T_162;
    __PVT___T_162 = 0;
    CData/*0:0*/ __PVT___T_164;
    __PVT___T_164 = 0;
    CData/*0:0*/ __PVT___GEN_132;
    __PVT___GEN_132 = 0;
    CData/*0:0*/ __PVT___T_171;
    __PVT___T_171 = 0;
    CData/*0:0*/ __PVT___GEN_156;
    __PVT___GEN_156 = 0;
    CData/*0:0*/ __PVT___GEN_157;
    __PVT___GEN_157 = 0;
    CData/*0:0*/ __PVT___GEN_159;
    __PVT___GEN_159 = 0;
    CData/*0:0*/ __PVT___GEN_279;
    __PVT___GEN_279 = 0;
    CData/*0:0*/ __PVT___will_save_probeack_T_2;
    __PVT___will_save_probeack_T_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_5;
    __VdfgRegularize_h42e69e07_2_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_29;
    __VdfgRegularize_h42e69e07_2_29 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_35;
    __VdfgRegularize_h42e69e07_2_35 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_37;
    __VdfgRegularize_h42e69e07_2_37 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_39;
    __VdfgRegularize_h42e69e07_2_39 = 0;
    // Body
    vlSelfRef.__PVT__client_set_match = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__req_set) 
                                         == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.__PVT__nest_c_tag_match = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_tag) 
                                         == (IData)(vlSelfRef.__PVT__req_tag));
    vlSelfRef.__PVT___probeack_last_T = ((IData)(vlSelfRef.__PVT__probes_done) 
                                         | ((2U & (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                     >> 8U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                >> 8U))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_31 = ((4U 
                                                  == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                 | ((5U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                    | ((1U 
                                                        == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                       | (0U 
                                                          == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_33 = (1U 
                                                 & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode) 
                                                    | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData)));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_22 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                     >> 1U) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                                       | ((IData)(vlSelfRef.__PVT__probeAckDataThrough) 
                                                          & (5U 
                                                             != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param))))));
    vlSelfRef.__PVT___change_self_meta_T_2 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_set) 
                                              == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.io_tasks_source_b_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_probe)) 
                                            & (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.io_tasks_source_a_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4_io_enable) 
                                         & (((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                             | (~ (IData)(vlSelfRef.__PVT__s_transferput))) 
                                            & ((IData)(vlSelfRef.__PVT__s_probe) 
                                               & ((IData)(vlSelfRef.__PVT__s_release) 
                                                  & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                                     & (IData)(vlSelfRef.__PVT__can_start))))));
    vlSelfRef.io_tasks_sink_c_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4_io_enable) 
                                       & ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                          | ((~ (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                             & ((~ (IData)(vlSelfRef.__PVT__releaseSave)) 
                                                | (IData)(vlSelfRef.__PVT__s_release)))));
    vlSelfRef.io_tasks_source_d_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_execute)) 
                                            & ((IData)(vlSelfRef.__PVT__can_start) 
                                               & ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                                  & ((IData)(vlSelfRef.__PVT__w_grant) 
                                                     & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                        & (IData)(vlSelfRef.__PVT__w_probeacklast)))))));
    vlSelfRef.io_tasks_source_c_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_release)) 
                                            | ((~ (IData)(vlSelfRef.__PVT__s_probeack)) 
                                               & ((IData)(vlSelfRef.__PVT__s_writerelease) 
                                                  & (IData)(vlSelfRef.__PVT__w_probeack)))));
    __VdfgRegularize_h42e69e07_2_29 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4_io_enable) 
                                       & ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & (IData)(vlSelfRef.__PVT__can_start)));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) 
                               | (IData)(vlSelfRef.__PVT__meta_valid));
    vlSelfRef.__PVT___GEN_283 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_290 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_288 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__inv_self_dir));
    vlSelfRef.__PVT___GEN_286 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__bad_grant));
    vlSelfRef.__PVT___GEN_282 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__promoteT_safe));
    vlSelfRef.__PVT___GEN_471 = ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                     >> 2U)) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG));
    vlSelfRef.__PVT___GEN_272 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__s_writeprobe));
    vlSelfRef.__PVT__clientBitOH = ((2U & ((~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                               >> 8U)) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                             >> 8U)));
    vlSelfRef.__PVT__sink_c_resp_valid = ((~ (IData)(vlSelfRef.__PVT__w_probeacklast)) 
                                          & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4_io_resps_sink_c_valid));
    vlSelfRef.__PVT___T_5 = (0xffU & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                       >> 8U) | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg)));
    vlSelfRef.__PVT___GEN_423 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_4_valid) 
                                 | ((~ (IData)(vlSelfRef.io_status_bits_will_free)) 
                                    & (IData)(vlSelfRef.__PVT__req_valid)));
    vlSelfRef.__PVT___GEN_318 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_b_status_probeHelperFinish) 
                                     & (IData)(vlSelfRef.__PVT__client_set_match))) 
                                 | (IData)(vlSelfRef.__PVT__probe_helper_finish));
    vlSelfRef.__PVT__probeack_last = ((IData)(vlSelfRef.__PVT___probeack_last_T) 
                                      == (IData)(vlSelfRef.__PVT__probe_clients));
    __PVT__nested_client_match = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_tag) 
                                   == ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
                                        ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag)
                                        : (IData)(vlSelfRef.__PVT__meta_reg_clients_tag))) 
                                  & (IData)(vlSelfRef.__PVT___change_self_meta_T_2));
    vlSelfRef.io_tasks_client_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                                 & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.io_tasks_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                          & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.io_tasks_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselfdir)) 
                                          & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.io_tasks_client_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                                 & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.__PVT___GEN_472 = ((IData)(vlSelfRef.__PVT___GEN_471) 
                                 & ((IData)(vlSelfRef.__PVT__req_channel) 
                                    >> 1U));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_271 = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U)) 
                                           | ((~ (IData)(vlSelfRef.__PVT__req_opcode)) 
                                              | (IData)(vlSelfRef.__PVT__req_fromCmoHelper))));
        vlSelfRef.io_status_bits_way = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
        vlSelfRef.__PVT___GEN_16 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__hit_s2;
    } else {
        vlSelfRef.__PVT___GEN_271 = (1U & (IData)(vlSelfRef.__PVT__s_writerelease));
        vlSelfRef.io_status_bits_way = vlSelfRef.__PVT__meta_reg_self_way;
        vlSelfRef.__PVT___GEN_16 = vlSelfRef.__PVT__meta_reg_self_hit;
    }
    vlSelfRef.__PVT___GEN_102 = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                                          & (IData)(vlSelfRef.__PVT___GEN_16))));
    vlSelfRef.__PVT___T_60 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                    & (IData)(vlSelfRef.__PVT__req_opcode)));
    __VdfgRegularize_h42e69e07_2_35 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                    >> 1U)))));
    __VdfgRegularize_h42e69e07_2_37 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                             | (IData)(vlSelfRef.__PVT__req_needT)));
    vlSelfRef.__PVT___T_146 = (1U & (~ ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                        & (7U == (IData)(vlSelfRef.__PVT__req_opcode)))));
    vlSelfRef.__PVT___a_c_through_T_3 = ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                         & (IData)(vlSelfRef.__PVT__nest_c_tag_match));
    vlSelfRef.__PVT__nested_c_hit = (((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                      & (((IData)(vlSelfRef.__PVT__meta_valid) 
                                          & ((IData)(vlSelfRef.__PVT__req_channel) 
                                             & (IData)(vlSelfRef.__PVT___change_self_meta_T_2))) 
                                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT____VdfgRegularize_hf4af413a_4_0) 
                                            & ((IData)(vlSelfRef.__PVT__req_tag) 
                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_tag))))) 
                                     | (IData)(vlSelfRef.__PVT__nested_c_hit_reg));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_14 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT___GEN_20 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
    } else {
        vlSelfRef.__PVT___GEN_14 = vlSelfRef.__PVT__meta_reg_self_tag;
        vlSelfRef.__PVT___GEN_20 = vlSelfRef.__PVT__meta_reg_self_dirty;
    }
    vlSelfRef.__PVT___new_self_meta_dirty_T_13 = ((IData)(vlSelfRef.__PVT___GEN_20) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    vlSelfRef.__PVT___new_self_meta_dirty_T = ((IData)(vlSelfRef.__PVT___GEN_16) 
                                               & (IData)(vlSelfRef.__PVT___GEN_20));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_17 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_0;
        vlSelfRef.__PVT___GEN_18 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_1;
    } else {
        vlSelfRef.__PVT___GEN_17 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
        vlSelfRef.__PVT___GEN_18 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    }
    __PVT__meta_no_clients = ((0U == (IData)(vlSelfRef.__PVT___GEN_17)) 
                              & (0U == (IData)(vlSelfRef.__PVT___GEN_18)));
    vlSelfRef.__PVT___GEN_19 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
                                 ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_state)
                                 : (IData)(vlSelfRef.__PVT__meta_reg_self_state));
    vlSelfRef.__PVT___T_81 = ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                              | (((IData)(vlSelfRef.__PVT___GEN_19) 
                                  >> 1U) & (1U == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_38 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_19) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.__PVT__req_param))));
    __PVT__replace_need_release = (((IData)(vlSelfRef.__PVT___GEN_19) 
                                    > (((IData)(vlSelfRef.__PVT___GEN_17) 
                                        > (IData)(vlSelfRef.__PVT___GEN_18))
                                        ? (IData)(vlSelfRef.__PVT___GEN_17)
                                        : (IData)(vlSelfRef.__PVT___GEN_18))) 
                                   | ((IData)(vlSelfRef.__PVT___GEN_20) 
                                      & ((IData)(vlSelfRef.__PVT___GEN_19) 
                                         >> 1U)));
    if (vlSelfRef.__PVT___GEN_16) {
        __PVT___highest_perm_except_me_T = vlSelfRef.__PVT___GEN_19;
        vlSelfRef.__PVT___highest_perm_T_2 = vlSelfRef.__PVT___GEN_19;
    } else {
        __PVT___highest_perm_except_me_T = 0U;
        vlSelfRef.__PVT___highest_perm_T_2 = 0U;
    }
    __VdfgRegularize_h42e69e07_2_5 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                            | (~ ((IData)(vlSelfRef.__PVT___GEN_19) 
                                                  >> 1U))));
    vlSelfRef.__PVT__change_self_meta = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                         & (((0U != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                             & (IData)(vlSelfRef.__PVT___change_self_meta_T_2)) 
                                            & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_tag) 
                                               == (IData)(vlSelfRef.__PVT___GEN_14))));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_12 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_0_state;
    } else {
        vlSelfRef.__PVT___GEN_12 = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
    }
    vlSelfRef.__PVT___GEN_23 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_12)
                                 : (IData)(vlSelfRef.__PVT___GEN_10));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_11 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_9 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_0_hit;
    } else {
        vlSelfRef.__PVT___GEN_11 = vlSelfRef.__PVT__meta_reg_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_9 = vlSelfRef.__PVT__meta_reg_clients_states_0_hit;
    }
    vlSelfRef.__PVT___GEN_27 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_11)
                                 : (IData)(vlSelfRef.__PVT___GEN_9));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_27 = ((IData)(vlSelfRef.__PVT__req_valid) 
                                                 & (IData)(vlSelfRef.__PVT__sink_c_resp_valid));
    vlSelfRef.__PVT__sinkc_resp_last = ((IData)(vlSelfRef.__PVT__sink_c_resp_valid) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last));
    if (vlSelfRef.__PVT___GEN_11) {
        vlSelfRef.__PVT___clients_have_T_T_3 = ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                >> 1U);
        vlSelfRef.__PVT___highest_perm_T_4 = vlSelfRef.__PVT___GEN_12;
    } else {
        vlSelfRef.__PVT___clients_have_T_T_3 = 0U;
        vlSelfRef.__PVT___highest_perm_T_4 = 0U;
    }
    vlSelfRef.__PVT__clients_meta_busy = (((~ (IData)(vlSelfRef.__PVT___GEN_9)) 
                                           & (0U != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                          | ((~ (IData)(vlSelfRef.__PVT___GEN_11)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT___GEN_12))));
    vlSelfRef.__PVT___clients_have_T_T_1 = ((IData)(vlSelfRef.__PVT___GEN_9) 
                                            & ((IData)(vlSelfRef.__PVT___GEN_10) 
                                               >> 1U));
    vlSelfRef.__PVT___GEN_100 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_11)) 
                                       & (~ (IData)(vlSelfRef.__PVT___GEN_9))));
    vlSelfRef.__PVT___transmit_from_other_client_T_12 
        = ((((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (1U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_11)) | 
           (((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (0U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_17 = ((5U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                    | (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__PVT___highest_perm_T_3 = ((IData)(vlSelfRef.__PVT___GEN_9)
                                           ? (IData)(vlSelfRef.__PVT___GEN_10)
                                           : 0U);
    __PVT___GEN_123 = (1U & (~ ((IData)(vlSelfRef.__PVT___GEN_9) 
                                | (IData)(vlSelfRef.__PVT___GEN_11))));
    vlSelfRef.__PVT___T_7 = (0xfU & (((IData)(vlSelfRef.__PVT___T_5) 
                                      >> 4U) | (IData)(vlSelfRef.__PVT___T_5)));
    vlSelfRef.__PVT__change_clients_meta_0 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_10)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__PVT__change_clients_meta_1 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_12)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_19 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                 & (((IData)(vlSelfRef.__PVT___GEN_12) 
                                                     >> 1U) 
                                                    | (IData)(__VdfgRegularize_h42e69e07_2_35)));
    __PVT___T_171 = ((IData)(vlSelfRef.__PVT___GEN_9) 
                     & (((IData)(vlSelfRef.__PVT___GEN_10) 
                         >> 1U) | (IData)(__VdfgRegularize_h42e69e07_2_35)));
    vlSelfRef.io_status_bits_will_save_data = ((IData)(vlSelfRef.__PVT__req_channel) 
                                               & ((IData)(vlSelfRef.__PVT___T_146) 
                                                  & ((IData)(vlSelfRef.__PVT__preferCache_latch) 
                                                     | (IData)(vlSelfRef.__PVT___GEN_16))));
    vlSelfRef.__PVT___T_311 = (((IData)(vlSelfRef.__PVT__req_channel) 
                                & (IData)(vlSelfRef.__PVT__probeack_last)) 
                               & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last) 
                                     & ((~ (IData)(vlSelfRef.__PVT__nested_c_hit)) 
                                        & (~ (IData)(vlSelfRef.__PVT___GEN_16))))));
    vlSelfRef.__PVT__req_promoteT = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                     & ((IData)(vlSelfRef.__PVT___GEN_16)
                                         ? ((IData)(__PVT__meta_no_clients) 
                                            & (3U == (IData)(vlSelfRef.__PVT___GEN_19)))
                                         : ((IData)(vlSelfRef.__PVT__gotT) 
                                            & (IData)(vlSelfRef.__PVT__promoteT_safe))));
    vlSelfRef.__PVT___GEN_109 = (1U & (~ ((IData)(vlSelfRef.__PVT___T_60) 
                                          & ((0U != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                             & (IData)(__PVT__replace_need_release)))));
    __PVT___T_263 = ((IData)(vlSelfRef.__PVT__req_valid) 
                     & (IData)(vlSelfRef.__PVT__sinkc_resp_last));
    __PVT___highest_perm_except_me_T_12 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                            & (1U == (IData)(vlSelfRef.__PVT__iam)))
                                            ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    vlSelfRef.__PVT__clients_have_T = ((IData)(vlSelfRef.__PVT___clients_have_T_T_3) 
                                       | (IData)(vlSelfRef.__PVT___clients_have_T_T_1));
    vlSelfRef.__PVT__transmit_from_other_client = (
                                                   (~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                   & ((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_12) 
                                                      | (IData)(vlSelfRef.__PVT__transmit_from_other_client_reg)));
    vlSelfRef.__PVT___GEN_412 = (1U & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_valid) 
                                        & (4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_bits_sink))) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))))
                                           : (IData)(vlSelfRef.__PVT__w_grantack))));
    __PVT___highest_perm_except_me_T_6 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                           & (0U == (IData)(vlSelfRef.__PVT__iam)))
                                           ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_3));
    vlSelfRef.__PVT___highest_perm_T_6 = (((IData)(vlSelfRef.__PVT___highest_perm_T_3) 
                                           > (IData)(vlSelfRef.__PVT___highest_perm_T_4))
                                           ? (IData)(vlSelfRef.__PVT___highest_perm_T_3)
                                           : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    __VdfgRegularize_h42e69e07_2_39 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                             & (~ (IData)(vlSelfRef.__PVT___GEN_27))));
    vlSelfRef.__PVT___GEN_124 = ((IData)(__PVT___GEN_123) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_38));
    vlSelfRef.__PVT__bypassPut = (IData)((((0U == (6U 
                                                   & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                           & (~ (IData)(vlSelfRef.__PVT___GEN_16))) 
                                          & (IData)(__PVT___GEN_123)));
    vlSelfRef.__PVT___T_294 = ((~ (IData)(vlSelfRef.__PVT__acquire_flag)) 
                               & (IData)(vlSelfRef.__PVT___T_311));
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27 
        = (((IData)(vlSelfRef.__PVT__req_needT) | (IData)(vlSelfRef.__PVT__req_promoteT))
            ? 3U : 1U);
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36 
        = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
           | ((IData)(vlSelfRef.__PVT__req_promoteT) 
              | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))));
    vlSelfRef.__PVT___GEN_356 = (((IData)(__PVT___T_263) 
                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                 | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData));
    if (__PVT___T_263) {
        vlSelfRef.__VdfgRegularize_h42e69e07_2_23 = vlSelfRef.__PVT__probeack_last;
        if ((0x100U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
        } else {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
        }
    } else {
        vlSelfRef.__VdfgRegularize_h42e69e07_2_23 = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_0 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
        vlSelfRef.__PVT__client_probeack_param_vec_1 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
    }
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
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_9) 
                           & (IData)(__VdfgRegularize_h42e69e07_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_9) 
                  & (IData)(__VdfgRegularize_h42e69e07_2_39)))));
    vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1 
        = ((1U != (IData)(vlSelfRef.__PVT__iam)) & 
           (((1U == (IData)(vlSelfRef.__PVT__req_param)) 
             & (((IData)(vlSelfRef.__PVT___GEN_12) 
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_11) 
                           & (IData)(__VdfgRegularize_h42e69e07_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(__VdfgRegularize_h42e69e07_2_39)))));
    vlSelfRef.__PVT__preferCache = ((~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
                                         ? (IData)(vlSelfRef.__PVT__bypassPut)
                                         : (IData)(vlSelfRef.__PVT__bypassPut_latch_reg))) 
                                    & (IData)(vlSelfRef.__PVT__req_preferCache));
    vlSelfRef.__PVT___new_clients_meta_0_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)))
            ? 1U : 0U);
    vlSelfRef.__PVT___new_clients_meta_1_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)))
            ? 1U : 0U);
    __PVT__highest_perm_except_me = (((IData)(__PVT___highest_perm_except_me_T) 
                                      > (IData)(__PVT___highest_perm_except_me_T_14))
                                      ? (IData)(__PVT___highest_perm_except_me_T)
                                      : (IData)(__PVT___highest_perm_except_me_T_14));
    vlSelfRef.io_tasks_dir_write_bits_data_state = 
        ((IData)(vlSelfRef.__PVT__bad_grant) ? (IData)(vlSelfRef.__PVT___GEN_19)
          : ((4U & (IData)(vlSelfRef.__PVT__req_channel))
              ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                  ? ((1U == (IData)(vlSelfRef.__PVT__req_param))
                      ? ((IData)(vlSelfRef.__PVT___GEN_16)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_19))
                              ? 3U : 1U) : (IData)(vlSelfRef.__PVT___GEN_19))
                      : 0U) : ((2U == (IData)(vlSelfRef.__PVT__req_param))
                                ? (((IData)(vlSelfRef.__PVT___GEN_16) 
                                    & (3U == (IData)(vlSelfRef.__PVT___GEN_19)))
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
                                                     : (IData)(vlSelfRef.__PVT___GEN_19))))))
              : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                  ? ((IData)(vlSelfRef.__PVT___GEN_16)
                      ? ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_9)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_19))
                              ? 3U : 1U) : ((((IData)(vlSelfRef.__PVT___GEN_19) 
                                              >> 1U) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__req_param)))
                                             ? (IData)(vlSelfRef.__PVT___GEN_19)
                                             : (((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                                 & (2U 
                                                    != (IData)(vlSelfRef.__PVT__req_param)))
                                                 ? 1U
                                                 : 0U)))
                      : (IData)(vlSelfRef.__PVT___GEN_19))
                  : ((IData)(vlSelfRef.__PVT__inv_self_dir)
                      ? 0U : ((IData)(vlSelfRef.__PVT__req_needT)
                               ? ((IData)(vlSelfRef.__PVT__req_acquire)
                                   ? 2U : 3U) : ((IData)(vlSelfRef.__PVT___GEN_16)
                                                  ? 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT___GEN_19))
                                                   ? 
                                                  (((IData)(__PVT__meta_no_clients) 
                                                    & (IData)(vlSelfRef.__PVT__req_acquire))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__PVT___GEN_19))
                                                    ? 3U
                                                    : 1U))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__transmit_from_other_client)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__highest_perm) 
                                                    | (IData)(vlSelfRef.__PVT__highest_perm_reg_reg)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : 1U))))))));
    vlSelfRef.__PVT__will_probeack_through = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) 
                                              & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                                                    | ((IData)(vlSelfRef.__PVT__req_needProbeAckData) 
                                                       & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT__highest_perm)))))));
    __PVT__prefetch_miss_need_probe = ((IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1) 
                                       | (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_26 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__preferCache) 
                                                     | (IData)(vlSelfRef.__PVT___GEN_16))));
    vlSelfRef.__PVT__bypassGet = ((~ (IData)(vlSelfRef.__PVT__preferCache)) 
                                  & (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    if (vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37) {
        __PVT___new_self_meta_clientStates_0_T_38 = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
    } else {
        __PVT___new_self_meta_clientStates_0_T_38 = 0U;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
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
    vlSelfRef.__PVT___GEN_129 = (1U & (~ ((IData)(vlSelfRef.__PVT__req_acquire)
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
                                      & (IData)(vlSelfRef.__PVT___GEN_16));
    if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        vlSelfRef.__PVT___GEN_306 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) 
                                     & ((~ (IData)(vlSelfRef.__PVT__will_probeack_through)) 
                                        & ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 1U)));
        if (vlSelfRef.__PVT__req_fromProbeHelper) {
            vlSelfRef.__PVT___GEN_305 = ((IData)(vlSelfRef.__PVT__will_probeack_through) 
                                         & (~ (IData)(vlSelfRef.__PVT___GEN_16)));
            vlSelfRef.__PVT___GEN_307 = (1U & (IData)(__PVT___will_save_probeack_T_2));
        } else {
            vlSelfRef.__PVT___GEN_305 = vlSelfRef.__PVT__will_probeack_through;
            vlSelfRef.__PVT___GEN_307 = (1U & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)) 
                                               | ((~ 
                                                   ((IData)(vlSelfRef.__PVT__req_channel) 
                                                    >> 1U)) 
                                                  | ((IData)(__PVT___will_save_probeack_T_2) 
                                                     & (1U 
                                                        == (IData)(vlSelfRef.__PVT__req_param))))));
        }
    } else {
        vlSelfRef.__PVT___GEN_306 = vlSelfRef.__PVT__probeAckDataDrop;
        vlSelfRef.__PVT___GEN_305 = vlSelfRef.__PVT__probeAckDataThrough;
        vlSelfRef.__PVT___GEN_307 = (1U & ((~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)) 
                                           & (~ (IData)(vlSelfRef.__PVT__probeAckDataDrop))));
    }
    vlSelfRef.__PVT__prefetch_need_data = ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
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
    if (__PVT__prefetch_miss_need_probe) {
        __PVT___T_162 = (5U == (IData)(vlSelfRef.__PVT__req_opcode));
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
        __PVT___T_162 = 0U;
        vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
        vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
    }
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
                                                     : (IData)(vlSelfRef.__PVT__req_opcode))));
    vlSelfRef.__PVT___GEN_339 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT__chosen_reg) 
                                          >> 4U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT____VdfgRegularize_h528b8c7d_0_13)) 
                                        & (IData)(vlSelfRef.io_tasks_source_e_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                    | ((IData)(vlSelfRef.__PVT___GEN_129) 
                                                       | (~ 
                                                          ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                           & (~ (IData)(vlSelfRef.__PVT__bypassPut))))))))
                                           : (IData)(vlSelfRef.__PVT__s_grantack))));
    vlSelfRef.__PVT___GEN_236 = (1U & (IData)((((0U 
                                                 != 
                                                 (6U 
                                                  & (IData)(vlSelfRef.__PVT__req_channel))) 
                                                | (IData)(vlSelfRef.__PVT___GEN_129)) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))));
    __PVT___GEN_131 = (1U & ((IData)(vlSelfRef.__PVT___GEN_129) 
                             | (~ ((IData)(vlSelfRef.__PVT___T_146) 
                                   & (((4U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                                       & (IData)(vlSelfRef.__PVT___GEN_16)) 
                                      | (IData)(vlSelfRef.__PVT__preferCache))))));
    vlSelfRef.__PVT___T_133 = ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                               & ((0U != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                  & ((IData)(__PVT__replace_need_release) 
                                     & (((IData)(vlSelfRef.__PVT__preferCache) 
                                         & ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            | (4U == (IData)(vlSelfRef.__PVT__req_opcode)))) 
                                        | ((IData)(vlSelfRef.__PVT__prefetch_need_data) 
                                           | (IData)(vlSelfRef.__PVT__transmit_from_other_client))))));
    vlSelfRef.__PVT___T_185 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                               & (((IData)(vlSelfRef.__PVT__req_acquire) 
                                   & ((IData)(__VdfgRegularize_h42e69e07_2_37) 
                                      | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                         >> 1U))) | (IData)(__PVT___T_162)));
    __PVT___T_164 = ((IData)(vlSelfRef.__PVT___GEN_9) 
                     & (((IData)(vlSelfRef.__PVT__req_acquire) 
                         & ((IData)(__VdfgRegularize_h42e69e07_2_37) 
                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                               >> 1U))) | (IData)(__PVT___T_162)));
    vlSelfRef.io_tasks_source_d_bits_useBypass = ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                       >> 1U))) 
                                                  & (((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.__PVT___GEN_19)) 
                                                         & (IData)(vlSelfRef.__PVT__req_needT))) 
                                                     & ((~ (IData)(vlSelfRef.__PVT__probe_dirty)) 
                                                        | ((IData)(vlSelfRef.__PVT__acquire_flag) 
                                                           & (7U 
                                                              != (IData)(vlSelfRef.io_tasks_source_a_bits_opcode))))));
    __PVT___GEN_132 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                       & (IData)(__PVT___GEN_131));
    vlSelfRef.__PVT___GEN_216 = (1U & (((IData)(vlSelfRef.__PVT__req_channel) 
                                        >> 1U) | ((~ (IData)(vlSelfRef.__PVT___T_133)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_276 = vlSelfRef.__PVT___GEN_236;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT___GEN_236;
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT___GEN_236;
        __PVT___GEN_279 = ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                            ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                ? (IData)(vlSelfRef.__PVT___GEN_102)
                                : (IData)(vlSelfRef.__PVT___GEN_109))
                            : (IData)(vlSelfRef.__PVT___GEN_216));
    } else {
        vlSelfRef.__PVT___GEN_276 = vlSelfRef.__PVT__w_grantfirst;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT__w_grant;
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT__w_grantlast;
        __PVT___GEN_279 = vlSelfRef.__PVT__w_releaseack;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.__PVT__req_fromCmoHelper) {
            if (vlSelfRef.__PVT___GEN_16) {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_17)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_18)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
            } else {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = vlSelfRef.__PVT___GEN_17;
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = vlSelfRef.__PVT___GEN_18;
            }
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((0U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_17)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((1U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_18)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state));
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.__PVT___GEN_16) {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((((IData)(vlSelfRef.__PVT___GEN_17) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_17)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_17)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((((IData)(vlSelfRef.__PVT___GEN_18) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_18)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_18)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = vlSelfRef.__PVT___GEN_17;
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = vlSelfRef.__PVT___GEN_18;
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
    if (vlSelfRef.__VdfgRegularize_h42e69e07_2_36) {
        vlSelfRef.__PVT___GEN_155 = ((0U != (IData)(vlSelfRef.__PVT__iam)) 
                                     & (IData)(__PVT___T_164));
        vlSelfRef.__PVT___GEN_158 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                           | ((~ (IData)(__PVT___T_164)) 
                                              | (IData)(vlSelfRef.__PVT___GEN_16))));
        __PVT___GEN_156 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                 | (~ (IData)(__PVT___T_164))));
        __PVT___GEN_157 = ((0U != (IData)(vlSelfRef.__PVT__iam))
                            ? ((IData)(__PVT___T_164)
                                ? (IData)(__PVT___GEN_132)
                                : (IData)(__PVT___GEN_131))
                            : (IData)(__PVT___GEN_131));
        vlSelfRef.__PVT___GEN_183 = ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_185)) 
                                         & (IData)(__PVT___GEN_156))
                                      : (IData)(__PVT___GEN_156));
    } else {
        vlSelfRef.__PVT___GEN_155 = __PVT___T_171;
        vlSelfRef.__PVT___GEN_158 = (1U & ((~ (IData)(__PVT___T_171)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_16)));
        __PVT___GEN_156 = (1U & (~ (IData)(__PVT___T_171)));
        __PVT___GEN_157 = ((IData)(__PVT___T_171) ? 
                           ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                            & (IData)(__PVT___GEN_132))
                            : (IData)(__PVT___GEN_131));
        vlSelfRef.__PVT___GEN_183 = ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19)) 
                                     & (IData)(__PVT___GEN_156));
    }
    vlSelfRef.__PVT___GEN_226 = (1U & ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                        ? ((~ (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_100))
                                        : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                                            ? (IData)(vlSelfRef.__PVT___GEN_124)
                                            : ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                               | (IData)(vlSelfRef.__PVT___GEN_183)))));
    if (vlSelfRef.__VdfgRegularize_h42e69e07_2_27) {
        vlSelfRef.__PVT___GEN_386 = ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_276));
        vlSelfRef.__PVT___GEN_388 = ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_278));
        vlSelfRef.__PVT___GEN_387 = ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_277));
        vlSelfRef.__PVT___GEN_380 = ((IData)(vlSelfRef.__PVT__w_probeackfirst) 
                                     | (IData)(vlSelfRef.__PVT__probeack_last));
        vlSelfRef.__PVT___GEN_381 = ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                     | ((IData)(vlSelfRef.__PVT__probeack_last) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last)));
        vlSelfRef.__PVT___GEN_382 = ((IData)(vlSelfRef.__PVT__w_probeack) 
                                     | ((IData)(vlSelfRef.__PVT__probeack_last) 
                                        & ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last))));
    } else {
        vlSelfRef.__PVT___GEN_386 = vlSelfRef.__PVT___GEN_276;
        vlSelfRef.__PVT___GEN_388 = vlSelfRef.__PVT___GEN_278;
        vlSelfRef.__PVT___GEN_387 = vlSelfRef.__PVT___GEN_277;
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG) {
            vlSelfRef.__PVT___GEN_380 = vlSelfRef.__PVT___GEN_226;
            vlSelfRef.__PVT___GEN_381 = vlSelfRef.__PVT___GEN_226;
            vlSelfRef.__PVT___GEN_382 = vlSelfRef.__PVT___GEN_226;
        } else {
            vlSelfRef.__PVT___GEN_380 = vlSelfRef.__PVT__w_probeackfirst;
            vlSelfRef.__PVT___GEN_381 = vlSelfRef.__PVT__w_probeacklast;
            vlSelfRef.__PVT___GEN_382 = vlSelfRef.__PVT__w_probeack;
        }
    }
    vlSelfRef.__PVT___GEN_160 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                                 & (IData)(vlSelfRef.__PVT___GEN_158));
    __PVT___GEN_159 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                       & (IData)(__PVT___GEN_157));
    vlSelfRef.__PVT___GEN_184 = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_36)
                                  ? ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((IData)(vlSelfRef.__PVT___T_185)
                                          ? (IData)(__PVT___GEN_159)
                                          : (IData)(__PVT___GEN_157))
                                      : (IData)(__PVT___GEN_157))
                                  : ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19)
                                      ? ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                         & (IData)(__PVT___GEN_159))
                                      : (IData)(__PVT___GEN_157)));
    vlSelfRef.__PVT___GEN_365 = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_23)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_33)
                                      ? ((~ (((((IData)(vlSelfRef.__PVT__req_channel) 
                                                >> 1U) 
                                               & (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                              | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                             & (IData)(vlSelfRef.__PVT__probeAckDataThrough))) 
                                         & (IData)(__PVT___GEN_279))
                                      : ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_22)
                                          ? ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                             & (IData)(__PVT___GEN_279))
                                          : (IData)(__PVT___GEN_279)))
                                  : (IData)(__PVT___GEN_279));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4__2(VTestTop_L2L3L2_MSHR_32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___T_248;
    __PVT___T_248 = 0;
    CData/*0:0*/ __PVT___T_254;
    __PVT___T_254 = 0;
    // Body
    vlSelfRef.__PVT__nest_c_way_match = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.io_status_bits_way) 
                                         == (IData)(vlSelfRef.io_status_bits_way));
    vlSelfRef.__PVT___GEN_343 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter_2__DOT__chosenOH) 
                                          >> 4U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter_2_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_client_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_27)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientstag))));
    vlSelfRef.__PVT___GEN_341 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb__DOT__chosenOH) 
                                          >> 4U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper) 
                                                  | (~ (IData)(vlSelfRef.__PVT___T_60)))
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                     | ((~ 
                                                         ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                          & ((IData)(vlSelfRef.__PVT__preferCache) 
                                                             & ((4U 
                                                                 == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                                | ((6U 
                                                                    == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                                   | (IData)(vlSelfRef.__PVT__prefetch_need_data)))))) 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_36)
                                                            ? 
                                                           ((1U 
                                                             != (IData)(vlSelfRef.__PVT__iam))
                                                             ? 
                                                            ((IData)(vlSelfRef.__PVT___T_185)
                                                              ? (IData)(vlSelfRef.__PVT___GEN_160)
                                                              : (IData)(vlSelfRef.__PVT___GEN_158))
                                                             : (IData)(vlSelfRef.__PVT___GEN_158))
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19)
                                                             ? (IData)(vlSelfRef.__PVT___GEN_160)
                                                             : (IData)(vlSelfRef.__PVT___GEN_158)))))))
                                           : (IData)(vlSelfRef.__PVT__s_wbselftag))));
    vlSelfRef.__PVT___T_249 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT__chosen_reg) 
                                 >> 4U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT____VdfgRegularize_hae52cd36_0_26)) 
                               & (IData)(vlSelfRef.io_tasks_source_b_valid));
    __PVT___T_254 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT__chosen_reg) 
                       >> 4U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT____VdfgRegularize_h20ebb837_0_26)) 
                     & (IData)(vlSelfRef.io_tasks_source_c_valid));
    vlSelfRef.__PVT___GEN_338 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT__chosen_reg) 
                                          >> 4U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT____VdfgRegularize_h1ec93158_0_26)) 
                                        & (IData)(vlSelfRef.io_tasks_source_d_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? (IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                     | (5U 
                                                        == (IData)(vlSelfRef.__PVT__req_opcode)))))
                                           : (IData)(vlSelfRef.__PVT__s_execute))));
    vlSelfRef.__PVT___GEN_340 = (1U & ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH) 
                                         >> 4U) & (IData)(vlSelfRef.io_tasks_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? 
                                                  (~ (IData)(vlSelfRef.__PVT___GEN_16))
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.__PVT___GEN_16) 
                                                    | (IData)(vlSelfRef.__PVT__req_opcode))))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.__PVT__req_channel))
                                                   ? 
                                                  ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                   | (~ (IData)(vlSelfRef.__PVT___T_81)))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                   | ((~ (IData)(
                                                                 (((0U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                                                   & (~ (IData)(vlSelfRef.__PVT___GEN_20))) 
                                                                  & (IData)(vlSelfRef.__PVT___GEN_16)))) 
                                                      & ((IData)(vlSelfRef.__PVT__req_acquire)
                                                          ? 
                                                         ((~ 
                                                           ((IData)(vlSelfRef.__PVT___T_146) 
                                                            & ((IData)(vlSelfRef.__PVT___GEN_16) 
                                                               | (IData)(vlSelfRef.__PVT__preferCache)))) 
                                                          & (IData)(vlSelfRef.__PVT___GEN_184))
                                                          : (IData)(vlSelfRef.__PVT___GEN_184))))))
                                           : (IData)(vlSelfRef.__PVT__s_wbselfdir))));
    vlSelfRef.__PVT___GEN_342 = (1U & ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter_1__DOT__chosenOH) 
                                         >> 4U) & (IData)(vlSelfRef.io_tasks_client_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_100)
                                                   : 
                                                  (~ 
                                                   (((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.__PVT___GEN_23))) 
                                                    | ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10) 
                                                       & ((IData)(vlSelfRef.__PVT___GEN_23) 
                                                          >> 1U)))))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.__PVT__req_channel))
                                                   ? (IData)(vlSelfRef.__PVT___GEN_124)
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                   | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                      & (IData)(vlSelfRef.__PVT___GEN_183)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientsdir))));
    __PVT___T_248 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT__chosen_reg) 
                       >> 4U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT____VdfgRegularize_h3b69c469_0_26)) 
                     & (IData)(vlSelfRef.io_tasks_source_a_valid));
    vlSelfRef.__PVT___T_261 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT__chosen_reg) 
                                 >> 4U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT____VdfgRegularize_h5d7114fd_0_26)) 
                               & (IData)(vlSelfRef.io_tasks_sink_c_valid));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_30 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4_io_resps_sink_d_valid) 
                                                 & (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_413 = (1U & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_resp_valid) 
                                        & (4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s4_req_sinkId))) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
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
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))))
                                           : (IData)(vlSelfRef.__PVT__w_putwritten))));
    vlSelfRef.__PVT___GEN_335 = ((IData)(vlSelfRef.__PVT___T_249) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_226)
                                     : (IData)(vlSelfRef.__PVT__s_probe)));
    vlSelfRef.__PVT___GEN_337 = (1U & ((IData)(__PVT___T_254) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
                                           ? (1U & 
                                              ((2U 
                                                != 
                                                (6U 
                                                 & (IData)(vlSelfRef.__PVT__req_channel))) 
                                               | (~ 
                                                  ((~ (IData)(vlSelfRef.__PVT__will_probeack_through)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper))))))
                                           : (IData)(vlSelfRef.__PVT__s_probeack))));
    vlSelfRef.__PVT___GEN_336 = ((IData)(__PVT___T_254) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
                                     ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                         ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                             ? (IData)(vlSelfRef.__PVT___GEN_102)
                                             : (IData)(vlSelfRef.__PVT___GEN_109))
                                         : (IData)(vlSelfRef.__PVT___GEN_216))
                                     : (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.__PVT___GEN_333 = ((IData)(__PVT___T_248) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_236)
                                     : (IData)(vlSelfRef.__PVT__s_acquire)));
    vlSelfRef.__PVT___GEN_334 = (1U & ((IData)(__PVT___T_248) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_4_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__bypassPut)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))))
                                           : (IData)(vlSelfRef.__PVT__s_transferput))));
    vlSelfRef.__PVT___GEN_346 = (1U & ((IData)(vlSelfRef.__PVT___T_261)
                                        ? ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_272))
                                        : (IData)(vlSelfRef.__PVT___GEN_272)));
    vlSelfRef.__PVT___GEN_405 = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_31)
                                      ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last) 
                                         | (IData)(vlSelfRef.__PVT__w_grantlast))
                                      : (IData)(vlSelfRef.__PVT___GEN_387))
                                  : (IData)(vlSelfRef.__PVT___GEN_387));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5__0(VTestTop_L2L3L2_MSHR_32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__probe_dirty;
    __Vdly__probe_dirty = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_0;
    __Vdly__meta_reg_self_clientStates_0 = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_1;
    __Vdly__meta_reg_self_clientStates_1 = 0;
    // Body
    __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
    __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    __Vdly__probe_dirty = vlSelfRef.__PVT__probe_dirty;
    if (vlSelfRef.__PVT__change_self_meta) {
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_toN) {
            __Vdly__meta_reg_self_clientStates_0 = 0U;
            __Vdly__meta_reg_self_clientStates_1 = 0U;
            vlSelfRef.__PVT__meta_reg_self_state = 0U;
        } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_toB) {
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_0))) {
                __Vdly__meta_reg_self_clientStates_0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_1))) {
                __Vdly__meta_reg_self_clientStates_1 = 1U;
            }
            vlSelfRef.__PVT__meta_reg_self_state = 1U;
        } else {
            __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_17;
            __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_18;
            vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_19;
        }
        vlSelfRef.__PVT__meta_reg_self_hit = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_toN))) 
                                              && (IData)(vlSelfRef.__PVT___GEN_16));
        vlSelfRef.__PVT__meta_reg_self_dirty = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_c_set_dirty) 
                                                | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_set_dirty) 
                                                   | ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_clr_dirty)) 
                                                      & (IData)(vlSelfRef.__PVT___GEN_20))));
    } else {
        __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_17;
        __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_18;
        vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_19;
        vlSelfRef.__PVT__meta_reg_self_hit = vlSelfRef.__PVT___GEN_16;
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__meta_reg_self_dirty = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
        }
    }
    vlSelfRef.__PVT__someClientHasProbeAckData = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                      && (IData)(vlSelfRef.__PVT___GEN_356)));
    vlSelfRef.__PVT__transmit_from_other_client_latch 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__transmit_from_other_client));
    vlSelfRef.__PVT__s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                  | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_333))
                                      : (IData)(vlSelfRef.__PVT___GEN_333)));
    vlSelfRef.__PVT__w_probeackfirst = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_380));
    vlSelfRef.__PVT__s_execute = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_338));
    vlSelfRef.__PVT__w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_31) 
                                            | (IData)(vlSelfRef.__PVT___GEN_386))
                                         : (IData)(vlSelfRef.__PVT___GEN_386)));
    vlSelfRef.__PVT__w_grant = ((IData)(vlSymsp->TOP.reset) 
                                | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                    ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_31)
                                        ? (((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                            & (IData)(vlSelfRef.__PVT__req_size)) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last))
                                        : (IData)(vlSelfRef.__PVT___GEN_388))
                                    : (IData)(vlSelfRef.__PVT___GEN_388)));
    vlSelfRef.__PVT__s_probe = ((IData)(vlSymsp->TOP.reset) 
                                | (IData)(vlSelfRef.__PVT___GEN_335));
    if (vlSelfRef.__PVT__change_clients_meta_1) {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_1_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_12));
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_1_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_11));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = vlSelfRef.__PVT___GEN_12;
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = vlSelfRef.__PVT___GEN_11;
    }
    if (vlSelfRef.__PVT__change_clients_meta_0) {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_0_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_10));
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_0_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_9));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = vlSelfRef.__PVT___GEN_10;
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = vlSelfRef.__PVT___GEN_9;
    }
    vlSelfRef.__PVT__promoteT_safe = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                          ? ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                             & (IData)(vlSelfRef.__PVT___GEN_282))
                                          : (IData)(vlSelfRef.__PVT___GEN_282)));
    vlSelfRef.__PVT__w_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_382));
    vlSelfRef.__PVT__s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_23)
                                       ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_33)
                                           ? (IData)(vlSelfRef.__PVT___GEN_337)
                                           : ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_22)) 
                                              & (IData)(vlSelfRef.__PVT___GEN_337)))
                                       : (IData)(vlSelfRef.__PVT___GEN_337)));
    vlSelfRef.__PVT__s_release = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_336));
    vlSelfRef.__PVT__preferCache_latch = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                          && (IData)(vlSelfRef.__PVT__preferCache));
    vlSelfRef.__PVT__w_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_412));
    vlSelfRef.__PVT__w_putwritten = ((IData)(vlSymsp->TOP.reset) 
                                     | (IData)(vlSelfRef.__PVT___GEN_413));
    vlSelfRef.__PVT__w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_405));
    vlSelfRef.__PVT__s_transferput = ((IData)(vlSymsp->TOP.reset) 
                                      | (IData)(vlSelfRef.__PVT___GEN_334));
    vlSelfRef.__PVT__w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                         ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (IData)(vlSelfRef.__PVT___GEN_365))
                                         : (IData)(vlSelfRef.__PVT___GEN_365)));
    vlSelfRef.__PVT__w_probeacklast = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_381));
    vlSelfRef.__PVT__s_writerelease = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__PVT___T_261)
                                           ? ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                              | (IData)(vlSelfRef.__PVT___GEN_271))
                                           : (IData)(vlSelfRef.__PVT___GEN_271)));
    if (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5_io_resps_sink_c_valid))) {
        vlSelfRef.__PVT__io_tasks_sink_c_bits_bufIdx_r 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_bufIdx;
    }
    vlSelfRef.__PVT__nested_c_hit_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                         && ((1U & 
                                              (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG))) 
                                             && (IData)(vlSelfRef.__PVT__nested_c_hit)));
    vlSelfRef.__PVT__acquire_flag = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG))) 
                                         && (IData)(vlSelfRef.__PVT___GEN_91)));
    vlSelfRef.__PVT__s_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                       ? ((IData)(vlSelfRef.__PVT___T_294)
                                           ? ((~ ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__bypassPut_latch_reg)))) 
                                              & (IData)(vlSelfRef.__PVT___GEN_339))
                                           : (IData)(vlSelfRef.__PVT___GEN_339))
                                       : (IData)(vlSelfRef.__PVT___GEN_339)));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_5_valid) {
        vlSelfRef.__PVT__req_source = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source;
        vlSelfRef.__PVT__req_dirty = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_dirty;
        vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_needProbeAckData;
        vlSelfRef.__PVT__req_fromProbeHelper = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromProbeHelper;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__transmit_from_other_client_reg = 0U;
        vlSelfRef.__PVT__a_c_through_reg = 0U;
        vlSelfRef.__PVT__highest_perm_reg_reg = 0U;
    } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__transmit_from_other_client_reg 
            = vlSelfRef.__PVT___transmit_from_other_client_T_12;
        vlSelfRef.__PVT__a_c_through_reg = vlSelfRef.__PVT___GEN_16;
        vlSelfRef.__PVT__highest_perm_reg_reg = (((IData)(vlSelfRef.__PVT___highest_perm_T_2) 
                                                  > (IData)(vlSelfRef.__PVT___highest_perm_T_6))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT___GEN_16)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_19)
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
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__meta_reg_clients_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_self_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_self_way = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
        vlSelfRef.__PVT__meta_reg_clients_way = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__way_s2;
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Directory result was sent to mismatch MSHR(mshrId: 5, resultId:%2#)\n    at MSHR.scala:60 assert(\n",0,
                      4,(((((IData)((0U != (0xffU & 
                                            ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                             >> 8U)))) 
                            << 1U) | (0U != (0xfU & 
                                             ((IData)(vlSelfRef.__PVT___T_5) 
                                              >> 4U)))) 
                          << 2U) | (((IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelfRef.__PVT___T_7) 
                                                >> 2U)))) 
                                     << 1U) | (IData)(
                                                      (0U 
                                                       != 
                                                       (0xaU 
                                                        & (IData)(vlSelfRef.__PVT___T_7)))))));
    }
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5_io_resps_sink_d_valid))
                                  ? (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                        | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                       | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                      | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                      ? (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_283))
                                  : (IData)(vlSelfRef.__PVT___GEN_283)));
    vlSelfRef.__PVT__gotDirty = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (((IData)(vlSelfRef.__PVT__req_valid) 
                                      & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5_io_resps_sink_d_valid))
                                      ? (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                          | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                          ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_dirty)
                                          : (IData)(vlSelfRef.__PVT___GEN_290))
                                      : (IData)(vlSelfRef.__PVT___GEN_290)));
    vlSelfRef.__PVT__no_schedule_REG = ((IData)(vlSymsp->TOP.reset) 
                                        | (((((IData)(vlSelfRef.__PVT__s_wbselfdir) 
                                              & (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                             & (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                            & (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                           & (IData)(vlSelfRef.__PVT__meta_valid)));
    vlSelfRef.__PVT__inv_self_dir = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && (((IData)(vlSelfRef.__PVT__req_valid) 
                                          & (IData)(vlSelfRef.__PVT__sink_c_resp_valid))
                                          ? ((IData)(vlSelfRef.__PVT___T_311)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_26) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_288))
                                              : (IData)(vlSelfRef.__PVT___GEN_288))
                                          : (IData)(vlSelfRef.__PVT___GEN_288)));
    if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            vlSelfRef.__PVT__sink = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_sink;
        }
    }
    vlSelfRef.__PVT__bad_grant = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (((IData)(vlSelfRef.__PVT__req_valid) 
                                       & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5_io_resps_sink_d_valid))
                                       ? (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                             | (5U 
                                                == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                            | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                           ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_denied)
                                           : (IData)(vlSelfRef.__PVT___GEN_286))
                                       : (IData)(vlSelfRef.__PVT___GEN_286)));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_5_valid) {
        vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_bufIdx;
    } else if (((IData)(vlSelfRef.__PVT__req_valid) 
                & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            if ((0U != (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))) {
                vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_bufIdx;
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
                                          | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                         | (IData)(vlSelfRef.__PVT__nested_c_hit)));
            vlSelfRef.__PVT__probes_done = vlSelfRef.__PVT___probeack_last_T;
        } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) {
            __Vdly__probe_dirty = 0U;
            vlSelfRef.__PVT__probes_done = 0U;
        }
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__a_do_release = ((1U & 
                                              (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 2U))) 
                                             && ((~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17)) 
                                                    & (IData)(vlSelfRef.__PVT___T_133))));
            vlSelfRef.__PVT__a_do_probe = ((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 2U))) 
                                           && ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                               & ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17)) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_36)
                                                      ? 
                                                     ((1U 
                                                       != (IData)(vlSelfRef.__PVT__iam))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT___T_185) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_155))
                                                       : (IData)(vlSelfRef.__PVT___GEN_155))
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19) 
                                                      | (IData)(vlSelfRef.__PVT___GEN_155))))));
        }
        if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSelfRef.__PVT__sinkc_resp_last))) {
            if ((0x100U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_0 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                          >> 8U)))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_1 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
        }
        if (vlSelfRef.io_status_bits_will_free) {
            vlSelfRef.__PVT__releaseThrough = 0U;
            vlSelfRef.__PVT__releaseDrop = 0U;
            vlSelfRef.__PVT__probeAckDataThrough = 0U;
            vlSelfRef.__PVT__probeAckDataDrop = 0U;
            vlSelfRef.__PVT__probeAckDataSave = 0U;
        } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) {
            if (vlSelfRef.__PVT__req_fromCmoHelper) {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                       & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                          & (~ (IData)(vlSelfRef.__PVT___GEN_16))));
                vlSelfRef.__PVT__probeAckDataDrop = 
                    (0U == (IData)(vlSelfRef.__PVT__req_param));
                vlSelfRef.__PVT__probeAckDataSave = 
                    ((IData)(vlSelfRef.__PVT___probeAckDataSave_T_4) 
                     & (IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_8));
            } else {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = vlSelfRef.__PVT___GEN_305;
                vlSelfRef.__PVT__probeAckDataDrop = vlSelfRef.__PVT___GEN_306;
                vlSelfRef.__PVT__probeAckDataSave = vlSelfRef.__PVT___GEN_307;
            }
        }
    }
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    vlSelfRef.__PVT__REG = (1U & ((IData)(vlSymsp->TOP.reset) 
                                  | ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)) 
                                     | ((IData)(vlSelfRef.__PVT__req_valid) 
                                        & (~ (IData)(vlSelfRef.__PVT__meta_valid))))));
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_1)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: L3 Release should always hit: mshrId:[ 5] addr: [%x]\n    at MSHR.scala:469 assert(RegNext(!meta_valid || !req.fromC || req.fromCmoHelper || clients_meta(iam).hit),\n",0,
                      16,(((IData)(vlSelfRef.__PVT__req_tag) 
                           << 8U) | ((IData)(vlSelfRef.__PVT__req_set) 
                                     << 1U)));
    }
    if (VL_UNLIKELY(((((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) 
                         & (2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                        & (IData)(vlSelfRef.__PVT___GEN_16)) 
                       & (~ (IData)(vlSelfRef.__PVT___T_81))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((1U == (IData)(vlSelfRef.__PVT___GEN_19)) 
                           & (1U == (IData)(vlSelfRef.__PVT__req_param))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Probe not supported: [self: %1#] [req: %1#]\n\n    at MSHR.scala:675 assert(probe_is_report(self_meta.state, req.param),\n",0,
                      2,vlSelfRef.__PVT___GEN_19,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_472) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_9)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_10) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_10))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:685 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_10,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    vlSelfRef.__PVT__REG_1 = (1U & ((((~ (IData)(vlSelfRef.__PVT__meta_valid)) 
                                      | (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                            >> 2U))) 
                                     | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                    | (IData)(vlSelfRef.__PVT___GEN_27)));
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_472) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_11)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_12) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_12))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:685 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_12,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_471) 
                        & (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                              >> 1U))) & (~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((5U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                           | (IData)(vlSelfRef.__PVT__req_preferCache)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Hint should always preferCache!\n    at MSHR.scala:830 assert(req.opcode =/= Hint || req.preferCache, \"Hint should always preferCache!\")\n",0);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__req_valid) 
                       & ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_21) 
                          & ((IData)(vlSelfRef.__PVT__client_dir_conflict) 
                             & (IData)(vlSelfRef.__PVT__probe_helper_finish)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ (IData)(vlSelfRef.__PVT__REG_2))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Error L3: meta still conflict when probe helper finish! mshrId:  5\n    at MSHR.scala:936 assert(RegNext(!clients_meta_busy, true.B),\n",0);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT___T_249) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (0U == (IData)(vlSelfRef.__PVT__probe_clients))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid probe task\n\n    at MSHR.scala:1250 assert(io.tasks.source_b.bits.clients =/= 0.U, \"Invalid probe task\\n\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_3)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:1441 assert(RegNext(!req_valid || !io.alloc.valid, true.B)) // TODO: support fully-pipelined\n",0);
    }
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__client_dir_conflict = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_21) 
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
                                                 & ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                    & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                        & (0U 
                                                           != (IData)(vlSelfRef.__PVT___GEN_12))) 
                                                       | ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                          | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                             >> 1U)))))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? (IData)(vlSelfRef.__PVT___clients_have_T_T_3)
                                                   : (IData)(vlSelfRef.__PVT___GEN_11))
                                                  : (IData)(vlSelfRef.__PVT___GEN_11)))) 
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
                                                   & ((IData)(vlSelfRef.__PVT___GEN_9) 
                                                      & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                                         | ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                                                               >> 1U)))))
                                                : ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__req_param))
                                                     ? (IData)(vlSelfRef.__PVT___clients_have_T_T_1)
                                                     : (IData)(vlSelfRef.__PVT___GEN_9))
                                                    : (IData)(vlSelfRef.__PVT___GEN_9)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__bypassPut_latch_reg = vlSelfRef.__PVT__bypassPut;
    } else if (vlSelfRef.io_status_bits_will_free) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    }
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_5_valid) {
        vlSelfRef.__PVT__req_size = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_size;
        vlSelfRef.__PVT__req_off = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_off;
        vlSelfRef.__PVT__req_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_tag;
        vlSelfRef.__PVT__req_preferCache = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_preferCache;
        vlSelfRef.__PVT__req_set = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_set;
        vlSelfRef.__PVT__req_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_opcode;
        vlSelfRef.__PVT__req_fromCmoHelper = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromCmoHelper;
        vlSelfRef.__PVT__iam = ((0U == (IData)(vlSelfRef.__PVT__clientBitOH))
                                 ? 2U : (1U & ((IData)(vlSelfRef.__PVT__clientBitOH) 
                                               >> 1U)));
        vlSelfRef.__PVT__req_channel = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_channel;
        vlSelfRef.__PVT__req_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_param;
    }
    vlSelfRef.__PVT__meta_reg_self_clientStates_0 = __Vdly__meta_reg_self_clientStates_0;
    vlSelfRef.__PVT__meta_reg_self_clientStates_1 = __Vdly__meta_reg_self_clientStates_1;
    vlSelfRef.__PVT__probe_dirty = __Vdly__probe_dirty;
    vlSelfRef.__PVT__no_wait = ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                & ((IData)(vlSelfRef.__PVT__w_grantlast) 
                                   & ((IData)(vlSelfRef.__PVT__w_releaseack) 
                                      & ((IData)(vlSelfRef.__PVT__w_grantack) 
                                         & (IData)(vlSelfRef.__PVT__w_putwritten)))));
    vlSelfRef.__PVT__s_writeprobe = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_23)
                                         ? ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_33)) 
                                            & (IData)(vlSelfRef.__PVT___GEN_346))
                                         : (IData)(vlSelfRef.__PVT___GEN_346)));
    vlSelfRef.__PVT___GEN_91 = (1U & ((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                      | (IData)(vlSelfRef.__PVT__acquire_flag)));
    vlSelfRef.io_tasks_source_e_valid = ((~ (IData)(vlSelfRef.__PVT__s_grantack)) 
                                         & (IData)(vlSelfRef.__PVT__w_grantfirst));
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
                                       | (IData)(vlSelfRef.__PVT___GEN_343));
    vlSelfRef.__PVT__s_wbselftag = ((IData)(vlSymsp->TOP.reset) 
                                    | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                        ? ((IData)(vlSelfRef.__PVT___T_311)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_26) 
                                               | (IData)(vlSelfRef.__PVT___GEN_341))
                                            : (IData)(vlSelfRef.__PVT___GEN_341))
                                        : (IData)(vlSelfRef.__PVT___GEN_341)));
    vlSelfRef.__PVT__meta_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                   && ((1U & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                       && (IData)(vlSelfRef.__PVT___GEN_0)));
    vlSelfRef.__PVT__s_wbselfdir = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_340));
    vlSelfRef.__PVT__s_wbclientsdir = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_342));
    vlSelfRef.__PVT__probe_helper_finish = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                            && ((1U 
                                                 & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                && (IData)(vlSelfRef.__PVT___GEN_318)));
    vlSelfRef.__PVT__REG_3 = (1U & ((IData)(vlSymsp->TOP.reset) 
                                    | ((~ (IData)(vlSelfRef.__PVT__req_valid)) 
                                       | (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_5_valid)))));
    vlSelfRef.io_status_bits_will_free = ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & ((IData)(vlSelfRef.__PVT__s_execute) 
                                             & ((((IData)(vlSelfRef.__PVT__s_probeack) 
                                                  & ((IData)(vlSelfRef.__PVT__no_schedule_REG) 
                                                     & (IData)(vlSelfRef.__PVT__s_grantack))) 
                                                 & (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                                & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                   & (IData)(vlSelfRef.__PVT__s_writeprobe)))));
    vlSelfRef.__PVT__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT___GEN_423));
    vlSelfRef.__PVT___transmit_from_other_client_T_2 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                           >> 1U))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_36 = ((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                      >> 1U))) 
                                                 & (4U 
                                                    != (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___io_status_bits_nestB_T_6 = (1U 
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
    vlSelfRef.__VdfgRegularize_h42e69e07_2_21 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                                 & (IData)(vlSelfRef.__PVT__req_acquire));
    vlSelfRef.__PVT___probe_clients_T_3 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                           & (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
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
    vlSelfRef.__PVT___GEN_330 = ((6U == (IData)(vlSelfRef.__PVT__req_opcode))
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

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5__1(VTestTop_L2L3L2_MSHR_32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5__1\n"); );
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
    CData/*0:0*/ __PVT___T_263;
    __PVT___T_263 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_0_T_38;
    __PVT___new_self_meta_clientStates_0_T_38 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_1_T_38;
    __PVT___new_self_meta_clientStates_1_T_38 = 0;
    CData/*0:0*/ __PVT__nested_client_match;
    __PVT__nested_client_match = 0;
    CData/*0:0*/ __PVT___GEN_123;
    __PVT___GEN_123 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    CData/*0:0*/ __PVT___T_162;
    __PVT___T_162 = 0;
    CData/*0:0*/ __PVT___T_164;
    __PVT___T_164 = 0;
    CData/*0:0*/ __PVT___GEN_132;
    __PVT___GEN_132 = 0;
    CData/*0:0*/ __PVT___T_171;
    __PVT___T_171 = 0;
    CData/*0:0*/ __PVT___GEN_156;
    __PVT___GEN_156 = 0;
    CData/*0:0*/ __PVT___GEN_157;
    __PVT___GEN_157 = 0;
    CData/*0:0*/ __PVT___GEN_159;
    __PVT___GEN_159 = 0;
    CData/*0:0*/ __PVT___GEN_279;
    __PVT___GEN_279 = 0;
    CData/*0:0*/ __PVT___will_save_probeack_T_2;
    __PVT___will_save_probeack_T_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_5;
    __VdfgRegularize_h42e69e07_2_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_29;
    __VdfgRegularize_h42e69e07_2_29 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_35;
    __VdfgRegularize_h42e69e07_2_35 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_37;
    __VdfgRegularize_h42e69e07_2_37 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_39;
    __VdfgRegularize_h42e69e07_2_39 = 0;
    // Body
    vlSelfRef.__PVT__client_set_match = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__req_set) 
                                         == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.__PVT__nest_c_tag_match = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_tag) 
                                         == (IData)(vlSelfRef.__PVT__req_tag));
    vlSelfRef.__PVT___probeack_last_T = ((IData)(vlSelfRef.__PVT__probes_done) 
                                         | ((2U & (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                     >> 8U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                >> 8U))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_31 = ((4U 
                                                  == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                 | ((5U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                    | ((1U 
                                                        == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                       | (0U 
                                                          == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_33 = (1U 
                                                 & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode) 
                                                    | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData)));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_22 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                     >> 1U) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                                       | ((IData)(vlSelfRef.__PVT__probeAckDataThrough) 
                                                          & (5U 
                                                             != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param))))));
    vlSelfRef.__PVT___change_self_meta_T_2 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_set) 
                                              == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.io_tasks_source_b_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_probe)) 
                                            & (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.io_tasks_source_a_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5_io_enable) 
                                         & (((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                             | (~ (IData)(vlSelfRef.__PVT__s_transferput))) 
                                            & ((IData)(vlSelfRef.__PVT__s_probe) 
                                               & ((IData)(vlSelfRef.__PVT__s_release) 
                                                  & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                                     & (IData)(vlSelfRef.__PVT__can_start))))));
    vlSelfRef.io_tasks_sink_c_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5_io_enable) 
                                       & ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                          | ((~ (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                             & ((~ (IData)(vlSelfRef.__PVT__releaseSave)) 
                                                | (IData)(vlSelfRef.__PVT__s_release)))));
    vlSelfRef.io_tasks_source_d_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_execute)) 
                                            & ((IData)(vlSelfRef.__PVT__can_start) 
                                               & ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                                  & ((IData)(vlSelfRef.__PVT__w_grant) 
                                                     & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                        & (IData)(vlSelfRef.__PVT__w_probeacklast)))))));
    vlSelfRef.io_tasks_source_c_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_release)) 
                                            | ((~ (IData)(vlSelfRef.__PVT__s_probeack)) 
                                               & ((IData)(vlSelfRef.__PVT__s_writerelease) 
                                                  & (IData)(vlSelfRef.__PVT__w_probeack)))));
    __VdfgRegularize_h42e69e07_2_29 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5_io_enable) 
                                       & ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & (IData)(vlSelfRef.__PVT__can_start)));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) 
                               | (IData)(vlSelfRef.__PVT__meta_valid));
    vlSelfRef.__PVT___GEN_283 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_290 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_288 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__inv_self_dir));
    vlSelfRef.__PVT___GEN_286 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__bad_grant));
    vlSelfRef.__PVT___GEN_282 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__promoteT_safe));
    vlSelfRef.__PVT___GEN_471 = ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                     >> 2U)) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG));
    vlSelfRef.__PVT___GEN_272 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__s_writeprobe));
    vlSelfRef.__PVT__clientBitOH = ((2U & ((~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                               >> 8U)) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                             >> 8U)));
    vlSelfRef.__PVT__sink_c_resp_valid = ((~ (IData)(vlSelfRef.__PVT__w_probeacklast)) 
                                          & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5_io_resps_sink_c_valid));
    vlSelfRef.__PVT___T_5 = (0xffU & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                       >> 8U) | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg)));
    vlSelfRef.__PVT___GEN_423 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_5_valid) 
                                 | ((~ (IData)(vlSelfRef.io_status_bits_will_free)) 
                                    & (IData)(vlSelfRef.__PVT__req_valid)));
    vlSelfRef.__PVT___GEN_318 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_b_status_probeHelperFinish) 
                                     & (IData)(vlSelfRef.__PVT__client_set_match))) 
                                 | (IData)(vlSelfRef.__PVT__probe_helper_finish));
    vlSelfRef.__PVT__probeack_last = ((IData)(vlSelfRef.__PVT___probeack_last_T) 
                                      == (IData)(vlSelfRef.__PVT__probe_clients));
    __PVT__nested_client_match = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_tag) 
                                   == ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                        ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag)
                                        : (IData)(vlSelfRef.__PVT__meta_reg_clients_tag))) 
                                  & (IData)(vlSelfRef.__PVT___change_self_meta_T_2));
    vlSelfRef.io_tasks_client_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                                 & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.io_tasks_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                          & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.io_tasks_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselfdir)) 
                                          & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.io_tasks_client_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                                 & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.__PVT___GEN_472 = ((IData)(vlSelfRef.__PVT___GEN_471) 
                                 & ((IData)(vlSelfRef.__PVT__req_channel) 
                                    >> 1U));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_271 = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U)) 
                                           | ((~ (IData)(vlSelfRef.__PVT__req_opcode)) 
                                              | (IData)(vlSelfRef.__PVT__req_fromCmoHelper))));
        vlSelfRef.io_status_bits_way = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
        vlSelfRef.__PVT___GEN_16 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__hit_s2;
    } else {
        vlSelfRef.__PVT___GEN_271 = (1U & (IData)(vlSelfRef.__PVT__s_writerelease));
        vlSelfRef.io_status_bits_way = vlSelfRef.__PVT__meta_reg_self_way;
        vlSelfRef.__PVT___GEN_16 = vlSelfRef.__PVT__meta_reg_self_hit;
    }
    vlSelfRef.__PVT___GEN_102 = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                                          & (IData)(vlSelfRef.__PVT___GEN_16))));
    vlSelfRef.__PVT___T_60 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                    & (IData)(vlSelfRef.__PVT__req_opcode)));
    __VdfgRegularize_h42e69e07_2_35 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                    >> 1U)))));
    __VdfgRegularize_h42e69e07_2_37 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                             | (IData)(vlSelfRef.__PVT__req_needT)));
    vlSelfRef.__PVT___T_146 = (1U & (~ ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                        & (7U == (IData)(vlSelfRef.__PVT__req_opcode)))));
    vlSelfRef.__PVT___a_c_through_T_3 = ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                         & (IData)(vlSelfRef.__PVT__nest_c_tag_match));
    vlSelfRef.__PVT__nested_c_hit = (((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                      & (((IData)(vlSelfRef.__PVT__meta_valid) 
                                          & ((IData)(vlSelfRef.__PVT__req_channel) 
                                             & (IData)(vlSelfRef.__PVT___change_self_meta_T_2))) 
                                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT____VdfgRegularize_hf4af413a_4_0) 
                                            & ((IData)(vlSelfRef.__PVT__req_tag) 
                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_tag))))) 
                                     | (IData)(vlSelfRef.__PVT__nested_c_hit_reg));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_14 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT___GEN_20 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
    } else {
        vlSelfRef.__PVT___GEN_14 = vlSelfRef.__PVT__meta_reg_self_tag;
        vlSelfRef.__PVT___GEN_20 = vlSelfRef.__PVT__meta_reg_self_dirty;
    }
    vlSelfRef.__PVT___new_self_meta_dirty_T_13 = ((IData)(vlSelfRef.__PVT___GEN_20) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    vlSelfRef.__PVT___new_self_meta_dirty_T = ((IData)(vlSelfRef.__PVT___GEN_16) 
                                               & (IData)(vlSelfRef.__PVT___GEN_20));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_17 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_0;
        vlSelfRef.__PVT___GEN_18 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_1;
    } else {
        vlSelfRef.__PVT___GEN_17 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
        vlSelfRef.__PVT___GEN_18 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    }
    __PVT__meta_no_clients = ((0U == (IData)(vlSelfRef.__PVT___GEN_17)) 
                              & (0U == (IData)(vlSelfRef.__PVT___GEN_18)));
    vlSelfRef.__PVT___GEN_19 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                 ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_state)
                                 : (IData)(vlSelfRef.__PVT__meta_reg_self_state));
    vlSelfRef.__PVT___T_81 = ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                              | (((IData)(vlSelfRef.__PVT___GEN_19) 
                                  >> 1U) & (1U == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_38 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_19) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.__PVT__req_param))));
    __PVT__replace_need_release = (((IData)(vlSelfRef.__PVT___GEN_19) 
                                    > (((IData)(vlSelfRef.__PVT___GEN_17) 
                                        > (IData)(vlSelfRef.__PVT___GEN_18))
                                        ? (IData)(vlSelfRef.__PVT___GEN_17)
                                        : (IData)(vlSelfRef.__PVT___GEN_18))) 
                                   | ((IData)(vlSelfRef.__PVT___GEN_20) 
                                      & ((IData)(vlSelfRef.__PVT___GEN_19) 
                                         >> 1U)));
    if (vlSelfRef.__PVT___GEN_16) {
        __PVT___highest_perm_except_me_T = vlSelfRef.__PVT___GEN_19;
        vlSelfRef.__PVT___highest_perm_T_2 = vlSelfRef.__PVT___GEN_19;
    } else {
        __PVT___highest_perm_except_me_T = 0U;
        vlSelfRef.__PVT___highest_perm_T_2 = 0U;
    }
    __VdfgRegularize_h42e69e07_2_5 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                            | (~ ((IData)(vlSelfRef.__PVT___GEN_19) 
                                                  >> 1U))));
    vlSelfRef.__PVT__change_self_meta = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                         & (((0U != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                             & (IData)(vlSelfRef.__PVT___change_self_meta_T_2)) 
                                            & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_tag) 
                                               == (IData)(vlSelfRef.__PVT___GEN_14))));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_12 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_0_state;
    } else {
        vlSelfRef.__PVT___GEN_12 = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
    }
    vlSelfRef.__PVT___GEN_23 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_12)
                                 : (IData)(vlSelfRef.__PVT___GEN_10));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_11 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_9 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_0_hit;
    } else {
        vlSelfRef.__PVT___GEN_11 = vlSelfRef.__PVT__meta_reg_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_9 = vlSelfRef.__PVT__meta_reg_clients_states_0_hit;
    }
    vlSelfRef.__PVT___GEN_27 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_11)
                                 : (IData)(vlSelfRef.__PVT___GEN_9));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_27 = ((IData)(vlSelfRef.__PVT__req_valid) 
                                                 & (IData)(vlSelfRef.__PVT__sink_c_resp_valid));
    vlSelfRef.__PVT__sinkc_resp_last = ((IData)(vlSelfRef.__PVT__sink_c_resp_valid) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last));
    if (vlSelfRef.__PVT___GEN_11) {
        vlSelfRef.__PVT___clients_have_T_T_3 = ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                >> 1U);
        vlSelfRef.__PVT___highest_perm_T_4 = vlSelfRef.__PVT___GEN_12;
    } else {
        vlSelfRef.__PVT___clients_have_T_T_3 = 0U;
        vlSelfRef.__PVT___highest_perm_T_4 = 0U;
    }
    vlSelfRef.__PVT__clients_meta_busy = (((~ (IData)(vlSelfRef.__PVT___GEN_9)) 
                                           & (0U != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                          | ((~ (IData)(vlSelfRef.__PVT___GEN_11)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT___GEN_12))));
    vlSelfRef.__PVT___clients_have_T_T_1 = ((IData)(vlSelfRef.__PVT___GEN_9) 
                                            & ((IData)(vlSelfRef.__PVT___GEN_10) 
                                               >> 1U));
    vlSelfRef.__PVT___GEN_100 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_11)) 
                                       & (~ (IData)(vlSelfRef.__PVT___GEN_9))));
    vlSelfRef.__PVT___transmit_from_other_client_T_12 
        = ((((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (1U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_11)) | 
           (((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (0U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_17 = ((5U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                    | (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__PVT___highest_perm_T_3 = ((IData)(vlSelfRef.__PVT___GEN_9)
                                           ? (IData)(vlSelfRef.__PVT___GEN_10)
                                           : 0U);
    __PVT___GEN_123 = (1U & (~ ((IData)(vlSelfRef.__PVT___GEN_9) 
                                | (IData)(vlSelfRef.__PVT___GEN_11))));
    vlSelfRef.__PVT___T_7 = (0xfU & (((IData)(vlSelfRef.__PVT___T_5) 
                                      >> 4U) | (IData)(vlSelfRef.__PVT___T_5)));
    vlSelfRef.__PVT__change_clients_meta_0 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_10)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__PVT__change_clients_meta_1 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_12)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_19 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                 & (((IData)(vlSelfRef.__PVT___GEN_12) 
                                                     >> 1U) 
                                                    | (IData)(__VdfgRegularize_h42e69e07_2_35)));
    __PVT___T_171 = ((IData)(vlSelfRef.__PVT___GEN_9) 
                     & (((IData)(vlSelfRef.__PVT___GEN_10) 
                         >> 1U) | (IData)(__VdfgRegularize_h42e69e07_2_35)));
    vlSelfRef.io_status_bits_will_save_data = ((IData)(vlSelfRef.__PVT__req_channel) 
                                               & ((IData)(vlSelfRef.__PVT___T_146) 
                                                  & ((IData)(vlSelfRef.__PVT__preferCache_latch) 
                                                     | (IData)(vlSelfRef.__PVT___GEN_16))));
    vlSelfRef.__PVT___T_311 = (((IData)(vlSelfRef.__PVT__req_channel) 
                                & (IData)(vlSelfRef.__PVT__probeack_last)) 
                               & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last) 
                                     & ((~ (IData)(vlSelfRef.__PVT__nested_c_hit)) 
                                        & (~ (IData)(vlSelfRef.__PVT___GEN_16))))));
    vlSelfRef.__PVT__req_promoteT = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                     & ((IData)(vlSelfRef.__PVT___GEN_16)
                                         ? ((IData)(__PVT__meta_no_clients) 
                                            & (3U == (IData)(vlSelfRef.__PVT___GEN_19)))
                                         : ((IData)(vlSelfRef.__PVT__gotT) 
                                            & (IData)(vlSelfRef.__PVT__promoteT_safe))));
    vlSelfRef.__PVT___GEN_109 = (1U & (~ ((IData)(vlSelfRef.__PVT___T_60) 
                                          & ((0U != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                             & (IData)(__PVT__replace_need_release)))));
    __PVT___T_263 = ((IData)(vlSelfRef.__PVT__req_valid) 
                     & (IData)(vlSelfRef.__PVT__sinkc_resp_last));
    __PVT___highest_perm_except_me_T_12 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                            & (1U == (IData)(vlSelfRef.__PVT__iam)))
                                            ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    vlSelfRef.__PVT__clients_have_T = ((IData)(vlSelfRef.__PVT___clients_have_T_T_3) 
                                       | (IData)(vlSelfRef.__PVT___clients_have_T_T_1));
    vlSelfRef.__PVT__transmit_from_other_client = (
                                                   (~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                   & ((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_12) 
                                                      | (IData)(vlSelfRef.__PVT__transmit_from_other_client_reg)));
    vlSelfRef.__PVT___GEN_412 = (1U & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_valid) 
                                        & (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_bits_sink))) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))))
                                           : (IData)(vlSelfRef.__PVT__w_grantack))));
    __PVT___highest_perm_except_me_T_6 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                           & (0U == (IData)(vlSelfRef.__PVT__iam)))
                                           ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_3));
    vlSelfRef.__PVT___highest_perm_T_6 = (((IData)(vlSelfRef.__PVT___highest_perm_T_3) 
                                           > (IData)(vlSelfRef.__PVT___highest_perm_T_4))
                                           ? (IData)(vlSelfRef.__PVT___highest_perm_T_3)
                                           : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    __VdfgRegularize_h42e69e07_2_39 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                             & (~ (IData)(vlSelfRef.__PVT___GEN_27))));
    vlSelfRef.__PVT___GEN_124 = ((IData)(__PVT___GEN_123) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_38));
    vlSelfRef.__PVT__bypassPut = (IData)((((0U == (6U 
                                                   & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                           & (~ (IData)(vlSelfRef.__PVT___GEN_16))) 
                                          & (IData)(__PVT___GEN_123)));
    vlSelfRef.__PVT___T_294 = ((~ (IData)(vlSelfRef.__PVT__acquire_flag)) 
                               & (IData)(vlSelfRef.__PVT___T_311));
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27 
        = (((IData)(vlSelfRef.__PVT__req_needT) | (IData)(vlSelfRef.__PVT__req_promoteT))
            ? 3U : 1U);
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36 
        = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
           | ((IData)(vlSelfRef.__PVT__req_promoteT) 
              | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))));
    vlSelfRef.__PVT___GEN_356 = (((IData)(__PVT___T_263) 
                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                 | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData));
    if (__PVT___T_263) {
        vlSelfRef.__VdfgRegularize_h42e69e07_2_23 = vlSelfRef.__PVT__probeack_last;
        if ((0x100U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
        } else {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
        }
    } else {
        vlSelfRef.__VdfgRegularize_h42e69e07_2_23 = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_0 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
        vlSelfRef.__PVT__client_probeack_param_vec_1 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
    }
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
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_9) 
                           & (IData)(__VdfgRegularize_h42e69e07_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_9) 
                  & (IData)(__VdfgRegularize_h42e69e07_2_39)))));
    vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1 
        = ((1U != (IData)(vlSelfRef.__PVT__iam)) & 
           (((1U == (IData)(vlSelfRef.__PVT__req_param)) 
             & (((IData)(vlSelfRef.__PVT___GEN_12) 
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_11) 
                           & (IData)(__VdfgRegularize_h42e69e07_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(__VdfgRegularize_h42e69e07_2_39)))));
    vlSelfRef.__PVT__preferCache = ((~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                         ? (IData)(vlSelfRef.__PVT__bypassPut)
                                         : (IData)(vlSelfRef.__PVT__bypassPut_latch_reg))) 
                                    & (IData)(vlSelfRef.__PVT__req_preferCache));
    vlSelfRef.__PVT___new_clients_meta_0_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)))
            ? 1U : 0U);
    vlSelfRef.__PVT___new_clients_meta_1_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)))
            ? 1U : 0U);
    __PVT__highest_perm_except_me = (((IData)(__PVT___highest_perm_except_me_T) 
                                      > (IData)(__PVT___highest_perm_except_me_T_14))
                                      ? (IData)(__PVT___highest_perm_except_me_T)
                                      : (IData)(__PVT___highest_perm_except_me_T_14));
    vlSelfRef.io_tasks_dir_write_bits_data_state = 
        ((IData)(vlSelfRef.__PVT__bad_grant) ? (IData)(vlSelfRef.__PVT___GEN_19)
          : ((4U & (IData)(vlSelfRef.__PVT__req_channel))
              ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                  ? ((1U == (IData)(vlSelfRef.__PVT__req_param))
                      ? ((IData)(vlSelfRef.__PVT___GEN_16)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_19))
                              ? 3U : 1U) : (IData)(vlSelfRef.__PVT___GEN_19))
                      : 0U) : ((2U == (IData)(vlSelfRef.__PVT__req_param))
                                ? (((IData)(vlSelfRef.__PVT___GEN_16) 
                                    & (3U == (IData)(vlSelfRef.__PVT___GEN_19)))
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
                                                     : (IData)(vlSelfRef.__PVT___GEN_19))))))
              : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                  ? ((IData)(vlSelfRef.__PVT___GEN_16)
                      ? ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_9)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_19))
                              ? 3U : 1U) : ((((IData)(vlSelfRef.__PVT___GEN_19) 
                                              >> 1U) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__req_param)))
                                             ? (IData)(vlSelfRef.__PVT___GEN_19)
                                             : (((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                                 & (2U 
                                                    != (IData)(vlSelfRef.__PVT__req_param)))
                                                 ? 1U
                                                 : 0U)))
                      : (IData)(vlSelfRef.__PVT___GEN_19))
                  : ((IData)(vlSelfRef.__PVT__inv_self_dir)
                      ? 0U : ((IData)(vlSelfRef.__PVT__req_needT)
                               ? ((IData)(vlSelfRef.__PVT__req_acquire)
                                   ? 2U : 3U) : ((IData)(vlSelfRef.__PVT___GEN_16)
                                                  ? 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT___GEN_19))
                                                   ? 
                                                  (((IData)(__PVT__meta_no_clients) 
                                                    & (IData)(vlSelfRef.__PVT__req_acquire))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__PVT___GEN_19))
                                                    ? 3U
                                                    : 1U))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__transmit_from_other_client)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__highest_perm) 
                                                    | (IData)(vlSelfRef.__PVT__highest_perm_reg_reg)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : 1U))))))));
    vlSelfRef.__PVT__will_probeack_through = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) 
                                              & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                                                    | ((IData)(vlSelfRef.__PVT__req_needProbeAckData) 
                                                       & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT__highest_perm)))))));
    __PVT__prefetch_miss_need_probe = ((IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1) 
                                       | (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_26 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__preferCache) 
                                                     | (IData)(vlSelfRef.__PVT___GEN_16))));
    vlSelfRef.__PVT__bypassGet = ((~ (IData)(vlSelfRef.__PVT__preferCache)) 
                                  & (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    if (vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37) {
        __PVT___new_self_meta_clientStates_0_T_38 = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
    } else {
        __PVT___new_self_meta_clientStates_0_T_38 = 0U;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
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
    vlSelfRef.__PVT___GEN_129 = (1U & (~ ((IData)(vlSelfRef.__PVT__req_acquire)
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
                                      & (IData)(vlSelfRef.__PVT___GEN_16));
    if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        vlSelfRef.__PVT___GEN_306 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) 
                                     & ((~ (IData)(vlSelfRef.__PVT__will_probeack_through)) 
                                        & ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 1U)));
        if (vlSelfRef.__PVT__req_fromProbeHelper) {
            vlSelfRef.__PVT___GEN_305 = ((IData)(vlSelfRef.__PVT__will_probeack_through) 
                                         & (~ (IData)(vlSelfRef.__PVT___GEN_16)));
            vlSelfRef.__PVT___GEN_307 = (1U & (IData)(__PVT___will_save_probeack_T_2));
        } else {
            vlSelfRef.__PVT___GEN_305 = vlSelfRef.__PVT__will_probeack_through;
            vlSelfRef.__PVT___GEN_307 = (1U & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)) 
                                               | ((~ 
                                                   ((IData)(vlSelfRef.__PVT__req_channel) 
                                                    >> 1U)) 
                                                  | ((IData)(__PVT___will_save_probeack_T_2) 
                                                     & (1U 
                                                        == (IData)(vlSelfRef.__PVT__req_param))))));
        }
    } else {
        vlSelfRef.__PVT___GEN_306 = vlSelfRef.__PVT__probeAckDataDrop;
        vlSelfRef.__PVT___GEN_305 = vlSelfRef.__PVT__probeAckDataThrough;
        vlSelfRef.__PVT___GEN_307 = (1U & ((~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)) 
                                           & (~ (IData)(vlSelfRef.__PVT__probeAckDataDrop))));
    }
    vlSelfRef.__PVT__prefetch_need_data = ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
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
    if (__PVT__prefetch_miss_need_probe) {
        __PVT___T_162 = (5U == (IData)(vlSelfRef.__PVT__req_opcode));
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
        __PVT___T_162 = 0U;
        vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
        vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
    }
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
                                                     : (IData)(vlSelfRef.__PVT__req_opcode))));
    vlSelfRef.__PVT___GEN_339 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT__chosen_reg) 
                                          >> 5U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT____VdfgRegularize_h528b8c7d_0_13)) 
                                        & (IData)(vlSelfRef.io_tasks_source_e_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                    | ((IData)(vlSelfRef.__PVT___GEN_129) 
                                                       | (~ 
                                                          ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                           & (~ (IData)(vlSelfRef.__PVT__bypassPut))))))))
                                           : (IData)(vlSelfRef.__PVT__s_grantack))));
    vlSelfRef.__PVT___GEN_236 = (1U & (IData)((((0U 
                                                 != 
                                                 (6U 
                                                  & (IData)(vlSelfRef.__PVT__req_channel))) 
                                                | (IData)(vlSelfRef.__PVT___GEN_129)) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))));
    __PVT___GEN_131 = (1U & ((IData)(vlSelfRef.__PVT___GEN_129) 
                             | (~ ((IData)(vlSelfRef.__PVT___T_146) 
                                   & (((4U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                                       & (IData)(vlSelfRef.__PVT___GEN_16)) 
                                      | (IData)(vlSelfRef.__PVT__preferCache))))));
    vlSelfRef.__PVT___T_133 = ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                               & ((0U != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                  & ((IData)(__PVT__replace_need_release) 
                                     & (((IData)(vlSelfRef.__PVT__preferCache) 
                                         & ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            | (4U == (IData)(vlSelfRef.__PVT__req_opcode)))) 
                                        | ((IData)(vlSelfRef.__PVT__prefetch_need_data) 
                                           | (IData)(vlSelfRef.__PVT__transmit_from_other_client))))));
    vlSelfRef.__PVT___T_185 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                               & (((IData)(vlSelfRef.__PVT__req_acquire) 
                                   & ((IData)(__VdfgRegularize_h42e69e07_2_37) 
                                      | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                         >> 1U))) | (IData)(__PVT___T_162)));
    __PVT___T_164 = ((IData)(vlSelfRef.__PVT___GEN_9) 
                     & (((IData)(vlSelfRef.__PVT__req_acquire) 
                         & ((IData)(__VdfgRegularize_h42e69e07_2_37) 
                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                               >> 1U))) | (IData)(__PVT___T_162)));
    vlSelfRef.io_tasks_source_d_bits_useBypass = ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                       >> 1U))) 
                                                  & (((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.__PVT___GEN_19)) 
                                                         & (IData)(vlSelfRef.__PVT__req_needT))) 
                                                     & ((~ (IData)(vlSelfRef.__PVT__probe_dirty)) 
                                                        | ((IData)(vlSelfRef.__PVT__acquire_flag) 
                                                           & (7U 
                                                              != (IData)(vlSelfRef.io_tasks_source_a_bits_opcode))))));
    __PVT___GEN_132 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                       & (IData)(__PVT___GEN_131));
    vlSelfRef.__PVT___GEN_216 = (1U & (((IData)(vlSelfRef.__PVT__req_channel) 
                                        >> 1U) | ((~ (IData)(vlSelfRef.__PVT___T_133)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_276 = vlSelfRef.__PVT___GEN_236;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT___GEN_236;
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT___GEN_236;
        __PVT___GEN_279 = ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                            ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                ? (IData)(vlSelfRef.__PVT___GEN_102)
                                : (IData)(vlSelfRef.__PVT___GEN_109))
                            : (IData)(vlSelfRef.__PVT___GEN_216));
    } else {
        vlSelfRef.__PVT___GEN_276 = vlSelfRef.__PVT__w_grantfirst;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT__w_grant;
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT__w_grantlast;
        __PVT___GEN_279 = vlSelfRef.__PVT__w_releaseack;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.__PVT__req_fromCmoHelper) {
            if (vlSelfRef.__PVT___GEN_16) {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_17)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_18)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
            } else {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = vlSelfRef.__PVT___GEN_17;
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = vlSelfRef.__PVT___GEN_18;
            }
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((0U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_17)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((1U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_18)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state));
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.__PVT___GEN_16) {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((((IData)(vlSelfRef.__PVT___GEN_17) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_17)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_17)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((((IData)(vlSelfRef.__PVT___GEN_18) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_18)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_18)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = vlSelfRef.__PVT___GEN_17;
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = vlSelfRef.__PVT___GEN_18;
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
    if (vlSelfRef.__VdfgRegularize_h42e69e07_2_36) {
        vlSelfRef.__PVT___GEN_155 = ((0U != (IData)(vlSelfRef.__PVT__iam)) 
                                     & (IData)(__PVT___T_164));
        vlSelfRef.__PVT___GEN_158 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                           | ((~ (IData)(__PVT___T_164)) 
                                              | (IData)(vlSelfRef.__PVT___GEN_16))));
        __PVT___GEN_156 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                 | (~ (IData)(__PVT___T_164))));
        __PVT___GEN_157 = ((0U != (IData)(vlSelfRef.__PVT__iam))
                            ? ((IData)(__PVT___T_164)
                                ? (IData)(__PVT___GEN_132)
                                : (IData)(__PVT___GEN_131))
                            : (IData)(__PVT___GEN_131));
        vlSelfRef.__PVT___GEN_183 = ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_185)) 
                                         & (IData)(__PVT___GEN_156))
                                      : (IData)(__PVT___GEN_156));
    } else {
        vlSelfRef.__PVT___GEN_155 = __PVT___T_171;
        vlSelfRef.__PVT___GEN_158 = (1U & ((~ (IData)(__PVT___T_171)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_16)));
        __PVT___GEN_156 = (1U & (~ (IData)(__PVT___T_171)));
        __PVT___GEN_157 = ((IData)(__PVT___T_171) ? 
                           ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                            & (IData)(__PVT___GEN_132))
                            : (IData)(__PVT___GEN_131));
        vlSelfRef.__PVT___GEN_183 = ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19)) 
                                     & (IData)(__PVT___GEN_156));
    }
    vlSelfRef.__PVT___GEN_226 = (1U & ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                        ? ((~ (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_100))
                                        : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                                            ? (IData)(vlSelfRef.__PVT___GEN_124)
                                            : ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                               | (IData)(vlSelfRef.__PVT___GEN_183)))));
    if (vlSelfRef.__VdfgRegularize_h42e69e07_2_27) {
        vlSelfRef.__PVT___GEN_386 = ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_276));
        vlSelfRef.__PVT___GEN_388 = ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_278));
        vlSelfRef.__PVT___GEN_387 = ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_277));
        vlSelfRef.__PVT___GEN_380 = ((IData)(vlSelfRef.__PVT__w_probeackfirst) 
                                     | (IData)(vlSelfRef.__PVT__probeack_last));
        vlSelfRef.__PVT___GEN_381 = ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                     | ((IData)(vlSelfRef.__PVT__probeack_last) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last)));
        vlSelfRef.__PVT___GEN_382 = ((IData)(vlSelfRef.__PVT__w_probeack) 
                                     | ((IData)(vlSelfRef.__PVT__probeack_last) 
                                        & ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last))));
    } else {
        vlSelfRef.__PVT___GEN_386 = vlSelfRef.__PVT___GEN_276;
        vlSelfRef.__PVT___GEN_388 = vlSelfRef.__PVT___GEN_278;
        vlSelfRef.__PVT___GEN_387 = vlSelfRef.__PVT___GEN_277;
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG) {
            vlSelfRef.__PVT___GEN_380 = vlSelfRef.__PVT___GEN_226;
            vlSelfRef.__PVT___GEN_381 = vlSelfRef.__PVT___GEN_226;
            vlSelfRef.__PVT___GEN_382 = vlSelfRef.__PVT___GEN_226;
        } else {
            vlSelfRef.__PVT___GEN_380 = vlSelfRef.__PVT__w_probeackfirst;
            vlSelfRef.__PVT___GEN_381 = vlSelfRef.__PVT__w_probeacklast;
            vlSelfRef.__PVT___GEN_382 = vlSelfRef.__PVT__w_probeack;
        }
    }
    vlSelfRef.__PVT___GEN_160 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                                 & (IData)(vlSelfRef.__PVT___GEN_158));
    __PVT___GEN_159 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                       & (IData)(__PVT___GEN_157));
    vlSelfRef.__PVT___GEN_184 = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_36)
                                  ? ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((IData)(vlSelfRef.__PVT___T_185)
                                          ? (IData)(__PVT___GEN_159)
                                          : (IData)(__PVT___GEN_157))
                                      : (IData)(__PVT___GEN_157))
                                  : ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19)
                                      ? ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                         & (IData)(__PVT___GEN_159))
                                      : (IData)(__PVT___GEN_157)));
    vlSelfRef.__PVT___GEN_365 = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_23)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_33)
                                      ? ((~ (((((IData)(vlSelfRef.__PVT__req_channel) 
                                                >> 1U) 
                                               & (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                              | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                             & (IData)(vlSelfRef.__PVT__probeAckDataThrough))) 
                                         & (IData)(__PVT___GEN_279))
                                      : ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_22)
                                          ? ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                             & (IData)(__PVT___GEN_279))
                                          : (IData)(__PVT___GEN_279)))
                                  : (IData)(__PVT___GEN_279));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5__2(VTestTop_L2L3L2_MSHR_32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___T_248;
    __PVT___T_248 = 0;
    CData/*0:0*/ __PVT___T_254;
    __PVT___T_254 = 0;
    // Body
    vlSelfRef.__PVT__nest_c_way_match = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.io_status_bits_way) 
                                         == (IData)(vlSelfRef.io_status_bits_way));
    vlSelfRef.__PVT___GEN_343 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter_2__DOT__chosenOH) 
                                          >> 5U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter_2_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_client_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_27)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientstag))));
    vlSelfRef.__PVT___GEN_341 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb__DOT__chosenOH) 
                                          >> 5U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper) 
                                                  | (~ (IData)(vlSelfRef.__PVT___T_60)))
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                     | ((~ 
                                                         ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                          & ((IData)(vlSelfRef.__PVT__preferCache) 
                                                             & ((4U 
                                                                 == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                                | ((6U 
                                                                    == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                                   | (IData)(vlSelfRef.__PVT__prefetch_need_data)))))) 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_36)
                                                            ? 
                                                           ((1U 
                                                             != (IData)(vlSelfRef.__PVT__iam))
                                                             ? 
                                                            ((IData)(vlSelfRef.__PVT___T_185)
                                                              ? (IData)(vlSelfRef.__PVT___GEN_160)
                                                              : (IData)(vlSelfRef.__PVT___GEN_158))
                                                             : (IData)(vlSelfRef.__PVT___GEN_158))
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19)
                                                             ? (IData)(vlSelfRef.__PVT___GEN_160)
                                                             : (IData)(vlSelfRef.__PVT___GEN_158)))))))
                                           : (IData)(vlSelfRef.__PVT__s_wbselftag))));
    vlSelfRef.__PVT___T_249 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT__chosen_reg) 
                                 >> 5U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT____VdfgRegularize_hae52cd36_0_26)) 
                               & (IData)(vlSelfRef.io_tasks_source_b_valid));
    __PVT___T_254 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT__chosen_reg) 
                       >> 5U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT____VdfgRegularize_h20ebb837_0_26)) 
                     & (IData)(vlSelfRef.io_tasks_source_c_valid));
    vlSelfRef.__PVT___GEN_338 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT__chosen_reg) 
                                          >> 5U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT____VdfgRegularize_h1ec93158_0_26)) 
                                        & (IData)(vlSelfRef.io_tasks_source_d_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? (IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                     | (5U 
                                                        == (IData)(vlSelfRef.__PVT__req_opcode)))))
                                           : (IData)(vlSelfRef.__PVT__s_execute))));
    vlSelfRef.__PVT___GEN_340 = (1U & ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH) 
                                         >> 5U) & (IData)(vlSelfRef.io_tasks_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? 
                                                  (~ (IData)(vlSelfRef.__PVT___GEN_16))
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.__PVT___GEN_16) 
                                                    | (IData)(vlSelfRef.__PVT__req_opcode))))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.__PVT__req_channel))
                                                   ? 
                                                  ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                   | (~ (IData)(vlSelfRef.__PVT___T_81)))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                   | ((~ (IData)(
                                                                 (((0U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                                                   & (~ (IData)(vlSelfRef.__PVT___GEN_20))) 
                                                                  & (IData)(vlSelfRef.__PVT___GEN_16)))) 
                                                      & ((IData)(vlSelfRef.__PVT__req_acquire)
                                                          ? 
                                                         ((~ 
                                                           ((IData)(vlSelfRef.__PVT___T_146) 
                                                            & ((IData)(vlSelfRef.__PVT___GEN_16) 
                                                               | (IData)(vlSelfRef.__PVT__preferCache)))) 
                                                          & (IData)(vlSelfRef.__PVT___GEN_184))
                                                          : (IData)(vlSelfRef.__PVT___GEN_184))))))
                                           : (IData)(vlSelfRef.__PVT__s_wbselfdir))));
    vlSelfRef.__PVT___GEN_342 = (1U & ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter_1__DOT__chosenOH) 
                                         >> 5U) & (IData)(vlSelfRef.io_tasks_client_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_100)
                                                   : 
                                                  (~ 
                                                   (((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.__PVT___GEN_23))) 
                                                    | ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10) 
                                                       & ((IData)(vlSelfRef.__PVT___GEN_23) 
                                                          >> 1U)))))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.__PVT__req_channel))
                                                   ? (IData)(vlSelfRef.__PVT___GEN_124)
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                   | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                      & (IData)(vlSelfRef.__PVT___GEN_183)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientsdir))));
    __PVT___T_248 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT__chosen_reg) 
                       >> 5U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT____VdfgRegularize_h3b69c469_0_26)) 
                     & (IData)(vlSelfRef.io_tasks_source_a_valid));
    vlSelfRef.__PVT___T_261 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT__chosen_reg) 
                                 >> 5U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT____VdfgRegularize_h5d7114fd_0_26)) 
                               & (IData)(vlSelfRef.io_tasks_sink_c_valid));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_30 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5_io_resps_sink_d_valid) 
                                                 & (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_413 = (1U & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_resp_valid) 
                                        & (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s4_req_sinkId))) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
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
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))))
                                           : (IData)(vlSelfRef.__PVT__w_putwritten))));
    vlSelfRef.__PVT___GEN_335 = ((IData)(vlSelfRef.__PVT___T_249) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_226)
                                     : (IData)(vlSelfRef.__PVT__s_probe)));
    vlSelfRef.__PVT___GEN_337 = (1U & ((IData)(__PVT___T_254) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                           ? (1U & 
                                              ((2U 
                                                != 
                                                (6U 
                                                 & (IData)(vlSelfRef.__PVT__req_channel))) 
                                               | (~ 
                                                  ((~ (IData)(vlSelfRef.__PVT__will_probeack_through)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper))))))
                                           : (IData)(vlSelfRef.__PVT__s_probeack))));
    vlSelfRef.__PVT___GEN_336 = ((IData)(__PVT___T_254) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                     ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                         ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                             ? (IData)(vlSelfRef.__PVT___GEN_102)
                                             : (IData)(vlSelfRef.__PVT___GEN_109))
                                         : (IData)(vlSelfRef.__PVT___GEN_216))
                                     : (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.__PVT___GEN_333 = ((IData)(__PVT___T_248) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_236)
                                     : (IData)(vlSelfRef.__PVT__s_acquire)));
    vlSelfRef.__PVT___GEN_334 = (1U & ((IData)(__PVT___T_248) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__bypassPut)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))))
                                           : (IData)(vlSelfRef.__PVT__s_transferput))));
    vlSelfRef.__PVT___GEN_346 = (1U & ((IData)(vlSelfRef.__PVT___T_261)
                                        ? ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_272))
                                        : (IData)(vlSelfRef.__PVT___GEN_272)));
    vlSelfRef.__PVT___GEN_405 = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_31)
                                      ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last) 
                                         | (IData)(vlSelfRef.__PVT__w_grantlast))
                                      : (IData)(vlSelfRef.__PVT___GEN_387))
                                  : (IData)(vlSelfRef.__PVT___GEN_387));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6__0(VTestTop_L2L3L2_MSHR_32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__probe_dirty;
    __Vdly__probe_dirty = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_0;
    __Vdly__meta_reg_self_clientStates_0 = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_1;
    __Vdly__meta_reg_self_clientStates_1 = 0;
    // Body
    __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
    __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    __Vdly__probe_dirty = vlSelfRef.__PVT__probe_dirty;
    if (vlSelfRef.__PVT__change_self_meta) {
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_toN) {
            __Vdly__meta_reg_self_clientStates_0 = 0U;
            __Vdly__meta_reg_self_clientStates_1 = 0U;
            vlSelfRef.__PVT__meta_reg_self_state = 0U;
        } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_toB) {
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_0))) {
                __Vdly__meta_reg_self_clientStates_0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_1))) {
                __Vdly__meta_reg_self_clientStates_1 = 1U;
            }
            vlSelfRef.__PVT__meta_reg_self_state = 1U;
        } else {
            __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_17;
            __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_18;
            vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_19;
        }
        vlSelfRef.__PVT__meta_reg_self_hit = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_toN))) 
                                              && (IData)(vlSelfRef.__PVT___GEN_16));
        vlSelfRef.__PVT__meta_reg_self_dirty = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_c_set_dirty) 
                                                | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_set_dirty) 
                                                   | ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_clr_dirty)) 
                                                      & (IData)(vlSelfRef.__PVT___GEN_20))));
    } else {
        __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_17;
        __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_18;
        vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_19;
        vlSelfRef.__PVT__meta_reg_self_hit = vlSelfRef.__PVT___GEN_16;
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__meta_reg_self_dirty = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
        }
    }
    vlSelfRef.__PVT__someClientHasProbeAckData = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                      && (IData)(vlSelfRef.__PVT___GEN_356)));
    vlSelfRef.__PVT__transmit_from_other_client_latch 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__transmit_from_other_client));
    vlSelfRef.__PVT__s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                  | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_333))
                                      : (IData)(vlSelfRef.__PVT___GEN_333)));
    vlSelfRef.__PVT__w_probeackfirst = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_380));
    vlSelfRef.__PVT__s_execute = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_338));
    vlSelfRef.__PVT__w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_31) 
                                            | (IData)(vlSelfRef.__PVT___GEN_386))
                                         : (IData)(vlSelfRef.__PVT___GEN_386)));
    vlSelfRef.__PVT__w_grant = ((IData)(vlSymsp->TOP.reset) 
                                | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                    ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_31)
                                        ? (((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                            & (IData)(vlSelfRef.__PVT__req_size)) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last))
                                        : (IData)(vlSelfRef.__PVT___GEN_388))
                                    : (IData)(vlSelfRef.__PVT___GEN_388)));
    vlSelfRef.__PVT__s_probe = ((IData)(vlSymsp->TOP.reset) 
                                | (IData)(vlSelfRef.__PVT___GEN_335));
    if (vlSelfRef.__PVT__change_clients_meta_1) {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_1_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_12));
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_1_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_11));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = vlSelfRef.__PVT___GEN_12;
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = vlSelfRef.__PVT___GEN_11;
    }
    if (vlSelfRef.__PVT__change_clients_meta_0) {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_0_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_10));
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_0_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_9));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = vlSelfRef.__PVT___GEN_10;
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = vlSelfRef.__PVT___GEN_9;
    }
    vlSelfRef.__PVT__promoteT_safe = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                          ? ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                             & (IData)(vlSelfRef.__PVT___GEN_282))
                                          : (IData)(vlSelfRef.__PVT___GEN_282)));
    vlSelfRef.__PVT__w_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_382));
    vlSelfRef.__PVT__s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_23)
                                       ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_33)
                                           ? (IData)(vlSelfRef.__PVT___GEN_337)
                                           : ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_22)) 
                                              & (IData)(vlSelfRef.__PVT___GEN_337)))
                                       : (IData)(vlSelfRef.__PVT___GEN_337)));
    vlSelfRef.__PVT__s_release = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_336));
    vlSelfRef.__PVT__preferCache_latch = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                          && (IData)(vlSelfRef.__PVT__preferCache));
    vlSelfRef.__PVT__w_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_412));
    vlSelfRef.__PVT__w_putwritten = ((IData)(vlSymsp->TOP.reset) 
                                     | (IData)(vlSelfRef.__PVT___GEN_413));
    vlSelfRef.__PVT__w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_405));
    vlSelfRef.__PVT__s_transferput = ((IData)(vlSymsp->TOP.reset) 
                                      | (IData)(vlSelfRef.__PVT___GEN_334));
    vlSelfRef.__PVT__w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                         ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (IData)(vlSelfRef.__PVT___GEN_365))
                                         : (IData)(vlSelfRef.__PVT___GEN_365)));
    vlSelfRef.__PVT__w_probeacklast = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_381));
    vlSelfRef.__PVT__s_writerelease = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__PVT___T_261)
                                           ? ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                              | (IData)(vlSelfRef.__PVT___GEN_271))
                                           : (IData)(vlSelfRef.__PVT___GEN_271)));
    if (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6_io_resps_sink_c_valid))) {
        vlSelfRef.__PVT__io_tasks_sink_c_bits_bufIdx_r 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_bufIdx;
    }
    vlSelfRef.__PVT__nested_c_hit_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                         && ((1U & 
                                              (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG))) 
                                             && (IData)(vlSelfRef.__PVT__nested_c_hit)));
    vlSelfRef.__PVT__acquire_flag = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG))) 
                                         && (IData)(vlSelfRef.__PVT___GEN_91)));
    vlSelfRef.__PVT__s_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                       ? ((IData)(vlSelfRef.__PVT___T_294)
                                           ? ((~ ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__bypassPut_latch_reg)))) 
                                              & (IData)(vlSelfRef.__PVT___GEN_339))
                                           : (IData)(vlSelfRef.__PVT___GEN_339))
                                       : (IData)(vlSelfRef.__PVT___GEN_339)));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_6_valid) {
        vlSelfRef.__PVT__req_source = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source;
        vlSelfRef.__PVT__req_dirty = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_dirty;
        vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_needProbeAckData;
        vlSelfRef.__PVT__req_fromProbeHelper = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromProbeHelper;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__transmit_from_other_client_reg = 0U;
        vlSelfRef.__PVT__a_c_through_reg = 0U;
        vlSelfRef.__PVT__highest_perm_reg_reg = 0U;
    } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__transmit_from_other_client_reg 
            = vlSelfRef.__PVT___transmit_from_other_client_T_12;
        vlSelfRef.__PVT__a_c_through_reg = vlSelfRef.__PVT___GEN_16;
        vlSelfRef.__PVT__highest_perm_reg_reg = (((IData)(vlSelfRef.__PVT___highest_perm_T_2) 
                                                  > (IData)(vlSelfRef.__PVT___highest_perm_T_6))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT___GEN_16)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_19)
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
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__meta_reg_clients_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_self_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_self_way = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
        vlSelfRef.__PVT__meta_reg_clients_way = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__way_s2;
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Directory result was sent to mismatch MSHR(mshrId: 6, resultId:%2#)\n    at MSHR.scala:60 assert(\n",0,
                      4,(((((IData)((0U != (0xffU & 
                                            ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                             >> 8U)))) 
                            << 1U) | (0U != (0xfU & 
                                             ((IData)(vlSelfRef.__PVT___T_5) 
                                              >> 4U)))) 
                          << 2U) | (((IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelfRef.__PVT___T_7) 
                                                >> 2U)))) 
                                     << 1U) | (IData)(
                                                      (0U 
                                                       != 
                                                       (0xaU 
                                                        & (IData)(vlSelfRef.__PVT___T_7)))))));
    }
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6_io_resps_sink_d_valid))
                                  ? (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                        | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                       | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                      | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                      ? (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_283))
                                  : (IData)(vlSelfRef.__PVT___GEN_283)));
    vlSelfRef.__PVT__gotDirty = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (((IData)(vlSelfRef.__PVT__req_valid) 
                                      & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6_io_resps_sink_d_valid))
                                      ? (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                          | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                          ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_dirty)
                                          : (IData)(vlSelfRef.__PVT___GEN_290))
                                      : (IData)(vlSelfRef.__PVT___GEN_290)));
    vlSelfRef.__PVT__no_schedule_REG = ((IData)(vlSymsp->TOP.reset) 
                                        | (((((IData)(vlSelfRef.__PVT__s_wbselfdir) 
                                              & (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                             & (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                            & (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                           & (IData)(vlSelfRef.__PVT__meta_valid)));
    vlSelfRef.__PVT__inv_self_dir = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && (((IData)(vlSelfRef.__PVT__req_valid) 
                                          & (IData)(vlSelfRef.__PVT__sink_c_resp_valid))
                                          ? ((IData)(vlSelfRef.__PVT___T_311)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_26) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_288))
                                              : (IData)(vlSelfRef.__PVT___GEN_288))
                                          : (IData)(vlSelfRef.__PVT___GEN_288)));
    if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            vlSelfRef.__PVT__sink = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_sink;
        }
    }
    vlSelfRef.__PVT__bad_grant = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (((IData)(vlSelfRef.__PVT__req_valid) 
                                       & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6_io_resps_sink_d_valid))
                                       ? (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                             | (5U 
                                                == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                            | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                           ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_denied)
                                           : (IData)(vlSelfRef.__PVT___GEN_286))
                                       : (IData)(vlSelfRef.__PVT___GEN_286)));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_6_valid) {
        vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_bufIdx;
    } else if (((IData)(vlSelfRef.__PVT__req_valid) 
                & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            if ((0U != (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))) {
                vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_bufIdx;
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
                                          | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                         | (IData)(vlSelfRef.__PVT__nested_c_hit)));
            vlSelfRef.__PVT__probes_done = vlSelfRef.__PVT___probeack_last_T;
        } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
            __Vdly__probe_dirty = 0U;
            vlSelfRef.__PVT__probes_done = 0U;
        }
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__a_do_release = ((1U & 
                                              (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 2U))) 
                                             && ((~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17)) 
                                                    & (IData)(vlSelfRef.__PVT___T_133))));
            vlSelfRef.__PVT__a_do_probe = ((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 2U))) 
                                           && ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                               & ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17)) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_36)
                                                      ? 
                                                     ((1U 
                                                       != (IData)(vlSelfRef.__PVT__iam))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT___T_185) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_155))
                                                       : (IData)(vlSelfRef.__PVT___GEN_155))
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19) 
                                                      | (IData)(vlSelfRef.__PVT___GEN_155))))));
        }
        if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSelfRef.__PVT__sinkc_resp_last))) {
            if ((0x100U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_0 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                          >> 8U)))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_1 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
        }
        if (vlSelfRef.io_status_bits_will_free) {
            vlSelfRef.__PVT__releaseThrough = 0U;
            vlSelfRef.__PVT__releaseDrop = 0U;
            vlSelfRef.__PVT__probeAckDataThrough = 0U;
            vlSelfRef.__PVT__probeAckDataDrop = 0U;
            vlSelfRef.__PVT__probeAckDataSave = 0U;
        } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
            if (vlSelfRef.__PVT__req_fromCmoHelper) {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                       & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                          & (~ (IData)(vlSelfRef.__PVT___GEN_16))));
                vlSelfRef.__PVT__probeAckDataDrop = 
                    (0U == (IData)(vlSelfRef.__PVT__req_param));
                vlSelfRef.__PVT__probeAckDataSave = 
                    ((IData)(vlSelfRef.__PVT___probeAckDataSave_T_4) 
                     & (IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_8));
            } else {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = vlSelfRef.__PVT___GEN_305;
                vlSelfRef.__PVT__probeAckDataDrop = vlSelfRef.__PVT___GEN_306;
                vlSelfRef.__PVT__probeAckDataSave = vlSelfRef.__PVT___GEN_307;
            }
        }
    }
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    vlSelfRef.__PVT__REG = (1U & ((IData)(vlSymsp->TOP.reset) 
                                  | ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)) 
                                     | ((IData)(vlSelfRef.__PVT__req_valid) 
                                        & (~ (IData)(vlSelfRef.__PVT__meta_valid))))));
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_1)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: L3 Release should always hit: mshrId:[ 6] addr: [%x]\n    at MSHR.scala:469 assert(RegNext(!meta_valid || !req.fromC || req.fromCmoHelper || clients_meta(iam).hit),\n",0,
                      16,(((IData)(vlSelfRef.__PVT__req_tag) 
                           << 8U) | ((IData)(vlSelfRef.__PVT__req_set) 
                                     << 1U)));
    }
    if (VL_UNLIKELY(((((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) 
                         & (2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                        & (IData)(vlSelfRef.__PVT___GEN_16)) 
                       & (~ (IData)(vlSelfRef.__PVT___T_81))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((1U == (IData)(vlSelfRef.__PVT___GEN_19)) 
                           & (1U == (IData)(vlSelfRef.__PVT__req_param))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Probe not supported: [self: %1#] [req: %1#]\n\n    at MSHR.scala:675 assert(probe_is_report(self_meta.state, req.param),\n",0,
                      2,vlSelfRef.__PVT___GEN_19,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_472) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_9)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_10) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_10))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:685 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_10,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    vlSelfRef.__PVT__REG_1 = (1U & ((((~ (IData)(vlSelfRef.__PVT__meta_valid)) 
                                      | (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                            >> 2U))) 
                                     | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                    | (IData)(vlSelfRef.__PVT___GEN_27)));
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_472) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_11)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_12) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_12))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:685 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_12,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_471) 
                        & (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                              >> 1U))) & (~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((5U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                           | (IData)(vlSelfRef.__PVT__req_preferCache)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Hint should always preferCache!\n    at MSHR.scala:830 assert(req.opcode =/= Hint || req.preferCache, \"Hint should always preferCache!\")\n",0);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__req_valid) 
                       & ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_21) 
                          & ((IData)(vlSelfRef.__PVT__client_dir_conflict) 
                             & (IData)(vlSelfRef.__PVT__probe_helper_finish)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ (IData)(vlSelfRef.__PVT__REG_2))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Error L3: meta still conflict when probe helper finish! mshrId:  6\n    at MSHR.scala:936 assert(RegNext(!clients_meta_busy, true.B),\n",0);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT___T_249) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (0U == (IData)(vlSelfRef.__PVT__probe_clients))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid probe task\n\n    at MSHR.scala:1250 assert(io.tasks.source_b.bits.clients =/= 0.U, \"Invalid probe task\\n\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_3)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:1441 assert(RegNext(!req_valid || !io.alloc.valid, true.B)) // TODO: support fully-pipelined\n",0);
    }
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__client_dir_conflict = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_21) 
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
                                                 & ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                    & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                        & (0U 
                                                           != (IData)(vlSelfRef.__PVT___GEN_12))) 
                                                       | ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                          | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                             >> 1U)))))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? (IData)(vlSelfRef.__PVT___clients_have_T_T_3)
                                                   : (IData)(vlSelfRef.__PVT___GEN_11))
                                                  : (IData)(vlSelfRef.__PVT___GEN_11)))) 
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
                                                   & ((IData)(vlSelfRef.__PVT___GEN_9) 
                                                      & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                                         | ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                                                               >> 1U)))))
                                                : ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__req_param))
                                                     ? (IData)(vlSelfRef.__PVT___clients_have_T_T_1)
                                                     : (IData)(vlSelfRef.__PVT___GEN_9))
                                                    : (IData)(vlSelfRef.__PVT___GEN_9)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__bypassPut_latch_reg = vlSelfRef.__PVT__bypassPut;
    } else if (vlSelfRef.io_status_bits_will_free) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    }
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_6_valid) {
        vlSelfRef.__PVT__req_size = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_size;
        vlSelfRef.__PVT__req_off = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_off;
        vlSelfRef.__PVT__req_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_tag;
        vlSelfRef.__PVT__req_preferCache = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_preferCache;
        vlSelfRef.__PVT__req_set = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_set;
        vlSelfRef.__PVT__req_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_opcode;
        vlSelfRef.__PVT__req_fromCmoHelper = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromCmoHelper;
        vlSelfRef.__PVT__iam = ((0U == (IData)(vlSelfRef.__PVT__clientBitOH))
                                 ? 2U : (1U & ((IData)(vlSelfRef.__PVT__clientBitOH) 
                                               >> 1U)));
        vlSelfRef.__PVT__req_channel = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_channel;
        vlSelfRef.__PVT__req_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_param;
    }
    vlSelfRef.__PVT__meta_reg_self_clientStates_0 = __Vdly__meta_reg_self_clientStates_0;
    vlSelfRef.__PVT__meta_reg_self_clientStates_1 = __Vdly__meta_reg_self_clientStates_1;
    vlSelfRef.__PVT__probe_dirty = __Vdly__probe_dirty;
    vlSelfRef.__PVT__no_wait = ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                & ((IData)(vlSelfRef.__PVT__w_grantlast) 
                                   & ((IData)(vlSelfRef.__PVT__w_releaseack) 
                                      & ((IData)(vlSelfRef.__PVT__w_grantack) 
                                         & (IData)(vlSelfRef.__PVT__w_putwritten)))));
    vlSelfRef.__PVT__s_writeprobe = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_23)
                                         ? ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_33)) 
                                            & (IData)(vlSelfRef.__PVT___GEN_346))
                                         : (IData)(vlSelfRef.__PVT___GEN_346)));
    vlSelfRef.__PVT___GEN_91 = (1U & ((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                      | (IData)(vlSelfRef.__PVT__acquire_flag)));
    vlSelfRef.io_tasks_source_e_valid = ((~ (IData)(vlSelfRef.__PVT__s_grantack)) 
                                         & (IData)(vlSelfRef.__PVT__w_grantfirst));
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
                                       | (IData)(vlSelfRef.__PVT___GEN_343));
    vlSelfRef.__PVT__s_wbselftag = ((IData)(vlSymsp->TOP.reset) 
                                    | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                        ? ((IData)(vlSelfRef.__PVT___T_311)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_26) 
                                               | (IData)(vlSelfRef.__PVT___GEN_341))
                                            : (IData)(vlSelfRef.__PVT___GEN_341))
                                        : (IData)(vlSelfRef.__PVT___GEN_341)));
    vlSelfRef.__PVT__meta_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                   && ((1U & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                       && (IData)(vlSelfRef.__PVT___GEN_0)));
    vlSelfRef.__PVT__s_wbselfdir = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_340));
    vlSelfRef.__PVT__s_wbclientsdir = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_342));
    vlSelfRef.__PVT__probe_helper_finish = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                            && ((1U 
                                                 & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                && (IData)(vlSelfRef.__PVT___GEN_318)));
    vlSelfRef.__PVT__REG_3 = (1U & ((IData)(vlSymsp->TOP.reset) 
                                    | ((~ (IData)(vlSelfRef.__PVT__req_valid)) 
                                       | (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_6_valid)))));
    vlSelfRef.io_status_bits_will_free = ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & ((IData)(vlSelfRef.__PVT__s_execute) 
                                             & ((((IData)(vlSelfRef.__PVT__s_probeack) 
                                                  & ((IData)(vlSelfRef.__PVT__no_schedule_REG) 
                                                     & (IData)(vlSelfRef.__PVT__s_grantack))) 
                                                 & (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                                & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                   & (IData)(vlSelfRef.__PVT__s_writeprobe)))));
    vlSelfRef.__PVT__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT___GEN_423));
    vlSelfRef.__PVT___transmit_from_other_client_T_2 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                           >> 1U))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_36 = ((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                      >> 1U))) 
                                                 & (4U 
                                                    != (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___io_status_bits_nestB_T_6 = (1U 
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
    vlSelfRef.__VdfgRegularize_h42e69e07_2_21 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                                 & (IData)(vlSelfRef.__PVT__req_acquire));
    vlSelfRef.__PVT___probe_clients_T_3 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                           & (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
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
    vlSelfRef.__PVT___GEN_330 = ((6U == (IData)(vlSelfRef.__PVT__req_opcode))
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

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6__1(VTestTop_L2L3L2_MSHR_32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6__1\n"); );
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
    CData/*0:0*/ __PVT___T_263;
    __PVT___T_263 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_0_T_38;
    __PVT___new_self_meta_clientStates_0_T_38 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_1_T_38;
    __PVT___new_self_meta_clientStates_1_T_38 = 0;
    CData/*0:0*/ __PVT__nested_client_match;
    __PVT__nested_client_match = 0;
    CData/*0:0*/ __PVT___GEN_123;
    __PVT___GEN_123 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    CData/*0:0*/ __PVT___T_162;
    __PVT___T_162 = 0;
    CData/*0:0*/ __PVT___T_164;
    __PVT___T_164 = 0;
    CData/*0:0*/ __PVT___GEN_132;
    __PVT___GEN_132 = 0;
    CData/*0:0*/ __PVT___T_171;
    __PVT___T_171 = 0;
    CData/*0:0*/ __PVT___GEN_156;
    __PVT___GEN_156 = 0;
    CData/*0:0*/ __PVT___GEN_157;
    __PVT___GEN_157 = 0;
    CData/*0:0*/ __PVT___GEN_159;
    __PVT___GEN_159 = 0;
    CData/*0:0*/ __PVT___GEN_279;
    __PVT___GEN_279 = 0;
    CData/*0:0*/ __PVT___will_save_probeack_T_2;
    __PVT___will_save_probeack_T_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_5;
    __VdfgRegularize_h42e69e07_2_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_29;
    __VdfgRegularize_h42e69e07_2_29 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_35;
    __VdfgRegularize_h42e69e07_2_35 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_37;
    __VdfgRegularize_h42e69e07_2_37 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_39;
    __VdfgRegularize_h42e69e07_2_39 = 0;
    // Body
    vlSelfRef.__PVT__client_set_match = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__req_set) 
                                         == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.__PVT__nest_c_tag_match = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_tag) 
                                         == (IData)(vlSelfRef.__PVT__req_tag));
    vlSelfRef.__PVT___probeack_last_T = ((IData)(vlSelfRef.__PVT__probes_done) 
                                         | ((2U & (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                     >> 8U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                >> 8U))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_31 = ((4U 
                                                  == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                 | ((5U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                    | ((1U 
                                                        == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                       | (0U 
                                                          == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_33 = (1U 
                                                 & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode) 
                                                    | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData)));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_22 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                     >> 1U) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                                       | ((IData)(vlSelfRef.__PVT__probeAckDataThrough) 
                                                          & (5U 
                                                             != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param))))));
    vlSelfRef.__PVT___change_self_meta_T_2 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_set) 
                                              == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.io_tasks_source_b_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_probe)) 
                                            & (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.io_tasks_source_a_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6_io_enable) 
                                         & (((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                             | (~ (IData)(vlSelfRef.__PVT__s_transferput))) 
                                            & ((IData)(vlSelfRef.__PVT__s_probe) 
                                               & ((IData)(vlSelfRef.__PVT__s_release) 
                                                  & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                                     & (IData)(vlSelfRef.__PVT__can_start))))));
    vlSelfRef.io_tasks_sink_c_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6_io_enable) 
                                       & ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                          | ((~ (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                             & ((~ (IData)(vlSelfRef.__PVT__releaseSave)) 
                                                | (IData)(vlSelfRef.__PVT__s_release)))));
    vlSelfRef.io_tasks_source_d_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_execute)) 
                                            & ((IData)(vlSelfRef.__PVT__can_start) 
                                               & ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                                  & ((IData)(vlSelfRef.__PVT__w_grant) 
                                                     & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                        & (IData)(vlSelfRef.__PVT__w_probeacklast)))))));
    vlSelfRef.io_tasks_source_c_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_release)) 
                                            | ((~ (IData)(vlSelfRef.__PVT__s_probeack)) 
                                               & ((IData)(vlSelfRef.__PVT__s_writerelease) 
                                                  & (IData)(vlSelfRef.__PVT__w_probeack)))));
    __VdfgRegularize_h42e69e07_2_29 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6_io_enable) 
                                       & ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & (IData)(vlSelfRef.__PVT__can_start)));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) 
                               | (IData)(vlSelfRef.__PVT__meta_valid));
    vlSelfRef.__PVT___GEN_283 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_290 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_288 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__inv_self_dir));
    vlSelfRef.__PVT___GEN_286 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__bad_grant));
    vlSelfRef.__PVT___GEN_282 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__promoteT_safe));
    vlSelfRef.__PVT___GEN_471 = ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                     >> 2U)) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG));
    vlSelfRef.__PVT___GEN_272 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__s_writeprobe));
    vlSelfRef.__PVT__clientBitOH = ((2U & ((~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                               >> 8U)) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                             >> 8U)));
    vlSelfRef.__PVT__sink_c_resp_valid = ((~ (IData)(vlSelfRef.__PVT__w_probeacklast)) 
                                          & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6_io_resps_sink_c_valid));
    vlSelfRef.__PVT___T_5 = (0xffU & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                       >> 8U) | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg)));
    vlSelfRef.__PVT___GEN_423 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_6_valid) 
                                 | ((~ (IData)(vlSelfRef.io_status_bits_will_free)) 
                                    & (IData)(vlSelfRef.__PVT__req_valid)));
    vlSelfRef.__PVT___GEN_318 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_b_status_probeHelperFinish) 
                                     & (IData)(vlSelfRef.__PVT__client_set_match))) 
                                 | (IData)(vlSelfRef.__PVT__probe_helper_finish));
    vlSelfRef.__PVT__probeack_last = ((IData)(vlSelfRef.__PVT___probeack_last_T) 
                                      == (IData)(vlSelfRef.__PVT__probe_clients));
    __PVT__nested_client_match = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_tag) 
                                   == ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                        ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag)
                                        : (IData)(vlSelfRef.__PVT__meta_reg_clients_tag))) 
                                  & (IData)(vlSelfRef.__PVT___change_self_meta_T_2));
    vlSelfRef.io_tasks_client_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                                 & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.io_tasks_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                          & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.io_tasks_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselfdir)) 
                                          & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.io_tasks_client_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                                 & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.__PVT___GEN_472 = ((IData)(vlSelfRef.__PVT___GEN_471) 
                                 & ((IData)(vlSelfRef.__PVT__req_channel) 
                                    >> 1U));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_271 = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U)) 
                                           | ((~ (IData)(vlSelfRef.__PVT__req_opcode)) 
                                              | (IData)(vlSelfRef.__PVT__req_fromCmoHelper))));
        vlSelfRef.io_status_bits_way = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
        vlSelfRef.__PVT___GEN_16 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__hit_s2;
    } else {
        vlSelfRef.__PVT___GEN_271 = (1U & (IData)(vlSelfRef.__PVT__s_writerelease));
        vlSelfRef.io_status_bits_way = vlSelfRef.__PVT__meta_reg_self_way;
        vlSelfRef.__PVT___GEN_16 = vlSelfRef.__PVT__meta_reg_self_hit;
    }
    vlSelfRef.__PVT___GEN_102 = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                                          & (IData)(vlSelfRef.__PVT___GEN_16))));
    vlSelfRef.__PVT___T_60 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                    & (IData)(vlSelfRef.__PVT__req_opcode)));
    __VdfgRegularize_h42e69e07_2_35 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                    >> 1U)))));
    __VdfgRegularize_h42e69e07_2_37 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                             | (IData)(vlSelfRef.__PVT__req_needT)));
    vlSelfRef.__PVT___T_146 = (1U & (~ ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                        & (7U == (IData)(vlSelfRef.__PVT__req_opcode)))));
    vlSelfRef.__PVT___a_c_through_T_3 = ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                         & (IData)(vlSelfRef.__PVT__nest_c_tag_match));
    vlSelfRef.__PVT__nested_c_hit = (((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                      & (((IData)(vlSelfRef.__PVT__meta_valid) 
                                          & ((IData)(vlSelfRef.__PVT__req_channel) 
                                             & (IData)(vlSelfRef.__PVT___change_self_meta_T_2))) 
                                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT____VdfgRegularize_hf4af413a_4_0) 
                                            & ((IData)(vlSelfRef.__PVT__req_tag) 
                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_tag))))) 
                                     | (IData)(vlSelfRef.__PVT__nested_c_hit_reg));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_14 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT___GEN_20 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
    } else {
        vlSelfRef.__PVT___GEN_14 = vlSelfRef.__PVT__meta_reg_self_tag;
        vlSelfRef.__PVT___GEN_20 = vlSelfRef.__PVT__meta_reg_self_dirty;
    }
    vlSelfRef.__PVT___new_self_meta_dirty_T_13 = ((IData)(vlSelfRef.__PVT___GEN_20) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    vlSelfRef.__PVT___new_self_meta_dirty_T = ((IData)(vlSelfRef.__PVT___GEN_16) 
                                               & (IData)(vlSelfRef.__PVT___GEN_20));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_17 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_0;
        vlSelfRef.__PVT___GEN_18 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_1;
    } else {
        vlSelfRef.__PVT___GEN_17 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
        vlSelfRef.__PVT___GEN_18 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    }
    __PVT__meta_no_clients = ((0U == (IData)(vlSelfRef.__PVT___GEN_17)) 
                              & (0U == (IData)(vlSelfRef.__PVT___GEN_18)));
    vlSelfRef.__PVT___GEN_19 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                 ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_state)
                                 : (IData)(vlSelfRef.__PVT__meta_reg_self_state));
    vlSelfRef.__PVT___T_81 = ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                              | (((IData)(vlSelfRef.__PVT___GEN_19) 
                                  >> 1U) & (1U == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_38 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_19) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.__PVT__req_param))));
    __PVT__replace_need_release = (((IData)(vlSelfRef.__PVT___GEN_19) 
                                    > (((IData)(vlSelfRef.__PVT___GEN_17) 
                                        > (IData)(vlSelfRef.__PVT___GEN_18))
                                        ? (IData)(vlSelfRef.__PVT___GEN_17)
                                        : (IData)(vlSelfRef.__PVT___GEN_18))) 
                                   | ((IData)(vlSelfRef.__PVT___GEN_20) 
                                      & ((IData)(vlSelfRef.__PVT___GEN_19) 
                                         >> 1U)));
    if (vlSelfRef.__PVT___GEN_16) {
        __PVT___highest_perm_except_me_T = vlSelfRef.__PVT___GEN_19;
        vlSelfRef.__PVT___highest_perm_T_2 = vlSelfRef.__PVT___GEN_19;
    } else {
        __PVT___highest_perm_except_me_T = 0U;
        vlSelfRef.__PVT___highest_perm_T_2 = 0U;
    }
    __VdfgRegularize_h42e69e07_2_5 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                            | (~ ((IData)(vlSelfRef.__PVT___GEN_19) 
                                                  >> 1U))));
    vlSelfRef.__PVT__change_self_meta = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                         & (((0U != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                             & (IData)(vlSelfRef.__PVT___change_self_meta_T_2)) 
                                            & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_tag) 
                                               == (IData)(vlSelfRef.__PVT___GEN_14))));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_12 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_0_state;
    } else {
        vlSelfRef.__PVT___GEN_12 = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
    }
    vlSelfRef.__PVT___GEN_23 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_12)
                                 : (IData)(vlSelfRef.__PVT___GEN_10));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_11 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_9 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_0_hit;
    } else {
        vlSelfRef.__PVT___GEN_11 = vlSelfRef.__PVT__meta_reg_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_9 = vlSelfRef.__PVT__meta_reg_clients_states_0_hit;
    }
    vlSelfRef.__PVT___GEN_27 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_11)
                                 : (IData)(vlSelfRef.__PVT___GEN_9));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_27 = ((IData)(vlSelfRef.__PVT__req_valid) 
                                                 & (IData)(vlSelfRef.__PVT__sink_c_resp_valid));
    vlSelfRef.__PVT__sinkc_resp_last = ((IData)(vlSelfRef.__PVT__sink_c_resp_valid) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last));
    if (vlSelfRef.__PVT___GEN_11) {
        vlSelfRef.__PVT___clients_have_T_T_3 = ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                >> 1U);
        vlSelfRef.__PVT___highest_perm_T_4 = vlSelfRef.__PVT___GEN_12;
    } else {
        vlSelfRef.__PVT___clients_have_T_T_3 = 0U;
        vlSelfRef.__PVT___highest_perm_T_4 = 0U;
    }
    vlSelfRef.__PVT__clients_meta_busy = (((~ (IData)(vlSelfRef.__PVT___GEN_9)) 
                                           & (0U != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                          | ((~ (IData)(vlSelfRef.__PVT___GEN_11)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT___GEN_12))));
    vlSelfRef.__PVT___clients_have_T_T_1 = ((IData)(vlSelfRef.__PVT___GEN_9) 
                                            & ((IData)(vlSelfRef.__PVT___GEN_10) 
                                               >> 1U));
    vlSelfRef.__PVT___GEN_100 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_11)) 
                                       & (~ (IData)(vlSelfRef.__PVT___GEN_9))));
    vlSelfRef.__PVT___transmit_from_other_client_T_12 
        = ((((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (1U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_11)) | 
           (((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (0U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_17 = ((5U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                    | (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__PVT___highest_perm_T_3 = ((IData)(vlSelfRef.__PVT___GEN_9)
                                           ? (IData)(vlSelfRef.__PVT___GEN_10)
                                           : 0U);
    __PVT___GEN_123 = (1U & (~ ((IData)(vlSelfRef.__PVT___GEN_9) 
                                | (IData)(vlSelfRef.__PVT___GEN_11))));
    vlSelfRef.__PVT___T_7 = (0xfU & (((IData)(vlSelfRef.__PVT___T_5) 
                                      >> 4U) | (IData)(vlSelfRef.__PVT___T_5)));
    vlSelfRef.__PVT__change_clients_meta_0 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_10)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__PVT__change_clients_meta_1 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_12)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_19 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                 & (((IData)(vlSelfRef.__PVT___GEN_12) 
                                                     >> 1U) 
                                                    | (IData)(__VdfgRegularize_h42e69e07_2_35)));
    __PVT___T_171 = ((IData)(vlSelfRef.__PVT___GEN_9) 
                     & (((IData)(vlSelfRef.__PVT___GEN_10) 
                         >> 1U) | (IData)(__VdfgRegularize_h42e69e07_2_35)));
    vlSelfRef.io_status_bits_will_save_data = ((IData)(vlSelfRef.__PVT__req_channel) 
                                               & ((IData)(vlSelfRef.__PVT___T_146) 
                                                  & ((IData)(vlSelfRef.__PVT__preferCache_latch) 
                                                     | (IData)(vlSelfRef.__PVT___GEN_16))));
    vlSelfRef.__PVT___T_311 = (((IData)(vlSelfRef.__PVT__req_channel) 
                                & (IData)(vlSelfRef.__PVT__probeack_last)) 
                               & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last) 
                                     & ((~ (IData)(vlSelfRef.__PVT__nested_c_hit)) 
                                        & (~ (IData)(vlSelfRef.__PVT___GEN_16))))));
    vlSelfRef.__PVT__req_promoteT = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                     & ((IData)(vlSelfRef.__PVT___GEN_16)
                                         ? ((IData)(__PVT__meta_no_clients) 
                                            & (3U == (IData)(vlSelfRef.__PVT___GEN_19)))
                                         : ((IData)(vlSelfRef.__PVT__gotT) 
                                            & (IData)(vlSelfRef.__PVT__promoteT_safe))));
    vlSelfRef.__PVT___GEN_109 = (1U & (~ ((IData)(vlSelfRef.__PVT___T_60) 
                                          & ((0U != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                             & (IData)(__PVT__replace_need_release)))));
    __PVT___T_263 = ((IData)(vlSelfRef.__PVT__req_valid) 
                     & (IData)(vlSelfRef.__PVT__sinkc_resp_last));
    __PVT___highest_perm_except_me_T_12 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                            & (1U == (IData)(vlSelfRef.__PVT__iam)))
                                            ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    vlSelfRef.__PVT__clients_have_T = ((IData)(vlSelfRef.__PVT___clients_have_T_T_3) 
                                       | (IData)(vlSelfRef.__PVT___clients_have_T_T_1));
    vlSelfRef.__PVT__transmit_from_other_client = (
                                                   (~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                   & ((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_12) 
                                                      | (IData)(vlSelfRef.__PVT__transmit_from_other_client_reg)));
    vlSelfRef.__PVT___GEN_412 = (1U & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_valid) 
                                        & (6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_bits_sink))) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))))
                                           : (IData)(vlSelfRef.__PVT__w_grantack))));
    __PVT___highest_perm_except_me_T_6 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                           & (0U == (IData)(vlSelfRef.__PVT__iam)))
                                           ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_3));
    vlSelfRef.__PVT___highest_perm_T_6 = (((IData)(vlSelfRef.__PVT___highest_perm_T_3) 
                                           > (IData)(vlSelfRef.__PVT___highest_perm_T_4))
                                           ? (IData)(vlSelfRef.__PVT___highest_perm_T_3)
                                           : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    __VdfgRegularize_h42e69e07_2_39 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                             & (~ (IData)(vlSelfRef.__PVT___GEN_27))));
    vlSelfRef.__PVT___GEN_124 = ((IData)(__PVT___GEN_123) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_38));
    vlSelfRef.__PVT__bypassPut = (IData)((((0U == (6U 
                                                   & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                           & (~ (IData)(vlSelfRef.__PVT___GEN_16))) 
                                          & (IData)(__PVT___GEN_123)));
    vlSelfRef.__PVT___T_294 = ((~ (IData)(vlSelfRef.__PVT__acquire_flag)) 
                               & (IData)(vlSelfRef.__PVT___T_311));
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27 
        = (((IData)(vlSelfRef.__PVT__req_needT) | (IData)(vlSelfRef.__PVT__req_promoteT))
            ? 3U : 1U);
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36 
        = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
           | ((IData)(vlSelfRef.__PVT__req_promoteT) 
              | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))));
    vlSelfRef.__PVT___GEN_356 = (((IData)(__PVT___T_263) 
                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                 | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData));
    if (__PVT___T_263) {
        vlSelfRef.__VdfgRegularize_h42e69e07_2_23 = vlSelfRef.__PVT__probeack_last;
        if ((0x100U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
        } else {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
        }
    } else {
        vlSelfRef.__VdfgRegularize_h42e69e07_2_23 = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_0 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
        vlSelfRef.__PVT__client_probeack_param_vec_1 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
    }
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
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_9) 
                           & (IData)(__VdfgRegularize_h42e69e07_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_9) 
                  & (IData)(__VdfgRegularize_h42e69e07_2_39)))));
    vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1 
        = ((1U != (IData)(vlSelfRef.__PVT__iam)) & 
           (((1U == (IData)(vlSelfRef.__PVT__req_param)) 
             & (((IData)(vlSelfRef.__PVT___GEN_12) 
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_11) 
                           & (IData)(__VdfgRegularize_h42e69e07_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(__VdfgRegularize_h42e69e07_2_39)))));
    vlSelfRef.__PVT__preferCache = ((~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                         ? (IData)(vlSelfRef.__PVT__bypassPut)
                                         : (IData)(vlSelfRef.__PVT__bypassPut_latch_reg))) 
                                    & (IData)(vlSelfRef.__PVT__req_preferCache));
    vlSelfRef.__PVT___new_clients_meta_0_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)))
            ? 1U : 0U);
    vlSelfRef.__PVT___new_clients_meta_1_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)))
            ? 1U : 0U);
    __PVT__highest_perm_except_me = (((IData)(__PVT___highest_perm_except_me_T) 
                                      > (IData)(__PVT___highest_perm_except_me_T_14))
                                      ? (IData)(__PVT___highest_perm_except_me_T)
                                      : (IData)(__PVT___highest_perm_except_me_T_14));
    vlSelfRef.io_tasks_dir_write_bits_data_state = 
        ((IData)(vlSelfRef.__PVT__bad_grant) ? (IData)(vlSelfRef.__PVT___GEN_19)
          : ((4U & (IData)(vlSelfRef.__PVT__req_channel))
              ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                  ? ((1U == (IData)(vlSelfRef.__PVT__req_param))
                      ? ((IData)(vlSelfRef.__PVT___GEN_16)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_19))
                              ? 3U : 1U) : (IData)(vlSelfRef.__PVT___GEN_19))
                      : 0U) : ((2U == (IData)(vlSelfRef.__PVT__req_param))
                                ? (((IData)(vlSelfRef.__PVT___GEN_16) 
                                    & (3U == (IData)(vlSelfRef.__PVT___GEN_19)))
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
                                                     : (IData)(vlSelfRef.__PVT___GEN_19))))))
              : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                  ? ((IData)(vlSelfRef.__PVT___GEN_16)
                      ? ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_9)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_19))
                              ? 3U : 1U) : ((((IData)(vlSelfRef.__PVT___GEN_19) 
                                              >> 1U) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__req_param)))
                                             ? (IData)(vlSelfRef.__PVT___GEN_19)
                                             : (((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                                 & (2U 
                                                    != (IData)(vlSelfRef.__PVT__req_param)))
                                                 ? 1U
                                                 : 0U)))
                      : (IData)(vlSelfRef.__PVT___GEN_19))
                  : ((IData)(vlSelfRef.__PVT__inv_self_dir)
                      ? 0U : ((IData)(vlSelfRef.__PVT__req_needT)
                               ? ((IData)(vlSelfRef.__PVT__req_acquire)
                                   ? 2U : 3U) : ((IData)(vlSelfRef.__PVT___GEN_16)
                                                  ? 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT___GEN_19))
                                                   ? 
                                                  (((IData)(__PVT__meta_no_clients) 
                                                    & (IData)(vlSelfRef.__PVT__req_acquire))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__PVT___GEN_19))
                                                    ? 3U
                                                    : 1U))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__transmit_from_other_client)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__highest_perm) 
                                                    | (IData)(vlSelfRef.__PVT__highest_perm_reg_reg)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : 1U))))))));
    vlSelfRef.__PVT__will_probeack_through = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) 
                                              & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                                                    | ((IData)(vlSelfRef.__PVT__req_needProbeAckData) 
                                                       & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT__highest_perm)))))));
    __PVT__prefetch_miss_need_probe = ((IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1) 
                                       | (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_26 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__preferCache) 
                                                     | (IData)(vlSelfRef.__PVT___GEN_16))));
    vlSelfRef.__PVT__bypassGet = ((~ (IData)(vlSelfRef.__PVT__preferCache)) 
                                  & (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    if (vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37) {
        __PVT___new_self_meta_clientStates_0_T_38 = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
    } else {
        __PVT___new_self_meta_clientStates_0_T_38 = 0U;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
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
    vlSelfRef.__PVT___GEN_129 = (1U & (~ ((IData)(vlSelfRef.__PVT__req_acquire)
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
                                      & (IData)(vlSelfRef.__PVT___GEN_16));
    if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        vlSelfRef.__PVT___GEN_306 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) 
                                     & ((~ (IData)(vlSelfRef.__PVT__will_probeack_through)) 
                                        & ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 1U)));
        if (vlSelfRef.__PVT__req_fromProbeHelper) {
            vlSelfRef.__PVT___GEN_305 = ((IData)(vlSelfRef.__PVT__will_probeack_through) 
                                         & (~ (IData)(vlSelfRef.__PVT___GEN_16)));
            vlSelfRef.__PVT___GEN_307 = (1U & (IData)(__PVT___will_save_probeack_T_2));
        } else {
            vlSelfRef.__PVT___GEN_305 = vlSelfRef.__PVT__will_probeack_through;
            vlSelfRef.__PVT___GEN_307 = (1U & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)) 
                                               | ((~ 
                                                   ((IData)(vlSelfRef.__PVT__req_channel) 
                                                    >> 1U)) 
                                                  | ((IData)(__PVT___will_save_probeack_T_2) 
                                                     & (1U 
                                                        == (IData)(vlSelfRef.__PVT__req_param))))));
        }
    } else {
        vlSelfRef.__PVT___GEN_306 = vlSelfRef.__PVT__probeAckDataDrop;
        vlSelfRef.__PVT___GEN_305 = vlSelfRef.__PVT__probeAckDataThrough;
        vlSelfRef.__PVT___GEN_307 = (1U & ((~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)) 
                                           & (~ (IData)(vlSelfRef.__PVT__probeAckDataDrop))));
    }
    vlSelfRef.__PVT__prefetch_need_data = ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
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
    if (__PVT__prefetch_miss_need_probe) {
        __PVT___T_162 = (5U == (IData)(vlSelfRef.__PVT__req_opcode));
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
        __PVT___T_162 = 0U;
        vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
        vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
    }
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
                                                     : (IData)(vlSelfRef.__PVT__req_opcode))));
    vlSelfRef.__PVT___GEN_339 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT__chosen_reg) 
                                          >> 6U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT____VdfgRegularize_h528b8c7d_0_13)) 
                                        & (IData)(vlSelfRef.io_tasks_source_e_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                    | ((IData)(vlSelfRef.__PVT___GEN_129) 
                                                       | (~ 
                                                          ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                           & (~ (IData)(vlSelfRef.__PVT__bypassPut))))))))
                                           : (IData)(vlSelfRef.__PVT__s_grantack))));
    vlSelfRef.__PVT___GEN_236 = (1U & (IData)((((0U 
                                                 != 
                                                 (6U 
                                                  & (IData)(vlSelfRef.__PVT__req_channel))) 
                                                | (IData)(vlSelfRef.__PVT___GEN_129)) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))));
    __PVT___GEN_131 = (1U & ((IData)(vlSelfRef.__PVT___GEN_129) 
                             | (~ ((IData)(vlSelfRef.__PVT___T_146) 
                                   & (((4U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                                       & (IData)(vlSelfRef.__PVT___GEN_16)) 
                                      | (IData)(vlSelfRef.__PVT__preferCache))))));
    vlSelfRef.__PVT___T_133 = ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                               & ((0U != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                  & ((IData)(__PVT__replace_need_release) 
                                     & (((IData)(vlSelfRef.__PVT__preferCache) 
                                         & ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            | (4U == (IData)(vlSelfRef.__PVT__req_opcode)))) 
                                        | ((IData)(vlSelfRef.__PVT__prefetch_need_data) 
                                           | (IData)(vlSelfRef.__PVT__transmit_from_other_client))))));
    vlSelfRef.__PVT___T_185 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                               & (((IData)(vlSelfRef.__PVT__req_acquire) 
                                   & ((IData)(__VdfgRegularize_h42e69e07_2_37) 
                                      | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                         >> 1U))) | (IData)(__PVT___T_162)));
    __PVT___T_164 = ((IData)(vlSelfRef.__PVT___GEN_9) 
                     & (((IData)(vlSelfRef.__PVT__req_acquire) 
                         & ((IData)(__VdfgRegularize_h42e69e07_2_37) 
                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                               >> 1U))) | (IData)(__PVT___T_162)));
    vlSelfRef.io_tasks_source_d_bits_useBypass = ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                       >> 1U))) 
                                                  & (((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.__PVT___GEN_19)) 
                                                         & (IData)(vlSelfRef.__PVT__req_needT))) 
                                                     & ((~ (IData)(vlSelfRef.__PVT__probe_dirty)) 
                                                        | ((IData)(vlSelfRef.__PVT__acquire_flag) 
                                                           & (7U 
                                                              != (IData)(vlSelfRef.io_tasks_source_a_bits_opcode))))));
    __PVT___GEN_132 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                       & (IData)(__PVT___GEN_131));
    vlSelfRef.__PVT___GEN_216 = (1U & (((IData)(vlSelfRef.__PVT__req_channel) 
                                        >> 1U) | ((~ (IData)(vlSelfRef.__PVT___T_133)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_276 = vlSelfRef.__PVT___GEN_236;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT___GEN_236;
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT___GEN_236;
        __PVT___GEN_279 = ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                            ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                ? (IData)(vlSelfRef.__PVT___GEN_102)
                                : (IData)(vlSelfRef.__PVT___GEN_109))
                            : (IData)(vlSelfRef.__PVT___GEN_216));
    } else {
        vlSelfRef.__PVT___GEN_276 = vlSelfRef.__PVT__w_grantfirst;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT__w_grant;
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT__w_grantlast;
        __PVT___GEN_279 = vlSelfRef.__PVT__w_releaseack;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.__PVT__req_fromCmoHelper) {
            if (vlSelfRef.__PVT___GEN_16) {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_17)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_18)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
            } else {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = vlSelfRef.__PVT___GEN_17;
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = vlSelfRef.__PVT___GEN_18;
            }
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((0U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_17)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((1U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_18)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state));
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.__PVT___GEN_16) {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((((IData)(vlSelfRef.__PVT___GEN_17) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_17)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_17)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((((IData)(vlSelfRef.__PVT___GEN_18) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_18)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_18)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = vlSelfRef.__PVT___GEN_17;
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = vlSelfRef.__PVT___GEN_18;
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
    if (vlSelfRef.__VdfgRegularize_h42e69e07_2_36) {
        vlSelfRef.__PVT___GEN_155 = ((0U != (IData)(vlSelfRef.__PVT__iam)) 
                                     & (IData)(__PVT___T_164));
        vlSelfRef.__PVT___GEN_158 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                           | ((~ (IData)(__PVT___T_164)) 
                                              | (IData)(vlSelfRef.__PVT___GEN_16))));
        __PVT___GEN_156 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                 | (~ (IData)(__PVT___T_164))));
        __PVT___GEN_157 = ((0U != (IData)(vlSelfRef.__PVT__iam))
                            ? ((IData)(__PVT___T_164)
                                ? (IData)(__PVT___GEN_132)
                                : (IData)(__PVT___GEN_131))
                            : (IData)(__PVT___GEN_131));
        vlSelfRef.__PVT___GEN_183 = ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_185)) 
                                         & (IData)(__PVT___GEN_156))
                                      : (IData)(__PVT___GEN_156));
    } else {
        vlSelfRef.__PVT___GEN_155 = __PVT___T_171;
        vlSelfRef.__PVT___GEN_158 = (1U & ((~ (IData)(__PVT___T_171)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_16)));
        __PVT___GEN_156 = (1U & (~ (IData)(__PVT___T_171)));
        __PVT___GEN_157 = ((IData)(__PVT___T_171) ? 
                           ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                            & (IData)(__PVT___GEN_132))
                            : (IData)(__PVT___GEN_131));
        vlSelfRef.__PVT___GEN_183 = ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19)) 
                                     & (IData)(__PVT___GEN_156));
    }
    vlSelfRef.__PVT___GEN_226 = (1U & ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                        ? ((~ (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_100))
                                        : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                                            ? (IData)(vlSelfRef.__PVT___GEN_124)
                                            : ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                               | (IData)(vlSelfRef.__PVT___GEN_183)))));
    if (vlSelfRef.__VdfgRegularize_h42e69e07_2_27) {
        vlSelfRef.__PVT___GEN_386 = ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_276));
        vlSelfRef.__PVT___GEN_388 = ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_278));
        vlSelfRef.__PVT___GEN_387 = ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_277));
        vlSelfRef.__PVT___GEN_380 = ((IData)(vlSelfRef.__PVT__w_probeackfirst) 
                                     | (IData)(vlSelfRef.__PVT__probeack_last));
        vlSelfRef.__PVT___GEN_381 = ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                     | ((IData)(vlSelfRef.__PVT__probeack_last) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last)));
        vlSelfRef.__PVT___GEN_382 = ((IData)(vlSelfRef.__PVT__w_probeack) 
                                     | ((IData)(vlSelfRef.__PVT__probeack_last) 
                                        & ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last))));
    } else {
        vlSelfRef.__PVT___GEN_386 = vlSelfRef.__PVT___GEN_276;
        vlSelfRef.__PVT___GEN_388 = vlSelfRef.__PVT___GEN_278;
        vlSelfRef.__PVT___GEN_387 = vlSelfRef.__PVT___GEN_277;
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
            vlSelfRef.__PVT___GEN_380 = vlSelfRef.__PVT___GEN_226;
            vlSelfRef.__PVT___GEN_381 = vlSelfRef.__PVT___GEN_226;
            vlSelfRef.__PVT___GEN_382 = vlSelfRef.__PVT___GEN_226;
        } else {
            vlSelfRef.__PVT___GEN_380 = vlSelfRef.__PVT__w_probeackfirst;
            vlSelfRef.__PVT___GEN_381 = vlSelfRef.__PVT__w_probeacklast;
            vlSelfRef.__PVT___GEN_382 = vlSelfRef.__PVT__w_probeack;
        }
    }
    vlSelfRef.__PVT___GEN_160 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                                 & (IData)(vlSelfRef.__PVT___GEN_158));
    __PVT___GEN_159 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                       & (IData)(__PVT___GEN_157));
    vlSelfRef.__PVT___GEN_184 = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_36)
                                  ? ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((IData)(vlSelfRef.__PVT___T_185)
                                          ? (IData)(__PVT___GEN_159)
                                          : (IData)(__PVT___GEN_157))
                                      : (IData)(__PVT___GEN_157))
                                  : ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19)
                                      ? ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                         & (IData)(__PVT___GEN_159))
                                      : (IData)(__PVT___GEN_157)));
    vlSelfRef.__PVT___GEN_365 = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_23)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_33)
                                      ? ((~ (((((IData)(vlSelfRef.__PVT__req_channel) 
                                                >> 1U) 
                                               & (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                              | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                             & (IData)(vlSelfRef.__PVT__probeAckDataThrough))) 
                                         & (IData)(__PVT___GEN_279))
                                      : ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_22)
                                          ? ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                             & (IData)(__PVT___GEN_279))
                                          : (IData)(__PVT___GEN_279)))
                                  : (IData)(__PVT___GEN_279));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6__2(VTestTop_L2L3L2_MSHR_32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___T_248;
    __PVT___T_248 = 0;
    CData/*0:0*/ __PVT___T_254;
    __PVT___T_254 = 0;
    // Body
    vlSelfRef.__PVT__nest_c_way_match = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.io_status_bits_way) 
                                         == (IData)(vlSelfRef.io_status_bits_way));
    vlSelfRef.__PVT___GEN_343 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter_2__DOT__chosenOH) 
                                          >> 6U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter_2_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_client_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_27)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientstag))));
    vlSelfRef.__PVT___GEN_341 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb__DOT__chosenOH) 
                                          >> 6U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper) 
                                                  | (~ (IData)(vlSelfRef.__PVT___T_60)))
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                     | ((~ 
                                                         ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                          & ((IData)(vlSelfRef.__PVT__preferCache) 
                                                             & ((4U 
                                                                 == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                                | ((6U 
                                                                    == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                                   | (IData)(vlSelfRef.__PVT__prefetch_need_data)))))) 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_36)
                                                            ? 
                                                           ((1U 
                                                             != (IData)(vlSelfRef.__PVT__iam))
                                                             ? 
                                                            ((IData)(vlSelfRef.__PVT___T_185)
                                                              ? (IData)(vlSelfRef.__PVT___GEN_160)
                                                              : (IData)(vlSelfRef.__PVT___GEN_158))
                                                             : (IData)(vlSelfRef.__PVT___GEN_158))
                                                            : 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19)
                                                             ? (IData)(vlSelfRef.__PVT___GEN_160)
                                                             : (IData)(vlSelfRef.__PVT___GEN_158)))))))
                                           : (IData)(vlSelfRef.__PVT__s_wbselftag))));
    vlSelfRef.__PVT___T_249 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT__chosen_reg) 
                                 >> 6U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT____VdfgRegularize_hae52cd36_0_26)) 
                               & (IData)(vlSelfRef.io_tasks_source_b_valid));
    __PVT___T_254 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT__chosen_reg) 
                       >> 6U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT____VdfgRegularize_h20ebb837_0_26)) 
                     & (IData)(vlSelfRef.io_tasks_source_c_valid));
    vlSelfRef.__PVT___GEN_338 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT__chosen_reg) 
                                          >> 6U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT____VdfgRegularize_h1ec93158_0_26)) 
                                        & (IData)(vlSelfRef.io_tasks_source_d_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? (IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                     | (5U 
                                                        == (IData)(vlSelfRef.__PVT__req_opcode)))))
                                           : (IData)(vlSelfRef.__PVT__s_execute))));
    vlSelfRef.__PVT___GEN_340 = (1U & ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH) 
                                         >> 6U) & (IData)(vlSelfRef.io_tasks_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? 
                                                  (~ (IData)(vlSelfRef.__PVT___GEN_16))
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.__PVT___GEN_16) 
                                                    | (IData)(vlSelfRef.__PVT__req_opcode))))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.__PVT__req_channel))
                                                   ? 
                                                  ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                   | (~ (IData)(vlSelfRef.__PVT___T_81)))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                   | ((~ (IData)(
                                                                 (((0U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                                                   & (~ (IData)(vlSelfRef.__PVT___GEN_20))) 
                                                                  & (IData)(vlSelfRef.__PVT___GEN_16)))) 
                                                      & ((IData)(vlSelfRef.__PVT__req_acquire)
                                                          ? 
                                                         ((~ 
                                                           ((IData)(vlSelfRef.__PVT___T_146) 
                                                            & ((IData)(vlSelfRef.__PVT___GEN_16) 
                                                               | (IData)(vlSelfRef.__PVT__preferCache)))) 
                                                          & (IData)(vlSelfRef.__PVT___GEN_184))
                                                          : (IData)(vlSelfRef.__PVT___GEN_184))))))
                                           : (IData)(vlSelfRef.__PVT__s_wbselfdir))));
    vlSelfRef.__PVT___GEN_342 = (1U & ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter_1__DOT__chosenOH) 
                                         >> 6U) & (IData)(vlSelfRef.io_tasks_client_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_100)
                                                   : 
                                                  (~ 
                                                   (((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.__PVT___GEN_23))) 
                                                    | ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10) 
                                                       & ((IData)(vlSelfRef.__PVT___GEN_23) 
                                                          >> 1U)))))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.__PVT__req_channel))
                                                   ? (IData)(vlSelfRef.__PVT___GEN_124)
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                   | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                      & (IData)(vlSelfRef.__PVT___GEN_183)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientsdir))));
    __PVT___T_248 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT__chosen_reg) 
                       >> 6U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT____VdfgRegularize_h3b69c469_0_26)) 
                     & (IData)(vlSelfRef.io_tasks_source_a_valid));
    vlSelfRef.__PVT___T_261 = ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT__chosen_reg) 
                                 >> 6U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT____VdfgRegularize_h5d7114fd_0_26)) 
                               & (IData)(vlSelfRef.io_tasks_sink_c_valid));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_30 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6_io_resps_sink_d_valid) 
                                                 & (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_413 = (1U & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_resp_valid) 
                                        & (6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s4_req_sinkId))) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
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
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))))
                                           : (IData)(vlSelfRef.__PVT__w_putwritten))));
    vlSelfRef.__PVT___GEN_335 = ((IData)(vlSelfRef.__PVT___T_249) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_226)
                                     : (IData)(vlSelfRef.__PVT__s_probe)));
    vlSelfRef.__PVT___GEN_337 = (1U & ((IData)(__PVT___T_254) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                           ? (1U & 
                                              ((2U 
                                                != 
                                                (6U 
                                                 & (IData)(vlSelfRef.__PVT__req_channel))) 
                                               | (~ 
                                                  ((~ (IData)(vlSelfRef.__PVT__will_probeack_through)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper))))))
                                           : (IData)(vlSelfRef.__PVT__s_probeack))));
    vlSelfRef.__PVT___GEN_336 = ((IData)(__PVT___T_254) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                     ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                         ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                             ? (IData)(vlSelfRef.__PVT___GEN_102)
                                             : (IData)(vlSelfRef.__PVT___GEN_109))
                                         : (IData)(vlSelfRef.__PVT___GEN_216))
                                     : (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.__PVT___GEN_333 = ((IData)(__PVT___T_248) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_236)
                                     : (IData)(vlSelfRef.__PVT__s_acquire)));
    vlSelfRef.__PVT___GEN_334 = (1U & ((IData)(__PVT___T_248) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__bypassPut)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))))
                                           : (IData)(vlSelfRef.__PVT__s_transferput))));
    vlSelfRef.__PVT___GEN_346 = (1U & ((IData)(vlSelfRef.__PVT___T_261)
                                        ? ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_272))
                                        : (IData)(vlSelfRef.__PVT___GEN_272)));
    vlSelfRef.__PVT___GEN_405 = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_31)
                                      ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last) 
                                         | (IData)(vlSelfRef.__PVT__w_grantlast))
                                      : (IData)(vlSelfRef.__PVT___GEN_387))
                                  : (IData)(vlSelfRef.__PVT___GEN_387));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7__0(VTestTop_L2L3L2_MSHR_32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__probe_dirty;
    __Vdly__probe_dirty = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_0;
    __Vdly__meta_reg_self_clientStates_0 = 0;
    CData/*1:0*/ __Vdly__meta_reg_self_clientStates_1;
    __Vdly__meta_reg_self_clientStates_1 = 0;
    // Body
    __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
    __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    __Vdly__probe_dirty = vlSelfRef.__PVT__probe_dirty;
    if (vlSelfRef.__PVT__change_self_meta) {
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_toN) {
            __Vdly__meta_reg_self_clientStates_0 = 0U;
            __Vdly__meta_reg_self_clientStates_1 = 0U;
            vlSelfRef.__PVT__meta_reg_self_state = 0U;
        } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_toB) {
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_0))) {
                __Vdly__meta_reg_self_clientStates_0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__meta_reg_self_clientStates_1))) {
                __Vdly__meta_reg_self_clientStates_1 = 1U;
            }
            vlSelfRef.__PVT__meta_reg_self_state = 1U;
        } else {
            __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_17;
            __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_18;
            vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_19;
        }
        vlSelfRef.__PVT__meta_reg_self_hit = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_toN))) 
                                              && (IData)(vlSelfRef.__PVT___GEN_16));
        vlSelfRef.__PVT__meta_reg_self_dirty = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_c_set_dirty) 
                                                | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_set_dirty) 
                                                   | ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_clr_dirty)) 
                                                      & (IData)(vlSelfRef.__PVT___GEN_20))));
    } else {
        __Vdly__meta_reg_self_clientStates_0 = vlSelfRef.__PVT___GEN_17;
        __Vdly__meta_reg_self_clientStates_1 = vlSelfRef.__PVT___GEN_18;
        vlSelfRef.__PVT__meta_reg_self_state = vlSelfRef.__PVT___GEN_19;
        vlSelfRef.__PVT__meta_reg_self_hit = vlSelfRef.__PVT___GEN_16;
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__meta_reg_self_dirty = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
        }
    }
    vlSelfRef.__PVT__someClientHasProbeAckData = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                      && (IData)(vlSelfRef.__PVT___GEN_356)));
    vlSelfRef.__PVT__transmit_from_other_client_latch 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && (IData)(vlSelfRef.__PVT__transmit_from_other_client));
    vlSelfRef.__PVT__s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                  | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_333))
                                      : (IData)(vlSelfRef.__PVT___GEN_333)));
    vlSelfRef.__PVT__w_probeackfirst = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_380));
    vlSelfRef.__PVT__s_execute = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_338));
    vlSelfRef.__PVT__w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                         ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_31) 
                                            | (IData)(vlSelfRef.__PVT___GEN_386))
                                         : (IData)(vlSelfRef.__PVT___GEN_386)));
    vlSelfRef.__PVT__w_grant = ((IData)(vlSymsp->TOP.reset) 
                                | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                    ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_31)
                                        ? (((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                            & (IData)(vlSelfRef.__PVT__req_size)) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last))
                                        : (IData)(vlSelfRef.__PVT___GEN_388))
                                    : (IData)(vlSelfRef.__PVT___GEN_388)));
    vlSelfRef.__PVT__s_probe = ((IData)(vlSymsp->TOP.reset) 
                                | (IData)(vlSelfRef.__PVT___GEN_335));
    if (vlSelfRef.__PVT__change_clients_meta_1) {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_1_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_12));
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_1_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_11));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_1_state 
            = vlSelfRef.__PVT___GEN_12;
        vlSelfRef.__PVT__meta_reg_clients_states_1_hit 
            = vlSelfRef.__PVT___GEN_11;
    }
    if (vlSelfRef.__PVT__change_clients_meta_0) {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_0_isToN)
                ? 0U : (IData)(vlSelfRef.__PVT___GEN_10));
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = ((1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_clients_0_isToN))) 
               && (IData)(vlSelfRef.__PVT___GEN_9));
    } else {
        vlSelfRef.__PVT__meta_reg_clients_states_0_state 
            = vlSelfRef.__PVT___GEN_10;
        vlSelfRef.__PVT__meta_reg_clients_states_0_hit 
            = vlSelfRef.__PVT___GEN_9;
    }
    vlSelfRef.__PVT__promoteT_safe = ((IData)(vlSymsp->TOP.reset) 
                                      | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                          ? ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                             & (IData)(vlSelfRef.__PVT___GEN_282))
                                          : (IData)(vlSelfRef.__PVT___GEN_282)));
    vlSelfRef.__PVT__w_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_382));
    vlSelfRef.__PVT__s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_23)
                                       ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_33)
                                           ? (IData)(vlSelfRef.__PVT___GEN_337)
                                           : ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_22)) 
                                              & (IData)(vlSelfRef.__PVT___GEN_337)))
                                       : (IData)(vlSelfRef.__PVT___GEN_337)));
    vlSelfRef.__PVT__s_release = ((IData)(vlSymsp->TOP.reset) 
                                  | (IData)(vlSelfRef.__PVT___GEN_336));
    vlSelfRef.__PVT__preferCache_latch = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                          && (IData)(vlSelfRef.__PVT__preferCache));
    vlSelfRef.__PVT__w_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | (IData)(vlSelfRef.__PVT___GEN_412));
    vlSelfRef.__PVT__w_putwritten = ((IData)(vlSymsp->TOP.reset) 
                                     | (IData)(vlSelfRef.__PVT___GEN_413));
    vlSelfRef.__PVT__w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_405));
    vlSelfRef.__PVT__s_transferput = ((IData)(vlSymsp->TOP.reset) 
                                      | (IData)(vlSelfRef.__PVT___GEN_334));
    vlSelfRef.__PVT__w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_30)
                                         ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (IData)(vlSelfRef.__PVT___GEN_365))
                                         : (IData)(vlSelfRef.__PVT___GEN_365)));
    vlSelfRef.__PVT__w_probeacklast = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_381));
    vlSelfRef.__PVT__s_writerelease = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSelfRef.__PVT___T_261)
                                           ? ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                              | (IData)(vlSelfRef.__PVT___GEN_271))
                                           : (IData)(vlSelfRef.__PVT___GEN_271)));
    if (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode) 
         & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7_io_resps_sink_c_valid))) {
        vlSelfRef.__PVT__io_tasks_sink_c_bits_bufIdx_r 
            = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_bufIdx;
    }
    vlSelfRef.__PVT__nested_c_hit_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                         && ((1U & 
                                              (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG))) 
                                             && (IData)(vlSelfRef.__PVT__nested_c_hit)));
    vlSelfRef.__PVT__acquire_flag = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && ((1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG))) 
                                         && (IData)(vlSelfRef.__PVT___GEN_91)));
    vlSelfRef.__PVT__s_grantack = ((IData)(vlSymsp->TOP.reset) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                       ? ((IData)(vlSelfRef.__PVT___T_294)
                                           ? ((~ ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__bypassPut_latch_reg)))) 
                                              & (IData)(vlSelfRef.__PVT___GEN_339))
                                           : (IData)(vlSelfRef.__PVT___GEN_339))
                                       : (IData)(vlSelfRef.__PVT___GEN_339)));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_7_valid) {
        vlSelfRef.__PVT__req_source = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source;
        vlSelfRef.__PVT__req_dirty = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_dirty;
        vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_needProbeAckData;
        vlSelfRef.__PVT__req_fromProbeHelper = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromProbeHelper;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__transmit_from_other_client_reg = 0U;
        vlSelfRef.__PVT__a_c_through_reg = 0U;
        vlSelfRef.__PVT__highest_perm_reg_reg = 0U;
    } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__transmit_from_other_client_reg 
            = vlSelfRef.__PVT___transmit_from_other_client_T_12;
        vlSelfRef.__PVT__a_c_through_reg = vlSelfRef.__PVT___GEN_16;
        vlSelfRef.__PVT__highest_perm_reg_reg = (((IData)(vlSelfRef.__PVT___highest_perm_T_2) 
                                                  > (IData)(vlSelfRef.__PVT___highest_perm_T_6))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT___GEN_16)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_19)
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
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__meta_reg_clients_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_self_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT__meta_reg_self_way = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
        vlSelfRef.__PVT__meta_reg_clients_way = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__way_s2;
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Directory result was sent to mismatch MSHR(mshrId: 7, resultId:%2#)\n    at MSHR.scala:60 assert(\n",0,
                      4,(((((IData)((0U != (0xffU & 
                                            ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                             >> 8U)))) 
                            << 1U) | (0U != (0xfU & 
                                             ((IData)(vlSelfRef.__PVT___T_5) 
                                              >> 4U)))) 
                          << 2U) | (((IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelfRef.__PVT___T_7) 
                                                >> 2U)))) 
                                     << 1U) | (IData)(
                                                      (0U 
                                                       != 
                                                       (0xaU 
                                                        & (IData)(vlSelfRef.__PVT___T_7)))))));
    }
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7_io_resps_sink_d_valid))
                                  ? (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                        | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                       | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                      | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                      ? (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_283))
                                  : (IData)(vlSelfRef.__PVT___GEN_283)));
    vlSelfRef.__PVT__gotDirty = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && (((IData)(vlSelfRef.__PVT__req_valid) 
                                      & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7_io_resps_sink_d_valid))
                                      ? (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                            | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                          | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                          ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_dirty)
                                          : (IData)(vlSelfRef.__PVT___GEN_290))
                                      : (IData)(vlSelfRef.__PVT___GEN_290)));
    vlSelfRef.__PVT__no_schedule_REG = ((IData)(vlSymsp->TOP.reset) 
                                        | (((((IData)(vlSelfRef.__PVT__s_wbselfdir) 
                                              & (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                             & (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                            & (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                           & (IData)(vlSelfRef.__PVT__meta_valid)));
    vlSelfRef.__PVT__inv_self_dir = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                     && (((IData)(vlSelfRef.__PVT__req_valid) 
                                          & (IData)(vlSelfRef.__PVT__sink_c_resp_valid))
                                          ? ((IData)(vlSelfRef.__PVT___T_311)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_26) 
                                                 | (IData)(vlSelfRef.__PVT___GEN_288))
                                              : (IData)(vlSelfRef.__PVT___GEN_288))
                                          : (IData)(vlSelfRef.__PVT___GEN_288)));
    if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            vlSelfRef.__PVT__sink = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_sink;
        }
    }
    vlSelfRef.__PVT__bad_grant = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (((IData)(vlSelfRef.__PVT__req_valid) 
                                       & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7_io_resps_sink_d_valid))
                                       ? (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                             | (5U 
                                                == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                            | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
                                           | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))
                                           ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_denied)
                                           : (IData)(vlSelfRef.__PVT___GEN_286))
                                       : (IData)(vlSelfRef.__PVT___GEN_286)));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_7_valid) {
        vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_bufIdx;
    } else if (((IData)(vlSelfRef.__PVT__req_valid) 
                & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7_io_resps_sink_d_valid))) {
        if (((((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
               | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
              | (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode))) 
             | (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))) {
            if ((0U != (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))) {
                vlSelfRef.__PVT__req_bufIdx = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_bufIdx;
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
                                          | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                         | (IData)(vlSelfRef.__PVT__nested_c_hit)));
            vlSelfRef.__PVT__probes_done = vlSelfRef.__PVT___probeack_last_T;
        } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
            __Vdly__probe_dirty = 0U;
            vlSelfRef.__PVT__probes_done = 0U;
        }
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
            vlSelfRef.__PVT__a_do_release = ((1U & 
                                              (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 2U))) 
                                             && ((~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17)) 
                                                    & (IData)(vlSelfRef.__PVT___T_133))));
            vlSelfRef.__PVT__a_do_probe = ((1U & (~ 
                                                  ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 2U))) 
                                           && ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U)) 
                                               & ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17)) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_36)
                                                      ? 
                                                     ((1U 
                                                       != (IData)(vlSelfRef.__PVT__iam))
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT___T_185) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_155))
                                                       : (IData)(vlSelfRef.__PVT___GEN_155))
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19) 
                                                      | (IData)(vlSelfRef.__PVT___GEN_155))))));
        }
        if (((IData)(vlSelfRef.__PVT__req_valid) & (IData)(vlSelfRef.__PVT__sinkc_resp_last))) {
            if ((0x100U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_0 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
            if ((1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                          >> 8U)))) {
                vlSelfRef.__PVT__client_probeack_param_vec_reg_1 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            }
        }
        if (vlSelfRef.io_status_bits_will_free) {
            vlSelfRef.__PVT__releaseThrough = 0U;
            vlSelfRef.__PVT__releaseDrop = 0U;
            vlSelfRef.__PVT__probeAckDataThrough = 0U;
            vlSelfRef.__PVT__probeAckDataDrop = 0U;
            vlSelfRef.__PVT__probeAckDataSave = 0U;
        } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
            if (vlSelfRef.__PVT__req_fromCmoHelper) {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                       & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                          & (~ (IData)(vlSelfRef.__PVT___GEN_16))));
                vlSelfRef.__PVT__probeAckDataDrop = 
                    (0U == (IData)(vlSelfRef.__PVT__req_param));
                vlSelfRef.__PVT__probeAckDataSave = 
                    ((IData)(vlSelfRef.__PVT___probeAckDataSave_T_4) 
                     & (IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_8));
            } else {
                vlSelfRef.__PVT__probeAckDataThrough 
                    = vlSelfRef.__PVT___GEN_305;
                vlSelfRef.__PVT__probeAckDataDrop = vlSelfRef.__PVT___GEN_306;
                vlSelfRef.__PVT__probeAckDataSave = vlSelfRef.__PVT___GEN_307;
            }
        }
    }
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    vlSelfRef.__PVT__REG = (1U & ((IData)(vlSymsp->TOP.reset) 
                                  | ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)) 
                                     | ((IData)(vlSelfRef.__PVT__req_valid) 
                                        & (~ (IData)(vlSelfRef.__PVT__meta_valid))))));
    if (VL_UNLIKELY((((IData)((2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((((IData)((0U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (3U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ProbeAck toT is not allowed in current design\n    at MSHR.scala:215 assert(param =/= TtoT, \"ProbeAck toT is not allowed in current design\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_1)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: L3 Release should always hit: mshrId:[ 7] addr: [%x]\n    at MSHR.scala:469 assert(RegNext(!meta_valid || !req.fromC || req.fromCmoHelper || clients_meta(iam).hit),\n",0,
                      16,(((IData)(vlSelfRef.__PVT__req_tag) 
                           << 8U) | ((IData)(vlSelfRef.__PVT__req_set) 
                                     << 1U)));
    }
    if (VL_UNLIKELY(((((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) 
                         & (2U == (6U & (IData)(vlSelfRef.__PVT__req_channel)))) 
                        & (IData)(vlSelfRef.__PVT___GEN_16)) 
                       & (~ (IData)(vlSelfRef.__PVT___T_81))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((1U == (IData)(vlSelfRef.__PVT___GEN_19)) 
                           & (1U == (IData)(vlSelfRef.__PVT__req_param))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Probe not supported: [self: %1#] [req: %1#]\n\n    at MSHR.scala:675 assert(probe_is_report(self_meta.state, req.param),\n",0,
                      2,vlSelfRef.__PVT___GEN_19,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_472) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_9)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_10) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_10))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:685 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_10,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    vlSelfRef.__PVT__REG_1 = (1U & ((((~ (IData)(vlSelfRef.__PVT__meta_valid)) 
                                      | (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                            >> 2U))) 
                                     | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                    | (IData)(vlSelfRef.__PVT___GEN_27)));
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_472) 
                        & (~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_38))) 
                       & (IData)(vlSelfRef.__PVT___GEN_11)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | ((((IData)(vlSelfRef.__PVT___GEN_12) 
                                >> 1U) | (1U == (IData)(vlSelfRef.__PVT___GEN_12))) 
                              & (1U == (IData)(vlSelfRef.__PVT__req_param)))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid Probe Request: [client: %1#] [req: %1#]\n\n    at MSHR.scala:685 assert(\n",0,
                      2,vlSelfRef.__PVT___GEN_12,3,
                      (IData)(vlSelfRef.__PVT__req_param));
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___GEN_471) 
                        & (~ ((IData)(vlSelfRef.__PVT__req_channel) 
                              >> 1U))) & (~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((5U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                           | (IData)(vlSelfRef.__PVT__req_preferCache)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Hint should always preferCache!\n    at MSHR.scala:830 assert(req.opcode =/= Hint || req.preferCache, \"Hint should always preferCache!\")\n",0);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__req_valid) 
                       & ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_21) 
                          & ((IData)(vlSelfRef.__PVT__client_dir_conflict) 
                             & (IData)(vlSelfRef.__PVT__probe_helper_finish)))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ (IData)(vlSelfRef.__PVT__REG_2))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Error L3: meta still conflict when probe helper finish! mshrId:  7\n    at MSHR.scala:936 assert(RegNext(!clients_meta_busy, true.B),\n",0);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT___T_249) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (0U == (IData)(vlSelfRef.__PVT__probe_clients))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Invalid probe task\n\n    at MSHR.scala:1250 assert(io.tasks.source_b.bits.clients =/= 0.U, \"Invalid probe task\\n\")\n",0);
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (IData)(vlSelfRef.__PVT__REG_3)))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:1441 assert(RegNext(!req_valid || !io.alloc.valid, true.B)) // TODO: support fully-pipelined\n",0);
    }
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__client_dir_conflict = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_21) 
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
                                                 & ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                    & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                        & (0U 
                                                           != (IData)(vlSelfRef.__PVT___GEN_12))) 
                                                       | ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                          | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                             >> 1U)))))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__req_param))
                                                   ? (IData)(vlSelfRef.__PVT___clients_have_T_T_3)
                                                   : (IData)(vlSelfRef.__PVT___GEN_11))
                                                  : (IData)(vlSelfRef.__PVT___GEN_11)))) 
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
                                                   & ((IData)(vlSelfRef.__PVT___GEN_9) 
                                                      & (((IData)(vlSelfRef.__PVT__req_needT) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                                         | ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                                                               >> 1U)))))
                                                : ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__req_param))
                                                     ? (IData)(vlSelfRef.__PVT___clients_have_T_T_1)
                                                     : (IData)(vlSelfRef.__PVT___GEN_9))
                                                    : (IData)(vlSelfRef.__PVT___GEN_9)))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    } else if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
        vlSelfRef.__PVT__bypassPut_latch_reg = vlSelfRef.__PVT__bypassPut;
    } else if (vlSelfRef.io_status_bits_will_free) {
        vlSelfRef.__PVT__bypassPut_latch_reg = 0U;
    }
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_7_valid) {
        vlSelfRef.__PVT__req_size = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_size;
        vlSelfRef.__PVT__req_off = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_off;
        vlSelfRef.__PVT__req_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_tag;
        vlSelfRef.__PVT__req_preferCache = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_preferCache;
        vlSelfRef.__PVT__req_set = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_set;
        vlSelfRef.__PVT__req_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_opcode;
        vlSelfRef.__PVT__req_fromCmoHelper = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_fromCmoHelper;
        vlSelfRef.__PVT__iam = ((0U == (IData)(vlSelfRef.__PVT__clientBitOH))
                                 ? 2U : (1U & ((IData)(vlSelfRef.__PVT__clientBitOH) 
                                               >> 1U)));
        vlSelfRef.__PVT__req_channel = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_channel;
        vlSelfRef.__PVT__req_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_param;
    }
    vlSelfRef.__PVT__meta_reg_self_clientStates_0 = __Vdly__meta_reg_self_clientStates_0;
    vlSelfRef.__PVT__meta_reg_self_clientStates_1 = __Vdly__meta_reg_self_clientStates_1;
    vlSelfRef.__PVT__probe_dirty = __Vdly__probe_dirty;
    vlSelfRef.__PVT__no_wait = ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                & ((IData)(vlSelfRef.__PVT__w_grantlast) 
                                   & ((IData)(vlSelfRef.__PVT__w_releaseack) 
                                      & ((IData)(vlSelfRef.__PVT__w_grantack) 
                                         & (IData)(vlSelfRef.__PVT__w_putwritten)))));
    vlSelfRef.__PVT__s_writeprobe = ((IData)(vlSymsp->TOP.reset) 
                                     | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_23)
                                         ? ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_33)) 
                                            & (IData)(vlSelfRef.__PVT___GEN_346))
                                         : (IData)(vlSelfRef.__PVT___GEN_346)));
    vlSelfRef.__PVT___GEN_91 = (1U & ((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                      | (IData)(vlSelfRef.__PVT__acquire_flag)));
    vlSelfRef.io_tasks_source_e_valid = ((~ (IData)(vlSelfRef.__PVT__s_grantack)) 
                                         & (IData)(vlSelfRef.__PVT__w_grantfirst));
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
                                       | (IData)(vlSelfRef.__PVT___GEN_343));
    vlSelfRef.__PVT__s_wbselftag = ((IData)(vlSymsp->TOP.reset) 
                                    | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_27)
                                        ? ((IData)(vlSelfRef.__PVT___T_311)
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_26) 
                                               | (IData)(vlSelfRef.__PVT___GEN_341))
                                            : (IData)(vlSelfRef.__PVT___GEN_341))
                                        : (IData)(vlSelfRef.__PVT___GEN_341)));
    vlSelfRef.__PVT__meta_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                   && ((1U & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                       && (IData)(vlSelfRef.__PVT___GEN_0)));
    vlSelfRef.__PVT__s_wbselfdir = ((IData)(vlSymsp->TOP.reset) 
                                    | (IData)(vlSelfRef.__PVT___GEN_340));
    vlSelfRef.__PVT__s_wbclientsdir = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_342));
    vlSelfRef.__PVT__probe_helper_finish = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                            && ((1U 
                                                 & (~ (IData)(vlSelfRef.io_status_bits_will_free))) 
                                                && (IData)(vlSelfRef.__PVT___GEN_318)));
    vlSelfRef.__PVT__REG_3 = (1U & ((IData)(vlSymsp->TOP.reset) 
                                    | ((~ (IData)(vlSelfRef.__PVT__req_valid)) 
                                       | (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_7_valid)))));
    vlSelfRef.io_status_bits_will_free = ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & ((IData)(vlSelfRef.__PVT__s_execute) 
                                             & ((((IData)(vlSelfRef.__PVT__s_probeack) 
                                                  & ((IData)(vlSelfRef.__PVT__no_schedule_REG) 
                                                     & (IData)(vlSelfRef.__PVT__s_grantack))) 
                                                 & (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                                & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                   & (IData)(vlSelfRef.__PVT__s_writeprobe)))));
    vlSelfRef.__PVT__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && (IData)(vlSelfRef.__PVT___GEN_423));
    vlSelfRef.__PVT___transmit_from_other_client_T_2 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                           >> 1U))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_36 = ((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                      >> 1U))) 
                                                 & (4U 
                                                    != (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___io_status_bits_nestB_T_6 = (1U 
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
    vlSelfRef.__VdfgRegularize_h42e69e07_2_21 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                                 & (IData)(vlSelfRef.__PVT__req_acquire));
    vlSelfRef.__PVT___probe_clients_T_3 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                           & (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
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
    vlSelfRef.__PVT___GEN_330 = ((6U == (IData)(vlSelfRef.__PVT__req_opcode))
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

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7__1(VTestTop_L2L3L2_MSHR_32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7__1\n"); );
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
    CData/*0:0*/ __PVT___T_263;
    __PVT___T_263 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_0_T_38;
    __PVT___new_self_meta_clientStates_0_T_38 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_1_T_38;
    __PVT___new_self_meta_clientStates_1_T_38 = 0;
    CData/*0:0*/ __PVT__nested_client_match;
    __PVT__nested_client_match = 0;
    CData/*0:0*/ __PVT___GEN_123;
    __PVT___GEN_123 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    CData/*0:0*/ __PVT___T_162;
    __PVT___T_162 = 0;
    CData/*0:0*/ __PVT___T_164;
    __PVT___T_164 = 0;
    CData/*0:0*/ __PVT___GEN_132;
    __PVT___GEN_132 = 0;
    CData/*0:0*/ __PVT___T_171;
    __PVT___T_171 = 0;
    CData/*0:0*/ __PVT___GEN_156;
    __PVT___GEN_156 = 0;
    CData/*0:0*/ __PVT___GEN_157;
    __PVT___GEN_157 = 0;
    CData/*0:0*/ __PVT___GEN_159;
    __PVT___GEN_159 = 0;
    CData/*0:0*/ __PVT___GEN_279;
    __PVT___GEN_279 = 0;
    CData/*0:0*/ __PVT___will_save_probeack_T_2;
    __PVT___will_save_probeack_T_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_5;
    __VdfgRegularize_h42e69e07_2_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_29;
    __VdfgRegularize_h42e69e07_2_29 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_35;
    __VdfgRegularize_h42e69e07_2_35 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_37;
    __VdfgRegularize_h42e69e07_2_37 = 0;
    CData/*0:0*/ __VdfgRegularize_h42e69e07_2_39;
    __VdfgRegularize_h42e69e07_2_39 = 0;
    // Body
    vlSelfRef.__PVT__client_set_match = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__req_set) 
                                         == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.__PVT__nest_c_tag_match = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_tag) 
                                         == (IData)(vlSelfRef.__PVT__req_tag));
    vlSelfRef.__PVT___probeack_last_T = ((IData)(vlSelfRef.__PVT__probes_done) 
                                         | ((2U & (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                     >> 8U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                >> 8U))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_31 = ((4U 
                                                  == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                 | ((5U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                    | ((1U 
                                                        == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                       | (0U 
                                                          == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_33 = (1U 
                                                 & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode) 
                                                    | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData)));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_22 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                     >> 1U) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                                       | ((IData)(vlSelfRef.__PVT__probeAckDataThrough) 
                                                          & (5U 
                                                             != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param))))));
    vlSelfRef.__PVT___change_self_meta_T_2 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_set) 
                                              == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.io_tasks_source_b_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_probe)) 
                                            & (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.io_tasks_source_a_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7_io_enable) 
                                         & (((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                             | (~ (IData)(vlSelfRef.__PVT__s_transferput))) 
                                            & ((IData)(vlSelfRef.__PVT__s_probe) 
                                               & ((IData)(vlSelfRef.__PVT__s_release) 
                                                  & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                                     & (IData)(vlSelfRef.__PVT__can_start))))));
    vlSelfRef.io_tasks_sink_c_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7_io_enable) 
                                       & ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                          | ((~ (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                             & ((~ (IData)(vlSelfRef.__PVT__releaseSave)) 
                                                | (IData)(vlSelfRef.__PVT__s_release)))));
    vlSelfRef.io_tasks_source_d_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_execute)) 
                                            & ((IData)(vlSelfRef.__PVT__can_start) 
                                               & ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                                  & ((IData)(vlSelfRef.__PVT__w_grant) 
                                                     & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                        & (IData)(vlSelfRef.__PVT__w_probeacklast)))))));
    vlSelfRef.io_tasks_source_c_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_release)) 
                                            | ((~ (IData)(vlSelfRef.__PVT__s_probeack)) 
                                               & ((IData)(vlSelfRef.__PVT__s_writerelease) 
                                                  & (IData)(vlSelfRef.__PVT__w_probeack)))));
    __VdfgRegularize_h42e69e07_2_29 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7_io_enable) 
                                       & ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & (IData)(vlSelfRef.__PVT__can_start)));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) 
                               | (IData)(vlSelfRef.__PVT__meta_valid));
    vlSelfRef.__PVT___GEN_283 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_290 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_288 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__inv_self_dir));
    vlSelfRef.__PVT___GEN_286 = ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__bad_grant));
    vlSelfRef.__PVT___GEN_282 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__promoteT_safe));
    vlSelfRef.__PVT___GEN_471 = ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                     >> 2U)) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG));
    vlSelfRef.__PVT___GEN_272 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__s_writeprobe));
    vlSelfRef.__PVT__clientBitOH = ((2U & ((~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                               >> 8U)) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_0_bits_source) 
                                             >> 8U)));
    vlSelfRef.__PVT__sink_c_resp_valid = ((~ (IData)(vlSelfRef.__PVT__w_probeacklast)) 
                                          & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7_io_resps_sink_c_valid));
    vlSelfRef.__PVT___T_5 = (0xffU & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                       >> 8U) | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg)));
    vlSelfRef.__PVT___GEN_423 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_7_valid) 
                                 | ((~ (IData)(vlSelfRef.io_status_bits_will_free)) 
                                    & (IData)(vlSelfRef.__PVT__req_valid)));
    vlSelfRef.__PVT___GEN_318 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_b_status_probeHelperFinish) 
                                     & (IData)(vlSelfRef.__PVT__client_set_match))) 
                                 | (IData)(vlSelfRef.__PVT__probe_helper_finish));
    vlSelfRef.__PVT__probeack_last = ((IData)(vlSelfRef.__PVT___probeack_last_T) 
                                      == (IData)(vlSelfRef.__PVT__probe_clients));
    __PVT__nested_client_match = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_tag) 
                                   == ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                        ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag)
                                        : (IData)(vlSelfRef.__PVT__meta_reg_clients_tag))) 
                                  & (IData)(vlSelfRef.__PVT___change_self_meta_T_2));
    vlSelfRef.io_tasks_client_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                                 & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.io_tasks_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                          & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.io_tasks_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselfdir)) 
                                          & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.io_tasks_client_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                                 & (IData)(__VdfgRegularize_h42e69e07_2_29));
    vlSelfRef.__PVT___GEN_472 = ((IData)(vlSelfRef.__PVT___GEN_471) 
                                 & ((IData)(vlSelfRef.__PVT__req_channel) 
                                    >> 1U));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_271 = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U)) 
                                           | ((~ (IData)(vlSelfRef.__PVT__req_opcode)) 
                                              | (IData)(vlSelfRef.__PVT__req_fromCmoHelper))));
        vlSelfRef.io_status_bits_way = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
        vlSelfRef.__PVT___GEN_16 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__hit_s2;
    } else {
        vlSelfRef.__PVT___GEN_271 = (1U & (IData)(vlSelfRef.__PVT__s_writerelease));
        vlSelfRef.io_status_bits_way = vlSelfRef.__PVT__meta_reg_self_way;
        vlSelfRef.__PVT___GEN_16 = vlSelfRef.__PVT__meta_reg_self_hit;
    }
    vlSelfRef.__PVT___GEN_102 = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
                                          & (IData)(vlSelfRef.__PVT___GEN_16))));
    vlSelfRef.__PVT___T_60 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                    & (IData)(vlSelfRef.__PVT__req_opcode)));
    __VdfgRegularize_h42e69e07_2_35 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                    >> 1U)))));
    __VdfgRegularize_h42e69e07_2_37 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                             | (IData)(vlSelfRef.__PVT__req_needT)));
    vlSelfRef.__PVT___T_146 = (1U & (~ ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                        & (7U == (IData)(vlSelfRef.__PVT__req_opcode)))));
    vlSelfRef.__PVT___a_c_through_T_3 = ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                         & (IData)(vlSelfRef.__PVT__nest_c_tag_match));
    vlSelfRef.__PVT__nested_c_hit = (((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                      & (((IData)(vlSelfRef.__PVT__meta_valid) 
                                          & ((IData)(vlSelfRef.__PVT__req_channel) 
                                             & (IData)(vlSelfRef.__PVT___change_self_meta_T_2))) 
                                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT____VdfgRegularize_hf4af413a_4_0) 
                                            & ((IData)(vlSelfRef.__PVT__req_tag) 
                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_tag))))) 
                                     | (IData)(vlSelfRef.__PVT__nested_c_hit_reg));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_14 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT___GEN_20 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
    } else {
        vlSelfRef.__PVT___GEN_14 = vlSelfRef.__PVT__meta_reg_self_tag;
        vlSelfRef.__PVT___GEN_20 = vlSelfRef.__PVT__meta_reg_self_dirty;
    }
    vlSelfRef.__PVT___new_self_meta_dirty_T_13 = ((IData)(vlSelfRef.__PVT___GEN_20) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    vlSelfRef.__PVT___new_self_meta_dirty_T = ((IData)(vlSelfRef.__PVT___GEN_16) 
                                               & (IData)(vlSelfRef.__PVT___GEN_20));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_17 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_0;
        vlSelfRef.__PVT___GEN_18 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_1;
    } else {
        vlSelfRef.__PVT___GEN_17 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
        vlSelfRef.__PVT___GEN_18 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    }
    __PVT__meta_no_clients = ((0U == (IData)(vlSelfRef.__PVT___GEN_17)) 
                              & (0U == (IData)(vlSelfRef.__PVT___GEN_18)));
    vlSelfRef.__PVT___GEN_19 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                 ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_state)
                                 : (IData)(vlSelfRef.__PVT__meta_reg_self_state));
    vlSelfRef.__PVT___T_81 = ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                              | (((IData)(vlSelfRef.__PVT___GEN_19) 
                                  >> 1U) & (1U == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_38 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_19) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.__PVT__req_param))));
    __PVT__replace_need_release = (((IData)(vlSelfRef.__PVT___GEN_19) 
                                    > (((IData)(vlSelfRef.__PVT___GEN_17) 
                                        > (IData)(vlSelfRef.__PVT___GEN_18))
                                        ? (IData)(vlSelfRef.__PVT___GEN_17)
                                        : (IData)(vlSelfRef.__PVT___GEN_18))) 
                                   | ((IData)(vlSelfRef.__PVT___GEN_20) 
                                      & ((IData)(vlSelfRef.__PVT___GEN_19) 
                                         >> 1U)));
    if (vlSelfRef.__PVT___GEN_16) {
        __PVT___highest_perm_except_me_T = vlSelfRef.__PVT___GEN_19;
        vlSelfRef.__PVT___highest_perm_T_2 = vlSelfRef.__PVT___GEN_19;
    } else {
        __PVT___highest_perm_except_me_T = 0U;
        vlSelfRef.__PVT___highest_perm_T_2 = 0U;
    }
    __VdfgRegularize_h42e69e07_2_5 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                            | (~ ((IData)(vlSelfRef.__PVT___GEN_19) 
                                                  >> 1U))));
    vlSelfRef.__PVT__change_self_meta = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                         & (((0U != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                             & (IData)(vlSelfRef.__PVT___change_self_meta_T_2)) 
                                            & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_tag) 
                                               == (IData)(vlSelfRef.__PVT___GEN_14))));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_12 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_0_state;
    } else {
        vlSelfRef.__PVT___GEN_12 = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
    }
    vlSelfRef.__PVT___GEN_23 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_12)
                                 : (IData)(vlSelfRef.__PVT___GEN_10));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_11 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_9 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_0_hit;
    } else {
        vlSelfRef.__PVT___GEN_11 = vlSelfRef.__PVT__meta_reg_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_9 = vlSelfRef.__PVT__meta_reg_clients_states_0_hit;
    }
    vlSelfRef.__PVT___GEN_27 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_11)
                                 : (IData)(vlSelfRef.__PVT___GEN_9));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_27 = ((IData)(vlSelfRef.__PVT__req_valid) 
                                                 & (IData)(vlSelfRef.__PVT__sink_c_resp_valid));
    vlSelfRef.__PVT__sinkc_resp_last = ((IData)(vlSelfRef.__PVT__sink_c_resp_valid) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last));
    if (vlSelfRef.__PVT___GEN_11) {
        vlSelfRef.__PVT___clients_have_T_T_3 = ((IData)(vlSelfRef.__PVT___GEN_12) 
                                                >> 1U);
        vlSelfRef.__PVT___highest_perm_T_4 = vlSelfRef.__PVT___GEN_12;
    } else {
        vlSelfRef.__PVT___clients_have_T_T_3 = 0U;
        vlSelfRef.__PVT___highest_perm_T_4 = 0U;
    }
    vlSelfRef.__PVT__clients_meta_busy = (((~ (IData)(vlSelfRef.__PVT___GEN_9)) 
                                           & (0U != (IData)(vlSelfRef.__PVT___GEN_10))) 
                                          | ((~ (IData)(vlSelfRef.__PVT___GEN_11)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT___GEN_12))));
    vlSelfRef.__PVT___clients_have_T_T_1 = ((IData)(vlSelfRef.__PVT___GEN_9) 
                                            & ((IData)(vlSelfRef.__PVT___GEN_10) 
                                               >> 1U));
    vlSelfRef.__PVT___GEN_100 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_11)) 
                                       & (~ (IData)(vlSelfRef.__PVT___GEN_9))));
    vlSelfRef.__PVT___transmit_from_other_client_T_12 
        = ((((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (1U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_11)) | 
           (((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_2) 
             | (0U != (IData)(vlSelfRef.__PVT__iam))) 
            & (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_17 = ((5U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                    | (IData)(vlSelfRef.__PVT___GEN_9)));
    vlSelfRef.__PVT___highest_perm_T_3 = ((IData)(vlSelfRef.__PVT___GEN_9)
                                           ? (IData)(vlSelfRef.__PVT___GEN_10)
                                           : 0U);
    __PVT___GEN_123 = (1U & (~ ((IData)(vlSelfRef.__PVT___GEN_9) 
                                | (IData)(vlSelfRef.__PVT___GEN_11))));
    vlSelfRef.__PVT___T_7 = (0xfU & (((IData)(vlSelfRef.__PVT___T_5) 
                                      >> 4U) | (IData)(vlSelfRef.__PVT___T_5)));
    vlSelfRef.__PVT__change_clients_meta_0 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_10)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__PVT__change_clients_meta_1 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_12)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_19 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                                                 & (((IData)(vlSelfRef.__PVT___GEN_12) 
                                                     >> 1U) 
                                                    | (IData)(__VdfgRegularize_h42e69e07_2_35)));
    __PVT___T_171 = ((IData)(vlSelfRef.__PVT___GEN_9) 
                     & (((IData)(vlSelfRef.__PVT___GEN_10) 
                         >> 1U) | (IData)(__VdfgRegularize_h42e69e07_2_35)));
    vlSelfRef.io_status_bits_will_save_data = ((IData)(vlSelfRef.__PVT__req_channel) 
                                               & ((IData)(vlSelfRef.__PVT___T_146) 
                                                  & ((IData)(vlSelfRef.__PVT__preferCache_latch) 
                                                     | (IData)(vlSelfRef.__PVT___GEN_16))));
    vlSelfRef.__PVT___T_311 = (((IData)(vlSelfRef.__PVT__req_channel) 
                                & (IData)(vlSelfRef.__PVT__probeack_last)) 
                               & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last) 
                                     & ((~ (IData)(vlSelfRef.__PVT__nested_c_hit)) 
                                        & (~ (IData)(vlSelfRef.__PVT___GEN_16))))));
    vlSelfRef.__PVT__req_promoteT = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                     & ((IData)(vlSelfRef.__PVT___GEN_16)
                                         ? ((IData)(__PVT__meta_no_clients) 
                                            & (3U == (IData)(vlSelfRef.__PVT___GEN_19)))
                                         : ((IData)(vlSelfRef.__PVT__gotT) 
                                            & (IData)(vlSelfRef.__PVT__promoteT_safe))));
    vlSelfRef.__PVT___GEN_109 = (1U & (~ ((IData)(vlSelfRef.__PVT___T_60) 
                                          & ((0U != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                             & (IData)(__PVT__replace_need_release)))));
    __PVT___T_263 = ((IData)(vlSelfRef.__PVT__req_valid) 
                     & (IData)(vlSelfRef.__PVT__sinkc_resp_last));
    __PVT___highest_perm_except_me_T_12 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                            & (1U == (IData)(vlSelfRef.__PVT__iam)))
                                            ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    vlSelfRef.__PVT__clients_have_T = ((IData)(vlSelfRef.__PVT___clients_have_T_T_3) 
                                       | (IData)(vlSelfRef.__PVT___clients_have_T_T_1));
    vlSelfRef.__PVT__transmit_from_other_client = (
                                                   (~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                   & ((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_12) 
                                                      | (IData)(vlSelfRef.__PVT__transmit_from_other_client_reg)));
    vlSelfRef.__PVT___GEN_412 = (1U & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_valid) 
                                        & (7U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_bits_sink))) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))))
                                           : (IData)(vlSelfRef.__PVT__w_grantack))));
    __PVT___highest_perm_except_me_T_6 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                           & (0U == (IData)(vlSelfRef.__PVT__iam)))
                                           ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_3));
    vlSelfRef.__PVT___highest_perm_T_6 = (((IData)(vlSelfRef.__PVT___highest_perm_T_3) 
                                           > (IData)(vlSelfRef.__PVT___highest_perm_T_4))
                                           ? (IData)(vlSelfRef.__PVT___highest_perm_T_3)
                                           : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    __VdfgRegularize_h42e69e07_2_39 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                             & (~ (IData)(vlSelfRef.__PVT___GEN_27))));
    vlSelfRef.__PVT___GEN_124 = ((IData)(__PVT___GEN_123) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_38));
    vlSelfRef.__PVT__bypassPut = (IData)((((0U == (6U 
                                                   & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                           & (~ (IData)(vlSelfRef.__PVT___GEN_16))) 
                                          & (IData)(__PVT___GEN_123)));
    vlSelfRef.__PVT___T_294 = ((~ (IData)(vlSelfRef.__PVT__acquire_flag)) 
                               & (IData)(vlSelfRef.__PVT___T_311));
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_27 
        = (((IData)(vlSelfRef.__PVT__req_needT) | (IData)(vlSelfRef.__PVT__req_promoteT))
            ? 3U : 1U);
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_36 
        = ((0U != (IData)(vlSelfRef.__PVT__req_param)) 
           | ((IData)(vlSelfRef.__PVT__req_promoteT) 
              | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                              >> 1U)))));
    vlSelfRef.__PVT___GEN_356 = (((IData)(__PVT___T_263) 
                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                 | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData));
    if (__PVT___T_263) {
        vlSelfRef.__VdfgRegularize_h42e69e07_2_23 = vlSelfRef.__PVT__probeack_last;
        if ((0x100U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source))) {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
        } else {
            vlSelfRef.__PVT__client_probeack_param_vec_0 
                = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
            vlSelfRef.__PVT__client_probeack_param_vec_1 
                = vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param;
        }
    } else {
        vlSelfRef.__VdfgRegularize_h42e69e07_2_23 = 0U;
        vlSelfRef.__PVT__client_probeack_param_vec_0 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
        vlSelfRef.__PVT__client_probeack_param_vec_1 
            = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
    }
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
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_9) 
                           & (IData)(__VdfgRegularize_h42e69e07_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_9) 
                  & (IData)(__VdfgRegularize_h42e69e07_2_39)))));
    vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1 
        = ((1U != (IData)(vlSelfRef.__PVT__iam)) & 
           (((1U == (IData)(vlSelfRef.__PVT__req_param)) 
             & (((IData)(vlSelfRef.__PVT___GEN_12) 
                 >> 1U) & ((IData)(vlSelfRef.__PVT___GEN_11) 
                           & (IData)(__VdfgRegularize_h42e69e07_2_5)))) 
            | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
               & ((IData)(vlSelfRef.__PVT___GEN_11) 
                  & (IData)(__VdfgRegularize_h42e69e07_2_39)))));
    vlSelfRef.__PVT__preferCache = ((~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                         ? (IData)(vlSelfRef.__PVT__bypassPut)
                                         : (IData)(vlSelfRef.__PVT__bypassPut_latch_reg))) 
                                    & (IData)(vlSelfRef.__PVT__req_preferCache));
    vlSelfRef.__PVT___new_clients_meta_0_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)))
            ? 1U : 0U);
    vlSelfRef.__PVT___new_clients_meta_1_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)))
            ? 1U : 0U);
    __PVT__highest_perm_except_me = (((IData)(__PVT___highest_perm_except_me_T) 
                                      > (IData)(__PVT___highest_perm_except_me_T_14))
                                      ? (IData)(__PVT___highest_perm_except_me_T)
                                      : (IData)(__PVT___highest_perm_except_me_T_14));
    vlSelfRef.io_tasks_dir_write_bits_data_state = 
        ((IData)(vlSelfRef.__PVT__bad_grant) ? (IData)(vlSelfRef.__PVT___GEN_19)
          : ((4U & (IData)(vlSelfRef.__PVT__req_channel))
              ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                  ? ((1U == (IData)(vlSelfRef.__PVT__req_param))
                      ? ((IData)(vlSelfRef.__PVT___GEN_16)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_19))
                              ? 3U : 1U) : (IData)(vlSelfRef.__PVT___GEN_19))
                      : 0U) : ((2U == (IData)(vlSelfRef.__PVT__req_param))
                                ? (((IData)(vlSelfRef.__PVT___GEN_16) 
                                    & (3U == (IData)(vlSelfRef.__PVT___GEN_19)))
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
                                                     : (IData)(vlSelfRef.__PVT___GEN_19))))))
              : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                  ? ((IData)(vlSelfRef.__PVT___GEN_16)
                      ? ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_9)
                          ? ((2U & (IData)(vlSelfRef.__PVT___GEN_19))
                              ? 3U : 1U) : ((((IData)(vlSelfRef.__PVT___GEN_19) 
                                              >> 1U) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__req_param)))
                                             ? (IData)(vlSelfRef.__PVT___GEN_19)
                                             : (((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                                 & (2U 
                                                    != (IData)(vlSelfRef.__PVT__req_param)))
                                                 ? 1U
                                                 : 0U)))
                      : (IData)(vlSelfRef.__PVT___GEN_19))
                  : ((IData)(vlSelfRef.__PVT__inv_self_dir)
                      ? 0U : ((IData)(vlSelfRef.__PVT__req_needT)
                               ? ((IData)(vlSelfRef.__PVT__req_acquire)
                                   ? 2U : 3U) : ((IData)(vlSelfRef.__PVT___GEN_16)
                                                  ? 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__PVT___GEN_19))
                                                   ? 
                                                  (((IData)(__PVT__meta_no_clients) 
                                                    & (IData)(vlSelfRef.__PVT__req_acquire))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__PVT___GEN_19))
                                                    ? 3U
                                                    : 1U))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__transmit_from_other_client)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__highest_perm) 
                                                    | (IData)(vlSelfRef.__PVT__highest_perm_reg_reg)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : 1U))))))));
    vlSelfRef.__PVT__will_probeack_through = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) 
                                              & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                                                    | ((IData)(vlSelfRef.__PVT__req_needProbeAckData) 
                                                       & ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                          & (0U 
                                                             != (IData)(vlSelfRef.__PVT__highest_perm)))))));
    __PVT__prefetch_miss_need_probe = ((IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1) 
                                       | (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_26 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__preferCache) 
                                                     | (IData)(vlSelfRef.__PVT___GEN_16))));
    vlSelfRef.__PVT__bypassGet = ((~ (IData)(vlSelfRef.__PVT__preferCache)) 
                                  & (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    if (vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37) {
        __PVT___new_self_meta_clientStates_0_T_38 = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
    } else {
        __PVT___new_self_meta_clientStates_0_T_38 = 0U;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
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
    vlSelfRef.__PVT___GEN_129 = (1U & (~ ((IData)(vlSelfRef.__PVT__req_acquire)
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
                                      & (IData)(vlSelfRef.__PVT___GEN_16));
    if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        vlSelfRef.__PVT___GEN_306 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) 
                                     & ((~ (IData)(vlSelfRef.__PVT__will_probeack_through)) 
                                        & ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 1U)));
        if (vlSelfRef.__PVT__req_fromProbeHelper) {
            vlSelfRef.__PVT___GEN_305 = ((IData)(vlSelfRef.__PVT__will_probeack_through) 
                                         & (~ (IData)(vlSelfRef.__PVT___GEN_16)));
            vlSelfRef.__PVT___GEN_307 = (1U & (IData)(__PVT___will_save_probeack_T_2));
        } else {
            vlSelfRef.__PVT___GEN_305 = vlSelfRef.__PVT__will_probeack_through;
            vlSelfRef.__PVT___GEN_307 = (1U & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)) 
                                               | ((~ 
                                                   ((IData)(vlSelfRef.__PVT__req_channel) 
                                                    >> 1U)) 
                                                  | ((IData)(__PVT___will_save_probeack_T_2) 
                                                     & (1U 
                                                        == (IData)(vlSelfRef.__PVT__req_param))))));
        }
    } else {
        vlSelfRef.__PVT___GEN_306 = vlSelfRef.__PVT__probeAckDataDrop;
        vlSelfRef.__PVT___GEN_305 = vlSelfRef.__PVT__probeAckDataThrough;
        vlSelfRef.__PVT___GEN_307 = (1U & ((~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)) 
                                           & (~ (IData)(vlSelfRef.__PVT__probeAckDataDrop))));
    }
    vlSelfRef.__PVT__prefetch_need_data = ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
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
    if (__PVT__prefetch_miss_need_probe) {
        __PVT___T_162 = (5U == (IData)(vlSelfRef.__PVT__req_opcode));
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
        __PVT___T_162 = 0U;
        vlSelfRef.__PVT___new_self_meta_clientStates_0_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
        vlSelfRef.__PVT___new_self_meta_clientStates_1_T_45 
            = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
    }
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
                                                     : (IData)(vlSelfRef.__PVT__req_opcode))));
    vlSelfRef.__PVT___GEN_339 = (1U & (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT__chosen_reg) 
                                          >> 7U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT____VdfgRegularize_h528b8c7d_0_13)) 
                                        & (IData)(vlSelfRef.io_tasks_source_e_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                                    | ((IData)(vlSelfRef.__PVT___GEN_129) 
                                                       | (~ 
                                                          ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                           & (~ (IData)(vlSelfRef.__PVT__bypassPut))))))))
                                           : (IData)(vlSelfRef.__PVT__s_grantack))));
    vlSelfRef.__PVT___GEN_236 = (1U & (IData)((((0U 
                                                 != 
                                                 (6U 
                                                  & (IData)(vlSelfRef.__PVT__req_channel))) 
                                                | (IData)(vlSelfRef.__PVT___GEN_129)) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))));
    __PVT___GEN_131 = (1U & ((IData)(vlSelfRef.__PVT___GEN_129) 
                             | (~ ((IData)(vlSelfRef.__PVT___T_146) 
                                   & (((4U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                                       & (IData)(vlSelfRef.__PVT___GEN_16)) 
                                      | (IData)(vlSelfRef.__PVT__preferCache))))));
    vlSelfRef.__PVT___T_133 = ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                               & ((0U != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                  & ((IData)(__PVT__replace_need_release) 
                                     & (((IData)(vlSelfRef.__PVT__preferCache) 
                                         & ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            | (4U == (IData)(vlSelfRef.__PVT__req_opcode)))) 
                                        | ((IData)(vlSelfRef.__PVT__prefetch_need_data) 
                                           | (IData)(vlSelfRef.__PVT__transmit_from_other_client))))));
    vlSelfRef.__PVT___T_185 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                               & (((IData)(vlSelfRef.__PVT__req_acquire) 
                                   & ((IData)(__VdfgRegularize_h42e69e07_2_37) 
                                      | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                         >> 1U))) | (IData)(__PVT___T_162)));
    __PVT___T_164 = ((IData)(vlSelfRef.__PVT___GEN_9) 
                     & (((IData)(vlSelfRef.__PVT__req_acquire) 
                         & ((IData)(__VdfgRegularize_h42e69e07_2_37) 
                            | ((IData)(vlSelfRef.__PVT___GEN_10) 
                               >> 1U))) | (IData)(__PVT___T_162)));
    vlSelfRef.io_tasks_source_d_bits_useBypass = ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                       >> 1U))) 
                                                  & (((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                                      | ((1U 
                                                          == (IData)(vlSelfRef.__PVT___GEN_19)) 
                                                         & (IData)(vlSelfRef.__PVT__req_needT))) 
                                                     & ((~ (IData)(vlSelfRef.__PVT__probe_dirty)) 
                                                        | ((IData)(vlSelfRef.__PVT__acquire_flag) 
                                                           & (7U 
                                                              != (IData)(vlSelfRef.io_tasks_source_a_bits_opcode))))));
    __PVT___GEN_132 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                       & (IData)(__PVT___GEN_131));
    vlSelfRef.__PVT___GEN_216 = (1U & (((IData)(vlSelfRef.__PVT__req_channel) 
                                        >> 1U) | ((~ (IData)(vlSelfRef.__PVT___T_133)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17))));
    if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_276 = vlSelfRef.__PVT___GEN_236;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT___GEN_236;
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT___GEN_236;
        __PVT___GEN_279 = ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                            ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                ? (IData)(vlSelfRef.__PVT___GEN_102)
                                : (IData)(vlSelfRef.__PVT___GEN_109))
                            : (IData)(vlSelfRef.__PVT___GEN_216));
    } else {
        vlSelfRef.__PVT___GEN_276 = vlSelfRef.__PVT__w_grantfirst;
        vlSelfRef.__PVT___GEN_278 = vlSelfRef.__PVT__w_grant;
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT__w_grantlast;
        __PVT___GEN_279 = vlSelfRef.__PVT__w_releaseack;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.__PVT__req_fromCmoHelper) {
            if (vlSelfRef.__PVT___GEN_16) {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_17)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = (((0U != (IData)(vlSelfRef.__PVT___GEN_18)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U);
            } else {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = vlSelfRef.__PVT___GEN_17;
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = vlSelfRef.__PVT___GEN_18;
            }
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((0U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_17)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((1U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_4)
                        ? 0U : ((IData)(vlSelfRef.__PVT___client_shrink_perm_T_10)
                                 ? 1U : (IData)(vlSelfRef.__PVT___GEN_18)))
                    : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state));
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        if (vlSelfRef.__PVT___GEN_16) {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = ((((IData)(vlSelfRef.__PVT___GEN_17) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_17)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_17)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = ((((IData)(vlSelfRef.__PVT___GEN_18) 
                     >> 1U) & (0U == (IData)(vlSelfRef.__PVT__req_param)))
                    ? (IData)(vlSelfRef.__PVT___GEN_18)
                    : (((0U != (IData)(vlSelfRef.__PVT___GEN_18)) 
                        & (2U != (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U));
        } else {
            vlSelfRef.__PVT__new_self_meta_clientStates_0 
                = vlSelfRef.__PVT___GEN_17;
            vlSelfRef.__PVT__new_self_meta_clientStates_1 
                = vlSelfRef.__PVT___GEN_18;
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
    if (vlSelfRef.__VdfgRegularize_h42e69e07_2_36) {
        vlSelfRef.__PVT___GEN_155 = ((0U != (IData)(vlSelfRef.__PVT__iam)) 
                                     & (IData)(__PVT___T_164));
        vlSelfRef.__PVT___GEN_158 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                           | ((~ (IData)(__PVT___T_164)) 
                                              | (IData)(vlSelfRef.__PVT___GEN_16))));
        __PVT___GEN_156 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                 | (~ (IData)(__PVT___T_164))));
        __PVT___GEN_157 = ((0U != (IData)(vlSelfRef.__PVT__iam))
                            ? ((IData)(__PVT___T_164)
                                ? (IData)(__PVT___GEN_132)
                                : (IData)(__PVT___GEN_131))
                            : (IData)(__PVT___GEN_131));
        vlSelfRef.__PVT___GEN_183 = ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_185)) 
                                         & (IData)(__PVT___GEN_156))
                                      : (IData)(__PVT___GEN_156));
    } else {
        vlSelfRef.__PVT___GEN_155 = __PVT___T_171;
        vlSelfRef.__PVT___GEN_158 = (1U & ((~ (IData)(__PVT___T_171)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_16)));
        __PVT___GEN_156 = (1U & (~ (IData)(__PVT___T_171)));
        __PVT___GEN_157 = ((IData)(__PVT___T_171) ? 
                           ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                            & (IData)(__PVT___GEN_132))
                            : (IData)(__PVT___GEN_131));
        vlSelfRef.__PVT___GEN_183 = ((~ (IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19)) 
                                     & (IData)(__PVT___GEN_156));
    }
    vlSelfRef.__PVT___GEN_226 = (1U & ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                        ? ((~ (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_100))
                                        : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                                            ? (IData)(vlSelfRef.__PVT___GEN_124)
                                            : ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_17) 
                                               | (IData)(vlSelfRef.__PVT___GEN_183)))));
    if (vlSelfRef.__VdfgRegularize_h42e69e07_2_27) {
        vlSelfRef.__PVT___GEN_386 = ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_276));
        vlSelfRef.__PVT___GEN_388 = ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_278));
        vlSelfRef.__PVT___GEN_387 = ((~ (IData)(vlSelfRef.__PVT___T_294)) 
                                     & (IData)(vlSelfRef.__PVT___GEN_277));
        vlSelfRef.__PVT___GEN_380 = ((IData)(vlSelfRef.__PVT__w_probeackfirst) 
                                     | (IData)(vlSelfRef.__PVT__probeack_last));
        vlSelfRef.__PVT___GEN_381 = ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                     | ((IData)(vlSelfRef.__PVT__probeack_last) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last)));
        vlSelfRef.__PVT___GEN_382 = ((IData)(vlSelfRef.__PVT__w_probeack) 
                                     | ((IData)(vlSelfRef.__PVT__probeack_last) 
                                        & ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last))));
    } else {
        vlSelfRef.__PVT___GEN_386 = vlSelfRef.__PVT___GEN_276;
        vlSelfRef.__PVT___GEN_388 = vlSelfRef.__PVT___GEN_278;
        vlSelfRef.__PVT___GEN_387 = vlSelfRef.__PVT___GEN_277;
        if (vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
            vlSelfRef.__PVT___GEN_380 = vlSelfRef.__PVT___GEN_226;
            vlSelfRef.__PVT___GEN_381 = vlSelfRef.__PVT___GEN_226;
            vlSelfRef.__PVT___GEN_382 = vlSelfRef.__PVT___GEN_226;
        } else {
            vlSelfRef.__PVT___GEN_380 = vlSelfRef.__PVT__w_probeackfirst;
            vlSelfRef.__PVT___GEN_381 = vlSelfRef.__PVT__w_probeacklast;
            vlSelfRef.__PVT___GEN_382 = vlSelfRef.__PVT__w_probeack;
        }
    }
    vlSelfRef.__PVT___GEN_160 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                                 & (IData)(vlSelfRef.__PVT___GEN_158));
    __PVT___GEN_159 = ((IData)(vlSelfRef.__PVT___GEN_16) 
                       & (IData)(__PVT___GEN_157));
    vlSelfRef.__PVT___GEN_184 = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_36)
                                  ? ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((IData)(vlSelfRef.__PVT___T_185)
                                          ? (IData)(__PVT___GEN_159)
                                          : (IData)(__PVT___GEN_157))
                                      : (IData)(__PVT___GEN_157))
                                  : ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_19)
                                      ? ((~ (IData)(vlSelfRef.__PVT___GEN_16)) 
                                         & (IData)(__PVT___GEN_159))
                                      : (IData)(__PVT___GEN_157)));
    vlSelfRef.__PVT___GEN_365 = ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_23)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_33)
                                      ? ((~ (((((IData)(vlSelfRef.__PVT__req_channel) 
                                                >> 1U) 
                                               & (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                              | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                             & (IData)(vlSelfRef.__PVT__probeAckDataThrough))) 
                                         & (IData)(__PVT___GEN_279))
                                      : ((IData)(vlSelfRef.__VdfgRegularize_h42e69e07_2_22)
                                          ? ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                             & (IData)(__PVT___GEN_279))
                                          : (IData)(__PVT___GEN_279)))
                                  : (IData)(__PVT___GEN_279));
}
