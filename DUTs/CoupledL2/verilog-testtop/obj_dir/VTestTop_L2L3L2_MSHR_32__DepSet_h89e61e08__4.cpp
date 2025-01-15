// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_MSHR_32.h"
#include "VTestTop_L2L3L2__Syms.h"

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr__2(VTestTop_L2L3L2_MSHR_32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___T_248;
    __PVT___T_248 = 0;
    // Body
    vlSelfRef.__PVT___GEN_342 = (1U & ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter_1__DOT__chosenOH) 
                                         >> 0xfU) & (IData)(vlSelfRef.io_tasks_client_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_15_io_dirResult_valid_REG)
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
    __PVT___T_248 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_valid_latch) 
                      & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceA_io_task_ready)) 
                     & (IData)(vlSelfRef.io_tasks_source_a_valid));
    vlSelfRef.__PVT___T_261 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_valid_latch_6) 
                                & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sinkC_io_task_ready)) 
                               & (IData)(vlSelfRef.io_tasks_sink_c_valid));
    vlSelfRef.__VdfgRegularize_h42e69e07_2_30 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr_io_resps_sink_d_valid) 
                                                 & (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_413 = (1U & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_resp_valid) 
                                        & (0xfU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s4_req_sinkId))) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_15_io_dirResult_valid_REG)
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
    vlSelfRef.__PVT___GEN_333 = ((IData)(__PVT___T_248) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_15_io_dirResult_valid_REG)
                                     ? (IData)(vlSelfRef.__PVT___GEN_236)
                                     : (IData)(vlSelfRef.__PVT__s_acquire)));
    vlSelfRef.__PVT___GEN_334 = (1U & ((IData)(__PVT___T_248) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_15_io_dirResult_valid_REG)
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
                                      : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_15_io_dirResult_valid_REG)
                                          ? (IData)(vlSelfRef.__PVT___GEN_236)
                                          : (IData)(vlSelfRef.__PVT__w_grantlast)))
                                  : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_15_io_dirResult_valid_REG)
                                      ? (IData)(vlSelfRef.__PVT___GEN_236)
                                      : (IData)(vlSelfRef.__PVT__w_grantlast)));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr__3(VTestTop_L2L3L2_MSHR_32* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHR_32___nba_sequent__TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_109;
    __PVT___GEN_109 = 0;
    CData/*0:0*/ __PVT___GEN_279;
    __PVT___GEN_279 = 0;
    // Body
    vlSelfRef.__PVT___T_219 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr_io_releaseThrough) 
                               & (IData)(vlSelfRef.__PVT___T_225));
    vlSelfRef.__PVT__will_release_through = ((IData)(vlSelfRef.__PVT___T_219) 
                                             & ((~ 
                                                 (((1U 
                                                    != (IData)(vlSelfRef.__PVT__iam)) 
                                                   & (IData)(vlSelfRef.__PVT___GEN_11)) 
                                                  | ((0U 
                                                      != (IData)(vlSelfRef.__PVT__iam)) 
                                                     & (IData)(vlSelfRef.__PVT___GEN_9)))) 
                                                & (2U 
                                                   >= (IData)(vlSelfRef.__PVT__req_param))));
    __PVT___GEN_109 = (1U & ((~ ((IData)(vlSelfRef.__PVT___T_60) 
                                 & ((0U != (IData)(vlSelfRef.__PVT___GEN_19)) 
                                    & (IData)(vlSelfRef.__PVT__replace_need_release)))) 
                             | (IData)(vlSelfRef.__PVT___T_219)));
    vlSelfRef.__PVT___GEN_341 = (1U & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_valid_latch_7) 
                                        & (IData)(vlSelfRef.io_tasks_tag_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_15_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper) 
                                                  | ((~ (IData)(vlSelfRef.__PVT___T_60)) 
                                                     | (IData)(vlSelfRef.__PVT___T_219)))
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
    vlSelfRef.__PVT___GEN_340 = (1U & ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH) 
                                         >> 0xfU) & (IData)(vlSelfRef.io_tasks_dir_write_valid)) 
                                       | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_15_io_dirResult_valid_REG)
                                           ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                               ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                                   ? 
                                                  (~ (IData)(vlSelfRef.__PVT___GEN_16))
                                                   : 
                                                  ((~ 
                                                    ((IData)(vlSelfRef.__PVT___GEN_16) 
                                                     | (IData)(vlSelfRef.__PVT__req_opcode))) 
                                                   | (IData)(vlSelfRef.__PVT___T_219)))
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
    vlSelfRef.__PVT__will_drop_release = ((~ (IData)(vlSelfRef.__PVT__will_release_through)) 
                                          & (IData)(vlSelfRef.__PVT___T_219));
    vlSelfRef.__PVT___GEN_336 = ((IData)(vlSelfRef.__PVT___T_254) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_15_io_dirResult_valid_REG)
                                     ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                                         ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                             ? (IData)(vlSelfRef.__PVT___GEN_102)
                                             : (IData)(__PVT___GEN_109))
                                         : (IData)(vlSelfRef.__PVT___GEN_216))
                                     : (IData)(vlSelfRef.__PVT__s_release)));
    __PVT___GEN_279 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__ms_15_io_dirResult_valid_REG)
                        ? ((4U & (IData)(vlSelfRef.__PVT__req_channel))
                            ? ((IData)(vlSelfRef.__PVT__req_fromCmoHelper)
                                ? (IData)(vlSelfRef.__PVT___GEN_102)
                                : ((~ ((IData)(vlSelfRef.__PVT__will_release_through) 
                                       & (IData)(vlSelfRef.__PVT__req_opcode))) 
                                   & (IData)(__PVT___GEN_109)))
                            : (IData)(vlSelfRef.__PVT___GEN_216))
                        : (IData)(vlSelfRef.__PVT__w_releaseack));
    vlSelfRef.__PVT___GEN_365 = __PVT___GEN_279;
}
