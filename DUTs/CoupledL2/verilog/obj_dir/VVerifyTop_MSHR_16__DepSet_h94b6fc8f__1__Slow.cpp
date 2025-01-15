// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_MSHR_16.h"
#include "VVerifyTop__Syms.h"

VL_ATTR_COLD void VVerifyTop_MSHR_16___stl_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5__1(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___stl_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5__1\n"); );
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
    vlSelfRef.__PVT___GEN_322 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_b_status_probeHelperFinish) 
                                     & (IData)(vlSelfRef.__PVT__client_set_match))) 
                                 | (IData)(vlSelfRef.__PVT__probe_helper_finish));
    vlSelfRef.__PVT__nested_c_hit = (((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                      & (((IData)(vlSelfRef.__PVT__meta_valid) 
                                          & ((IData)(vlSelfRef.__PVT__req_channel) 
                                             & (IData)(vlSelfRef.__PVT___T_40))) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT____VdfgRegularize_h3add2528_14_0) 
                                            & ((IData)(vlSelfRef.__PVT__req_tag) 
                                               == (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_tag))))) 
                                     | (IData)(vlSelfRef.__PVT__nested_c_hit_reg));
    vlSelfRef.__PVT___GEN_347 = (1U & (((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter_2__DOT__chosenOH) 
                                          >> 5U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter_2_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_client_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_28)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientstag))));
    vlSelfRef.__PVT___GEN_345 = (1U & (((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb__DOT__chosenOH) 
                                          >> 5U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__tagWrite_task_arb_io_out_ready)) 
                                        & (IData)(vlSelfRef.io_tasks_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
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
    vlSelfRef.__PVT___GEN_344 = (1U & ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH) 
                                         >> 5U) & (IData)(vlSelfRef.io_tasks_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
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
                                         >> 5U) & (IData)(vlSelfRef.io_tasks_client_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
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
    vlSelfRef.__PVT___GEN_343 = (1U & (((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT__chosen_reg) 
                                          >> 5U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceE_task_arb__DOT____VdfgRegularize_h528b8c7d_0_5)) 
                                        & (IData)(vlSelfRef.io_tasks_source_e_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
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
    vlSelfRef.__PVT___T_246 = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT__chosen_reg) 
                                 >> 5U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceB_task_arb__DOT____VdfgRegularize_hae52cd36_0_10)) 
                               & (IData)(vlSelfRef.io_tasks_source_b_valid));
    __PVT___T_251 = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT__chosen_reg) 
                       >> 5U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceC_task_arb__DOT____VdfgRegularize_h20ebb837_0_10)) 
                     & (IData)(vlSelfRef.io_tasks_source_c_valid));
    vlSelfRef.__PVT___GEN_342 = (1U & (((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT__chosen_reg) 
                                          >> 5U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD_task_arb__DOT____VdfgRegularize_h1ec93158_0_10)) 
                                        & (IData)(vlSelfRef.io_tasks_source_d_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? (IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                     | (5U 
                                                        == (IData)(vlSelfRef.__PVT__req_opcode)))))
                                           : (IData)(vlSelfRef.__PVT__s_execute))));
    __PVT___T_245 = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT__chosen_reg) 
                       >> 5U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceA_task_arb__DOT____VdfgRegularize_h3b69c469_0_10)) 
                     & (IData)(vlSelfRef.io_tasks_source_a_valid));
    vlSelfRef.__PVT___T_258 = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT__chosen_reg) 
                                 >> 5U) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_task_arb__DOT____VdfgRegularize_h5d7114fd_0_10)) 
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
    vlSelfRef.__PVT___T_310 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_26) 
                               & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                  & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last) 
                                     & ((~ (IData)(vlSelfRef.__PVT__nested_c_hit)) 
                                        & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))))));
    vlSelfRef.__PVT___GEN_339 = ((IData)(vlSelfRef.__PVT___T_246) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_227)
                                     : (IData)(vlSelfRef.__PVT__s_probe)));
    vlSelfRef.__PVT___GEN_341 = (1U & ((IData)(__PVT___T_251) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
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
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                     ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                         ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                             ? (IData)(vlSelfRef.__PVT___GEN_103)
                                             : (IData)(vlSelfRef.__PVT___GEN_110))
                                         : (IData)(vlSelfRef.__PVT___GEN_217))
                                     : (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.__PVT___GEN_337 = ((IData)(__PVT___T_245) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_237)
                                     : (IData)(vlSelfRef.__PVT__s_acquire)));
    vlSelfRef.__PVT___GEN_338 = (1U & ((IData)(__PVT___T_245) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)
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
                                 | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)) 
                                    & (IData)(vlSelfRef.__PVT__nestC_save_flag)));
    __PVT__nestedReleaseDirtyDataSave = ((IData)(__PVT__nestedReleaseDataSave) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.io_reqDirty));
    __PVT___io_tasks_source_d_bits_useBypass_T_5 = 
        (1U & (~ ((IData)(vlSelfRef.__PVT__nestC_save_flag) 
                  | (IData)(__PVT__nestedReleaseDataSave))));
    vlSelfRef.__PVT___GEN_452 = ((IData)(__PVT__nestedReleaseDirtyDataSave) 
                                 | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5_io_dirResult_valid_REG)) 
                                    & (IData)(vlSelfRef.__PVT__nestC_saveDirty_flag)));
    vlSelfRef.__PVT__nestC_saveDirty = ((IData)(vlSelfRef.__PVT__nestC_saveDirty_flag) 
                                        | (IData)(__PVT__nestedReleaseDirtyDataSave));
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
    vlSelfRef.__PVT___T_293 = (((~ (IData)(vlSelfRef.__PVT__acquire_flag)) 
                                & (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_26)) 
                               & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last) 
                                  & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                     & ((~ (IData)(vlSelfRef.__PVT__nested_c_hit)) 
                                        & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                           & (IData)(__PVT___io_tasks_source_d_bits_useBypass_T_5))))));
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

