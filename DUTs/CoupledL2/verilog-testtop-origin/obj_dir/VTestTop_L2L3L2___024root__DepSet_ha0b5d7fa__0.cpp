// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2___024root.h"

void VTestTop_L2L3L2___024root___ico_sequent__TOP__0(VTestTop_L2L3L2___024root* vlSelf);

void VTestTop_L2L3L2___024root___eval_ico(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VTestTop_L2L3L2___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VTestTop_L2L3L2___024root___ico_sequent__TOP__0(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_MPORT_en 
        = ((IData)(vlSelfRef.master_port_0_0_a_ready) 
           & (IData)(vlSelfRef.master_port_0_0_a_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer__DOT__bundleIn_0_b_q__DOT__do_deq 
        = ((IData)(vlSelfRef.master_port_0_0_b_valid) 
           & (IData)(vlSelfRef.master_port_0_0_b_ready));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_c_q__DOT__ram_opcode_MPORT_en 
        = ((IData)(vlSelfRef.master_port_0_0_c_ready) 
           & (IData)(vlSelfRef.master_port_0_0_c_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq 
        = ((IData)(vlSelfRef.master_port_0_0_d_valid) 
           & (IData)(vlSelfRef.master_port_0_0_d_ready));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q__DOT__ram_sink_MPORT_en 
        = ((IData)(vlSelfRef.master_port_0_0_e_ready) 
           & (IData)(vlSelfRef.master_port_0_0_e_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_MPORT_en 
        = ((IData)(vlSelfRef.master_port_1_0_a_ready) 
           & (IData)(vlSelfRef.master_port_1_0_a_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__do_deq 
        = ((IData)(vlSelfRef.master_port_1_0_b_valid) 
           & (IData)(vlSelfRef.master_port_1_0_b_ready));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_opcode_MPORT_en 
        = ((IData)(vlSelfRef.master_port_1_0_c_ready) 
           & (IData)(vlSelfRef.master_port_1_0_c_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq 
        = ((IData)(vlSelfRef.master_port_1_0_d_valid) 
           & (IData)(vlSelfRef.master_port_1_0_d_ready));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__ram_sink_MPORT_en 
        = ((IData)(vlSelfRef.master_port_1_0_e_ready) 
           & (IData)(vlSelfRef.master_port_1_0_e_valid));
}

void VTestTop_L2L3L2___024root___eval_triggers__ico(VTestTop_L2L3L2___024root* vlSelf);

bool VTestTop_L2L3L2___024root___eval_phase__ico(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VTestTop_L2L3L2___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VTestTop_L2L3L2___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VTestTop_L2L3L2___024root___eval_act(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_INLINE_OPT void VTestTop_L2L3L2___024root___nba_sequent__TOP__5(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___nba_sequent__TOP__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe_io_out_ready;
    TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe_io_out_ready = 0;
    CData/*0:0*/ TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_can_go;
    TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_can_go = 0;
    CData/*0:0*/ TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_0_io_enq_ready;
    TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_0_io_enq_ready = 0;
    CData/*0:0*/ TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_1_io_enq_ready;
    TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_1_io_enq_ready = 0;
    SData/*31:0*/ __Vdeeptemp_hbda6d1a2__0;
    SData/*31:0*/ __Vdeeptemp_h6e4e6bd5__0;
    SData/*31:0*/ __Vdeeptemp_h5fa5b2d1__0;
    SData/*31:0*/ __Vdeeptemp_ha34a6b86__0;
    SData/*31:0*/ __Vdeeptemp_h745e6930__0;
    SData/*31:0*/ __Vdeeptemp_h471a91cd__0;
    // Body
    __Vdeeptemp_hbda6d1a2__0 = ((0x76U == (0xffU & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_118)
                                 : ((0x75U == (0xffU 
                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_117)
                                     : ((0x74U == (0xffU 
                                                   & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                         ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_116)
                                         : ((0x73U 
                                             == (0xffU 
                                                 & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                             ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_115)
                                             : ((0x72U 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_114)
                                                 : 
                                                ((0x71U 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                  ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_113)
                                                  : 
                                                 ((0x70U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                   ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_112)
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                    ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_111)
                                                    : 
                                                   ((0x6eU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_110)
                                                     : 
                                                    ((0x6dU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                      ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_109)
                                                      : 
                                                     ((0x6cU 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                       ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_108)
                                                       : 
                                                      ((0x6bU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                        ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_107)
                                                        : 
                                                       ((0x6aU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                         ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_106)
                                                         : 
                                                        ((0x69U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                          ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_105)
                                                          : 
                                                         ((0x68U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                           ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_104)
                                                           : 
                                                          ((0x67U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                            ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_103)
                                                            : 
                                                           ((0x66U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                             ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_102)
                                                             : 
                                                            ((0x65U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                              ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_101)
                                                              : 
                                                             ((0x64U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                               ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_100)
                                                               : 
                                                              ((0x63U 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_99)
                                                                : 
                                                               ((0x62U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_98)
                                                                 : 
                                                                ((0x61U 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                  ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_97)
                                                                  : 
                                                                 ((0x60U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                   ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_96)
                                                                   : 
                                                                  ((0x5fU 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                    ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_95)
                                                                    : 
                                                                   ((0x5eU 
                                                                     == 
                                                                     (0xffU 
                                                                      & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_94)
                                                                     : 
                                                                    ((0x5dU 
                                                                      == 
                                                                      (0xffU 
                                                                       & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                      ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_93)
                                                                      : 
                                                                     ((0x5cU 
                                                                       == 
                                                                       (0xffU 
                                                                        & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                       ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_92)
                                                                       : 
                                                                      ((0x5bU 
                                                                        == 
                                                                        (0xffU 
                                                                         & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                        ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_91)
                                                                        : 
                                                                       ((0x5aU 
                                                                         == 
                                                                         (0xffU 
                                                                          & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                         ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_90)
                                                                         : 
                                                                        ((0x59U 
                                                                          == 
                                                                          (0xffU 
                                                                           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                          ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_89)
                                                                          : 
                                                                         ((0x58U 
                                                                           == 
                                                                           (0xffU 
                                                                            & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                           ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_88)
                                                                           : 
                                                                          ((0x57U 
                                                                            == 
                                                                            (0xffU 
                                                                             & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                            ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_87)
                                                                            : 
                                                                           ((0x56U 
                                                                             == 
                                                                             (0xffU 
                                                                              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                             ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_86)
                                                                             : 
                                                                            ((0x55U 
                                                                              == 
                                                                              (0xffU 
                                                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                              ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_85)
                                                                              : 
                                                                             ((0x54U 
                                                                               == 
                                                                               (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                               ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_84)
                                                                               : 
                                                                              ((0x53U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_83)
                                                                                : 
                                                                               ((0x52U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_82)
                                                                                 : 
                                                                                ((0x51U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_81)
                                                                                 : 
                                                                                ((0x50U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_80)
                                                                                 : 
                                                                                ((0x4fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_79)
                                                                                 : 
                                                                                ((0x4eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_78)
                                                                                 : 
                                                                                ((0x4dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_77)
                                                                                 : 
                                                                                ((0x4cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_76)
                                                                                 : 
                                                                                ((0x4bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_75)
                                                                                 : 
                                                                                ((0x4aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_74)
                                                                                 : 
                                                                                ((0x49U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_73)
                                                                                 : 
                                                                                ((0x48U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_72)
                                                                                 : 
                                                                                ((0x47U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_71)
                                                                                 : 
                                                                                ((0x46U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_70)
                                                                                 : 
                                                                                ((0x45U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_69)
                                                                                 : 
                                                                                ((0x44U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_68)
                                                                                 : 
                                                                                ((0x43U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_67)
                                                                                 : 
                                                                                ((0x42U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_66)
                                                                                 : 
                                                                                ((0x41U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_65)
                                                                                 : 
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_64)
                                                                                 : 
                                                                                ((0x3fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_63)
                                                                                 : 
                                                                                ((0x3eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_62)
                                                                                 : 
                                                                                ((0x3dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_61)
                                                                                 : 
                                                                                ((0x3cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_60)
                                                                                 : 
                                                                                ((0x3bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_59)
                                                                                 : 
                                                                                ((0x3aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_58)
                                                                                 : 
                                                                                ((0x39U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_57)
                                                                                 : 
                                                                                ((0x38U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_56)
                                                                                 : 
                                                                                ((0x37U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_55)
                                                                                 : 
                                                                                ((0x36U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_54)
                                                                                 : 
                                                                                ((0x35U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_53)
                                                                                 : 
                                                                                ((0x34U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_52)
                                                                                 : 
                                                                                ((0x33U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_51)
                                                                                 : 
                                                                                ((0x32U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_50)
                                                                                 : 
                                                                                ((0x31U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_49)
                                                                                 : 
                                                                                ((0x30U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_48)
                                                                                 : 
                                                                                ((0x2fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_47)
                                                                                 : 
                                                                                ((0x2eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_46)
                                                                                 : 
                                                                                ((0x2dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_45)
                                                                                 : 
                                                                                ((0x2cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_44)
                                                                                 : 
                                                                                ((0x2bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_43)
                                                                                 : 
                                                                                ((0x2aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_42)
                                                                                 : 
                                                                                ((0x29U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_41)
                                                                                 : 
                                                                                ((0x28U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_40)
                                                                                 : 
                                                                                ((0x27U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_39)
                                                                                 : 
                                                                                ((0x26U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_38)
                                                                                 : 
                                                                                ((0x25U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_37)
                                                                                 : 
                                                                                ((0x24U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_36)
                                                                                 : 
                                                                                ((0x23U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_35)
                                                                                 : 
                                                                                ((0x22U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_34)
                                                                                 : 
                                                                                ((0x21U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_33)
                                                                                 : 
                                                                                ((0x20U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_32)
                                                                                 : 
                                                                                ((0x1fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_31)
                                                                                 : 
                                                                                ((0x1eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_30)
                                                                                 : 
                                                                                ((0x1dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_29)
                                                                                 : 
                                                                                ((0x1cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_28)
                                                                                 : 
                                                                                ((0x1bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_27)
                                                                                 : 
                                                                                ((0x1aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_26)
                                                                                 : 
                                                                                ((0x19U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_25)
                                                                                 : 
                                                                                ((0x18U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_24)
                                                                                 : 
                                                                                ((0x17U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_23)
                                                                                 : 
                                                                                ((0x16U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_22)
                                                                                 : 
                                                                                ((0x15U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_21)
                                                                                 : 
                                                                                ((0x14U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_20)
                                                                                 : 
                                                                                ((0x13U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_19)
                                                                                 : 
                                                                                ((0x12U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_18)
                                                                                 : 
                                                                                ((0x11U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_17)
                                                                                 : 
                                                                                ((0x10U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_16)
                                                                                 : 
                                                                                ((0xfU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_1)
                                                                                 : (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp_h745e6930__0 = ((0xecU == (0xffU & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_236)
                                 : ((0xebU == (0xffU 
                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_235)
                                     : ((0xeaU == (0xffU 
                                                   & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                         ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_234)
                                         : ((0xe9U 
                                             == (0xffU 
                                                 & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                             ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_233)
                                             : ((0xe8U 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_232)
                                                 : 
                                                ((0xe7U 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                  ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_231)
                                                  : 
                                                 ((0xe6U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                   ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_230)
                                                   : 
                                                  ((0xe5U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                    ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_229)
                                                    : 
                                                   ((0xe4U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_228)
                                                     : 
                                                    ((0xe3U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                      ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_227)
                                                      : 
                                                     ((0xe2U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                       ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_226)
                                                       : 
                                                      ((0xe1U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                        ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_225)
                                                        : 
                                                       ((0xe0U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                         ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_224)
                                                         : 
                                                        ((0xdfU 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                          ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_223)
                                                          : 
                                                         ((0xdeU 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                           ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_222)
                                                           : 
                                                          ((0xddU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                            ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_221)
                                                            : 
                                                           ((0xdcU 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                             ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_220)
                                                             : 
                                                            ((0xdbU 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                              ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_219)
                                                              : 
                                                             ((0xdaU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                               ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_218)
                                                               : 
                                                              ((0xd9U 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_217)
                                                                : 
                                                               ((0xd8U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_216)
                                                                 : 
                                                                ((0xd7U 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                  ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_215)
                                                                  : 
                                                                 ((0xd6U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                   ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_214)
                                                                   : 
                                                                  ((0xd5U 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                    ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_213)
                                                                    : 
                                                                   ((0xd4U 
                                                                     == 
                                                                     (0xffU 
                                                                      & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_212)
                                                                     : 
                                                                    ((0xd3U 
                                                                      == 
                                                                      (0xffU 
                                                                       & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                      ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_211)
                                                                      : 
                                                                     ((0xd2U 
                                                                       == 
                                                                       (0xffU 
                                                                        & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                       ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_210)
                                                                       : 
                                                                      ((0xd1U 
                                                                        == 
                                                                        (0xffU 
                                                                         & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                        ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_209)
                                                                        : 
                                                                       ((0xd0U 
                                                                         == 
                                                                         (0xffU 
                                                                          & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                         ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_208)
                                                                         : 
                                                                        ((0xcfU 
                                                                          == 
                                                                          (0xffU 
                                                                           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                          ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_207)
                                                                          : 
                                                                         ((0xceU 
                                                                           == 
                                                                           (0xffU 
                                                                            & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                           ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_206)
                                                                           : 
                                                                          ((0xcdU 
                                                                            == 
                                                                            (0xffU 
                                                                             & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                            ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_205)
                                                                            : 
                                                                           ((0xccU 
                                                                             == 
                                                                             (0xffU 
                                                                              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                             ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_204)
                                                                             : 
                                                                            ((0xcbU 
                                                                              == 
                                                                              (0xffU 
                                                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                              ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_203)
                                                                              : 
                                                                             ((0xcaU 
                                                                               == 
                                                                               (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                               ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_202)
                                                                               : 
                                                                              ((0xc9U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_201)
                                                                                : 
                                                                               ((0xc8U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_200)
                                                                                 : 
                                                                                ((0xc7U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_199)
                                                                                 : 
                                                                                ((0xc6U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_198)
                                                                                 : 
                                                                                ((0xc5U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_197)
                                                                                 : 
                                                                                ((0xc4U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_196)
                                                                                 : 
                                                                                ((0xc3U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_195)
                                                                                 : 
                                                                                ((0xc2U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_194)
                                                                                 : 
                                                                                ((0xc1U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_193)
                                                                                 : 
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_192)
                                                                                 : 
                                                                                ((0xbfU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_191)
                                                                                 : 
                                                                                ((0xbeU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_190)
                                                                                 : 
                                                                                ((0xbdU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_189)
                                                                                 : 
                                                                                ((0xbcU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_188)
                                                                                 : 
                                                                                ((0xbbU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_187)
                                                                                 : 
                                                                                ((0xbaU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_186)
                                                                                 : 
                                                                                ((0xb9U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_185)
                                                                                 : 
                                                                                ((0xb8U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_184)
                                                                                 : 
                                                                                ((0xb7U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_183)
                                                                                 : 
                                                                                ((0xb6U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_182)
                                                                                 : 
                                                                                ((0xb5U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_181)
                                                                                 : 
                                                                                ((0xb4U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_180)
                                                                                 : 
                                                                                ((0xb3U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_179)
                                                                                 : 
                                                                                ((0xb2U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_178)
                                                                                 : 
                                                                                ((0xb1U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_177)
                                                                                 : 
                                                                                ((0xb0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_176)
                                                                                 : 
                                                                                ((0xafU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_175)
                                                                                 : 
                                                                                ((0xaeU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_174)
                                                                                 : 
                                                                                ((0xadU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_173)
                                                                                 : 
                                                                                ((0xacU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_172)
                                                                                 : 
                                                                                ((0xabU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_171)
                                                                                 : 
                                                                                ((0xaaU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_170)
                                                                                 : 
                                                                                ((0xa9U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_169)
                                                                                 : 
                                                                                ((0xa8U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_168)
                                                                                 : 
                                                                                ((0xa7U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_167)
                                                                                 : 
                                                                                ((0xa6U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_166)
                                                                                 : 
                                                                                ((0xa5U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_165)
                                                                                 : 
                                                                                ((0xa4U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_164)
                                                                                 : 
                                                                                ((0xa3U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_163)
                                                                                 : 
                                                                                ((0xa2U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_162)
                                                                                 : 
                                                                                ((0xa1U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_161)
                                                                                 : 
                                                                                ((0xa0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_160)
                                                                                 : 
                                                                                ((0x9fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_159)
                                                                                 : 
                                                                                ((0x9eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_158)
                                                                                 : 
                                                                                ((0x9dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_157)
                                                                                 : 
                                                                                ((0x9cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_156)
                                                                                 : 
                                                                                ((0x9bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_155)
                                                                                 : 
                                                                                ((0x9aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_154)
                                                                                 : 
                                                                                ((0x99U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_153)
                                                                                 : 
                                                                                ((0x98U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_152)
                                                                                 : 
                                                                                ((0x97U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_151)
                                                                                 : 
                                                                                ((0x96U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_150)
                                                                                 : 
                                                                                ((0x95U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_149)
                                                                                 : 
                                                                                ((0x94U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_148)
                                                                                 : 
                                                                                ((0x93U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_147)
                                                                                 : 
                                                                                ((0x92U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_146)
                                                                                 : 
                                                                                ((0x91U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_145)
                                                                                 : 
                                                                                ((0x90U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_144)
                                                                                 : 
                                                                                ((0x8fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_143)
                                                                                 : 
                                                                                ((0x8eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_142)
                                                                                 : 
                                                                                ((0x8dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_141)
                                                                                 : 
                                                                                ((0x8cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_140)
                                                                                 : 
                                                                                ((0x8bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_139)
                                                                                 : 
                                                                                ((0x8aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_138)
                                                                                 : 
                                                                                ((0x89U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_137)
                                                                                 : 
                                                                                ((0x88U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_136)
                                                                                 : 
                                                                                ((0x87U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_135)
                                                                                 : 
                                                                                ((0x86U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_134)
                                                                                 : 
                                                                                ((0x85U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_133)
                                                                                 : 
                                                                                ((0x84U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_132)
                                                                                 : 
                                                                                ((0x83U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_131)
                                                                                 : 
                                                                                ((0x82U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_130)
                                                                                 : 
                                                                                ((0x81U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_129)
                                                                                 : 
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_128)
                                                                                 : 
                                                                                ((0x7fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_127)
                                                                                 : 
                                                                                ((0x7eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_126)
                                                                                 : 
                                                                                ((0x7dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_125)
                                                                                 : 
                                                                                ((0x7cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_124)
                                                                                 : 
                                                                                ((0x7bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_123)
                                                                                 : 
                                                                                ((0x7aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_122)
                                                                                 : 
                                                                                ((0x79U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_121)
                                                                                 : 
                                                                                ((0x78U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_120)
                                                                                 : 
                                                                                ((0x77U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_119)
                                                                                 : __Vdeeptemp_hbda6d1a2__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp_h6e4e6bd5__0 = ((0xeeU == (0xffU & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_238)
                                 : ((0xedU == (0xffU 
                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_237)
                                     : __Vdeeptemp_h745e6930__0));
    __Vdeeptemp_h5fa5b2d1__0 = ((0x76U == (0xffU & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_118)
                                 : ((0x75U == (0xffU 
                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_117)
                                     : ((0x74U == (0xffU 
                                                   & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                         ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_116)
                                         : ((0x73U 
                                             == (0xffU 
                                                 & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                             ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_115)
                                             : ((0x72U 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_114)
                                                 : 
                                                ((0x71U 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                  ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_113)
                                                  : 
                                                 ((0x70U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                   ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_112)
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                    ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_111)
                                                    : 
                                                   ((0x6eU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_110)
                                                     : 
                                                    ((0x6dU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                      ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_109)
                                                      : 
                                                     ((0x6cU 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                       ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_108)
                                                       : 
                                                      ((0x6bU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                        ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_107)
                                                        : 
                                                       ((0x6aU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                         ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_106)
                                                         : 
                                                        ((0x69U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                          ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_105)
                                                          : 
                                                         ((0x68U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                           ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_104)
                                                           : 
                                                          ((0x67U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                            ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_103)
                                                            : 
                                                           ((0x66U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                             ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_102)
                                                             : 
                                                            ((0x65U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                              ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_101)
                                                              : 
                                                             ((0x64U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                               ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_100)
                                                               : 
                                                              ((0x63U 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_99)
                                                                : 
                                                               ((0x62U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_98)
                                                                 : 
                                                                ((0x61U 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                  ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_97)
                                                                  : 
                                                                 ((0x60U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                   ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_96)
                                                                   : 
                                                                  ((0x5fU 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                    ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_95)
                                                                    : 
                                                                   ((0x5eU 
                                                                     == 
                                                                     (0xffU 
                                                                      & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_94)
                                                                     : 
                                                                    ((0x5dU 
                                                                      == 
                                                                      (0xffU 
                                                                       & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                      ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_93)
                                                                      : 
                                                                     ((0x5cU 
                                                                       == 
                                                                       (0xffU 
                                                                        & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                       ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_92)
                                                                       : 
                                                                      ((0x5bU 
                                                                        == 
                                                                        (0xffU 
                                                                         & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                        ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_91)
                                                                        : 
                                                                       ((0x5aU 
                                                                         == 
                                                                         (0xffU 
                                                                          & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                         ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_90)
                                                                         : 
                                                                        ((0x59U 
                                                                          == 
                                                                          (0xffU 
                                                                           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                          ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_89)
                                                                          : 
                                                                         ((0x58U 
                                                                           == 
                                                                           (0xffU 
                                                                            & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                           ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_88)
                                                                           : 
                                                                          ((0x57U 
                                                                            == 
                                                                            (0xffU 
                                                                             & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                            ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_87)
                                                                            : 
                                                                           ((0x56U 
                                                                             == 
                                                                             (0xffU 
                                                                              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                             ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_86)
                                                                             : 
                                                                            ((0x55U 
                                                                              == 
                                                                              (0xffU 
                                                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                              ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_85)
                                                                              : 
                                                                             ((0x54U 
                                                                               == 
                                                                               (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                               ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_84)
                                                                               : 
                                                                              ((0x53U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_83)
                                                                                : 
                                                                               ((0x52U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_82)
                                                                                 : 
                                                                                ((0x51U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_81)
                                                                                 : 
                                                                                ((0x50U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_80)
                                                                                 : 
                                                                                ((0x4fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_79)
                                                                                 : 
                                                                                ((0x4eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_78)
                                                                                 : 
                                                                                ((0x4dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_77)
                                                                                 : 
                                                                                ((0x4cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_76)
                                                                                 : 
                                                                                ((0x4bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_75)
                                                                                 : 
                                                                                ((0x4aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_74)
                                                                                 : 
                                                                                ((0x49U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_73)
                                                                                 : 
                                                                                ((0x48U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_72)
                                                                                 : 
                                                                                ((0x47U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_71)
                                                                                 : 
                                                                                ((0x46U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_70)
                                                                                 : 
                                                                                ((0x45U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_69)
                                                                                 : 
                                                                                ((0x44U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_68)
                                                                                 : 
                                                                                ((0x43U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_67)
                                                                                 : 
                                                                                ((0x42U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_66)
                                                                                 : 
                                                                                ((0x41U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_65)
                                                                                 : 
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_64)
                                                                                 : 
                                                                                ((0x3fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_63)
                                                                                 : 
                                                                                ((0x3eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_62)
                                                                                 : 
                                                                                ((0x3dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_61)
                                                                                 : 
                                                                                ((0x3cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_60)
                                                                                 : 
                                                                                ((0x3bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_59)
                                                                                 : 
                                                                                ((0x3aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_58)
                                                                                 : 
                                                                                ((0x39U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_57)
                                                                                 : 
                                                                                ((0x38U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_56)
                                                                                 : 
                                                                                ((0x37U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_55)
                                                                                 : 
                                                                                ((0x36U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_54)
                                                                                 : 
                                                                                ((0x35U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_53)
                                                                                 : 
                                                                                ((0x34U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_52)
                                                                                 : 
                                                                                ((0x33U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_51)
                                                                                 : 
                                                                                ((0x32U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_50)
                                                                                 : 
                                                                                ((0x31U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_49)
                                                                                 : 
                                                                                ((0x30U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_48)
                                                                                 : 
                                                                                ((0x2fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_47)
                                                                                 : 
                                                                                ((0x2eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_46)
                                                                                 : 
                                                                                ((0x2dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_45)
                                                                                 : 
                                                                                ((0x2cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_44)
                                                                                 : 
                                                                                ((0x2bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_43)
                                                                                 : 
                                                                                ((0x2aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_42)
                                                                                 : 
                                                                                ((0x29U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_41)
                                                                                 : 
                                                                                ((0x28U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_40)
                                                                                 : 
                                                                                ((0x27U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_39)
                                                                                 : 
                                                                                ((0x26U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_38)
                                                                                 : 
                                                                                ((0x25U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_37)
                                                                                 : 
                                                                                ((0x24U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_36)
                                                                                 : 
                                                                                ((0x23U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_35)
                                                                                 : 
                                                                                ((0x22U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_34)
                                                                                 : 
                                                                                ((0x21U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_33)
                                                                                 : 
                                                                                ((0x20U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_32)
                                                                                 : 
                                                                                ((0x1fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_31)
                                                                                 : 
                                                                                ((0x1eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_30)
                                                                                 : 
                                                                                ((0x1dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_29)
                                                                                 : 
                                                                                ((0x1cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_28)
                                                                                 : 
                                                                                ((0x1bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_27)
                                                                                 : 
                                                                                ((0x1aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_26)
                                                                                 : 
                                                                                ((0x19U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_25)
                                                                                 : 
                                                                                ((0x18U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_24)
                                                                                 : 
                                                                                ((0x17U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_23)
                                                                                 : 
                                                                                ((0x16U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_22)
                                                                                 : 
                                                                                ((0x15U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_21)
                                                                                 : 
                                                                                ((0x14U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_20)
                                                                                 : 
                                                                                ((0x13U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_19)
                                                                                 : 
                                                                                ((0x12U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_18)
                                                                                 : 
                                                                                ((0x11U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_17)
                                                                                 : 
                                                                                ((0x10U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_16)
                                                                                 : 
                                                                                ((0xfU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_15)
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_14)
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_13)
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_12)
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_11)
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_10)
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_9)
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_8)
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_7)
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_6)
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_5)
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_4)
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_3)
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_2)
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_1)
                                                                                 : (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp_h471a91cd__0 = ((0xecU == (0xffU & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_236)
                                 : ((0xebU == (0xffU 
                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_235)
                                     : ((0xeaU == (0xffU 
                                                   & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                         ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_234)
                                         : ((0xe9U 
                                             == (0xffU 
                                                 & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                             ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_233)
                                             : ((0xe8U 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_232)
                                                 : 
                                                ((0xe7U 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                  ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_231)
                                                  : 
                                                 ((0xe6U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                   ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_230)
                                                   : 
                                                  ((0xe5U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                    ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_229)
                                                    : 
                                                   ((0xe4U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_228)
                                                     : 
                                                    ((0xe3U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                      ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_227)
                                                      : 
                                                     ((0xe2U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                       ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_226)
                                                       : 
                                                      ((0xe1U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                        ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_225)
                                                        : 
                                                       ((0xe0U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                         ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_224)
                                                         : 
                                                        ((0xdfU 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                          ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_223)
                                                          : 
                                                         ((0xdeU 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                           ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_222)
                                                           : 
                                                          ((0xddU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                            ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_221)
                                                            : 
                                                           ((0xdcU 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                             ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_220)
                                                             : 
                                                            ((0xdbU 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                              ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_219)
                                                              : 
                                                             ((0xdaU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                               ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_218)
                                                               : 
                                                              ((0xd9U 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_217)
                                                                : 
                                                               ((0xd8U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_216)
                                                                 : 
                                                                ((0xd7U 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                  ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_215)
                                                                  : 
                                                                 ((0xd6U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                   ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_214)
                                                                   : 
                                                                  ((0xd5U 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                    ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_213)
                                                                    : 
                                                                   ((0xd4U 
                                                                     == 
                                                                     (0xffU 
                                                                      & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_212)
                                                                     : 
                                                                    ((0xd3U 
                                                                      == 
                                                                      (0xffU 
                                                                       & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                      ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_211)
                                                                      : 
                                                                     ((0xd2U 
                                                                       == 
                                                                       (0xffU 
                                                                        & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                       ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_210)
                                                                       : 
                                                                      ((0xd1U 
                                                                        == 
                                                                        (0xffU 
                                                                         & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                        ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_209)
                                                                        : 
                                                                       ((0xd0U 
                                                                         == 
                                                                         (0xffU 
                                                                          & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                         ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_208)
                                                                         : 
                                                                        ((0xcfU 
                                                                          == 
                                                                          (0xffU 
                                                                           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                          ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_207)
                                                                          : 
                                                                         ((0xceU 
                                                                           == 
                                                                           (0xffU 
                                                                            & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                           ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_206)
                                                                           : 
                                                                          ((0xcdU 
                                                                            == 
                                                                            (0xffU 
                                                                             & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                            ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_205)
                                                                            : 
                                                                           ((0xccU 
                                                                             == 
                                                                             (0xffU 
                                                                              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                             ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_204)
                                                                             : 
                                                                            ((0xcbU 
                                                                              == 
                                                                              (0xffU 
                                                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                              ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_203)
                                                                              : 
                                                                             ((0xcaU 
                                                                               == 
                                                                               (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                               ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_202)
                                                                               : 
                                                                              ((0xc9U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_201)
                                                                                : 
                                                                               ((0xc8U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_200)
                                                                                 : 
                                                                                ((0xc7U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_199)
                                                                                 : 
                                                                                ((0xc6U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_198)
                                                                                 : 
                                                                                ((0xc5U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_197)
                                                                                 : 
                                                                                ((0xc4U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_196)
                                                                                 : 
                                                                                ((0xc3U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_195)
                                                                                 : 
                                                                                ((0xc2U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_194)
                                                                                 : 
                                                                                ((0xc1U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_193)
                                                                                 : 
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_192)
                                                                                 : 
                                                                                ((0xbfU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_191)
                                                                                 : 
                                                                                ((0xbeU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_190)
                                                                                 : 
                                                                                ((0xbdU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_189)
                                                                                 : 
                                                                                ((0xbcU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_188)
                                                                                 : 
                                                                                ((0xbbU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_187)
                                                                                 : 
                                                                                ((0xbaU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_186)
                                                                                 : 
                                                                                ((0xb9U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_185)
                                                                                 : 
                                                                                ((0xb8U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_184)
                                                                                 : 
                                                                                ((0xb7U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_183)
                                                                                 : 
                                                                                ((0xb6U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_182)
                                                                                 : 
                                                                                ((0xb5U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_181)
                                                                                 : 
                                                                                ((0xb4U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_180)
                                                                                 : 
                                                                                ((0xb3U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_179)
                                                                                 : 
                                                                                ((0xb2U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_178)
                                                                                 : 
                                                                                ((0xb1U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_177)
                                                                                 : 
                                                                                ((0xb0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_176)
                                                                                 : 
                                                                                ((0xafU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_175)
                                                                                 : 
                                                                                ((0xaeU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_174)
                                                                                 : 
                                                                                ((0xadU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_173)
                                                                                 : 
                                                                                ((0xacU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_172)
                                                                                 : 
                                                                                ((0xabU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_171)
                                                                                 : 
                                                                                ((0xaaU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_170)
                                                                                 : 
                                                                                ((0xa9U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_169)
                                                                                 : 
                                                                                ((0xa8U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_168)
                                                                                 : 
                                                                                ((0xa7U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_167)
                                                                                 : 
                                                                                ((0xa6U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_166)
                                                                                 : 
                                                                                ((0xa5U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_165)
                                                                                 : 
                                                                                ((0xa4U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_164)
                                                                                 : 
                                                                                ((0xa3U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_163)
                                                                                 : 
                                                                                ((0xa2U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_162)
                                                                                 : 
                                                                                ((0xa1U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_161)
                                                                                 : 
                                                                                ((0xa0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_160)
                                                                                 : 
                                                                                ((0x9fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_159)
                                                                                 : 
                                                                                ((0x9eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_158)
                                                                                 : 
                                                                                ((0x9dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_157)
                                                                                 : 
                                                                                ((0x9cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_156)
                                                                                 : 
                                                                                ((0x9bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_155)
                                                                                 : 
                                                                                ((0x9aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_154)
                                                                                 : 
                                                                                ((0x99U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_153)
                                                                                 : 
                                                                                ((0x98U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_152)
                                                                                 : 
                                                                                ((0x97U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_151)
                                                                                 : 
                                                                                ((0x96U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_150)
                                                                                 : 
                                                                                ((0x95U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_149)
                                                                                 : 
                                                                                ((0x94U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_148)
                                                                                 : 
                                                                                ((0x93U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_147)
                                                                                 : 
                                                                                ((0x92U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_146)
                                                                                 : 
                                                                                ((0x91U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_145)
                                                                                 : 
                                                                                ((0x90U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_144)
                                                                                 : 
                                                                                ((0x8fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_143)
                                                                                 : 
                                                                                ((0x8eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_142)
                                                                                 : 
                                                                                ((0x8dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_141)
                                                                                 : 
                                                                                ((0x8cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_140)
                                                                                 : 
                                                                                ((0x8bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_139)
                                                                                 : 
                                                                                ((0x8aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_138)
                                                                                 : 
                                                                                ((0x89U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_137)
                                                                                 : 
                                                                                ((0x88U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_136)
                                                                                 : 
                                                                                ((0x87U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_135)
                                                                                 : 
                                                                                ((0x86U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_134)
                                                                                 : 
                                                                                ((0x85U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_133)
                                                                                 : 
                                                                                ((0x84U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_132)
                                                                                 : 
                                                                                ((0x83U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_131)
                                                                                 : 
                                                                                ((0x82U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_130)
                                                                                 : 
                                                                                ((0x81U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_129)
                                                                                 : 
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_128)
                                                                                 : 
                                                                                ((0x7fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_127)
                                                                                 : 
                                                                                ((0x7eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_126)
                                                                                 : 
                                                                                ((0x7dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_125)
                                                                                 : 
                                                                                ((0x7cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_124)
                                                                                 : 
                                                                                ((0x7bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_123)
                                                                                 : 
                                                                                ((0x7aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_122)
                                                                                 : 
                                                                                ((0x79U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_121)
                                                                                 : 
                                                                                ((0x78U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_120)
                                                                                 : 
                                                                                ((0x77U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_119)
                                                                                 : __Vdeeptemp_h5fa5b2d1__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp_ha34a6b86__0 = ((0xeeU == (0xffU & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                 ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_238)
                                 : ((0xedU == (0xffU 
                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_237)
                                     : __Vdeeptemp_h471a91cd__0));
    vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__d_writer_io_bits_address 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__buffer_3__DOT__bundleIn_0_d_q__DOT__ram_opcode_MPORT_en)
            ? (QData)((IData)(((6U == (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_opcode))
                                ? ((0xffU == (0xffU 
                                              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                    ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_255)
                                    : ((0xfeU == (0xffU 
                                                  & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                        ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_254)
                                        : ((0xfdU == 
                                            (0xffU 
                                             & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                            ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_253)
                                            : ((0xfcU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_252)
                                                : (
                                                   (0xfbU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                    ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_251)
                                                    : 
                                                   ((0xfaU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_250)
                                                     : 
                                                    ((0xf9U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                      ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_249)
                                                      : 
                                                     ((0xf8U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                       ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_248)
                                                       : 
                                                      ((0xf7U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                        ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_247)
                                                        : 
                                                       ((0xf6U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                         ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_246)
                                                         : 
                                                        ((0xf5U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                          ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_245)
                                                          : 
                                                         ((0xf4U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                           ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_244)
                                                           : 
                                                          ((0xf3U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                            ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_243)
                                                            : 
                                                           ((0xf2U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                             ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_242)
                                                             : 
                                                            ((0xf1U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                              ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_241)
                                                              : 
                                                             ((0xf0U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                               ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_240)
                                                               : 
                                                              ((0xefU 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__c_d_addrs_239)
                                                                : __Vdeeptemp_h6e4e6bd5__0)))))))))))))))))
                                : ((0xffU == (0xffU 
                                              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                    ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_255)
                                    : ((0xfeU == (0xffU 
                                                  & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                        ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_254)
                                        : ((0xfdU == 
                                            (0xffU 
                                             & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                            ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_253)
                                            : ((0xfcU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_252)
                                                : (
                                                   (0xfbU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                    ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_251)
                                                    : 
                                                   ((0xfaU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                     ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_250)
                                                     : 
                                                    ((0xf9U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                      ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_249)
                                                      : 
                                                     ((0xf8U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                       ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_248)
                                                       : 
                                                      ((0xf7U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                        ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_247)
                                                        : 
                                                       ((0xf6U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                         ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_246)
                                                         : 
                                                        ((0xf5U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                          ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_245)
                                                          : 
                                                         ((0xf4U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                           ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_244)
                                                           : 
                                                          ((0xf3U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                            ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_243)
                                                            : 
                                                           ((0xf2U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                             ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_242)
                                                             : 
                                                            ((0xf1U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                              ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_241)
                                                              : 
                                                             ((0xf0U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                               ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_240)
                                                               : 
                                                              ((0xefU 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD_io_d_bits_source)))
                                                                ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__logger_3__DOT__a_d_addrs_239)
                                                                : __Vdeeptemp_ha34a6b86__0))))))))))))))))))))
            : 0ULL);
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s1_queue__DOT__do_deq 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s1_queue_io_deq_valid) 
           & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_full) 
              & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_req_useBypass) 
                 & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_needData) 
                    & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__out_1_ready)))));
    TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe_io_out_ready 
        = (vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_1__DOT__ram_needPb
           [0U] ? ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s4_ready) 
                   & (vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_1__DOT__ram_counter
                      [0U] | (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__out_ready)))
            : (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__out_ready));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_1__DOT__do_deq 
        = ((IData)(TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe_io_out_ready) 
           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_1__DOT__maybe_full));
    TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_1_io_enq_ready 
        = (1U & ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_1__DOT__maybe_full)) 
                 | (IData)(TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe_io_out_ready)));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pbQueue__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pbQueue__DOT__maybe_full)) 
               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pbQueue__DOT__ptr_match))) 
           & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_1__DOT__do_deq) 
              & (vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_1__DOT__ram_needPb
                 [0U] & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s4_ready))));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s4_latch 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_1__DOT__do_deq) 
           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s4_ready));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s3_queue_io_deq_ready 
        = ((IData)(TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe_io_out_ready) 
           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_1__DOT__do_deq));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_1__DOT__ram_counter_MPORT_en 
        = ((IData)(TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_1_io_enq_ready) 
           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_0__DOT__maybe_full));
    TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_0_io_enq_ready 
        = (1U & ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_0__DOT__maybe_full)) 
                 | (IData)(TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_1_io_enq_ready)));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT___GEN_70 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s4_latch) 
           | ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT____VdfgRegularize_h225cd346_2_2)) 
              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s4_full)));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s3_queue__DOT__ram_data_MPORT_en 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s3_queue__DOT__empty)
            ? ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s3_queue_io_deq_ready)) 
               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s3_queue__DOT___do_enq_T))
            : (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s3_queue__DOT___do_enq_T));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s3_queue__DOT__do_deq 
        = ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s3_queue__DOT__empty)) 
           & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s3_queue_io_deq_ready) 
              & ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s3_queue__DOT__empty)) 
                 | (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s3_queue_io_enq_valid_REG_2))));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_0__DOT__ram_counter_MPORT_en 
        = ((IData)(TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_0_io_enq_ready) 
           & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_full) 
              & ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_d_valid)) 
                 & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT___s2_can_go_T_1))));
    TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_can_go 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_d_valid)
            ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__out_1_ready)
            : ((IData)(TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__pipe__DOT__stages_0_io_enq_ready) 
               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT___s2_can_go_T_1)));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_ready 
        = (1U & ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_full)) 
                 | (IData)(TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_can_go)));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT___T_8 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s1_valid) 
           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_ready));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT___GEN_46 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT___T_8) 
           | ((~ ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_full) 
                  & (IData)(TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_can_go))) 
              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__sourceD__DOT__s2_full)));
}

void VTestTop_L2L3L2___024root___eval_triggers__act(VTestTop_L2L3L2___024root* vlSelf);

bool VTestTop_L2L3L2___024root___eval_phase__act(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTestTop_L2L3L2___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VTestTop_L2L3L2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VTestTop_L2L3L2___024root___eval_nba(VTestTop_L2L3L2___024root* vlSelf);

bool VTestTop_L2L3L2___024root___eval_phase__nba(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTestTop_L2L3L2___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTop_L2L3L2___024root___dump_triggers__ico(VTestTop_L2L3L2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTop_L2L3L2___024root___dump_triggers__nba(VTestTop_L2L3L2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTop_L2L3L2___024root___dump_triggers__act(VTestTop_L2L3L2___024root* vlSelf);
#endif  // VL_DEBUG

void VTestTop_L2L3L2___024root___eval(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VTestTop_L2L3L2___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("TestTop_L2L3L2.sv", 101973, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTestTop_L2L3L2___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTestTop_L2L3L2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("TestTop_L2L3L2.sv", 101973, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VTestTop_L2L3L2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("TestTop_L2L3L2.sv", 101973, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VTestTop_L2L3L2___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VTestTop_L2L3L2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTestTop_L2L3L2___024root___eval_debug_assertions(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_a_valid");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_bits_opcode 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_0_0_a_bits_opcode");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_bits_param 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_0_0_a_bits_param");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_bits_size 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_a_bits_size");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_bits_source 
                     & 0xe0U))) {
        Verilated::overWidthError("master_port_0_0_a_bits_source");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_bits_user_alias 
                     & 0xfcU))) {
        Verilated::overWidthError("master_port_0_0_a_bits_user_alias");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_bits_mask 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_a_bits_mask");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_bits_corrupt 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_a_bits_corrupt");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_b_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_b_ready");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_c_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_c_valid");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_c_bits_opcode 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_0_0_c_bits_opcode");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_c_bits_param 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_0_0_c_bits_param");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_c_bits_size 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_c_bits_size");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_c_bits_source 
                     & 0xe0U))) {
        Verilated::overWidthError("master_port_0_0_c_bits_source");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_c_bits_user_alias 
                     & 0xfcU))) {
        Verilated::overWidthError("master_port_0_0_c_bits_user_alias");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_c_bits_corrupt 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_c_bits_corrupt");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_d_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_d_ready");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_e_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_e_valid");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_a_valid");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_bits_opcode 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_1_0_a_bits_opcode");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_bits_param 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_1_0_a_bits_param");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_bits_size 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_a_bits_size");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_bits_source 
                     & 0xe0U))) {
        Verilated::overWidthError("master_port_1_0_a_bits_source");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_bits_user_alias 
                     & 0xfcU))) {
        Verilated::overWidthError("master_port_1_0_a_bits_user_alias");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_bits_mask 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_a_bits_mask");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_bits_corrupt 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_a_bits_corrupt");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_b_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_b_ready");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_c_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_c_valid");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_c_bits_opcode 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_1_0_c_bits_opcode");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_c_bits_param 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_1_0_c_bits_param");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_c_bits_size 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_c_bits_size");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_c_bits_source 
                     & 0xe0U))) {
        Verilated::overWidthError("master_port_1_0_c_bits_source");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_c_bits_user_alias 
                     & 0xfcU))) {
        Verilated::overWidthError("master_port_1_0_c_bits_user_alias");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_c_bits_corrupt 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_c_bits_corrupt");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_d_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_d_ready");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_e_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_e_valid");}
}
#endif  // VL_DEBUG
