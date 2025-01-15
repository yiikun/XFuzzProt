// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "verilated.h"

#include "VVerifyTop_RequestBuffer_2.h"
#include "VVerifyTop__Syms.h"

VL_INLINE_OPT void VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf__4(VVerifyTop_RequestBuffer_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf__4\n"); );
    // Body
    vlSelf->__PVT___canFlow_T_46 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toReqBuf_0) 
                                             | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toReqBuf_1))));
    vlSelf->__PVT__canFlow = ((~ (IData)(vlSelf->__PVT__full)) 
                              & ((~ (IData)((0U != (IData)(vlSelf->__PVT___canFlow_T_38)))) 
                                 & ((~ (IData)(vlSelf->__PVT__chosenQ__DOT__maybe_full)) 
                                    & (IData)(vlSelf->__PVT___canFlow_T_46))));
    if (vlSelf->__PVT__canFlow) {
        vlSelf->io_out_bits_opcode = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf_io_in_bits_opcode;
        vlSelf->io_out_bits_set = (3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_a_bits_address) 
                                         >> 1U));
    } else {
        vlSelf->io_out_bits_opcode = vlSelf->__PVT__chosenQ__DOT__ram_bits_task_opcode
            [0U];
        vlSelf->io_out_bits_set = (3U & vlSelf->__PVT__chosenQ__DOT__ram_bits_task_set
                                   [0U]);
    }
    vlSelf->io_out_valid = (((IData)(vlSelf->__PVT___io_out_valid_T) 
                             & (IData)(vlSelf->__PVT__chosenQ__DOT__maybe_full)) 
                            | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf_io_in_valid) 
                               & (IData)(vlSelf->__PVT__canFlow)));
    vlSelf->__PVT___pipeBlockOut_T_2 = ((IData)(vlSelf->__PVT__buffer_0_task_set) 
                                        == (IData)(vlSelf->io_out_bits_set));
    vlSelf->__PVT___pipeBlockOut_T_3 = ((IData)(vlSelf->__PVT__buffer_1_task_set) 
                                        == (IData)(vlSelf->io_out_bits_set));
    vlSelf->__PVT___pipeBlockOut_T_4 = ((IData)(vlSelf->__PVT__buffer_2_task_set) 
                                        == (IData)(vlSelf->io_out_bits_set));
    vlSelf->__PVT___pipeBlockOut_T_5 = ((IData)(vlSelf->__PVT__buffer_3_task_set) 
                                        == (IData)(vlSelf->io_out_bits_set));
    vlSelf->__PVT__issueArb_io_in_0_valid = ((IData)(vlSelf->__PVT__buffer_0_valid) 
                                             & ((~ 
                                                 ((IData)(vlSelf->io_out_valid) 
                                                  & (IData)(vlSelf->__PVT___pipeBlockOut_T_2))) 
                                                & (IData)(vlSelf->__PVT__buffer_0_rdy)));
    vlSelf->__PVT__issueArb_io_in_1_valid = ((IData)(vlSelf->__PVT__buffer_1_valid) 
                                             & ((~ 
                                                 ((IData)(vlSelf->io_out_valid) 
                                                  & (IData)(vlSelf->__PVT___pipeBlockOut_T_3))) 
                                                & (IData)(vlSelf->__PVT__buffer_1_rdy)));
    vlSelf->__PVT__issueArb_io_in_2_valid = ((IData)(vlSelf->__PVT__buffer_2_valid) 
                                             & ((~ 
                                                 ((IData)(vlSelf->io_out_valid) 
                                                  & (IData)(vlSelf->__PVT___pipeBlockOut_T_4))) 
                                                & (IData)(vlSelf->__PVT__buffer_2_rdy)));
    vlSelf->__PVT__issueArb_io_in_3_valid = ((IData)(vlSelf->__PVT__buffer_3_valid) 
                                             & ((~ 
                                                 ((IData)(vlSelf->io_out_valid) 
                                                  & (IData)(vlSelf->__PVT___pipeBlockOut_T_5))) 
                                                & (IData)(vlSelf->__PVT__buffer_3_rdy)));
    vlSelf->__PVT__chosenQ__DOT__ram_id_MPORT_data 
        = (((IData)(vlSelf->__PVT__issueArb_io_in_1_valid) 
            & (1U > (IData)(vlSelf->__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant)))
            ? 1U : (((IData)(vlSelf->__PVT__issueArb_io_in_2_valid) 
                     & (2U > (IData)(vlSelf->__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant)))
                     ? 2U : (((IData)(vlSelf->__PVT__issueArb_io_in_3_valid) 
                              & (3U > (IData)(vlSelf->__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant)))
                              ? 3U : ((IData)(vlSelf->__PVT__issueArb_io_in_0_valid)
                                       ? 0U : ((IData)(vlSelf->__PVT__issueArb_io_in_1_valid)
                                                ? 1U
                                                : ((IData)(vlSelf->__PVT__issueArb_io_in_2_valid)
                                                    ? 2U
                                                    : 3U))))));
}