VL_ATTR_COLD void VVerifyTop_MSHR_16___stl_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6__0(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___stl_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT___highest_perm_except_me_T;
    __PVT___highest_perm_except_me_T = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T_6;
    __PVT___highest_perm_except_me_T_6 = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T_12;
    __PVT___highest_perm_except_me_T_12 = 0;
    CData/*1:0*/ __PVT___highest_perm_except_me_T_14;
    __PVT___highest_perm_except_me_T_14 = 0;
    CData/*0:0*/ __PVT___T_260;
    __PVT___T_260 = 0;
    CData/*1:0*/ __PVT___new_clients_meta_0_state_T_24;
    __PVT___new_clients_meta_0_state_T_24 = 0;
    CData/*1:0*/ __PVT___new_clients_meta_1_state_T_24;
    __PVT___new_clients_meta_1_state_T_24 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_0_T_27;
    __PVT___new_self_meta_clientStates_0_T_27 = 0;
    CData/*0:0*/ __PVT___new_self_meta_clientStates_0_T_36;
    __PVT___new_self_meta_clientStates_0_T_36 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_0_T_38;
    __PVT___new_self_meta_clientStates_0_T_38 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_0_T_45;
    __PVT___new_self_meta_clientStates_0_T_45 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_1_T_38;
    __PVT___new_self_meta_clientStates_1_T_38 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_1_T_45;
    __PVT___new_self_meta_clientStates_1_T_45 = 0;
    CData/*1:0*/ __PVT___new_clients_meta_0_state_T_36;
    __PVT___new_clients_meta_0_state_T_36 = 0;
    CData/*1:0*/ __PVT___new_clients_meta_1_state_T_36;
    __PVT___new_clients_meta_1_state_T_36 = 0;
    CData/*0:0*/ __PVT__nested_client_match;
    __PVT__nested_client_match = 0;
    CData/*0:0*/ __PVT___GEN_124;
    __PVT___GEN_124 = 0;
    CData/*0:0*/ __PVT___T_159;
    __PVT___T_159 = 0;
    CData/*0:0*/ __PVT___GEN_157;
    __PVT___GEN_157 = 0;
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
    vlSelfRef.__PVT___probeAckDataSave_T_4 = (1U & 
                                              (~ (IData)(vlSelfRef.__PVT__probeAckDataDrop)));
    vlSelfRef.__PVT___new_self_meta_dirty_T_8 = (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)));
    vlSelfRef.__PVT___GEN_322 = vlSelfRef.__PVT__probe_helper_finish;
    vlSelfRef.__PVT___T_5 = (0xfU & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                      >> 4U) | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg)));
    vlSelfRef.io_metaValid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) 
                              | (IData)(vlSelfRef.__PVT__meta_valid));
    vlSelfRef.__PVT___GEN_285 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_292 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_290 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__inv_self_dir));
    vlSelfRef.__PVT___GEN_288 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__bad_grant));
    vlSelfRef.__PVT___GEN_92 = (1U & ((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                      | (IData)(vlSelfRef.__PVT__acquire_flag)));
    vlSelfRef.__PVT___GEN_284 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__promoteT_safe));
    vlSelfRef.__PVT___probe_clients_T_3 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                           & (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___GEN_480 = ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                     >> 2U)) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG));
    vlSelfRef.__PVT___GEN_273 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__s_writeprobe));
    vlSelfRef.__PVT___GEN_234 = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 2U)) 
                                       | ((~ (IData)(vlSelfRef.__PVT__req_opcode)) 
                                          | (IData)(vlSelfRef.__PVT__req_fromCmoHelper))));
    vlSelfRef.__PVT___T_268 = (((IData)(vlSelfRef.__PVT__req_channel) 
                                >> 1U) & (IData)(vlSelfRef.__PVT__req_fromProbeHelper));
    vlSelfRef.__PVT___transmit_from_other_client_T_2 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                           >> 1U))));
    vlSelfRef.__PVT__no_schedule = ((IData)(vlSelfRef.__PVT__s_execute) 
                                    & ((((IData)(vlSelfRef.__PVT__s_probeack) 
                                         & ((IData)(vlSelfRef.__PVT__no_schedule_REG) 
                                            & (IData)(vlSelfRef.__PVT__s_grantack))) 
                                        & (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                       & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                          & (IData)(vlSelfRef.__PVT__s_writeprobe))));
    vlSelfRef.io_tasks_source_e_valid = ((~ (IData)(vlSelfRef.__PVT__s_grantack)) 
                                         & (IData)(vlSelfRef.__PVT__w_grantfirst));
    vlSelfRef.__PVT___new_self_meta_dirty_T_15 = ((IData)(vlSelfRef.__PVT__gotDirty) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    vlSelfRef.__PVT___new_self_meta_dirty_T_9 = ((~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)) 
                                                 & (IData)(vlSelfRef.__PVT__req_fromProbeHelper));
    vlSelfRef.__PVT___T_40 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_set) 
                              == (IData)(vlSelfRef.__PVT__req_set));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_36 = ((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                      >> 1U))) 
                                                 & (4U 
                                                    != (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37 
        = ((IData)(vlSelfRef.__PVT__a_do_probe) & (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit));
    vlSelfRef.__PVT___new_self_meta_clientStates_1_T_37 
        = ((IData)(vlSelfRef.__PVT__a_do_probe) & (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit));
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
    vlSelfRef.__PVT__releaseSave = (1U & ((~ (IData)(vlSelfRef.__PVT__releaseThrough)) 
                                          & (~ (IData)(vlSelfRef.__PVT__releaseDrop))));
    vlSelfRef.__PVT__no_wait = ((IData)(vlSelfRef.__PVT__w_grantlast) 
                                & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                   & ((IData)(vlSelfRef.__PVT__w_grantack) 
                                      & ((IData)(vlSelfRef.__PVT__w_releaseack) 
                                         & ((IData)(vlSelfRef.__PVT__w_putwritten) 
                                            & (IData)(vlSelfRef.__PVT__w_sinkcack))))));
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
    vlSelfRef.__PVT__req_acquire = ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
        vlSelfRef.io_status_bits_way = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
        vlSelfRef.io_tasks_source_d_bits_isHit = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__hit_s2;
        vlSelfRef.__PVT___GEN_8 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT___GEN_2 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_0;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_1;
        vlSelfRef.__PVT___GEN_3 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_state;
        vlSelfRef.__PVT___GEN_12 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_0_state;
        vlSelfRef.__PVT___GEN_13 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_11 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory_io_result_bits_clients_states_0_hit;
        vlSelfRef.__PVT___GEN_272 = vlSelfRef.__PVT___GEN_234;
        vlSelfRef.__PVT___GEN_283 = vlSelfRef.__PVT___GEN_234;
    } else {
        vlSelfRef.io_status_bits_way = vlSelfRef.__PVT__meta_reg_self_way;
        vlSelfRef.io_tasks_source_d_bits_isHit = vlSelfRef.__PVT__meta_reg_self_hit;
        vlSelfRef.__PVT___GEN_8 = vlSelfRef.__PVT__meta_reg_self_tag;
        vlSelfRef.__PVT___GEN_2 = vlSelfRef.__PVT__meta_reg_self_dirty;
        vlSelfRef.__PVT___GEN_4 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
        vlSelfRef.__PVT___GEN_5 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
        vlSelfRef.__PVT___GEN_3 = vlSelfRef.__PVT__meta_reg_self_state;
        vlSelfRef.__PVT___GEN_12 = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
        vlSelfRef.__PVT___GEN_13 = vlSelfRef.__PVT__meta_reg_clients_states_1_hit;
        vlSelfRef.__PVT___GEN_11 = vlSelfRef.__PVT__meta_reg_clients_states_0_hit;
        vlSelfRef.__PVT___GEN_272 = vlSelfRef.__PVT__s_writerelease;
        vlSelfRef.__PVT___GEN_283 = vlSelfRef.__PVT__w_sinkcack;
    }
    vlSelfRef.__PVT__nest_c_tag_match = ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_tag) 
                                         == (IData)(vlSelfRef.__PVT__req_tag));
    vlSelfRef.__PVT__can_start = (1U & ((~ (IData)(vlSelfRef.__PVT__client_dir_conflict)) 
                                        | (IData)(vlSelfRef.__PVT__probe_helper_finish)));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_32 = ((4U 
                                                  == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                 | ((5U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                    | ((1U 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                       | (0U 
                                                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))));
    vlSelfRef.io_tasks_source_b_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_probe)) 
                                            & (IData)(vlSelfRef.__PVT__s_release)));
    vlSelfRef.io_tasks_source_c_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_enable) 
                                         & ((~ (IData)(vlSelfRef.__PVT__s_release)) 
                                            | ((~ (IData)(vlSelfRef.__PVT__s_probeack)) 
                                               & ((IData)(vlSelfRef.__PVT__s_writerelease) 
                                                  & ((IData)(vlSelfRef.__PVT__w_probeack) 
                                                     & (IData)(vlSelfRef.__PVT__w_sinkcack))))));
    vlSelfRef.__PVT___nestedReleaseDataSave_T_1 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0_io_c_status_nestedReleaseData) 
                                                   & ((IData)(vlSelfRef.__PVT__req_valid) 
                                                      & ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_set) 
                                                         == (IData)(vlSelfRef.__PVT__req_set))));
    vlSelfRef.__PVT__clientBitOH = ((2U & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_6_bits_source) 
                                               >> 8U)) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_6_bits_source) 
                                             >> 8U)));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_22 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__req_channel) 
                                                     >> 1U) 
                                                    & ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                                       | ((IData)(vlSelfRef.__PVT__probeAckDataThrough) 
                                                          & (5U 
                                                             != (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_param))))));
    vlSelfRef.__PVT___probeack_last_T = ((IData)(vlSelfRef.__PVT__probes_done) 
                                         | ((2U & (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                     >> 8U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                                >> 8U))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_33 = (1U 
                                                 & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode) 
                                                    | (IData)(vlSelfRef.__PVT__someClientHasProbeAckData)));
    vlSelfRef.__PVT__sink_c_resp_valid = ((~ (IData)(vlSelfRef.__PVT__w_probeacklast)) 
                                          & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_resps_sink_c_valid));
    vlSelfRef.__PVT___GEN_481 = ((IData)(vlSelfRef.__PVT___GEN_480) 
                                 & ((IData)(vlSelfRef.__PVT__req_channel) 
                                    >> 1U));
    __PVT__nested_client_match = (((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_tag) 
                                   == ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                        ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_tag)
                                        : (IData)(vlSelfRef.__PVT__meta_reg_clients_tag))) 
                                  & (IData)(vlSelfRef.__PVT___T_40));
    vlSelfRef.io_tasks_sink_c_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_enable) 
                                       & ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                          | ((~ (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                             & ((~ (IData)(vlSelfRef.__PVT__releaseSave)) 
                                                | (IData)(vlSelfRef.__PVT__s_release)))));
    vlSelfRef.io_status_bits_will_free = ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & (IData)(vlSelfRef.__PVT__no_schedule));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_21 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                                 & (IData)(vlSelfRef.__PVT__req_acquire));
    vlSelfRef.__PVT___new_self_meta_state_T_34 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                                   & (IData)(vlSelfRef.__PVT__promoteT_safe))
                                                   ? 2U
                                                   : 3U);
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33 
        = ((IData)(vlSelfRef.__PVT__req_acquire) | 
           (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                         >> 1U))));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | ((IData)(vlSelfRef.__PVT__req_acquire) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
    vlSelfRef.io_tasks_source_a_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_enable) 
                                         & (((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                             | (~ (IData)(vlSelfRef.__PVT__s_transferput))) 
                                            & ((IData)(vlSelfRef.__PVT__s_probe) 
                                               & ((IData)(vlSelfRef.__PVT__s_release) 
                                                  & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                                     & (IData)(vlSelfRef.__PVT__can_start))))));
    __VdfgRegularize_hd4a67951_2_30 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_enable) 
                                       & ((IData)(vlSelfRef.__PVT__no_wait) 
                                          & (IData)(vlSelfRef.__PVT__can_start)));
    vlSelfRef.io_tasks_source_d_valid = ((~ (IData)(vlSelfRef.__PVT__s_execute)) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_enable) 
                                            & ((IData)(vlSelfRef.__PVT__can_start) 
                                               & ((IData)(vlSelfRef.__PVT__w_grant) 
                                                  & ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                                     & ((IData)(vlSelfRef.__PVT__w_sinkcack) 
                                                        & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                           & (IData)(vlSelfRef.__PVT__w_probeacklast))))))));
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
    vlSelfRef.__PVT___a_c_through_T_3 = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                         & (IData)(vlSelfRef.__PVT__nest_c_tag_match));
    vlSelfRef.__PVT___T_143 = (1U & (~ ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                        & (7U == (IData)(vlSelfRef.__PVT__req_opcode)))));
    vlSelfRef.__PVT___new_self_meta_dirty_T = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                               & (IData)(vlSelfRef.__PVT___GEN_2));
    vlSelfRef.__PVT___new_self_meta_dirty_T_13 = ((IData)(vlSelfRef.__PVT___GEN_2) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    vlSelfRef.__PVT__meta_no_clients = ((0U == (IData)(vlSelfRef.__PVT___GEN_4)) 
                                        & (0U == (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT__change_self_meta = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                         & (((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                             & (IData)(vlSelfRef.__PVT___T_40)) 
                                            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_tag) 
                                               == (IData)(vlSelfRef.__PVT___GEN_8))));
    vlSelfRef.__PVT___T_78 = ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                              | (((IData)(vlSelfRef.__PVT___GEN_3) 
                                  >> 1U) & (1U == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_38 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_3) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__PVT__replace_need_release = (((IData)(vlSelfRef.__PVT___GEN_3) 
                                              > (((IData)(vlSelfRef.__PVT___GEN_4) 
                                                  > (IData)(vlSelfRef.__PVT___GEN_5))
                                                  ? (IData)(vlSelfRef.__PVT___GEN_4)
                                                  : (IData)(vlSelfRef.__PVT___GEN_5))) 
                                             | ((IData)(vlSelfRef.__PVT___GEN_2) 
                                                & ((1U 
                                                    == (IData)(vlSelfRef.__PVT___GEN_3)) 
                                                   | (3U 
                                                      == (IData)(vlSelfRef.__PVT___GEN_3)))));
    __PVT___highest_perm_except_me_T = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                                         ? (IData)(vlSelfRef.__PVT___GEN_3)
                                         : 0U);
    __VdfgRegularize_hd4a67951_2_5 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                            | (~ ((IData)(vlSelfRef.__PVT___GEN_3) 
                                                  >> 1U))));
    if ((1U & (IData)(vlSelfRef.__PVT__iam))) {
        vlSelfRef.__PVT___GEN_24 = vlSelfRef.__PVT___GEN_12;
        vlSelfRef.__PVT___GEN_28 = vlSelfRef.__PVT___GEN_13;
    } else {
        vlSelfRef.__PVT___GEN_24 = vlSelfRef.__PVT___GEN_10;
        vlSelfRef.__PVT___GEN_28 = vlSelfRef.__PVT___GEN_11;
    }
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
    __PVT__probeack_last = ((IData)(vlSelfRef.__PVT___probeack_last_T) 
                            == (IData)(vlSelfRef.__PVT__probe_clients));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_28 = ((IData)(vlSelfRef.__PVT__req_valid) 
                                                 & (IData)(vlSelfRef.__PVT__sink_c_resp_valid));
    vlSelfRef.__PVT__sinkc_resp_last = ((IData)(vlSelfRef.__PVT__sink_c_resp_valid) 
                                        & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last));
    vlSelfRef.__PVT__change_clients_meta_0 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_10)) 
                                                 & (IData)(__PVT__nested_client_match)));
    vlSelfRef.__PVT__change_clients_meta_1 = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                              & ((0U 
                                                  != (IData)(vlSelfRef.__PVT___GEN_12)) 
                                                 & (IData)(__PVT__nested_client_match)));
    __VdfgRegularize_hd4a67951_2_37 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                             | (IData)(vlSelfRef.__PVT__req_needT)));
    vlSelfRef.io_tasks_client_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                                 & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                          & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselfdir)) 
                                          & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_client_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                                 & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_19 = ((IData)(vlSelfRef.__PVT___GEN_13) 
                                                 & (((IData)(vlSelfRef.__PVT___GEN_12) 
                                                     >> 1U) 
                                                    | (IData)(__VdfgRegularize_hd4a67951_2_35)));
    vlSelfRef.__PVT___T_168 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                               & (((IData)(vlSelfRef.__PVT___GEN_10) 
                                   >> 1U) | (IData)(__VdfgRegularize_hd4a67951_2_35)));
    vlSelfRef.__PVT__req_promoteT = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                     & ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                                         ? ((IData)(vlSelfRef.__PVT__meta_no_clients) 
                                            & (3U == (IData)(vlSelfRef.__PVT___GEN_3)))
                                         : ((IData)(vlSelfRef.__PVT__gotT) 
                                            & (IData)(vlSelfRef.__PVT__promoteT_safe))));
    vlSelfRef.__PVT___GEN_110 = (1U & (~ ((IData)(vlSelfRef.__PVT___T_57) 
                                          & ((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                             & (IData)(vlSelfRef.__PVT__replace_need_release)))));
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
                                        & (6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_bits_sink))) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
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
    vlSelfRef.__VdfgRegularize_hd4a67951_2_26 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                                 & (IData)(__PVT__probeack_last));
    __PVT___T_260 = ((IData)(vlSelfRef.__PVT__req_valid) 
                     & (IData)(vlSelfRef.__PVT__sinkc_resp_last));
    __PVT___new_self_meta_clientStates_0_T_27 = (((IData)(vlSelfRef.__PVT__req_needT) 
                                                  | (IData)(vlSelfRef.__PVT__req_promoteT))
                                                  ? 3U
                                                  : 1U);
    __PVT___new_self_meta_clientStates_0_T_36 = ((0U 
                                                  != (IData)(vlSelfRef.__PVT__req_param)) 
                                                 | ((IData)(vlSelfRef.__PVT__req_promoteT) 
                                                    | (0U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                           >> 1U)))));
    __PVT___highest_perm_except_me_T_14 = (((IData)(__PVT___highest_perm_except_me_T_6) 
                                            > (IData)(__PVT___highest_perm_except_me_T_12))
                                            ? (IData)(__PVT___highest_perm_except_me_T_6)
                                            : (IData)(__PVT___highest_perm_except_me_T_12));
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
    vlSelfRef.__PVT__preferCache = ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
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
    vlSelfRef.__PVT__highest_perm_except_me = (((IData)(__PVT___highest_perm_except_me_T) 
                                                > (IData)(__PVT___highest_perm_except_me_T_14))
                                                ? (IData)(__PVT___highest_perm_except_me_T)
                                                : (IData)(__PVT___highest_perm_except_me_T_14));
    vlSelfRef.__PVT__prefetch_miss_need_probe = ((IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1) 
                                                 | (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_27 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__preferCache) 
                                                     | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
    vlSelfRef.__PVT__bypassGet = ((~ (IData)(vlSelfRef.__PVT__preferCache)) 
                                  & (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    __PVT___new_clients_meta_0_state_T_24 = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)) 
                                              | (4U 
                                                 == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_0)))
                                              ? 1U : 0U);
    __PVT___new_clients_meta_1_state_T_24 = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)) 
                                              | (4U 
                                                 == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_1)))
                                              ? 1U : 0U);
    __PVT___T_159 = ((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                     & (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe));
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
        __PVT___new_self_meta_clientStates_0_T_38 = __PVT___new_clients_meta_0_state_T_24;
        __PVT___new_clients_meta_0_state_T_36 = __PVT___new_clients_meta_0_state_T_24;
    } else {
        __PVT___new_self_meta_clientStates_0_T_38 = 0U;
        __PVT___new_clients_meta_0_state_T_36 = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
    }
    if (vlSelfRef.__PVT__prefetch_miss_need_probe) {
        if ((0U == (IData)(vlSelfRef.__PVT__req_param))) {
            __PVT___new_self_meta_clientStates_0_T_45 
                = __PVT___new_clients_meta_0_state_T_24;
            __PVT___new_self_meta_clientStates_1_T_45 
                = __PVT___new_clients_meta_1_state_T_24;
        } else {
            __PVT___new_self_meta_clientStates_0_T_45 = 0U;
            __PVT___new_self_meta_clientStates_1_T_45 = 0U;
        }
    } else {
        __PVT___new_self_meta_clientStates_0_T_45 = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
        __PVT___new_self_meta_clientStates_1_T_45 = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
    }
    if (vlSelfRef.__PVT___new_self_meta_clientStates_1_T_37) {
        __PVT___new_self_meta_clientStates_1_T_38 = __PVT___new_clients_meta_1_state_T_24;
        __PVT___new_clients_meta_1_state_T_36 = __PVT___new_clients_meta_1_state_T_24;
    } else {
        __PVT___new_self_meta_clientStates_1_T_38 = 0U;
        __PVT___new_clients_meta_1_state_T_36 = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
    }
    vlSelfRef.__PVT___T_182 = ((IData)(vlSelfRef.__PVT___GEN_13) 
                               & (((IData)(vlSelfRef.__PVT__req_acquire) 
                                   & ((IData)(__VdfgRegularize_hd4a67951_2_37) 
                                      | ((IData)(vlSelfRef.__PVT___GEN_12) 
                                         >> 1U))) | (IData)(__PVT___T_159)));
    vlSelfRef.__PVT___T_161 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                               & (((IData)(vlSelfRef.__PVT__req_acquire) 
                                   & ((IData)(__VdfgRegularize_hd4a67951_2_37) 
                                      | ((IData)(vlSelfRef.__PVT___GEN_10) 
                                         >> 1U))) | (IData)(__PVT___T_159)));
    if (vlSelfRef.__VdfgRegularize_hd4a67951_2_36) {
        vlSelfRef.__PVT___GEN_156 = ((0U != (IData)(vlSelfRef.__PVT__iam)) 
                                     & (IData)(vlSelfRef.__PVT___T_161));
        vlSelfRef.__PVT___GEN_159 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                           | ((~ (IData)(vlSelfRef.__PVT___T_161)) 
                                              | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
        __PVT___GEN_157 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                 | (~ (IData)(vlSelfRef.__PVT___T_161))));
        vlSelfRef.__PVT___GEN_184 = ((1U != (IData)(vlSelfRef.__PVT__iam))
                                      ? ((~ (IData)(vlSelfRef.__PVT___T_182)) 
                                         & (IData)(__PVT___GEN_157))
                                      : (IData)(__PVT___GEN_157));
    } else {
        vlSelfRef.__PVT___GEN_156 = vlSelfRef.__PVT___T_168;
        vlSelfRef.__PVT___GEN_159 = (1U & ((~ (IData)(vlSelfRef.__PVT___T_168)) 
                                           | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)));
        __PVT___GEN_157 = (1U & (~ (IData)(vlSelfRef.__PVT___T_168)));
        vlSelfRef.__PVT___GEN_184 = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19)) 
                                     & (IData)(__PVT___GEN_157));
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
            vlSelfRef.io_tasks_client_dir_write_bits_data_0_state 
                = ((IData)(vlSelfRef.__PVT___GEN_11)
                    ? (((0U != (IData)(vlSelfRef.__PVT___GEN_10)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U) : (IData)(vlSelfRef.__PVT___GEN_10));
            vlSelfRef.io_tasks_client_dir_write_bits_data_1_state 
                = ((IData)(vlSelfRef.__PVT___GEN_13)
                    ? (((0U != (IData)(vlSelfRef.__PVT___GEN_12)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U) : (IData)(vlSelfRef.__PVT___GEN_12));
        } else {
            if ((0U == (IData)(vlSelfRef.__PVT__iam))) {
                if (vlSelfRef.__PVT___client_shrink_perm_T_4) {
                    vlSelfRef.__PVT__new_self_meta_clientStates_0 = 0U;
                    vlSelfRef.io_tasks_client_dir_write_bits_data_0_state = 0U;
                } else if (vlSelfRef.__PVT___client_shrink_perm_T_10) {
                    vlSelfRef.__PVT__new_self_meta_clientStates_0 = 1U;
                    vlSelfRef.io_tasks_client_dir_write_bits_data_0_state = 1U;
                } else {
                    vlSelfRef.__PVT__new_self_meta_clientStates_0 
                        = vlSelfRef.__PVT___GEN_4;
                    vlSelfRef.io_tasks_client_dir_write_bits_data_0_state 
                        = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
                }
            } else {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
                vlSelfRef.io_tasks_client_dir_write_bits_data_0_state 
                    = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
            }
            if ((1U == (IData)(vlSelfRef.__PVT__iam))) {
                if (vlSelfRef.__PVT___client_shrink_perm_T_4) {
                    vlSelfRef.__PVT__new_self_meta_clientStates_1 = 0U;
                    vlSelfRef.io_tasks_client_dir_write_bits_data_1_state = 0U;
                } else if (vlSelfRef.__PVT___client_shrink_perm_T_10) {
                    vlSelfRef.__PVT__new_self_meta_clientStates_1 = 1U;
                    vlSelfRef.io_tasks_client_dir_write_bits_data_1_state = 1U;
                } else {
                    vlSelfRef.__PVT__new_self_meta_clientStates_1 
                        = vlSelfRef.__PVT___GEN_5;
                    vlSelfRef.io_tasks_client_dir_write_bits_data_1_state 
                        = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
                }
            } else {
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
                vlSelfRef.io_tasks_client_dir_write_bits_data_1_state 
                    = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
            }
        }
        vlSelfRef.__PVT___GEN_227 = (1U & ((~ (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                           | (IData)(vlSelfRef.__PVT___GEN_101)));
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
        vlSelfRef.io_tasks_client_dir_write_bits_data_0_state 
            = ((IData)(vlSelfRef.__PVT___GEN_11) ? (IData)(__PVT___new_clients_meta_0_state_T_24)
                : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state));
        vlSelfRef.io_tasks_client_dir_write_bits_data_1_state 
            = ((IData)(vlSelfRef.__PVT___GEN_13) ? (IData)(__PVT___new_clients_meta_1_state_T_24)
                : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state));
        vlSelfRef.__PVT___GEN_227 = (1U & (IData)(vlSelfRef.__PVT___GEN_125));
    } else {
        vlSelfRef.__PVT__new_self_meta_clientStates_0 
            = ((0U == (IData)(vlSelfRef.__PVT__iam))
                ? ((IData)(vlSelfRef.__PVT__req_acquire)
                    ? (IData)(__PVT___new_self_meta_clientStates_0_T_27)
                    : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                        ? ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit)
                            ? 1U : 0U) : ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit)
                                           ? (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state)
                                           : 0U))) : 
               ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                 ? ((IData)(__PVT___new_self_meta_clientStates_0_T_36)
                     ? 0U : (IData)(__PVT___new_self_meta_clientStates_0_T_38))
                 : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                     ? (IData)(__PVT___new_self_meta_clientStates_0_T_38)
                     : (IData)(__PVT___new_self_meta_clientStates_0_T_45))));
        if ((4U == (IData)(vlSelfRef.__PVT__req_opcode))) {
            vlSelfRef.io_tasks_client_dir_write_bits_data_0_state 
                = __PVT___new_clients_meta_0_state_T_36;
            vlSelfRef.io_tasks_client_dir_write_bits_data_1_state 
                = __PVT___new_clients_meta_1_state_T_36;
        } else {
            vlSelfRef.io_tasks_client_dir_write_bits_data_0_state 
                = ((0U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT__req_acquire)
                        ? (IData)(__PVT___new_self_meta_clientStates_0_T_27)
                        : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state))
                    : ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                        ? ((IData)(__PVT___new_self_meta_clientStates_0_T_36)
                            ? ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37)
                                ? 0U : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state))
                            : (IData)(__PVT___new_clients_meta_0_state_T_36))
                        : (IData)(__PVT___new_self_meta_clientStates_0_T_45)));
            vlSelfRef.io_tasks_client_dir_write_bits_data_1_state 
                = ((1U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT__req_acquire)
                        ? (IData)(__PVT___new_self_meta_clientStates_0_T_27)
                        : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state))
                    : ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                        ? ((IData)(__PVT___new_self_meta_clientStates_0_T_36)
                            ? ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_1_T_37)
                                ? 0U : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state))
                            : (IData)(__PVT___new_clients_meta_1_state_T_36))
                        : (IData)(__PVT___new_self_meta_clientStates_1_T_45)));
        }
        vlSelfRef.__PVT__new_self_meta_clientStates_1 
            = ((1U == (IData)(vlSelfRef.__PVT__iam))
                ? ((IData)(vlSelfRef.__PVT__req_acquire)
                    ? (IData)(__PVT___new_self_meta_clientStates_0_T_27)
                    : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                        ? ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit)
                            ? 1U : 0U) : ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit)
                                           ? (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state)
                                           : 0U))) : 
               ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                 ? ((IData)(__PVT___new_self_meta_clientStates_0_T_36)
                     ? 0U : (IData)(__PVT___new_self_meta_clientStates_1_T_38))
                 : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                     ? (IData)(__PVT___new_self_meta_clientStates_1_T_38)
                     : (IData)(__PVT___new_self_meta_clientStates_1_T_45))));
        vlSelfRef.__PVT___GEN_227 = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                           | (IData)(vlSelfRef.__PVT___GEN_184)));
    }
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                 & (IData)(vlSelfRef.__PVT___GEN_159));
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
    } else if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_386 = vlSelfRef.__PVT___GEN_227;
        vlSelfRef.__PVT___GEN_387 = vlSelfRef.__PVT___GEN_227;
        vlSelfRef.__PVT___GEN_388 = vlSelfRef.__PVT___GEN_227;
    } else {
        vlSelfRef.__PVT___GEN_386 = vlSelfRef.__PVT__w_probeackfirst;
        vlSelfRef.__PVT___GEN_387 = vlSelfRef.__PVT__w_probeacklast;
        vlSelfRef.__PVT___GEN_388 = vlSelfRef.__PVT__w_probeack;
    }
}

