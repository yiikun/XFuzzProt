// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_MSHR_16.h"
#include "VVerifyTop__Syms.h"

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7__2(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___T_245;
    __PVT___T_245 = 0;
    // Body
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

VL_INLINE_OPT void VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7__3(VVerifyTop_MSHR_16* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHR_16___nba_sequent__TOP__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_110;
    __PVT___GEN_110 = 0;
    CData/*0:0*/ __PVT___GEN_280;
    __PVT___GEN_280 = 0;
    // Body
    vlSelfRef.__PVT___T_216 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_releaseThrough) 
                               & (IData)(vlSelfRef.__PVT___T_222));
    vlSelfRef.__VdfgRegularize_hd4a67951_2_31 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_resps_sink_d_valid) 
                                                 & (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_419 = (1U & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD_io_resp_valid) 
                                        & (7U == (IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s4_req_sinkId))) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
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
    vlSelfRef.__PVT__will_release_through = ((IData)(vlSelfRef.__PVT___T_216) 
                                             & ((~ 
                                                 (((1U 
                                                    != (IData)(vlSelfRef.__PVT__iam)) 
                                                   & (IData)(vlSelfRef.__PVT___GEN_13)) 
                                                  | ((0U 
                                                      != (IData)(vlSelfRef.__PVT__iam)) 
                                                     & (IData)(vlSelfRef.__PVT___GEN_11)))) 
                                                & (2U 
                                                   >= (IData)(vlSelfRef.__PVT__req_param))));
    __PVT___GEN_110 = (1U & ((~ ((IData)(vlSelfRef.__PVT___T_57) 
                                 & ((0U != (IData)(vlSelfRef.__PVT___GEN_3)) 
                                    & (IData)(vlSelfRef.__PVT__replace_need_release)))) 
                             | (IData)(vlSelfRef.__PVT___T_216)));
    vlSelfRef.__PVT___GEN_345 = (1U & (((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__c_valid_latch_7) 
                                        & (IData)(vlSelfRef.io_tasks_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper) 
                                                  | ((~ (IData)(vlSelfRef.__PVT___T_57)) 
                                                     | (IData)(vlSelfRef.__PVT___T_216)))
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
                                         >> 7U) & (IData)(vlSelfRef.io_tasks_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? 
                                                  (~ (IData)(vlSelfRef.io_tasks_source_d_bits_isHit))
                                                   : 
                                                  ((~ 
                                                    ((IData)(vlSelfRef.io_tasks_source_d_bits_isHit) 
                                                     | (IData)(vlSelfRef.__PVT__req_opcode))) 
                                                   | (IData)(vlSelfRef.__PVT___T_216)))
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
    vlSelfRef.__PVT___GEN_411 = ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_31)
                                  ? ((IData)(vlSelfRef.__VdfgRegularize_hd4a67951_2_32)
                                      ? ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__sinkD_io_resp_bits_last) 
                                         | (IData)(vlSelfRef.__PVT__w_grantlast))
                                      : ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                          ? (IData)(vlSelfRef.__PVT___GEN_237)
                                          : (IData)(vlSelfRef.__PVT__w_grantlast)))
                                  : ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                      ? (IData)(vlSelfRef.__PVT___GEN_237)
                                      : (IData)(vlSelfRef.__PVT__w_grantlast)));
    vlSelfRef.__PVT__will_drop_release = ((~ (IData)(vlSelfRef.__PVT__will_release_through)) 
                                          & (IData)(vlSelfRef.__PVT___T_216));
    vlSelfRef.__PVT___GEN_340 = ((IData)(vlSelfRef.__PVT___T_251) 
                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                                     ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                         ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                             ? (IData)(vlSelfRef.__PVT___GEN_103)
                                             : (IData)(__PVT___GEN_110))
                                         : (IData)(vlSelfRef.__PVT___GEN_217))
                                     : (IData)(vlSelfRef.__PVT__s_release)));
    __PVT___GEN_280 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7_io_dirResult_valid_REG)
                        ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                            ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                ? (IData)(vlSelfRef.__PVT___GEN_103)
                                : ((~ ((IData)(vlSelfRef.__PVT__will_release_through) 
                                       & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                   & (IData)(__PVT___GEN_110)))
                            : (IData)(vlSelfRef.__PVT___GEN_217))
                        : (IData)(vlSelfRef.__PVT__w_releaseack));
    vlSelfRef.__PVT___GEN_371 = __PVT___GEN_280;
}