VL_INLINE_OPT void VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf__5(VVerifyTop_RequestBuffer_2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf__5\n"); );
    // Init
    CData/*0:0*/ __PVT__chosenQ_io_deq_ready;
    __PVT__chosenQ_io_deq_ready = 0;
    CData/*0:0*/ __PVT__doFlow;
    __PVT__doFlow = 0;
    CData/*0:0*/ __PVT___pipeBlockOut_T;
    __PVT___pipeBlockOut_T = 0;
    CData/*0:0*/ __PVT___T_84;
    __PVT___T_84 = 0;
    // Body
    __PVT__chosenQ_io_deq_ready = (1U & ((~ (IData)(vlSelf->__PVT___io_out_valid_T)) 
                                         | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_sinkA_ready)));
    __PVT___pipeBlockOut_T = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_sinkA_ready) 
                              & (IData)(vlSelf->io_out_valid));
    __PVT__doFlow = ((IData)(vlSelf->__PVT__canFlow) 
                     & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_sinkA_ready));
    vlSelf->__PVT__chosenQ__DOT__do_deq = ((IData)(__PVT__chosenQ_io_deq_ready) 
                                           & (IData)(vlSelf->__PVT__chosenQ__DOT__maybe_full));
    vlSelf->__PVT__issueArb__DOT___ctrl_validMask_grantMask_lastGrant_T 
        = (((~ (IData)(vlSelf->__PVT__chosenQ__DOT__maybe_full)) 
            | (IData)(__PVT__chosenQ_io_deq_ready)) 
           & ((3U == (IData)(vlSelf->__PVT__chosenQ__DOT__ram_id_MPORT_data))
               ? (IData)(vlSelf->__PVT__issueArb_io_in_3_valid)
               : ((2U == (IData)(vlSelf->__PVT__chosenQ__DOT__ram_id_MPORT_data))
                   ? (IData)(vlSelf->__PVT__issueArb_io_in_2_valid)
                   : ((1U == (IData)(vlSelf->__PVT__chosenQ__DOT__ram_id_MPORT_data))
                       ? (IData)(vlSelf->__PVT__issueArb_io_in_1_valid)
                       : (IData)(vlSelf->__PVT__issueArb_io_in_0_valid)))));
    vlSelf->__PVT__s1_Block = (((IData)(__PVT___pipeBlockOut_T) 
                                & (IData)(vlSelf->__PVT___pipeBlockOut_T_2)) 
                               | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_valid) 
                                  & ((IData)(vlSelf->__PVT__buffer_0_task_set) 
                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_bits_set))));
    vlSelf->__PVT__s1_Block_1 = (((IData)(__PVT___pipeBlockOut_T) 
                                  & (IData)(vlSelf->__PVT___pipeBlockOut_T_3)) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_valid) 
                                    & ((IData)(vlSelf->__PVT__buffer_1_task_set) 
                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_bits_set))));
    vlSelf->__PVT__s1_Block_2 = (((IData)(__PVT___pipeBlockOut_T) 
                                  & (IData)(vlSelf->__PVT___pipeBlockOut_T_4)) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_valid) 
                                    & ((IData)(vlSelf->__PVT__buffer_2_task_set) 
                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_bits_set))));
    vlSelf->__PVT__s1_Block_3 = (((IData)(__PVT___pipeBlockOut_T) 
                                  & (IData)(vlSelf->__PVT___pipeBlockOut_T_5)) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_valid) 
                                    & ((IData)(vlSelf->__PVT__buffer_3_task_set) 
                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_bits_set))));
    vlSelf->__PVT__s1Block = (((IData)(__PVT___pipeBlockOut_T) 
                               & ((3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_a_bits_address) 
                                         >> 1U)) == (IData)(vlSelf->io_out_bits_set))) 
                              | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_valid) 
                                 & ((3U & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_a_bits_address) 
                                           >> 1U)) 
                                    == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_bits_set))));
    vlSelf->__PVT__next_counter_1 = (vlSelf->__PVT__counter_1 
                                     + (QData)((IData)(
                                                       ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf_io_in_valid) 
                                                        & (IData)(__PVT__doFlow)))));
    vlSelf->__PVT__alloc = ((~ (IData)(vlSelf->__PVT__full)) 
                            & ((~ ((IData)(__PVT__doFlow) 
                                   | ((IData)(vlSelf->__PVT__dup) 
                                      | (IData)(vlSelf->__PVT__mergeA)))) 
                               & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf_io_in_valid)));
    vlSelf->io_in_ready = (1U & ((~ (IData)(vlSelf->__PVT__full)) 
                                 | ((IData)(__PVT__doFlow) 
                                    | ((IData)(vlSelf->__PVT__mergeA) 
                                       | (IData)(vlSelf->__PVT__dup)))));
    vlSelf->__PVT___GEN_385 = (7U & ((IData)(vlSelf->__PVT__s1_Block)
                                      ? (4U | ((IData)(vlSelf->__PVT__buffer_0_waitMP) 
                                               >> 1U))
                                      : ((IData)(vlSelf->__PVT__buffer_0_waitMP) 
                                         >> 1U)));
    vlSelf->__PVT___GEN_390 = (7U & ((IData)(vlSelf->__PVT__s1_Block_1)
                                      ? (4U | ((IData)(vlSelf->__PVT__buffer_1_waitMP) 
                                               >> 1U))
                                      : ((IData)(vlSelf->__PVT__buffer_1_waitMP) 
                                         >> 1U)));
    vlSelf->__PVT___GEN_395 = (7U & ((IData)(vlSelf->__PVT__s1_Block_2)
                                      ? (4U | ((IData)(vlSelf->__PVT__buffer_2_waitMP) 
                                               >> 1U))
                                      : ((IData)(vlSelf->__PVT__buffer_2_waitMP) 
                                         >> 1U)));
    vlSelf->__PVT___GEN_400 = (7U & ((IData)(vlSelf->__PVT__s1_Block_3)
                                      ? (4U | ((IData)(vlSelf->__PVT__buffer_3_waitMP) 
                                               >> 1U))
                                      : ((IData)(vlSelf->__PVT__buffer_3_waitMP) 
                                         >> 1U)));
    vlSelf->__PVT___buffer_waitMP_T = (((IData)(vlSelf->__PVT__s1Block) 
                                        << 3U) | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toReqBuf_0) 
                                                   << 2U) 
                                                  | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toReqBuf_1) 
                                                     << 1U)));
    vlSelf->__PVT__next_counter_2 = (vlSelf->__PVT__counter_2 
                                     + (QData)((IData)(vlSelf->__PVT__alloc)));
    if (vlSelf->__PVT__alloc) {
        vlSelf->__PVT___GEN_192 = ((0U == (IData)(vlSelf->__PVT__insertIdx)) 
                                   | (IData)(vlSelf->__PVT__buffer_0_valid));
        vlSelf->__PVT___GEN_193 = ((1U == (IData)(vlSelf->__PVT__insertIdx)) 
                                   | (IData)(vlSelf->__PVT__buffer_1_valid));
        vlSelf->__PVT___GEN_194 = ((2U == (IData)(vlSelf->__PVT__insertIdx)) 
                                   | (IData)(vlSelf->__PVT__buffer_2_valid));
        vlSelf->__PVT___GEN_195 = ((3U == (IData)(vlSelf->__PVT__insertIdx)) 
                                   | (IData)(vlSelf->__PVT__buffer_3_valid));
    } else {
        vlSelf->__PVT___GEN_192 = vlSelf->__PVT__buffer_0_valid;
        vlSelf->__PVT___GEN_193 = vlSelf->__PVT__buffer_1_valid;
        vlSelf->__PVT___GEN_194 = vlSelf->__PVT__buffer_2_valid;
        vlSelf->__PVT___GEN_195 = vlSelf->__PVT__buffer_3_valid;
    }
    __PVT___T_84 = ((IData)(vlSelf->io_in_ready) & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf_io_in_valid));
    vlSelf->__PVT__next_counter_4 = (vlSelf->__PVT__counter_4 
                                     + (QData)((IData)(
                                                       ((IData)(__PVT___T_84) 
                                                        & (5U 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf_io_in_bits_opcode))))));
    vlSelf->__PVT__next_counter_5 = (vlSelf->__PVT__counter_5 
                                     + (QData)((IData)(
                                                       ((5U 
                                                         != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf_io_in_bits_opcode)) 
                                                        & (IData)(__PVT___T_84)))));
}