VL_ATTR_COLD void VVerifyTop_MSHR_16___stl_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6__1(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___stl_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__prefetch_need_data;
    __PVT__prefetch_need_data = 0;
    CData/*0:0*/ __PVT__will_probeack_through;
    __PVT__will_probeack_through = 0;
    CData/*0:0*/ __PVT___GEN_130;
    __PVT___GEN_130 = 0;
    CData/*0:0*/ __PVT___GEN_132;
    __PVT___GEN_132 = 0;
    CData/*0:0*/ __PVT___GEN_133;
    __PVT___GEN_133 = 0;
    CData/*0:0*/ __PVT___GEN_158;
    __PVT___GEN_158 = 0;
    CData/*0:0*/ __PVT___GEN_160;
    __PVT___GEN_160 = 0;
    CData/*0:0*/ __PVT___GEN_185;
    __PVT___GEN_185 = 0;
    CData/*0:0*/ __PVT___GEN_217;
    __PVT___GEN_217 = 0;
    CData/*0:0*/ __PVT___GEN_237;
    __PVT___GEN_237 = 0;
    CData/*0:0*/ __PVT___GEN_277;
    __PVT___GEN_277 = 0;
    CData/*0:0*/ __PVT___GEN_278;
    __PVT___GEN_278 = 0;
    CData/*0:0*/ __PVT___GEN_279;
    __PVT___GEN_279 = 0;
    CData/*0:0*/ __PVT___GEN_280;
    __PVT___GEN_280 = 0;
    CData/*0:0*/ __PVT___will_save_probeack_T_2;
    __PVT___will_save_probeack_T_2 = 0;
    CData/*0:0*/ __PVT__nestedReleaseDataSave;
    __PVT__nestedReleaseDataSave = 0;
    CData/*0:0*/ __PVT___io_tasks_source_d_bits_useBypass_T_5;
    __PVT___io_tasks_source_d_bits_useBypass_T_5 = 0;
    CData/*0:0*/ __PVT__nestedReleaseDirtyDataSave;
    __PVT__nestedReleaseDirtyDataSave = 0;
    CData/*0:0*/ __PVT___T_245;
    __PVT___T_245 = 0;
    CData/*0:0*/ __VdfgRegularize_hd4a67951_2_34;
    __VdfgRegularize_hd4a67951_2_34 = 0;
    // Body
    vlSelfRef.__PVT__nest_c_way_match = ((IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.io_status_bits_way) 
                                         == (IData)(vlSelfRef.io_status_bits_way));
    __VdfgRegularize_hd4a67951_2_34 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_probeAckDataThrough)) 
                                       & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit));
    vlSelfRef.__PVT___T_246 = (((~ (IData)((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceB__DOT__workVec)))) 
                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_real_valid_1)) 
                                   & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__bc_valid_latch_1))) 
                               & (IData)(vlSelfRef.io_tasks_source_b_valid));
    vlSelfRef.__PVT___T_251 = (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceC_io_task_ready) 
                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_real_valid_2)) 
                                   & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__bc_valid_latch_2))) 
                               & (IData)(vlSelfRef.io_tasks_source_c_valid));
    vlSelfRef.__PVT___GEN_342 = (1U & ((((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__busy)) 
                                         & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_real_valid_3)) 
                                            & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__bc_valid_latch_3))) 
                                        & (IData)(vlSelfRef.io_tasks_source_d_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? (IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                     | (5U 
                                                        == (IData)(vlSelfRef.__PVT__req_opcode)))))
                                           : (IData)(vlSelfRef.__PVT__s_execute))));
    vlSelfRef.__PVT___GEN_347 = (1U & ((((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_real_valid_8)) 
                                         & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__bc_valid_latch_8)) 
                                        & (IData)(vlSelfRef.io_tasks_client_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_28)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientstag))));
    vlSelfRef.__PVT__nested_c_hit = (((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                      & (((IData)(vlSelfRef.__PVT__meta_valid) 
                                          & ((IData)(vlSelfRef.__PVT__req_channel) 
                                             & (IData)(vlSelfRef.__PVT___T_40))) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT____VdfgRegularize_h3add2528_14_0) 
                                            & ((IData)(vlSelfRef.__PVT__req_tag) 
                                               == (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_tag))))) 
                                     | (IData)(vlSelfRef.__PVT__nested_c_hit_reg));
    vlSelfRef.__PVT___GEN_430 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_6_valid) 
                                 | ((~ (IData)(vlSelfRef.io_status_bits_will_free)) 
                                    & (IData)(vlSelfRef.__PVT__req_valid)));
    vlSelfRef.__PVT___GEN_346 = (1U & ((((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_valid)) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter_1__DOT__chosenOH) 
                                            >> 6U)) 
                                        & (IData)(vlSelfRef.io_tasks_client_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
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
    __PVT___T_245 = (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceA_io_task_ready) 
                      & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_real_valid)) 
                         & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__bc_valid_latch))) 
                     & (IData)(vlSelfRef.io_tasks_source_a_valid));
    vlSelfRef.__PVT___T_258 = (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_task_ready) 
                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_real_valid_6)) 
                                   & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__bc_valid_latch_6))) 
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
    vlSelfRef.__PVT___highest_perm_T_2 = ((IData)(__VdfgRegularize_hd4a67951_2_34)
                                           ? (IData)(vlSelfRef.__PVT___GEN_3)
                                           : 0U);
    vlSelfRef.__PVT___GEN_339 = ((IData)(vlSelfRef.__PVT___T_246) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_227)
                                     : (IData)(vlSelfRef.__PVT__s_probe)));
    vlSelfRef.io_tasks_dir_write_bits_data_dirty = 
        ((~ (IData)(vlSelfRef.__PVT__bad_grant)) & 
         (((4U & (IData)(vlSelfRef.__PVT__req_channel))
            ? ((~ (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
               & ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T) 
                  | ((IData)(vlSelfRef.__PVT__req_dirty) 
                     & ((1U == (IData)(vlSelfRef.__PVT__req_param)) 
                        | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | (3U == (IData)(vlSelfRef.__PVT__req_param)))))))
            : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                ? ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_9) 
                   & ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T) 
                      | (IData)(vlSelfRef.__PVT__probe_dirty)))
                : ((IData)(vlSelfRef.__PVT__req_acquire)
                    ? ((~ (IData)(vlSelfRef.__PVT__req_needT)) 
                       & ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                           ? ((~ (IData)(vlSelfRef.__PVT__req_promoteT)) 
                              & (IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_13))
                           : (IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_15)))
                    : ((0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                     >> 1U))) | ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_15) 
                                                 | (IData)(vlSelfRef.__PVT___new_self_meta_dirty_T)))))) 
          | (IData)(vlSelfRef.__PVT__nested_c_hit)));
    vlSelfRef.__PVT___T_310 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_26) 
                               & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                  & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last) 
                                     & ((~ (IData)(vlSelfRef.__PVT__nested_c_hit)) 
                                        & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))))));
    vlSelfRef.__PVT___GEN_338 = (1U & ((IData)(__PVT___T_245) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
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
    vlSelfRef.__PVT__highest_perm = (((IData)(vlSelfRef.__PVT___highest_perm_T_2) 
                                      > (IData)(vlSelfRef.__PVT___highest_perm_T_6))
                                      ? (IData)(vlSelfRef.__PVT___highest_perm_T_2)
                                      : (IData)(vlSelfRef.__PVT___highest_perm_T_6));
    vlSelfRef.__PVT___GEN_451 = ((IData)(__PVT__nestedReleaseDataSave) 
                                 | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)) 
                                    & (IData)(vlSelfRef.__PVT__nestC_save_flag)));
    __PVT__nestedReleaseDirtyDataSave = ((IData)(__PVT__nestedReleaseDataSave) 
                                         & (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.io_reqDirty));
    __PVT___io_tasks_source_d_bits_useBypass_T_5 = 
        (1U & (~ ((IData)(vlSelfRef.__PVT__nestC_save_flag) 
                  | (IData)(__PVT__nestedReleaseDataSave))));
    vlSelfRef.__PVT__highest_perm_reg = ((IData)(vlSelfRef.__PVT__highest_perm) 
                                         | (IData)(vlSelfRef.__PVT__highest_perm_reg_reg));
    __PVT__will_probeack_through = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) 
                                    & (((IData)(vlSelfRef.__PVT__req_channel) 
                                        >> 1U) & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                                                  | ((IData)(vlSelfRef.__PVT__req_needProbeAckData) 
                                                     & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                        & (0U 
                                                           != (IData)(vlSelfRef.__PVT__highest_perm)))))));
    __PVT__prefetch_need_data = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                 & ((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                    & (((0U == (IData)(vlSelfRef.__PVT__req_param))
                                         ? (0U == (IData)(vlSelfRef.__PVT__highest_perm))
                                         : (~ ((IData)(vlSelfRef.__PVT__highest_perm) 
                                               >> 1U))) 
                                       | (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe))));
    __PVT___GEN_130 = (1U & (~ ((IData)(vlSelfRef.__PVT__req_acquire)
                                 ? ((IData)(vlSelfRef.__PVT__req_needT)
                                     ? (~ ((IData)(vlSelfRef.__PVT__highest_perm_except_me) 
                                           >> 1U)) : 
                                    (0U == (IData)(vlSelfRef.__PVT__highest_perm_except_me)))
                                 : ((IData)(vlSelfRef.__PVT__req_needT)
                                     ? (~ ((IData)(vlSelfRef.__PVT__highest_perm) 
                                           >> 1U)) : 
                                    (0U == (IData)(vlSelfRef.__PVT__highest_perm))))));
    vlSelfRef.__PVT__nestC_saveDirty = ((IData)(vlSelfRef.__PVT__nestC_saveDirty_flag) 
                                        | (IData)(__PVT__nestedReleaseDirtyDataSave));
    vlSelfRef.__PVT___GEN_452 = ((IData)(__PVT__nestedReleaseDirtyDataSave) 
                                 | ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)) 
                                    & (IData)(vlSelfRef.__PVT__nestC_saveDirty_flag)));
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
    vlSelfRef.__PVT___T_293 = (((~ (IData)(vlSelfRef.__PVT__acquire_flag)) 
                                & (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_26)) 
                               & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_resp_bits_last) 
                                  & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_opcode)) 
                                     & ((~ (IData)(vlSelfRef.__PVT__nested_c_hit)) 
                                        & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                           & (IData)(__PVT___io_tasks_source_d_bits_useBypass_T_5))))));
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
                                                  (((IData)(vlSelfRef.__PVT__meta_no_clients) 
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
    vlSelfRef.__PVT___GEN_341 = (1U & ((IData)(vlSelfRef.__PVT___T_251) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                           ? (1U & 
                                              ((2U 
                                                != 
                                                (6U 
                                                 & (IData)(vlSelfRef.__PVT__req_channel))) 
                                               | (~ 
                                                  ((~ (IData)(__PVT__will_probeack_through)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper))))))
                                           : (IData)(vlSelfRef.__PVT__s_probeack))));
    __PVT___will_save_probeack_T_2 = ((IData)(__PVT__will_probeack_through) 
                                      & (IData)(__VdfgRegularize_hd4a67951_2_34));
    if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        vlSelfRef.__PVT___GEN_310 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) 
                                     & ((~ (IData)(__PVT__will_probeack_through)) 
                                        & ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 1U)));
        if (vlSelfRef.__PVT__req_fromProbeHelper) {
            vlSelfRef.__PVT___GEN_309 = ((IData)(__PVT__will_probeack_through) 
                                         & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                            | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_probeAckDataThrough)));
            vlSelfRef.__PVT___GEN_311 = (1U & (IData)(__PVT___will_save_probeack_T_2));
        } else {
            vlSelfRef.__PVT___GEN_309 = __PVT__will_probeack_through;
            vlSelfRef.__PVT___GEN_311 = (1U & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)) 
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
    vlSelfRef.__PVT___T_130 = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                               & ((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                  & ((IData)(vlSelfRef.__PVT__replace_need_release) 
                                     & (((IData)(vlSelfRef.__PVT__preferCache) 
                                         & ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            | (4U == (IData)(vlSelfRef.__PVT__req_opcode)))) 
                                        | ((IData)(__PVT__prefetch_need_data) 
                                           | (IData)(vlSelfRef.__PVT__transmit_from_other_client))))));
    vlSelfRef.__PVT___GEN_345 = (1U & ((((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_real_valid_7)) 
                                         & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__bc_valid_latch_7)) 
                                        & (IData)(vlSelfRef.io_tasks_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
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
                                                                   | (IData)(__PVT__prefetch_need_data)))))) 
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
    vlSelfRef.__PVT___GEN_343 = (1U & ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceE_io_task_ready) 
                                         & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_real_valid_4)) 
                                            & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__bc_valid_latch_4))) 
                                        & (IData)(vlSelfRef.io_tasks_source_e_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                    | ((IData)(__PVT___GEN_130) 
                                                       | (~ 
                                                          ((~ (IData)(vlSelfRef.__PVT__bypassGet)) 
                                                           & (~ (IData)(vlSelfRef.__PVT__bypassPut))))))))
                                           : (IData)(vlSelfRef.__PVT__s_grantack))));
    __PVT___GEN_237 = (1U & (IData)((((0U != (6U & (IData)(vlSelfRef.__PVT__req_channel))) 
                                      | (IData)(__PVT___GEN_130)) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))));
    __PVT___GEN_132 = (1U & ((IData)(__PVT___GEN_130) 
                             | (~ ((IData)(vlSelfRef.__PVT___T_143) 
                                   & (((4U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                                       & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                      | (IData)(vlSelfRef.__PVT__preferCache))))));
    __PVT___GEN_217 = (1U & (((IData)(vlSelfRef.__PVT__req_channel) 
                              >> 1U) | ((~ (IData)(vlSelfRef.__PVT___T_130)) 
                                        | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))));
    vlSelfRef.__PVT___GEN_337 = ((IData)(__PVT___T_245) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                     ? (IData)(__PVT___GEN_237)
                                     : (IData)(vlSelfRef.__PVT__s_acquire)));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG) {
        __PVT___GEN_277 = __PVT___GEN_237;
        __PVT___GEN_279 = __PVT___GEN_237;
        __PVT___GEN_278 = __PVT___GEN_237;
        __PVT___GEN_280 = ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                            ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                ? (IData)(vlSelfRef.__PVT___GEN_103)
                                : (IData)(vlSelfRef.__PVT___GEN_110))
                            : (IData)(__PVT___GEN_217));
    } else {
        __PVT___GEN_277 = vlSelfRef.__PVT__w_grantfirst;
        __PVT___GEN_279 = vlSelfRef.__PVT__w_grant;
        __PVT___GEN_278 = vlSelfRef.__PVT__w_grantlast;
        __PVT___GEN_280 = vlSelfRef.__PVT__w_releaseack;
    }
    __PVT___GEN_133 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                       & (IData)(__PVT___GEN_132));
    vlSelfRef.__PVT___GEN_340 = ((IData)(vlSelfRef.__PVT___T_251) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
                                     ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                         ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                             ? (IData)(vlSelfRef.__PVT___GEN_103)
                                             : (IData)(vlSelfRef.__PVT___GEN_110))
                                         : (IData)(__PVT___GEN_217))
                                     : (IData)(vlSelfRef.__PVT__s_release)));
    if (vlSelfRef.__VdfgRegularize_hd4a67951_2_28) {
        vlSelfRef.__PVT___GEN_392 = ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                     & (IData)(__PVT___GEN_277));
        vlSelfRef.__PVT___GEN_394 = ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                     & (IData)(__PVT___GEN_279));
        vlSelfRef.__PVT___GEN_393 = ((~ (IData)(vlSelfRef.__PVT___T_293)) 
                                     & (IData)(__PVT___GEN_278));
    } else {
        vlSelfRef.__PVT___GEN_392 = __PVT___GEN_277;
        vlSelfRef.__PVT___GEN_394 = __PVT___GEN_279;
        vlSelfRef.__PVT___GEN_393 = __PVT___GEN_278;
    }
    vlSelfRef.__PVT___GEN_371 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_24)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_33)
                                      ? ((~ (((IData)(vlSelfRef.__PVT___T_268) 
                                              | (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                             & (IData)(vlSelfRef.__PVT__probeAckDataThrough))) 
                                         & (IData)(__PVT___GEN_280))
                                      : ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_22)
                                          ? ((~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper)) 
                                             & (IData)(__PVT___GEN_280))
                                          : (IData)(__PVT___GEN_280)))
                                  : (IData)(__PVT___GEN_280));
    __PVT___GEN_158 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_36)
                        ? ((0U != (IData)(vlSelfRef.__PVT__iam))
                            ? ((IData)(vlSelfRef.__PVT___T_161)
                                ? (IData)(__PVT___GEN_133)
                                : (IData)(__PVT___GEN_132))
                            : (IData)(__PVT___GEN_132))
                        : ((IData)(vlSelfRef.__PVT___T_168)
                            ? ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                               & (IData)(__PVT___GEN_133))
                            : (IData)(__PVT___GEN_132)));
    __PVT___GEN_160 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                       & (IData)(__PVT___GEN_158));
    __PVT___GEN_185 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_36)
                        ? ((1U != (IData)(vlSelfRef.__PVT__iam))
                            ? ((IData)(vlSelfRef.__PVT___T_182)
                                ? (IData)(__PVT___GEN_160)
                                : (IData)(__PVT___GEN_158))
                            : (IData)(__PVT___GEN_158))
                        : ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19)
                            ? ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                               & (IData)(__PVT___GEN_160))
                            : (IData)(__PVT___GEN_158)));
    vlSelfRef.__PVT___GEN_344 = (1U & ((((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7.__PVT__req_valid)) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH) 
                                            >> 6U)) 
                                        & (IData)(vlSelfRef.io_tasks_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6_io_dirResult_valid_REG)
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
                                                          & (IData)(__PVT___GEN_185))
                                                          : (IData)(__PVT___GEN_185))))))
                                           : (IData)(vlSelfRef.__PVT__s_wbselfdir))));
}

