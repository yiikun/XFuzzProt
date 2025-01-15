// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_MSHRBuffer.h"
#include "VTestTop_L2L3L2__Syms.h"

VL_ATTR_COLD void VTestTop_L2L3L2_MSHRBuffer___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillBuf__0(VTestTop_L2L3L2_MSHRBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHRBuffer___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_0;
    __VdfgRegularize_h748b6d99_3_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_1;
    __VdfgRegularize_h748b6d99_3_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_2;
    __VdfgRegularize_h748b6d99_3_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_3;
    __VdfgRegularize_h748b6d99_3_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_4;
    __VdfgRegularize_h748b6d99_3_4 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_5;
    __VdfgRegularize_h748b6d99_3_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_6;
    __VdfgRegularize_h748b6d99_3_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_7;
    __VdfgRegularize_h748b6d99_3_7 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_8;
    __VdfgRegularize_h748b6d99_3_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_9;
    __VdfgRegularize_h748b6d99_3_9 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_10;
    __VdfgRegularize_h748b6d99_3_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_11;
    __VdfgRegularize_h748b6d99_3_11 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_12;
    __VdfgRegularize_h748b6d99_3_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_13;
    __VdfgRegularize_h748b6d99_3_13 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_14;
    __VdfgRegularize_h748b6d99_3_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_15;
    __VdfgRegularize_h748b6d99_3_15 = 0;
    // Body
    vlSelfRef.__PVT___wens_T_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                  & (0U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_9 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                  & (1U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (2U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_21 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (3U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_27 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (4U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_33 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_39 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (6U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_45 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (7U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_51 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (8U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_57 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (9U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_63 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (0xaU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_69 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (0xbU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_75 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (0xcU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_81 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (0xdU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_87 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (0xeU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_93 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (0xfU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.io_r_data_data = ((0xfU == (0xfU & (IData)(vlSelfRef.__PVT__ridReg)))
                                 ? ((((0U >= (IData)(vlSelfRef.__PVT__buffer_15_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                       ? vlSelfRef.__PVT__buffer_15_1__DOT__array_0
                                      [vlSelfRef.__PVT__buffer_15_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                       : 0U) << 8U) 
                                    | ((0U >= (IData)(vlSelfRef.__PVT__buffer_15_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                        ? vlSelfRef.__PVT__buffer_15_0__DOT__array_0
                                       [vlSelfRef.__PVT__buffer_15_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                        : 0U)) : ((0xeU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__ridReg)))
                                                   ? 
                                                  ((((0U 
                                                      >= (IData)(vlSelfRef.__PVT__buffer_14_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                      ? 
                                                     vlSelfRef.__PVT__buffer_14_1__DOT__array_0
                                                     [vlSelfRef.__PVT__buffer_14_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                      : 0U) 
                                                    << 8U) 
                                                   | ((0U 
                                                       >= (IData)(vlSelfRef.__PVT__buffer_14_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                       ? 
                                                      vlSelfRef.__PVT__buffer_14_0__DOT__array_0
                                                      [vlSelfRef.__PVT__buffer_14_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U))
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.__PVT__ridReg)))
                                                    ? 
                                                   ((((0U 
                                                       >= (IData)(vlSelfRef.__PVT__buffer_13_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                       ? 
                                                      vlSelfRef.__PVT__buffer_13_1__DOT__array_0
                                                      [vlSelfRef.__PVT__buffer_13_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U) 
                                                     << 8U) 
                                                    | ((0U 
                                                        >= (IData)(vlSelfRef.__PVT__buffer_13_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                        ? 
                                                       vlSelfRef.__PVT__buffer_13_0__DOT__array_0
                                                       [vlSelfRef.__PVT__buffer_13_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                        : 0U))
                                                    : 
                                                   ((0xcU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__ridReg)))
                                                     ? 
                                                    ((((0U 
                                                        >= (IData)(vlSelfRef.__PVT__buffer_12_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                        ? 
                                                       vlSelfRef.__PVT__buffer_12_1__DOT__array_0
                                                       [vlSelfRef.__PVT__buffer_12_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                        : 0U) 
                                                      << 8U) 
                                                     | ((0U 
                                                         >= (IData)(vlSelfRef.__PVT__buffer_12_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                         ? 
                                                        vlSelfRef.__PVT__buffer_12_0__DOT__array_0
                                                        [vlSelfRef.__PVT__buffer_12_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                         : 0U))
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__ridReg)))
                                                      ? 
                                                     ((((0U 
                                                         >= (IData)(vlSelfRef.__PVT__buffer_11_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                         ? 
                                                        vlSelfRef.__PVT__buffer_11_1__DOT__array_0
                                                        [vlSelfRef.__PVT__buffer_11_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                         : 0U) 
                                                       << 8U) 
                                                      | ((0U 
                                                          >= (IData)(vlSelfRef.__PVT__buffer_11_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                          ? 
                                                         vlSelfRef.__PVT__buffer_11_0__DOT__array_0
                                                         [vlSelfRef.__PVT__buffer_11_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U))
                                                      : 
                                                     ((0xaU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelfRef.__PVT__ridReg)))
                                                       ? 
                                                      ((((0U 
                                                          >= (IData)(vlSelfRef.__PVT__buffer_10_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                          ? 
                                                         vlSelfRef.__PVT__buffer_10_1__DOT__array_0
                                                         [vlSelfRef.__PVT__buffer_10_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((0U 
                                                           >= (IData)(vlSelfRef.__PVT__buffer_10_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                           ? 
                                                          vlSelfRef.__PVT__buffer_10_0__DOT__array_0
                                                          [vlSelfRef.__PVT__buffer_10_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                           : 0U))
                                                       : 
                                                      ((9U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.__PVT__ridReg)))
                                                        ? 
                                                       ((((0U 
                                                           >= (IData)(vlSelfRef.__PVT__buffer_9_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                           ? 
                                                          vlSelfRef.__PVT__buffer_9_1__DOT__array_0
                                                          [vlSelfRef.__PVT__buffer_9_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                           : 0U) 
                                                         << 8U) 
                                                        | ((0U 
                                                            >= (IData)(vlSelfRef.__PVT__buffer_9_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                            ? 
                                                           vlSelfRef.__PVT__buffer_9_0__DOT__array_0
                                                           [vlSelfRef.__PVT__buffer_9_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U))
                                                        : 
                                                       ((8U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelfRef.__PVT__ridReg)))
                                                         ? 
                                                        ((((0U 
                                                            >= (IData)(vlSelfRef.__PVT__buffer_8_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                            ? 
                                                           vlSelfRef.__PVT__buffer_8_1__DOT__array_0
                                                           [vlSelfRef.__PVT__buffer_8_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U) 
                                                          << 8U) 
                                                         | ((0U 
                                                             >= (IData)(vlSelfRef.__PVT__buffer_8_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                             ? 
                                                            vlSelfRef.__PVT__buffer_8_0__DOT__array_0
                                                            [vlSelfRef.__PVT__buffer_8_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                             : 0U))
                                                         : 
                                                        ((7U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelfRef.__PVT__ridReg)))
                                                          ? 
                                                         ((((0U 
                                                             >= (IData)(vlSelfRef.__PVT__buffer_7_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                             ? 
                                                            vlSelfRef.__PVT__buffer_7_1__DOT__array_0
                                                            [vlSelfRef.__PVT__buffer_7_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                             : 0U) 
                                                           << 8U) 
                                                          | ((0U 
                                                              >= (IData)(vlSelfRef.__PVT__buffer_7_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                              ? 
                                                             vlSelfRef.__PVT__buffer_7_0__DOT__array_0
                                                             [vlSelfRef.__PVT__buffer_7_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                              : 0U))
                                                          : 
                                                         ((6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelfRef.__PVT__ridReg)))
                                                           ? 
                                                          ((((0U 
                                                              >= (IData)(vlSelfRef.__PVT__buffer_6_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                              ? 
                                                             vlSelfRef.__PVT__buffer_6_1__DOT__array_0
                                                             [vlSelfRef.__PVT__buffer_6_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                              : 0U) 
                                                            << 8U) 
                                                           | ((0U 
                                                               >= (IData)(vlSelfRef.__PVT__buffer_6_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                               ? 
                                                              vlSelfRef.__PVT__buffer_6_0__DOT__array_0
                                                              [vlSelfRef.__PVT__buffer_6_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                               : 0U))
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelfRef.__PVT__ridReg)))
                                                            ? 
                                                           ((((0U 
                                                               >= (IData)(vlSelfRef.__PVT__buffer_5_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                               ? 
                                                              vlSelfRef.__PVT__buffer_5_1__DOT__array_0
                                                              [vlSelfRef.__PVT__buffer_5_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                               : 0U) 
                                                             << 8U) 
                                                            | ((0U 
                                                                >= (IData)(vlSelfRef.__PVT__buffer_5_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                ? 
                                                               vlSelfRef.__PVT__buffer_5_0__DOT__array_0
                                                               [vlSelfRef.__PVT__buffer_5_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                : 0U))
                                                            : 
                                                           ((4U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__ridReg)))
                                                             ? 
                                                            ((((0U 
                                                                >= (IData)(vlSelfRef.__PVT__buffer_4_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                ? 
                                                               vlSelfRef.__PVT__buffer_4_1__DOT__array_0
                                                               [vlSelfRef.__PVT__buffer_4_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                : 0U) 
                                                              << 8U) 
                                                             | ((0U 
                                                                 >= (IData)(vlSelfRef.__PVT__buffer_4_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                 ? 
                                                                vlSelfRef.__PVT__buffer_4_0__DOT__array_0
                                                                [vlSelfRef.__PVT__buffer_4_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                 : 0U))
                                                             : 
                                                            ((3U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelfRef.__PVT__ridReg)))
                                                              ? 
                                                             ((((0U 
                                                                 >= (IData)(vlSelfRef.__PVT__buffer_3_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                 ? 
                                                                vlSelfRef.__PVT__buffer_3_1__DOT__array_0
                                                                [vlSelfRef.__PVT__buffer_3_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                 : 0U) 
                                                               << 8U) 
                                                              | ((0U 
                                                                  >= (IData)(vlSelfRef.__PVT__buffer_3_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                  ? 
                                                                 vlSelfRef.__PVT__buffer_3_0__DOT__array_0
                                                                 [vlSelfRef.__PVT__buffer_3_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                  : 0U))
                                                              : 
                                                             ((2U 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__ridReg)))
                                                               ? 
                                                              ((((0U 
                                                                  >= (IData)(vlSelfRef.__PVT__buffer_2_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                  ? 
                                                                 vlSelfRef.__PVT__buffer_2_1__DOT__array_0
                                                                 [vlSelfRef.__PVT__buffer_2_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                  : 0U) 
                                                                << 8U) 
                                                               | ((0U 
                                                                   >= (IData)(vlSelfRef.__PVT__buffer_2_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                   ? 
                                                                  vlSelfRef.__PVT__buffer_2_0__DOT__array_0
                                                                  [vlSelfRef.__PVT__buffer_2_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                   : 0U))
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.__PVT__ridReg)))
                                                                ? 
                                                               ((((0U 
                                                                   >= (IData)(vlSelfRef.__PVT__buffer_1_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                   ? 
                                                                  vlSelfRef.__PVT__buffer_1_1__DOT__array_0
                                                                  [vlSelfRef.__PVT__buffer_1_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                   : 0U) 
                                                                 << 8U) 
                                                                | ((0U 
                                                                    >= (IData)(vlSelfRef.__PVT__buffer_1_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                    ? 
                                                                   vlSelfRef.__PVT__buffer_1_0__DOT__array_0
                                                                   [vlSelfRef.__PVT__buffer_1_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                    : 0U))
                                                                : 
                                                               ((((0U 
                                                                   >= (IData)(vlSelfRef.__PVT__buffer_0_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                   ? 
                                                                  vlSelfRef.__PVT__buffer_0_1__DOT__array_0
                                                                  [vlSelfRef.__PVT__buffer_0_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                   : 0U) 
                                                                 << 8U) 
                                                                | ((0U 
                                                                    >= (IData)(vlSelfRef.__PVT__buffer_0_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                    ? 
                                                                   vlSelfRef.__PVT__buffer_0_0__DOT__array_0
                                                                   [vlSelfRef.__PVT__buffer_0_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                    : 0U)))))))))))))))));
    vlSelfRef.__PVT__buffer_0_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (0U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_1_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (1U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_2_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (2U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_3_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (3U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_4_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (4U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_5_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (5U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_6_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (6U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_7_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (7U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_8_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (8U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_9_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (9U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_10_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                   & (0xaU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_11_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                   & (0xbU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_12_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                   & (0xcU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_13_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                   & (0xdU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_14_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                   & (0xeU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_15_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                   & (0xfU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT___wens_T_1 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                  & (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_7 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                  & (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_13 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_19 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (3U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_25 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_31 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_37 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_43 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (7U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_49 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (8U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_55 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (9U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_61 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (0xaU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_67 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (0xbU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_73 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (0xcU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_79 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (0xdU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_85 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (0xeU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_91 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (0xfU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    if (vlSelfRef.__PVT___wens_T_1) {
        vlSelfRef.__PVT__w_data_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_data = ((IData)(vlSelfRef.__PVT___wens_T_3)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                         : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel = 3U;
    }
    __VdfgRegularize_h748b6d99_3_0 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_3) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_1)));
    if (vlSelfRef.__PVT___wens_T_7) {
        vlSelfRef.__PVT__w_data_1_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_1_data = ((IData)(vlSelfRef.__PVT___wens_T_9)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_1 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_1 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_9) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_7)));
    if (vlSelfRef.__PVT___wens_T_13) {
        vlSelfRef.__PVT__w_data_2_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_2 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_2_data = ((IData)(vlSelfRef.__PVT___wens_T_15)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_2 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_2 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_15) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_13)));
    if (vlSelfRef.__PVT___wens_T_19) {
        vlSelfRef.__PVT__w_data_3_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_3 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_3_data = ((IData)(vlSelfRef.__PVT___wens_T_21)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_3 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_3 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (3U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_21) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_19)));
    if (vlSelfRef.__PVT___wens_T_25) {
        vlSelfRef.__PVT__w_data_4_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_4_data = ((IData)(vlSelfRef.__PVT___wens_T_27)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_4 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_4 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_27) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_25)));
    if (vlSelfRef.__PVT___wens_T_31) {
        vlSelfRef.__PVT__w_data_5_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_5_data = ((IData)(vlSelfRef.__PVT___wens_T_33)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_5 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_5 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_33) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_31)));
    if (vlSelfRef.__PVT___wens_T_37) {
        vlSelfRef.__PVT__w_data_6_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_6_data = ((IData)(vlSelfRef.__PVT___wens_T_39)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_6 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_6 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_39) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_37)));
    if (vlSelfRef.__PVT___wens_T_43) {
        vlSelfRef.__PVT__w_data_7_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_7 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_7_data = ((IData)(vlSelfRef.__PVT___wens_T_45)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_7 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_7 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (7U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_45) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_43)));
    if (vlSelfRef.__PVT___wens_T_49) {
        vlSelfRef.__PVT__w_data_8_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_8 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_8_data = ((IData)(vlSelfRef.__PVT___wens_T_51)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_8 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_8 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (8U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_51) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_49)));
    if (vlSelfRef.__PVT___wens_T_55) {
        vlSelfRef.__PVT__w_data_9_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_9 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_9_data = ((IData)(vlSelfRef.__PVT___wens_T_57)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_9 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_9 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (9U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_57) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_55)));
    if (vlSelfRef.__PVT___wens_T_61) {
        vlSelfRef.__PVT__w_data_10_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_10_data = ((IData)(vlSelfRef.__PVT___wens_T_63)
                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                            : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_10 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_10 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                        & (0xaU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_63) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_61)));
    if (vlSelfRef.__PVT___wens_T_67) {
        vlSelfRef.__PVT__w_data_11_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_11 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_11_data = ((IData)(vlSelfRef.__PVT___wens_T_69)
                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                            : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_11 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_11 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                        & (0xbU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_69) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_67)));
    if (vlSelfRef.__PVT___wens_T_73) {
        vlSelfRef.__PVT__w_data_12_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_12 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_12_data = ((IData)(vlSelfRef.__PVT___wens_T_75)
                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                            : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_12 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_12 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                        & (0xcU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_75) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_73)));
    if (vlSelfRef.__PVT___wens_T_79) {
        vlSelfRef.__PVT__w_data_13_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_13 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_13_data = ((IData)(vlSelfRef.__PVT___wens_T_81)
                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                            : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_13 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_13 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                        & (0xdU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_81) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_79)));
    if (vlSelfRef.__PVT___wens_T_85) {
        vlSelfRef.__PVT__w_data_14_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_14 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_14_data = ((IData)(vlSelfRef.__PVT___wens_T_87)
                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                            : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_14 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_14 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                        & (0xeU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_87) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_85)));
    if (vlSelfRef.__PVT___wens_T_91) {
        vlSelfRef.__PVT__w_data_15_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_15 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_15_data = ((IData)(vlSelfRef.__PVT___wens_T_93)
                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                            : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_15 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_15 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                        & (0xfU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_93) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_91)));
    vlSelfRef.__PVT__buffer_0_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_0) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel));
    vlSelfRef.__PVT__buffer_0_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_0) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_1_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_1) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_1));
    vlSelfRef.__PVT__buffer_1_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_1) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_1) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_2_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_2) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_2));
    vlSelfRef.__PVT__buffer_2_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_2) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_2) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_3_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_3) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_3));
    vlSelfRef.__PVT__buffer_3_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_3) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_3) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_4_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_4) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_4));
    vlSelfRef.__PVT__buffer_4_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_4) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_4) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_5_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_5) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_5));
    vlSelfRef.__PVT__buffer_5_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_5) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_5) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_6_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_6) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_6));
    vlSelfRef.__PVT__buffer_6_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_6) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_6) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_7_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_7) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_7));
    vlSelfRef.__PVT__buffer_7_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_7) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_7) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_8_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_8) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_8));
    vlSelfRef.__PVT__buffer_8_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_8) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_8) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_9_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_9) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_9));
    vlSelfRef.__PVT__buffer_9_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_9) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_9) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_10_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_10) 
                                                   & (IData)(vlSelfRef.__PVT__w_beat_sel_10));
    vlSelfRef.__PVT__buffer_10_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_10) 
                                                   & ((IData)(vlSelfRef.__PVT__w_beat_sel_10) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_11_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_11) 
                                                   & (IData)(vlSelfRef.__PVT__w_beat_sel_11));
    vlSelfRef.__PVT__buffer_11_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_11) 
                                                   & ((IData)(vlSelfRef.__PVT__w_beat_sel_11) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_12_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_12) 
                                                   & (IData)(vlSelfRef.__PVT__w_beat_sel_12));
    vlSelfRef.__PVT__buffer_12_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_12) 
                                                   & ((IData)(vlSelfRef.__PVT__w_beat_sel_12) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_13_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_13) 
                                                   & (IData)(vlSelfRef.__PVT__w_beat_sel_13));
    vlSelfRef.__PVT__buffer_13_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_13) 
                                                   & ((IData)(vlSelfRef.__PVT__w_beat_sel_13) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_14_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_14) 
                                                   & (IData)(vlSelfRef.__PVT__w_beat_sel_14));
    vlSelfRef.__PVT__buffer_14_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_14) 
                                                   & ((IData)(vlSelfRef.__PVT__w_beat_sel_14) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_15_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_15) 
                                                   & (IData)(vlSelfRef.__PVT__w_beat_sel_15));
    vlSelfRef.__PVT__buffer_15_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_15) 
                                                   & ((IData)(vlSelfRef.__PVT__w_beat_sel_15) 
                                                      >> 1U));
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHRBuffer___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__releaseBuf__0(VTestTop_L2L3L2_MSHRBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHRBuffer___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__releaseBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_r_data_data = ((0xfU == (0xfU & (IData)(vlSelfRef.__PVT__ridReg)))
                                 ? ((((0U >= (IData)(vlSelfRef.__PVT__buffer_15_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                       ? vlSelfRef.__PVT__buffer_15_1__DOT__array_0
                                      [vlSelfRef.__PVT__buffer_15_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                       : 0U) << 8U) 
                                    | ((0U >= (IData)(vlSelfRef.__PVT__buffer_15_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                        ? vlSelfRef.__PVT__buffer_15_0__DOT__array_0
                                       [vlSelfRef.__PVT__buffer_15_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                        : 0U)) : ((0xeU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__ridReg)))
                                                   ? 
                                                  ((((0U 
                                                      >= (IData)(vlSelfRef.__PVT__buffer_14_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                      ? 
                                                     vlSelfRef.__PVT__buffer_14_1__DOT__array_0
                                                     [vlSelfRef.__PVT__buffer_14_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                      : 0U) 
                                                    << 8U) 
                                                   | ((0U 
                                                       >= (IData)(vlSelfRef.__PVT__buffer_14_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                       ? 
                                                      vlSelfRef.__PVT__buffer_14_0__DOT__array_0
                                                      [vlSelfRef.__PVT__buffer_14_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U))
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.__PVT__ridReg)))
                                                    ? 
                                                   ((((0U 
                                                       >= (IData)(vlSelfRef.__PVT__buffer_13_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                       ? 
                                                      vlSelfRef.__PVT__buffer_13_1__DOT__array_0
                                                      [vlSelfRef.__PVT__buffer_13_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U) 
                                                     << 8U) 
                                                    | ((0U 
                                                        >= (IData)(vlSelfRef.__PVT__buffer_13_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                        ? 
                                                       vlSelfRef.__PVT__buffer_13_0__DOT__array_0
                                                       [vlSelfRef.__PVT__buffer_13_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                        : 0U))
                                                    : 
                                                   ((0xcU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__ridReg)))
                                                     ? 
                                                    ((((0U 
                                                        >= (IData)(vlSelfRef.__PVT__buffer_12_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                        ? 
                                                       vlSelfRef.__PVT__buffer_12_1__DOT__array_0
                                                       [vlSelfRef.__PVT__buffer_12_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                        : 0U) 
                                                      << 8U) 
                                                     | ((0U 
                                                         >= (IData)(vlSelfRef.__PVT__buffer_12_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                         ? 
                                                        vlSelfRef.__PVT__buffer_12_0__DOT__array_0
                                                        [vlSelfRef.__PVT__buffer_12_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                         : 0U))
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__ridReg)))
                                                      ? 
                                                     ((((0U 
                                                         >= (IData)(vlSelfRef.__PVT__buffer_11_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                         ? 
                                                        vlSelfRef.__PVT__buffer_11_1__DOT__array_0
                                                        [vlSelfRef.__PVT__buffer_11_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                         : 0U) 
                                                       << 8U) 
                                                      | ((0U 
                                                          >= (IData)(vlSelfRef.__PVT__buffer_11_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                          ? 
                                                         vlSelfRef.__PVT__buffer_11_0__DOT__array_0
                                                         [vlSelfRef.__PVT__buffer_11_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U))
                                                      : 
                                                     ((0xaU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelfRef.__PVT__ridReg)))
                                                       ? 
                                                      ((((0U 
                                                          >= (IData)(vlSelfRef.__PVT__buffer_10_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                          ? 
                                                         vlSelfRef.__PVT__buffer_10_1__DOT__array_0
                                                         [vlSelfRef.__PVT__buffer_10_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((0U 
                                                           >= (IData)(vlSelfRef.__PVT__buffer_10_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                           ? 
                                                          vlSelfRef.__PVT__buffer_10_0__DOT__array_0
                                                          [vlSelfRef.__PVT__buffer_10_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                           : 0U))
                                                       : 
                                                      ((9U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.__PVT__ridReg)))
                                                        ? 
                                                       ((((0U 
                                                           >= (IData)(vlSelfRef.__PVT__buffer_9_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                           ? 
                                                          vlSelfRef.__PVT__buffer_9_1__DOT__array_0
                                                          [vlSelfRef.__PVT__buffer_9_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                           : 0U) 
                                                         << 8U) 
                                                        | ((0U 
                                                            >= (IData)(vlSelfRef.__PVT__buffer_9_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                            ? 
                                                           vlSelfRef.__PVT__buffer_9_0__DOT__array_0
                                                           [vlSelfRef.__PVT__buffer_9_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U))
                                                        : 
                                                       ((8U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelfRef.__PVT__ridReg)))
                                                         ? 
                                                        ((((0U 
                                                            >= (IData)(vlSelfRef.__PVT__buffer_8_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                            ? 
                                                           vlSelfRef.__PVT__buffer_8_1__DOT__array_0
                                                           [vlSelfRef.__PVT__buffer_8_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U) 
                                                          << 8U) 
                                                         | ((0U 
                                                             >= (IData)(vlSelfRef.__PVT__buffer_8_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                             ? 
                                                            vlSelfRef.__PVT__buffer_8_0__DOT__array_0
                                                            [vlSelfRef.__PVT__buffer_8_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                             : 0U))
                                                         : 
                                                        ((7U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelfRef.__PVT__ridReg)))
                                                          ? 
                                                         ((((0U 
                                                             >= (IData)(vlSelfRef.__PVT__buffer_7_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                             ? 
                                                            vlSelfRef.__PVT__buffer_7_1__DOT__array_0
                                                            [vlSelfRef.__PVT__buffer_7_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                             : 0U) 
                                                           << 8U) 
                                                          | ((0U 
                                                              >= (IData)(vlSelfRef.__PVT__buffer_7_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                              ? 
                                                             vlSelfRef.__PVT__buffer_7_0__DOT__array_0
                                                             [vlSelfRef.__PVT__buffer_7_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                              : 0U))
                                                          : 
                                                         ((6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelfRef.__PVT__ridReg)))
                                                           ? 
                                                          ((((0U 
                                                              >= (IData)(vlSelfRef.__PVT__buffer_6_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                              ? 
                                                             vlSelfRef.__PVT__buffer_6_1__DOT__array_0
                                                             [vlSelfRef.__PVT__buffer_6_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                              : 0U) 
                                                            << 8U) 
                                                           | ((0U 
                                                               >= (IData)(vlSelfRef.__PVT__buffer_6_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                               ? 
                                                              vlSelfRef.__PVT__buffer_6_0__DOT__array_0
                                                              [vlSelfRef.__PVT__buffer_6_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                               : 0U))
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelfRef.__PVT__ridReg)))
                                                            ? 
                                                           ((((0U 
                                                               >= (IData)(vlSelfRef.__PVT__buffer_5_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                               ? 
                                                              vlSelfRef.__PVT__buffer_5_1__DOT__array_0
                                                              [vlSelfRef.__PVT__buffer_5_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                               : 0U) 
                                                             << 8U) 
                                                            | ((0U 
                                                                >= (IData)(vlSelfRef.__PVT__buffer_5_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                ? 
                                                               vlSelfRef.__PVT__buffer_5_0__DOT__array_0
                                                               [vlSelfRef.__PVT__buffer_5_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                : 0U))
                                                            : 
                                                           ((4U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__ridReg)))
                                                             ? 
                                                            ((((0U 
                                                                >= (IData)(vlSelfRef.__PVT__buffer_4_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                ? 
                                                               vlSelfRef.__PVT__buffer_4_1__DOT__array_0
                                                               [vlSelfRef.__PVT__buffer_4_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                : 0U) 
                                                              << 8U) 
                                                             | ((0U 
                                                                 >= (IData)(vlSelfRef.__PVT__buffer_4_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                 ? 
                                                                vlSelfRef.__PVT__buffer_4_0__DOT__array_0
                                                                [vlSelfRef.__PVT__buffer_4_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                 : 0U))
                                                             : 
                                                            ((3U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelfRef.__PVT__ridReg)))
                                                              ? 
                                                             ((((0U 
                                                                 >= (IData)(vlSelfRef.__PVT__buffer_3_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                 ? 
                                                                vlSelfRef.__PVT__buffer_3_1__DOT__array_0
                                                                [vlSelfRef.__PVT__buffer_3_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                 : 0U) 
                                                               << 8U) 
                                                              | ((0U 
                                                                  >= (IData)(vlSelfRef.__PVT__buffer_3_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                  ? 
                                                                 vlSelfRef.__PVT__buffer_3_0__DOT__array_0
                                                                 [vlSelfRef.__PVT__buffer_3_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                  : 0U))
                                                              : 
                                                             ((2U 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__ridReg)))
                                                               ? 
                                                              ((((0U 
                                                                  >= (IData)(vlSelfRef.__PVT__buffer_2_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                  ? 
                                                                 vlSelfRef.__PVT__buffer_2_1__DOT__array_0
                                                                 [vlSelfRef.__PVT__buffer_2_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                  : 0U) 
                                                                << 8U) 
                                                               | ((0U 
                                                                   >= (IData)(vlSelfRef.__PVT__buffer_2_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                   ? 
                                                                  vlSelfRef.__PVT__buffer_2_0__DOT__array_0
                                                                  [vlSelfRef.__PVT__buffer_2_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                   : 0U))
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.__PVT__ridReg)))
                                                                ? 
                                                               ((((0U 
                                                                   >= (IData)(vlSelfRef.__PVT__buffer_1_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                   ? 
                                                                  vlSelfRef.__PVT__buffer_1_1__DOT__array_0
                                                                  [vlSelfRef.__PVT__buffer_1_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                   : 0U) 
                                                                 << 8U) 
                                                                | ((0U 
                                                                    >= (IData)(vlSelfRef.__PVT__buffer_1_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                    ? 
                                                                   vlSelfRef.__PVT__buffer_1_0__DOT__array_0
                                                                   [vlSelfRef.__PVT__buffer_1_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                    : 0U))
                                                                : 
                                                               ((((0U 
                                                                   >= (IData)(vlSelfRef.__PVT__buffer_0_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                   ? 
                                                                  vlSelfRef.__PVT__buffer_0_1__DOT__array_0
                                                                  [vlSelfRef.__PVT__buffer_0_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                   : 0U) 
                                                                 << 8U) 
                                                                | ((0U 
                                                                    >= (IData)(vlSelfRef.__PVT__buffer_0_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                    ? 
                                                                   vlSelfRef.__PVT__buffer_0_0__DOT__array_0
                                                                   [vlSelfRef.__PVT__buffer_0_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                    : 0U)))))))))))))))));
    vlSelfRef.__PVT__buffer_0_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (0U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_1_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (1U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_2_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (2U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_3_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (3U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_4_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (4U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_5_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (5U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_6_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (6U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_7_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (7U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_8_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (8U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_9_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (9U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_10_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                   & (0xaU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_11_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                   & (0xbU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_12_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                   & (0xcU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_13_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                   & (0xdU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_14_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                   & (0xeU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_15_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                   & (0xfU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHRBuffer___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__releaseBuf__1(VTestTop_L2L3L2_MSHRBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHRBuffer___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__releaseBuf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT__w_beat_sel;
    __PVT__w_beat_sel = 0;
    CData/*1:0*/ __PVT__w_beat_sel_1;
    __PVT__w_beat_sel_1 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_2;
    __PVT__w_beat_sel_2 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_3;
    __PVT__w_beat_sel_3 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_4;
    __PVT__w_beat_sel_4 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_5;
    __PVT__w_beat_sel_5 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_6;
    __PVT__w_beat_sel_6 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_7;
    __PVT__w_beat_sel_7 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_8;
    __PVT__w_beat_sel_8 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_9;
    __PVT__w_beat_sel_9 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_10;
    __PVT__w_beat_sel_10 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_11;
    __PVT__w_beat_sel_11 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_12;
    __PVT__w_beat_sel_12 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_13;
    __PVT__w_beat_sel_13 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_14;
    __PVT__w_beat_sel_14 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_15;
    __PVT__w_beat_sel_15 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_0;
    __VdfgRegularize_h748b6d99_3_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_1;
    __VdfgRegularize_h748b6d99_3_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_2;
    __VdfgRegularize_h748b6d99_3_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_3;
    __VdfgRegularize_h748b6d99_3_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_4;
    __VdfgRegularize_h748b6d99_3_4 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_5;
    __VdfgRegularize_h748b6d99_3_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_6;
    __VdfgRegularize_h748b6d99_3_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_7;
    __VdfgRegularize_h748b6d99_3_7 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_8;
    __VdfgRegularize_h748b6d99_3_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_9;
    __VdfgRegularize_h748b6d99_3_9 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_10;
    __VdfgRegularize_h748b6d99_3_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_11;
    __VdfgRegularize_h748b6d99_3_11 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_12;
    __VdfgRegularize_h748b6d99_3_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_13;
    __VdfgRegularize_h748b6d99_3_13 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_14;
    __VdfgRegularize_h748b6d99_3_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_15;
    __VdfgRegularize_h748b6d99_3_15 = 0;
    // Body
    vlSelfRef.__PVT___wens_T_1 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                  & (0U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_7 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                  & (1U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_13 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (2U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_19 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (3U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_25 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (4U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_31 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_37 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (6U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_43 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (7U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_49 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (8U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_55 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (9U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_61 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (0xaU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_67 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (0xbU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_73 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (0xcU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_79 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (0xdU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_85 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (0xeU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_91 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (0xfU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                  & (0U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_9 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                  & (1U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (2U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_21 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (3U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_27 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (4U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_33 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_39 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (6U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_45 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (7U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_51 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (8U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_57 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (9U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_63 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (0xaU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_69 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (0xbU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_75 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (0xcU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_81 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (0xdU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_87 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (0xeU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_93 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (0xfU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    if (vlSelfRef.__PVT___wens_T_1) {
        vlSelfRef.__PVT__w_data_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel = 3U;
    } else if (vlSelfRef.__PVT___wens_T_3) {
        vlSelfRef.__PVT__w_data_data = (0xffffU & (
                                                   ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                                    << 8U) 
                                                   | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel = 3U;
    }
    __VdfgRegularize_h748b6d99_3_0 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_3) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_1)));
    if (vlSelfRef.__PVT___wens_T_7) {
        vlSelfRef.__PVT__w_data_1_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_1 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_9) {
        vlSelfRef.__PVT__w_data_1_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel_1 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_1_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_1 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_1 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_9) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_7)));
    if (vlSelfRef.__PVT___wens_T_13) {
        vlSelfRef.__PVT__w_data_2_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_2 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_15) {
        vlSelfRef.__PVT__w_data_2_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel_2 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_2_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_2 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_2 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_15) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_13)));
    if (vlSelfRef.__PVT___wens_T_19) {
        vlSelfRef.__PVT__w_data_3_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_3 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_21) {
        vlSelfRef.__PVT__w_data_3_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel_3 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_3_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_3 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_3 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (3U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_21) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_19)));
    if (vlSelfRef.__PVT___wens_T_25) {
        vlSelfRef.__PVT__w_data_4_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_4 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_27) {
        vlSelfRef.__PVT__w_data_4_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel_4 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_4_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_4 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_4 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_27) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_25)));
    if (vlSelfRef.__PVT___wens_T_31) {
        vlSelfRef.__PVT__w_data_5_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_5 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_33) {
        vlSelfRef.__PVT__w_data_5_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel_5 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_5_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_5 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_5 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_33) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_31)));
    if (vlSelfRef.__PVT___wens_T_37) {
        vlSelfRef.__PVT__w_data_6_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_6 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_39) {
        vlSelfRef.__PVT__w_data_6_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel_6 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_6_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_6 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_6 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_39) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_37)));
    if (vlSelfRef.__PVT___wens_T_43) {
        vlSelfRef.__PVT__w_data_7_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_7 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_45) {
        vlSelfRef.__PVT__w_data_7_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel_7 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_7_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_7 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_7 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (7U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_45) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_43)));
    if (vlSelfRef.__PVT___wens_T_49) {
        vlSelfRef.__PVT__w_data_8_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_8 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_51) {
        vlSelfRef.__PVT__w_data_8_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel_8 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_8_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_8 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_8 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (8U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_51) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_49)));
    if (vlSelfRef.__PVT___wens_T_55) {
        vlSelfRef.__PVT__w_data_9_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_9 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_57) {
        vlSelfRef.__PVT__w_data_9_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel_9 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_9_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_9 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_9 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (9U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_57) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_55)));
    if (vlSelfRef.__PVT___wens_T_61) {
        vlSelfRef.__PVT__w_data_10_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_10 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_63) {
        vlSelfRef.__PVT__w_data_10_data = (0xffffU 
                                           & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                               << 8U) 
                                              | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel_10 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_10_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_10 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_10 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                        & (0xaU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_63) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_61)));
    if (vlSelfRef.__PVT___wens_T_67) {
        vlSelfRef.__PVT__w_data_11_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_11 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_69) {
        vlSelfRef.__PVT__w_data_11_data = (0xffffU 
                                           & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                               << 8U) 
                                              | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel_11 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_11_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_11 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_11 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                        & (0xbU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_69) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_67)));
    if (vlSelfRef.__PVT___wens_T_73) {
        vlSelfRef.__PVT__w_data_12_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_12 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_75) {
        vlSelfRef.__PVT__w_data_12_data = (0xffffU 
                                           & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                               << 8U) 
                                              | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel_12 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_12_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_12 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_12 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                        & (0xcU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_75) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_73)));
    if (vlSelfRef.__PVT___wens_T_79) {
        vlSelfRef.__PVT__w_data_13_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_13 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_81) {
        vlSelfRef.__PVT__w_data_13_data = (0xffffU 
                                           & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                               << 8U) 
                                              | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel_13 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_13_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_13 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_13 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                        & (0xdU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_81) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_79)));
    if (vlSelfRef.__PVT___wens_T_85) {
        vlSelfRef.__PVT__w_data_14_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_14 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_87) {
        vlSelfRef.__PVT__w_data_14_data = (0xffffU 
                                           & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                               << 8U) 
                                              | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel_14 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_14_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_14 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_14 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                        & (0xeU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_87) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_85)));
    if (vlSelfRef.__PVT___wens_T_91) {
        vlSelfRef.__PVT__w_data_15_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_15 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_93) {
        vlSelfRef.__PVT__w_data_15_data = (0xffffU 
                                           & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data) 
                                               << 8U) 
                                              | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data)));
        __PVT__w_beat_sel_15 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_15_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_15 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_15 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                        & (0xfU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_93) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_91)));
    vlSelfRef.__PVT__buffer_0_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_0) 
                                                  & (IData)(__PVT__w_beat_sel));
    vlSelfRef.__PVT__buffer_0_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_0) 
                                                  & ((IData)(__PVT__w_beat_sel) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_1_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_1) 
                                                  & (IData)(__PVT__w_beat_sel_1));
    vlSelfRef.__PVT__buffer_1_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_1) 
                                                  & ((IData)(__PVT__w_beat_sel_1) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_2_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_2) 
                                                  & (IData)(__PVT__w_beat_sel_2));
    vlSelfRef.__PVT__buffer_2_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_2) 
                                                  & ((IData)(__PVT__w_beat_sel_2) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_3_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_3) 
                                                  & (IData)(__PVT__w_beat_sel_3));
    vlSelfRef.__PVT__buffer_3_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_3) 
                                                  & ((IData)(__PVT__w_beat_sel_3) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_4_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_4) 
                                                  & (IData)(__PVT__w_beat_sel_4));
    vlSelfRef.__PVT__buffer_4_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_4) 
                                                  & ((IData)(__PVT__w_beat_sel_4) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_5_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_5) 
                                                  & (IData)(__PVT__w_beat_sel_5));
    vlSelfRef.__PVT__buffer_5_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_5) 
                                                  & ((IData)(__PVT__w_beat_sel_5) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_6_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_6) 
                                                  & (IData)(__PVT__w_beat_sel_6));
    vlSelfRef.__PVT__buffer_6_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_6) 
                                                  & ((IData)(__PVT__w_beat_sel_6) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_7_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_7) 
                                                  & (IData)(__PVT__w_beat_sel_7));
    vlSelfRef.__PVT__buffer_7_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_7) 
                                                  & ((IData)(__PVT__w_beat_sel_7) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_8_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_8) 
                                                  & (IData)(__PVT__w_beat_sel_8));
    vlSelfRef.__PVT__buffer_8_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_8) 
                                                  & ((IData)(__PVT__w_beat_sel_8) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_9_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_9) 
                                                  & (IData)(__PVT__w_beat_sel_9));
    vlSelfRef.__PVT__buffer_9_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_9) 
                                                  & ((IData)(__PVT__w_beat_sel_9) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_10_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_10) 
                                                   & (IData)(__PVT__w_beat_sel_10));
    vlSelfRef.__PVT__buffer_10_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_10) 
                                                   & ((IData)(__PVT__w_beat_sel_10) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_11_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_11) 
                                                   & (IData)(__PVT__w_beat_sel_11));
    vlSelfRef.__PVT__buffer_11_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_11) 
                                                   & ((IData)(__PVT__w_beat_sel_11) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_12_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_12) 
                                                   & (IData)(__PVT__w_beat_sel_12));
    vlSelfRef.__PVT__buffer_12_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_12) 
                                                   & ((IData)(__PVT__w_beat_sel_12) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_13_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_13) 
                                                   & (IData)(__PVT__w_beat_sel_13));
    vlSelfRef.__PVT__buffer_13_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_13) 
                                                   & ((IData)(__PVT__w_beat_sel_13) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_14_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_14) 
                                                   & (IData)(__PVT__w_beat_sel_14));
    vlSelfRef.__PVT__buffer_14_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_14) 
                                                   & ((IData)(__PVT__w_beat_sel_14) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_15_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_15) 
                                                   & (IData)(__PVT__w_beat_sel_15));
    vlSelfRef.__PVT__buffer_15_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_15) 
                                                   & ((IData)(__PVT__w_beat_sel_15) 
                                                      >> 1U));
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHRBuffer___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillBuf__0(VTestTop_L2L3L2_MSHRBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHRBuffer___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_0;
    __VdfgRegularize_h748b6d99_3_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_1;
    __VdfgRegularize_h748b6d99_3_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_2;
    __VdfgRegularize_h748b6d99_3_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_3;
    __VdfgRegularize_h748b6d99_3_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_4;
    __VdfgRegularize_h748b6d99_3_4 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_5;
    __VdfgRegularize_h748b6d99_3_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_6;
    __VdfgRegularize_h748b6d99_3_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_7;
    __VdfgRegularize_h748b6d99_3_7 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_8;
    __VdfgRegularize_h748b6d99_3_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_9;
    __VdfgRegularize_h748b6d99_3_9 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_10;
    __VdfgRegularize_h748b6d99_3_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_11;
    __VdfgRegularize_h748b6d99_3_11 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_12;
    __VdfgRegularize_h748b6d99_3_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_13;
    __VdfgRegularize_h748b6d99_3_13 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_14;
    __VdfgRegularize_h748b6d99_3_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_15;
    __VdfgRegularize_h748b6d99_3_15 = 0;
    // Body
    vlSelfRef.__PVT___wens_T_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                  & (0U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_9 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                  & (1U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (2U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_21 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (3U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_27 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (4U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_33 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_39 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (6U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_45 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (7U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_51 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (8U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_57 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (9U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_63 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (0xaU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_69 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (0xbU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_75 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (0xcU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_81 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (0xdU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_87 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (0xeU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.__PVT___wens_T_93 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_valid_REG) 
                                   & (0xfU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__io_refillBufWrite_id_REG)));
    vlSelfRef.io_r_data_data = ((0xfU == (0xfU & (IData)(vlSelfRef.__PVT__ridReg)))
                                 ? ((((0U >= (IData)(vlSelfRef.__PVT__buffer_15_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                       ? vlSelfRef.__PVT__buffer_15_1__DOT__array_0
                                      [vlSelfRef.__PVT__buffer_15_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                       : 0U) << 8U) 
                                    | ((0U >= (IData)(vlSelfRef.__PVT__buffer_15_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                        ? vlSelfRef.__PVT__buffer_15_0__DOT__array_0
                                       [vlSelfRef.__PVT__buffer_15_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                        : 0U)) : ((0xeU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__ridReg)))
                                                   ? 
                                                  ((((0U 
                                                      >= (IData)(vlSelfRef.__PVT__buffer_14_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                      ? 
                                                     vlSelfRef.__PVT__buffer_14_1__DOT__array_0
                                                     [vlSelfRef.__PVT__buffer_14_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                      : 0U) 
                                                    << 8U) 
                                                   | ((0U 
                                                       >= (IData)(vlSelfRef.__PVT__buffer_14_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                       ? 
                                                      vlSelfRef.__PVT__buffer_14_0__DOT__array_0
                                                      [vlSelfRef.__PVT__buffer_14_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U))
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.__PVT__ridReg)))
                                                    ? 
                                                   ((((0U 
                                                       >= (IData)(vlSelfRef.__PVT__buffer_13_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                       ? 
                                                      vlSelfRef.__PVT__buffer_13_1__DOT__array_0
                                                      [vlSelfRef.__PVT__buffer_13_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U) 
                                                     << 8U) 
                                                    | ((0U 
                                                        >= (IData)(vlSelfRef.__PVT__buffer_13_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                        ? 
                                                       vlSelfRef.__PVT__buffer_13_0__DOT__array_0
                                                       [vlSelfRef.__PVT__buffer_13_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                        : 0U))
                                                    : 
                                                   ((0xcU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__ridReg)))
                                                     ? 
                                                    ((((0U 
                                                        >= (IData)(vlSelfRef.__PVT__buffer_12_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                        ? 
                                                       vlSelfRef.__PVT__buffer_12_1__DOT__array_0
                                                       [vlSelfRef.__PVT__buffer_12_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                        : 0U) 
                                                      << 8U) 
                                                     | ((0U 
                                                         >= (IData)(vlSelfRef.__PVT__buffer_12_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                         ? 
                                                        vlSelfRef.__PVT__buffer_12_0__DOT__array_0
                                                        [vlSelfRef.__PVT__buffer_12_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                         : 0U))
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__ridReg)))
                                                      ? 
                                                     ((((0U 
                                                         >= (IData)(vlSelfRef.__PVT__buffer_11_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                         ? 
                                                        vlSelfRef.__PVT__buffer_11_1__DOT__array_0
                                                        [vlSelfRef.__PVT__buffer_11_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                         : 0U) 
                                                       << 8U) 
                                                      | ((0U 
                                                          >= (IData)(vlSelfRef.__PVT__buffer_11_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                          ? 
                                                         vlSelfRef.__PVT__buffer_11_0__DOT__array_0
                                                         [vlSelfRef.__PVT__buffer_11_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U))
                                                      : 
                                                     ((0xaU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelfRef.__PVT__ridReg)))
                                                       ? 
                                                      ((((0U 
                                                          >= (IData)(vlSelfRef.__PVT__buffer_10_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                          ? 
                                                         vlSelfRef.__PVT__buffer_10_1__DOT__array_0
                                                         [vlSelfRef.__PVT__buffer_10_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((0U 
                                                           >= (IData)(vlSelfRef.__PVT__buffer_10_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                           ? 
                                                          vlSelfRef.__PVT__buffer_10_0__DOT__array_0
                                                          [vlSelfRef.__PVT__buffer_10_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                           : 0U))
                                                       : 
                                                      ((9U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.__PVT__ridReg)))
                                                        ? 
                                                       ((((0U 
                                                           >= (IData)(vlSelfRef.__PVT__buffer_9_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                           ? 
                                                          vlSelfRef.__PVT__buffer_9_1__DOT__array_0
                                                          [vlSelfRef.__PVT__buffer_9_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                           : 0U) 
                                                         << 8U) 
                                                        | ((0U 
                                                            >= (IData)(vlSelfRef.__PVT__buffer_9_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                            ? 
                                                           vlSelfRef.__PVT__buffer_9_0__DOT__array_0
                                                           [vlSelfRef.__PVT__buffer_9_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U))
                                                        : 
                                                       ((8U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelfRef.__PVT__ridReg)))
                                                         ? 
                                                        ((((0U 
                                                            >= (IData)(vlSelfRef.__PVT__buffer_8_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                            ? 
                                                           vlSelfRef.__PVT__buffer_8_1__DOT__array_0
                                                           [vlSelfRef.__PVT__buffer_8_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U) 
                                                          << 8U) 
                                                         | ((0U 
                                                             >= (IData)(vlSelfRef.__PVT__buffer_8_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                             ? 
                                                            vlSelfRef.__PVT__buffer_8_0__DOT__array_0
                                                            [vlSelfRef.__PVT__buffer_8_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                             : 0U))
                                                         : 
                                                        ((7U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelfRef.__PVT__ridReg)))
                                                          ? 
                                                         ((((0U 
                                                             >= (IData)(vlSelfRef.__PVT__buffer_7_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                             ? 
                                                            vlSelfRef.__PVT__buffer_7_1__DOT__array_0
                                                            [vlSelfRef.__PVT__buffer_7_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                             : 0U) 
                                                           << 8U) 
                                                          | ((0U 
                                                              >= (IData)(vlSelfRef.__PVT__buffer_7_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                              ? 
                                                             vlSelfRef.__PVT__buffer_7_0__DOT__array_0
                                                             [vlSelfRef.__PVT__buffer_7_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                              : 0U))
                                                          : 
                                                         ((6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelfRef.__PVT__ridReg)))
                                                           ? 
                                                          ((((0U 
                                                              >= (IData)(vlSelfRef.__PVT__buffer_6_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                              ? 
                                                             vlSelfRef.__PVT__buffer_6_1__DOT__array_0
                                                             [vlSelfRef.__PVT__buffer_6_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                              : 0U) 
                                                            << 8U) 
                                                           | ((0U 
                                                               >= (IData)(vlSelfRef.__PVT__buffer_6_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                               ? 
                                                              vlSelfRef.__PVT__buffer_6_0__DOT__array_0
                                                              [vlSelfRef.__PVT__buffer_6_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                               : 0U))
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelfRef.__PVT__ridReg)))
                                                            ? 
                                                           ((((0U 
                                                               >= (IData)(vlSelfRef.__PVT__buffer_5_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                               ? 
                                                              vlSelfRef.__PVT__buffer_5_1__DOT__array_0
                                                              [vlSelfRef.__PVT__buffer_5_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                               : 0U) 
                                                             << 8U) 
                                                            | ((0U 
                                                                >= (IData)(vlSelfRef.__PVT__buffer_5_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                ? 
                                                               vlSelfRef.__PVT__buffer_5_0__DOT__array_0
                                                               [vlSelfRef.__PVT__buffer_5_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                : 0U))
                                                            : 
                                                           ((4U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__ridReg)))
                                                             ? 
                                                            ((((0U 
                                                                >= (IData)(vlSelfRef.__PVT__buffer_4_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                ? 
                                                               vlSelfRef.__PVT__buffer_4_1__DOT__array_0
                                                               [vlSelfRef.__PVT__buffer_4_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                : 0U) 
                                                              << 8U) 
                                                             | ((0U 
                                                                 >= (IData)(vlSelfRef.__PVT__buffer_4_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                 ? 
                                                                vlSelfRef.__PVT__buffer_4_0__DOT__array_0
                                                                [vlSelfRef.__PVT__buffer_4_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                 : 0U))
                                                             : 
                                                            ((3U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelfRef.__PVT__ridReg)))
                                                              ? 
                                                             ((((0U 
                                                                 >= (IData)(vlSelfRef.__PVT__buffer_3_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                 ? 
                                                                vlSelfRef.__PVT__buffer_3_1__DOT__array_0
                                                                [vlSelfRef.__PVT__buffer_3_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                 : 0U) 
                                                               << 8U) 
                                                              | ((0U 
                                                                  >= (IData)(vlSelfRef.__PVT__buffer_3_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                  ? 
                                                                 vlSelfRef.__PVT__buffer_3_0__DOT__array_0
                                                                 [vlSelfRef.__PVT__buffer_3_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                  : 0U))
                                                              : 
                                                             ((2U 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__ridReg)))
                                                               ? 
                                                              ((((0U 
                                                                  >= (IData)(vlSelfRef.__PVT__buffer_2_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                  ? 
                                                                 vlSelfRef.__PVT__buffer_2_1__DOT__array_0
                                                                 [vlSelfRef.__PVT__buffer_2_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                  : 0U) 
                                                                << 8U) 
                                                               | ((0U 
                                                                   >= (IData)(vlSelfRef.__PVT__buffer_2_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                   ? 
                                                                  vlSelfRef.__PVT__buffer_2_0__DOT__array_0
                                                                  [vlSelfRef.__PVT__buffer_2_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                   : 0U))
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.__PVT__ridReg)))
                                                                ? 
                                                               ((((0U 
                                                                   >= (IData)(vlSelfRef.__PVT__buffer_1_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                   ? 
                                                                  vlSelfRef.__PVT__buffer_1_1__DOT__array_0
                                                                  [vlSelfRef.__PVT__buffer_1_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                   : 0U) 
                                                                 << 8U) 
                                                                | ((0U 
                                                                    >= (IData)(vlSelfRef.__PVT__buffer_1_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                    ? 
                                                                   vlSelfRef.__PVT__buffer_1_0__DOT__array_0
                                                                   [vlSelfRef.__PVT__buffer_1_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                    : 0U))
                                                                : 
                                                               ((((0U 
                                                                   >= (IData)(vlSelfRef.__PVT__buffer_0_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                   ? 
                                                                  vlSelfRef.__PVT__buffer_0_1__DOT__array_0
                                                                  [vlSelfRef.__PVT__buffer_0_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                   : 0U) 
                                                                 << 8U) 
                                                                | ((0U 
                                                                    >= (IData)(vlSelfRef.__PVT__buffer_0_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                    ? 
                                                                   vlSelfRef.__PVT__buffer_0_0__DOT__array_0
                                                                   [vlSelfRef.__PVT__buffer_0_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                    : 0U)))))))))))))))));
    vlSelfRef.__PVT__buffer_0_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (0U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_1_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (1U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_2_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (2U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_3_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (3U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_4_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (4U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_5_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (5U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_6_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (6U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_7_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (7U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_8_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (8U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_9_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                  & (9U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_10_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                   & (0xaU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_11_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                   & (0xbU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_12_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                   & (0xcU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_13_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                   & (0xdU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_14_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                   & (0xeU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_15_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_refillBufRead_s2_valid) 
                                                   & (0xfU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT___wens_T_1 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                  & (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_7 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                  & (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_13 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_19 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (3U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_25 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_31 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_37 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_43 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (7U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_49 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (8U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_55 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (9U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_61 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (0xaU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_67 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (0xbU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_73 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (0xcU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_79 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (0xdU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_85 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (0xeU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    vlSelfRef.__PVT___wens_T_91 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_valid) 
                                   & (0xfU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_id)));
    if (vlSelfRef.__PVT___wens_T_1) {
        vlSelfRef.__PVT__w_data_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_data = ((IData)(vlSelfRef.__PVT___wens_T_3)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                         : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel = 3U;
    }
    __VdfgRegularize_h748b6d99_3_0 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_3) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_1)));
    if (vlSelfRef.__PVT___wens_T_7) {
        vlSelfRef.__PVT__w_data_1_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_1_data = ((IData)(vlSelfRef.__PVT___wens_T_9)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_1 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_1 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_9) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_7)));
    if (vlSelfRef.__PVT___wens_T_13) {
        vlSelfRef.__PVT__w_data_2_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_2 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_2_data = ((IData)(vlSelfRef.__PVT___wens_T_15)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_2 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_2 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_15) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_13)));
    if (vlSelfRef.__PVT___wens_T_19) {
        vlSelfRef.__PVT__w_data_3_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_3 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_3_data = ((IData)(vlSelfRef.__PVT___wens_T_21)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_3 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_3 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (3U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_21) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_19)));
    if (vlSelfRef.__PVT___wens_T_25) {
        vlSelfRef.__PVT__w_data_4_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_4_data = ((IData)(vlSelfRef.__PVT___wens_T_27)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_4 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_4 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_27) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_25)));
    if (vlSelfRef.__PVT___wens_T_31) {
        vlSelfRef.__PVT__w_data_5_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_5_data = ((IData)(vlSelfRef.__PVT___wens_T_33)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_5 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_5 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_33) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_31)));
    if (vlSelfRef.__PVT___wens_T_37) {
        vlSelfRef.__PVT__w_data_6_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_6_data = ((IData)(vlSelfRef.__PVT___wens_T_39)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_6 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_6 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_39) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_37)));
    if (vlSelfRef.__PVT___wens_T_43) {
        vlSelfRef.__PVT__w_data_7_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_7 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_7_data = ((IData)(vlSelfRef.__PVT___wens_T_45)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_7 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_7 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (7U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_45) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_43)));
    if (vlSelfRef.__PVT___wens_T_49) {
        vlSelfRef.__PVT__w_data_8_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_8 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_8_data = ((IData)(vlSelfRef.__PVT___wens_T_51)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_8 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_8 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (8U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_51) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_49)));
    if (vlSelfRef.__PVT___wens_T_55) {
        vlSelfRef.__PVT__w_data_9_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_9 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_9_data = ((IData)(vlSelfRef.__PVT___wens_T_57)
                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                           : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_9 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_9 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                       & (9U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_57) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_55)));
    if (vlSelfRef.__PVT___wens_T_61) {
        vlSelfRef.__PVT__w_data_10_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_10_data = ((IData)(vlSelfRef.__PVT___wens_T_63)
                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                            : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_10 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_10 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                        & (0xaU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_63) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_61)));
    if (vlSelfRef.__PVT___wens_T_67) {
        vlSelfRef.__PVT__w_data_11_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_11 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_11_data = ((IData)(vlSelfRef.__PVT___wens_T_69)
                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                            : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_11 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_11 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                        & (0xbU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_69) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_67)));
    if (vlSelfRef.__PVT___wens_T_73) {
        vlSelfRef.__PVT__w_data_12_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_12 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_12_data = ((IData)(vlSelfRef.__PVT___wens_T_75)
                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                            : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_12 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_12 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                        & (0xcU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_75) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_73)));
    if (vlSelfRef.__PVT___wens_T_79) {
        vlSelfRef.__PVT__w_data_13_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_13 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_13_data = ((IData)(vlSelfRef.__PVT___wens_T_81)
                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                            : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_13 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_13 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                        & (0xdU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_81) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_79)));
    if (vlSelfRef.__PVT___wens_T_85) {
        vlSelfRef.__PVT__w_data_14_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_14 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_14_data = ((IData)(vlSelfRef.__PVT___wens_T_87)
                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                            : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_14 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_14 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                        & (0xeU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_87) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_85)));
    if (vlSelfRef.__PVT___wens_T_91) {
        vlSelfRef.__PVT__w_data_15_data = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_data_data;
        vlSelfRef.__PVT__w_beat_sel_15 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_refillBufWrite_beat_sel;
    } else {
        vlSelfRef.__PVT__w_data_15_data = ((IData)(vlSelfRef.__PVT___wens_T_93)
                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_refillBufWrite_data_data)
                                            : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        vlSelfRef.__PVT__w_beat_sel_15 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_15 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_refillBufWrite_valid) 
                                        & (0xfU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_93) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_91)));
    vlSelfRef.__PVT__buffer_0_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_0) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel));
    vlSelfRef.__PVT__buffer_0_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_0) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_1_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_1) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_1));
    vlSelfRef.__PVT__buffer_1_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_1) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_1) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_2_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_2) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_2));
    vlSelfRef.__PVT__buffer_2_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_2) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_2) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_3_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_3) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_3));
    vlSelfRef.__PVT__buffer_3_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_3) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_3) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_4_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_4) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_4));
    vlSelfRef.__PVT__buffer_4_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_4) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_4) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_5_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_5) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_5));
    vlSelfRef.__PVT__buffer_5_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_5) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_5) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_6_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_6) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_6));
    vlSelfRef.__PVT__buffer_6_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_6) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_6) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_7_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_7) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_7));
    vlSelfRef.__PVT__buffer_7_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_7) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_7) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_8_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_8) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_8));
    vlSelfRef.__PVT__buffer_8_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_8) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_8) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_9_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_9) 
                                                  & (IData)(vlSelfRef.__PVT__w_beat_sel_9));
    vlSelfRef.__PVT__buffer_9_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_9) 
                                                  & ((IData)(vlSelfRef.__PVT__w_beat_sel_9) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_10_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_10) 
                                                   & (IData)(vlSelfRef.__PVT__w_beat_sel_10));
    vlSelfRef.__PVT__buffer_10_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_10) 
                                                   & ((IData)(vlSelfRef.__PVT__w_beat_sel_10) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_11_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_11) 
                                                   & (IData)(vlSelfRef.__PVT__w_beat_sel_11));
    vlSelfRef.__PVT__buffer_11_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_11) 
                                                   & ((IData)(vlSelfRef.__PVT__w_beat_sel_11) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_12_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_12) 
                                                   & (IData)(vlSelfRef.__PVT__w_beat_sel_12));
    vlSelfRef.__PVT__buffer_12_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_12) 
                                                   & ((IData)(vlSelfRef.__PVT__w_beat_sel_12) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_13_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_13) 
                                                   & (IData)(vlSelfRef.__PVT__w_beat_sel_13));
    vlSelfRef.__PVT__buffer_13_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_13) 
                                                   & ((IData)(vlSelfRef.__PVT__w_beat_sel_13) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_14_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_14) 
                                                   & (IData)(vlSelfRef.__PVT__w_beat_sel_14));
    vlSelfRef.__PVT__buffer_14_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_14) 
                                                   & ((IData)(vlSelfRef.__PVT__w_beat_sel_14) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_15_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_15) 
                                                   & (IData)(vlSelfRef.__PVT__w_beat_sel_15));
    vlSelfRef.__PVT__buffer_15_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_15) 
                                                   & ((IData)(vlSelfRef.__PVT__w_beat_sel_15) 
                                                      >> 1U));
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHRBuffer___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__releaseBuf__0(VTestTop_L2L3L2_MSHRBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHRBuffer___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__releaseBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_r_data_data = ((0xfU == (0xfU & (IData)(vlSelfRef.__PVT__ridReg)))
                                 ? ((((0U >= (IData)(vlSelfRef.__PVT__buffer_15_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                       ? vlSelfRef.__PVT__buffer_15_1__DOT__array_0
                                      [vlSelfRef.__PVT__buffer_15_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                       : 0U) << 8U) 
                                    | ((0U >= (IData)(vlSelfRef.__PVT__buffer_15_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                        ? vlSelfRef.__PVT__buffer_15_0__DOT__array_0
                                       [vlSelfRef.__PVT__buffer_15_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                        : 0U)) : ((0xeU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__ridReg)))
                                                   ? 
                                                  ((((0U 
                                                      >= (IData)(vlSelfRef.__PVT__buffer_14_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                      ? 
                                                     vlSelfRef.__PVT__buffer_14_1__DOT__array_0
                                                     [vlSelfRef.__PVT__buffer_14_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                      : 0U) 
                                                    << 8U) 
                                                   | ((0U 
                                                       >= (IData)(vlSelfRef.__PVT__buffer_14_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                       ? 
                                                      vlSelfRef.__PVT__buffer_14_0__DOT__array_0
                                                      [vlSelfRef.__PVT__buffer_14_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U))
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.__PVT__ridReg)))
                                                    ? 
                                                   ((((0U 
                                                       >= (IData)(vlSelfRef.__PVT__buffer_13_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                       ? 
                                                      vlSelfRef.__PVT__buffer_13_1__DOT__array_0
                                                      [vlSelfRef.__PVT__buffer_13_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                       : 0U) 
                                                     << 8U) 
                                                    | ((0U 
                                                        >= (IData)(vlSelfRef.__PVT__buffer_13_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                        ? 
                                                       vlSelfRef.__PVT__buffer_13_0__DOT__array_0
                                                       [vlSelfRef.__PVT__buffer_13_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                        : 0U))
                                                    : 
                                                   ((0xcU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__ridReg)))
                                                     ? 
                                                    ((((0U 
                                                        >= (IData)(vlSelfRef.__PVT__buffer_12_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                        ? 
                                                       vlSelfRef.__PVT__buffer_12_1__DOT__array_0
                                                       [vlSelfRef.__PVT__buffer_12_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                        : 0U) 
                                                      << 8U) 
                                                     | ((0U 
                                                         >= (IData)(vlSelfRef.__PVT__buffer_12_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                         ? 
                                                        vlSelfRef.__PVT__buffer_12_0__DOT__array_0
                                                        [vlSelfRef.__PVT__buffer_12_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                         : 0U))
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__ridReg)))
                                                      ? 
                                                     ((((0U 
                                                         >= (IData)(vlSelfRef.__PVT__buffer_11_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                         ? 
                                                        vlSelfRef.__PVT__buffer_11_1__DOT__array_0
                                                        [vlSelfRef.__PVT__buffer_11_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                         : 0U) 
                                                       << 8U) 
                                                      | ((0U 
                                                          >= (IData)(vlSelfRef.__PVT__buffer_11_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                          ? 
                                                         vlSelfRef.__PVT__buffer_11_0__DOT__array_0
                                                         [vlSelfRef.__PVT__buffer_11_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U))
                                                      : 
                                                     ((0xaU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelfRef.__PVT__ridReg)))
                                                       ? 
                                                      ((((0U 
                                                          >= (IData)(vlSelfRef.__PVT__buffer_10_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                          ? 
                                                         vlSelfRef.__PVT__buffer_10_1__DOT__array_0
                                                         [vlSelfRef.__PVT__buffer_10_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((0U 
                                                           >= (IData)(vlSelfRef.__PVT__buffer_10_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                           ? 
                                                          vlSelfRef.__PVT__buffer_10_0__DOT__array_0
                                                          [vlSelfRef.__PVT__buffer_10_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                           : 0U))
                                                       : 
                                                      ((9U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.__PVT__ridReg)))
                                                        ? 
                                                       ((((0U 
                                                           >= (IData)(vlSelfRef.__PVT__buffer_9_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                           ? 
                                                          vlSelfRef.__PVT__buffer_9_1__DOT__array_0
                                                          [vlSelfRef.__PVT__buffer_9_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                           : 0U) 
                                                         << 8U) 
                                                        | ((0U 
                                                            >= (IData)(vlSelfRef.__PVT__buffer_9_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                            ? 
                                                           vlSelfRef.__PVT__buffer_9_0__DOT__array_0
                                                           [vlSelfRef.__PVT__buffer_9_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U))
                                                        : 
                                                       ((8U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelfRef.__PVT__ridReg)))
                                                         ? 
                                                        ((((0U 
                                                            >= (IData)(vlSelfRef.__PVT__buffer_8_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                            ? 
                                                           vlSelfRef.__PVT__buffer_8_1__DOT__array_0
                                                           [vlSelfRef.__PVT__buffer_8_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                            : 0U) 
                                                          << 8U) 
                                                         | ((0U 
                                                             >= (IData)(vlSelfRef.__PVT__buffer_8_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                             ? 
                                                            vlSelfRef.__PVT__buffer_8_0__DOT__array_0
                                                            [vlSelfRef.__PVT__buffer_8_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                             : 0U))
                                                         : 
                                                        ((7U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelfRef.__PVT__ridReg)))
                                                          ? 
                                                         ((((0U 
                                                             >= (IData)(vlSelfRef.__PVT__buffer_7_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                             ? 
                                                            vlSelfRef.__PVT__buffer_7_1__DOT__array_0
                                                            [vlSelfRef.__PVT__buffer_7_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                             : 0U) 
                                                           << 8U) 
                                                          | ((0U 
                                                              >= (IData)(vlSelfRef.__PVT__buffer_7_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                              ? 
                                                             vlSelfRef.__PVT__buffer_7_0__DOT__array_0
                                                             [vlSelfRef.__PVT__buffer_7_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                              : 0U))
                                                          : 
                                                         ((6U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelfRef.__PVT__ridReg)))
                                                           ? 
                                                          ((((0U 
                                                              >= (IData)(vlSelfRef.__PVT__buffer_6_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                              ? 
                                                             vlSelfRef.__PVT__buffer_6_1__DOT__array_0
                                                             [vlSelfRef.__PVT__buffer_6_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                              : 0U) 
                                                            << 8U) 
                                                           | ((0U 
                                                               >= (IData)(vlSelfRef.__PVT__buffer_6_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                               ? 
                                                              vlSelfRef.__PVT__buffer_6_0__DOT__array_0
                                                              [vlSelfRef.__PVT__buffer_6_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                               : 0U))
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelfRef.__PVT__ridReg)))
                                                            ? 
                                                           ((((0U 
                                                               >= (IData)(vlSelfRef.__PVT__buffer_5_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                               ? 
                                                              vlSelfRef.__PVT__buffer_5_1__DOT__array_0
                                                              [vlSelfRef.__PVT__buffer_5_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                               : 0U) 
                                                             << 8U) 
                                                            | ((0U 
                                                                >= (IData)(vlSelfRef.__PVT__buffer_5_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                ? 
                                                               vlSelfRef.__PVT__buffer_5_0__DOT__array_0
                                                               [vlSelfRef.__PVT__buffer_5_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                : 0U))
                                                            : 
                                                           ((4U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__ridReg)))
                                                             ? 
                                                            ((((0U 
                                                                >= (IData)(vlSelfRef.__PVT__buffer_4_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                ? 
                                                               vlSelfRef.__PVT__buffer_4_1__DOT__array_0
                                                               [vlSelfRef.__PVT__buffer_4_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                : 0U) 
                                                              << 8U) 
                                                             | ((0U 
                                                                 >= (IData)(vlSelfRef.__PVT__buffer_4_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                 ? 
                                                                vlSelfRef.__PVT__buffer_4_0__DOT__array_0
                                                                [vlSelfRef.__PVT__buffer_4_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                 : 0U))
                                                             : 
                                                            ((3U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelfRef.__PVT__ridReg)))
                                                              ? 
                                                             ((((0U 
                                                                 >= (IData)(vlSelfRef.__PVT__buffer_3_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                 ? 
                                                                vlSelfRef.__PVT__buffer_3_1__DOT__array_0
                                                                [vlSelfRef.__PVT__buffer_3_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                 : 0U) 
                                                               << 8U) 
                                                              | ((0U 
                                                                  >= (IData)(vlSelfRef.__PVT__buffer_3_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                  ? 
                                                                 vlSelfRef.__PVT__buffer_3_0__DOT__array_0
                                                                 [vlSelfRef.__PVT__buffer_3_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                  : 0U))
                                                              : 
                                                             ((2U 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__ridReg)))
                                                               ? 
                                                              ((((0U 
                                                                  >= (IData)(vlSelfRef.__PVT__buffer_2_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                  ? 
                                                                 vlSelfRef.__PVT__buffer_2_1__DOT__array_0
                                                                 [vlSelfRef.__PVT__buffer_2_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                  : 0U) 
                                                                << 8U) 
                                                               | ((0U 
                                                                   >= (IData)(vlSelfRef.__PVT__buffer_2_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                   ? 
                                                                  vlSelfRef.__PVT__buffer_2_0__DOT__array_0
                                                                  [vlSelfRef.__PVT__buffer_2_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                   : 0U))
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.__PVT__ridReg)))
                                                                ? 
                                                               ((((0U 
                                                                   >= (IData)(vlSelfRef.__PVT__buffer_1_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                   ? 
                                                                  vlSelfRef.__PVT__buffer_1_1__DOT__array_0
                                                                  [vlSelfRef.__PVT__buffer_1_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                   : 0U) 
                                                                 << 8U) 
                                                                | ((0U 
                                                                    >= (IData)(vlSelfRef.__PVT__buffer_1_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                    ? 
                                                                   vlSelfRef.__PVT__buffer_1_0__DOT__array_0
                                                                   [vlSelfRef.__PVT__buffer_1_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                    : 0U))
                                                                : 
                                                               ((((0U 
                                                                   >= (IData)(vlSelfRef.__PVT__buffer_0_1__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                   ? 
                                                                  vlSelfRef.__PVT__buffer_0_1__DOT__array_0
                                                                  [vlSelfRef.__PVT__buffer_0_1__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                   : 0U) 
                                                                 << 8U) 
                                                                | ((0U 
                                                                    >= (IData)(vlSelfRef.__PVT__buffer_0_0__DOT__array_0_mem_rdata_addr_pipe_0))
                                                                    ? 
                                                                   vlSelfRef.__PVT__buffer_0_0__DOT__array_0
                                                                   [vlSelfRef.__PVT__buffer_0_0__DOT__array_0_mem_rdata_addr_pipe_0]
                                                                    : 0U)))))))))))))))));
    vlSelfRef.__PVT__buffer_0_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (0U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_1_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (1U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_2_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (2U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_3_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (3U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_4_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (4U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_5_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (5U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_6_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (6U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_7_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (7U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_8_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (8U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_9_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                  & (9U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_10_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                   & (0xaU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_11_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                   & (0xbU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_12_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                   & (0xcU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_13_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                   & (0xdU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_14_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                   & (0xeU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
    vlSelfRef.__PVT__buffer_15_0_io_r_req_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_releaseBufRead_s2_valid) 
                                                   & (0xfU 
                                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_mshrId)));
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHRBuffer___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__releaseBuf__1(VTestTop_L2L3L2_MSHRBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHRBuffer___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__releaseBuf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __PVT__w_beat_sel;
    __PVT__w_beat_sel = 0;
    CData/*1:0*/ __PVT__w_beat_sel_1;
    __PVT__w_beat_sel_1 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_2;
    __PVT__w_beat_sel_2 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_3;
    __PVT__w_beat_sel_3 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_4;
    __PVT__w_beat_sel_4 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_5;
    __PVT__w_beat_sel_5 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_6;
    __PVT__w_beat_sel_6 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_7;
    __PVT__w_beat_sel_7 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_8;
    __PVT__w_beat_sel_8 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_9;
    __PVT__w_beat_sel_9 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_10;
    __PVT__w_beat_sel_10 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_11;
    __PVT__w_beat_sel_11 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_12;
    __PVT__w_beat_sel_12 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_13;
    __PVT__w_beat_sel_13 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_14;
    __PVT__w_beat_sel_14 = 0;
    CData/*1:0*/ __PVT__w_beat_sel_15;
    __PVT__w_beat_sel_15 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_0;
    __VdfgRegularize_h748b6d99_3_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_1;
    __VdfgRegularize_h748b6d99_3_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_2;
    __VdfgRegularize_h748b6d99_3_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_3;
    __VdfgRegularize_h748b6d99_3_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_4;
    __VdfgRegularize_h748b6d99_3_4 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_5;
    __VdfgRegularize_h748b6d99_3_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_6;
    __VdfgRegularize_h748b6d99_3_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_7;
    __VdfgRegularize_h748b6d99_3_7 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_8;
    __VdfgRegularize_h748b6d99_3_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_9;
    __VdfgRegularize_h748b6d99_3_9 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_10;
    __VdfgRegularize_h748b6d99_3_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_11;
    __VdfgRegularize_h748b6d99_3_11 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_12;
    __VdfgRegularize_h748b6d99_3_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_13;
    __VdfgRegularize_h748b6d99_3_13 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_14;
    __VdfgRegularize_h748b6d99_3_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h748b6d99_3_15;
    __VdfgRegularize_h748b6d99_3_15 = 0;
    // Body
    vlSelfRef.__PVT___wens_T_1 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                  & (0U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_7 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                  & (1U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_13 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (2U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_19 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (3U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_25 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (4U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_31 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_37 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (6U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_43 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (7U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_49 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (8U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_55 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (9U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_61 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (0xaU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_67 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (0xbU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_73 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (0xcU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_79 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (0xdU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_85 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (0xeU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_91 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
                                   & (0xfU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.__PVT___wens_T_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                  & (0U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_9 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                  & (1U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (2U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_21 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (3U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_27 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (4U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_33 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_39 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (6U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_45 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (7U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_51 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (8U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_57 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (9U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_63 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (0xaU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_69 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (0xbU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_75 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (0xcU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_81 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (0xdU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_87 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (0xeU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    vlSelfRef.__PVT___wens_T_93 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
                                   & (0xfU == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.io_releaseBufWriteId)));
    if (vlSelfRef.__PVT___wens_T_1) {
        vlSelfRef.__PVT__w_data_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel = 3U;
    } else if (vlSelfRef.__PVT___wens_T_3) {
        vlSelfRef.__PVT__w_data_data = (0xffffU & (
                                                   ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                                    << 8U) 
                                                   | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel = 3U;
    }
    __VdfgRegularize_h748b6d99_3_0 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_3) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_1)));
    if (vlSelfRef.__PVT___wens_T_7) {
        vlSelfRef.__PVT__w_data_1_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_1 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_9) {
        vlSelfRef.__PVT__w_data_1_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel_1 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_1_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_1 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_1 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_9) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_7)));
    if (vlSelfRef.__PVT___wens_T_13) {
        vlSelfRef.__PVT__w_data_2_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_2 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_15) {
        vlSelfRef.__PVT__w_data_2_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel_2 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_2_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_2 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_2 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_15) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_13)));
    if (vlSelfRef.__PVT___wens_T_19) {
        vlSelfRef.__PVT__w_data_3_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_3 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_21) {
        vlSelfRef.__PVT__w_data_3_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel_3 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_3_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_3 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_3 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (3U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_21) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_19)));
    if (vlSelfRef.__PVT___wens_T_25) {
        vlSelfRef.__PVT__w_data_4_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_4 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_27) {
        vlSelfRef.__PVT__w_data_4_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel_4 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_4_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_4 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_4 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_27) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_25)));
    if (vlSelfRef.__PVT___wens_T_31) {
        vlSelfRef.__PVT__w_data_5_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_5 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_33) {
        vlSelfRef.__PVT__w_data_5_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel_5 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_5_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_5 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_5 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_33) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_31)));
    if (vlSelfRef.__PVT___wens_T_37) {
        vlSelfRef.__PVT__w_data_6_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_6 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_39) {
        vlSelfRef.__PVT__w_data_6_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel_6 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_6_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_6 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_6 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_39) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_37)));
    if (vlSelfRef.__PVT___wens_T_43) {
        vlSelfRef.__PVT__w_data_7_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_7 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_45) {
        vlSelfRef.__PVT__w_data_7_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel_7 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_7_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_7 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_7 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (7U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_45) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_43)));
    if (vlSelfRef.__PVT___wens_T_49) {
        vlSelfRef.__PVT__w_data_8_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_8 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_51) {
        vlSelfRef.__PVT__w_data_8_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel_8 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_8_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_8 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_8 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (8U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_51) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_49)));
    if (vlSelfRef.__PVT___wens_T_55) {
        vlSelfRef.__PVT__w_data_9_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_9 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_57) {
        vlSelfRef.__PVT__w_data_9_data = (0xffffU & 
                                          (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                            << 8U) 
                                           | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel_9 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_9_data = (0xffffU & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_9 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_9 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                       & (9U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                      | ((IData)(vlSelfRef.__PVT___wens_T_57) 
                                         | (IData)(vlSelfRef.__PVT___wens_T_55)));
    if (vlSelfRef.__PVT___wens_T_61) {
        vlSelfRef.__PVT__w_data_10_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_10 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_63) {
        vlSelfRef.__PVT__w_data_10_data = (0xffffU 
                                           & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                               << 8U) 
                                              | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel_10 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_10_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_10 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_10 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                        & (0xaU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_63) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_61)));
    if (vlSelfRef.__PVT___wens_T_67) {
        vlSelfRef.__PVT__w_data_11_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_11 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_69) {
        vlSelfRef.__PVT__w_data_11_data = (0xffffU 
                                           & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                               << 8U) 
                                              | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel_11 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_11_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_11 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_11 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                        & (0xbU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_69) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_67)));
    if (vlSelfRef.__PVT___wens_T_73) {
        vlSelfRef.__PVT__w_data_12_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_12 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_75) {
        vlSelfRef.__PVT__w_data_12_data = (0xffffU 
                                           & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                               << 8U) 
                                              | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel_12 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_12_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_12 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_12 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                        & (0xcU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_75) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_73)));
    if (vlSelfRef.__PVT___wens_T_79) {
        vlSelfRef.__PVT__w_data_13_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_13 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_81) {
        vlSelfRef.__PVT__w_data_13_data = (0xffffU 
                                           & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                               << 8U) 
                                              | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel_13 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_13_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_13 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_13 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                        & (0xdU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_81) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_79)));
    if (vlSelfRef.__PVT___wens_T_85) {
        vlSelfRef.__PVT__w_data_14_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_14 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_87) {
        vlSelfRef.__PVT__w_data_14_data = (0xffffU 
                                           & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                               << 8U) 
                                              | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel_14 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_14_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_14 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_14 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                        & (0xeU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_87) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_85)));
    if (vlSelfRef.__PVT___wens_T_91) {
        vlSelfRef.__PVT__w_data_15_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_releaseData_s3));
        __PVT__w_beat_sel_15 = 3U;
    } else if (vlSelfRef.__PVT___wens_T_93) {
        vlSelfRef.__PVT__w_data_15_data = (0xffffU 
                                           & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data) 
                                               << 8U) 
                                              | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data)));
        __PVT__w_beat_sel_15 = (3U & ((IData)(1U) << (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.__PVT__beat)));
    } else {
        vlSelfRef.__PVT__w_data_15_data = (0xffffU 
                                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__io_rdata_REG_data));
        __PVT__w_beat_sel_15 = 3U;
    }
    __VdfgRegularize_h748b6d99_3_15 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_releaseBufWrite_valid) 
                                        & (0xfU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_mshrId))) 
                                       | ((IData)(vlSelfRef.__PVT___wens_T_93) 
                                          | (IData)(vlSelfRef.__PVT___wens_T_91)));
    vlSelfRef.__PVT__buffer_0_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_0) 
                                                  & (IData)(__PVT__w_beat_sel));
    vlSelfRef.__PVT__buffer_0_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_0) 
                                                  & ((IData)(__PVT__w_beat_sel) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_1_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_1) 
                                                  & (IData)(__PVT__w_beat_sel_1));
    vlSelfRef.__PVT__buffer_1_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_1) 
                                                  & ((IData)(__PVT__w_beat_sel_1) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_2_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_2) 
                                                  & (IData)(__PVT__w_beat_sel_2));
    vlSelfRef.__PVT__buffer_2_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_2) 
                                                  & ((IData)(__PVT__w_beat_sel_2) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_3_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_3) 
                                                  & (IData)(__PVT__w_beat_sel_3));
    vlSelfRef.__PVT__buffer_3_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_3) 
                                                  & ((IData)(__PVT__w_beat_sel_3) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_4_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_4) 
                                                  & (IData)(__PVT__w_beat_sel_4));
    vlSelfRef.__PVT__buffer_4_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_4) 
                                                  & ((IData)(__PVT__w_beat_sel_4) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_5_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_5) 
                                                  & (IData)(__PVT__w_beat_sel_5));
    vlSelfRef.__PVT__buffer_5_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_5) 
                                                  & ((IData)(__PVT__w_beat_sel_5) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_6_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_6) 
                                                  & (IData)(__PVT__w_beat_sel_6));
    vlSelfRef.__PVT__buffer_6_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_6) 
                                                  & ((IData)(__PVT__w_beat_sel_6) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_7_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_7) 
                                                  & (IData)(__PVT__w_beat_sel_7));
    vlSelfRef.__PVT__buffer_7_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_7) 
                                                  & ((IData)(__PVT__w_beat_sel_7) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_8_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_8) 
                                                  & (IData)(__PVT__w_beat_sel_8));
    vlSelfRef.__PVT__buffer_8_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_8) 
                                                  & ((IData)(__PVT__w_beat_sel_8) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_9_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_9) 
                                                  & (IData)(__PVT__w_beat_sel_9));
    vlSelfRef.__PVT__buffer_9_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_9) 
                                                  & ((IData)(__PVT__w_beat_sel_9) 
                                                     >> 1U));
    vlSelfRef.__PVT__buffer_10_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_10) 
                                                   & (IData)(__PVT__w_beat_sel_10));
    vlSelfRef.__PVT__buffer_10_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_10) 
                                                   & ((IData)(__PVT__w_beat_sel_10) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_11_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_11) 
                                                   & (IData)(__PVT__w_beat_sel_11));
    vlSelfRef.__PVT__buffer_11_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_11) 
                                                   & ((IData)(__PVT__w_beat_sel_11) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_12_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_12) 
                                                   & (IData)(__PVT__w_beat_sel_12));
    vlSelfRef.__PVT__buffer_12_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_12) 
                                                   & ((IData)(__PVT__w_beat_sel_12) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_13_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_13) 
                                                   & (IData)(__PVT__w_beat_sel_13));
    vlSelfRef.__PVT__buffer_13_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_13) 
                                                   & ((IData)(__PVT__w_beat_sel_13) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_14_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_14) 
                                                   & (IData)(__PVT__w_beat_sel_14));
    vlSelfRef.__PVT__buffer_14_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_14) 
                                                   & ((IData)(__PVT__w_beat_sel_14) 
                                                      >> 1U));
    vlSelfRef.__PVT__buffer_15_0_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_15) 
                                                   & (IData)(__PVT__w_beat_sel_15));
    vlSelfRef.__PVT__buffer_15_1_io_w_req_valid = ((IData)(__VdfgRegularize_h748b6d99_3_15) 
                                                   & ((IData)(__PVT__w_beat_sel_15) 
                                                      >> 1U));
}
