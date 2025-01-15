// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_GrantBufferFIFO.h"
#include "VTestTop_L2L3L2__Syms.h"

VL_ATTR_COLD void VTestTop_L2L3L2_GrantBufferFIFO___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__grantBuf__0(VTestTop_L2L3L2_GrantBufferFIFO* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_GrantBufferFIFO___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__grantBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT___block_valids_T;
    __PVT___block_valids_T = 0;
    CData/*1:0*/ __PVT___block_valids_T_2;
    __PVT___block_valids_T_2 = 0;
    CData/*1:0*/ __PVT___block_valids_T_4;
    __PVT___block_valids_T_4 = 0;
    CData/*1:0*/ __PVT___block_valids_T_6;
    __PVT___block_valids_T_6 = 0;
    CData/*1:0*/ __PVT___block_valids_T_8;
    __PVT___block_valids_T_8 = 0;
    CData/*1:0*/ __PVT___block_valids_T_10;
    __PVT___block_valids_T_10 = 0;
    CData/*1:0*/ __PVT___block_valids_T_12;
    __PVT___block_valids_T_12 = 0;
    CData/*1:0*/ __PVT___block_valids_T_14;
    __PVT___block_valids_T_14 = 0;
    CData/*1:0*/ __PVT___block_valids_T_16;
    __PVT___block_valids_T_16 = 0;
    CData/*1:0*/ __PVT___block_valids_T_18;
    __PVT___block_valids_T_18 = 0;
    CData/*1:0*/ __PVT___block_valids_T_20;
    __PVT___block_valids_T_20 = 0;
    CData/*1:0*/ __PVT___block_valids_T_22;
    __PVT___block_valids_T_22 = 0;
    CData/*1:0*/ __PVT___block_valids_T_24;
    __PVT___block_valids_T_24 = 0;
    CData/*1:0*/ __PVT___block_valids_T_26;
    __PVT___block_valids_T_26 = 0;
    CData/*1:0*/ __PVT___block_valids_T_28;
    __PVT___block_valids_T_28 = 0;
    CData/*7:0*/ __PVT__bufIdx_hi_1;
    __PVT__bufIdx_hi_1 = 0;
    CData/*7:0*/ __PVT___bufIdx_T_2;
    __PVT___bufIdx_T_2 = 0;
    CData/*3:0*/ __PVT___bufIdx_T_4;
    __PVT___bufIdx_T_4 = 0;
    CData/*3:0*/ __PVT___GEN_1625;
    __PVT___GEN_1625 = 0;
    CData/*0:0*/ __PVT___GEN_1626;
    __PVT___GEN_1626 = 0;
    CData/*3:0*/ __PVT___GEN_1648;
    __PVT___GEN_1648 = 0;
    CData/*0:0*/ __PVT___GEN_1649;
    __PVT___GEN_1649 = 0;
    CData/*3:0*/ __PVT___GEN_1671;
    __PVT___GEN_1671 = 0;
    CData/*0:0*/ __PVT___GEN_1672;
    __PVT___GEN_1672 = 0;
    CData/*3:0*/ __PVT___GEN_1694;
    __PVT___GEN_1694 = 0;
    CData/*0:0*/ __PVT___GEN_1695;
    __PVT___GEN_1695 = 0;
    CData/*3:0*/ __PVT___GEN_1717;
    __PVT___GEN_1717 = 0;
    CData/*0:0*/ __PVT___GEN_1718;
    __PVT___GEN_1718 = 0;
    CData/*3:0*/ __PVT___GEN_1740;
    __PVT___GEN_1740 = 0;
    CData/*0:0*/ __PVT___GEN_1741;
    __PVT___GEN_1741 = 0;
    CData/*3:0*/ __PVT___GEN_1763;
    __PVT___GEN_1763 = 0;
    CData/*0:0*/ __PVT___GEN_1764;
    __PVT___GEN_1764 = 0;
    CData/*3:0*/ __PVT___GEN_1786;
    __PVT___GEN_1786 = 0;
    CData/*0:0*/ __PVT___GEN_1787;
    __PVT___GEN_1787 = 0;
    CData/*3:0*/ __PVT___GEN_1809;
    __PVT___GEN_1809 = 0;
    CData/*0:0*/ __PVT___GEN_1810;
    __PVT___GEN_1810 = 0;
    CData/*3:0*/ __PVT___GEN_1832;
    __PVT___GEN_1832 = 0;
    CData/*0:0*/ __PVT___GEN_1833;
    __PVT___GEN_1833 = 0;
    CData/*3:0*/ __PVT___GEN_1855;
    __PVT___GEN_1855 = 0;
    CData/*0:0*/ __PVT___GEN_1856;
    __PVT___GEN_1856 = 0;
    CData/*3:0*/ __PVT___GEN_1878;
    __PVT___GEN_1878 = 0;
    CData/*0:0*/ __PVT___GEN_1879;
    __PVT___GEN_1879 = 0;
    CData/*3:0*/ __PVT___GEN_1901;
    __PVT___GEN_1901 = 0;
    CData/*0:0*/ __PVT___GEN_1902;
    __PVT___GEN_1902 = 0;
    CData/*3:0*/ __PVT___GEN_1924;
    __PVT___GEN_1924 = 0;
    CData/*0:0*/ __PVT___GEN_1925;
    __PVT___GEN_1925 = 0;
    CData/*1:0*/ __VdfgRegularize_ha337dbbd_1_70;
    __VdfgRegularize_ha337dbbd_1_70 = 0;
    CData/*2:0*/ __VdfgRegularize_ha337dbbd_1_71;
    __VdfgRegularize_ha337dbbd_1_71 = 0;
    // Body
    vlSelfRef.__PVT___beat_counters_0_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_0))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_0) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_1_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_1))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_1) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_2_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_2))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_2) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_3_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_3))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_3) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_4_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_4))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_4) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_5_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_5))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_5) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_6_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_6))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_6) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_7_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_7))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_7) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_8_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_8))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_8) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_9_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_9))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_9) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_10_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_10))
                                               ? 0U
                                               : (0x1fU 
                                                  & ((IData)(vlSelfRef.__PVT__beat_counters_10) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_11_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_11))
                                               ? 0U
                                               : (0x1fU 
                                                  & ((IData)(vlSelfRef.__PVT__beat_counters_11) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_12_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_12))
                                               ? 0U
                                               : (0x1fU 
                                                  & ((IData)(vlSelfRef.__PVT__beat_counters_12) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_13_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_13))
                                               ? 0U
                                               : (0x1fU 
                                                  & ((IData)(vlSelfRef.__PVT__beat_counters_13) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_14_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_14))
                                               ? 0U
                                               : (0x1fU 
                                                  & ((IData)(vlSelfRef.__PVT__beat_counters_14) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_15_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_15))
                                               ? 0U
                                               : (0x1fU 
                                                  & ((IData)(vlSelfRef.__PVT__beat_counters_15) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT___timers_0_T_1 = (1ULL + vlSelfRef.__PVT__timers_0);
    vlSelfRef.__PVT___timers_1_T_1 = (1ULL + vlSelfRef.__PVT__timers_1);
    vlSelfRef.__PVT___timers_2_T_1 = (1ULL + vlSelfRef.__PVT__timers_2);
    vlSelfRef.__PVT___timers_3_T_1 = (1ULL + vlSelfRef.__PVT__timers_3);
    vlSelfRef.__PVT___timers_4_T_1 = (1ULL + vlSelfRef.__PVT__timers_4);
    vlSelfRef.__PVT___timers_5_T_1 = (1ULL + vlSelfRef.__PVT__timers_5);
    vlSelfRef.__PVT___timers_6_T_1 = (1ULL + vlSelfRef.__PVT__timers_6);
    vlSelfRef.__PVT___timers_7_T_1 = (1ULL + vlSelfRef.__PVT__timers_7);
    vlSelfRef.__PVT___timers_8_T_1 = (1ULL + vlSelfRef.__PVT__timers_8);
    vlSelfRef.__PVT___timers_9_T_1 = (1ULL + vlSelfRef.__PVT__timers_9);
    vlSelfRef.__PVT___timers_10_T_1 = (1ULL + vlSelfRef.__PVT__timers_10);
    vlSelfRef.__PVT___timers_11_T_1 = (1ULL + vlSelfRef.__PVT__timers_11);
    vlSelfRef.__PVT___timers_12_T_1 = (1ULL + vlSelfRef.__PVT__timers_12);
    vlSelfRef.__PVT___timers_13_T_1 = (1ULL + vlSelfRef.__PVT__timers_13);
    vlSelfRef.__PVT___timers_14_T_1 = (1ULL + vlSelfRef.__PVT__timers_14);
    vlSelfRef.__PVT___timers_15_T_1 = (1ULL + vlSelfRef.__PVT__timers_15);
    vlSelfRef.__PVT___globalCounter_T_1 = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__globalCounter)));
    vlSelfRef.__PVT___globalCounter_T_4 = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__globalCounter) 
                                            - (IData)(1U)));
    vlSelfRef.__PVT___enqPtrExt_new_ptr_T_2 = (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (((IData)(vlSelfRef.__PVT__enqPtrExt_flag) 
                                                    << 4U) 
                                                   | (IData)(vlSelfRef.__PVT__enqPtrExt_value))));
    vlSelfRef.__PVT___T_790 = (0x1fU & ((0xfU & ((7U 
                                                  & ((3U 
                                                      & (((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_0)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_0_opcode))) 
                                                         + 
                                                         ((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_1)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_1_opcode))))) 
                                                     + 
                                                     (3U 
                                                      & (((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_2)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_2_opcode))) 
                                                         + 
                                                         ((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_3)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_3_opcode))))))) 
                                                 + 
                                                 (7U 
                                                  & ((3U 
                                                      & (((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_4)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_4_opcode))) 
                                                         + 
                                                         ((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_5)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_5_opcode))))) 
                                                     + 
                                                     (3U 
                                                      & (((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_6)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_6_opcode))) 
                                                         + 
                                                         ((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_7)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_7_opcode))))))))) 
                                        + (0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & (((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_8)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_8_opcode))) 
                                                           + 
                                                           ((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_9)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_9_opcode))))) 
                                                       + 
                                                       (3U 
                                                        & (((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_10)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_10_opcode))) 
                                                           + 
                                                           ((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_11)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_11_opcode))))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & (((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_12)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_12_opcode))) 
                                                           + 
                                                           ((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_13)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_13_opcode))))) 
                                                       + 
                                                       (3U 
                                                        & (((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_14)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_14_opcode))) 
                                                           + 
                                                           ((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_15)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_15_opcode)))))))))));
    vlSelfRef.__PVT__insertIdx = ((IData)(vlSelfRef.__PVT__inflight_grant_0_valid)
                                   ? ((IData)(vlSelfRef.__PVT__inflight_grant_1_valid)
                                       ? ((IData)(vlSelfRef.__PVT__inflight_grant_2_valid)
                                           ? ((IData)(vlSelfRef.__PVT__inflight_grant_3_valid)
                                               ? ((IData)(vlSelfRef.__PVT__inflight_grant_4_valid)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__inflight_grant_5_valid)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__inflight_grant_6_valid)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__inflight_grant_7_valid)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__inflight_grant_8_valid)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__inflight_grant_9_valid)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__inflight_grant_10_valid)
                                                         ? 
                                                        ((IData)(vlSelfRef.__PVT__inflight_grant_11_valid)
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__inflight_grant_12_valid)
                                                           ? 
                                                          ((IData)(vlSelfRef.__PVT__inflight_grant_13_valid)
                                                            ? 
                                                           ((IData)(vlSelfRef.__PVT__inflight_grant_14_valid)
                                                             ? 0xfU
                                                             : 0xeU)
                                                            : 0xdU)
                                                           : 0xcU)
                                                          : 0xbU)
                                                         : 0xaU)
                                                        : 9U)
                                                       : 8U)
                                                      : 7U)
                                                     : 6U)
                                                    : 5U)
                                                   : 4U)
                                               : 3U)
                                           : 2U) : 1U)
                                   : 0U);
    vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2 = (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (((IData)(vlSelfRef.__PVT__deqPtrExt_flag) 
                                                    << 4U) 
                                                   | (IData)(vlSelfRef.__PVT__deqPtrExt_value))));
    vlSelfRef.__PVT___block_valids_T_30 = (((IData)(vlSelfRef.__PVT__beat_valids_15_1) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__beat_valids_15_0));
    __PVT___block_valids_T_28 = (((IData)(vlSelfRef.__PVT__beat_valids_14_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_14_0));
    __PVT___block_valids_T_26 = (((IData)(vlSelfRef.__PVT__beat_valids_13_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_13_0));
    __PVT___block_valids_T_24 = (((IData)(vlSelfRef.__PVT__beat_valids_12_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_12_0));
    __PVT___block_valids_T_22 = (((IData)(vlSelfRef.__PVT__beat_valids_11_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_11_0));
    __PVT___block_valids_T_20 = (((IData)(vlSelfRef.__PVT__beat_valids_10_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_10_0));
    __PVT___block_valids_T_18 = (((IData)(vlSelfRef.__PVT__beat_valids_9_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_9_0));
    __PVT___block_valids_T_16 = (((IData)(vlSelfRef.__PVT__beat_valids_8_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_8_0));
    __PVT___block_valids_T_14 = (((IData)(vlSelfRef.__PVT__beat_valids_7_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_7_0));
    __PVT___block_valids_T_12 = (((IData)(vlSelfRef.__PVT__beat_valids_6_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_6_0));
    __PVT___block_valids_T_10 = (((IData)(vlSelfRef.__PVT__beat_valids_5_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_5_0));
    __PVT___block_valids_T_8 = (((IData)(vlSelfRef.__PVT__beat_valids_4_1) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_4_0));
    __PVT___block_valids_T_6 = (((IData)(vlSelfRef.__PVT__beat_valids_3_1) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_3_0));
    __PVT___block_valids_T_4 = (((IData)(vlSelfRef.__PVT__beat_valids_2_1) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_2_0));
    __PVT___block_valids_T_2 = (((IData)(vlSelfRef.__PVT__beat_valids_1_1) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_1_0));
    __PVT___block_valids_T = (((IData)(vlSelfRef.__PVT__beat_valids_0_1) 
                               << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_0_0));
    if ((0xfU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_15_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_15_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_15_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_15_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_15_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_15_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_15_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(vlSelfRef.__PVT___block_valids_T_30)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_15_opcode)));
    } else if ((0xeU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_14_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_14_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_14_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_14_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_14_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_14_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_14_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_28)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_14_opcode)));
    } else if ((0xdU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_13_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_13_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_13_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_13_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_13_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_13_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_13_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_26)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_13_opcode)));
    } else if ((0xcU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_12_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_12_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_12_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_12_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_12_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_12_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_12_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_24)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_12_opcode)));
    } else if ((0xbU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_11_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_11_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_11_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_11_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_11_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_11_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_11_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_22)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_11_opcode)));
    } else if ((0xaU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_10_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_10_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_10_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_10_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_10_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_10_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_10_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_20)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_10_opcode)));
    } else if ((9U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_9_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_9_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_9_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_9_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_9_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_9_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_9_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_18)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_9_opcode)));
    } else if ((8U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_8_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_8_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_8_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_8_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_8_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_8_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_8_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_16)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_8_opcode)));
    } else if ((7U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_7_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_7_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_7_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_7_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_7_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_7_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_7_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_14)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_7_opcode)));
    } else if ((6U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_6_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_6_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_6_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_6_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_6_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_6_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_6_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_12)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_6_opcode)));
    } else if ((5U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_5_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_5_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_5_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_5_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_5_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_5_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_5_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_10)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_5_opcode)));
    } else if ((4U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_4_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_4_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_4_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_4_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_4_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_4_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_4_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_8)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_4_opcode)));
    } else if ((3U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_3_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_3_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_3_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_3_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_3_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_3_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_3_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_6)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_3_opcode)));
    } else if ((2U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_2_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_2_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_2_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_2_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_2_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_2_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_2_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_4)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_2_opcode)));
    } else if ((1U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_1_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_1_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_1_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_1_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_1_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_1_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_1_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_2)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_1_opcode)));
    } else if ((0U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_0_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_0_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_0_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_0_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_0_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_0_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_0_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_0_opcode)));
    } else {
        vlSelfRef.io_d_bits_param = (3U & 0U);
        vlSelfRef.io_d_bits_source = 0U;
        vlSelfRef.io_d_bits_sink = 0U;
        vlSelfRef.io_d_bits_data = (0xffU & 0U);
        vlSelfRef.io_d_bits_opcode = 0U;
        vlSelfRef.io_d_valid = 0U;
    }
    __PVT__bufIdx_hi_1 = ((((((IData)(vlSelfRef.__PVT__inflight_grant_15_valid) 
                              & ((IData)(vlSelfRef.__PVT__inflight_grant_15_bits_sink) 
                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink))) 
                             << 7U) | (((IData)(vlSelfRef.__PVT__inflight_grant_14_valid) 
                                        & ((IData)(vlSelfRef.__PVT__inflight_grant_14_bits_sink) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink))) 
                                       << 6U)) | ((
                                                   ((IData)(vlSelfRef.__PVT__inflight_grant_13_valid) 
                                                    & ((IData)(vlSelfRef.__PVT__inflight_grant_13_bits_sink) 
                                                       == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink))) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.__PVT__inflight_grant_12_valid) 
                                                      & ((IData)(vlSelfRef.__PVT__inflight_grant_12_bits_sink) 
                                                         == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink))) 
                                                     << 4U))) 
                          | (((((IData)(vlSelfRef.__PVT__inflight_grant_11_valid) 
                                & ((IData)(vlSelfRef.__PVT__inflight_grant_11_bits_sink) 
                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink))) 
                               << 3U) | (((IData)(vlSelfRef.__PVT__inflight_grant_10_valid) 
                                          & ((IData)(vlSelfRef.__PVT__inflight_grant_10_bits_sink) 
                                             == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink))) 
                                         << 2U)) | 
                             ((((IData)(vlSelfRef.__PVT__inflight_grant_9_valid) 
                                & ((IData)(vlSelfRef.__PVT__inflight_grant_9_bits_sink) 
                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink))) 
                               << 1U) | ((IData)(vlSelfRef.__PVT__inflight_grant_8_valid) 
                                         & ((IData)(vlSelfRef.__PVT__inflight_grant_8_bits_sink) 
                                            == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink))))));
    vlSelfRef.io_toReqArb_blockSinkReqEntrance_blockB_s1 
        = (((IData)(vlSelfRef.__PVT__inflight_grant_0_valid) 
            & (((IData)(vlSelfRef.__PVT__inflight_grant_0_bits_set) 
                == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
               & ((IData)(vlSelfRef.__PVT__inflight_grant_0_bits_tag) 
                  == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
           | (((IData)(vlSelfRef.__PVT__inflight_grant_1_valid) 
               & (((IData)(vlSelfRef.__PVT__inflight_grant_1_bits_set) 
                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                  & ((IData)(vlSelfRef.__PVT__inflight_grant_1_bits_tag) 
                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
              | (((IData)(vlSelfRef.__PVT__inflight_grant_2_valid) 
                  & (((IData)(vlSelfRef.__PVT__inflight_grant_2_bits_set) 
                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                     & ((IData)(vlSelfRef.__PVT__inflight_grant_2_bits_tag) 
                        == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                 | (((IData)(vlSelfRef.__PVT__inflight_grant_3_valid) 
                     & (((IData)(vlSelfRef.__PVT__inflight_grant_3_bits_set) 
                         == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                        & ((IData)(vlSelfRef.__PVT__inflight_grant_3_bits_tag) 
                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                    | (((IData)(vlSelfRef.__PVT__inflight_grant_4_valid) 
                        & (((IData)(vlSelfRef.__PVT__inflight_grant_4_bits_set) 
                            == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                           & ((IData)(vlSelfRef.__PVT__inflight_grant_4_bits_tag) 
                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                       | (((IData)(vlSelfRef.__PVT__inflight_grant_5_valid) 
                           & (((IData)(vlSelfRef.__PVT__inflight_grant_5_bits_set) 
                               == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                              & ((IData)(vlSelfRef.__PVT__inflight_grant_5_bits_tag) 
                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                          | (((IData)(vlSelfRef.__PVT__inflight_grant_6_valid) 
                              & (((IData)(vlSelfRef.__PVT__inflight_grant_6_bits_set) 
                                  == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                 & ((IData)(vlSelfRef.__PVT__inflight_grant_6_bits_tag) 
                                    == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                             | (((IData)(vlSelfRef.__PVT__inflight_grant_7_valid) 
                                 & (((IData)(vlSelfRef.__PVT__inflight_grant_7_bits_set) 
                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                    & ((IData)(vlSelfRef.__PVT__inflight_grant_7_bits_tag) 
                                       == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                | (((IData)(vlSelfRef.__PVT__inflight_grant_8_valid) 
                                    & (((IData)(vlSelfRef.__PVT__inflight_grant_8_bits_set) 
                                        == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                       & ((IData)(vlSelfRef.__PVT__inflight_grant_8_bits_tag) 
                                          == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                   | (((IData)(vlSelfRef.__PVT__inflight_grant_9_valid) 
                                       & (((IData)(vlSelfRef.__PVT__inflight_grant_9_bits_set) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                          & ((IData)(vlSelfRef.__PVT__inflight_grant_9_bits_tag) 
                                             == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                      | (((IData)(vlSelfRef.__PVT__inflight_grant_10_valid) 
                                          & (((IData)(vlSelfRef.__PVT__inflight_grant_10_bits_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                             & ((IData)(vlSelfRef.__PVT__inflight_grant_10_bits_tag) 
                                                == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                         | (((IData)(vlSelfRef.__PVT__inflight_grant_11_valid) 
                                             & (((IData)(vlSelfRef.__PVT__inflight_grant_11_bits_set) 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                                & ((IData)(vlSelfRef.__PVT__inflight_grant_11_bits_tag) 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                            | (((IData)(vlSelfRef.__PVT__inflight_grant_12_valid) 
                                                & (((IData)(vlSelfRef.__PVT__inflight_grant_12_bits_set) 
                                                    == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                                   & ((IData)(vlSelfRef.__PVT__inflight_grant_12_bits_tag) 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                               | (((IData)(vlSelfRef.__PVT__inflight_grant_13_valid) 
                                                   & (((IData)(vlSelfRef.__PVT__inflight_grant_13_bits_set) 
                                                       == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                                      & ((IData)(vlSelfRef.__PVT__inflight_grant_13_bits_tag) 
                                                         == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                                  | (((IData)(vlSelfRef.__PVT__inflight_grant_14_valid) 
                                                      & (((IData)(vlSelfRef.__PVT__inflight_grant_14_bits_set) 
                                                          == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                                         & ((IData)(vlSelfRef.__PVT__inflight_grant_14_bits_tag) 
                                                            == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                                     | ((IData)(vlSelfRef.__PVT__inflight_grant_15_valid) 
                                                        & (((IData)(vlSelfRef.__PVT__inflight_grant_15_bits_set) 
                                                            == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                                           & ((IData)(vlSelfRef.__PVT__inflight_grant_15_bits_tag) 
                                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))))))))))))))))));
    vlSelfRef.__PVT__next_beatsOH_15 = (((IData)(vlSelfRef.__PVT__beat_valids_15_0)
                                          ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_15_1)
                                                   ? 1U
                                                   : 3U)) 
                                        & (IData)(vlSelfRef.__PVT___block_valids_T_30));
    vlSelfRef.__PVT__next_beatsOH_14 = (((IData)(vlSelfRef.__PVT__beat_valids_14_0)
                                          ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_14_1)
                                                   ? 1U
                                                   : 3U)) 
                                        & (IData)(__PVT___block_valids_T_28));
    vlSelfRef.__PVT__next_beatsOH_13 = (((IData)(vlSelfRef.__PVT__beat_valids_13_0)
                                          ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_13_1)
                                                   ? 1U
                                                   : 3U)) 
                                        & (IData)(__PVT___block_valids_T_26));
    vlSelfRef.__PVT__next_beatsOH_12 = (((IData)(vlSelfRef.__PVT__beat_valids_12_0)
                                          ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_12_1)
                                                   ? 1U
                                                   : 3U)) 
                                        & (IData)(__PVT___block_valids_T_24));
    vlSelfRef.__PVT__next_beatsOH_11 = (((IData)(vlSelfRef.__PVT__beat_valids_11_0)
                                          ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_11_1)
                                                   ? 1U
                                                   : 3U)) 
                                        & (IData)(__PVT___block_valids_T_22));
    vlSelfRef.__PVT__next_beatsOH_10 = (((IData)(vlSelfRef.__PVT__beat_valids_10_0)
                                          ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_10_1)
                                                   ? 1U
                                                   : 3U)) 
                                        & (IData)(__PVT___block_valids_T_20));
    vlSelfRef.__VdfgRegularize_ha337dbbd_1_73 = (7U 
                                                 & ((3U 
                                                     & ((0U 
                                                         != (IData)(__PVT___block_valids_T_20)) 
                                                        + 
                                                        (0U 
                                                         != (IData)(__PVT___block_valids_T_22)))) 
                                                    + 
                                                    (3U 
                                                     & ((0U 
                                                         != (IData)(__PVT___block_valids_T_24)) 
                                                        + 
                                                        ((0U 
                                                          != (IData)(__PVT___block_valids_T_26)) 
                                                         + 
                                                         (0U 
                                                          != (IData)(__PVT___block_valids_T_28)))))));
    vlSelfRef.__PVT__next_beatsOH_9 = (((IData)(vlSelfRef.__PVT__beat_valids_9_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_9_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_18));
    vlSelfRef.__PVT__next_beatsOH_8 = (((IData)(vlSelfRef.__PVT__beat_valids_8_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_8_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_16));
    vlSelfRef.__PVT__next_beatsOH_7 = (((IData)(vlSelfRef.__PVT__beat_valids_7_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_7_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_14));
    vlSelfRef.__PVT__next_beatsOH_6 = (((IData)(vlSelfRef.__PVT__beat_valids_6_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_6_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_12));
    vlSelfRef.__PVT__next_beatsOH_5 = (((IData)(vlSelfRef.__PVT__beat_valids_5_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_5_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_10));
    vlSelfRef.__PVT__next_beatsOH_4 = (((IData)(vlSelfRef.__PVT__beat_valids_4_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_4_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_8));
    vlSelfRef.__PVT__next_beatsOH_3 = (((IData)(vlSelfRef.__PVT__beat_valids_3_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_3_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_6));
    vlSelfRef.__PVT__next_beatsOH_2 = (((IData)(vlSelfRef.__PVT__beat_valids_2_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_2_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_4));
    vlSelfRef.__PVT__next_beatsOH_1 = (((IData)(vlSelfRef.__PVT__beat_valids_1_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_1_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_2));
    vlSelfRef.__PVT__next_beatsOH = (((IData)(vlSelfRef.__PVT__beat_valids_0_0)
                                       ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_0_1)
                                                ? 1U
                                                : 3U)) 
                                     & (IData)(__PVT___block_valids_T));
    __VdfgRegularize_ha337dbbd_1_70 = (((IData)((0U 
                                                 != (IData)(__PVT___block_valids_T_2))) 
                                        << 1U) | (0U 
                                                  != (IData)(__PVT___block_valids_T)));
    __PVT___bufIdx_T_2 = ((IData)(__PVT__bufIdx_hi_1) 
                          | ((((((IData)(vlSelfRef.__PVT__inflight_grant_7_valid) 
                                 & ((IData)(vlSelfRef.__PVT__inflight_grant_7_bits_sink) 
                                    == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink))) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__inflight_grant_6_valid) 
                                           & ((IData)(vlSelfRef.__PVT__inflight_grant_6_bits_sink) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink))) 
                                          << 6U)) | 
                              ((((IData)(vlSelfRef.__PVT__inflight_grant_5_valid) 
                                 & ((IData)(vlSelfRef.__PVT__inflight_grant_5_bits_sink) 
                                    == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink))) 
                                << 5U) | (((IData)(vlSelfRef.__PVT__inflight_grant_4_valid) 
                                           & ((IData)(vlSelfRef.__PVT__inflight_grant_4_bits_sink) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink))) 
                                          << 4U))) 
                             | (((((IData)(vlSelfRef.__PVT__inflight_grant_3_valid) 
                                   & ((IData)(vlSelfRef.__PVT__inflight_grant_3_bits_sink) 
                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink))) 
                                  << 3U) | (((IData)(vlSelfRef.__PVT__inflight_grant_2_valid) 
                                             & ((IData)(vlSelfRef.__PVT__inflight_grant_2_bits_sink) 
                                                == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink))) 
                                            << 2U)) 
                                | ((((IData)(vlSelfRef.__PVT__inflight_grant_1_valid) 
                                     & ((IData)(vlSelfRef.__PVT__inflight_grant_1_bits_sink) 
                                        == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink))) 
                                    << 1U) | ((IData)(vlSelfRef.__PVT__inflight_grant_0_valid) 
                                              & ((IData)(vlSelfRef.__PVT__inflight_grant_0_bits_sink) 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))))));
    vlSelfRef.__PVT___T_803 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleIn_0_d_q_io_enq_ready) 
                               & (IData)(vlSelfRef.io_d_valid));
    __VdfgRegularize_ha337dbbd_1_71 = (((IData)((0U 
                                                 != (IData)(__PVT___block_valids_T_4))) 
                                        << 2U) | (IData)(__VdfgRegularize_ha337dbbd_1_70));
    __PVT___bufIdx_T_4 = (0xfU & (((IData)(__PVT___bufIdx_T_2) 
                                   >> 4U) | (IData)(__PVT___bufIdx_T_2)));
    if ((0U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH))) {
                    __PVT___GEN_1625 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1626 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1625 = (0xfU & (IData)(vlSelfRef.__PVT__deqPtrExt_value));
                    __PVT___GEN_1626 = (1U & (IData)(vlSelfRef.__PVT__deqPtrExt_flag));
                }
            } else {
                __PVT___GEN_1625 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1626 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1625 = (0xfU & (IData)(vlSelfRef.__PVT__deqPtrExt_value));
            __PVT___GEN_1626 = (1U & (IData)(vlSelfRef.__PVT__deqPtrExt_flag));
        }
    } else {
        __PVT___GEN_1625 = (0xfU & (IData)(vlSelfRef.__PVT__deqPtrExt_value));
        __PVT___GEN_1626 = (1U & (IData)(vlSelfRef.__PVT__deqPtrExt_flag));
    }
    vlSelfRef.io_d_task_ready = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT___block_valids_T_30)) 
                                          & ((0U != (IData)(__PVT___block_valids_T_28)) 
                                             & ((0U 
                                                 != (IData)(__PVT___block_valids_T_26)) 
                                                & ((0U 
                                                    != (IData)(__PVT___block_valids_T_24)) 
                                                   & ((0U 
                                                       != (IData)(__PVT___block_valids_T_22)) 
                                                      & ((0U 
                                                          != (IData)(__PVT___block_valids_T_20)) 
                                                         & ((0U 
                                                             != (IData)(__PVT___block_valids_T_18)) 
                                                            & ((0U 
                                                                != (IData)(__PVT___block_valids_T_16)) 
                                                               & ((0U 
                                                                   != (IData)(__PVT___block_valids_T_14)) 
                                                                  & ((0U 
                                                                      != (IData)(__PVT___block_valids_T_12)) 
                                                                     & ((0U 
                                                                         != (IData)(__PVT___block_valids_T_10)) 
                                                                        & ((0U 
                                                                            != (IData)(__PVT___block_valids_T_8)) 
                                                                           & ((0U 
                                                                               != (IData)(__PVT___block_valids_T_6)) 
                                                                              & (7U 
                                                                                == (IData)(__VdfgRegularize_ha337dbbd_1_71)))))))))))))))));
    vlSelfRef.__VdfgRegularize_ha337dbbd_1_72 = (0xfU 
                                                 & ((7U 
                                                     & ((3U 
                                                         & ((0U 
                                                             != (IData)(__PVT___block_valids_T)) 
                                                            + 
                                                            VL_SHIFTR_III(2,2,32, (IData)(__VdfgRegularize_ha337dbbd_1_70), 1U))) 
                                                        + 
                                                        (3U 
                                                         & ((7U 
                                                             & VL_SHIFTR_III(3,3,32, (IData)(__VdfgRegularize_ha337dbbd_1_71), 2U)) 
                                                            + 
                                                            ((0U 
                                                              != (IData)(__PVT___block_valids_T_6)) 
                                                             + 
                                                             (0U 
                                                              != (IData)(__PVT___block_valids_T_8))))))) 
                                                    + 
                                                    (7U 
                                                     & ((3U 
                                                         & ((0U 
                                                             != (IData)(__PVT___block_valids_T_10)) 
                                                            + 
                                                            (0U 
                                                             != (IData)(__PVT___block_valids_T_12)))) 
                                                        + 
                                                        (3U 
                                                         & ((0U 
                                                             != (IData)(__PVT___block_valids_T_14)) 
                                                            + 
                                                            ((0U 
                                                              != (IData)(__PVT___block_valids_T_16)) 
                                                             + 
                                                             (0U 
                                                              != (IData)(__PVT___block_valids_T_18)))))))));
    vlSelfRef.__PVT__bufIdx = (((((IData)((0U != (IData)(__PVT__bufIdx_hi_1))) 
                                  << 1U) | (0U != (0xfU 
                                                   & ((IData)(__PVT___bufIdx_T_2) 
                                                      >> 4U)))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(__PVT___bufIdx_T_4) 
                                                        >> 2U)))) 
                                           << 1U) | (IData)(
                                                            (0U 
                                                             != 
                                                             (0xaU 
                                                              & (IData)(__PVT___bufIdx_T_4))))));
    if ((1U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_1))) {
                    __PVT___GEN_1648 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1649 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1648 = (0xfU & (IData)(__PVT___GEN_1625));
                    __PVT___GEN_1649 = (1U & (IData)(__PVT___GEN_1626));
                }
            } else {
                __PVT___GEN_1648 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1649 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1648 = (0xfU & (IData)(__PVT___GEN_1625));
            __PVT___GEN_1649 = (1U & (IData)(__PVT___GEN_1626));
        }
    } else {
        __PVT___GEN_1648 = (0xfU & (IData)(__PVT___GEN_1625));
        __PVT___GEN_1649 = (1U & (IData)(__PVT___GEN_1626));
    }
    if ((2U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_2))) {
                    __PVT___GEN_1671 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1672 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1671 = (0xfU & (IData)(__PVT___GEN_1648));
                    __PVT___GEN_1672 = (1U & (IData)(__PVT___GEN_1649));
                }
            } else {
                __PVT___GEN_1671 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1672 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1671 = (0xfU & (IData)(__PVT___GEN_1648));
            __PVT___GEN_1672 = (1U & (IData)(__PVT___GEN_1649));
        }
    } else {
        __PVT___GEN_1671 = (0xfU & (IData)(__PVT___GEN_1648));
        __PVT___GEN_1672 = (1U & (IData)(__PVT___GEN_1649));
    }
    if ((3U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_3))) {
                    __PVT___GEN_1694 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1695 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1694 = (0xfU & (IData)(__PVT___GEN_1671));
                    __PVT___GEN_1695 = (1U & (IData)(__PVT___GEN_1672));
                }
            } else {
                __PVT___GEN_1694 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1695 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1694 = (0xfU & (IData)(__PVT___GEN_1671));
            __PVT___GEN_1695 = (1U & (IData)(__PVT___GEN_1672));
        }
    } else {
        __PVT___GEN_1694 = (0xfU & (IData)(__PVT___GEN_1671));
        __PVT___GEN_1695 = (1U & (IData)(__PVT___GEN_1672));
    }
    if ((4U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_4))) {
                    __PVT___GEN_1717 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1718 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1717 = (0xfU & (IData)(__PVT___GEN_1694));
                    __PVT___GEN_1718 = (1U & (IData)(__PVT___GEN_1695));
                }
            } else {
                __PVT___GEN_1717 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1718 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1717 = (0xfU & (IData)(__PVT___GEN_1694));
            __PVT___GEN_1718 = (1U & (IData)(__PVT___GEN_1695));
        }
    } else {
        __PVT___GEN_1717 = (0xfU & (IData)(__PVT___GEN_1694));
        __PVT___GEN_1718 = (1U & (IData)(__PVT___GEN_1695));
    }
    if ((5U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_5))) {
                    __PVT___GEN_1740 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1741 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1740 = (0xfU & (IData)(__PVT___GEN_1717));
                    __PVT___GEN_1741 = (1U & (IData)(__PVT___GEN_1718));
                }
            } else {
                __PVT___GEN_1740 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1741 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1740 = (0xfU & (IData)(__PVT___GEN_1717));
            __PVT___GEN_1741 = (1U & (IData)(__PVT___GEN_1718));
        }
    } else {
        __PVT___GEN_1740 = (0xfU & (IData)(__PVT___GEN_1717));
        __PVT___GEN_1741 = (1U & (IData)(__PVT___GEN_1718));
    }
    if ((6U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_6))) {
                    __PVT___GEN_1763 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1764 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1763 = (0xfU & (IData)(__PVT___GEN_1740));
                    __PVT___GEN_1764 = (1U & (IData)(__PVT___GEN_1741));
                }
            } else {
                __PVT___GEN_1763 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1764 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1763 = (0xfU & (IData)(__PVT___GEN_1740));
            __PVT___GEN_1764 = (1U & (IData)(__PVT___GEN_1741));
        }
    } else {
        __PVT___GEN_1763 = (0xfU & (IData)(__PVT___GEN_1740));
        __PVT___GEN_1764 = (1U & (IData)(__PVT___GEN_1741));
    }
    if ((7U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_7))) {
                    __PVT___GEN_1786 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1787 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1786 = (0xfU & (IData)(__PVT___GEN_1763));
                    __PVT___GEN_1787 = (1U & (IData)(__PVT___GEN_1764));
                }
            } else {
                __PVT___GEN_1786 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1787 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1786 = (0xfU & (IData)(__PVT___GEN_1763));
            __PVT___GEN_1787 = (1U & (IData)(__PVT___GEN_1764));
        }
    } else {
        __PVT___GEN_1786 = (0xfU & (IData)(__PVT___GEN_1763));
        __PVT___GEN_1787 = (1U & (IData)(__PVT___GEN_1764));
    }
    if ((8U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_8))) {
                    __PVT___GEN_1809 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1810 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1809 = (0xfU & (IData)(__PVT___GEN_1786));
                    __PVT___GEN_1810 = (1U & (IData)(__PVT___GEN_1787));
                }
            } else {
                __PVT___GEN_1809 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1810 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1809 = (0xfU & (IData)(__PVT___GEN_1786));
            __PVT___GEN_1810 = (1U & (IData)(__PVT___GEN_1787));
        }
    } else {
        __PVT___GEN_1809 = (0xfU & (IData)(__PVT___GEN_1786));
        __PVT___GEN_1810 = (1U & (IData)(__PVT___GEN_1787));
    }
    if ((9U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_9))) {
                    __PVT___GEN_1832 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1833 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1832 = (0xfU & (IData)(__PVT___GEN_1809));
                    __PVT___GEN_1833 = (1U & (IData)(__PVT___GEN_1810));
                }
            } else {
                __PVT___GEN_1832 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1833 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1832 = (0xfU & (IData)(__PVT___GEN_1809));
            __PVT___GEN_1833 = (1U & (IData)(__PVT___GEN_1810));
        }
    } else {
        __PVT___GEN_1832 = (0xfU & (IData)(__PVT___GEN_1809));
        __PVT___GEN_1833 = (1U & (IData)(__PVT___GEN_1810));
    }
    if ((0xaU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_10))) {
                    __PVT___GEN_1855 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1856 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1855 = (0xfU & (IData)(__PVT___GEN_1832));
                    __PVT___GEN_1856 = (1U & (IData)(__PVT___GEN_1833));
                }
            } else {
                __PVT___GEN_1855 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1856 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1855 = (0xfU & (IData)(__PVT___GEN_1832));
            __PVT___GEN_1856 = (1U & (IData)(__PVT___GEN_1833));
        }
    } else {
        __PVT___GEN_1855 = (0xfU & (IData)(__PVT___GEN_1832));
        __PVT___GEN_1856 = (1U & (IData)(__PVT___GEN_1833));
    }
    if ((0xbU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_11))) {
                    __PVT___GEN_1878 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1879 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1878 = (0xfU & (IData)(__PVT___GEN_1855));
                    __PVT___GEN_1879 = (1U & (IData)(__PVT___GEN_1856));
                }
            } else {
                __PVT___GEN_1878 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1879 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1878 = (0xfU & (IData)(__PVT___GEN_1855));
            __PVT___GEN_1879 = (1U & (IData)(__PVT___GEN_1856));
        }
    } else {
        __PVT___GEN_1878 = (0xfU & (IData)(__PVT___GEN_1855));
        __PVT___GEN_1879 = (1U & (IData)(__PVT___GEN_1856));
    }
    if ((0xcU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_12))) {
                    __PVT___GEN_1901 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1902 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1901 = (0xfU & (IData)(__PVT___GEN_1878));
                    __PVT___GEN_1902 = (1U & (IData)(__PVT___GEN_1879));
                }
            } else {
                __PVT___GEN_1901 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1902 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1901 = (0xfU & (IData)(__PVT___GEN_1878));
            __PVT___GEN_1902 = (1U & (IData)(__PVT___GEN_1879));
        }
    } else {
        __PVT___GEN_1901 = (0xfU & (IData)(__PVT___GEN_1878));
        __PVT___GEN_1902 = (1U & (IData)(__PVT___GEN_1879));
    }
    if ((0xdU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_13))) {
                    __PVT___GEN_1924 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1925 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1924 = (0xfU & (IData)(__PVT___GEN_1901));
                    __PVT___GEN_1925 = (1U & (IData)(__PVT___GEN_1902));
                }
            } else {
                __PVT___GEN_1924 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1925 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1924 = (0xfU & (IData)(__PVT___GEN_1901));
            __PVT___GEN_1925 = (1U & (IData)(__PVT___GEN_1902));
        }
    } else {
        __PVT___GEN_1924 = (0xfU & (IData)(__PVT___GEN_1901));
        __PVT___GEN_1925 = (1U & (IData)(__PVT___GEN_1902));
    }
    if ((0xeU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_14))) {
                    vlSelfRef.__PVT___GEN_1947 = (0xfU 
                                                  & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    vlSelfRef.__PVT___GEN_1948 = (1U 
                                                  & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                                     >> 4U));
                } else {
                    vlSelfRef.__PVT___GEN_1947 = (0xfU 
                                                  & (IData)(__PVT___GEN_1924));
                    vlSelfRef.__PVT___GEN_1948 = (1U 
                                                  & (IData)(__PVT___GEN_1925));
                }
            } else {
                vlSelfRef.__PVT___GEN_1947 = (0xfU 
                                              & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                vlSelfRef.__PVT___GEN_1948 = (1U & 
                                              ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                               >> 4U));
            }
        } else {
            vlSelfRef.__PVT___GEN_1947 = (0xfU & (IData)(__PVT___GEN_1924));
            vlSelfRef.__PVT___GEN_1948 = (1U & (IData)(__PVT___GEN_1925));
        }
    } else {
        vlSelfRef.__PVT___GEN_1947 = (0xfU & (IData)(__PVT___GEN_1924));
        vlSelfRef.__PVT___GEN_1948 = (1U & (IData)(__PVT___GEN_1925));
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_GrantBufferFIFO___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__grantBuf__1(VTestTop_L2L3L2_GrantBufferFIFO* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_GrantBufferFIFO___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__grantBuf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_ha337dbbd_1_16;
    __VdfgRegularize_ha337dbbd_1_16 = 0;
    CData/*0:0*/ __VdfgRegularize_ha337dbbd_1_37;
    __VdfgRegularize_ha337dbbd_1_37 = 0;
    // Body
    vlSelfRef.__PVT___T_12 = ((IData)(vlSelfRef.io_d_task_ready) 
                              & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__d_arb__DOT____VdfgRegularize_h365a35c3_0_0) 
                                 | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__d_arb_io_in_2_valid)));
    vlSelfRef.io_toReqArb_blockSinkReqEntrance_blockA_s1 
        = (0x10U <= (0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_ha337dbbd_1_72) 
                              + (0xfU & ((IData)(vlSelfRef.__VdfgRegularize_ha337dbbd_1_73) 
                                         + (7U & ((3U 
                                                   & ((0U 
                                                       != (IData)(vlSelfRef.__PVT___block_valids_T_30)) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_valid) 
                                                       & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_channel) 
                                                          | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_channel) 
                                                             >> 2U))))) 
                                                  + 
                                                  (3U 
                                                   & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_status_vec_0_valid) 
                                                       & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                          | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                             >> 2U))) 
                                                      + 
                                                      (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_status_vec_1_valid) 
                                                        & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s4_bits_channel) 
                                                           | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s4_bits_channel) 
                                                              >> 2U))) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_status_vec_2_valid) 
                                                        & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_channel) 
                                                           | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_channel) 
                                                              >> 2U)))))))))))));
    __VdfgRegularize_ha337dbbd_1_16 = ((IData)(vlSelfRef.__PVT___T_12) 
                                       & (4U == (6U 
                                                 & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__d_arb_io_out_bits_task_opcode))));
    __VdfgRegularize_ha337dbbd_1_37 = ((IData)(vlSelfRef.__PVT___T_12) 
                                       & (2U != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__d_arb_io_out_bits_task_opcode)));
    if (__VdfgRegularize_ha337dbbd_1_16) {
        vlSelfRef.__PVT___GEN_64 = ((0U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_0_valid));
        vlSelfRef.__PVT___GEN_65 = ((1U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_1_valid));
        vlSelfRef.__PVT___GEN_66 = ((2U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_2_valid));
        vlSelfRef.__PVT___GEN_67 = ((3U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_3_valid));
        vlSelfRef.__PVT___GEN_68 = ((4U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_4_valid));
        vlSelfRef.__PVT___GEN_69 = ((5U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_5_valid));
        vlSelfRef.__PVT___GEN_70 = ((6U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_6_valid));
        vlSelfRef.__PVT___GEN_71 = ((7U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_7_valid));
        vlSelfRef.__PVT___GEN_72 = ((8U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_8_valid));
        vlSelfRef.__PVT___GEN_73 = ((9U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_9_valid));
        vlSelfRef.__PVT___GEN_74 = ((0xaU == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_10_valid));
        vlSelfRef.__PVT___GEN_75 = ((0xbU == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_11_valid));
        vlSelfRef.__PVT___GEN_76 = ((0xcU == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_12_valid));
        vlSelfRef.__PVT___GEN_77 = ((0xdU == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_13_valid));
        vlSelfRef.__PVT___GEN_78 = ((0xeU == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_14_valid));
        vlSelfRef.__PVT___GEN_79 = ((0xfU == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_15_valid));
    } else {
        vlSelfRef.__PVT___GEN_64 = vlSelfRef.__PVT__inflight_grant_0_valid;
        vlSelfRef.__PVT___GEN_65 = vlSelfRef.__PVT__inflight_grant_1_valid;
        vlSelfRef.__PVT___GEN_66 = vlSelfRef.__PVT__inflight_grant_2_valid;
        vlSelfRef.__PVT___GEN_67 = vlSelfRef.__PVT__inflight_grant_3_valid;
        vlSelfRef.__PVT___GEN_68 = vlSelfRef.__PVT__inflight_grant_4_valid;
        vlSelfRef.__PVT___GEN_69 = vlSelfRef.__PVT__inflight_grant_5_valid;
        vlSelfRef.__PVT___GEN_70 = vlSelfRef.__PVT__inflight_grant_6_valid;
        vlSelfRef.__PVT___GEN_71 = vlSelfRef.__PVT__inflight_grant_7_valid;
        vlSelfRef.__PVT___GEN_72 = vlSelfRef.__PVT__inflight_grant_8_valid;
        vlSelfRef.__PVT___GEN_73 = vlSelfRef.__PVT__inflight_grant_9_valid;
        vlSelfRef.__PVT___GEN_74 = vlSelfRef.__PVT__inflight_grant_10_valid;
        vlSelfRef.__PVT___GEN_75 = vlSelfRef.__PVT__inflight_grant_11_valid;
        vlSelfRef.__PVT___GEN_76 = vlSelfRef.__PVT__inflight_grant_12_valid;
        vlSelfRef.__PVT___GEN_77 = vlSelfRef.__PVT__inflight_grant_13_valid;
        vlSelfRef.__PVT___GEN_78 = vlSelfRef.__PVT__inflight_grant_14_valid;
        vlSelfRef.__PVT___GEN_79 = vlSelfRef.__PVT__inflight_grant_15_valid;
    }
    if (__VdfgRegularize_ha337dbbd_1_37) {
        vlSelfRef.__PVT___GEN_1090 = ((0U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_0_0));
        vlSelfRef.__PVT___GEN_1106 = ((0U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_0_1));
        vlSelfRef.__PVT___GEN_1091 = ((1U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_1_0));
        vlSelfRef.__PVT___GEN_1107 = ((1U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_1_1));
        vlSelfRef.__PVT___GEN_1092 = ((2U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_2_0));
        vlSelfRef.__PVT___GEN_1108 = ((2U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_2_1));
        vlSelfRef.__PVT___GEN_1093 = ((3U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_3_0));
        vlSelfRef.__PVT___GEN_1109 = ((3U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_3_1));
        vlSelfRef.__PVT___GEN_1094 = ((4U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_4_0));
        vlSelfRef.__PVT___GEN_1110 = ((4U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_4_1));
        vlSelfRef.__PVT___GEN_1095 = ((5U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_5_0));
        vlSelfRef.__PVT___GEN_1111 = ((5U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_5_1));
        vlSelfRef.__PVT___GEN_1096 = ((6U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_6_0));
        vlSelfRef.__PVT___GEN_1112 = ((6U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_6_1));
        vlSelfRef.__PVT___GEN_1097 = ((7U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_7_0));
        vlSelfRef.__PVT___GEN_1113 = ((7U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_7_1));
        vlSelfRef.__PVT___GEN_1098 = ((8U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_8_0));
        vlSelfRef.__PVT___GEN_1114 = ((8U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_8_1));
        vlSelfRef.__PVT___GEN_1099 = ((9U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_9_0));
        vlSelfRef.__PVT___GEN_1115 = ((9U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_9_1));
        vlSelfRef.__PVT___GEN_1100 = ((0xaU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_10_0));
        vlSelfRef.__PVT___GEN_1116 = ((0xaU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_10_1));
        vlSelfRef.__PVT___GEN_1101 = ((0xbU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_11_0));
        vlSelfRef.__PVT___GEN_1117 = ((0xbU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_11_1));
        vlSelfRef.__PVT___GEN_1102 = ((0xcU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_12_0));
        vlSelfRef.__PVT___GEN_1118 = ((0xcU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_12_1));
        vlSelfRef.__PVT___GEN_1103 = ((0xdU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_13_0));
        vlSelfRef.__PVT___GEN_1119 = ((0xdU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_13_1));
        vlSelfRef.__PVT___GEN_1104 = ((0xeU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_14_0));
        vlSelfRef.__PVT___GEN_1120 = ((0xeU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_14_1));
        vlSelfRef.__PVT___GEN_1105 = ((0xfU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_15_0));
        vlSelfRef.__PVT___GEN_1121 = ((0xfU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_15_1));
    } else {
        vlSelfRef.__PVT___GEN_1090 = vlSelfRef.__PVT__beat_valids_0_0;
        vlSelfRef.__PVT___GEN_1106 = vlSelfRef.__PVT__beat_valids_0_1;
        vlSelfRef.__PVT___GEN_1091 = vlSelfRef.__PVT__beat_valids_1_0;
        vlSelfRef.__PVT___GEN_1107 = vlSelfRef.__PVT__beat_valids_1_1;
        vlSelfRef.__PVT___GEN_1092 = vlSelfRef.__PVT__beat_valids_2_0;
        vlSelfRef.__PVT___GEN_1108 = vlSelfRef.__PVT__beat_valids_2_1;
        vlSelfRef.__PVT___GEN_1093 = vlSelfRef.__PVT__beat_valids_3_0;
        vlSelfRef.__PVT___GEN_1109 = vlSelfRef.__PVT__beat_valids_3_1;
        vlSelfRef.__PVT___GEN_1094 = vlSelfRef.__PVT__beat_valids_4_0;
        vlSelfRef.__PVT___GEN_1110 = vlSelfRef.__PVT__beat_valids_4_1;
        vlSelfRef.__PVT___GEN_1095 = vlSelfRef.__PVT__beat_valids_5_0;
        vlSelfRef.__PVT___GEN_1111 = vlSelfRef.__PVT__beat_valids_5_1;
        vlSelfRef.__PVT___GEN_1096 = vlSelfRef.__PVT__beat_valids_6_0;
        vlSelfRef.__PVT___GEN_1112 = vlSelfRef.__PVT__beat_valids_6_1;
        vlSelfRef.__PVT___GEN_1097 = vlSelfRef.__PVT__beat_valids_7_0;
        vlSelfRef.__PVT___GEN_1113 = vlSelfRef.__PVT__beat_valids_7_1;
        vlSelfRef.__PVT___GEN_1098 = vlSelfRef.__PVT__beat_valids_8_0;
        vlSelfRef.__PVT___GEN_1114 = vlSelfRef.__PVT__beat_valids_8_1;
        vlSelfRef.__PVT___GEN_1099 = vlSelfRef.__PVT__beat_valids_9_0;
        vlSelfRef.__PVT___GEN_1115 = vlSelfRef.__PVT__beat_valids_9_1;
        vlSelfRef.__PVT___GEN_1100 = vlSelfRef.__PVT__beat_valids_10_0;
        vlSelfRef.__PVT___GEN_1116 = vlSelfRef.__PVT__beat_valids_10_1;
        vlSelfRef.__PVT___GEN_1101 = vlSelfRef.__PVT__beat_valids_11_0;
        vlSelfRef.__PVT___GEN_1117 = vlSelfRef.__PVT__beat_valids_11_1;
        vlSelfRef.__PVT___GEN_1102 = vlSelfRef.__PVT__beat_valids_12_0;
        vlSelfRef.__PVT___GEN_1118 = vlSelfRef.__PVT__beat_valids_12_1;
        vlSelfRef.__PVT___GEN_1103 = vlSelfRef.__PVT__beat_valids_13_0;
        vlSelfRef.__PVT___GEN_1119 = vlSelfRef.__PVT__beat_valids_13_1;
        vlSelfRef.__PVT___GEN_1104 = vlSelfRef.__PVT__beat_valids_14_0;
        vlSelfRef.__PVT___GEN_1120 = vlSelfRef.__PVT__beat_valids_14_1;
        vlSelfRef.__PVT___GEN_1105 = vlSelfRef.__PVT__beat_valids_15_0;
        vlSelfRef.__PVT___GEN_1121 = vlSelfRef.__PVT__beat_valids_15_1;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_GrantBufferFIFO___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf__0(VTestTop_L2L3L2_GrantBufferFIFO* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_GrantBufferFIFO___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT___block_valids_T;
    __PVT___block_valids_T = 0;
    CData/*1:0*/ __PVT___block_valids_T_2;
    __PVT___block_valids_T_2 = 0;
    CData/*1:0*/ __PVT___block_valids_T_4;
    __PVT___block_valids_T_4 = 0;
    CData/*1:0*/ __PVT___block_valids_T_6;
    __PVT___block_valids_T_6 = 0;
    CData/*1:0*/ __PVT___block_valids_T_8;
    __PVT___block_valids_T_8 = 0;
    CData/*1:0*/ __PVT___block_valids_T_10;
    __PVT___block_valids_T_10 = 0;
    CData/*1:0*/ __PVT___block_valids_T_12;
    __PVT___block_valids_T_12 = 0;
    CData/*1:0*/ __PVT___block_valids_T_14;
    __PVT___block_valids_T_14 = 0;
    CData/*1:0*/ __PVT___block_valids_T_16;
    __PVT___block_valids_T_16 = 0;
    CData/*1:0*/ __PVT___block_valids_T_18;
    __PVT___block_valids_T_18 = 0;
    CData/*1:0*/ __PVT___block_valids_T_20;
    __PVT___block_valids_T_20 = 0;
    CData/*1:0*/ __PVT___block_valids_T_22;
    __PVT___block_valids_T_22 = 0;
    CData/*1:0*/ __PVT___block_valids_T_24;
    __PVT___block_valids_T_24 = 0;
    CData/*1:0*/ __PVT___block_valids_T_26;
    __PVT___block_valids_T_26 = 0;
    CData/*1:0*/ __PVT___block_valids_T_28;
    __PVT___block_valids_T_28 = 0;
    CData/*7:0*/ __PVT__bufIdx_hi_1;
    __PVT__bufIdx_hi_1 = 0;
    CData/*7:0*/ __PVT___bufIdx_T_2;
    __PVT___bufIdx_T_2 = 0;
    CData/*3:0*/ __PVT___bufIdx_T_4;
    __PVT___bufIdx_T_4 = 0;
    CData/*3:0*/ __PVT___GEN_1625;
    __PVT___GEN_1625 = 0;
    CData/*0:0*/ __PVT___GEN_1626;
    __PVT___GEN_1626 = 0;
    CData/*3:0*/ __PVT___GEN_1648;
    __PVT___GEN_1648 = 0;
    CData/*0:0*/ __PVT___GEN_1649;
    __PVT___GEN_1649 = 0;
    CData/*3:0*/ __PVT___GEN_1671;
    __PVT___GEN_1671 = 0;
    CData/*0:0*/ __PVT___GEN_1672;
    __PVT___GEN_1672 = 0;
    CData/*3:0*/ __PVT___GEN_1694;
    __PVT___GEN_1694 = 0;
    CData/*0:0*/ __PVT___GEN_1695;
    __PVT___GEN_1695 = 0;
    CData/*3:0*/ __PVT___GEN_1717;
    __PVT___GEN_1717 = 0;
    CData/*0:0*/ __PVT___GEN_1718;
    __PVT___GEN_1718 = 0;
    CData/*3:0*/ __PVT___GEN_1740;
    __PVT___GEN_1740 = 0;
    CData/*0:0*/ __PVT___GEN_1741;
    __PVT___GEN_1741 = 0;
    CData/*3:0*/ __PVT___GEN_1763;
    __PVT___GEN_1763 = 0;
    CData/*0:0*/ __PVT___GEN_1764;
    __PVT___GEN_1764 = 0;
    CData/*3:0*/ __PVT___GEN_1786;
    __PVT___GEN_1786 = 0;
    CData/*0:0*/ __PVT___GEN_1787;
    __PVT___GEN_1787 = 0;
    CData/*3:0*/ __PVT___GEN_1809;
    __PVT___GEN_1809 = 0;
    CData/*0:0*/ __PVT___GEN_1810;
    __PVT___GEN_1810 = 0;
    CData/*3:0*/ __PVT___GEN_1832;
    __PVT___GEN_1832 = 0;
    CData/*0:0*/ __PVT___GEN_1833;
    __PVT___GEN_1833 = 0;
    CData/*3:0*/ __PVT___GEN_1855;
    __PVT___GEN_1855 = 0;
    CData/*0:0*/ __PVT___GEN_1856;
    __PVT___GEN_1856 = 0;
    CData/*3:0*/ __PVT___GEN_1878;
    __PVT___GEN_1878 = 0;
    CData/*0:0*/ __PVT___GEN_1879;
    __PVT___GEN_1879 = 0;
    CData/*3:0*/ __PVT___GEN_1901;
    __PVT___GEN_1901 = 0;
    CData/*0:0*/ __PVT___GEN_1902;
    __PVT___GEN_1902 = 0;
    CData/*3:0*/ __PVT___GEN_1924;
    __PVT___GEN_1924 = 0;
    CData/*0:0*/ __PVT___GEN_1925;
    __PVT___GEN_1925 = 0;
    CData/*1:0*/ __VdfgRegularize_ha337dbbd_1_70;
    __VdfgRegularize_ha337dbbd_1_70 = 0;
    CData/*2:0*/ __VdfgRegularize_ha337dbbd_1_71;
    __VdfgRegularize_ha337dbbd_1_71 = 0;
    // Body
    vlSelfRef.__PVT___beat_counters_0_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_0))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_0) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_1_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_1))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_1) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_2_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_2))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_2) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_3_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_3))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_3) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_4_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_4))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_4) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_5_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_5))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_5) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_6_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_6))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_6) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_7_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_7))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_7) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_8_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_8))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_8) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_9_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_9))
                                              ? 0U : 
                                             (0x1fU 
                                              & ((IData)(vlSelfRef.__PVT__beat_counters_9) 
                                                 - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_10_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_10))
                                               ? 0U
                                               : (0x1fU 
                                                  & ((IData)(vlSelfRef.__PVT__beat_counters_10) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_11_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_11))
                                               ? 0U
                                               : (0x1fU 
                                                  & ((IData)(vlSelfRef.__PVT__beat_counters_11) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_12_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_12))
                                               ? 0U
                                               : (0x1fU 
                                                  & ((IData)(vlSelfRef.__PVT__beat_counters_12) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_13_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_13))
                                               ? 0U
                                               : (0x1fU 
                                                  & ((IData)(vlSelfRef.__PVT__beat_counters_13) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_14_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_14))
                                               ? 0U
                                               : (0x1fU 
                                                  & ((IData)(vlSelfRef.__PVT__beat_counters_14) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT___beat_counters_15_T_3 = ((0U == (IData)(vlSelfRef.__PVT__beat_counters_15))
                                               ? 0U
                                               : (0x1fU 
                                                  & ((IData)(vlSelfRef.__PVT__beat_counters_15) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT___timers_0_T_1 = (1ULL + vlSelfRef.__PVT__timers_0);
    vlSelfRef.__PVT___timers_1_T_1 = (1ULL + vlSelfRef.__PVT__timers_1);
    vlSelfRef.__PVT___timers_2_T_1 = (1ULL + vlSelfRef.__PVT__timers_2);
    vlSelfRef.__PVT___timers_3_T_1 = (1ULL + vlSelfRef.__PVT__timers_3);
    vlSelfRef.__PVT___timers_4_T_1 = (1ULL + vlSelfRef.__PVT__timers_4);
    vlSelfRef.__PVT___timers_5_T_1 = (1ULL + vlSelfRef.__PVT__timers_5);
    vlSelfRef.__PVT___timers_6_T_1 = (1ULL + vlSelfRef.__PVT__timers_6);
    vlSelfRef.__PVT___timers_7_T_1 = (1ULL + vlSelfRef.__PVT__timers_7);
    vlSelfRef.__PVT___timers_8_T_1 = (1ULL + vlSelfRef.__PVT__timers_8);
    vlSelfRef.__PVT___timers_9_T_1 = (1ULL + vlSelfRef.__PVT__timers_9);
    vlSelfRef.__PVT___timers_10_T_1 = (1ULL + vlSelfRef.__PVT__timers_10);
    vlSelfRef.__PVT___timers_11_T_1 = (1ULL + vlSelfRef.__PVT__timers_11);
    vlSelfRef.__PVT___timers_12_T_1 = (1ULL + vlSelfRef.__PVT__timers_12);
    vlSelfRef.__PVT___timers_13_T_1 = (1ULL + vlSelfRef.__PVT__timers_13);
    vlSelfRef.__PVT___timers_14_T_1 = (1ULL + vlSelfRef.__PVT__timers_14);
    vlSelfRef.__PVT___timers_15_T_1 = (1ULL + vlSelfRef.__PVT__timers_15);
    vlSelfRef.__PVT___globalCounter_T_1 = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__globalCounter)));
    vlSelfRef.__PVT___globalCounter_T_4 = (0x1fU & 
                                           ((IData)(vlSelfRef.__PVT__globalCounter) 
                                            - (IData)(1U)));
    vlSelfRef.__PVT___enqPtrExt_new_ptr_T_2 = (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (((IData)(vlSelfRef.__PVT__enqPtrExt_flag) 
                                                    << 4U) 
                                                   | (IData)(vlSelfRef.__PVT__enqPtrExt_value))));
    vlSelfRef.__PVT___T_790 = (0x1fU & ((0xfU & ((7U 
                                                  & ((3U 
                                                      & (((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_0)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_0_opcode))) 
                                                         + 
                                                         ((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_1)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_1_opcode))))) 
                                                     + 
                                                     (3U 
                                                      & (((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_2)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_2_opcode))) 
                                                         + 
                                                         ((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_3)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_3_opcode))))))) 
                                                 + 
                                                 (7U 
                                                  & ((3U 
                                                      & (((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_4)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_4_opcode))) 
                                                         + 
                                                         ((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_5)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_5_opcode))))) 
                                                     + 
                                                     (3U 
                                                      & (((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_6)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_6_opcode))) 
                                                         + 
                                                         ((3U 
                                                           == (IData)(vlSelfRef.__PVT__beat_counters_7)) 
                                                          & (5U 
                                                             == (IData)(vlSelfRef.__PVT__taskAll_7_opcode))))))))) 
                                        + (0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & (((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_8)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_8_opcode))) 
                                                           + 
                                                           ((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_9)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_9_opcode))))) 
                                                       + 
                                                       (3U 
                                                        & (((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_10)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_10_opcode))) 
                                                           + 
                                                           ((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_11)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_11_opcode))))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & (((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_12)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_12_opcode))) 
                                                           + 
                                                           ((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_13)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_13_opcode))))) 
                                                       + 
                                                       (3U 
                                                        & (((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_14)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_14_opcode))) 
                                                           + 
                                                           ((3U 
                                                             == (IData)(vlSelfRef.__PVT__beat_counters_15)) 
                                                            & (5U 
                                                               == (IData)(vlSelfRef.__PVT__taskAll_15_opcode)))))))))));
    vlSelfRef.__PVT__insertIdx = ((IData)(vlSelfRef.__PVT__inflight_grant_0_valid)
                                   ? ((IData)(vlSelfRef.__PVT__inflight_grant_1_valid)
                                       ? ((IData)(vlSelfRef.__PVT__inflight_grant_2_valid)
                                           ? ((IData)(vlSelfRef.__PVT__inflight_grant_3_valid)
                                               ? ((IData)(vlSelfRef.__PVT__inflight_grant_4_valid)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__inflight_grant_5_valid)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__inflight_grant_6_valid)
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__inflight_grant_7_valid)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__inflight_grant_8_valid)
                                                       ? 
                                                      ((IData)(vlSelfRef.__PVT__inflight_grant_9_valid)
                                                        ? 
                                                       ((IData)(vlSelfRef.__PVT__inflight_grant_10_valid)
                                                         ? 
                                                        ((IData)(vlSelfRef.__PVT__inflight_grant_11_valid)
                                                          ? 
                                                         ((IData)(vlSelfRef.__PVT__inflight_grant_12_valid)
                                                           ? 
                                                          ((IData)(vlSelfRef.__PVT__inflight_grant_13_valid)
                                                            ? 
                                                           ((IData)(vlSelfRef.__PVT__inflight_grant_14_valid)
                                                             ? 0xfU
                                                             : 0xeU)
                                                            : 0xdU)
                                                           : 0xcU)
                                                          : 0xbU)
                                                         : 0xaU)
                                                        : 9U)
                                                       : 8U)
                                                      : 7U)
                                                     : 6U)
                                                    : 5U)
                                                   : 4U)
                                               : 3U)
                                           : 2U) : 1U)
                                   : 0U);
    vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2 = (0x1fU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (((IData)(vlSelfRef.__PVT__deqPtrExt_flag) 
                                                    << 4U) 
                                                   | (IData)(vlSelfRef.__PVT__deqPtrExt_value))));
    vlSelfRef.__PVT___block_valids_T_30 = (((IData)(vlSelfRef.__PVT__beat_valids_15_1) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__beat_valids_15_0));
    __PVT___block_valids_T_28 = (((IData)(vlSelfRef.__PVT__beat_valids_14_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_14_0));
    __PVT___block_valids_T_26 = (((IData)(vlSelfRef.__PVT__beat_valids_13_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_13_0));
    __PVT___block_valids_T_24 = (((IData)(vlSelfRef.__PVT__beat_valids_12_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_12_0));
    __PVT___block_valids_T_22 = (((IData)(vlSelfRef.__PVT__beat_valids_11_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_11_0));
    __PVT___block_valids_T_20 = (((IData)(vlSelfRef.__PVT__beat_valids_10_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_10_0));
    __PVT___block_valids_T_18 = (((IData)(vlSelfRef.__PVT__beat_valids_9_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_9_0));
    __PVT___block_valids_T_16 = (((IData)(vlSelfRef.__PVT__beat_valids_8_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_8_0));
    __PVT___block_valids_T_14 = (((IData)(vlSelfRef.__PVT__beat_valids_7_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_7_0));
    __PVT___block_valids_T_12 = (((IData)(vlSelfRef.__PVT__beat_valids_6_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_6_0));
    __PVT___block_valids_T_10 = (((IData)(vlSelfRef.__PVT__beat_valids_5_1) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_5_0));
    __PVT___block_valids_T_8 = (((IData)(vlSelfRef.__PVT__beat_valids_4_1) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_4_0));
    __PVT___block_valids_T_6 = (((IData)(vlSelfRef.__PVT__beat_valids_3_1) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_3_0));
    __PVT___block_valids_T_4 = (((IData)(vlSelfRef.__PVT__beat_valids_2_1) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_2_0));
    __PVT___block_valids_T_2 = (((IData)(vlSelfRef.__PVT__beat_valids_1_1) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_1_0));
    __PVT___block_valids_T = (((IData)(vlSelfRef.__PVT__beat_valids_0_1) 
                               << 1U) | (IData)(vlSelfRef.__PVT__beat_valids_0_0));
    if ((0xfU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_15_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_15_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_15_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_15_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_15_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_15_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_15_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(vlSelfRef.__PVT___block_valids_T_30)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_15_opcode)));
    } else if ((0xeU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_14_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_14_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_14_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_14_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_14_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_14_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_14_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_28)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_14_opcode)));
    } else if ((0xdU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_13_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_13_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_13_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_13_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_13_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_13_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_13_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_26)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_13_opcode)));
    } else if ((0xcU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_12_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_12_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_12_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_12_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_12_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_12_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_12_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_24)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_12_opcode)));
    } else if ((0xbU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_11_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_11_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_11_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_11_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_11_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_11_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_11_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_22)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_11_opcode)));
    } else if ((0xaU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_10_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_10_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_10_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_10_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_10_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_10_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_10_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_20)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_10_opcode)));
    } else if ((9U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_9_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_9_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_9_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_9_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_9_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_9_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_9_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_18)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_9_opcode)));
    } else if ((8U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_8_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_8_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_8_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_8_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_8_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_8_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_8_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_16)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_8_opcode)));
    } else if ((7U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_7_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_7_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_7_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_7_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_7_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_7_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_7_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_14)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_7_opcode)));
    } else if ((6U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_6_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_6_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_6_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_6_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_6_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_6_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_6_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_12)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_6_opcode)));
    } else if ((5U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_5_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_5_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_5_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_5_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_5_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_5_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_5_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_10)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_5_opcode)));
    } else if ((4U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_4_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_4_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_4_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_4_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_4_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_4_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_4_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_8)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_4_opcode)));
    } else if ((3U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_3_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_3_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_3_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_3_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_3_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_3_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_3_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_6)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_3_opcode)));
    } else if ((2U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_2_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_2_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_2_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_2_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_2_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_2_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_2_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_4)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_2_opcode)));
    } else if ((1U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_1_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_1_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_1_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_1_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_1_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_1_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_1_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T_2)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_1_opcode)));
    } else if ((0U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        vlSelfRef.io_d_bits_param = (3U & (IData)(vlSelfRef.__PVT__taskAll_0_param));
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__taskAll_0_sourceId;
        vlSelfRef.io_d_bits_sink = vlSelfRef.__PVT__taskAll_0_mshrId;
        vlSelfRef.io_d_bits_data = (0xffU & ((IData)(vlSelfRef.__PVT__beat_valids_0_0)
                                              ? (IData)(vlSelfRef.__PVT__dataAll_0_data)
                                              : ((IData)(vlSelfRef.__PVT__dataAll_0_data) 
                                                 >> 8U)));
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__taskAll_0_opcode;
        vlSelfRef.io_d_valid = ((0U != (IData)(__PVT___block_valids_T)) 
                                & (2U != (IData)(vlSelfRef.__PVT__taskAll_0_opcode)));
    } else {
        vlSelfRef.io_d_bits_param = (3U & 0U);
        vlSelfRef.io_d_bits_source = 0U;
        vlSelfRef.io_d_bits_sink = 0U;
        vlSelfRef.io_d_bits_data = (0xffU & 0U);
        vlSelfRef.io_d_bits_opcode = 0U;
        vlSelfRef.io_d_valid = 0U;
    }
    __PVT__bufIdx_hi_1 = ((((((IData)(vlSelfRef.__PVT__inflight_grant_15_valid) 
                              & ((IData)(vlSelfRef.__PVT__inflight_grant_15_bits_sink) 
                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink))) 
                             << 7U) | (((IData)(vlSelfRef.__PVT__inflight_grant_14_valid) 
                                        & ((IData)(vlSelfRef.__PVT__inflight_grant_14_bits_sink) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink))) 
                                       << 6U)) | ((
                                                   ((IData)(vlSelfRef.__PVT__inflight_grant_13_valid) 
                                                    & ((IData)(vlSelfRef.__PVT__inflight_grant_13_bits_sink) 
                                                       == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink))) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.__PVT__inflight_grant_12_valid) 
                                                      & ((IData)(vlSelfRef.__PVT__inflight_grant_12_bits_sink) 
                                                         == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink))) 
                                                     << 4U))) 
                          | (((((IData)(vlSelfRef.__PVT__inflight_grant_11_valid) 
                                & ((IData)(vlSelfRef.__PVT__inflight_grant_11_bits_sink) 
                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink))) 
                               << 3U) | (((IData)(vlSelfRef.__PVT__inflight_grant_10_valid) 
                                          & ((IData)(vlSelfRef.__PVT__inflight_grant_10_bits_sink) 
                                             == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink))) 
                                         << 2U)) | 
                             ((((IData)(vlSelfRef.__PVT__inflight_grant_9_valid) 
                                & ((IData)(vlSelfRef.__PVT__inflight_grant_9_bits_sink) 
                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink))) 
                               << 1U) | ((IData)(vlSelfRef.__PVT__inflight_grant_8_valid) 
                                         & ((IData)(vlSelfRef.__PVT__inflight_grant_8_bits_sink) 
                                            == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink))))));
    vlSelfRef.io_toReqArb_blockSinkReqEntrance_blockB_s1 
        = (((IData)(vlSelfRef.__PVT__inflight_grant_0_valid) 
            & (((IData)(vlSelfRef.__PVT__inflight_grant_0_bits_set) 
                == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
               & ((IData)(vlSelfRef.__PVT__inflight_grant_0_bits_tag) 
                  == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
           | (((IData)(vlSelfRef.__PVT__inflight_grant_1_valid) 
               & (((IData)(vlSelfRef.__PVT__inflight_grant_1_bits_set) 
                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                  & ((IData)(vlSelfRef.__PVT__inflight_grant_1_bits_tag) 
                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
              | (((IData)(vlSelfRef.__PVT__inflight_grant_2_valid) 
                  & (((IData)(vlSelfRef.__PVT__inflight_grant_2_bits_set) 
                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                     & ((IData)(vlSelfRef.__PVT__inflight_grant_2_bits_tag) 
                        == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                 | (((IData)(vlSelfRef.__PVT__inflight_grant_3_valid) 
                     & (((IData)(vlSelfRef.__PVT__inflight_grant_3_bits_set) 
                         == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                        & ((IData)(vlSelfRef.__PVT__inflight_grant_3_bits_tag) 
                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                    | (((IData)(vlSelfRef.__PVT__inflight_grant_4_valid) 
                        & (((IData)(vlSelfRef.__PVT__inflight_grant_4_bits_set) 
                            == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                           & ((IData)(vlSelfRef.__PVT__inflight_grant_4_bits_tag) 
                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                       | (((IData)(vlSelfRef.__PVT__inflight_grant_5_valid) 
                           & (((IData)(vlSelfRef.__PVT__inflight_grant_5_bits_set) 
                               == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                              & ((IData)(vlSelfRef.__PVT__inflight_grant_5_bits_tag) 
                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                          | (((IData)(vlSelfRef.__PVT__inflight_grant_6_valid) 
                              & (((IData)(vlSelfRef.__PVT__inflight_grant_6_bits_set) 
                                  == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                 & ((IData)(vlSelfRef.__PVT__inflight_grant_6_bits_tag) 
                                    == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                             | (((IData)(vlSelfRef.__PVT__inflight_grant_7_valid) 
                                 & (((IData)(vlSelfRef.__PVT__inflight_grant_7_bits_set) 
                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                    & ((IData)(vlSelfRef.__PVT__inflight_grant_7_bits_tag) 
                                       == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                | (((IData)(vlSelfRef.__PVT__inflight_grant_8_valid) 
                                    & (((IData)(vlSelfRef.__PVT__inflight_grant_8_bits_set) 
                                        == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                       & ((IData)(vlSelfRef.__PVT__inflight_grant_8_bits_tag) 
                                          == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                   | (((IData)(vlSelfRef.__PVT__inflight_grant_9_valid) 
                                       & (((IData)(vlSelfRef.__PVT__inflight_grant_9_bits_set) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                          & ((IData)(vlSelfRef.__PVT__inflight_grant_9_bits_tag) 
                                             == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                      | (((IData)(vlSelfRef.__PVT__inflight_grant_10_valid) 
                                          & (((IData)(vlSelfRef.__PVT__inflight_grant_10_bits_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                             & ((IData)(vlSelfRef.__PVT__inflight_grant_10_bits_tag) 
                                                == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                         | (((IData)(vlSelfRef.__PVT__inflight_grant_11_valid) 
                                             & (((IData)(vlSelfRef.__PVT__inflight_grant_11_bits_set) 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                                & ((IData)(vlSelfRef.__PVT__inflight_grant_11_bits_tag) 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                            | (((IData)(vlSelfRef.__PVT__inflight_grant_12_valid) 
                                                & (((IData)(vlSelfRef.__PVT__inflight_grant_12_bits_set) 
                                                    == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                                   & ((IData)(vlSelfRef.__PVT__inflight_grant_12_bits_tag) 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                               | (((IData)(vlSelfRef.__PVT__inflight_grant_13_valid) 
                                                   & (((IData)(vlSelfRef.__PVT__inflight_grant_13_bits_set) 
                                                       == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                                      & ((IData)(vlSelfRef.__PVT__inflight_grant_13_bits_tag) 
                                                         == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                                  | (((IData)(vlSelfRef.__PVT__inflight_grant_14_valid) 
                                                      & (((IData)(vlSelfRef.__PVT__inflight_grant_14_bits_set) 
                                                          == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                                         & ((IData)(vlSelfRef.__PVT__inflight_grant_14_bits_tag) 
                                                            == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))) 
                                                     | ((IData)(vlSelfRef.__PVT__inflight_grant_15_valid) 
                                                        & (((IData)(vlSelfRef.__PVT__inflight_grant_15_bits_set) 
                                                            == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1)) 
                                                           & ((IData)(vlSelfRef.__PVT__inflight_grant_15_bits_tag) 
                                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1)))))))))))))))))));
    vlSelfRef.__PVT__next_beatsOH_15 = (((IData)(vlSelfRef.__PVT__beat_valids_15_0)
                                          ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_15_1)
                                                   ? 1U
                                                   : 3U)) 
                                        & (IData)(vlSelfRef.__PVT___block_valids_T_30));
    vlSelfRef.__PVT__next_beatsOH_14 = (((IData)(vlSelfRef.__PVT__beat_valids_14_0)
                                          ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_14_1)
                                                   ? 1U
                                                   : 3U)) 
                                        & (IData)(__PVT___block_valids_T_28));
    vlSelfRef.__PVT__next_beatsOH_13 = (((IData)(vlSelfRef.__PVT__beat_valids_13_0)
                                          ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_13_1)
                                                   ? 1U
                                                   : 3U)) 
                                        & (IData)(__PVT___block_valids_T_26));
    vlSelfRef.__PVT__next_beatsOH_12 = (((IData)(vlSelfRef.__PVT__beat_valids_12_0)
                                          ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_12_1)
                                                   ? 1U
                                                   : 3U)) 
                                        & (IData)(__PVT___block_valids_T_24));
    vlSelfRef.__PVT__next_beatsOH_11 = (((IData)(vlSelfRef.__PVT__beat_valids_11_0)
                                          ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_11_1)
                                                   ? 1U
                                                   : 3U)) 
                                        & (IData)(__PVT___block_valids_T_22));
    vlSelfRef.__PVT__next_beatsOH_10 = (((IData)(vlSelfRef.__PVT__beat_valids_10_0)
                                          ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_10_1)
                                                   ? 1U
                                                   : 3U)) 
                                        & (IData)(__PVT___block_valids_T_20));
    vlSelfRef.__VdfgRegularize_ha337dbbd_1_73 = (7U 
                                                 & ((3U 
                                                     & ((0U 
                                                         != (IData)(__PVT___block_valids_T_20)) 
                                                        + 
                                                        (0U 
                                                         != (IData)(__PVT___block_valids_T_22)))) 
                                                    + 
                                                    (3U 
                                                     & ((0U 
                                                         != (IData)(__PVT___block_valids_T_24)) 
                                                        + 
                                                        ((0U 
                                                          != (IData)(__PVT___block_valids_T_26)) 
                                                         + 
                                                         (0U 
                                                          != (IData)(__PVT___block_valids_T_28)))))));
    vlSelfRef.__PVT__next_beatsOH_9 = (((IData)(vlSelfRef.__PVT__beat_valids_9_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_9_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_18));
    vlSelfRef.__PVT__next_beatsOH_8 = (((IData)(vlSelfRef.__PVT__beat_valids_8_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_8_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_16));
    vlSelfRef.__PVT__next_beatsOH_7 = (((IData)(vlSelfRef.__PVT__beat_valids_7_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_7_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_14));
    vlSelfRef.__PVT__next_beatsOH_6 = (((IData)(vlSelfRef.__PVT__beat_valids_6_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_6_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_12));
    vlSelfRef.__PVT__next_beatsOH_5 = (((IData)(vlSelfRef.__PVT__beat_valids_5_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_5_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_10));
    vlSelfRef.__PVT__next_beatsOH_4 = (((IData)(vlSelfRef.__PVT__beat_valids_4_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_4_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_8));
    vlSelfRef.__PVT__next_beatsOH_3 = (((IData)(vlSelfRef.__PVT__beat_valids_3_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_3_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_6));
    vlSelfRef.__PVT__next_beatsOH_2 = (((IData)(vlSelfRef.__PVT__beat_valids_2_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_2_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_4));
    vlSelfRef.__PVT__next_beatsOH_1 = (((IData)(vlSelfRef.__PVT__beat_valids_1_0)
                                         ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_1_1)
                                                  ? 1U
                                                  : 3U)) 
                                       & (IData)(__PVT___block_valids_T_2));
    vlSelfRef.__PVT__next_beatsOH = (((IData)(vlSelfRef.__PVT__beat_valids_0_0)
                                       ? 2U : ((IData)(vlSelfRef.__PVT__beat_valids_0_1)
                                                ? 1U
                                                : 3U)) 
                                     & (IData)(__PVT___block_valids_T));
    __VdfgRegularize_ha337dbbd_1_70 = (((IData)((0U 
                                                 != (IData)(__PVT___block_valids_T_2))) 
                                        << 1U) | (0U 
                                                  != (IData)(__PVT___block_valids_T)));
    __PVT___bufIdx_T_2 = ((IData)(__PVT__bufIdx_hi_1) 
                          | ((((((IData)(vlSelfRef.__PVT__inflight_grant_7_valid) 
                                 & ((IData)(vlSelfRef.__PVT__inflight_grant_7_bits_sink) 
                                    == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink))) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__inflight_grant_6_valid) 
                                           & ((IData)(vlSelfRef.__PVT__inflight_grant_6_bits_sink) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink))) 
                                          << 6U)) | 
                              ((((IData)(vlSelfRef.__PVT__inflight_grant_5_valid) 
                                 & ((IData)(vlSelfRef.__PVT__inflight_grant_5_bits_sink) 
                                    == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink))) 
                                << 5U) | (((IData)(vlSelfRef.__PVT__inflight_grant_4_valid) 
                                           & ((IData)(vlSelfRef.__PVT__inflight_grant_4_bits_sink) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink))) 
                                          << 4U))) 
                             | (((((IData)(vlSelfRef.__PVT__inflight_grant_3_valid) 
                                   & ((IData)(vlSelfRef.__PVT__inflight_grant_3_bits_sink) 
                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink))) 
                                  << 3U) | (((IData)(vlSelfRef.__PVT__inflight_grant_2_valid) 
                                             & ((IData)(vlSelfRef.__PVT__inflight_grant_2_bits_sink) 
                                                == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink))) 
                                            << 2U)) 
                                | ((((IData)(vlSelfRef.__PVT__inflight_grant_1_valid) 
                                     & ((IData)(vlSelfRef.__PVT__inflight_grant_1_bits_sink) 
                                        == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink))) 
                                    << 1U) | ((IData)(vlSelfRef.__PVT__inflight_grant_0_valid) 
                                              & ((IData)(vlSelfRef.__PVT__inflight_grant_0_bits_sink) 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))))));
    vlSelfRef.__PVT___T_803 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleIn_0_d_q_io_enq_ready) 
                               & (IData)(vlSelfRef.io_d_valid));
    __VdfgRegularize_ha337dbbd_1_71 = (((IData)((0U 
                                                 != (IData)(__PVT___block_valids_T_4))) 
                                        << 2U) | (IData)(__VdfgRegularize_ha337dbbd_1_70));
    __PVT___bufIdx_T_4 = (0xfU & (((IData)(__PVT___bufIdx_T_2) 
                                   >> 4U) | (IData)(__PVT___bufIdx_T_2)));
    if ((0U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH))) {
                    __PVT___GEN_1625 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1626 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1625 = (0xfU & (IData)(vlSelfRef.__PVT__deqPtrExt_value));
                    __PVT___GEN_1626 = (1U & (IData)(vlSelfRef.__PVT__deqPtrExt_flag));
                }
            } else {
                __PVT___GEN_1625 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1626 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1625 = (0xfU & (IData)(vlSelfRef.__PVT__deqPtrExt_value));
            __PVT___GEN_1626 = (1U & (IData)(vlSelfRef.__PVT__deqPtrExt_flag));
        }
    } else {
        __PVT___GEN_1625 = (0xfU & (IData)(vlSelfRef.__PVT__deqPtrExt_value));
        __PVT___GEN_1626 = (1U & (IData)(vlSelfRef.__PVT__deqPtrExt_flag));
    }
    vlSelfRef.io_d_task_ready = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT___block_valids_T_30)) 
                                          & ((0U != (IData)(__PVT___block_valids_T_28)) 
                                             & ((0U 
                                                 != (IData)(__PVT___block_valids_T_26)) 
                                                & ((0U 
                                                    != (IData)(__PVT___block_valids_T_24)) 
                                                   & ((0U 
                                                       != (IData)(__PVT___block_valids_T_22)) 
                                                      & ((0U 
                                                          != (IData)(__PVT___block_valids_T_20)) 
                                                         & ((0U 
                                                             != (IData)(__PVT___block_valids_T_18)) 
                                                            & ((0U 
                                                                != (IData)(__PVT___block_valids_T_16)) 
                                                               & ((0U 
                                                                   != (IData)(__PVT___block_valids_T_14)) 
                                                                  & ((0U 
                                                                      != (IData)(__PVT___block_valids_T_12)) 
                                                                     & ((0U 
                                                                         != (IData)(__PVT___block_valids_T_10)) 
                                                                        & ((0U 
                                                                            != (IData)(__PVT___block_valids_T_8)) 
                                                                           & ((0U 
                                                                               != (IData)(__PVT___block_valids_T_6)) 
                                                                              & (7U 
                                                                                == (IData)(__VdfgRegularize_ha337dbbd_1_71)))))))))))))))));
    vlSelfRef.__VdfgRegularize_ha337dbbd_1_72 = (0xfU 
                                                 & ((7U 
                                                     & ((3U 
                                                         & ((0U 
                                                             != (IData)(__PVT___block_valids_T)) 
                                                            + 
                                                            VL_SHIFTR_III(2,2,32, (IData)(__VdfgRegularize_ha337dbbd_1_70), 1U))) 
                                                        + 
                                                        (3U 
                                                         & ((7U 
                                                             & VL_SHIFTR_III(3,3,32, (IData)(__VdfgRegularize_ha337dbbd_1_71), 2U)) 
                                                            + 
                                                            ((0U 
                                                              != (IData)(__PVT___block_valids_T_6)) 
                                                             + 
                                                             (0U 
                                                              != (IData)(__PVT___block_valids_T_8))))))) 
                                                    + 
                                                    (7U 
                                                     & ((3U 
                                                         & ((0U 
                                                             != (IData)(__PVT___block_valids_T_10)) 
                                                            + 
                                                            (0U 
                                                             != (IData)(__PVT___block_valids_T_12)))) 
                                                        + 
                                                        (3U 
                                                         & ((0U 
                                                             != (IData)(__PVT___block_valids_T_14)) 
                                                            + 
                                                            ((0U 
                                                              != (IData)(__PVT___block_valids_T_16)) 
                                                             + 
                                                             (0U 
                                                              != (IData)(__PVT___block_valids_T_18)))))))));
    vlSelfRef.__PVT__bufIdx = (((((IData)((0U != (IData)(__PVT__bufIdx_hi_1))) 
                                  << 1U) | (0U != (0xfU 
                                                   & ((IData)(__PVT___bufIdx_T_2) 
                                                      >> 4U)))) 
                                << 2U) | (((IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(__PVT___bufIdx_T_4) 
                                                        >> 2U)))) 
                                           << 1U) | (IData)(
                                                            (0U 
                                                             != 
                                                             (0xaU 
                                                              & (IData)(__PVT___bufIdx_T_4))))));
    if ((1U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_1))) {
                    __PVT___GEN_1648 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1649 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1648 = (0xfU & (IData)(__PVT___GEN_1625));
                    __PVT___GEN_1649 = (1U & (IData)(__PVT___GEN_1626));
                }
            } else {
                __PVT___GEN_1648 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1649 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1648 = (0xfU & (IData)(__PVT___GEN_1625));
            __PVT___GEN_1649 = (1U & (IData)(__PVT___GEN_1626));
        }
    } else {
        __PVT___GEN_1648 = (0xfU & (IData)(__PVT___GEN_1625));
        __PVT___GEN_1649 = (1U & (IData)(__PVT___GEN_1626));
    }
    if ((2U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_2))) {
                    __PVT___GEN_1671 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1672 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1671 = (0xfU & (IData)(__PVT___GEN_1648));
                    __PVT___GEN_1672 = (1U & (IData)(__PVT___GEN_1649));
                }
            } else {
                __PVT___GEN_1671 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1672 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1671 = (0xfU & (IData)(__PVT___GEN_1648));
            __PVT___GEN_1672 = (1U & (IData)(__PVT___GEN_1649));
        }
    } else {
        __PVT___GEN_1671 = (0xfU & (IData)(__PVT___GEN_1648));
        __PVT___GEN_1672 = (1U & (IData)(__PVT___GEN_1649));
    }
    if ((3U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_3))) {
                    __PVT___GEN_1694 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1695 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1694 = (0xfU & (IData)(__PVT___GEN_1671));
                    __PVT___GEN_1695 = (1U & (IData)(__PVT___GEN_1672));
                }
            } else {
                __PVT___GEN_1694 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1695 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1694 = (0xfU & (IData)(__PVT___GEN_1671));
            __PVT___GEN_1695 = (1U & (IData)(__PVT___GEN_1672));
        }
    } else {
        __PVT___GEN_1694 = (0xfU & (IData)(__PVT___GEN_1671));
        __PVT___GEN_1695 = (1U & (IData)(__PVT___GEN_1672));
    }
    if ((4U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_4))) {
                    __PVT___GEN_1717 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1718 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1717 = (0xfU & (IData)(__PVT___GEN_1694));
                    __PVT___GEN_1718 = (1U & (IData)(__PVT___GEN_1695));
                }
            } else {
                __PVT___GEN_1717 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1718 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1717 = (0xfU & (IData)(__PVT___GEN_1694));
            __PVT___GEN_1718 = (1U & (IData)(__PVT___GEN_1695));
        }
    } else {
        __PVT___GEN_1717 = (0xfU & (IData)(__PVT___GEN_1694));
        __PVT___GEN_1718 = (1U & (IData)(__PVT___GEN_1695));
    }
    if ((5U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_5))) {
                    __PVT___GEN_1740 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1741 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1740 = (0xfU & (IData)(__PVT___GEN_1717));
                    __PVT___GEN_1741 = (1U & (IData)(__PVT___GEN_1718));
                }
            } else {
                __PVT___GEN_1740 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1741 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1740 = (0xfU & (IData)(__PVT___GEN_1717));
            __PVT___GEN_1741 = (1U & (IData)(__PVT___GEN_1718));
        }
    } else {
        __PVT___GEN_1740 = (0xfU & (IData)(__PVT___GEN_1717));
        __PVT___GEN_1741 = (1U & (IData)(__PVT___GEN_1718));
    }
    if ((6U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_6))) {
                    __PVT___GEN_1763 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1764 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1763 = (0xfU & (IData)(__PVT___GEN_1740));
                    __PVT___GEN_1764 = (1U & (IData)(__PVT___GEN_1741));
                }
            } else {
                __PVT___GEN_1763 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1764 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1763 = (0xfU & (IData)(__PVT___GEN_1740));
            __PVT___GEN_1764 = (1U & (IData)(__PVT___GEN_1741));
        }
    } else {
        __PVT___GEN_1763 = (0xfU & (IData)(__PVT___GEN_1740));
        __PVT___GEN_1764 = (1U & (IData)(__PVT___GEN_1741));
    }
    if ((7U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_7))) {
                    __PVT___GEN_1786 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1787 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1786 = (0xfU & (IData)(__PVT___GEN_1763));
                    __PVT___GEN_1787 = (1U & (IData)(__PVT___GEN_1764));
                }
            } else {
                __PVT___GEN_1786 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1787 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1786 = (0xfU & (IData)(__PVT___GEN_1763));
            __PVT___GEN_1787 = (1U & (IData)(__PVT___GEN_1764));
        }
    } else {
        __PVT___GEN_1786 = (0xfU & (IData)(__PVT___GEN_1763));
        __PVT___GEN_1787 = (1U & (IData)(__PVT___GEN_1764));
    }
    if ((8U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_8))) {
                    __PVT___GEN_1809 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1810 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1809 = (0xfU & (IData)(__PVT___GEN_1786));
                    __PVT___GEN_1810 = (1U & (IData)(__PVT___GEN_1787));
                }
            } else {
                __PVT___GEN_1809 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1810 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1809 = (0xfU & (IData)(__PVT___GEN_1786));
            __PVT___GEN_1810 = (1U & (IData)(__PVT___GEN_1787));
        }
    } else {
        __PVT___GEN_1809 = (0xfU & (IData)(__PVT___GEN_1786));
        __PVT___GEN_1810 = (1U & (IData)(__PVT___GEN_1787));
    }
    if ((9U == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_9))) {
                    __PVT___GEN_1832 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1833 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1832 = (0xfU & (IData)(__PVT___GEN_1809));
                    __PVT___GEN_1833 = (1U & (IData)(__PVT___GEN_1810));
                }
            } else {
                __PVT___GEN_1832 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1833 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1832 = (0xfU & (IData)(__PVT___GEN_1809));
            __PVT___GEN_1833 = (1U & (IData)(__PVT___GEN_1810));
        }
    } else {
        __PVT___GEN_1832 = (0xfU & (IData)(__PVT___GEN_1809));
        __PVT___GEN_1833 = (1U & (IData)(__PVT___GEN_1810));
    }
    if ((0xaU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_10))) {
                    __PVT___GEN_1855 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1856 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1855 = (0xfU & (IData)(__PVT___GEN_1832));
                    __PVT___GEN_1856 = (1U & (IData)(__PVT___GEN_1833));
                }
            } else {
                __PVT___GEN_1855 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1856 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1855 = (0xfU & (IData)(__PVT___GEN_1832));
            __PVT___GEN_1856 = (1U & (IData)(__PVT___GEN_1833));
        }
    } else {
        __PVT___GEN_1855 = (0xfU & (IData)(__PVT___GEN_1832));
        __PVT___GEN_1856 = (1U & (IData)(__PVT___GEN_1833));
    }
    if ((0xbU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_11))) {
                    __PVT___GEN_1878 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1879 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1878 = (0xfU & (IData)(__PVT___GEN_1855));
                    __PVT___GEN_1879 = (1U & (IData)(__PVT___GEN_1856));
                }
            } else {
                __PVT___GEN_1878 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1879 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1878 = (0xfU & (IData)(__PVT___GEN_1855));
            __PVT___GEN_1879 = (1U & (IData)(__PVT___GEN_1856));
        }
    } else {
        __PVT___GEN_1878 = (0xfU & (IData)(__PVT___GEN_1855));
        __PVT___GEN_1879 = (1U & (IData)(__PVT___GEN_1856));
    }
    if ((0xcU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_12))) {
                    __PVT___GEN_1901 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1902 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1901 = (0xfU & (IData)(__PVT___GEN_1878));
                    __PVT___GEN_1902 = (1U & (IData)(__PVT___GEN_1879));
                }
            } else {
                __PVT___GEN_1901 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1902 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1901 = (0xfU & (IData)(__PVT___GEN_1878));
            __PVT___GEN_1902 = (1U & (IData)(__PVT___GEN_1879));
        }
    } else {
        __PVT___GEN_1901 = (0xfU & (IData)(__PVT___GEN_1878));
        __PVT___GEN_1902 = (1U & (IData)(__PVT___GEN_1879));
    }
    if ((0xdU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_13))) {
                    __PVT___GEN_1924 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    __PVT___GEN_1925 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                              >> 4U));
                } else {
                    __PVT___GEN_1924 = (0xfU & (IData)(__PVT___GEN_1901));
                    __PVT___GEN_1925 = (1U & (IData)(__PVT___GEN_1902));
                }
            } else {
                __PVT___GEN_1924 = (0xfU & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                __PVT___GEN_1925 = (1U & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                          >> 4U));
            }
        } else {
            __PVT___GEN_1924 = (0xfU & (IData)(__PVT___GEN_1901));
            __PVT___GEN_1925 = (1U & (IData)(__PVT___GEN_1902));
        }
    } else {
        __PVT___GEN_1924 = (0xfU & (IData)(__PVT___GEN_1901));
        __PVT___GEN_1925 = (1U & (IData)(__PVT___GEN_1902));
    }
    if ((0xeU == (IData)(vlSelfRef.__PVT__deqPtrExt_value))) {
        if (vlSelfRef.__PVT___T_803) {
            if ((1U & (IData)(vlSelfRef.io_d_bits_opcode))) {
                if ((0U == (IData)(vlSelfRef.__PVT__next_beatsOH_14))) {
                    vlSelfRef.__PVT___GEN_1947 = (0xfU 
                                                  & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                    vlSelfRef.__PVT___GEN_1948 = (1U 
                                                  & ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                                     >> 4U));
                } else {
                    vlSelfRef.__PVT___GEN_1947 = (0xfU 
                                                  & (IData)(__PVT___GEN_1924));
                    vlSelfRef.__PVT___GEN_1948 = (1U 
                                                  & (IData)(__PVT___GEN_1925));
                }
            } else {
                vlSelfRef.__PVT___GEN_1947 = (0xfU 
                                              & (IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2));
                vlSelfRef.__PVT___GEN_1948 = (1U & 
                                              ((IData)(vlSelfRef.__PVT___deqPtrExt_new_ptr_T_2) 
                                               >> 4U));
            }
        } else {
            vlSelfRef.__PVT___GEN_1947 = (0xfU & (IData)(__PVT___GEN_1924));
            vlSelfRef.__PVT___GEN_1948 = (1U & (IData)(__PVT___GEN_1925));
        }
    } else {
        vlSelfRef.__PVT___GEN_1947 = (0xfU & (IData)(__PVT___GEN_1924));
        vlSelfRef.__PVT___GEN_1948 = (1U & (IData)(__PVT___GEN_1925));
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_GrantBufferFIFO___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf__1(VTestTop_L2L3L2_GrantBufferFIFO* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_GrantBufferFIFO___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_ha337dbbd_1_16;
    __VdfgRegularize_ha337dbbd_1_16 = 0;
    CData/*0:0*/ __VdfgRegularize_ha337dbbd_1_37;
    __VdfgRegularize_ha337dbbd_1_37 = 0;
    // Body
    vlSelfRef.__PVT___T_12 = ((IData)(vlSelfRef.io_d_task_ready) 
                              & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__d_arb__DOT____VdfgRegularize_h365a35c3_0_0) 
                                 | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__d_arb_io_in_2_valid)));
    vlSelfRef.io_toReqArb_blockSinkReqEntrance_blockA_s1 
        = (0x10U <= (0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_ha337dbbd_1_72) 
                              + (0xfU & ((IData)(vlSelfRef.__VdfgRegularize_ha337dbbd_1_73) 
                                         + (7U & ((3U 
                                                   & ((0U 
                                                       != (IData)(vlSelfRef.__PVT___block_valids_T_30)) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_valid) 
                                                       & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_channel) 
                                                          | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_channel) 
                                                             >> 2U))))) 
                                                  + 
                                                  (3U 
                                                   & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_status_vec_0_valid) 
                                                       & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                          | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                             >> 2U))) 
                                                      + 
                                                      (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_status_vec_1_valid) 
                                                        & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s4_bits_channel) 
                                                           | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s4_bits_channel) 
                                                              >> 2U))) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_status_vec_2_valid) 
                                                        & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_channel) 
                                                           | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_channel) 
                                                              >> 2U)))))))))))));
    __VdfgRegularize_ha337dbbd_1_16 = ((IData)(vlSelfRef.__PVT___T_12) 
                                       & (4U == (6U 
                                                 & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__d_arb_io_out_bits_task_opcode))));
    __VdfgRegularize_ha337dbbd_1_37 = ((IData)(vlSelfRef.__PVT___T_12) 
                                       & (2U != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__d_arb_io_out_bits_task_opcode)));
    if (__VdfgRegularize_ha337dbbd_1_16) {
        vlSelfRef.__PVT___GEN_64 = ((0U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_0_valid));
        vlSelfRef.__PVT___GEN_65 = ((1U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_1_valid));
        vlSelfRef.__PVT___GEN_66 = ((2U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_2_valid));
        vlSelfRef.__PVT___GEN_67 = ((3U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_3_valid));
        vlSelfRef.__PVT___GEN_68 = ((4U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_4_valid));
        vlSelfRef.__PVT___GEN_69 = ((5U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_5_valid));
        vlSelfRef.__PVT___GEN_70 = ((6U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_6_valid));
        vlSelfRef.__PVT___GEN_71 = ((7U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_7_valid));
        vlSelfRef.__PVT___GEN_72 = ((8U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_8_valid));
        vlSelfRef.__PVT___GEN_73 = ((9U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_9_valid));
        vlSelfRef.__PVT___GEN_74 = ((0xaU == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_10_valid));
        vlSelfRef.__PVT___GEN_75 = ((0xbU == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_11_valid));
        vlSelfRef.__PVT___GEN_76 = ((0xcU == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_12_valid));
        vlSelfRef.__PVT___GEN_77 = ((0xdU == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_13_valid));
        vlSelfRef.__PVT___GEN_78 = ((0xeU == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_14_valid));
        vlSelfRef.__PVT___GEN_79 = ((0xfU == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflight_grant_15_valid));
    } else {
        vlSelfRef.__PVT___GEN_64 = vlSelfRef.__PVT__inflight_grant_0_valid;
        vlSelfRef.__PVT___GEN_65 = vlSelfRef.__PVT__inflight_grant_1_valid;
        vlSelfRef.__PVT___GEN_66 = vlSelfRef.__PVT__inflight_grant_2_valid;
        vlSelfRef.__PVT___GEN_67 = vlSelfRef.__PVT__inflight_grant_3_valid;
        vlSelfRef.__PVT___GEN_68 = vlSelfRef.__PVT__inflight_grant_4_valid;
        vlSelfRef.__PVT___GEN_69 = vlSelfRef.__PVT__inflight_grant_5_valid;
        vlSelfRef.__PVT___GEN_70 = vlSelfRef.__PVT__inflight_grant_6_valid;
        vlSelfRef.__PVT___GEN_71 = vlSelfRef.__PVT__inflight_grant_7_valid;
        vlSelfRef.__PVT___GEN_72 = vlSelfRef.__PVT__inflight_grant_8_valid;
        vlSelfRef.__PVT___GEN_73 = vlSelfRef.__PVT__inflight_grant_9_valid;
        vlSelfRef.__PVT___GEN_74 = vlSelfRef.__PVT__inflight_grant_10_valid;
        vlSelfRef.__PVT___GEN_75 = vlSelfRef.__PVT__inflight_grant_11_valid;
        vlSelfRef.__PVT___GEN_76 = vlSelfRef.__PVT__inflight_grant_12_valid;
        vlSelfRef.__PVT___GEN_77 = vlSelfRef.__PVT__inflight_grant_13_valid;
        vlSelfRef.__PVT___GEN_78 = vlSelfRef.__PVT__inflight_grant_14_valid;
        vlSelfRef.__PVT___GEN_79 = vlSelfRef.__PVT__inflight_grant_15_valid;
    }
    if (__VdfgRegularize_ha337dbbd_1_37) {
        vlSelfRef.__PVT___GEN_1090 = ((0U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_0_0));
        vlSelfRef.__PVT___GEN_1106 = ((0U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_0_1));
        vlSelfRef.__PVT___GEN_1091 = ((1U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_1_0));
        vlSelfRef.__PVT___GEN_1107 = ((1U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_1_1));
        vlSelfRef.__PVT___GEN_1092 = ((2U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_2_0));
        vlSelfRef.__PVT___GEN_1108 = ((2U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_2_1));
        vlSelfRef.__PVT___GEN_1093 = ((3U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_3_0));
        vlSelfRef.__PVT___GEN_1109 = ((3U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_3_1));
        vlSelfRef.__PVT___GEN_1094 = ((4U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_4_0));
        vlSelfRef.__PVT___GEN_1110 = ((4U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_4_1));
        vlSelfRef.__PVT___GEN_1095 = ((5U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_5_0));
        vlSelfRef.__PVT___GEN_1111 = ((5U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_5_1));
        vlSelfRef.__PVT___GEN_1096 = ((6U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_6_0));
        vlSelfRef.__PVT___GEN_1112 = ((6U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_6_1));
        vlSelfRef.__PVT___GEN_1097 = ((7U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_7_0));
        vlSelfRef.__PVT___GEN_1113 = ((7U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_7_1));
        vlSelfRef.__PVT___GEN_1098 = ((8U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_8_0));
        vlSelfRef.__PVT___GEN_1114 = ((8U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_8_1));
        vlSelfRef.__PVT___GEN_1099 = ((9U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_9_0));
        vlSelfRef.__PVT___GEN_1115 = ((9U == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_9_1));
        vlSelfRef.__PVT___GEN_1100 = ((0xaU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_10_0));
        vlSelfRef.__PVT___GEN_1116 = ((0xaU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_10_1));
        vlSelfRef.__PVT___GEN_1101 = ((0xbU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_11_0));
        vlSelfRef.__PVT___GEN_1117 = ((0xbU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_11_1));
        vlSelfRef.__PVT___GEN_1102 = ((0xcU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_12_0));
        vlSelfRef.__PVT___GEN_1118 = ((0xcU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_12_1));
        vlSelfRef.__PVT___GEN_1103 = ((0xdU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_13_0));
        vlSelfRef.__PVT___GEN_1119 = ((0xdU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_13_1));
        vlSelfRef.__PVT___GEN_1104 = ((0xeU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_14_0));
        vlSelfRef.__PVT___GEN_1120 = ((0xeU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_14_1));
        vlSelfRef.__PVT___GEN_1105 = ((0xfU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_15_0));
        vlSelfRef.__PVT___GEN_1121 = ((0xfU == (IData)(vlSelfRef.__PVT__enqPtrExt_value)) 
                                      | (IData)(vlSelfRef.__PVT__beat_valids_15_1));
    } else {
        vlSelfRef.__PVT___GEN_1090 = vlSelfRef.__PVT__beat_valids_0_0;
        vlSelfRef.__PVT___GEN_1106 = vlSelfRef.__PVT__beat_valids_0_1;
        vlSelfRef.__PVT___GEN_1091 = vlSelfRef.__PVT__beat_valids_1_0;
        vlSelfRef.__PVT___GEN_1107 = vlSelfRef.__PVT__beat_valids_1_1;
        vlSelfRef.__PVT___GEN_1092 = vlSelfRef.__PVT__beat_valids_2_0;
        vlSelfRef.__PVT___GEN_1108 = vlSelfRef.__PVT__beat_valids_2_1;
        vlSelfRef.__PVT___GEN_1093 = vlSelfRef.__PVT__beat_valids_3_0;
        vlSelfRef.__PVT___GEN_1109 = vlSelfRef.__PVT__beat_valids_3_1;
        vlSelfRef.__PVT___GEN_1094 = vlSelfRef.__PVT__beat_valids_4_0;
        vlSelfRef.__PVT___GEN_1110 = vlSelfRef.__PVT__beat_valids_4_1;
        vlSelfRef.__PVT___GEN_1095 = vlSelfRef.__PVT__beat_valids_5_0;
        vlSelfRef.__PVT___GEN_1111 = vlSelfRef.__PVT__beat_valids_5_1;
        vlSelfRef.__PVT___GEN_1096 = vlSelfRef.__PVT__beat_valids_6_0;
        vlSelfRef.__PVT___GEN_1112 = vlSelfRef.__PVT__beat_valids_6_1;
        vlSelfRef.__PVT___GEN_1097 = vlSelfRef.__PVT__beat_valids_7_0;
        vlSelfRef.__PVT___GEN_1113 = vlSelfRef.__PVT__beat_valids_7_1;
        vlSelfRef.__PVT___GEN_1098 = vlSelfRef.__PVT__beat_valids_8_0;
        vlSelfRef.__PVT___GEN_1114 = vlSelfRef.__PVT__beat_valids_8_1;
        vlSelfRef.__PVT___GEN_1099 = vlSelfRef.__PVT__beat_valids_9_0;
        vlSelfRef.__PVT___GEN_1115 = vlSelfRef.__PVT__beat_valids_9_1;
        vlSelfRef.__PVT___GEN_1100 = vlSelfRef.__PVT__beat_valids_10_0;
        vlSelfRef.__PVT___GEN_1116 = vlSelfRef.__PVT__beat_valids_10_1;
        vlSelfRef.__PVT___GEN_1101 = vlSelfRef.__PVT__beat_valids_11_0;
        vlSelfRef.__PVT___GEN_1117 = vlSelfRef.__PVT__beat_valids_11_1;
        vlSelfRef.__PVT___GEN_1102 = vlSelfRef.__PVT__beat_valids_12_0;
        vlSelfRef.__PVT___GEN_1118 = vlSelfRef.__PVT__beat_valids_12_1;
        vlSelfRef.__PVT___GEN_1103 = vlSelfRef.__PVT__beat_valids_13_0;
        vlSelfRef.__PVT___GEN_1119 = vlSelfRef.__PVT__beat_valids_13_1;
        vlSelfRef.__PVT___GEN_1104 = vlSelfRef.__PVT__beat_valids_14_0;
        vlSelfRef.__PVT___GEN_1120 = vlSelfRef.__PVT__beat_valids_14_1;
        vlSelfRef.__PVT___GEN_1105 = vlSelfRef.__PVT__beat_valids_15_0;
        vlSelfRef.__PVT___GEN_1121 = vlSelfRef.__PVT__beat_valids_15_1;
    }
}