VL_ATTR_COLD void VVerifyTop_MSHR_16___stl_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7__0(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___stl_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__meta_no_clients;
    __PVT__meta_no_clients = 0;
    CData/*0:0*/ __PVT__no_wait;
    __PVT__no_wait = 0;
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
    CData/*0:0*/ __PVT__prefetch_miss_need_probe;
    __PVT__prefetch_miss_need_probe = 0;
    CData/*0:0*/ __PVT__transmit_from_other_client;
    __PVT__transmit_from_other_client = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_0_T_27;
    __PVT___new_self_meta_clientStates_0_T_27 = 0;
    CData/*0:0*/ __PVT___new_self_meta_clientStates_0_T_36;
    __PVT___new_self_meta_clientStates_0_T_36 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_0_T_45;
    __PVT___new_self_meta_clientStates_0_T_45 = 0;
    CData/*1:0*/ __PVT___new_self_meta_clientStates_1_T_45;
    __PVT___new_self_meta_clientStates_1_T_45 = 0;
    CData/*0:0*/ __PVT__bypassGet;
    __PVT__bypassGet = 0;
    CData/*0:0*/ __PVT__will_probeack_through;
    __PVT__will_probeack_through = 0;
    CData/*0:0*/ __PVT___GEN_124;
    __PVT___GEN_124 = 0;
    CData/*0:0*/ __PVT___T_130;
    __PVT___T_130 = 0;
    CData/*0:0*/ __PVT___GEN_130;
    __PVT___GEN_130 = 0;
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
    CData/*0:0*/ __PVT___GEN_227;
    __PVT___GEN_227 = 0;
    CData/*0:0*/ __PVT___will_save_probeack_T_2;
    __PVT___will_save_probeack_T_2 = 0;
    CData/*0:0*/ __PVT__can_start;
    __PVT__can_start = 0;
    CData/*1:0*/ __PVT___probeack_last_T;
    __PVT___probeack_last_T = 0;
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
    vlSelfRef.__PVT__nested_c_hit = vlSelfRef.__PVT__nested_c_hit_reg;
    vlSelfRef.__PVT___probeAckDataSave_T_4 = (1U & 
                                              (~ (IData)(vlSelfRef.__PVT__probeAckDataDrop)));
    vlSelfRef.__PVT___new_self_meta_dirty_T_8 = (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)));
    vlSelfRef.__PVT___GEN_360 = vlSelfRef.__PVT__someClientHasProbeAckData;
    vlSelfRef.__PVT___GEN_322 = vlSelfRef.__PVT__probe_helper_finish;
    vlSelfRef.__PVT__client_probeack_param_vec_0 = vlSelfRef.__PVT__client_probeack_param_vec_reg_0;
    vlSelfRef.__PVT__client_probeack_param_vec_1 = vlSelfRef.__PVT__client_probeack_param_vec_reg_1;
    vlSelfRef.__PVT___T_5 = (0xfU & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg) 
                                      >> 4U) | (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__reqIdOHReg)));
    vlSelfRef.__PVT___GEN_285 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_292 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_290 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__inv_self_dir));
    vlSelfRef.__PVT___GEN_288 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__bad_grant));
    vlSelfRef.__PVT___GEN_92 = (1U & ((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                      | (IData)(vlSelfRef.__PVT__acquire_flag)));
    vlSelfRef.__PVT___GEN_451 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__nestC_save_flag));
    vlSelfRef.__PVT___GEN_452 = ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)) 
                                 & (IData)(vlSelfRef.__PVT__nestC_saveDirty_flag));
    vlSelfRef.__PVT___GEN_284 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__promoteT_safe));
    vlSelfRef.__PVT___probe_clients_T_3 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                           & (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___GEN_480 = ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                     >> 2U)) & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG));
    vlSelfRef.__PVT___GEN_273 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) 
                                 | (IData)(vlSelfRef.__PVT__s_writeprobe));
    vlSelfRef.__PVT___GEN_234 = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 2U)) 
                                       | ((~ (IData)(vlSelfRef.__PVT__req_opcode)) 
                                          | (IData)(vlSelfRef.__PVT__req_fromCmoHelper))));
    vlSelfRef.__PVT___transmit_from_other_client_T_2 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                           >> 1U))));
    vlSelfRef.__PVT___T_222 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) 
                               & ((IData)(vlSelfRef.__PVT__req_channel) 
                                  >> 2U));
    vlSelfRef.io_tasks_source_e_valid = ((~ (IData)(vlSelfRef.__PVT__s_grantack)) 
                                         & (IData)(vlSelfRef.__PVT__w_grantfirst));
    vlSelfRef.__PVT___new_self_meta_dirty_T_15 = ((IData)(vlSelfRef.__PVT__gotDirty) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    vlSelfRef.__PVT___new_self_meta_dirty_T_9 = ((~ (IData)(vlSelfRef.__PVT__probeAckDataThrough)) 
                                                 & (IData)(vlSelfRef.__PVT__req_fromProbeHelper));
    vlSelfRef.io_tasks_source_b_valid = ((~ (IData)(vlSelfRef.__PVT__s_probe)) 
                                         & (IData)(vlSelfRef.__PVT__s_release));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_36 = ((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                                      >> 1U))) 
                                                 & (4U 
                                                    != (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37 
        = ((IData)(vlSelfRef.__PVT__a_do_probe) & (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit));
    vlSelfRef.__PVT___new_self_meta_clientStates_1_T_37 
        = ((IData)(vlSelfRef.__PVT__a_do_probe) & (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit));
    vlSelfRef.io_reqDirty = ((IData)(vlSelfRef.__PVT__req_dirty) 
                             & (IData)(vlSelfRef.__PVT__req_valid));
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
    vlSelfRef.__PVT___new_clients_meta_0_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_reg_0)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_reg_0)))
            ? 1U : 0U);
    vlSelfRef.__PVT___new_clients_meta_1_state_T_24 
        = (((0U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_reg_1)) 
            | (4U == (IData)(vlSelfRef.__PVT__client_probeack_param_vec_reg_1)))
            ? 1U : 0U);
    vlSelfRef.__PVT__releaseSave = (1U & ((~ (IData)(vlSelfRef.__PVT__releaseThrough)) 
                                          & (~ (IData)(vlSelfRef.__PVT__releaseDrop))));
    __PVT__no_wait = ((IData)(vlSelfRef.__PVT__w_grantlast) 
                      & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                         & ((IData)(vlSelfRef.__PVT__w_grantack) 
                            & ((IData)(vlSelfRef.__PVT__w_releaseack) 
                               & ((IData)(vlSelfRef.__PVT__w_putwritten) 
                                  & (IData)(vlSelfRef.__PVT__w_sinkcack))))));
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
    vlSelfRef.io_tasks_source_c_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__s_release)) 
                                               | ((~ (IData)(vlSelfRef.__PVT__s_probeack)) 
                                                  & ((IData)(vlSelfRef.__PVT__s_writerelease) 
                                                     & ((IData)(vlSelfRef.__PVT__w_probeack) 
                                                        & (IData)(vlSelfRef.__PVT__w_sinkcack))))));
    vlSelfRef.__PVT__req_acquire = ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    __PVT__can_start = (1U & ((~ (IData)(vlSelfRef.__PVT__client_dir_conflict)) 
                              | (IData)(vlSelfRef.__PVT__probe_helper_finish)));
    vlSelfRef.io_metaValid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) 
                              | (IData)(vlSelfRef.__PVT__meta_valid));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_32 = ((4U 
                                                  == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                 | ((5U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                    | ((1U 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)) 
                                                       | (0U 
                                                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_opcode)))));
    vlSelfRef.__PVT__clientBitOH = ((2U & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                               >> 8U)) 
                                           << 1U)) 
                                    | (1U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                             >> 8U)));
    __PVT___probeack_last_T = ((IData)(vlSelfRef.__PVT__probes_done) 
                               | ((2U & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                             >> 8U)) 
                                         << 1U)) | 
                                  (1U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_alloc_bits_source) 
                                         >> 8U))));
    vlSelfRef.__PVT___GEN_481 = ((IData)(vlSelfRef.__PVT___GEN_480) 
                                 & ((IData)(vlSelfRef.__PVT__req_channel) 
                                    >> 1U));
    vlSelfRef.__PVT___T_246 = (((~ (IData)((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceB__DOT__workVec)))) 
                                & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_valid_latch_1)) 
                               & (IData)(vlSelfRef.io_tasks_source_b_valid));
    if (vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37) {
        vlSelfRef.__PVT___new_self_meta_clientStates_0_T_38 
            = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
    } else {
        vlSelfRef.__PVT___new_self_meta_clientStates_0_T_38 = 0U;
        vlSelfRef.__PVT___new_clients_meta_0_state_T_36 
            = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
    }
    if (vlSelfRef.__PVT___new_self_meta_clientStates_1_T_37) {
        vlSelfRef.__PVT___new_self_meta_clientStates_1_T_38 
            = vlSelfRef.__PVT___new_clients_meta_1_state_T_24;
        vlSelfRef.__PVT___new_clients_meta_1_state_T_36 
            = vlSelfRef.__PVT___new_clients_meta_1_state_T_24;
    } else {
        vlSelfRef.__PVT___new_self_meta_clientStates_1_T_38 = 0U;
        vlSelfRef.__PVT___new_clients_meta_1_state_T_36 
            = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
    }
    vlSelfRef.io_tasks_sink_c_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__s_writeprobe)) 
                                             | ((~ (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                                & ((~ (IData)(vlSelfRef.__PVT__releaseSave)) 
                                                   | (IData)(vlSelfRef.__PVT__s_release)))));
    vlSelfRef.io_status_bits_will_free = ((IData)(__PVT__no_wait) 
                                          & ((IData)(vlSelfRef.__PVT__s_execute) 
                                             & ((((IData)(vlSelfRef.__PVT__s_probeack) 
                                                  & ((IData)(vlSelfRef.__PVT__no_schedule_REG) 
                                                     & (IData)(vlSelfRef.__PVT__s_grantack))) 
                                                 & (IData)(vlSelfRef.__PVT__s_writerelease)) 
                                                & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                   & (IData)(vlSelfRef.__PVT__s_writeprobe)))));
    vlSelfRef.__PVT___T_251 = (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_valid_latch_2) 
                                & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceC_io_task_ready)) 
                               & (IData)(vlSelfRef.io_tasks_source_c_valid));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_21 = ((IData)(vlSelfRef.__PVT__req_channel) 
                                                 & (IData)(vlSelfRef.__PVT__req_acquire));
    vlSelfRef.__PVT___new_self_meta_state_T_34 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                                   & (IData)(vlSelfRef.__PVT__promoteT_safe))
                                                   ? 2U
                                                   : 3U);
    vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33 
        = ((IData)(vlSelfRef.__PVT__req_acquire) | 
           (0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                         >> 1U))));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | ((IData)(vlSelfRef.__PVT__req_acquire) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
    vlSelfRef.io_tasks_source_a_valid = (((~ (IData)(vlSelfRef.__PVT__s_acquire)) 
                                          | (~ (IData)(vlSelfRef.__PVT__s_transferput))) 
                                         & ((IData)(vlSelfRef.__PVT__s_probe) 
                                            & ((IData)(vlSelfRef.__PVT__s_release) 
                                               & ((IData)(vlSelfRef.__PVT__w_probeacklast) 
                                                  & (IData)(__PVT__can_start)))));
    __VdfgRegularize_hd4a67951_2_30 = ((IData)(__PVT__no_wait) 
                                       & (IData)(__PVT__can_start));
    vlSelfRef.io_tasks_source_d_valid = ((~ (IData)(vlSelfRef.__PVT__s_execute)) 
                                         & ((IData)(__PVT__can_start) 
                                            & ((IData)(vlSelfRef.__PVT__w_grant) 
                                               & ((IData)(vlSelfRef.__PVT__s_writeprobe) 
                                                  & ((IData)(vlSelfRef.__PVT__w_sinkcack) 
                                                     & ((IData)(vlSelfRef.__PVT__s_transferput) 
                                                        & (IData)(vlSelfRef.__PVT__w_probeacklast)))))));
    vlSelfRef.io_tasks_source_d_bits_isHit = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                               ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__hit_s2)
                                               : (IData)(vlSelfRef.__PVT__meta_reg_self_hit));
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
    vlSelfRef.__PVT___T_143 = (1U & (~ ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                        & (7U == (IData)(vlSelfRef.__PVT__req_opcode)))));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
        vlSelfRef.io_status_bits_way = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir__DOT__way_s2;
        vlSelfRef.__PVT___GEN_8 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_tag;
        vlSelfRef.__PVT___GEN_2 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_dirty;
    } else {
        vlSelfRef.io_status_bits_way = vlSelfRef.__PVT__meta_reg_self_way;
        vlSelfRef.__PVT___GEN_8 = vlSelfRef.__PVT__meta_reg_self_tag;
        vlSelfRef.__PVT___GEN_2 = vlSelfRef.__PVT__meta_reg_self_dirty;
    }
    vlSelfRef.__PVT___new_self_meta_dirty_T = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                               & (IData)(vlSelfRef.__PVT___GEN_2));
    vlSelfRef.__PVT___new_self_meta_dirty_T_13 = ((IData)(vlSelfRef.__PVT___GEN_2) 
                                                  | (IData)(vlSelfRef.__PVT__probe_dirty));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_0;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_clientStates_1;
    } else {
        vlSelfRef.__PVT___GEN_4 = vlSelfRef.__PVT__meta_reg_self_clientStates_0;
        vlSelfRef.__PVT___GEN_5 = vlSelfRef.__PVT__meta_reg_self_clientStates_1;
    }
    __PVT__meta_no_clients = ((0U == (IData)(vlSelfRef.__PVT___GEN_4)) 
                              & (0U == (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT___GEN_3 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                ? (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__selfDir_io_resp_bits_dir_state)
                                : (IData)(vlSelfRef.__PVT__meta_reg_self_state));
    vlSelfRef.__PVT__change_self_meta = ((IData)(vlSelfRef.__PVT__meta_valid) 
                                         & (((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__req_set))) 
                                            & (0U == (IData)(vlSelfRef.__PVT___GEN_8))));
    vlSelfRef.__PVT___T_78 = ((2U == (IData)(vlSelfRef.__PVT__req_param)) 
                              | (((IData)(vlSelfRef.__PVT___GEN_3) 
                                  >> 1U) & (1U == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_38 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                 & ((IData)(vlSelfRef.__PVT___GEN_3) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.__PVT__req_param))));
    vlSelfRef.__PVT__replace_need_release = (((IData)(vlSelfRef.__PVT___GEN_3) 
                                              > (((IData)(vlSelfRef.__PVT___GEN_4) 
                                                  > (IData)(vlSelfRef.__PVT___GEN_5))
                                                  ? (IData)(vlSelfRef.__PVT___GEN_4)
                                                  : (IData)(vlSelfRef.__PVT___GEN_5))) 
                                             | ((IData)(vlSelfRef.__PVT___GEN_2) 
                                                & ((1U 
                                                    == (IData)(vlSelfRef.__PVT___GEN_3)) 
                                                   | (3U 
                                                      == (IData)(vlSelfRef.__PVT___GEN_3)))));
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
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_12 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir_io_resp_bits_dir_0_state;
    } else {
        vlSelfRef.__PVT___GEN_12 = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
        vlSelfRef.__PVT___GEN_10 = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
    }
    vlSelfRef.__PVT___GEN_24 = ((1U & (IData)(vlSelfRef.__PVT__iam))
                                 ? (IData)(vlSelfRef.__PVT___GEN_12)
                                 : (IData)(vlSelfRef.__PVT___GEN_10));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
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
    vlSelfRef.__PVT___GEN_101 = (1U & ((~ (IData)(vlSelfRef.__PVT___GEN_13)) 
                                       & (~ (IData)(vlSelfRef.__PVT___GEN_11))));
    vlSelfRef.__PVT___clients_have_T_T_1 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                                            & ((IData)(vlSelfRef.__PVT___GEN_10) 
                                               >> 1U));
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
    __VdfgRegularize_hd4a67951_2_37 = (1U & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                             | (IData)(vlSelfRef.__PVT__req_needT)));
    vlSelfRef.io_tasks_client_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientstag)) 
                                                 & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselfdir)) 
                                          & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_client_dir_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbclientsdir)) 
                                                 & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.io_tasks_tag_write_valid = ((~ (IData)(vlSelfRef.__PVT__s_wbselftag)) 
                                          & (IData)(__VdfgRegularize_hd4a67951_2_30));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_19 = ((IData)(vlSelfRef.__PVT___GEN_13) 
                                                 & (((IData)(vlSelfRef.__PVT___GEN_12) 
                                                     >> 1U) 
                                                    | (IData)(__VdfgRegularize_hd4a67951_2_35)));
    __PVT___T_168 = ((IData)(vlSelfRef.__PVT___GEN_11) 
                     & (((IData)(vlSelfRef.__PVT___GEN_10) 
                         >> 1U) | (IData)(__VdfgRegularize_hd4a67951_2_35)));
    vlSelfRef.__PVT__req_promoteT = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                     & ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                                         ? ((IData)(__PVT__meta_no_clients) 
                                            & (3U == (IData)(vlSelfRef.__PVT___GEN_3)))
                                         : ((IData)(vlSelfRef.__PVT__gotT) 
                                            & (IData)(vlSelfRef.__PVT__promoteT_safe))));
    __PVT___highest_perm_except_me_T_12 = (((IData)(vlSelfRef.__PVT__req_acquire) 
                                            & (1U == (IData)(vlSelfRef.__PVT__iam)))
                                            ? 0U : (IData)(vlSelfRef.__PVT___highest_perm_T_4));
    vlSelfRef.__PVT__clients_have_T = ((IData)(vlSelfRef.__PVT___clients_have_T_T_3) 
                                       | (IData)(vlSelfRef.__PVT___clients_have_T_T_1));
    __PVT__transmit_from_other_client = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                         & ((IData)(vlSelfRef.__PVT___transmit_from_other_client_T_12) 
                                            | (IData)(vlSelfRef.__PVT__transmit_from_other_client_reg)));
    vlSelfRef.__PVT___GEN_342 = (1U & ((((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__busy)) 
                                         & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_valid_latch_3)) 
                                        & (IData)(vlSelfRef.io_tasks_source_d_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? (IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                               : (((IData)(vlSelfRef.__PVT__req_channel) 
                                                   >> 1U) 
                                                  | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                     | (5U 
                                                        == (IData)(vlSelfRef.__PVT__req_opcode)))))
                                           : (IData)(vlSelfRef.__PVT__s_execute))));
    vlSelfRef.__PVT___GEN_418 = (1U & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_valid) 
                                        & (7U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkE_io_resp_bits_sink))) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
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
    vlSelfRef.__PVT___GEN_347 = (1U & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_valid_latch_8) 
                                        & (IData)(vlSelfRef.io_tasks_client_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__req_acquire)) 
                                                       | (IData)(vlSelfRef.__PVT___GEN_28)))))
                                           : (IData)(vlSelfRef.__PVT__s_wbclientstag))));
    vlSelfRef.io_tasks_dir_write_bits_data_dirty = 
        ((~ (IData)(vlSelfRef.__PVT__bad_grant)) & 
         (((4U & (IData)(vlSelfRef.__PVT__req_channel))
            ? ((~ (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
               & ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T) 
                  | ((IData)(vlSelfRef.__PVT__req_dirty) 
                     & ((1U == (IData)(vlSelfRef.__PVT__req_param)) 
                        | ((0U == (IData)(vlSelfRef.__PVT__req_param)) 
                           | (3U == (IData)(vlSelfRef.__PVT__req_param)))))))
            : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                ? ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_9) 
                   & ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T) 
                      | (IData)(vlSelfRef.__PVT__probe_dirty)))
                : ((IData)(vlSelfRef.__PVT__req_acquire)
                    ? ((~ (IData)(vlSelfRef.__PVT__req_needT)) 
                       & ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit)
                           ? ((~ (IData)(vlSelfRef.__PVT__req_promoteT)) 
                              & (IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_13))
                           : (IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_15)))
                    : ((0U == (3U & ((IData)(vlSelfRef.__PVT__req_opcode) 
                                     >> 1U))) | ((IData)(vlSelfRef.__PVT___new_self_meta_dirty_T_15) 
                                                 | (IData)(vlSelfRef.__PVT___new_self_meta_dirty_T)))))) 
          | (IData)(vlSelfRef.__PVT__nested_c_hit_reg)));
    __PVT___new_self_meta_clientStates_0_T_27 = (((IData)(vlSelfRef.__PVT__req_needT) 
                                                  | (IData)(vlSelfRef.__PVT__req_promoteT))
                                                  ? 3U
                                                  : 1U);
    __PVT___new_self_meta_clientStates_0_T_36 = ((0U 
                                                  != (IData)(vlSelfRef.__PVT__req_param)) 
                                                 | ((IData)(vlSelfRef.__PVT__req_promoteT) 
                                                    | (0U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.__PVT__req_opcode) 
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
    vlSelfRef.__PVT__preferCache = ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                         ? (IData)(vlSelfRef.__PVT__bypassPut)
                                         : (IData)(vlSelfRef.__PVT__bypassPut_latch_reg))) 
                                    & (IData)(vlSelfRef.__PVT__req_preferCache));
    __PVT__highest_perm_except_me = (((IData)(__PVT___highest_perm_except_me_T) 
                                      > (IData)(__PVT___highest_perm_except_me_T_14))
                                      ? (IData)(__PVT___highest_perm_except_me_T)
                                      : (IData)(__PVT___highest_perm_except_me_T_14));
    vlSelfRef.__PVT__highest_perm_reg = ((IData)(vlSelfRef.__PVT__highest_perm) 
                                         | (IData)(vlSelfRef.__PVT__highest_perm_reg_reg));
    __PVT__will_probeack_through = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) 
                                    & (((IData)(vlSelfRef.__PVT__req_channel) 
                                        >> 1U) & ((IData)(vlSelfRef.__PVT__clients_have_T) 
                                                  | ((IData)(vlSelfRef.__PVT__req_needProbeAckData) 
                                                     & ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                                        & (0U 
                                                           != (IData)(vlSelfRef.__PVT__highest_perm)))))));
    __PVT__prefetch_miss_need_probe = ((IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_1) 
                                       | (IData)(vlSelfRef.__PVT__prefetch_miss_need_probe_vec_0));
    __PVT__bypassGet = ((~ (IData)(vlSelfRef.__PVT__preferCache)) 
                        & (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    __PVT___GEN_130 = (1U & (~ ((IData)(vlSelfRef.__PVT__req_acquire)
                                 ? ((IData)(vlSelfRef.__PVT__req_needT)
                                     ? (~ ((IData)(__PVT__highest_perm_except_me) 
                                           >> 1U)) : 
                                    (0U == (IData)(__PVT__highest_perm_except_me)))
                                 : ((IData)(vlSelfRef.__PVT__req_needT)
                                     ? (~ ((IData)(vlSelfRef.__PVT__highest_perm) 
                                           >> 1U)) : 
                                    (0U == (IData)(vlSelfRef.__PVT__highest_perm))))));
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
                                                 ((IData)(__PVT__transmit_from_other_client)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : (IData)(vlSelfRef.__PVT__highest_perm_reg))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__gotT)
                                                    ? (IData)(vlSelfRef.__PVT___new_self_meta_state_T_34)
                                                    : 1U))))))));
    vlSelfRef.__PVT___GEN_341 = (1U & ((IData)(vlSelfRef.__PVT___T_251) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                           ? (1U & 
                                              ((2U 
                                                != 
                                                (6U 
                                                 & (IData)(vlSelfRef.__PVT__req_channel))) 
                                               | (~ 
                                                  ((~ (IData)(__PVT__will_probeack_through)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__req_fromProbeHelper))))))
                                           : (IData)(vlSelfRef.__PVT__s_probeack))));
    __PVT___will_save_probeack_T_2 = ((IData)(__PVT__will_probeack_through) 
                                      & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit));
    if ((2U & (IData)(vlSelfRef.__PVT__req_channel))) {
        vlSelfRef.__PVT___GEN_310 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) 
                                     & ((~ (IData)(__PVT__will_probeack_through)) 
                                        & ((IData)(vlSelfRef.__PVT__req_channel) 
                                           >> 1U)));
        if (vlSelfRef.__PVT__req_fromProbeHelper) {
            vlSelfRef.__PVT___GEN_309 = ((IData)(__PVT__will_probeack_through) 
                                         & (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)));
            vlSelfRef.__PVT___GEN_311 = (1U & (IData)(__PVT___will_save_probeack_T_2));
        } else {
            vlSelfRef.__PVT___GEN_309 = __PVT__will_probeack_through;
            vlSelfRef.__PVT___GEN_311 = (1U & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)) 
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
    if (__PVT__prefetch_miss_need_probe) {
        if ((0U == (IData)(vlSelfRef.__PVT__req_param))) {
            __PVT___new_self_meta_clientStates_0_T_45 
                = vlSelfRef.__PVT___new_clients_meta_0_state_T_24;
            __PVT___new_self_meta_clientStates_1_T_45 
                = vlSelfRef.__PVT___new_clients_meta_1_state_T_24;
        } else {
            __PVT___new_self_meta_clientStates_0_T_45 = 0U;
            __PVT___new_self_meta_clientStates_1_T_45 = 0U;
        }
        __PVT___T_159 = (5U == (IData)(vlSelfRef.__PVT__req_opcode));
    } else {
        __PVT___new_self_meta_clientStates_0_T_45 = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
        __PVT___new_self_meta_clientStates_1_T_45 = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
        __PVT___T_159 = 0U;
    }
    vlSelfRef.io_tasks_source_a_bits_opcode = ((1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__s_transferput)) 
                                                   | (IData)(__PVT__bypassGet)))
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
    vlSelfRef.__PVT___GEN_343 = (1U & ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceE_io_task_ready) 
                                         & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_valid_latch_4)) 
                                        & (IData)(vlSelfRef.io_tasks_source_e_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                           ? (((IData)(vlSelfRef.__PVT__req_channel) 
                                               >> 2U) 
                                              | (((IData)(vlSelfRef.__PVT__req_channel) 
                                                  >> 1U) 
                                                 | ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                                    | ((IData)(__PVT___GEN_130) 
                                                       | (~ 
                                                          ((~ (IData)(__PVT__bypassGet)) 
                                                           & (~ (IData)(vlSelfRef.__PVT__bypassPut))))))))
                                           : (IData)(vlSelfRef.__PVT__s_grantack))));
    vlSelfRef.__PVT___GEN_237 = (1U & (IData)((((0U 
                                                 != 
                                                 (6U 
                                                  & (IData)(vlSelfRef.__PVT__req_channel))) 
                                                | (IData)(__PVT___GEN_130)) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))));
    __PVT___GEN_132 = (1U & ((IData)(__PVT___GEN_130) 
                             | (~ ((IData)(vlSelfRef.__PVT___T_143) 
                                   & (((4U != (IData)(vlSelfRef.__PVT__req_opcode)) 
                                       & (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                                      | (IData)(vlSelfRef.__PVT__preferCache))))));
    __PVT___T_130 = ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                     & ((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                        & ((IData)(vlSelfRef.__PVT__replace_need_release) 
                           & (((IData)(vlSelfRef.__PVT__preferCache) 
                               & ((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                  | (4U == (IData)(vlSelfRef.__PVT__req_opcode)))) 
                              | ((IData)(vlSelfRef.__PVT__prefetch_need_data) 
                                 | (IData)(__PVT__transmit_from_other_client))))));
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
                                                         & (~ (IData)(vlSelfRef.__PVT__nestC_save_flag))) 
                                                        | ((IData)(vlSelfRef.__PVT__acquire_flag) 
                                                           & (7U 
                                                              != (IData)(vlSelfRef.io_tasks_source_a_bits_opcode))))));
    __PVT___GEN_133 = ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                       & (IData)(__PVT___GEN_132));
    vlSelfRef.__PVT___GEN_217 = (1U & (((IData)(vlSelfRef.__PVT__req_channel) 
                                        >> 1U) | ((~ (IData)(__PVT___T_130)) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17))));
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
            vlSelfRef.io_tasks_client_dir_write_bits_data_0_state 
                = ((IData)(vlSelfRef.__PVT___GEN_11)
                    ? (((0U != (IData)(vlSelfRef.__PVT___GEN_10)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U) : (IData)(vlSelfRef.__PVT___GEN_10));
            vlSelfRef.io_tasks_client_dir_write_bits_data_1_state 
                = ((IData)(vlSelfRef.__PVT___GEN_13)
                    ? (((0U != (IData)(vlSelfRef.__PVT___GEN_12)) 
                        & (1U == (IData)(vlSelfRef.__PVT__req_param)))
                        ? 1U : 0U) : (IData)(vlSelfRef.__PVT___GEN_12));
        } else {
            if ((0U == (IData)(vlSelfRef.__PVT__iam))) {
                if (vlSelfRef.__PVT___client_shrink_perm_T_4) {
                    vlSelfRef.__PVT__new_self_meta_clientStates_0 = 0U;
                    vlSelfRef.io_tasks_client_dir_write_bits_data_0_state = 0U;
                } else if (vlSelfRef.__PVT___client_shrink_perm_T_10) {
                    vlSelfRef.__PVT__new_self_meta_clientStates_0 = 1U;
                    vlSelfRef.io_tasks_client_dir_write_bits_data_0_state = 1U;
                } else {
                    vlSelfRef.__PVT__new_self_meta_clientStates_0 
                        = vlSelfRef.__PVT___GEN_4;
                    vlSelfRef.io_tasks_client_dir_write_bits_data_0_state 
                        = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
                }
            } else {
                vlSelfRef.__PVT__new_self_meta_clientStates_0 
                    = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
                vlSelfRef.io_tasks_client_dir_write_bits_data_0_state 
                    = vlSelfRef.__PVT__meta_reg_clients_states_0_state;
            }
            if ((1U == (IData)(vlSelfRef.__PVT__iam))) {
                if (vlSelfRef.__PVT___client_shrink_perm_T_4) {
                    vlSelfRef.__PVT__new_self_meta_clientStates_1 = 0U;
                    vlSelfRef.io_tasks_client_dir_write_bits_data_1_state = 0U;
                } else if (vlSelfRef.__PVT___client_shrink_perm_T_10) {
                    vlSelfRef.__PVT__new_self_meta_clientStates_1 = 1U;
                    vlSelfRef.io_tasks_client_dir_write_bits_data_1_state = 1U;
                } else {
                    vlSelfRef.__PVT__new_self_meta_clientStates_1 
                        = vlSelfRef.__PVT___GEN_5;
                    vlSelfRef.io_tasks_client_dir_write_bits_data_1_state 
                        = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
                }
            } else {
                vlSelfRef.__PVT__new_self_meta_clientStates_1 
                    = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
                vlSelfRef.io_tasks_client_dir_write_bits_data_1_state 
                    = vlSelfRef.__PVT__meta_reg_clients_states_1_state;
            }
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
        vlSelfRef.io_tasks_client_dir_write_bits_data_0_state 
            = ((IData)(vlSelfRef.__PVT___GEN_11) ? (IData)(vlSelfRef.__PVT___new_clients_meta_0_state_T_24)
                : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state));
        vlSelfRef.io_tasks_client_dir_write_bits_data_1_state 
            = ((IData)(vlSelfRef.__PVT___GEN_13) ? (IData)(vlSelfRef.__PVT___new_clients_meta_1_state_T_24)
                : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state));
    } else {
        vlSelfRef.__PVT__new_self_meta_clientStates_0 
            = ((0U == (IData)(vlSelfRef.__PVT__iam))
                ? ((IData)(vlSelfRef.__PVT__req_acquire)
                    ? (IData)(__PVT___new_self_meta_clientStates_0_T_27)
                    : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                        ? ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit)
                            ? 1U : 0U) : ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_hit)
                                           ? (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state)
                                           : 0U))) : 
               ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                 ? ((IData)(__PVT___new_self_meta_clientStates_0_T_36)
                     ? 0U : (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_38))
                 : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                     ? (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_38)
                     : (IData)(__PVT___new_self_meta_clientStates_0_T_45))));
        if ((4U == (IData)(vlSelfRef.__PVT__req_opcode))) {
            vlSelfRef.io_tasks_client_dir_write_bits_data_0_state 
                = vlSelfRef.__PVT___new_clients_meta_0_state_T_36;
            vlSelfRef.io_tasks_client_dir_write_bits_data_1_state 
                = vlSelfRef.__PVT___new_clients_meta_1_state_T_36;
        } else {
            vlSelfRef.io_tasks_client_dir_write_bits_data_0_state 
                = ((0U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT__req_acquire)
                        ? (IData)(__PVT___new_self_meta_clientStates_0_T_27)
                        : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state))
                    : ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                        ? ((IData)(__PVT___new_self_meta_clientStates_0_T_36)
                            ? ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_37)
                                ? 0U : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_0_state))
                            : (IData)(vlSelfRef.__PVT___new_clients_meta_0_state_T_36))
                        : (IData)(__PVT___new_self_meta_clientStates_0_T_45)));
            vlSelfRef.io_tasks_client_dir_write_bits_data_1_state 
                = ((1U == (IData)(vlSelfRef.__PVT__iam))
                    ? ((IData)(vlSelfRef.__PVT__req_acquire)
                        ? (IData)(__PVT___new_self_meta_clientStates_0_T_27)
                        : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state))
                    : ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                        ? ((IData)(__PVT___new_self_meta_clientStates_0_T_36)
                            ? ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_1_T_37)
                                ? 0U : (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state))
                            : (IData)(vlSelfRef.__PVT___new_clients_meta_1_state_T_36))
                        : (IData)(__PVT___new_self_meta_clientStates_1_T_45)));
        }
        vlSelfRef.__PVT__new_self_meta_clientStates_1 
            = ((1U == (IData)(vlSelfRef.__PVT__iam))
                ? ((IData)(vlSelfRef.__PVT__req_acquire)
                    ? (IData)(__PVT___new_self_meta_clientStates_0_T_27)
                    : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                        ? ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit)
                            ? 1U : 0U) : ((IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_hit)
                                           ? (IData)(vlSelfRef.__PVT__meta_reg_clients_states_1_state)
                                           : 0U))) : 
               ((IData)(vlSelfRef.__PVT___new_self_meta_clientStates_0_T_33)
                 ? ((IData)(__PVT___new_self_meta_clientStates_0_T_36)
                     ? 0U : (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_1_T_38))
                 : ((4U == (IData)(vlSelfRef.__PVT__req_opcode))
                     ? (IData)(vlSelfRef.__PVT___new_self_meta_clientStates_1_T_38)
                     : (IData)(__PVT___new_self_meta_clientStates_1_T_45))));
    }
    if (vlSelfRef.__VdfgRegularize_hd4a67951_2_36) {
        vlSelfRef.__PVT___GEN_156 = ((0U != (IData)(vlSelfRef.__PVT__iam)) 
                                     & (IData)(__PVT___T_161));
        __PVT___GEN_157 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                 | (~ (IData)(__PVT___T_161))));
        vlSelfRef.__PVT___GEN_159 = (1U & ((0U == (IData)(vlSelfRef.__PVT__iam)) 
                                           | ((~ (IData)(__PVT___T_161)) 
                                              | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))));
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
        __PVT___GEN_157 = (1U & (~ (IData)(__PVT___T_168)));
        vlSelfRef.__PVT___GEN_159 = (1U & ((~ (IData)(__PVT___T_168)) 
                                           | (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)));
        __PVT___GEN_158 = ((IData)(__PVT___T_168) ? 
                           ((~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit)) 
                            & (IData)(__PVT___GEN_133))
                            : (IData)(__PVT___GEN_132));
        vlSelfRef.__PVT___GEN_184 = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_19)) 
                                     & (IData)(__PVT___GEN_157));
    }
    __PVT___GEN_227 = (1U & ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                              ? ((~ (IData)(vlSelfRef.__PVT__req_fromCmoHelper)) 
                                 | (IData)(vlSelfRef.__PVT___GEN_101))
                              : ((2U & (IData)(vlSelfRef.__PVT__req_channel))
                                  ? (IData)(vlSelfRef.__PVT___GEN_125)
                                  : ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_17) 
                                     | (IData)(vlSelfRef.__PVT___GEN_184)))));
    if (vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG) {
        vlSelfRef.__PVT___GEN_272 = vlSelfRef.__PVT___GEN_234;
        vlSelfRef.__PVT___GEN_283 = vlSelfRef.__PVT___GEN_234;
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT___GEN_237;
        vlSelfRef.__PVT___GEN_279 = vlSelfRef.__PVT___GEN_237;
        vlSelfRef.__PVT___GEN_387 = __PVT___GEN_227;
        vlSelfRef.__PVT___GEN_388 = __PVT___GEN_227;
    } else {
        vlSelfRef.__PVT___GEN_272 = vlSelfRef.__PVT__s_writerelease;
        vlSelfRef.__PVT___GEN_283 = vlSelfRef.__PVT__w_sinkcack;
        vlSelfRef.__PVT___GEN_277 = vlSelfRef.__PVT__w_grantfirst;
        vlSelfRef.__PVT___GEN_279 = vlSelfRef.__PVT__w_grant;
        vlSelfRef.__PVT___GEN_387 = vlSelfRef.__PVT__w_probeacklast;
        vlSelfRef.__PVT___GEN_388 = vlSelfRef.__PVT__w_probeack;
    }
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
    vlSelfRef.__PVT___GEN_339 = ((IData)(vlSelfRef.__PVT___T_246) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                     ? (IData)(__PVT___GEN_227)
                                     : (IData)(vlSelfRef.__PVT__s_probe)));
}

