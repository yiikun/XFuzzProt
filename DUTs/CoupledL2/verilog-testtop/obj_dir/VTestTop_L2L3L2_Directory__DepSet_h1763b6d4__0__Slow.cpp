// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_Directory.h"

VL_ATTR_COLD void VTestTop_L2L3L2_Directory___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__0(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__hitVec_1;
    __PVT__hitVec_1 = 0;
    CData/*0:0*/ __PVT__hitVec_2;
    __PVT__hitVec_2 = 0;
    CData/*0:0*/ __PVT__hitVec_3;
    __PVT__hitVec_3 = 0;
    CData/*1:0*/ __PVT__hitWay_hi_1;
    __PVT__hitWay_hi_1 = 0;
    CData/*1:0*/ __PVT__replaceWay;
    __PVT__replaceWay = 0;
    CData/*1:0*/ __PVT__chosenWay;
    __PVT__chosenWay = 0;
    CData/*1:0*/ __PVT__touch_way_s3;
    __PVT__touch_way_s3 = 0;
    // Body
    vlSelfRef.__PVT___resetIdx_T_1 = (0x7fU & ((IData)(vlSelfRef.__PVT__resetIdx) 
                                               - (IData)(1U)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetSet)));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetSet)));
    vlSelfRef.__PVT___GEN_89 = ((0U == (IData)(vlSelfRef.__PVT__resetIdx)) 
                                | (IData)(vlSelfRef.__PVT__resetFinish));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT___GEN_2 
        = ((~ ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState) 
               & (0xfU == (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetSet)))) 
           & (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState));
    __PVT__replaceWay = ((2U & ((IData)(vlSelfRef.__PVT__repl_state_s3) 
                                >> 1U)) | (1U & ((4U 
                                                  & (IData)(vlSelfRef.__PVT__repl_state_s3))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__repl_state_s3) 
                                                  >> 1U)
                                                  : (IData)(vlSelfRef.__PVT__repl_state_s3))));
    __PVT__hitVec_1 = (((IData)(vlSelfRef.__PVT__req_s3_tag) 
                        == (IData)(vlSelfRef.__PVT__tagAll_s3_1)) 
                       & (0U != (IData)(vlSelfRef.__PVT__metaAll_s3_1_state)));
    __PVT__hitVec_2 = (((IData)(vlSelfRef.__PVT__req_s3_tag) 
                        == (IData)(vlSelfRef.__PVT__tagAll_s3_2)) 
                       & (0U != (IData)(vlSelfRef.__PVT__metaAll_s3_2_state)));
    __PVT__hitVec_3 = (((IData)(vlSelfRef.__PVT__req_s3_tag) 
                        == (IData)(vlSelfRef.__PVT__tagAll_s3_3)) 
                       & (0U != (IData)(vlSelfRef.__PVT__metaAll_s3_3_state)));
    __PVT__chosenWay = (((0U == (IData)(vlSelfRef.__PVT__metaAll_s3_0_state)) 
                         | ((0U == (IData)(vlSelfRef.__PVT__metaAll_s3_1_state)) 
                            | ((0U == (IData)(vlSelfRef.__PVT__metaAll_s3_2_state)) 
                               | (0U == (IData)(vlSelfRef.__PVT__metaAll_s3_3_state)))))
                         ? (((0U == (IData)(vlSelfRef.__PVT__metaAll_s3_0_state)) 
                             | (0U == (IData)(vlSelfRef.__PVT__metaAll_s3_1_state)))
                             ? ((0U == (IData)(vlSelfRef.__PVT__metaAll_s3_0_state))
                                 ? 0U : 1U) : ((0U 
                                                == (IData)(vlSelfRef.__PVT__metaAll_s3_2_state))
                                                ? 2U
                                                : 3U))
                         : (IData)(__PVT__replaceWay));
    __PVT__hitWay_hi_1 = (((IData)(__PVT__hitVec_3) 
                           << 1U) | (IData)(__PVT__hitVec_2));
    vlSelfRef.io_resp_hit = ((((IData)(vlSelfRef.__PVT__req_s3_tag) 
                               == (IData)(vlSelfRef.__PVT__tagAll_s3_0)) 
                              & (0U != (IData)(vlSelfRef.__PVT__metaAll_s3_0_state))) 
                             | ((IData)(__PVT__hitVec_1) 
                                | ((IData)(__PVT__hitVec_2) 
                                   | (IData)(__PVT__hitVec_3))));
    vlSelfRef.io_replResp_bits_way = ((1U & ((IData)(vlSelfRef.__PVT__req_s3_wayMask) 
                                             >> (IData)(__PVT__chosenWay)))
                                       ? (IData)(__PVT__chosenWay)
                                       : ((1U & (IData)(vlSelfRef.__PVT__req_s3_wayMask))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__req_s3_wayMask))
                                                    ? 1U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.__PVT__req_s3_wayMask))
                                                     ? 2U
                                                     : 3U))));
    if ((3U == (IData)(vlSelfRef.io_replResp_bits_way))) {
        vlSelfRef.io_replResp_bits_tag = vlSelfRef.__PVT__tagAll_s3_3;
        vlSelfRef.io_replResp_bits_meta_alias = vlSelfRef.__PVT__metaAll_s3_3_alias;
        vlSelfRef.io_replResp_bits_meta_accessed = vlSelfRef.__PVT__metaAll_s3_3_accessed;
        vlSelfRef.io_replResp_bits_meta_dirty = vlSelfRef.__PVT__metaAll_s3_3_dirty;
        vlSelfRef.io_replResp_bits_meta_clients = vlSelfRef.__PVT__metaAll_s3_3_clients;
        vlSelfRef.io_replResp_bits_meta_state = vlSelfRef.__PVT__metaAll_s3_3_state;
    } else if ((2U == (IData)(vlSelfRef.io_replResp_bits_way))) {
        vlSelfRef.io_replResp_bits_tag = vlSelfRef.__PVT__tagAll_s3_2;
        vlSelfRef.io_replResp_bits_meta_alias = vlSelfRef.__PVT__metaAll_s3_2_alias;
        vlSelfRef.io_replResp_bits_meta_accessed = vlSelfRef.__PVT__metaAll_s3_2_accessed;
        vlSelfRef.io_replResp_bits_meta_dirty = vlSelfRef.__PVT__metaAll_s3_2_dirty;
        vlSelfRef.io_replResp_bits_meta_clients = vlSelfRef.__PVT__metaAll_s3_2_clients;
        vlSelfRef.io_replResp_bits_meta_state = vlSelfRef.__PVT__metaAll_s3_2_state;
    } else if ((1U == (IData)(vlSelfRef.io_replResp_bits_way))) {
        vlSelfRef.io_replResp_bits_tag = vlSelfRef.__PVT__tagAll_s3_1;
        vlSelfRef.io_replResp_bits_meta_alias = vlSelfRef.__PVT__metaAll_s3_1_alias;
        vlSelfRef.io_replResp_bits_meta_accessed = vlSelfRef.__PVT__metaAll_s3_1_accessed;
        vlSelfRef.io_replResp_bits_meta_dirty = vlSelfRef.__PVT__metaAll_s3_1_dirty;
        vlSelfRef.io_replResp_bits_meta_clients = vlSelfRef.__PVT__metaAll_s3_1_clients;
        vlSelfRef.io_replResp_bits_meta_state = vlSelfRef.__PVT__metaAll_s3_1_state;
    } else {
        vlSelfRef.io_replResp_bits_tag = vlSelfRef.__PVT__tagAll_s3_0;
        vlSelfRef.io_replResp_bits_meta_alias = vlSelfRef.__PVT__metaAll_s3_0_alias;
        vlSelfRef.io_replResp_bits_meta_accessed = vlSelfRef.__PVT__metaAll_s3_0_accessed;
        vlSelfRef.io_replResp_bits_meta_dirty = vlSelfRef.__PVT__metaAll_s3_0_dirty;
        vlSelfRef.io_replResp_bits_meta_clients = vlSelfRef.__PVT__metaAll_s3_0_clients;
        vlSelfRef.io_replResp_bits_meta_state = vlSelfRef.__PVT__metaAll_s3_0_state;
    }
    vlSelfRef.io_resp_way = ((IData)(vlSelfRef.io_resp_hit)
                              ? (((IData)((0U != (IData)(__PVT__hitWay_hi_1))) 
                                  << 1U) | (IData)(
                                                   (((IData)(__PVT__hitWay_hi_1) 
                                                     >> 1U) 
                                                    | (IData)(__PVT__hitVec_1))))
                              : (IData)(vlSelfRef.io_replResp_bits_way));
    if ((3U == (IData)(vlSelfRef.io_resp_way))) {
        vlSelfRef.io_resp_tag = vlSelfRef.__PVT__tagAll_s3_3;
        vlSelfRef.io_resp_meta_accessed = vlSelfRef.__PVT__metaAll_s3_3_accessed;
        vlSelfRef.io_resp_meta_dirty = vlSelfRef.__PVT__metaAll_s3_3_dirty;
        vlSelfRef.io_resp_meta_alias = vlSelfRef.__PVT__metaAll_s3_3_alias;
        vlSelfRef.io_resp_meta_clients = vlSelfRef.__PVT__metaAll_s3_3_clients;
        vlSelfRef.io_resp_meta_state = vlSelfRef.__PVT__metaAll_s3_3_state;
    } else if ((2U == (IData)(vlSelfRef.io_resp_way))) {
        vlSelfRef.io_resp_tag = vlSelfRef.__PVT__tagAll_s3_2;
        vlSelfRef.io_resp_meta_accessed = vlSelfRef.__PVT__metaAll_s3_2_accessed;
        vlSelfRef.io_resp_meta_dirty = vlSelfRef.__PVT__metaAll_s3_2_dirty;
        vlSelfRef.io_resp_meta_alias = vlSelfRef.__PVT__metaAll_s3_2_alias;
        vlSelfRef.io_resp_meta_clients = vlSelfRef.__PVT__metaAll_s3_2_clients;
        vlSelfRef.io_resp_meta_state = vlSelfRef.__PVT__metaAll_s3_2_state;
    } else if ((1U == (IData)(vlSelfRef.io_resp_way))) {
        vlSelfRef.io_resp_tag = vlSelfRef.__PVT__tagAll_s3_1;
        vlSelfRef.io_resp_meta_accessed = vlSelfRef.__PVT__metaAll_s3_1_accessed;
        vlSelfRef.io_resp_meta_dirty = vlSelfRef.__PVT__metaAll_s3_1_dirty;
        vlSelfRef.io_resp_meta_alias = vlSelfRef.__PVT__metaAll_s3_1_alias;
        vlSelfRef.io_resp_meta_clients = vlSelfRef.__PVT__metaAll_s3_1_clients;
        vlSelfRef.io_resp_meta_state = vlSelfRef.__PVT__metaAll_s3_1_state;
    } else {
        vlSelfRef.io_resp_tag = vlSelfRef.__PVT__tagAll_s3_0;
        vlSelfRef.io_resp_meta_accessed = vlSelfRef.__PVT__metaAll_s3_0_accessed;
        vlSelfRef.io_resp_meta_dirty = vlSelfRef.__PVT__metaAll_s3_0_dirty;
        vlSelfRef.io_resp_meta_alias = vlSelfRef.__PVT__metaAll_s3_0_alias;
        vlSelfRef.io_resp_meta_clients = vlSelfRef.__PVT__metaAll_s3_0_clients;
        vlSelfRef.io_resp_meta_state = vlSelfRef.__PVT__metaAll_s3_0_state;
    }
    __PVT__touch_way_s3 = ((IData)(vlSelfRef.__PVT__refillReqValid_s3)
                            ? (IData)(__PVT__replaceWay)
                            : (IData)(vlSelfRef.io_resp_way));
    if (vlSelfRef.__PVT__resetFinish) {
        vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx 
            = vlSelfRef.__PVT__req_s3_set;
        vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0 
            = ((4U & ((~ ((IData)(__PVT__touch_way_s3) 
                          >> 1U)) << 2U)) | ((2U & 
                                              (((2U 
                                                 & (IData)(__PVT__touch_way_s3))
                                                 ? 
                                                (~ (IData)(__PVT__touch_way_s3))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__repl_state_s3) 
                                                 >> 1U)) 
                                               << 1U)) 
                                             | (1U 
                                                & ((2U 
                                                    & (IData)(__PVT__touch_way_s3))
                                                    ? (IData)(vlSelfRef.__PVT__repl_state_s3)
                                                    : 
                                                   (~ (IData)(__PVT__touch_way_s3))))));
    } else {
        vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx 
            = vlSelfRef.__PVT__resetIdx;
        vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_data_0 = 0U;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_Directory___ctor_var_reset(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_read_ready = VL_RAND_RESET_I(1);
    vlSelf->io_read_valid = VL_RAND_RESET_I(1);
    vlSelf->io_read_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->io_read_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_read_bits_wayMask = VL_RAND_RESET_I(4);
    vlSelf->io_read_bits_replacerInfo_channel = VL_RAND_RESET_I(3);
    vlSelf->io_read_bits_replacerInfo_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_read_bits_replacerInfo_reqSource = VL_RAND_RESET_I(4);
    vlSelf->io_read_bits_refill = VL_RAND_RESET_I(1);
    vlSelf->io_read_bits_mshrId = VL_RAND_RESET_I(8);
    vlSelf->io_resp_hit = VL_RAND_RESET_I(1);
    vlSelf->io_resp_tag = VL_RAND_RESET_I(8);
    vlSelf->io_resp_set = VL_RAND_RESET_I(7);
    vlSelf->io_resp_way = VL_RAND_RESET_I(2);
    vlSelf->io_resp_meta_dirty = VL_RAND_RESET_I(1);
    vlSelf->io_resp_meta_state = VL_RAND_RESET_I(2);
    vlSelf->io_resp_meta_clients = VL_RAND_RESET_I(1);
    vlSelf->io_resp_meta_alias = VL_RAND_RESET_I(2);
    vlSelf->io_resp_meta_accessed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_resp_error = VL_RAND_RESET_I(1);
    vlSelf->io_resp_replacerInfo_channel = VL_RAND_RESET_I(3);
    vlSelf->io_resp_replacerInfo_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_resp_replacerInfo_reqSource = VL_RAND_RESET_I(4);
    vlSelf->io_metaWReq_valid = VL_RAND_RESET_I(1);
    vlSelf->io_metaWReq_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_metaWReq_bits_wayOH = VL_RAND_RESET_I(4);
    vlSelf->io_metaWReq_bits_wmeta_dirty = VL_RAND_RESET_I(1);
    vlSelf->io_metaWReq_bits_wmeta_state = VL_RAND_RESET_I(2);
    vlSelf->io_metaWReq_bits_wmeta_clients = VL_RAND_RESET_I(1);
    vlSelf->io_metaWReq_bits_wmeta_alias = VL_RAND_RESET_I(2);
    vlSelf->io_metaWReq_bits_wmeta_accessed = VL_RAND_RESET_I(1);
    vlSelf->io_tagWReq_valid = VL_RAND_RESET_I(1);
    vlSelf->io_tagWReq_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_tagWReq_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_tagWReq_bits_wtag = VL_RAND_RESET_I(8);
    vlSelf->io_replResp_valid = VL_RAND_RESET_I(1);
    vlSelf->io_replResp_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->io_replResp_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_replResp_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_replResp_bits_meta_dirty = VL_RAND_RESET_I(1);
    vlSelf->io_replResp_bits_meta_state = VL_RAND_RESET_I(2);
    vlSelf->io_replResp_bits_meta_clients = VL_RAND_RESET_I(1);
    vlSelf->io_replResp_bits_meta_alias = VL_RAND_RESET_I(2);
    vlSelf->io_replResp_bits_meta_accessed = VL_RAND_RESET_I(1);
    vlSelf->io_replResp_bits_mshrId = VL_RAND_RESET_I(8);
    vlSelf->io_replResp_bits_retry = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_0_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_0_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_0_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_0_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_1_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_1_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_1_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_1_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_2_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_2_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_2_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_2_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_3_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_3_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_3_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_3_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_4_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_4_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_4_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_4_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_4_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_4_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_4_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_4_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_4_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_4_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_4_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_4_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_4_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_5_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_5_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_5_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_5_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_5_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_5_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_5_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_5_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_5_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_5_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_5_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_5_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_5_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_6_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_6_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_6_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_6_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_6_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_6_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_6_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_6_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_6_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_6_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_6_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_6_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_6_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_7_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_7_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_7_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_7_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_7_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_7_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_7_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_7_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_7_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_7_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_7_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_7_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_7_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_8_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_8_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_8_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_8_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_8_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_8_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_8_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_8_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_8_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_8_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_8_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_8_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_8_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_9_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_9_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_9_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_9_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_9_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_9_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_9_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_9_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_9_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_9_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_9_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_9_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_9_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_10_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_10_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_10_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_10_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_10_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_10_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_10_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_10_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_10_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_10_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_10_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_10_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_10_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_11_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_11_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_11_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_11_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_11_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_11_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_11_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_11_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_11_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_11_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_11_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_11_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_11_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_12_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_12_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_12_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_12_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_12_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_12_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_12_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_12_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_12_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_12_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_12_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_12_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_12_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_13_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_13_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_13_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_13_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_13_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_13_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_13_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_13_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_13_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_13_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_13_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_13_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_13_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_14_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_14_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_14_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_14_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_14_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_14_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_14_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_14_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_14_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_14_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_14_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_14_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_14_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_15_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_15_bits_set = VL_RAND_RESET_I(7);
    vlSelf->io_msInfo_15_bits_way = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_15_bits_reqTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_15_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_15_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_15_bits_releaseNotSent = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_15_bits_metaTag = VL_RAND_RESET_I(8);
    vlSelf->io_msInfo_15_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_15_bits_nestB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_15_bits_mergeB = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_15_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_15_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt_io_w_req_bits_setIdx = VL_RAND_RESET_I(7);
    vlSelf->__PVT__replacer_sram_opt_io_w_req_bits_data_0 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__resetFinish = VL_RAND_RESET_I(1);
    vlSelf->__PVT__resetIdx = VL_RAND_RESET_I(7);
    vlSelf->__PVT__reqValid_s2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reqValid_s3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_s2_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__req_s2_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__req_s2_wayMask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__req_s2_replacerInfo_channel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__req_s2_replacerInfo_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__req_s2_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__req_s3_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__req_s3_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__req_s3_wayMask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__req_s3_replacerInfo_channel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__req_s3_replacerInfo_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__req_s3_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__refillReqValid_s2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__refillReqValid_s3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaAll_s3_0_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaAll_s3_0_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__metaAll_s3_0_clients = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaAll_s3_0_alias = VL_RAND_RESET_I(2);
    vlSelf->__PVT__metaAll_s3_0_accessed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaAll_s3_1_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaAll_s3_1_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__metaAll_s3_1_clients = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaAll_s3_1_alias = VL_RAND_RESET_I(2);
    vlSelf->__PVT__metaAll_s3_1_accessed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaAll_s3_2_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaAll_s3_2_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__metaAll_s3_2_clients = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaAll_s3_2_alias = VL_RAND_RESET_I(2);
    vlSelf->__PVT__metaAll_s3_2_accessed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaAll_s3_3_dirty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaAll_s3_3_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__metaAll_s3_3_clients = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaAll_s3_3_alias = VL_RAND_RESET_I(2);
    vlSelf->__PVT__metaAll_s3_3_accessed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagAll_s3_0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tagAll_s3_1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tagAll_s3_2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tagAll_s3_3 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__repl_state_s3 = VL_RAND_RESET_I(3);
    vlSelf->__PVT___GEN_89 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___resetIdx_T_1 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__tagArray__DOT__banks_0_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__banks_0_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__banks_1_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__banks_1_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__banks_2_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__banks_2_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__banks_3_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__banks_3_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__banks_4_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__banks_4_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__banks_5_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__banks_5_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__banks_6_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__banks_6_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__banks_7_io_r_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__banks_7_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__ren_vec_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__ren_vec_0_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__ren_vec_0_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__ren_vec_0_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__ren_vec___05F0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__ren_vec___05F1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__ren_vec___05F2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__ren_vec___05F3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__ren_vec___05F4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__ren_vec___05F5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__ren_vec___05F6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tagArray__DOT__ren_vec___05F7 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_0__DOT__array_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__tagArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_0__DOT__array_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_0__DOT__array_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_0__DOT__array_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_1__DOT__array_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__tagArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_1__DOT__array_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_1__DOT__array_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_1__DOT__array_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_2__DOT__array_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__tagArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_2__DOT__array_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_2__DOT__array_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_2__DOT__array_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_3__DOT__array_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__tagArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_3__DOT__array_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_3__DOT__array_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_3__DOT__array_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_4__DOT__array_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__tagArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_4__DOT__array_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_4__DOT__array_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_4__DOT__array_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_5__DOT__array_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__tagArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_5__DOT__array_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_5__DOT__array_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_5__DOT__array_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_6__DOT__array_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__tagArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_6__DOT__array_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_6__DOT__array_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_6__DOT__array_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_7__DOT__array_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__tagArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_7__DOT__array_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_7__DOT__array_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tagArray__DOT__banks_7__DOT__array_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__metaArray__DOT__banks_0_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__banks_1_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__banks_2_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__banks_3_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__banks_4_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__banks_5_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__banks_6_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__banks_7_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__ren_vec_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__ren_vec_0_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__ren_vec_0_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__ren_vec_0_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__ren_vec___05F0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__ren_vec___05F1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__ren_vec___05F2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__ren_vec___05F3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__ren_vec___05F4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__ren_vec___05F5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__ren_vec___05F6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__metaArray__DOT__ren_vec___05F7 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_0__DOT__array_0[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data = VL_RAND_RESET_I(7);
    vlSelf->__PVT__metaArray__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_0__DOT__array_1[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_0__DOT__array_2[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_0__DOT__array_3[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_1__DOT__array_0[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__metaArray__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_1__DOT__array_1[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_1__DOT__array_2[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_1__DOT__array_3[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_2__DOT__array_0[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__metaArray__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_2__DOT__array_1[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_2__DOT__array_2[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_2__DOT__array_3[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_3__DOT__array_0[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__metaArray__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_3__DOT__array_1[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_3__DOT__array_2[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_3__DOT__array_3[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_4__DOT__array_0[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__metaArray__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_4__DOT__array_1[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_4__DOT__array_2[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_4__DOT__array_3[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_5__DOT__array_0[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__metaArray__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_5__DOT__array_1[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_5__DOT__array_2[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_5__DOT__array_3[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_6__DOT__array_0[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__metaArray__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_6__DOT__array_1[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_6__DOT__array_2[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_6__DOT__array_3[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_7__DOT__array_0[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__metaArray__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_7__DOT__array_1[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_7__DOT__array_2[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__metaArray__DOT__banks_7__DOT__array_3[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_0_io_r_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_0_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_1_io_r_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_1_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_2_io_r_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_2_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_3_io_r_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_3_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_4_io_r_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_4_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_5_io_r_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_5_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_6_io_r_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_6_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_7_io_r_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_7_io_w_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__ren_vec_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__ren_vec_0_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__ren_vec_0_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__ren_vec_0_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__ren_vec___05F0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__ren_vec___05F1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__ren_vec___05F2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__ren_vec___05F3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__ren_vec___05F4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__ren_vec___05F5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__ren_vec___05F6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__ren_vec___05F7 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetSet = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_0__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_0__DOT___GEN_2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetSet = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_1__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_1__DOT___GEN_2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetSet = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_2__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_2__DOT___GEN_2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetSet = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_3__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_3__DOT___GEN_2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetSet = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_4__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_4__DOT___GEN_2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetSet = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_5__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_5__DOT___GEN_2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetSet = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_6__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_6__DOT___GEN_2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState = VL_RAND_RESET_I(1);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetSet = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_7__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__replacer_sram_opt__DOT__banks_7__DOT___GEN_2 = VL_RAND_RESET_I(1);
}