VL_ATTR_COLD void VVerifyTop_MSHR_16___stl_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7__1(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___stl_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___T_245;
    __PVT___T_245 = 0;
    // Body
    vlSelfRef.__PVT___GEN_430 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__mshrAlloc_io_alloc_7_valid) 
                                 | ((~ (IData)(vlSelfRef.io_status_bits_will_free)) 
                                    & (IData)(vlSelfRef.__PVT__req_valid)));
    vlSelfRef.__PVT___GEN_346 = (1U & ((((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__arbiter_1__DOT__chosenOH) 
                                         >> 7U) & (IData)(vlSelfRef.io_tasks_client_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
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
    __PVT___T_245 = (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_valid_latch) 
                      & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceA_io_task_ready)) 
                     & (IData)(vlSelfRef.io_tasks_source_a_valid));
    vlSelfRef.__PVT___T_258 = (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_valid_latch_6) 
                                & (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkC_io_task_ready)) 
                               & (IData)(vlSelfRef.io_tasks_sink_c_valid));
    vlSelfRef.__PVT___GEN_337 = ((IData)(__PVT___T_245) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_237)
                                     : (IData)(vlSelfRef.__PVT__s_acquire)));
    vlSelfRef.__PVT___GEN_338 = (1U & ((IData)(__PVT___T_245) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
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
}
