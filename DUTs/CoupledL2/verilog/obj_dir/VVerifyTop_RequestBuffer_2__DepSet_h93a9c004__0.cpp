// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_RequestBuffer_2.h"
#include "VVerifyTop__Syms.h"

VL_INLINE_OPT void VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf__0(VVerifyTop_RequestBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT___cntEnable_T_4;
    __PVT___cntEnable_T_4 = 0;
    VlUnpacked<CData/*2:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_txChannel;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_txChannel[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_size;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_size[__Vi0] = 0;
    }
    VlUnpacked<CData/*1:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_bufIdx;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_bufIdx[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_aliasTask;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_aliasTask[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_mshrRetry;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_mshrRetry[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_aMergeTask_off;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_aMergeTask_off[__Vi0] = 0;
    }
    VlUnpacked<CData/*1:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_aMergeTask_alias;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_aMergeTask_alias[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData[__Vi0] = 0;
    }
    CData/*0:0*/ __Vdly__REG_4;
    __Vdly__REG_4 = 0;
    CData/*0:0*/ __Vdly__REG;
    __Vdly__REG = 0;
    QData/*63:0*/ __Vdly__max;
    __Vdly__max = 0;
    QData/*63:0*/ __Vdly__max_1;
    __Vdly__max_1 = 0;
    QData/*63:0*/ __Vdly__max_2;
    __Vdly__max_2 = 0;
    QData/*63:0*/ __Vdly__max_3;
    __Vdly__max_3 = 0;
    CData/*0:0*/ __Vdly__REG_2;
    __Vdly__REG_2 = 0;
    CData/*1:0*/ __VdlyVal__chosenQ__DOT__ram_id__v0;
    __VdlyVal__chosenQ__DOT__ram_id__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_id__v0;
    __VdlySet__chosenQ__DOT__ram_id__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_mshrRetry__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrRetry__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0 = 0;
    CData/*1:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_txChannel__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_txChannel__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData__v0 = 0;
    CData/*2:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0 = 0;
    CData/*1:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_set__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_set__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_mergeA__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_mergeA__v0 = 0;
    CData/*2:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId__v0 = 0;
    CData/*0:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_size__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_size__v0 = 0;
    CData/*7:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_off__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_off__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_alias__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_alias__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_opcode__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_opcode__v0 = 0;
    // Body
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_alias__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_state__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dirty__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrRetry__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_useProbeData__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_accessed__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_alias__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_clients__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_dirty__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_needProbeAckData__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_txChannel__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseIdx__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_clients__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_replTask__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_state__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_dirty__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_snpHitRelease__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_alias__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_way__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_param__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_accessed__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_metaWen__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_tagWen__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dsWen__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_off__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_alias__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_opcode__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_mergeA__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_id__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_size__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_off__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_param__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0 = 0U;
    __Vdly__REG_4 = vlSelfRef.__PVT__REG_4;
    __Vdly__REG = vlSelfRef.__PVT__REG;
    __Vdly__REG_2 = vlSelfRef.__PVT__REG_2;
    __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_set__v0 = 0U;
    __Vdly__max = vlSelfRef.__PVT__max;
    __Vdly__max_1 = vlSelfRef.__PVT__max_1;
    __Vdly__max_2 = vlSelfRef.__PVT__max_2;
    __Vdly__max_3 = vlSelfRef.__PVT__max_3;
    if (vlSelfRef.__PVT__issueArb__DOT___ctrl_validMask_grantMask_lastGrant_T) {
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_alias__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_state__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dirty__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_mshrRetry__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_useProbeData__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_accessed__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_alias__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_clients__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_dirty__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_needProbeAckData__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_txChannel__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseIdx__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_clients__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_replTask__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_state__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_dirty__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_snpHitRelease__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_alias__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_way__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_param__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_accessed__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_metaWen__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_tagWen__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dsWen__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_off__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_alias__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_opcode__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_mergeA__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0 = 1U;
        __VdlyVal__chosenQ__DOT__ram_id__v0 = vlSelfRef.__PVT__issueArb_io_chosen;
        __VdlySet__chosenQ__DOT__ram_id__v0 = 1U;
        if ((3U == (IData)(vlSelfRef.__PVT__issueArb_io_chosen))) {
            __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0 
                = vlSelfRef.__PVT__buffer_3_task_size;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_off__v0 
                = vlSelfRef.__PVT__buffer_3_task_off;
            __VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0 
                = vlSelfRef.__PVT__buffer_3_task_sourceId;
            __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0 
                = vlSelfRef.__PVT__buffer_3_task_channel;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_param__v0 
                = vlSelfRef.__PVT__buffer_3_task_param;
            __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0 
                = vlSelfRef.__PVT__buffer_3_task_opcode;
            __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0 
                = vlSelfRef.__PVT__buffer_3_task_tag;
            __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0 
                = vlSelfRef.__PVT__buffer_3_task_set;
        } else if ((2U == (IData)(vlSelfRef.__PVT__issueArb_io_chosen))) {
            __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0 
                = vlSelfRef.__PVT__buffer_2_task_size;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_off__v0 
                = vlSelfRef.__PVT__buffer_2_task_off;
            __VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0 
                = vlSelfRef.__PVT__buffer_2_task_sourceId;
            __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0 
                = vlSelfRef.__PVT__buffer_2_task_channel;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_param__v0 
                = vlSelfRef.__PVT__buffer_2_task_param;
            __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0 
                = vlSelfRef.__PVT__buffer_2_task_opcode;
            __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0 
                = vlSelfRef.__PVT__buffer_2_task_tag;
            __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0 
                = vlSelfRef.__PVT__buffer_2_task_set;
        } else if ((1U == (IData)(vlSelfRef.__PVT__issueArb_io_chosen))) {
            __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0 
                = vlSelfRef.__PVT__buffer_1_task_size;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_off__v0 
                = vlSelfRef.__PVT__buffer_1_task_off;
            __VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0 
                = vlSelfRef.__PVT__buffer_1_task_sourceId;
            __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0 
                = vlSelfRef.__PVT__buffer_1_task_channel;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_param__v0 
                = vlSelfRef.__PVT__buffer_1_task_param;
            __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0 
                = vlSelfRef.__PVT__buffer_1_task_opcode;
            __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0 
                = vlSelfRef.__PVT__buffer_1_task_tag;
            __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0 
                = vlSelfRef.__PVT__buffer_1_task_set;
        } else {
            __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0 
                = vlSelfRef.__PVT__buffer_0_task_size;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_off__v0 
                = vlSelfRef.__PVT__buffer_0_task_off;
            __VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0 
                = vlSelfRef.__PVT__buffer_0_task_sourceId;
            __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0 
                = vlSelfRef.__PVT__buffer_0_task_channel;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_param__v0 
                = vlSelfRef.__PVT__buffer_0_task_param;
            __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0 
                = vlSelfRef.__PVT__buffer_0_task_opcode;
            __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0 
                = vlSelfRef.__PVT__buffer_0_task_tag;
            __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0 
                = vlSelfRef.__PVT__buffer_0_task_set;
        }
        __VdlySet__chosenQ__DOT__ram_bits_task_size__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_off__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_param__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_set__v0 = 1U;
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT__alloc) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (2U < (7U & ((3U & ((IData)(vlSelfRef.__PVT___canFlow_T_10) 
                                           + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.__VdfgRegularize_h0f5bbeb4_2_6), 1U))) 
                                    + (3U & ((IData)(vlSelfRef.__PVT___canFlow_T_28) 
                                             + (IData)(vlSelfRef.__PVT___canFlow_T_37))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at RequestBuffer.scala:190 assert(PopCount(conflictMask(in)) <= 2.U)\n",0);
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__max = 0ULL;
        __Vdly__max_1 = 0ULL;
        __Vdly__max_2 = 0ULL;
        __Vdly__max_3 = 0ULL;
    } else {
        if (vlSelfRef.__PVT__helper_14_clean) {
            __Vdly__max = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable) 
                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                       > vlSelfRef.__PVT__max))) {
            __Vdly__max = (QData)((IData)(vlSelfRef.__PVT__bufferTimer_0));
        }
        if (vlSelfRef.__PVT__helper_17_clean) {
            __Vdly__max_1 = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable_1) 
                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                       > vlSelfRef.__PVT__max_1))) {
            __Vdly__max_1 = (QData)((IData)(vlSelfRef.__PVT__bufferTimer_1));
        }
        if (vlSelfRef.__PVT__helper_20_clean) {
            __Vdly__max_2 = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable_2) 
                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                       > vlSelfRef.__PVT__max_2))) {
            __Vdly__max_2 = (QData)((IData)(vlSelfRef.__PVT__bufferTimer_2));
        }
        if (vlSelfRef.__PVT__helper_23_clean) {
            __Vdly__max_3 = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable_3) 
                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                       > vlSelfRef.__PVT__max_3))) {
            __Vdly__max_3 = (QData)((IData)(vlSelfRef.__PVT__bufferTimer_3));
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: drop_prefetch, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_timer,
                      64,vlSelfRef.__PVT__next_counter);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_1_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_flow, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_1_timer,
                      64,vlSelfRef.__PVT__next_counter_1);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_alloc, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,vlSelfRef.__PVT__next_counter_2);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_full, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__next_counter_3);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: recv_prefetch, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__next_counter_4);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: recv_normal, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__next_counter_5);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: chosenQ_cancel, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__next_counter_6);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_7_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_mergeA, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_7_timer,
                      64,vlSelfRef.__PVT__next_counter_7);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_util_0, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__next_counter_8);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_9_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_util_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_9_timer,
                      64,vlSelfRef.__PVT__next_counter_9);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_util_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__next_counter_10);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_11_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_util_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_11_timer,
                      64,vlSelfRef.__PVT__next_counter_11);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:293 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_12);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_13);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_14);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_15);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_16);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_17);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_18);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_19);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_20);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_21);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_22);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_23);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_12_13, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_24);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_13_14, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_25);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_14_15, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_26);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_15_16, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_27);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_16_17, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_28);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_17_18, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_29);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_18_19, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_30);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_19_20, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_31);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_20_40, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_32);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_40_60, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_33);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_60_80, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_34);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_80_100, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_35);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_100_120, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_36);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_120_140, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_37);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_140_160, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_38);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_160_180, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_39);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_180_200, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_40);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_200_220, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_41);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_220_240, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_42);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_240_260, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_43);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_260_280, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_44);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_280_300, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_45);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_300_320, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_46);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_320_340, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_47);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_340_360, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_48);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_360_380, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_49);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_380_400, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_50);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_14_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_reqBuf_timer_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_14_timer,
                      64,vlSelfRef.__PVT__next_max);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:293 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_51);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_52);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_53);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_54);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_55);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_56);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_57);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_58);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_59);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_60);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_61);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_62);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_12_13, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_63);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_13_14, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_64);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_14_15, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_65);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_15_16, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_66);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_16_17, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_67);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_17_18, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_68);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_18_19, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_69);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_19_20, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_70);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_20_40, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_71);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_40_60, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_72);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_60_80, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_73);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_80_100, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_74);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_100_120, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_75);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_120_140, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_76);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_140_160, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_77);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_160_180, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_78);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_180_200, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_79);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_200_220, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_80);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_220_240, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_81);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_240_260, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_82);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_260_280, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_83);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_280_300, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_84);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_300_320, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_85);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_320_340, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_86);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_340_360, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_87);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_360_380, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_88);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_380_400, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_89);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_17_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_reqBuf_timer_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_17_timer,
                      64,vlSelfRef.__PVT__next_max_1);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:293 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_90);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_91);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_92);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_93);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_94);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_95);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_96);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_97);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_98);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_99);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_100);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_101);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_12_13, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_102);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_13_14, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_103);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_14_15, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_104);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_15_16, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_105);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_16_17, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_106);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_17_18, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_107);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_18_19, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_108);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_19_20, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_109);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_20_40, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_110);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_40_60, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_111);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_60_80, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_112);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_80_100, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_113);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_100_120, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_114);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_120_140, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_115);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_140_160, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_116);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_160_180, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_117);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_180_200, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_118);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_200_220, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_119);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_220_240, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_120);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_240_260, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_121);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_260_280, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_122);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_280_300, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_123);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_300_320, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_124);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_320_340, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_125);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_340_360, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_126);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_360_380, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_127);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_380_400, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_128);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_20_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_reqBuf_timer_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_20_timer,
                      64,vlSelfRef.__PVT__next_max_2);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:293 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_129);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_130);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_131);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_132);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_133);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_134);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_135);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_136);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_137);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_138);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_139);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_140);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_12_13, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_141);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_13_14, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_142);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_14_15, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_143);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_15_16, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_144);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_16_17, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_145);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_17_18, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_146);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_18_19, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_147);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_19_20, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_148);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_20_40, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_149);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_40_60, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_150);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_60_80, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_151);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_80_100, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_152);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_100_120, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_153);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_120_140, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_154);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_140_160, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_155);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_160_180, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_156);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_180_200, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_157);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_200_220, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_158);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_220_240, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_159);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_240_260, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_160);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_260_280, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_161);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_280_300, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_162);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_300_320, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_163);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_320_340, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_164);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_340_360, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_165);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_360_380, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_166);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_380_400, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_167);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_23_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_reqBuf_timer_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_23_timer,
                      64,vlSelfRef.__PVT__next_max_3);
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__counter_10 = 0ULL;
        vlSelfRef.__PVT__counter_3 = 0ULL;
        vlSelfRef.__PVT__counter_2 = 0ULL;
        vlSelfRef.__PVT__counter_11 = 0ULL;
        vlSelfRef.__PVT__counter_8 = 0ULL;
        vlSelfRef.__PVT__counter_9 = 0ULL;
        vlSelfRef.__PVT__counter_1 = 0ULL;
        vlSelfRef.__PVT__counter_5 = 0ULL;
        vlSelfRef.__PVT__counter_4 = 0ULL;
        vlSelfRef.__PVT__counter_6 = 0ULL;
        vlSelfRef.__PVT__counter = 0ULL;
        vlSelfRef.__PVT__counter_7 = 0ULL;
        vlSelfRef.__PVT__chosenQ__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__buffer_3_task_size = 0U;
        vlSelfRef.__PVT__buffer_2_task_size = 0U;
        vlSelfRef.__PVT__buffer_1_task_size = 0U;
        vlSelfRef.__PVT__buffer_0_task_size = 0U;
        vlSelfRef.__PVT__buffer_3_task_off = 0U;
        vlSelfRef.__PVT__buffer_2_task_off = 0U;
        vlSelfRef.__PVT__buffer_1_task_off = 0U;
        vlSelfRef.__PVT__buffer_0_task_off = 0U;
        vlSelfRef.__PVT__buffer_3_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_2_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_1_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_0_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_3_task_channel = 0U;
        vlSelfRef.__PVT__buffer_2_task_channel = 0U;
        vlSelfRef.__PVT__buffer_1_task_channel = 0U;
        vlSelfRef.__PVT__buffer_0_task_channel = 0U;
        vlSelfRef.__PVT__buffer_3_task_param = 0U;
        vlSelfRef.__PVT__buffer_2_task_param = 0U;
        vlSelfRef.__PVT__buffer_1_task_param = 0U;
        vlSelfRef.__PVT__buffer_0_task_param = 0U;
        vlSelfRef.__PVT__buffer_3_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_2_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_1_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_0_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_3_task_tag = 0U;
        vlSelfRef.__PVT__buffer_2_task_tag = 0U;
        vlSelfRef.__PVT__buffer_1_task_tag = 0U;
        vlSelfRef.__PVT__buffer_0_task_tag = 0U;
        vlSelfRef.__PVT__buffer_3_task_set = 0U;
        vlSelfRef.__PVT__buffer_2_task_set = 0U;
        vlSelfRef.__PVT__buffer_1_task_set = 0U;
        vlSelfRef.__PVT__buffer_0_task_set = 0U;
        vlSelfRef.__PVT__counter_149 = 0ULL;
        vlSelfRef.__PVT__counter_150 = 0ULL;
        vlSelfRef.__PVT__counter_151 = 0ULL;
        vlSelfRef.__PVT__counter_152 = 0ULL;
        vlSelfRef.__PVT__counter_153 = 0ULL;
        vlSelfRef.__PVT__counter_154 = 0ULL;
        vlSelfRef.__PVT__counter_155 = 0ULL;
        vlSelfRef.__PVT__counter_156 = 0ULL;
        vlSelfRef.__PVT__counter_157 = 0ULL;
        vlSelfRef.__PVT__counter_158 = 0ULL;
        vlSelfRef.__PVT__counter_159 = 0ULL;
        vlSelfRef.__PVT__counter_160 = 0ULL;
        vlSelfRef.__PVT__counter_161 = 0ULL;
        vlSelfRef.__PVT__counter_162 = 0ULL;
        vlSelfRef.__PVT__counter_163 = 0ULL;
        vlSelfRef.__PVT__counter_164 = 0ULL;
        vlSelfRef.__PVT__counter_165 = 0ULL;
        vlSelfRef.__PVT__counter_166 = 0ULL;
        vlSelfRef.__PVT__counter_167 = 0ULL;
        vlSelfRef.__PVT__counter_129 = 0ULL;
        vlSelfRef.__PVT__counter_130 = 0ULL;
        vlSelfRef.__PVT__counter_131 = 0ULL;
        vlSelfRef.__PVT__counter_132 = 0ULL;
        vlSelfRef.__PVT__counter_133 = 0ULL;
        vlSelfRef.__PVT__counter_134 = 0ULL;
        vlSelfRef.__PVT__counter_135 = 0ULL;
        vlSelfRef.__PVT__counter_136 = 0ULL;
        vlSelfRef.__PVT__counter_137 = 0ULL;
        vlSelfRef.__PVT__counter_138 = 0ULL;
        vlSelfRef.__PVT__counter_139 = 0ULL;
        vlSelfRef.__PVT__counter_140 = 0ULL;
        vlSelfRef.__PVT__counter_141 = 0ULL;
        vlSelfRef.__PVT__counter_142 = 0ULL;
        vlSelfRef.__PVT__counter_143 = 0ULL;
        vlSelfRef.__PVT__counter_144 = 0ULL;
        vlSelfRef.__PVT__counter_145 = 0ULL;
        vlSelfRef.__PVT__counter_146 = 0ULL;
        vlSelfRef.__PVT__counter_147 = 0ULL;
        vlSelfRef.__PVT__counter_148 = 0ULL;
        vlSelfRef.__PVT__counter_32 = 0ULL;
        vlSelfRef.__PVT__counter_33 = 0ULL;
        vlSelfRef.__PVT__counter_34 = 0ULL;
        vlSelfRef.__PVT__counter_35 = 0ULL;
        vlSelfRef.__PVT__counter_36 = 0ULL;
        vlSelfRef.__PVT__counter_37 = 0ULL;
        vlSelfRef.__PVT__counter_38 = 0ULL;
        vlSelfRef.__PVT__counter_39 = 0ULL;
        vlSelfRef.__PVT__counter_40 = 0ULL;
        vlSelfRef.__PVT__counter_41 = 0ULL;
        vlSelfRef.__PVT__counter_42 = 0ULL;
        vlSelfRef.__PVT__counter_43 = 0ULL;
        vlSelfRef.__PVT__counter_44 = 0ULL;
        vlSelfRef.__PVT__counter_45 = 0ULL;
        vlSelfRef.__PVT__counter_46 = 0ULL;
        vlSelfRef.__PVT__counter_47 = 0ULL;
        vlSelfRef.__PVT__counter_48 = 0ULL;
        vlSelfRef.__PVT__counter_49 = 0ULL;
        vlSelfRef.__PVT__counter_50 = 0ULL;
        vlSelfRef.__PVT__counter_71 = 0ULL;
        vlSelfRef.__PVT__counter_72 = 0ULL;
        vlSelfRef.__PVT__counter_73 = 0ULL;
        vlSelfRef.__PVT__counter_74 = 0ULL;
        vlSelfRef.__PVT__counter_75 = 0ULL;
        vlSelfRef.__PVT__counter_76 = 0ULL;
        vlSelfRef.__PVT__counter_77 = 0ULL;
        vlSelfRef.__PVT__counter_78 = 0ULL;
        vlSelfRef.__PVT__counter_79 = 0ULL;
        vlSelfRef.__PVT__counter_80 = 0ULL;
        vlSelfRef.__PVT__counter_81 = 0ULL;
        vlSelfRef.__PVT__counter_82 = 0ULL;
        vlSelfRef.__PVT__counter_83 = 0ULL;
        vlSelfRef.__PVT__counter_84 = 0ULL;
        vlSelfRef.__PVT__counter_85 = 0ULL;
        vlSelfRef.__PVT__counter_86 = 0ULL;
        vlSelfRef.__PVT__counter_87 = 0ULL;
        vlSelfRef.__PVT__counter_88 = 0ULL;
        vlSelfRef.__PVT__counter_89 = 0ULL;
        vlSelfRef.__PVT__counter_110 = 0ULL;
        vlSelfRef.__PVT__counter_111 = 0ULL;
        vlSelfRef.__PVT__counter_112 = 0ULL;
        vlSelfRef.__PVT__counter_113 = 0ULL;
        vlSelfRef.__PVT__counter_114 = 0ULL;
        vlSelfRef.__PVT__counter_115 = 0ULL;
        vlSelfRef.__PVT__counter_116 = 0ULL;
        vlSelfRef.__PVT__counter_117 = 0ULL;
        vlSelfRef.__PVT__counter_118 = 0ULL;
        vlSelfRef.__PVT__counter_119 = 0ULL;
        vlSelfRef.__PVT__counter_120 = 0ULL;
        vlSelfRef.__PVT__counter_121 = 0ULL;
        vlSelfRef.__PVT__counter_122 = 0ULL;
        vlSelfRef.__PVT__counter_123 = 0ULL;
        vlSelfRef.__PVT__counter_124 = 0ULL;
        vlSelfRef.__PVT__counter_125 = 0ULL;
        vlSelfRef.__PVT__counter_126 = 0ULL;
        vlSelfRef.__PVT__counter_127 = 0ULL;
        vlSelfRef.__PVT__counter_128 = 0ULL;
        vlSelfRef.__PVT__counter_12 = 0ULL;
        vlSelfRef.__PVT__counter_13 = 0ULL;
        vlSelfRef.__PVT__counter_14 = 0ULL;
        vlSelfRef.__PVT__counter_15 = 0ULL;
        vlSelfRef.__PVT__counter_16 = 0ULL;
        vlSelfRef.__PVT__counter_17 = 0ULL;
        vlSelfRef.__PVT__counter_18 = 0ULL;
        vlSelfRef.__PVT__counter_19 = 0ULL;
        vlSelfRef.__PVT__counter_20 = 0ULL;
        vlSelfRef.__PVT__counter_21 = 0ULL;
        vlSelfRef.__PVT__counter_22 = 0ULL;
        vlSelfRef.__PVT__counter_23 = 0ULL;
        vlSelfRef.__PVT__counter_24 = 0ULL;
        vlSelfRef.__PVT__counter_25 = 0ULL;
        vlSelfRef.__PVT__counter_26 = 0ULL;
        vlSelfRef.__PVT__counter_27 = 0ULL;
        vlSelfRef.__PVT__counter_28 = 0ULL;
        vlSelfRef.__PVT__counter_29 = 0ULL;
        vlSelfRef.__PVT__counter_30 = 0ULL;
        vlSelfRef.__PVT__counter_31 = 0ULL;
        vlSelfRef.__PVT__counter_51 = 0ULL;
        vlSelfRef.__PVT__counter_52 = 0ULL;
        vlSelfRef.__PVT__counter_53 = 0ULL;
        vlSelfRef.__PVT__counter_54 = 0ULL;
        vlSelfRef.__PVT__counter_55 = 0ULL;
        vlSelfRef.__PVT__counter_56 = 0ULL;
        vlSelfRef.__PVT__counter_57 = 0ULL;
        vlSelfRef.__PVT__counter_58 = 0ULL;
        vlSelfRef.__PVT__counter_59 = 0ULL;
        vlSelfRef.__PVT__counter_60 = 0ULL;
        vlSelfRef.__PVT__counter_61 = 0ULL;
        vlSelfRef.__PVT__counter_62 = 0ULL;
        vlSelfRef.__PVT__counter_63 = 0ULL;
        vlSelfRef.__PVT__counter_64 = 0ULL;
        vlSelfRef.__PVT__counter_65 = 0ULL;
        vlSelfRef.__PVT__counter_66 = 0ULL;
        vlSelfRef.__PVT__counter_67 = 0ULL;
        vlSelfRef.__PVT__counter_68 = 0ULL;
        vlSelfRef.__PVT__counter_69 = 0ULL;
        vlSelfRef.__PVT__counter_70 = 0ULL;
        vlSelfRef.__PVT__counter_90 = 0ULL;
        vlSelfRef.__PVT__counter_91 = 0ULL;
        vlSelfRef.__PVT__counter_92 = 0ULL;
        vlSelfRef.__PVT__counter_93 = 0ULL;
        vlSelfRef.__PVT__counter_94 = 0ULL;
        vlSelfRef.__PVT__counter_95 = 0ULL;
        vlSelfRef.__PVT__counter_96 = 0ULL;
        vlSelfRef.__PVT__counter_97 = 0ULL;
        vlSelfRef.__PVT__counter_98 = 0ULL;
        vlSelfRef.__PVT__counter_99 = 0ULL;
        vlSelfRef.__PVT__counter_100 = 0ULL;
        vlSelfRef.__PVT__counter_101 = 0ULL;
        vlSelfRef.__PVT__counter_102 = 0ULL;
        vlSelfRef.__PVT__counter_103 = 0ULL;
        vlSelfRef.__PVT__counter_104 = 0ULL;
        vlSelfRef.__PVT__counter_105 = 0ULL;
        vlSelfRef.__PVT__counter_106 = 0ULL;
        vlSelfRef.__PVT__counter_107 = 0ULL;
        vlSelfRef.__PVT__counter_108 = 0ULL;
        vlSelfRef.__PVT__counter_109 = 0ULL;
        vlSelfRef.__PVT__buffer_3_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_3 = 0U;
        vlSelfRef.__PVT__buffer_3_waitMS = 0U;
        vlSelfRef.__PVT__buffer_3_waitMP = 0U;
        vlSelfRef.__PVT__buffer_0_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_0 = 0U;
        vlSelfRef.__PVT__buffer_0_waitMS = 0U;
        vlSelfRef.__PVT__buffer_0_waitMP = 0U;
        vlSelfRef.__PVT__buffer_1_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_1 = 0U;
        vlSelfRef.__PVT__buffer_1_waitMS = 0U;
        vlSelfRef.__PVT__buffer_1_waitMP = 0U;
        vlSelfRef.__PVT__buffer_2_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_2 = 0U;
        vlSelfRef.__PVT__buffer_2_waitMS = 0U;
        vlSelfRef.__PVT__buffer_2_waitMP = 0U;
    } else {
        vlSelfRef.__PVT__counter_10 = ((IData)(vlSelfRef.__PVT__helper_10_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_10);
        vlSelfRef.__PVT__counter_3 = ((IData)(vlSelfRef.__PVT__helper_3_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_3);
        vlSelfRef.__PVT__counter_2 = ((IData)(vlSelfRef.__PVT__helper_2_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_2);
        vlSelfRef.__PVT__counter_11 = ((IData)(vlSelfRef.__PVT__helper_11_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_11);
        vlSelfRef.__PVT__counter_8 = ((IData)(vlSelfRef.__PVT__helper_8_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_8);
        vlSelfRef.__PVT__counter_9 = ((IData)(vlSelfRef.__PVT__helper_9_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_9);
        vlSelfRef.__PVT__counter_1 = ((IData)(vlSelfRef.__PVT__helper_1_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_1);
        vlSelfRef.__PVT__counter_5 = ((IData)(vlSelfRef.__PVT__helper_5_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_5);
        vlSelfRef.__PVT__counter_4 = ((IData)(vlSelfRef.__PVT__helper_4_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_4);
        vlSelfRef.__PVT__counter_6 = ((IData)(vlSelfRef.__PVT__helper_6_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_6);
        vlSelfRef.__PVT__counter = ((IData)(vlSelfRef.__PVT__helper_clean)
                                     ? 0ULL : vlSelfRef.__PVT__next_counter);
        vlSelfRef.__PVT__counter_7 = ((IData)(vlSelfRef.__PVT__helper_7_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_7);
        if (((IData)(vlSelfRef.__PVT__issueArb__DOT___ctrl_validMask_grantMask_lastGrant_T) 
             != (IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq))) {
            vlSelfRef.__PVT__chosenQ__DOT__maybe_full 
                = vlSelfRef.__PVT__issueArb__DOT___ctrl_validMask_grantMask_lastGrant_T;
        }
        if (vlSelfRef.__PVT__alloc) {
            if ((3U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_3_task_size 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_3_task_off 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_3_task_sourceId 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_3_task_channel = 1U;
                vlSelfRef.__PVT__buffer_3_task_param 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_3_task_opcode 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_3_task_tag 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_3_task_set 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
            if ((2U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_2_task_size 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_2_task_off 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_2_task_sourceId 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_2_task_channel = 1U;
                vlSelfRef.__PVT__buffer_2_task_param 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_2_task_opcode 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_2_task_tag 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_2_task_set 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
            if ((1U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_1_task_size 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_1_task_off 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_1_task_sourceId 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_1_task_channel = 1U;
                vlSelfRef.__PVT__buffer_1_task_param 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_1_task_opcode 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_1_task_tag 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_1_task_set 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
            if ((0U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_0_task_size 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_0_task_off 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_0_task_sourceId 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_0_task_channel = 1U;
                vlSelfRef.__PVT__buffer_0_task_param 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_0_task_opcode 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_0_task_tag 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_0_task_set 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
        }
        if (vlSelfRef.__PVT__helper_22_clean) {
            vlSelfRef.__PVT__counter_149 = 0ULL;
            vlSelfRef.__PVT__counter_150 = 0ULL;
            vlSelfRef.__PVT__counter_151 = 0ULL;
            vlSelfRef.__PVT__counter_152 = 0ULL;
            vlSelfRef.__PVT__counter_153 = 0ULL;
            vlSelfRef.__PVT__counter_154 = 0ULL;
            vlSelfRef.__PVT__counter_155 = 0ULL;
            vlSelfRef.__PVT__counter_156 = 0ULL;
            vlSelfRef.__PVT__counter_157 = 0ULL;
            vlSelfRef.__PVT__counter_158 = 0ULL;
            vlSelfRef.__PVT__counter_159 = 0ULL;
            vlSelfRef.__PVT__counter_160 = 0ULL;
            vlSelfRef.__PVT__counter_161 = 0ULL;
            vlSelfRef.__PVT__counter_162 = 0ULL;
            vlSelfRef.__PVT__counter_163 = 0ULL;
            vlSelfRef.__PVT__counter_164 = 0ULL;
            vlSelfRef.__PVT__counter_165 = 0ULL;
            vlSelfRef.__PVT__counter_166 = 0ULL;
            vlSelfRef.__PVT__counter_167 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x14U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x28U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_149 = vlSelfRef.__PVT___counter_T_287;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x28U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x3cU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_150 = vlSelfRef.__PVT___counter_T_289;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x3cU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x50U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_151 = vlSelfRef.__PVT___counter_T_291;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x50U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x64U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_152 = vlSelfRef.__PVT___counter_T_293;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x64U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x78U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_153 = vlSelfRef.__PVT___counter_T_295;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x78U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x8cU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_154 = vlSelfRef.__PVT___counter_T_297;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x8cU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xa0U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_155 = vlSelfRef.__PVT___counter_T_299;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xa0U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xb4U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_156 = vlSelfRef.__PVT___counter_T_301;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xb4U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xc8U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_157 = vlSelfRef.__PVT___counter_T_303;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xc8U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xdcU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_158 = vlSelfRef.__PVT___counter_T_305;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xdcU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xf0U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_159 = vlSelfRef.__PVT___counter_T_307;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xf0U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x104U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_160 = vlSelfRef.__PVT___counter_T_309;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x104U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x118U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_161 = vlSelfRef.__PVT___counter_T_311;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x118U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x12cU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_162 = vlSelfRef.__PVT___counter_T_313;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x12cU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x140U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_163 = vlSelfRef.__PVT___counter_T_315;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x140U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x154U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_164 = vlSelfRef.__PVT___counter_T_317;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x154U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x168U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_165 = vlSelfRef.__PVT___counter_T_319;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x168U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x17cU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_166 = vlSelfRef.__PVT___counter_T_321;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & (((0x17cU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                     & (0x190U > (IData)(vlSelfRef.__PVT__bufferTimer_3))) 
                    | (0x190U <= (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_167 = vlSelfRef.__PVT___counter_T_323;
            }
        }
        if (vlSelfRef.__PVT__helper_21_clean) {
            vlSelfRef.__PVT__counter_129 = 0ULL;
            vlSelfRef.__PVT__counter_130 = 0ULL;
            vlSelfRef.__PVT__counter_131 = 0ULL;
            vlSelfRef.__PVT__counter_132 = 0ULL;
            vlSelfRef.__PVT__counter_133 = 0ULL;
            vlSelfRef.__PVT__counter_134 = 0ULL;
            vlSelfRef.__PVT__counter_135 = 0ULL;
            vlSelfRef.__PVT__counter_136 = 0ULL;
            vlSelfRef.__PVT__counter_137 = 0ULL;
            vlSelfRef.__PVT__counter_138 = 0ULL;
            vlSelfRef.__PVT__counter_139 = 0ULL;
            vlSelfRef.__PVT__counter_140 = 0ULL;
            vlSelfRef.__PVT__counter_141 = 0ULL;
            vlSelfRef.__PVT__counter_142 = 0ULL;
            vlSelfRef.__PVT__counter_143 = 0ULL;
            vlSelfRef.__PVT__counter_144 = 0ULL;
            vlSelfRef.__PVT__counter_145 = 0ULL;
            vlSelfRef.__PVT__counter_146 = 0ULL;
            vlSelfRef.__PVT__counter_147 = 0ULL;
            vlSelfRef.__PVT__counter_148 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & (1U > (IData)(vlSelfRef.__PVT__bufferTimer_3)))) {
                vlSelfRef.__PVT__counter_129 = vlSelfRef.__PVT___counter_T_247;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((1U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (2U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_130 = vlSelfRef.__PVT___counter_T_249;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((2U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (3U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_131 = vlSelfRef.__PVT___counter_T_251;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((3U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (4U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_132 = vlSelfRef.__PVT___counter_T_253;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((4U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (5U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_133 = vlSelfRef.__PVT___counter_T_255;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((5U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (6U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_134 = vlSelfRef.__PVT___counter_T_257;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((6U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (7U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_135 = vlSelfRef.__PVT___counter_T_259;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((7U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (8U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_136 = vlSelfRef.__PVT___counter_T_261;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((8U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (9U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_137 = vlSelfRef.__PVT___counter_T_263;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((9U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xaU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_138 = vlSelfRef.__PVT___counter_T_265;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xaU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xbU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_139 = vlSelfRef.__PVT___counter_T_267;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xbU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xcU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_140 = vlSelfRef.__PVT___counter_T_269;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xcU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xdU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_141 = vlSelfRef.__PVT___counter_T_271;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xdU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xeU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_142 = vlSelfRef.__PVT___counter_T_273;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xeU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xfU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_143 = vlSelfRef.__PVT___counter_T_275;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xfU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x10U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_144 = vlSelfRef.__PVT___counter_T_277;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x10U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x11U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_145 = vlSelfRef.__PVT___counter_T_279;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x11U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x12U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_146 = vlSelfRef.__PVT___counter_T_281;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x12U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x13U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_147 = vlSelfRef.__PVT___counter_T_283;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x13U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x14U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_148 = vlSelfRef.__PVT___counter_T_285;
            }
        }
        if (vlSelfRef.__PVT__helper_13_clean) {
            vlSelfRef.__PVT__counter_32 = 0ULL;
            vlSelfRef.__PVT__counter_33 = 0ULL;
            vlSelfRef.__PVT__counter_34 = 0ULL;
            vlSelfRef.__PVT__counter_35 = 0ULL;
            vlSelfRef.__PVT__counter_36 = 0ULL;
            vlSelfRef.__PVT__counter_37 = 0ULL;
            vlSelfRef.__PVT__counter_38 = 0ULL;
            vlSelfRef.__PVT__counter_39 = 0ULL;
            vlSelfRef.__PVT__counter_40 = 0ULL;
            vlSelfRef.__PVT__counter_41 = 0ULL;
            vlSelfRef.__PVT__counter_42 = 0ULL;
            vlSelfRef.__PVT__counter_43 = 0ULL;
            vlSelfRef.__PVT__counter_44 = 0ULL;
            vlSelfRef.__PVT__counter_45 = 0ULL;
            vlSelfRef.__PVT__counter_46 = 0ULL;
            vlSelfRef.__PVT__counter_47 = 0ULL;
            vlSelfRef.__PVT__counter_48 = 0ULL;
            vlSelfRef.__PVT__counter_49 = 0ULL;
            vlSelfRef.__PVT__counter_50 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x14U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x28U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_32 = vlSelfRef.__PVT___counter_T_53;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x28U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x3cU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_33 = vlSelfRef.__PVT___counter_T_55;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x3cU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x50U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_34 = vlSelfRef.__PVT___counter_T_57;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x50U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x64U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_35 = vlSelfRef.__PVT___counter_T_59;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x64U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x78U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_36 = vlSelfRef.__PVT___counter_T_61;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x78U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x8cU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_37 = vlSelfRef.__PVT___counter_T_63;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x8cU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xa0U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_38 = vlSelfRef.__PVT___counter_T_65;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xa0U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xb4U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_39 = vlSelfRef.__PVT___counter_T_67;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xb4U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xc8U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_40 = vlSelfRef.__PVT___counter_T_69;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xc8U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xdcU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_41 = vlSelfRef.__PVT___counter_T_71;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xdcU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xf0U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_42 = vlSelfRef.__PVT___counter_T_73;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xf0U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x104U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_43 = vlSelfRef.__PVT___counter_T_75;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x104U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x118U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_44 = vlSelfRef.__PVT___counter_T_77;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x118U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x12cU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_45 = vlSelfRef.__PVT___counter_T_79;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x12cU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x140U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_46 = vlSelfRef.__PVT___counter_T_81;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x140U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x154U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_47 = vlSelfRef.__PVT___counter_T_83;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x154U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x168U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_48 = vlSelfRef.__PVT___counter_T_85;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x168U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x17cU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_49 = vlSelfRef.__PVT___counter_T_87;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 (((0x17cU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                   & (0x190U > (IData)(vlSelfRef.__PVT__bufferTimer_0))) 
                  | (0x190U <= (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_50 = vlSelfRef.__PVT___counter_T_89;
            }
        }
        if (vlSelfRef.__PVT__helper_16_clean) {
            vlSelfRef.__PVT__counter_71 = 0ULL;
            vlSelfRef.__PVT__counter_72 = 0ULL;
            vlSelfRef.__PVT__counter_73 = 0ULL;
            vlSelfRef.__PVT__counter_74 = 0ULL;
            vlSelfRef.__PVT__counter_75 = 0ULL;
            vlSelfRef.__PVT__counter_76 = 0ULL;
            vlSelfRef.__PVT__counter_77 = 0ULL;
            vlSelfRef.__PVT__counter_78 = 0ULL;
            vlSelfRef.__PVT__counter_79 = 0ULL;
            vlSelfRef.__PVT__counter_80 = 0ULL;
            vlSelfRef.__PVT__counter_81 = 0ULL;
            vlSelfRef.__PVT__counter_82 = 0ULL;
            vlSelfRef.__PVT__counter_83 = 0ULL;
            vlSelfRef.__PVT__counter_84 = 0ULL;
            vlSelfRef.__PVT__counter_85 = 0ULL;
            vlSelfRef.__PVT__counter_86 = 0ULL;
            vlSelfRef.__PVT__counter_87 = 0ULL;
            vlSelfRef.__PVT__counter_88 = 0ULL;
            vlSelfRef.__PVT__counter_89 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x14U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x28U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_71 = vlSelfRef.__PVT___counter_T_131;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x28U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x3cU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_72 = vlSelfRef.__PVT___counter_T_133;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x3cU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x50U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_73 = vlSelfRef.__PVT___counter_T_135;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x50U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x64U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_74 = vlSelfRef.__PVT___counter_T_137;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x64U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x78U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_75 = vlSelfRef.__PVT___counter_T_139;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x78U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x8cU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_76 = vlSelfRef.__PVT___counter_T_141;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x8cU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xa0U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_77 = vlSelfRef.__PVT___counter_T_143;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xa0U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xb4U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_78 = vlSelfRef.__PVT___counter_T_145;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xb4U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xc8U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_79 = vlSelfRef.__PVT___counter_T_147;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xc8U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xdcU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_80 = vlSelfRef.__PVT___counter_T_149;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xdcU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xf0U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_81 = vlSelfRef.__PVT___counter_T_151;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xf0U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x104U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_82 = vlSelfRef.__PVT___counter_T_153;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x104U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x118U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_83 = vlSelfRef.__PVT___counter_T_155;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x118U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x12cU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_84 = vlSelfRef.__PVT___counter_T_157;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x12cU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x140U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_85 = vlSelfRef.__PVT___counter_T_159;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x140U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x154U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_86 = vlSelfRef.__PVT___counter_T_161;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x154U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x168U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_87 = vlSelfRef.__PVT___counter_T_163;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x168U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x17cU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_88 = vlSelfRef.__PVT___counter_T_165;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & (((0x17cU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                     & (0x190U > (IData)(vlSelfRef.__PVT__bufferTimer_1))) 
                    | (0x190U <= (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_89 = vlSelfRef.__PVT___counter_T_167;
            }
        }
        if (vlSelfRef.__PVT__helper_19_clean) {
            vlSelfRef.__PVT__counter_110 = 0ULL;
            vlSelfRef.__PVT__counter_111 = 0ULL;
            vlSelfRef.__PVT__counter_112 = 0ULL;
            vlSelfRef.__PVT__counter_113 = 0ULL;
            vlSelfRef.__PVT__counter_114 = 0ULL;
            vlSelfRef.__PVT__counter_115 = 0ULL;
            vlSelfRef.__PVT__counter_116 = 0ULL;
            vlSelfRef.__PVT__counter_117 = 0ULL;
            vlSelfRef.__PVT__counter_118 = 0ULL;
            vlSelfRef.__PVT__counter_119 = 0ULL;
            vlSelfRef.__PVT__counter_120 = 0ULL;
            vlSelfRef.__PVT__counter_121 = 0ULL;
            vlSelfRef.__PVT__counter_122 = 0ULL;
            vlSelfRef.__PVT__counter_123 = 0ULL;
            vlSelfRef.__PVT__counter_124 = 0ULL;
            vlSelfRef.__PVT__counter_125 = 0ULL;
            vlSelfRef.__PVT__counter_126 = 0ULL;
            vlSelfRef.__PVT__counter_127 = 0ULL;
            vlSelfRef.__PVT__counter_128 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x14U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x28U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_110 = vlSelfRef.__PVT___counter_T_209;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x28U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x3cU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_111 = vlSelfRef.__PVT___counter_T_211;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x3cU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x50U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_112 = vlSelfRef.__PVT___counter_T_213;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x50U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x64U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_113 = vlSelfRef.__PVT___counter_T_215;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x64U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x78U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_114 = vlSelfRef.__PVT___counter_T_217;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x78U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x8cU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_115 = vlSelfRef.__PVT___counter_T_219;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x8cU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xa0U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_116 = vlSelfRef.__PVT___counter_T_221;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xa0U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xb4U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_117 = vlSelfRef.__PVT___counter_T_223;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xb4U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xc8U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_118 = vlSelfRef.__PVT___counter_T_225;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xc8U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xdcU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_119 = vlSelfRef.__PVT___counter_T_227;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xdcU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xf0U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_120 = vlSelfRef.__PVT___counter_T_229;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xf0U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x104U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_121 = vlSelfRef.__PVT___counter_T_231;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x104U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x118U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_122 = vlSelfRef.__PVT___counter_T_233;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x118U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x12cU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_123 = vlSelfRef.__PVT___counter_T_235;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x12cU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x140U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_124 = vlSelfRef.__PVT___counter_T_237;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x140U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x154U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_125 = vlSelfRef.__PVT___counter_T_239;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x154U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x168U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_126 = vlSelfRef.__PVT___counter_T_241;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x168U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x17cU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_127 = vlSelfRef.__PVT___counter_T_243;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & (((0x17cU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                     & (0x190U > (IData)(vlSelfRef.__PVT__bufferTimer_2))) 
                    | (0x190U <= (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_128 = vlSelfRef.__PVT___counter_T_245;
            }
        }
        if (vlSelfRef.__PVT__helper_12_clean) {
            vlSelfRef.__PVT__counter_12 = 0ULL;
            vlSelfRef.__PVT__counter_13 = 0ULL;
            vlSelfRef.__PVT__counter_14 = 0ULL;
            vlSelfRef.__PVT__counter_15 = 0ULL;
            vlSelfRef.__PVT__counter_16 = 0ULL;
            vlSelfRef.__PVT__counter_17 = 0ULL;
            vlSelfRef.__PVT__counter_18 = 0ULL;
            vlSelfRef.__PVT__counter_19 = 0ULL;
            vlSelfRef.__PVT__counter_20 = 0ULL;
            vlSelfRef.__PVT__counter_21 = 0ULL;
            vlSelfRef.__PVT__counter_22 = 0ULL;
            vlSelfRef.__PVT__counter_23 = 0ULL;
            vlSelfRef.__PVT__counter_24 = 0ULL;
            vlSelfRef.__PVT__counter_25 = 0ULL;
            vlSelfRef.__PVT__counter_26 = 0ULL;
            vlSelfRef.__PVT__counter_27 = 0ULL;
            vlSelfRef.__PVT__counter_28 = 0ULL;
            vlSelfRef.__PVT__counter_29 = 0ULL;
            vlSelfRef.__PVT__counter_30 = 0ULL;
            vlSelfRef.__PVT__counter_31 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 (1U > (IData)(vlSelfRef.__PVT__bufferTimer_0)))) {
                vlSelfRef.__PVT__counter_12 = vlSelfRef.__PVT___counter_T_13;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((1U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (2U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_13 = vlSelfRef.__PVT___counter_T_15;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((2U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (3U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_14 = vlSelfRef.__PVT___counter_T_17;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((3U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (4U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_15 = vlSelfRef.__PVT___counter_T_19;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((4U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (5U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_16 = vlSelfRef.__PVT___counter_T_21;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((5U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (6U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_17 = vlSelfRef.__PVT___counter_T_23;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((6U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (7U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_18 = vlSelfRef.__PVT___counter_T_25;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((7U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (8U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_19 = vlSelfRef.__PVT___counter_T_27;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((8U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (9U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_20 = vlSelfRef.__PVT___counter_T_29;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((9U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xaU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_21 = vlSelfRef.__PVT___counter_T_31;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xaU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xbU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_22 = vlSelfRef.__PVT___counter_T_33;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xbU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xcU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_23 = vlSelfRef.__PVT___counter_T_35;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xcU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xdU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_24 = vlSelfRef.__PVT___counter_T_37;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xdU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xeU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_25 = vlSelfRef.__PVT___counter_T_39;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xeU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xfU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_26 = vlSelfRef.__PVT___counter_T_41;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xfU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x10U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_27 = vlSelfRef.__PVT___counter_T_43;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x10U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x11U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_28 = vlSelfRef.__PVT___counter_T_45;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x11U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x12U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_29 = vlSelfRef.__PVT___counter_T_47;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x12U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x13U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_30 = vlSelfRef.__PVT___counter_T_49;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x13U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x14U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_31 = vlSelfRef.__PVT___counter_T_51;
            }
        }
        if (vlSelfRef.__PVT__helper_15_clean) {
            vlSelfRef.__PVT__counter_51 = 0ULL;
            vlSelfRef.__PVT__counter_52 = 0ULL;
            vlSelfRef.__PVT__counter_53 = 0ULL;
            vlSelfRef.__PVT__counter_54 = 0ULL;
            vlSelfRef.__PVT__counter_55 = 0ULL;
            vlSelfRef.__PVT__counter_56 = 0ULL;
            vlSelfRef.__PVT__counter_57 = 0ULL;
            vlSelfRef.__PVT__counter_58 = 0ULL;
            vlSelfRef.__PVT__counter_59 = 0ULL;
            vlSelfRef.__PVT__counter_60 = 0ULL;
            vlSelfRef.__PVT__counter_61 = 0ULL;
            vlSelfRef.__PVT__counter_62 = 0ULL;
            vlSelfRef.__PVT__counter_63 = 0ULL;
            vlSelfRef.__PVT__counter_64 = 0ULL;
            vlSelfRef.__PVT__counter_65 = 0ULL;
            vlSelfRef.__PVT__counter_66 = 0ULL;
            vlSelfRef.__PVT__counter_67 = 0ULL;
            vlSelfRef.__PVT__counter_68 = 0ULL;
            vlSelfRef.__PVT__counter_69 = 0ULL;
            vlSelfRef.__PVT__counter_70 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & (1U > (IData)(vlSelfRef.__PVT__bufferTimer_1)))) {
                vlSelfRef.__PVT__counter_51 = vlSelfRef.__PVT___counter_T_91;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((1U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (2U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_52 = vlSelfRef.__PVT___counter_T_93;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((2U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (3U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_53 = vlSelfRef.__PVT___counter_T_95;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((3U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (4U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_54 = vlSelfRef.__PVT___counter_T_97;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((4U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (5U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_55 = vlSelfRef.__PVT___counter_T_99;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((5U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (6U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_56 = vlSelfRef.__PVT___counter_T_101;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((6U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (7U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_57 = vlSelfRef.__PVT___counter_T_103;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((7U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (8U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_58 = vlSelfRef.__PVT___counter_T_105;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((8U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (9U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_59 = vlSelfRef.__PVT___counter_T_107;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((9U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xaU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_60 = vlSelfRef.__PVT___counter_T_109;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xaU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xbU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_61 = vlSelfRef.__PVT___counter_T_111;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xbU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xcU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_62 = vlSelfRef.__PVT___counter_T_113;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xcU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xdU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_63 = vlSelfRef.__PVT___counter_T_115;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xdU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xeU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_64 = vlSelfRef.__PVT___counter_T_117;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xeU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xfU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_65 = vlSelfRef.__PVT___counter_T_119;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xfU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x10U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_66 = vlSelfRef.__PVT___counter_T_121;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x10U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x11U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_67 = vlSelfRef.__PVT___counter_T_123;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x11U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x12U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_68 = vlSelfRef.__PVT___counter_T_125;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x12U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x13U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_69 = vlSelfRef.__PVT___counter_T_127;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x13U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x14U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_70 = vlSelfRef.__PVT___counter_T_129;
            }
        }
        if (vlSelfRef.__PVT__helper_18_clean) {
            vlSelfRef.__PVT__counter_90 = 0ULL;
            vlSelfRef.__PVT__counter_91 = 0ULL;
            vlSelfRef.__PVT__counter_92 = 0ULL;
            vlSelfRef.__PVT__counter_93 = 0ULL;
            vlSelfRef.__PVT__counter_94 = 0ULL;
            vlSelfRef.__PVT__counter_95 = 0ULL;
            vlSelfRef.__PVT__counter_96 = 0ULL;
            vlSelfRef.__PVT__counter_97 = 0ULL;
            vlSelfRef.__PVT__counter_98 = 0ULL;
            vlSelfRef.__PVT__counter_99 = 0ULL;
            vlSelfRef.__PVT__counter_100 = 0ULL;
            vlSelfRef.__PVT__counter_101 = 0ULL;
            vlSelfRef.__PVT__counter_102 = 0ULL;
            vlSelfRef.__PVT__counter_103 = 0ULL;
            vlSelfRef.__PVT__counter_104 = 0ULL;
            vlSelfRef.__PVT__counter_105 = 0ULL;
            vlSelfRef.__PVT__counter_106 = 0ULL;
            vlSelfRef.__PVT__counter_107 = 0ULL;
            vlSelfRef.__PVT__counter_108 = 0ULL;
            vlSelfRef.__PVT__counter_109 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & (1U > (IData)(vlSelfRef.__PVT__bufferTimer_2)))) {
                vlSelfRef.__PVT__counter_90 = vlSelfRef.__PVT___counter_T_169;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((1U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (2U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_91 = vlSelfRef.__PVT___counter_T_171;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((2U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (3U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_92 = vlSelfRef.__PVT___counter_T_173;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((3U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (4U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_93 = vlSelfRef.__PVT___counter_T_175;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((4U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (5U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_94 = vlSelfRef.__PVT___counter_T_177;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((5U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (6U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_95 = vlSelfRef.__PVT___counter_T_179;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((6U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (7U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_96 = vlSelfRef.__PVT___counter_T_181;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((7U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (8U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_97 = vlSelfRef.__PVT___counter_T_183;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((8U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (9U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_98 = vlSelfRef.__PVT___counter_T_185;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((9U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xaU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_99 = vlSelfRef.__PVT___counter_T_187;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xaU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xbU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_100 = vlSelfRef.__PVT___counter_T_189;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xbU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xcU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_101 = vlSelfRef.__PVT___counter_T_191;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xcU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xdU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_102 = vlSelfRef.__PVT___counter_T_193;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xdU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xeU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_103 = vlSelfRef.__PVT___counter_T_195;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xeU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xfU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_104 = vlSelfRef.__PVT___counter_T_197;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xfU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x10U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_105 = vlSelfRef.__PVT___counter_T_199;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x10U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x11U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_106 = vlSelfRef.__PVT___counter_T_201;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x11U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x12U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_107 = vlSelfRef.__PVT___counter_T_203;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x12U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x13U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_108 = vlSelfRef.__PVT___counter_T_205;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x13U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x14U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_109 = vlSelfRef.__PVT___counter_T_207;
            }
        }
        if (vlSelfRef.__PVT__buffer_3_valid) {
            vlSelfRef.__PVT__buffer_3_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate_3)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_3_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block_3)));
            vlSelfRef.__PVT__buffer_3_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_3_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_155)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_118));
            vlSelfRef.__PVT__buffer_3_waitMP = vlSelfRef.__PVT___GEN_400;
        } else if (vlSelfRef.__PVT__alloc) {
            if ((3U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_3_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_38)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_46)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_3_waitMS = vlSelfRef.__PVT___canFlow_T_38;
                vlSelfRef.__PVT__buffer_3_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_7) {
            vlSelfRef.__PVT__bufferTimer_3 = 0U;
        } else if (vlSelfRef.__PVT__buffer_3_valid) {
            vlSelfRef.__PVT__bufferTimer_3 = vlSelfRef.__PVT___bufferTimer_3_T_1;
        }
        if (vlSelfRef.__PVT__buffer_0_valid) {
            vlSelfRef.__PVT__buffer_0_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_0_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block)));
            vlSelfRef.__PVT__buffer_0_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_0_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_38)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_1));
            vlSelfRef.__PVT__buffer_0_waitMP = vlSelfRef.__PVT___GEN_385;
        } else if (vlSelfRef.__PVT__alloc) {
            if ((0U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_0_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_38)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_46)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_0_waitMS = vlSelfRef.__PVT___canFlow_T_38;
                vlSelfRef.__PVT__buffer_0_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_1) {
            vlSelfRef.__PVT__bufferTimer_0 = 0U;
        } else if (vlSelfRef.__PVT__buffer_0_valid) {
            vlSelfRef.__PVT__bufferTimer_0 = vlSelfRef.__PVT___bufferTimer_0_T_1;
        }
        if (vlSelfRef.__PVT__buffer_1_valid) {
            vlSelfRef.__PVT__buffer_1_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate_1)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_1_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block_1)));
            vlSelfRef.__PVT__buffer_1_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_1_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_77)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_40));
            vlSelfRef.__PVT__buffer_1_waitMP = vlSelfRef.__PVT___GEN_390;
        } else if (vlSelfRef.__PVT__alloc) {
            if ((1U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_1_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_38)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_46)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_1_waitMS = vlSelfRef.__PVT___canFlow_T_38;
                vlSelfRef.__PVT__buffer_1_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_3) {
            vlSelfRef.__PVT__bufferTimer_1 = 0U;
        } else if (vlSelfRef.__PVT__buffer_1_valid) {
            vlSelfRef.__PVT__bufferTimer_1 = vlSelfRef.__PVT___bufferTimer_1_T_1;
        }
        if (vlSelfRef.__PVT__buffer_2_valid) {
            vlSelfRef.__PVT__buffer_2_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate_2)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_2_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block_2)));
            vlSelfRef.__PVT__buffer_2_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_2_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_116)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_79));
            vlSelfRef.__PVT__buffer_2_waitMP = vlSelfRef.__PVT___GEN_395;
        } else if (vlSelfRef.__PVT__alloc) {
            if ((2U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_2_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_38)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_46)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_2_waitMS = vlSelfRef.__PVT___canFlow_T_38;
                vlSelfRef.__PVT__buffer_2_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_5) {
            vlSelfRef.__PVT__bufferTimer_2 = 0U;
        } else if (vlSelfRef.__PVT__buffer_2_valid) {
            vlSelfRef.__PVT__bufferTimer_2 = vlSelfRef.__PVT___bufferTimer_2_T_1;
        }
    }
    if (vlSelfRef.__PVT__issueArb__DOT___ctrl_validMask_grantMask_lastGrant_T) {
        vlSelfRef.__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant 
            = vlSelfRef.__PVT__issueArb_io_chosen;
    }
    vlSelfRef.__PVT__io_hasMergeA_REG_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
    vlSelfRef.__PVT__io_hasLatePF_REG_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
    vlSelfRef.__PVT__io_hasMergeA_REG_set = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_set;
    vlSelfRef.__PVT__io_hasLatePF_REG_set = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_set;
    if (__VdlySet__chosenQ__DOT__ram_bits_task_mshrRetry__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_mshrRetry[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_aliasTask[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_txChannel__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_txChannel[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_bufIdx[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_off__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_aMergeTask_off[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_alias__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_aMergeTask_alias[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_reqSource[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_mshrId[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_opcode__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_opcode[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_mergeA__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_mergeA[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_mshrTask[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_size__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_size[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_sourceId[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_channel__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_channel[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_opcode[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_tag__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_tag[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_set__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_set[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0;
    }
    vlSelfRef.__PVT__max = __Vdly__max;
    vlSelfRef.__PVT__max_1 = __Vdly__max_1;
    vlSelfRef.__PVT__max_2 = __Vdly__max_2;
    vlSelfRef.__PVT__max_3 = __Vdly__max_3;
    vlSelfRef.__PVT___counter_T_287 = (1ULL + vlSelfRef.__PVT__counter_149);
    vlSelfRef.__PVT___counter_T_289 = (1ULL + vlSelfRef.__PVT__counter_150);
    vlSelfRef.__PVT___counter_T_291 = (1ULL + vlSelfRef.__PVT__counter_151);
    vlSelfRef.__PVT___counter_T_293 = (1ULL + vlSelfRef.__PVT__counter_152);
    vlSelfRef.__PVT___counter_T_295 = (1ULL + vlSelfRef.__PVT__counter_153);
    vlSelfRef.__PVT___counter_T_297 = (1ULL + vlSelfRef.__PVT__counter_154);
    vlSelfRef.__PVT___counter_T_299 = (1ULL + vlSelfRef.__PVT__counter_155);
    vlSelfRef.__PVT___counter_T_301 = (1ULL + vlSelfRef.__PVT__counter_156);
    vlSelfRef.__PVT___counter_T_303 = (1ULL + vlSelfRef.__PVT__counter_157);
    vlSelfRef.__PVT___counter_T_305 = (1ULL + vlSelfRef.__PVT__counter_158);
    vlSelfRef.__PVT___counter_T_307 = (1ULL + vlSelfRef.__PVT__counter_159);
    vlSelfRef.__PVT___counter_T_309 = (1ULL + vlSelfRef.__PVT__counter_160);
    vlSelfRef.__PVT___counter_T_311 = (1ULL + vlSelfRef.__PVT__counter_161);
    vlSelfRef.__PVT___counter_T_313 = (1ULL + vlSelfRef.__PVT__counter_162);
    vlSelfRef.__PVT___counter_T_315 = (1ULL + vlSelfRef.__PVT__counter_163);
    vlSelfRef.__PVT___counter_T_317 = (1ULL + vlSelfRef.__PVT__counter_164);
    vlSelfRef.__PVT___counter_T_319 = (1ULL + vlSelfRef.__PVT__counter_165);
    vlSelfRef.__PVT___counter_T_321 = (1ULL + vlSelfRef.__PVT__counter_166);
    vlSelfRef.__PVT___counter_T_323 = (1ULL + vlSelfRef.__PVT__counter_167);
    vlSelfRef.__PVT___counter_T_247 = (1ULL + vlSelfRef.__PVT__counter_129);
    vlSelfRef.__PVT___counter_T_249 = (1ULL + vlSelfRef.__PVT__counter_130);
    vlSelfRef.__PVT___counter_T_251 = (1ULL + vlSelfRef.__PVT__counter_131);
    vlSelfRef.__PVT___counter_T_253 = (1ULL + vlSelfRef.__PVT__counter_132);
    vlSelfRef.__PVT___counter_T_255 = (1ULL + vlSelfRef.__PVT__counter_133);
    vlSelfRef.__PVT___counter_T_257 = (1ULL + vlSelfRef.__PVT__counter_134);
    vlSelfRef.__PVT___counter_T_259 = (1ULL + vlSelfRef.__PVT__counter_135);
    vlSelfRef.__PVT___counter_T_261 = (1ULL + vlSelfRef.__PVT__counter_136);
    vlSelfRef.__PVT___counter_T_263 = (1ULL + vlSelfRef.__PVT__counter_137);
    vlSelfRef.__PVT___counter_T_265 = (1ULL + vlSelfRef.__PVT__counter_138);
    vlSelfRef.__PVT___counter_T_267 = (1ULL + vlSelfRef.__PVT__counter_139);
    vlSelfRef.__PVT___counter_T_269 = (1ULL + vlSelfRef.__PVT__counter_140);
    vlSelfRef.__PVT___counter_T_271 = (1ULL + vlSelfRef.__PVT__counter_141);
    vlSelfRef.__PVT___counter_T_273 = (1ULL + vlSelfRef.__PVT__counter_142);
    vlSelfRef.__PVT___counter_T_275 = (1ULL + vlSelfRef.__PVT__counter_143);
    vlSelfRef.__PVT___counter_T_277 = (1ULL + vlSelfRef.__PVT__counter_144);
    vlSelfRef.__PVT___counter_T_279 = (1ULL + vlSelfRef.__PVT__counter_145);
    vlSelfRef.__PVT___counter_T_281 = (1ULL + vlSelfRef.__PVT__counter_146);
    vlSelfRef.__PVT___counter_T_283 = (1ULL + vlSelfRef.__PVT__counter_147);
    vlSelfRef.__PVT___counter_T_285 = (1ULL + vlSelfRef.__PVT__counter_148);
    vlSelfRef.__PVT__enable_REG_3 = vlSelfRef.__PVT__buffer_3_valid;
    vlSelfRef.__PVT__REG_7 = ((IData)(vlSelfRef.__PVT__REG_6) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_3_valid)));
    vlSelfRef.__PVT__REG_6 = vlSelfRef.__PVT__buffer_3_valid;
    vlSelfRef.__PVT___counter_T_53 = (1ULL + vlSelfRef.__PVT__counter_32);
    vlSelfRef.__PVT___counter_T_55 = (1ULL + vlSelfRef.__PVT__counter_33);
    vlSelfRef.__PVT___counter_T_57 = (1ULL + vlSelfRef.__PVT__counter_34);
    vlSelfRef.__PVT___counter_T_59 = (1ULL + vlSelfRef.__PVT__counter_35);
    vlSelfRef.__PVT___counter_T_61 = (1ULL + vlSelfRef.__PVT__counter_36);
    vlSelfRef.__PVT___counter_T_63 = (1ULL + vlSelfRef.__PVT__counter_37);
    vlSelfRef.__PVT___counter_T_65 = (1ULL + vlSelfRef.__PVT__counter_38);
    vlSelfRef.__PVT___counter_T_67 = (1ULL + vlSelfRef.__PVT__counter_39);
    vlSelfRef.__PVT___counter_T_69 = (1ULL + vlSelfRef.__PVT__counter_40);
    vlSelfRef.__PVT___counter_T_71 = (1ULL + vlSelfRef.__PVT__counter_41);
    vlSelfRef.__PVT___counter_T_73 = (1ULL + vlSelfRef.__PVT__counter_42);
    vlSelfRef.__PVT___counter_T_75 = (1ULL + vlSelfRef.__PVT__counter_43);
    vlSelfRef.__PVT___counter_T_77 = (1ULL + vlSelfRef.__PVT__counter_44);
    vlSelfRef.__PVT___counter_T_79 = (1ULL + vlSelfRef.__PVT__counter_45);
    vlSelfRef.__PVT___counter_T_81 = (1ULL + vlSelfRef.__PVT__counter_46);
    vlSelfRef.__PVT___counter_T_83 = (1ULL + vlSelfRef.__PVT__counter_47);
    vlSelfRef.__PVT___counter_T_85 = (1ULL + vlSelfRef.__PVT__counter_48);
    vlSelfRef.__PVT___counter_T_87 = (1ULL + vlSelfRef.__PVT__counter_49);
    vlSelfRef.__PVT___counter_T_89 = (1ULL + vlSelfRef.__PVT__counter_50);
    vlSelfRef.__PVT___counter_T_131 = (1ULL + vlSelfRef.__PVT__counter_71);
    vlSelfRef.__PVT___counter_T_133 = (1ULL + vlSelfRef.__PVT__counter_72);
    vlSelfRef.__PVT___counter_T_135 = (1ULL + vlSelfRef.__PVT__counter_73);
    vlSelfRef.__PVT___counter_T_137 = (1ULL + vlSelfRef.__PVT__counter_74);
    vlSelfRef.__PVT___counter_T_139 = (1ULL + vlSelfRef.__PVT__counter_75);
    vlSelfRef.__PVT___counter_T_141 = (1ULL + vlSelfRef.__PVT__counter_76);
    vlSelfRef.__PVT___counter_T_143 = (1ULL + vlSelfRef.__PVT__counter_77);
    vlSelfRef.__PVT___counter_T_145 = (1ULL + vlSelfRef.__PVT__counter_78);
    vlSelfRef.__PVT___counter_T_147 = (1ULL + vlSelfRef.__PVT__counter_79);
    vlSelfRef.__PVT___counter_T_149 = (1ULL + vlSelfRef.__PVT__counter_80);
    vlSelfRef.__PVT___counter_T_151 = (1ULL + vlSelfRef.__PVT__counter_81);
    vlSelfRef.__PVT___counter_T_153 = (1ULL + vlSelfRef.__PVT__counter_82);
    vlSelfRef.__PVT___counter_T_155 = (1ULL + vlSelfRef.__PVT__counter_83);
    vlSelfRef.__PVT___counter_T_157 = (1ULL + vlSelfRef.__PVT__counter_84);
    vlSelfRef.__PVT___counter_T_159 = (1ULL + vlSelfRef.__PVT__counter_85);
    vlSelfRef.__PVT___counter_T_161 = (1ULL + vlSelfRef.__PVT__counter_86);
    vlSelfRef.__PVT___counter_T_163 = (1ULL + vlSelfRef.__PVT__counter_87);
    vlSelfRef.__PVT___counter_T_165 = (1ULL + vlSelfRef.__PVT__counter_88);
    vlSelfRef.__PVT___counter_T_167 = (1ULL + vlSelfRef.__PVT__counter_89);
    vlSelfRef.__PVT___counter_T_209 = (1ULL + vlSelfRef.__PVT__counter_110);
    vlSelfRef.__PVT___counter_T_211 = (1ULL + vlSelfRef.__PVT__counter_111);
    vlSelfRef.__PVT___counter_T_213 = (1ULL + vlSelfRef.__PVT__counter_112);
    vlSelfRef.__PVT___counter_T_215 = (1ULL + vlSelfRef.__PVT__counter_113);
    vlSelfRef.__PVT___counter_T_217 = (1ULL + vlSelfRef.__PVT__counter_114);
    vlSelfRef.__PVT___counter_T_219 = (1ULL + vlSelfRef.__PVT__counter_115);
    vlSelfRef.__PVT___counter_T_221 = (1ULL + vlSelfRef.__PVT__counter_116);
    vlSelfRef.__PVT___counter_T_223 = (1ULL + vlSelfRef.__PVT__counter_117);
    vlSelfRef.__PVT___counter_T_225 = (1ULL + vlSelfRef.__PVT__counter_118);
    vlSelfRef.__PVT___counter_T_227 = (1ULL + vlSelfRef.__PVT__counter_119);
    vlSelfRef.__PVT___counter_T_229 = (1ULL + vlSelfRef.__PVT__counter_120);
    vlSelfRef.__PVT___counter_T_231 = (1ULL + vlSelfRef.__PVT__counter_121);
    vlSelfRef.__PVT___counter_T_233 = (1ULL + vlSelfRef.__PVT__counter_122);
    vlSelfRef.__PVT___counter_T_235 = (1ULL + vlSelfRef.__PVT__counter_123);
    vlSelfRef.__PVT___counter_T_237 = (1ULL + vlSelfRef.__PVT__counter_124);
    vlSelfRef.__PVT___counter_T_239 = (1ULL + vlSelfRef.__PVT__counter_125);
    vlSelfRef.__PVT___counter_T_241 = (1ULL + vlSelfRef.__PVT__counter_126);
    vlSelfRef.__PVT___counter_T_243 = (1ULL + vlSelfRef.__PVT__counter_127);
    vlSelfRef.__PVT___counter_T_245 = (1ULL + vlSelfRef.__PVT__counter_128);
    vlSelfRef.__PVT___counter_T_13 = (1ULL + vlSelfRef.__PVT__counter_12);
    vlSelfRef.__PVT___counter_T_15 = (1ULL + vlSelfRef.__PVT__counter_13);
    vlSelfRef.__PVT___counter_T_17 = (1ULL + vlSelfRef.__PVT__counter_14);
    vlSelfRef.__PVT___counter_T_19 = (1ULL + vlSelfRef.__PVT__counter_15);
    vlSelfRef.__PVT___counter_T_21 = (1ULL + vlSelfRef.__PVT__counter_16);
    vlSelfRef.__PVT___counter_T_23 = (1ULL + vlSelfRef.__PVT__counter_17);
    vlSelfRef.__PVT___counter_T_25 = (1ULL + vlSelfRef.__PVT__counter_18);
    vlSelfRef.__PVT___counter_T_27 = (1ULL + vlSelfRef.__PVT__counter_19);
    vlSelfRef.__PVT___counter_T_29 = (1ULL + vlSelfRef.__PVT__counter_20);
    vlSelfRef.__PVT___counter_T_31 = (1ULL + vlSelfRef.__PVT__counter_21);
    vlSelfRef.__PVT___counter_T_33 = (1ULL + vlSelfRef.__PVT__counter_22);
    vlSelfRef.__PVT___counter_T_35 = (1ULL + vlSelfRef.__PVT__counter_23);
    vlSelfRef.__PVT___counter_T_37 = (1ULL + vlSelfRef.__PVT__counter_24);
    vlSelfRef.__PVT___counter_T_39 = (1ULL + vlSelfRef.__PVT__counter_25);
    vlSelfRef.__PVT___counter_T_41 = (1ULL + vlSelfRef.__PVT__counter_26);
    vlSelfRef.__PVT___counter_T_43 = (1ULL + vlSelfRef.__PVT__counter_27);
    vlSelfRef.__PVT___counter_T_45 = (1ULL + vlSelfRef.__PVT__counter_28);
    vlSelfRef.__PVT___counter_T_47 = (1ULL + vlSelfRef.__PVT__counter_29);
    vlSelfRef.__PVT___counter_T_49 = (1ULL + vlSelfRef.__PVT__counter_30);
    vlSelfRef.__PVT___counter_T_51 = (1ULL + vlSelfRef.__PVT__counter_31);
    __Vdly__REG = vlSelfRef.__PVT__buffer_0_valid;
    vlSelfRef.__PVT__enable_REG = vlSelfRef.__PVT__buffer_0_valid;
    vlSelfRef.__PVT___counter_T_91 = (1ULL + vlSelfRef.__PVT__counter_51);
    vlSelfRef.__PVT___counter_T_93 = (1ULL + vlSelfRef.__PVT__counter_52);
    vlSelfRef.__PVT___counter_T_95 = (1ULL + vlSelfRef.__PVT__counter_53);
    vlSelfRef.__PVT___counter_T_97 = (1ULL + vlSelfRef.__PVT__counter_54);
    vlSelfRef.__PVT___counter_T_99 = (1ULL + vlSelfRef.__PVT__counter_55);
    vlSelfRef.__PVT___counter_T_101 = (1ULL + vlSelfRef.__PVT__counter_56);
    vlSelfRef.__PVT___counter_T_103 = (1ULL + vlSelfRef.__PVT__counter_57);
    vlSelfRef.__PVT___counter_T_105 = (1ULL + vlSelfRef.__PVT__counter_58);
    vlSelfRef.__PVT___counter_T_107 = (1ULL + vlSelfRef.__PVT__counter_59);
    vlSelfRef.__PVT___counter_T_109 = (1ULL + vlSelfRef.__PVT__counter_60);
    vlSelfRef.__PVT___counter_T_111 = (1ULL + vlSelfRef.__PVT__counter_61);
    vlSelfRef.__PVT___counter_T_113 = (1ULL + vlSelfRef.__PVT__counter_62);
    vlSelfRef.__PVT___counter_T_115 = (1ULL + vlSelfRef.__PVT__counter_63);
    vlSelfRef.__PVT___counter_T_117 = (1ULL + vlSelfRef.__PVT__counter_64);
    vlSelfRef.__PVT___counter_T_119 = (1ULL + vlSelfRef.__PVT__counter_65);
    vlSelfRef.__PVT___counter_T_121 = (1ULL + vlSelfRef.__PVT__counter_66);
    vlSelfRef.__PVT___counter_T_123 = (1ULL + vlSelfRef.__PVT__counter_67);
    vlSelfRef.__PVT___counter_T_125 = (1ULL + vlSelfRef.__PVT__counter_68);
    vlSelfRef.__PVT___counter_T_127 = (1ULL + vlSelfRef.__PVT__counter_69);
    vlSelfRef.__PVT___counter_T_129 = (1ULL + vlSelfRef.__PVT__counter_70);
    __Vdly__REG_2 = vlSelfRef.__PVT__buffer_1_valid;
    vlSelfRef.__PVT__enable_REG_1 = vlSelfRef.__PVT__buffer_1_valid;
    vlSelfRef.__PVT___counter_T_169 = (1ULL + vlSelfRef.__PVT__counter_90);
    vlSelfRef.__PVT___counter_T_171 = (1ULL + vlSelfRef.__PVT__counter_91);
    vlSelfRef.__PVT___counter_T_173 = (1ULL + vlSelfRef.__PVT__counter_92);
    vlSelfRef.__PVT___counter_T_175 = (1ULL + vlSelfRef.__PVT__counter_93);
    vlSelfRef.__PVT___counter_T_177 = (1ULL + vlSelfRef.__PVT__counter_94);
    vlSelfRef.__PVT___counter_T_179 = (1ULL + vlSelfRef.__PVT__counter_95);
    vlSelfRef.__PVT___counter_T_181 = (1ULL + vlSelfRef.__PVT__counter_96);
    vlSelfRef.__PVT___counter_T_183 = (1ULL + vlSelfRef.__PVT__counter_97);
    vlSelfRef.__PVT___counter_T_185 = (1ULL + vlSelfRef.__PVT__counter_98);
    vlSelfRef.__PVT___counter_T_187 = (1ULL + vlSelfRef.__PVT__counter_99);
    vlSelfRef.__PVT___counter_T_189 = (1ULL + vlSelfRef.__PVT__counter_100);
    vlSelfRef.__PVT___counter_T_191 = (1ULL + vlSelfRef.__PVT__counter_101);
    vlSelfRef.__PVT___counter_T_193 = (1ULL + vlSelfRef.__PVT__counter_102);
    vlSelfRef.__PVT___counter_T_195 = (1ULL + vlSelfRef.__PVT__counter_103);
    vlSelfRef.__PVT___counter_T_197 = (1ULL + vlSelfRef.__PVT__counter_104);
    vlSelfRef.__PVT___counter_T_199 = (1ULL + vlSelfRef.__PVT__counter_105);
    vlSelfRef.__PVT___counter_T_201 = (1ULL + vlSelfRef.__PVT__counter_106);
    vlSelfRef.__PVT___counter_T_203 = (1ULL + vlSelfRef.__PVT__counter_107);
    vlSelfRef.__PVT___counter_T_205 = (1ULL + vlSelfRef.__PVT__counter_108);
    vlSelfRef.__PVT___counter_T_207 = (1ULL + vlSelfRef.__PVT__counter_109);
    __Vdly__REG_4 = vlSelfRef.__PVT__buffer_2_valid;
    vlSelfRef.__PVT__enable_REG_2 = vlSelfRef.__PVT__buffer_2_valid;
    vlSelfRef.__PVT___bufferTimer_3_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_3)));
    vlSelfRef.__PVT__buffer_3_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((3U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_195))
                                            : (IData)(vlSelfRef.__PVT___GEN_195)));
    vlSelfRef.__PVT___bufferTimer_0_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_0)));
    vlSelfRef.__PVT__REG_1 = ((IData)(vlSelfRef.__PVT__REG) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_0_valid)));
    vlSelfRef.__PVT___bufferTimer_1_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_1)));
    vlSelfRef.__PVT__REG_3 = ((IData)(vlSelfRef.__PVT__REG_2) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_1_valid)));
    vlSelfRef.__PVT___bufferTimer_2_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_2)));
    vlSelfRef.__PVT__REG_5 = ((IData)(vlSelfRef.__PVT__REG_4) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_2_valid)));
    vlSelfRef.__PVT__REG = __Vdly__REG;
    vlSelfRef.__PVT__REG_2 = __Vdly__REG_2;
    vlSelfRef.__PVT__REG_4 = __Vdly__REG_4;
    vlSelfRef.__PVT__enable_3 = ((~ (IData)(vlSelfRef.__PVT__buffer_3_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_3));
    vlSelfRef.__PVT__buffer_0_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((0U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_192))
                                            : (IData)(vlSelfRef.__PVT___GEN_192)));
    vlSelfRef.__PVT__buffer_1_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((1U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_193))
                                            : (IData)(vlSelfRef.__PVT___GEN_193)));
    vlSelfRef.__PVT__buffer_2_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((2U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_194))
                                            : (IData)(vlSelfRef.__PVT___GEN_194)));
    vlSelfRef.__PVT__next_max_3 = (((IData)(vlSelfRef.__PVT__enable_3) 
                                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                                       > vlSelfRef.__PVT__max_3))
                                    ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_3))
                                    : vlSelfRef.__PVT__max_3);
    if (__VdlySet__chosenQ__DOT__ram_id__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_id[0U] = __VdlyVal__chosenQ__DOT__ram_id__v0;
    }
    vlSelfRef.__PVT__enable = ((~ (IData)(vlSelfRef.__PVT__buffer_0_valid)) 
                               & (IData)(vlSelfRef.__PVT__enable_REG));
    vlSelfRef.__PVT__enable_1 = ((~ (IData)(vlSelfRef.__PVT__buffer_1_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_1));
    vlSelfRef.__PVT___io_out_valid_T = ((3U == vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                         [0U]) ? (IData)(vlSelfRef.__PVT__buffer_3_rdy)
                                         : ((2U == 
                                             vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                             [0U]) ? (IData)(vlSelfRef.__PVT__buffer_2_rdy)
                                             : ((1U 
                                                 == 
                                                 vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                 [0U])
                                                 ? (IData)(vlSelfRef.__PVT__buffer_1_rdy)
                                                 : (IData)(vlSelfRef.__PVT__buffer_0_rdy))));
    vlSelfRef.__PVT__enable_2 = ((~ (IData)(vlSelfRef.__PVT__buffer_2_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_2));
    __PVT___cntEnable_T_4 = (7U & ((3U & ((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                          + (IData)(vlSelfRef.__PVT__buffer_1_valid))) 
                                   + (3U & ((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                            + (IData)(vlSelfRef.__PVT__buffer_3_valid)))));
    if (vlSelfRef.__PVT__buffer_0_valid) {
        if (vlSelfRef.__PVT__buffer_1_valid) {
            if (vlSelfRef.__PVT__buffer_2_valid) {
                vlSelfRef.__PVT__insertIdx = 3U;
                vlSelfRef.__PVT__full = vlSelfRef.__PVT__buffer_3_valid;
            } else {
                vlSelfRef.__PVT__insertIdx = 2U;
                vlSelfRef.__PVT__full = 0U;
            }
        } else {
            vlSelfRef.__PVT__insertIdx = 1U;
            vlSelfRef.__PVT__full = 0U;
        }
    } else {
        vlSelfRef.__PVT__insertIdx = 0U;
        vlSelfRef.__PVT__full = 0U;
    }
    vlSelfRef.__PVT__next_max = (((IData)(vlSelfRef.__PVT__enable) 
                                  & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                                     > vlSelfRef.__PVT__max))
                                  ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_0))
                                  : vlSelfRef.__PVT__max);
    vlSelfRef.__PVT__next_max_1 = (((IData)(vlSelfRef.__PVT__enable_1) 
                                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                                       > vlSelfRef.__PVT__max_1))
                                    ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_1))
                                    : vlSelfRef.__PVT__max_1);
    vlSelfRef.__PVT__next_counter_6 = (vlSelfRef.__PVT__counter_6 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.__PVT___io_out_valid_T)) 
                                                          & (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)))));
    vlSelfRef.__PVT__next_max_2 = (((IData)(vlSelfRef.__PVT__enable_2) 
                                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                                       > vlSelfRef.__PVT__max_2))
                                    ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_2))
                                    : vlSelfRef.__PVT__max_2);
    vlSelfRef.__PVT__next_counter_8 = (vlSelfRef.__PVT__counter_8 
                                       + (QData)((IData)(
                                                         (0U 
                                                          == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_9 = (vlSelfRef.__PVT__counter_9 
                                       + (QData)((IData)(
                                                         (1U 
                                                          == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_10 = (vlSelfRef.__PVT__counter_10 
                                        + (QData)((IData)(
                                                          (2U 
                                                           == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_11 = (vlSelfRef.__PVT__counter_11 
                                        + (QData)((IData)(
                                                          (3U 
                                                           == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_3 = (vlSelfRef.__PVT__counter_3 
                                       + (QData)((IData)(vlSelfRef.__PVT__full)));
}

VL_INLINE_OPT void VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf__1(VVerifyTop_RequestBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __PVT___waitMSUpdate_T;
    __PVT___waitMSUpdate_T = 0;
    // Body
    vlSelfRef.__PVT___mergeAMask_T_16 = ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_opcode)) 
                                         | (7U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_opcode)));
    vlSelfRef.__PVT___mergeAMask_T_1 = (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                         << 2U) | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_set));
    __PVT___waitMSUpdate_T = (0xfU & (~ (((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_willFree) 
                                            & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid)) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_willFree) 
                                            & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid)) 
                                           << 2U)) 
                                         | ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io_msInfo_bits_willFree) 
                                              & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid)) 
                                             << 1U) 
                                            | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io___05FmsInfo_bits_willFree) 
                                               & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid))))));
    vlSelfRef.__PVT___canFlow_T_37 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                      & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_willFree)) 
                                         & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set)) 
                                            & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag)) 
                                               | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__dirResult_tag)) 
                                                  & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_releaseack)))))));
    vlSelfRef.__PVT___canFlow_T_28 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                      & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_willFree)) 
                                         & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_set)) 
                                            & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_tag)) 
                                               | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__dirResult_tag)) 
                                                  & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_releaseack)))))));
    vlSelfRef.__PVT___waitMSUpdate_T_38 = (((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag)) 
                                                       | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_releaseack))))))) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                       == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_releaseack))))))) 
                                               << 2U)) 
                                           | ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                       == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_releaseack))))))) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io___05FmsInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                              == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_releaseack)))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_77 = (((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag)) 
                                                       | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_releaseack))))))) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                       == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_releaseack))))))) 
                                               << 2U)) 
                                           | ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                       == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_releaseack))))))) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io___05FmsInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                              == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_releaseack)))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_116 = (((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                               & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_willFree)) 
                                                  & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                      == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                         == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag)) 
                                                        | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                            == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__dirResult_tag)) 
                                                           & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_releaseack))))))) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                              == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_releaseack))))))) 
                                                << 2U)) 
                                            | ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                              == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_releaseack))))))) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io___05FmsInfo_bits_willFree)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                         == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_set)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                            == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_tag)) 
                                                           | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_releaseack)))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_155 = (((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                               & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_willFree)) 
                                                  & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                      == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                         == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag)) 
                                                        | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                            == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__dirResult_tag)) 
                                                           & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_releaseack))))))) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                              == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_releaseack))))))) 
                                                << 2U)) 
                                            | ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                              == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_releaseack))))))) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io___05FmsInfo_bits_willFree)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                         == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_set)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                            == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_tag)) 
                                                           | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_releaseack)))))))));
    vlSelfRef.__PVT___canFlow_T_10 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                                      & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io___05FmsInfo_bits_willFree)) 
                                         & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_set)) 
                                            & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_tag)) 
                                               | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__dirResult_tag)) 
                                                  & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_releaseack)))))));
    vlSelfRef.__PVT___mergeAMask_T_53 = ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                         == (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_tag) 
                                              << 2U) 
                                             | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_set)));
    vlSelfRef.__PVT___mergeAMask_T_78 = ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                         == (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag) 
                                              << 2U) 
                                             | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set)));
    vlSelfRef.__PVT___mergeAMask_T_3 = ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                        == (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_tag) 
                                             << 2U) 
                                            | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_set)));
    vlSelfRef.__PVT___mergeAMask_T_28 = ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                         == (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_tag) 
                                              << 2U) 
                                             | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_set)));
    vlSelfRef.__PVT___waitMSUpdate_T_1 = ((IData)(__PVT___waitMSUpdate_T) 
                                          & (IData)(vlSelfRef.__PVT__buffer_0_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_40 = ((IData)(__PVT___waitMSUpdate_T) 
                                           & (IData)(vlSelfRef.__PVT__buffer_1_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_79 = ((IData)(__PVT___waitMSUpdate_T) 
                                           & (IData)(vlSelfRef.__PVT__buffer_2_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_118 = ((IData)(__PVT___waitMSUpdate_T) 
                                            & (IData)(vlSelfRef.__PVT__buffer_3_waitMS));
    vlSelfRef.__VdfgRegularize_h0f5bbeb4_2_6 = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io_msInfo_bits_willFree)) 
                                                     & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                         == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_set)) 
                                                        & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                            == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_tag)) 
                                                           | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                               == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_releaseack))))))) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT___canFlow_T_10));
    vlSelfRef.__PVT___mergeAMask_T_56 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_opcode)) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                            & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_willFree)) 
                                               & (IData)(vlSelfRef.__PVT___mergeAMask_T_53))));
    vlSelfRef.__PVT___mergeAMask_T_81 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_opcode)) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                            & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_willFree)) 
                                               & (IData)(vlSelfRef.__PVT___mergeAMask_T_78))));
    vlSelfRef.__PVT___mergeAMask_T_6 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_opcode)) 
                                        & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                                           & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io___05FmsInfo_bits_willFree)) 
                                              & (IData)(vlSelfRef.__PVT___mergeAMask_T_3))));
    vlSelfRef.__PVT___mergeAMask_T_31 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_opcode)) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
                                            & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io_msInfo_bits_willFree)) 
                                               & (IData)(vlSelfRef.__PVT___mergeAMask_T_28))));
    vlSelfRef.__PVT__waitMSUpdate = ((IData)((1U == 
                                              (3U & (IData)(vlSelfRef.__PVT__buffer_0_waitMP))))
                                      ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_38)
                                      : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_1));
    vlSelfRef.__PVT__waitMSUpdate_1 = ((IData)((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__PVT__buffer_1_waitMP))))
                                        ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_77)
                                        : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_40));
    vlSelfRef.__PVT__waitMSUpdate_2 = ((IData)((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__PVT__buffer_2_waitMP))))
                                        ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_116)
                                        : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_79));
    vlSelfRef.__PVT__waitMSUpdate_3 = ((IData)((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__PVT__buffer_3_waitMP))))
                                        ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_155)
                                        : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_118));
    vlSelfRef.__PVT___canFlow_T_38 = (((IData)(vlSelfRef.__PVT___canFlow_T_37) 
                                       << 3U) | (((IData)(vlSelfRef.__PVT___canFlow_T_28) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h0f5bbeb4_2_6)));
}

VL_INLINE_OPT void VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf__3(VVerifyTop_RequestBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___mergeAMask_T_74;
    __PVT___mergeAMask_T_74 = 0;
    CData/*0:0*/ __PVT___mergeAMask_T_99;
    __PVT___mergeAMask_T_99 = 0;
    CData/*1:0*/ __PVT__mergeAId_hi;
    __PVT__mergeAId_hi = 0;
    CData/*1:0*/ __PVT__mergeAId_lo;
    __PVT__mergeAId_lo = 0;
    // Body
    __PVT___mergeAMask_T_74 = ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__dirResult_hit) 
                                   | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_s_refill))) 
                               & ((IData)(vlSelfRef.__PVT___mergeAMask_T_56) 
                                  & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__mergeA) 
                                         | ((1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_param)) 
                                            & (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_param))))) 
                                     & (IData)(vlSelfRef.__PVT___mergeAMask_T_16))));
    __PVT___mergeAMask_T_99 = ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__dirResult_hit) 
                                   | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_s_refill))) 
                               & ((IData)(vlSelfRef.__PVT___mergeAMask_T_81) 
                                  & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__mergeA) 
                                         | ((1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_param)) 
                                            & (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_param))))) 
                                     & (IData)(vlSelfRef.__PVT___mergeAMask_T_16))));
    __PVT__mergeAId_lo = ((((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__dirResult_hit) 
                                | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_s_refill))) 
                            & ((IData)(vlSelfRef.__PVT___mergeAMask_T_31) 
                               & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__mergeA) 
                                      | ((1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_param)) 
                                         & (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_param))))) 
                                  & (IData)(vlSelfRef.__PVT___mergeAMask_T_16)))) 
                           << 1U) | ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__dirResult_hit) 
                                         | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_s_refill))) 
                                     & ((IData)(vlSelfRef.__PVT___mergeAMask_T_6) 
                                        & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__mergeA) 
                                               | ((1U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_param)) 
                                                  & (0U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_param))))) 
                                           & (IData)(vlSelfRef.__PVT___mergeAMask_T_16)))));
    vlSelfRef.__PVT__dup = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_opcode)) 
                            & (((IData)(vlSelfRef.__PVT__buffer_3_valid) 
                                & ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                   == (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                        << 2U) | (IData)(vlSelfRef.__PVT__buffer_3_task_set)))) 
                               | (((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                   & ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                      == (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__buffer_2_task_set)))) 
                                  | (((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                      & ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                         == (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                              << 2U) 
                                             | (IData)(vlSelfRef.__PVT__buffer_1_task_set)))) 
                                     | (((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                         & ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                            == (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__buffer_0_task_set)))) 
                                        | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                            & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_acquire) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_opcode))) 
                                               & (IData)(vlSelfRef.__PVT___mergeAMask_T_78))) 
                                           | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                               & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_acquire) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_opcode))) 
                                                  & (IData)(vlSelfRef.__PVT___mergeAMask_T_53))) 
                                              | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
                                                  & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_acquire) 
                                                      | (5U 
                                                         == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_opcode))) 
                                                     & (IData)(vlSelfRef.__PVT___mergeAMask_T_28))) 
                                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                                                    & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_acquire) 
                                                        | (5U 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_opcode))) 
                                                       & (IData)(vlSelfRef.__PVT___mergeAMask_T_3)))))))))));
    __PVT__mergeAId_hi = (((IData)(__PVT___mergeAMask_T_99) 
                           << 1U) | (IData)(__PVT___mergeAMask_T_74));
    vlSelfRef.__PVT__mergeA = ((IData)(__PVT___mergeAMask_T_99) 
                               | ((IData)(__PVT___mergeAMask_T_74) 
                                  | (0U != (IData)(__PVT__mergeAId_lo))));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(
                                                       ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_valid) 
                                                        & (IData)(vlSelfRef.__PVT__dup)))));
    vlSelfRef.io_aMergeTask_bits_id = (((IData)((0U 
                                                 != (IData)(__PVT__mergeAId_hi))) 
                                        << 1U) | (1U 
                                                  & (((IData)(__PVT__mergeAId_hi) 
                                                      | (IData)(__PVT__mergeAId_lo)) 
                                                     >> 1U)));
    vlSelfRef.__PVT__next_counter_7 = (vlSelfRef.__PVT__counter_7 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__mergeA) 
                                                          & (((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                                              != 
                                                              (((IData)(vlSelfRef.__PVT__io_hasMergeA_REG_tag) 
                                                                << 2U) 
                                                               | (IData)(vlSelfRef.__PVT__io_hasMergeA_REG_set))) 
                                                             & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_valid))))));
    vlSelfRef.io_aMergeTask_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_valid) 
                                     & (IData)(vlSelfRef.__PVT__mergeA));
}

VL_INLINE_OPT void VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf__4(VVerifyTop_RequestBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___canFlow_T_46 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toReqBuf_0) 
                                               | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toReqBuf_1))));
    vlSelfRef.__PVT__canFlow = ((~ (IData)(vlSelfRef.__PVT__full)) 
                                & ((~ (IData)((0U != (IData)(vlSelfRef.__PVT___canFlow_T_38)))) 
                                   & ((~ (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
                                      & (IData)(vlSelfRef.__PVT___canFlow_T_46))));
    if (vlSelfRef.__PVT__canFlow) {
        vlSelfRef.io_out_bits_opcode = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
        vlSelfRef.io_out_bits_set = vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_set;
    } else {
        vlSelfRef.io_out_bits_opcode = vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_opcode
            [0U];
        vlSelfRef.io_out_bits_set = vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_set
            [0U];
    }
    vlSelfRef.io_out_valid = (((IData)(vlSelfRef.__PVT___io_out_valid_T) 
                               & (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
                              | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_valid) 
                                 & (IData)(vlSelfRef.__PVT__canFlow)));
    vlSelfRef.__PVT___pipeBlockOut_T_2 = ((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_3 = ((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_4 = ((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_5 = ((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT__issueArb_io_in_0_valid = ((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_2))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_0_rdy)));
    vlSelfRef.__PVT__issueArb_io_in_1_valid = ((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_3))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_1_rdy)));
    vlSelfRef.__PVT__issueArb_io_in_2_valid = ((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_4))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_2_rdy)));
    vlSelfRef.__PVT__issueArb_io_in_3_valid = ((IData)(vlSelfRef.__PVT__buffer_3_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_5))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_3_rdy)));
    vlSelfRef.__PVT__issueArb_io_chosen = (((IData)(vlSelfRef.__PVT__issueArb_io_in_1_valid) 
                                            & (1U > (IData)(vlSelfRef.__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant)))
                                            ? 1U : 
                                           (((IData)(vlSelfRef.__PVT__issueArb_io_in_2_valid) 
                                             & (2U 
                                                > (IData)(vlSelfRef.__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant)))
                                             ? 2U : 
                                            (((IData)(vlSelfRef.__PVT__issueArb_io_in_3_valid) 
                                              & (3U 
                                                 > (IData)(vlSelfRef.__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant)))
                                              ? 3U : 
                                             ((IData)(vlSelfRef.__PVT__issueArb_io_in_0_valid)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__issueArb_io_in_1_valid)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__issueArb_io_in_2_valid)
                                                    ? 2U
                                                    : 3U))))));
}

VL_INLINE_OPT void VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf__5(VVerifyTop_RequestBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    __PVT__chosenQ_io_deq_ready = (1U & ((~ (IData)(vlSelfRef.__PVT___io_out_valid_T)) 
                                         | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_sinkA_ready)));
    __PVT___pipeBlockOut_T = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_sinkA_ready) 
                              & (IData)(vlSelfRef.io_out_valid));
    __PVT__doFlow = ((IData)(vlSelfRef.__PVT__canFlow) 
                     & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_sinkA_ready));
    vlSelfRef.__PVT__chosenQ__DOT__do_deq = ((IData)(__PVT__chosenQ_io_deq_ready) 
                                             & (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full));
    vlSelfRef.__PVT__issueArb__DOT___ctrl_validMask_grantMask_lastGrant_T 
        = (((~ (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
            | (IData)(__PVT__chosenQ_io_deq_ready)) 
           & ((3U == (IData)(vlSelfRef.__PVT__issueArb_io_chosen))
               ? (IData)(vlSelfRef.__PVT__issueArb_io_in_3_valid)
               : ((2U == (IData)(vlSelfRef.__PVT__issueArb_io_chosen))
                   ? (IData)(vlSelfRef.__PVT__issueArb_io_in_2_valid)
                   : ((1U == (IData)(vlSelfRef.__PVT__issueArb_io_chosen))
                       ? (IData)(vlSelfRef.__PVT__issueArb_io_in_1_valid)
                       : (IData)(vlSelfRef.__PVT__issueArb_io_in_0_valid)))));
    vlSelfRef.__PVT__s1_Block = (((IData)(__PVT___pipeBlockOut_T) 
                                  & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_2)) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_s1Entrance_valid) 
                                    & ((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1_Block_1 = (((IData)(__PVT___pipeBlockOut_T) 
                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_3)) 
                                   | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_s1Entrance_valid) 
                                      & ((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1_Block_2 = (((IData)(__PVT___pipeBlockOut_T) 
                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_4)) 
                                   | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_s1Entrance_valid) 
                                      & ((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1_Block_3 = (((IData)(__PVT___pipeBlockOut_T) 
                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_5)) 
                                   | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_s1Entrance_valid) 
                                      & ((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1Block = (((IData)(__PVT___pipeBlockOut_T) 
                                 & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                    == (IData)(vlSelfRef.io_out_bits_set))) 
                                | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_s1Entrance_valid) 
                                   & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__next_counter_1 = (vlSelfRef.__PVT__counter_1 
                                       + (QData)((IData)(
                                                         ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_valid) 
                                                          & (IData)(__PVT__doFlow)))));
    vlSelfRef.__PVT__alloc = ((~ (IData)(vlSelfRef.__PVT__full)) 
                              & ((~ ((IData)(vlSelfRef.__PVT__dup) 
                                     | (IData)(vlSelfRef.__PVT__mergeA))) 
                                 & ((~ (IData)(__PVT__doFlow)) 
                                    & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_valid))));
    vlSelfRef.io_in_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__full)) 
                                   | ((IData)(__PVT__doFlow) 
                                      | ((IData)(vlSelfRef.__PVT__mergeA) 
                                         | (IData)(vlSelfRef.__PVT__dup)))));
    vlSelfRef.__PVT___GEN_385 = (7U & ((IData)(vlSelfRef.__PVT__s1_Block)
                                        ? (4U | ((IData)(vlSelfRef.__PVT__buffer_0_waitMP) 
                                                 >> 1U))
                                        : ((IData)(vlSelfRef.__PVT__buffer_0_waitMP) 
                                           >> 1U)));
    vlSelfRef.__PVT___GEN_390 = (7U & ((IData)(vlSelfRef.__PVT__s1_Block_1)
                                        ? (4U | ((IData)(vlSelfRef.__PVT__buffer_1_waitMP) 
                                                 >> 1U))
                                        : ((IData)(vlSelfRef.__PVT__buffer_1_waitMP) 
                                           >> 1U)));
    vlSelfRef.__PVT___GEN_395 = (7U & ((IData)(vlSelfRef.__PVT__s1_Block_2)
                                        ? (4U | ((IData)(vlSelfRef.__PVT__buffer_2_waitMP) 
                                                 >> 1U))
                                        : ((IData)(vlSelfRef.__PVT__buffer_2_waitMP) 
                                           >> 1U)));
    vlSelfRef.__PVT___GEN_400 = (7U & ((IData)(vlSelfRef.__PVT__s1_Block_3)
                                        ? (4U | ((IData)(vlSelfRef.__PVT__buffer_3_waitMP) 
                                                 >> 1U))
                                        : ((IData)(vlSelfRef.__PVT__buffer_3_waitMP) 
                                           >> 1U)));
    vlSelfRef.__PVT___buffer_waitMP_T = ((((IData)(vlSelfRef.__PVT__s1Block) 
                                           << 3U) | 
                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toReqBuf_0) 
                                           << 2U)) 
                                         | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toReqBuf_1) 
                                            << 1U));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_2 
                                       + (QData)((IData)(vlSelfRef.__PVT__alloc)));
    if (vlSelfRef.__PVT__alloc) {
        vlSelfRef.__PVT___GEN_192 = ((0U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_0_valid));
        vlSelfRef.__PVT___GEN_193 = ((1U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_1_valid));
        vlSelfRef.__PVT___GEN_194 = ((2U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_2_valid));
        vlSelfRef.__PVT___GEN_195 = ((3U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_3_valid));
    } else {
        vlSelfRef.__PVT___GEN_192 = vlSelfRef.__PVT__buffer_0_valid;
        vlSelfRef.__PVT___GEN_193 = vlSelfRef.__PVT__buffer_1_valid;
        vlSelfRef.__PVT___GEN_194 = vlSelfRef.__PVT__buffer_2_valid;
        vlSelfRef.__PVT___GEN_195 = vlSelfRef.__PVT__buffer_3_valid;
    }
    __PVT___T_84 = ((IData)(vlSelfRef.io_in_ready) 
                    & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_valid));
    vlSelfRef.__PVT__next_counter_4 = (vlSelfRef.__PVT__counter_4 
                                       + (QData)((IData)(
                                                         ((IData)(__PVT___T_84) 
                                                          & (5U 
                                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_opcode))))));
    vlSelfRef.__PVT__next_counter_5 = (vlSelfRef.__PVT__counter_5 
                                       + (QData)((IData)(
                                                         ((5U 
                                                           != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_bits_opcode)) 
                                                          & (IData)(__PVT___T_84)))));
}

VL_INLINE_OPT void VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf__0(VVerifyTop_RequestBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT___cntEnable_T_4;
    __PVT___cntEnable_T_4 = 0;
    VlUnpacked<CData/*2:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_txChannel;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_txChannel[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_size;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_size[__Vi0] = 0;
    }
    VlUnpacked<CData/*1:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_bufIdx;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_bufIdx[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_aliasTask;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_aliasTask[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_mshrRetry;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_mshrRetry[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_aMergeTask_off;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_aMergeTask_off[__Vi0] = 0;
    }
    VlUnpacked<CData/*1:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_aMergeTask_alias;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_aMergeTask_alias[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData[__Vi0] = 0;
    }
    CData/*0:0*/ __Vdly__REG_4;
    __Vdly__REG_4 = 0;
    CData/*0:0*/ __Vdly__REG;
    __Vdly__REG = 0;
    QData/*63:0*/ __Vdly__max;
    __Vdly__max = 0;
    QData/*63:0*/ __Vdly__max_1;
    __Vdly__max_1 = 0;
    QData/*63:0*/ __Vdly__max_2;
    __Vdly__max_2 = 0;
    QData/*63:0*/ __Vdly__max_3;
    __Vdly__max_3 = 0;
    CData/*0:0*/ __Vdly__REG_2;
    __Vdly__REG_2 = 0;
    CData/*1:0*/ __VdlyVal__chosenQ__DOT__ram_id__v0;
    __VdlyVal__chosenQ__DOT__ram_id__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_id__v0;
    __VdlySet__chosenQ__DOT__ram_id__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_mshrRetry__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrRetry__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0 = 0;
    CData/*1:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_txChannel__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_txChannel__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData__v0 = 0;
    CData/*2:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0 = 0;
    CData/*1:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_set__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_set__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_mergeA__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_mergeA__v0 = 0;
    CData/*2:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId__v0 = 0;
    CData/*0:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_size__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_size__v0 = 0;
    CData/*7:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_off__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_off__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_alias__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_alias__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_opcode__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_opcode__v0 = 0;
    // Body
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_alias__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_state__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dirty__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrRetry__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_useProbeData__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_accessed__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_alias__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_clients__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_dirty__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_needProbeAckData__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_txChannel__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseIdx__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_clients__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_replTask__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_state__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_dirty__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_snpHitRelease__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_alias__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_way__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_param__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_accessed__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_metaWen__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_tagWen__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dsWen__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_off__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_alias__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_opcode__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_mergeA__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_id__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_size__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_off__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_param__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0 = 0U;
    __Vdly__REG_4 = vlSelfRef.__PVT__REG_4;
    __Vdly__REG = vlSelfRef.__PVT__REG;
    __Vdly__REG_2 = vlSelfRef.__PVT__REG_2;
    __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_set__v0 = 0U;
    __Vdly__max = vlSelfRef.__PVT__max;
    __Vdly__max_1 = vlSelfRef.__PVT__max_1;
    __Vdly__max_2 = vlSelfRef.__PVT__max_2;
    __Vdly__max_3 = vlSelfRef.__PVT__max_3;
    if (vlSelfRef.__PVT__issueArb__DOT___ctrl_validMask_grantMask_lastGrant_T) {
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_alias__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_state__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dirty__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_mshrRetry__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_useProbeData__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_accessed__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_alias__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_clients__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_dirty__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_needProbeAckData__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_txChannel__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseIdx__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_clients__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_replTask__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_state__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_dirty__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_snpHitRelease__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_alias__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_way__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_param__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_accessed__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_metaWen__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_tagWen__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dsWen__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_off__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_alias__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_opcode__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_mergeA__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0 = 1U;
        __VdlyVal__chosenQ__DOT__ram_id__v0 = vlSelfRef.__PVT__issueArb_io_chosen;
        __VdlySet__chosenQ__DOT__ram_id__v0 = 1U;
        if ((3U == (IData)(vlSelfRef.__PVT__issueArb_io_chosen))) {
            __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0 
                = vlSelfRef.__PVT__buffer_3_task_size;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_off__v0 
                = vlSelfRef.__PVT__buffer_3_task_off;
            __VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0 
                = vlSelfRef.__PVT__buffer_3_task_sourceId;
            __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0 
                = vlSelfRef.__PVT__buffer_3_task_channel;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_param__v0 
                = vlSelfRef.__PVT__buffer_3_task_param;
            __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0 
                = vlSelfRef.__PVT__buffer_3_task_opcode;
            __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0 
                = vlSelfRef.__PVT__buffer_3_task_tag;
            __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0 
                = vlSelfRef.__PVT__buffer_3_task_set;
        } else if ((2U == (IData)(vlSelfRef.__PVT__issueArb_io_chosen))) {
            __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0 
                = vlSelfRef.__PVT__buffer_2_task_size;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_off__v0 
                = vlSelfRef.__PVT__buffer_2_task_off;
            __VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0 
                = vlSelfRef.__PVT__buffer_2_task_sourceId;
            __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0 
                = vlSelfRef.__PVT__buffer_2_task_channel;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_param__v0 
                = vlSelfRef.__PVT__buffer_2_task_param;
            __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0 
                = vlSelfRef.__PVT__buffer_2_task_opcode;
            __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0 
                = vlSelfRef.__PVT__buffer_2_task_tag;
            __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0 
                = vlSelfRef.__PVT__buffer_2_task_set;
        } else if ((1U == (IData)(vlSelfRef.__PVT__issueArb_io_chosen))) {
            __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0 
                = vlSelfRef.__PVT__buffer_1_task_size;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_off__v0 
                = vlSelfRef.__PVT__buffer_1_task_off;
            __VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0 
                = vlSelfRef.__PVT__buffer_1_task_sourceId;
            __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0 
                = vlSelfRef.__PVT__buffer_1_task_channel;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_param__v0 
                = vlSelfRef.__PVT__buffer_1_task_param;
            __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0 
                = vlSelfRef.__PVT__buffer_1_task_opcode;
            __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0 
                = vlSelfRef.__PVT__buffer_1_task_tag;
            __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0 
                = vlSelfRef.__PVT__buffer_1_task_set;
        } else {
            __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0 
                = vlSelfRef.__PVT__buffer_0_task_size;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_off__v0 
                = vlSelfRef.__PVT__buffer_0_task_off;
            __VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0 
                = vlSelfRef.__PVT__buffer_0_task_sourceId;
            __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0 
                = vlSelfRef.__PVT__buffer_0_task_channel;
            vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_param__v0 
                = vlSelfRef.__PVT__buffer_0_task_param;
            __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0 
                = vlSelfRef.__PVT__buffer_0_task_opcode;
            __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0 
                = vlSelfRef.__PVT__buffer_0_task_tag;
            __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0 
                = vlSelfRef.__PVT__buffer_0_task_set;
        }
        __VdlySet__chosenQ__DOT__ram_bits_task_size__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_off__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_param__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_set__v0 = 1U;
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT__alloc) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (2U < (7U & ((3U & ((IData)(vlSelfRef.__PVT___canFlow_T_10) 
                                           + VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.__VdfgRegularize_h0f5bbeb4_2_6), 1U))) 
                                    + (3U & ((IData)(vlSelfRef.__PVT___canFlow_T_28) 
                                             + (IData)(vlSelfRef.__PVT___canFlow_T_37))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at RequestBuffer.scala:190 assert(PopCount(conflictMask(in)) <= 2.U)\n",0);
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__max = 0ULL;
        __Vdly__max_1 = 0ULL;
        __Vdly__max_2 = 0ULL;
        __Vdly__max_3 = 0ULL;
    } else {
        if (vlSelfRef.__PVT__helper_14_clean) {
            __Vdly__max = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable) 
                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                       > vlSelfRef.__PVT__max))) {
            __Vdly__max = (QData)((IData)(vlSelfRef.__PVT__bufferTimer_0));
        }
        if (vlSelfRef.__PVT__helper_17_clean) {
            __Vdly__max_1 = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable_1) 
                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                       > vlSelfRef.__PVT__max_1))) {
            __Vdly__max_1 = (QData)((IData)(vlSelfRef.__PVT__bufferTimer_1));
        }
        if (vlSelfRef.__PVT__helper_20_clean) {
            __Vdly__max_2 = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable_2) 
                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                       > vlSelfRef.__PVT__max_2))) {
            __Vdly__max_2 = (QData)((IData)(vlSelfRef.__PVT__bufferTimer_2));
        }
        if (vlSelfRef.__PVT__helper_23_clean) {
            __Vdly__max_3 = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable_3) 
                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                       > vlSelfRef.__PVT__max_3))) {
            __Vdly__max_3 = (QData)((IData)(vlSelfRef.__PVT__bufferTimer_3));
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: drop_prefetch, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_timer,
                      64,vlSelfRef.__PVT__next_counter);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_1_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_flow, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_1_timer,
                      64,vlSelfRef.__PVT__next_counter_1);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_alloc, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,vlSelfRef.__PVT__next_counter_2);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_full, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__next_counter_3);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: recv_prefetch, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__next_counter_4);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: recv_normal, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__next_counter_5);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: chosenQ_cancel, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__next_counter_6);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_7_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_mergeA, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_7_timer,
                      64,vlSelfRef.__PVT__next_counter_7);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_util_0, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__next_counter_8);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_9_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_util_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_9_timer,
                      64,vlSelfRef.__PVT__next_counter_9);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_util_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__next_counter_10);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_11_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: req_buffer_util_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_11_timer,
                      64,vlSelfRef.__PVT__next_counter_11);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:293 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_12);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_13);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_14);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_15);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_16);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_17);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_18);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_19);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_20);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_21);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_22);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_23);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_12_13, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_24);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_13_14, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_25);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_14_15, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_26);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_15_16, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_27);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_16_17, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_28);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_17_18, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_29);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_18_19, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_30);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_19_20, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_31);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_20_40, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_32);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_40_60, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_33);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_60_80, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_34);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_80_100, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_35);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_100_120, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_36);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_120_140, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_37);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_140_160, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_38);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_160_180, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_39);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_180_200, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_40);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_200_220, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_41);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_220_240, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_42);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_240_260, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_43);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_260_280, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_44);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_280_300, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_45);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_300_320, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_46);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_320_340, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_47);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_340_360, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_48);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_360_380, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_49);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_13_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_380_400, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_13_timer,
                      64,vlSelfRef.__PVT__counter_50);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_14_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_reqBuf_timer_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_14_timer,
                      64,vlSelfRef.__PVT__next_max);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:293 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_51);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_52);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_53);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_54);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_55);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_56);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_57);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_58);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_59);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_60);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_61);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_62);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_12_13, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_63);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_13_14, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_64);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_14_15, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_65);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_15_16, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_66);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_16_17, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_67);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_17_18, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_68);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_18_19, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_69);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_15_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_19_20, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_15_timer,
                      64,vlSelfRef.__PVT__counter_70);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_20_40, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_71);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_40_60, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_72);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_60_80, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_73);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_80_100, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_74);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_100_120, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_75);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_120_140, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_76);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_140_160, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_77);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_160_180, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_78);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_180_200, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_79);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_200_220, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_80);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_220_240, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_81);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_240_260, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_82);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_260_280, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_83);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_280_300, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_84);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_300_320, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_85);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_320_340, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_86);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_340_360, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_87);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_360_380, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_88);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_16_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_380_400, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_16_timer,
                      64,vlSelfRef.__PVT__counter_89);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_17_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_reqBuf_timer_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_17_timer,
                      64,vlSelfRef.__PVT__next_max_1);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:293 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_90);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_91);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_92);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_93);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_94);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_95);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_96);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_97);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_98);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_99);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_100);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_101);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_12_13, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_102);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_13_14, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_103);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_14_15, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_104);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_15_16, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_105);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_16_17, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_106);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_17_18, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_107);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_18_19, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_108);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_18_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_19_20, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_18_timer,
                      64,vlSelfRef.__PVT__counter_109);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_20_40, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_110);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_40_60, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_111);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_60_80, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_112);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_80_100, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_113);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_100_120, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_114);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_120_140, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_115);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_140_160, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_116);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_160_180, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_117);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_180_200, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_118);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_200_220, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_119);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_220_240, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_120);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_240_260, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_121);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_260_280, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_122);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_280_300, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_123);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_300_320, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_124);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_320_340, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_125);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_340_360, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_126);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_360_380, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_127);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_19_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_380_400, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_19_timer,
                      64,vlSelfRef.__PVT__counter_128);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_20_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_reqBuf_timer_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_20_timer,
                      64,vlSelfRef.__PVT__next_max_2);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:293 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_129);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_130);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_131);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_132);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_133);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_134);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_135);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_136);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_137);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_138);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_139);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_140);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_12_13, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_141);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_13_14, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_142);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_14_15, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_143);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_15_16, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_144);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_16_17, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_145);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_17_18, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_146);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_18_19, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_147);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_21_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_19_20, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_21_timer,
                      64,vlSelfRef.__PVT__counter_148);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_20_40, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_149);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_40_60, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_150);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_60_80, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_151);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_80_100, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_152);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_100_120, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_153);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_120_140, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_154);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_140_160, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_155);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_160_180, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_156);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_180_200, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_157);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_200_220, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_158);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_220_240, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_159);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_240_260, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_160);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_260_280, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_161);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_280_300, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_162);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_300_320, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_163);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_320_340, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_164);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_340_360, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_165);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_360_380, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_166);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_22_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: reqBuf_timer_380_400, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_22_timer,
                      64,vlSelfRef.__PVT__counter_167);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_23_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_reqBuf_timer_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_23_timer,
                      64,vlSelfRef.__PVT__next_max_3);
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__counter_10 = 0ULL;
        vlSelfRef.__PVT__counter_3 = 0ULL;
        vlSelfRef.__PVT__counter_2 = 0ULL;
        vlSelfRef.__PVT__counter_11 = 0ULL;
        vlSelfRef.__PVT__counter_8 = 0ULL;
        vlSelfRef.__PVT__counter_9 = 0ULL;
        vlSelfRef.__PVT__counter_1 = 0ULL;
        vlSelfRef.__PVT__counter_5 = 0ULL;
        vlSelfRef.__PVT__counter_4 = 0ULL;
        vlSelfRef.__PVT__counter_6 = 0ULL;
        vlSelfRef.__PVT__counter = 0ULL;
        vlSelfRef.__PVT__counter_7 = 0ULL;
        vlSelfRef.__PVT__chosenQ__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__buffer_3_task_size = 0U;
        vlSelfRef.__PVT__buffer_2_task_size = 0U;
        vlSelfRef.__PVT__buffer_1_task_size = 0U;
        vlSelfRef.__PVT__buffer_0_task_size = 0U;
        vlSelfRef.__PVT__buffer_3_task_off = 0U;
        vlSelfRef.__PVT__buffer_2_task_off = 0U;
        vlSelfRef.__PVT__buffer_1_task_off = 0U;
        vlSelfRef.__PVT__buffer_0_task_off = 0U;
        vlSelfRef.__PVT__buffer_3_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_2_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_1_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_0_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_3_task_channel = 0U;
        vlSelfRef.__PVT__buffer_2_task_channel = 0U;
        vlSelfRef.__PVT__buffer_1_task_channel = 0U;
        vlSelfRef.__PVT__buffer_0_task_channel = 0U;
        vlSelfRef.__PVT__buffer_3_task_param = 0U;
        vlSelfRef.__PVT__buffer_2_task_param = 0U;
        vlSelfRef.__PVT__buffer_1_task_param = 0U;
        vlSelfRef.__PVT__buffer_0_task_param = 0U;
        vlSelfRef.__PVT__buffer_3_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_2_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_1_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_0_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_3_task_tag = 0U;
        vlSelfRef.__PVT__buffer_2_task_tag = 0U;
        vlSelfRef.__PVT__buffer_1_task_tag = 0U;
        vlSelfRef.__PVT__buffer_0_task_tag = 0U;
        vlSelfRef.__PVT__buffer_3_task_set = 0U;
        vlSelfRef.__PVT__buffer_2_task_set = 0U;
        vlSelfRef.__PVT__buffer_1_task_set = 0U;
        vlSelfRef.__PVT__buffer_0_task_set = 0U;
        vlSelfRef.__PVT__counter_149 = 0ULL;
        vlSelfRef.__PVT__counter_150 = 0ULL;
        vlSelfRef.__PVT__counter_151 = 0ULL;
        vlSelfRef.__PVT__counter_152 = 0ULL;
        vlSelfRef.__PVT__counter_153 = 0ULL;
        vlSelfRef.__PVT__counter_154 = 0ULL;
        vlSelfRef.__PVT__counter_155 = 0ULL;
        vlSelfRef.__PVT__counter_156 = 0ULL;
        vlSelfRef.__PVT__counter_157 = 0ULL;
        vlSelfRef.__PVT__counter_158 = 0ULL;
        vlSelfRef.__PVT__counter_159 = 0ULL;
        vlSelfRef.__PVT__counter_160 = 0ULL;
        vlSelfRef.__PVT__counter_161 = 0ULL;
        vlSelfRef.__PVT__counter_162 = 0ULL;
        vlSelfRef.__PVT__counter_163 = 0ULL;
        vlSelfRef.__PVT__counter_164 = 0ULL;
        vlSelfRef.__PVT__counter_165 = 0ULL;
        vlSelfRef.__PVT__counter_166 = 0ULL;
        vlSelfRef.__PVT__counter_167 = 0ULL;
        vlSelfRef.__PVT__counter_129 = 0ULL;
        vlSelfRef.__PVT__counter_130 = 0ULL;
        vlSelfRef.__PVT__counter_131 = 0ULL;
        vlSelfRef.__PVT__counter_132 = 0ULL;
        vlSelfRef.__PVT__counter_133 = 0ULL;
        vlSelfRef.__PVT__counter_134 = 0ULL;
        vlSelfRef.__PVT__counter_135 = 0ULL;
        vlSelfRef.__PVT__counter_136 = 0ULL;
        vlSelfRef.__PVT__counter_137 = 0ULL;
        vlSelfRef.__PVT__counter_138 = 0ULL;
        vlSelfRef.__PVT__counter_139 = 0ULL;
        vlSelfRef.__PVT__counter_140 = 0ULL;
        vlSelfRef.__PVT__counter_141 = 0ULL;
        vlSelfRef.__PVT__counter_142 = 0ULL;
        vlSelfRef.__PVT__counter_143 = 0ULL;
        vlSelfRef.__PVT__counter_144 = 0ULL;
        vlSelfRef.__PVT__counter_145 = 0ULL;
        vlSelfRef.__PVT__counter_146 = 0ULL;
        vlSelfRef.__PVT__counter_147 = 0ULL;
        vlSelfRef.__PVT__counter_148 = 0ULL;
        vlSelfRef.__PVT__counter_32 = 0ULL;
        vlSelfRef.__PVT__counter_33 = 0ULL;
        vlSelfRef.__PVT__counter_34 = 0ULL;
        vlSelfRef.__PVT__counter_35 = 0ULL;
        vlSelfRef.__PVT__counter_36 = 0ULL;
        vlSelfRef.__PVT__counter_37 = 0ULL;
        vlSelfRef.__PVT__counter_38 = 0ULL;
        vlSelfRef.__PVT__counter_39 = 0ULL;
        vlSelfRef.__PVT__counter_40 = 0ULL;
        vlSelfRef.__PVT__counter_41 = 0ULL;
        vlSelfRef.__PVT__counter_42 = 0ULL;
        vlSelfRef.__PVT__counter_43 = 0ULL;
        vlSelfRef.__PVT__counter_44 = 0ULL;
        vlSelfRef.__PVT__counter_45 = 0ULL;
        vlSelfRef.__PVT__counter_46 = 0ULL;
        vlSelfRef.__PVT__counter_47 = 0ULL;
        vlSelfRef.__PVT__counter_48 = 0ULL;
        vlSelfRef.__PVT__counter_49 = 0ULL;
        vlSelfRef.__PVT__counter_50 = 0ULL;
        vlSelfRef.__PVT__counter_71 = 0ULL;
        vlSelfRef.__PVT__counter_72 = 0ULL;
        vlSelfRef.__PVT__counter_73 = 0ULL;
        vlSelfRef.__PVT__counter_74 = 0ULL;
        vlSelfRef.__PVT__counter_75 = 0ULL;
        vlSelfRef.__PVT__counter_76 = 0ULL;
        vlSelfRef.__PVT__counter_77 = 0ULL;
        vlSelfRef.__PVT__counter_78 = 0ULL;
        vlSelfRef.__PVT__counter_79 = 0ULL;
        vlSelfRef.__PVT__counter_80 = 0ULL;
        vlSelfRef.__PVT__counter_81 = 0ULL;
        vlSelfRef.__PVT__counter_82 = 0ULL;
        vlSelfRef.__PVT__counter_83 = 0ULL;
        vlSelfRef.__PVT__counter_84 = 0ULL;
        vlSelfRef.__PVT__counter_85 = 0ULL;
        vlSelfRef.__PVT__counter_86 = 0ULL;
        vlSelfRef.__PVT__counter_87 = 0ULL;
        vlSelfRef.__PVT__counter_88 = 0ULL;
        vlSelfRef.__PVT__counter_89 = 0ULL;
        vlSelfRef.__PVT__counter_110 = 0ULL;
        vlSelfRef.__PVT__counter_111 = 0ULL;
        vlSelfRef.__PVT__counter_112 = 0ULL;
        vlSelfRef.__PVT__counter_113 = 0ULL;
        vlSelfRef.__PVT__counter_114 = 0ULL;
        vlSelfRef.__PVT__counter_115 = 0ULL;
        vlSelfRef.__PVT__counter_116 = 0ULL;
        vlSelfRef.__PVT__counter_117 = 0ULL;
        vlSelfRef.__PVT__counter_118 = 0ULL;
        vlSelfRef.__PVT__counter_119 = 0ULL;
        vlSelfRef.__PVT__counter_120 = 0ULL;
        vlSelfRef.__PVT__counter_121 = 0ULL;
        vlSelfRef.__PVT__counter_122 = 0ULL;
        vlSelfRef.__PVT__counter_123 = 0ULL;
        vlSelfRef.__PVT__counter_124 = 0ULL;
        vlSelfRef.__PVT__counter_125 = 0ULL;
        vlSelfRef.__PVT__counter_126 = 0ULL;
        vlSelfRef.__PVT__counter_127 = 0ULL;
        vlSelfRef.__PVT__counter_128 = 0ULL;
        vlSelfRef.__PVT__counter_12 = 0ULL;
        vlSelfRef.__PVT__counter_13 = 0ULL;
        vlSelfRef.__PVT__counter_14 = 0ULL;
        vlSelfRef.__PVT__counter_15 = 0ULL;
        vlSelfRef.__PVT__counter_16 = 0ULL;
        vlSelfRef.__PVT__counter_17 = 0ULL;
        vlSelfRef.__PVT__counter_18 = 0ULL;
        vlSelfRef.__PVT__counter_19 = 0ULL;
        vlSelfRef.__PVT__counter_20 = 0ULL;
        vlSelfRef.__PVT__counter_21 = 0ULL;
        vlSelfRef.__PVT__counter_22 = 0ULL;
        vlSelfRef.__PVT__counter_23 = 0ULL;
        vlSelfRef.__PVT__counter_24 = 0ULL;
        vlSelfRef.__PVT__counter_25 = 0ULL;
        vlSelfRef.__PVT__counter_26 = 0ULL;
        vlSelfRef.__PVT__counter_27 = 0ULL;
        vlSelfRef.__PVT__counter_28 = 0ULL;
        vlSelfRef.__PVT__counter_29 = 0ULL;
        vlSelfRef.__PVT__counter_30 = 0ULL;
        vlSelfRef.__PVT__counter_31 = 0ULL;
        vlSelfRef.__PVT__counter_51 = 0ULL;
        vlSelfRef.__PVT__counter_52 = 0ULL;
        vlSelfRef.__PVT__counter_53 = 0ULL;
        vlSelfRef.__PVT__counter_54 = 0ULL;
        vlSelfRef.__PVT__counter_55 = 0ULL;
        vlSelfRef.__PVT__counter_56 = 0ULL;
        vlSelfRef.__PVT__counter_57 = 0ULL;
        vlSelfRef.__PVT__counter_58 = 0ULL;
        vlSelfRef.__PVT__counter_59 = 0ULL;
        vlSelfRef.__PVT__counter_60 = 0ULL;
        vlSelfRef.__PVT__counter_61 = 0ULL;
        vlSelfRef.__PVT__counter_62 = 0ULL;
        vlSelfRef.__PVT__counter_63 = 0ULL;
        vlSelfRef.__PVT__counter_64 = 0ULL;
        vlSelfRef.__PVT__counter_65 = 0ULL;
        vlSelfRef.__PVT__counter_66 = 0ULL;
        vlSelfRef.__PVT__counter_67 = 0ULL;
        vlSelfRef.__PVT__counter_68 = 0ULL;
        vlSelfRef.__PVT__counter_69 = 0ULL;
        vlSelfRef.__PVT__counter_70 = 0ULL;
        vlSelfRef.__PVT__counter_90 = 0ULL;
        vlSelfRef.__PVT__counter_91 = 0ULL;
        vlSelfRef.__PVT__counter_92 = 0ULL;
        vlSelfRef.__PVT__counter_93 = 0ULL;
        vlSelfRef.__PVT__counter_94 = 0ULL;
        vlSelfRef.__PVT__counter_95 = 0ULL;
        vlSelfRef.__PVT__counter_96 = 0ULL;
        vlSelfRef.__PVT__counter_97 = 0ULL;
        vlSelfRef.__PVT__counter_98 = 0ULL;
        vlSelfRef.__PVT__counter_99 = 0ULL;
        vlSelfRef.__PVT__counter_100 = 0ULL;
        vlSelfRef.__PVT__counter_101 = 0ULL;
        vlSelfRef.__PVT__counter_102 = 0ULL;
        vlSelfRef.__PVT__counter_103 = 0ULL;
        vlSelfRef.__PVT__counter_104 = 0ULL;
        vlSelfRef.__PVT__counter_105 = 0ULL;
        vlSelfRef.__PVT__counter_106 = 0ULL;
        vlSelfRef.__PVT__counter_107 = 0ULL;
        vlSelfRef.__PVT__counter_108 = 0ULL;
        vlSelfRef.__PVT__counter_109 = 0ULL;
        vlSelfRef.__PVT__buffer_3_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_3 = 0U;
        vlSelfRef.__PVT__buffer_3_waitMS = 0U;
        vlSelfRef.__PVT__buffer_3_waitMP = 0U;
        vlSelfRef.__PVT__buffer_0_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_0 = 0U;
        vlSelfRef.__PVT__buffer_0_waitMS = 0U;
        vlSelfRef.__PVT__buffer_0_waitMP = 0U;
        vlSelfRef.__PVT__buffer_1_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_1 = 0U;
        vlSelfRef.__PVT__buffer_1_waitMS = 0U;
        vlSelfRef.__PVT__buffer_1_waitMP = 0U;
        vlSelfRef.__PVT__buffer_2_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_2 = 0U;
        vlSelfRef.__PVT__buffer_2_waitMS = 0U;
        vlSelfRef.__PVT__buffer_2_waitMP = 0U;
    } else {
        vlSelfRef.__PVT__counter_10 = ((IData)(vlSelfRef.__PVT__helper_10_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_10);
        vlSelfRef.__PVT__counter_3 = ((IData)(vlSelfRef.__PVT__helper_3_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_3);
        vlSelfRef.__PVT__counter_2 = ((IData)(vlSelfRef.__PVT__helper_2_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_2);
        vlSelfRef.__PVT__counter_11 = ((IData)(vlSelfRef.__PVT__helper_11_clean)
                                        ? 0ULL : vlSelfRef.__PVT__next_counter_11);
        vlSelfRef.__PVT__counter_8 = ((IData)(vlSelfRef.__PVT__helper_8_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_8);
        vlSelfRef.__PVT__counter_9 = ((IData)(vlSelfRef.__PVT__helper_9_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_9);
        vlSelfRef.__PVT__counter_1 = ((IData)(vlSelfRef.__PVT__helper_1_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_1);
        vlSelfRef.__PVT__counter_5 = ((IData)(vlSelfRef.__PVT__helper_5_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_5);
        vlSelfRef.__PVT__counter_4 = ((IData)(vlSelfRef.__PVT__helper_4_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_4);
        vlSelfRef.__PVT__counter_6 = ((IData)(vlSelfRef.__PVT__helper_6_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_6);
        vlSelfRef.__PVT__counter = ((IData)(vlSelfRef.__PVT__helper_clean)
                                     ? 0ULL : vlSelfRef.__PVT__next_counter);
        vlSelfRef.__PVT__counter_7 = ((IData)(vlSelfRef.__PVT__helper_7_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_7);
        if (((IData)(vlSelfRef.__PVT__issueArb__DOT___ctrl_validMask_grantMask_lastGrant_T) 
             != (IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq))) {
            vlSelfRef.__PVT__chosenQ__DOT__maybe_full 
                = vlSelfRef.__PVT__issueArb__DOT___ctrl_validMask_grantMask_lastGrant_T;
        }
        if (vlSelfRef.__PVT__alloc) {
            if ((3U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_3_task_size 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_3_task_off 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_3_task_sourceId 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_3_task_channel = 1U;
                vlSelfRef.__PVT__buffer_3_task_param 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_3_task_opcode 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_3_task_tag 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_3_task_set 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
            if ((2U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_2_task_size 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_2_task_off 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_2_task_sourceId 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_2_task_channel = 1U;
                vlSelfRef.__PVT__buffer_2_task_param 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_2_task_opcode 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_2_task_tag 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_2_task_set 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
            if ((1U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_1_task_size 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_1_task_off 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_1_task_sourceId 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_1_task_channel = 1U;
                vlSelfRef.__PVT__buffer_1_task_param 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_1_task_opcode 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_1_task_tag 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_1_task_set 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
            if ((0U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_0_task_size 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_0_task_off 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_0_task_sourceId 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_0_task_channel = 1U;
                vlSelfRef.__PVT__buffer_0_task_param 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_0_task_opcode 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_0_task_tag 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_0_task_set 
                    = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
        }
        if (vlSelfRef.__PVT__helper_22_clean) {
            vlSelfRef.__PVT__counter_149 = 0ULL;
            vlSelfRef.__PVT__counter_150 = 0ULL;
            vlSelfRef.__PVT__counter_151 = 0ULL;
            vlSelfRef.__PVT__counter_152 = 0ULL;
            vlSelfRef.__PVT__counter_153 = 0ULL;
            vlSelfRef.__PVT__counter_154 = 0ULL;
            vlSelfRef.__PVT__counter_155 = 0ULL;
            vlSelfRef.__PVT__counter_156 = 0ULL;
            vlSelfRef.__PVT__counter_157 = 0ULL;
            vlSelfRef.__PVT__counter_158 = 0ULL;
            vlSelfRef.__PVT__counter_159 = 0ULL;
            vlSelfRef.__PVT__counter_160 = 0ULL;
            vlSelfRef.__PVT__counter_161 = 0ULL;
            vlSelfRef.__PVT__counter_162 = 0ULL;
            vlSelfRef.__PVT__counter_163 = 0ULL;
            vlSelfRef.__PVT__counter_164 = 0ULL;
            vlSelfRef.__PVT__counter_165 = 0ULL;
            vlSelfRef.__PVT__counter_166 = 0ULL;
            vlSelfRef.__PVT__counter_167 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x14U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x28U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_149 = vlSelfRef.__PVT___counter_T_287;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x28U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x3cU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_150 = vlSelfRef.__PVT___counter_T_289;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x3cU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x50U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_151 = vlSelfRef.__PVT___counter_T_291;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x50U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x64U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_152 = vlSelfRef.__PVT___counter_T_293;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x64U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x78U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_153 = vlSelfRef.__PVT___counter_T_295;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x78U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x8cU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_154 = vlSelfRef.__PVT___counter_T_297;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x8cU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xa0U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_155 = vlSelfRef.__PVT___counter_T_299;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xa0U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xb4U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_156 = vlSelfRef.__PVT___counter_T_301;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xb4U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xc8U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_157 = vlSelfRef.__PVT___counter_T_303;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xc8U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xdcU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_158 = vlSelfRef.__PVT___counter_T_305;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xdcU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xf0U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_159 = vlSelfRef.__PVT___counter_T_307;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xf0U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x104U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_160 = vlSelfRef.__PVT___counter_T_309;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x104U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x118U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_161 = vlSelfRef.__PVT___counter_T_311;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x118U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x12cU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_162 = vlSelfRef.__PVT___counter_T_313;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x12cU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x140U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_163 = vlSelfRef.__PVT___counter_T_315;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x140U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x154U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_164 = vlSelfRef.__PVT___counter_T_317;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x154U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x168U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_165 = vlSelfRef.__PVT___counter_T_319;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x168U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x17cU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_166 = vlSelfRef.__PVT___counter_T_321;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & (((0x17cU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                     & (0x190U > (IData)(vlSelfRef.__PVT__bufferTimer_3))) 
                    | (0x190U <= (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_167 = vlSelfRef.__PVT___counter_T_323;
            }
        }
        if (vlSelfRef.__PVT__helper_21_clean) {
            vlSelfRef.__PVT__counter_129 = 0ULL;
            vlSelfRef.__PVT__counter_130 = 0ULL;
            vlSelfRef.__PVT__counter_131 = 0ULL;
            vlSelfRef.__PVT__counter_132 = 0ULL;
            vlSelfRef.__PVT__counter_133 = 0ULL;
            vlSelfRef.__PVT__counter_134 = 0ULL;
            vlSelfRef.__PVT__counter_135 = 0ULL;
            vlSelfRef.__PVT__counter_136 = 0ULL;
            vlSelfRef.__PVT__counter_137 = 0ULL;
            vlSelfRef.__PVT__counter_138 = 0ULL;
            vlSelfRef.__PVT__counter_139 = 0ULL;
            vlSelfRef.__PVT__counter_140 = 0ULL;
            vlSelfRef.__PVT__counter_141 = 0ULL;
            vlSelfRef.__PVT__counter_142 = 0ULL;
            vlSelfRef.__PVT__counter_143 = 0ULL;
            vlSelfRef.__PVT__counter_144 = 0ULL;
            vlSelfRef.__PVT__counter_145 = 0ULL;
            vlSelfRef.__PVT__counter_146 = 0ULL;
            vlSelfRef.__PVT__counter_147 = 0ULL;
            vlSelfRef.__PVT__counter_148 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & (1U > (IData)(vlSelfRef.__PVT__bufferTimer_3)))) {
                vlSelfRef.__PVT__counter_129 = vlSelfRef.__PVT___counter_T_247;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((1U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (2U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_130 = vlSelfRef.__PVT___counter_T_249;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((2U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (3U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_131 = vlSelfRef.__PVT___counter_T_251;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((3U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (4U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_132 = vlSelfRef.__PVT___counter_T_253;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((4U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (5U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_133 = vlSelfRef.__PVT___counter_T_255;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((5U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (6U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_134 = vlSelfRef.__PVT___counter_T_257;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((6U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (7U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_135 = vlSelfRef.__PVT___counter_T_259;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((7U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (8U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_136 = vlSelfRef.__PVT___counter_T_261;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((8U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (9U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_137 = vlSelfRef.__PVT___counter_T_263;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((9U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xaU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_138 = vlSelfRef.__PVT___counter_T_265;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xaU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xbU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_139 = vlSelfRef.__PVT___counter_T_267;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xbU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xcU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_140 = vlSelfRef.__PVT___counter_T_269;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xcU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xdU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_141 = vlSelfRef.__PVT___counter_T_271;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xdU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xeU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_142 = vlSelfRef.__PVT___counter_T_273;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xeU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0xfU > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_143 = vlSelfRef.__PVT___counter_T_275;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xfU <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x10U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_144 = vlSelfRef.__PVT___counter_T_277;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x10U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x11U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_145 = vlSelfRef.__PVT___counter_T_279;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x11U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x12U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_146 = vlSelfRef.__PVT___counter_T_281;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x12U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x13U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_147 = vlSelfRef.__PVT___counter_T_283;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0x13U <= (IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                    & (0x14U > (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
                vlSelfRef.__PVT__counter_148 = vlSelfRef.__PVT___counter_T_285;
            }
        }
        if (vlSelfRef.__PVT__helper_13_clean) {
            vlSelfRef.__PVT__counter_32 = 0ULL;
            vlSelfRef.__PVT__counter_33 = 0ULL;
            vlSelfRef.__PVT__counter_34 = 0ULL;
            vlSelfRef.__PVT__counter_35 = 0ULL;
            vlSelfRef.__PVT__counter_36 = 0ULL;
            vlSelfRef.__PVT__counter_37 = 0ULL;
            vlSelfRef.__PVT__counter_38 = 0ULL;
            vlSelfRef.__PVT__counter_39 = 0ULL;
            vlSelfRef.__PVT__counter_40 = 0ULL;
            vlSelfRef.__PVT__counter_41 = 0ULL;
            vlSelfRef.__PVT__counter_42 = 0ULL;
            vlSelfRef.__PVT__counter_43 = 0ULL;
            vlSelfRef.__PVT__counter_44 = 0ULL;
            vlSelfRef.__PVT__counter_45 = 0ULL;
            vlSelfRef.__PVT__counter_46 = 0ULL;
            vlSelfRef.__PVT__counter_47 = 0ULL;
            vlSelfRef.__PVT__counter_48 = 0ULL;
            vlSelfRef.__PVT__counter_49 = 0ULL;
            vlSelfRef.__PVT__counter_50 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x14U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x28U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_32 = vlSelfRef.__PVT___counter_T_53;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x28U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x3cU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_33 = vlSelfRef.__PVT___counter_T_55;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x3cU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x50U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_34 = vlSelfRef.__PVT___counter_T_57;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x50U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x64U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_35 = vlSelfRef.__PVT___counter_T_59;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x64U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x78U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_36 = vlSelfRef.__PVT___counter_T_61;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x78U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x8cU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_37 = vlSelfRef.__PVT___counter_T_63;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x8cU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xa0U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_38 = vlSelfRef.__PVT___counter_T_65;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xa0U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xb4U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_39 = vlSelfRef.__PVT___counter_T_67;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xb4U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xc8U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_40 = vlSelfRef.__PVT___counter_T_69;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xc8U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xdcU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_41 = vlSelfRef.__PVT___counter_T_71;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xdcU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xf0U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_42 = vlSelfRef.__PVT___counter_T_73;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xf0U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x104U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_43 = vlSelfRef.__PVT___counter_T_75;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x104U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x118U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_44 = vlSelfRef.__PVT___counter_T_77;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x118U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x12cU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_45 = vlSelfRef.__PVT___counter_T_79;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x12cU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x140U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_46 = vlSelfRef.__PVT___counter_T_81;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x140U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x154U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_47 = vlSelfRef.__PVT___counter_T_83;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x154U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x168U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_48 = vlSelfRef.__PVT___counter_T_85;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x168U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x17cU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_49 = vlSelfRef.__PVT___counter_T_87;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 (((0x17cU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                   & (0x190U > (IData)(vlSelfRef.__PVT__bufferTimer_0))) 
                  | (0x190U <= (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_50 = vlSelfRef.__PVT___counter_T_89;
            }
        }
        if (vlSelfRef.__PVT__helper_16_clean) {
            vlSelfRef.__PVT__counter_71 = 0ULL;
            vlSelfRef.__PVT__counter_72 = 0ULL;
            vlSelfRef.__PVT__counter_73 = 0ULL;
            vlSelfRef.__PVT__counter_74 = 0ULL;
            vlSelfRef.__PVT__counter_75 = 0ULL;
            vlSelfRef.__PVT__counter_76 = 0ULL;
            vlSelfRef.__PVT__counter_77 = 0ULL;
            vlSelfRef.__PVT__counter_78 = 0ULL;
            vlSelfRef.__PVT__counter_79 = 0ULL;
            vlSelfRef.__PVT__counter_80 = 0ULL;
            vlSelfRef.__PVT__counter_81 = 0ULL;
            vlSelfRef.__PVT__counter_82 = 0ULL;
            vlSelfRef.__PVT__counter_83 = 0ULL;
            vlSelfRef.__PVT__counter_84 = 0ULL;
            vlSelfRef.__PVT__counter_85 = 0ULL;
            vlSelfRef.__PVT__counter_86 = 0ULL;
            vlSelfRef.__PVT__counter_87 = 0ULL;
            vlSelfRef.__PVT__counter_88 = 0ULL;
            vlSelfRef.__PVT__counter_89 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x14U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x28U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_71 = vlSelfRef.__PVT___counter_T_131;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x28U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x3cU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_72 = vlSelfRef.__PVT___counter_T_133;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x3cU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x50U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_73 = vlSelfRef.__PVT___counter_T_135;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x50U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x64U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_74 = vlSelfRef.__PVT___counter_T_137;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x64U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x78U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_75 = vlSelfRef.__PVT___counter_T_139;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x78U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x8cU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_76 = vlSelfRef.__PVT___counter_T_141;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x8cU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xa0U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_77 = vlSelfRef.__PVT___counter_T_143;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xa0U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xb4U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_78 = vlSelfRef.__PVT___counter_T_145;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xb4U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xc8U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_79 = vlSelfRef.__PVT___counter_T_147;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xc8U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xdcU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_80 = vlSelfRef.__PVT___counter_T_149;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xdcU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xf0U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_81 = vlSelfRef.__PVT___counter_T_151;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xf0U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x104U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_82 = vlSelfRef.__PVT___counter_T_153;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x104U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x118U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_83 = vlSelfRef.__PVT___counter_T_155;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x118U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x12cU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_84 = vlSelfRef.__PVT___counter_T_157;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x12cU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x140U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_85 = vlSelfRef.__PVT___counter_T_159;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x140U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x154U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_86 = vlSelfRef.__PVT___counter_T_161;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x154U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x168U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_87 = vlSelfRef.__PVT___counter_T_163;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x168U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x17cU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_88 = vlSelfRef.__PVT___counter_T_165;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & (((0x17cU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                     & (0x190U > (IData)(vlSelfRef.__PVT__bufferTimer_1))) 
                    | (0x190U <= (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_89 = vlSelfRef.__PVT___counter_T_167;
            }
        }
        if (vlSelfRef.__PVT__helper_19_clean) {
            vlSelfRef.__PVT__counter_110 = 0ULL;
            vlSelfRef.__PVT__counter_111 = 0ULL;
            vlSelfRef.__PVT__counter_112 = 0ULL;
            vlSelfRef.__PVT__counter_113 = 0ULL;
            vlSelfRef.__PVT__counter_114 = 0ULL;
            vlSelfRef.__PVT__counter_115 = 0ULL;
            vlSelfRef.__PVT__counter_116 = 0ULL;
            vlSelfRef.__PVT__counter_117 = 0ULL;
            vlSelfRef.__PVT__counter_118 = 0ULL;
            vlSelfRef.__PVT__counter_119 = 0ULL;
            vlSelfRef.__PVT__counter_120 = 0ULL;
            vlSelfRef.__PVT__counter_121 = 0ULL;
            vlSelfRef.__PVT__counter_122 = 0ULL;
            vlSelfRef.__PVT__counter_123 = 0ULL;
            vlSelfRef.__PVT__counter_124 = 0ULL;
            vlSelfRef.__PVT__counter_125 = 0ULL;
            vlSelfRef.__PVT__counter_126 = 0ULL;
            vlSelfRef.__PVT__counter_127 = 0ULL;
            vlSelfRef.__PVT__counter_128 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x14U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x28U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_110 = vlSelfRef.__PVT___counter_T_209;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x28U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x3cU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_111 = vlSelfRef.__PVT___counter_T_211;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x3cU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x50U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_112 = vlSelfRef.__PVT___counter_T_213;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x50U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x64U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_113 = vlSelfRef.__PVT___counter_T_215;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x64U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x78U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_114 = vlSelfRef.__PVT___counter_T_217;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x78U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x8cU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_115 = vlSelfRef.__PVT___counter_T_219;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x8cU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xa0U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_116 = vlSelfRef.__PVT___counter_T_221;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xa0U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xb4U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_117 = vlSelfRef.__PVT___counter_T_223;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xb4U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xc8U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_118 = vlSelfRef.__PVT___counter_T_225;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xc8U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xdcU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_119 = vlSelfRef.__PVT___counter_T_227;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xdcU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xf0U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_120 = vlSelfRef.__PVT___counter_T_229;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xf0U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x104U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_121 = vlSelfRef.__PVT___counter_T_231;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x104U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x118U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_122 = vlSelfRef.__PVT___counter_T_233;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x118U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x12cU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_123 = vlSelfRef.__PVT___counter_T_235;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x12cU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x140U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_124 = vlSelfRef.__PVT___counter_T_237;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x140U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x154U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_125 = vlSelfRef.__PVT___counter_T_239;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x154U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x168U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_126 = vlSelfRef.__PVT___counter_T_241;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x168U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x17cU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_127 = vlSelfRef.__PVT___counter_T_243;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & (((0x17cU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                     & (0x190U > (IData)(vlSelfRef.__PVT__bufferTimer_2))) 
                    | (0x190U <= (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_128 = vlSelfRef.__PVT___counter_T_245;
            }
        }
        if (vlSelfRef.__PVT__helper_12_clean) {
            vlSelfRef.__PVT__counter_12 = 0ULL;
            vlSelfRef.__PVT__counter_13 = 0ULL;
            vlSelfRef.__PVT__counter_14 = 0ULL;
            vlSelfRef.__PVT__counter_15 = 0ULL;
            vlSelfRef.__PVT__counter_16 = 0ULL;
            vlSelfRef.__PVT__counter_17 = 0ULL;
            vlSelfRef.__PVT__counter_18 = 0ULL;
            vlSelfRef.__PVT__counter_19 = 0ULL;
            vlSelfRef.__PVT__counter_20 = 0ULL;
            vlSelfRef.__PVT__counter_21 = 0ULL;
            vlSelfRef.__PVT__counter_22 = 0ULL;
            vlSelfRef.__PVT__counter_23 = 0ULL;
            vlSelfRef.__PVT__counter_24 = 0ULL;
            vlSelfRef.__PVT__counter_25 = 0ULL;
            vlSelfRef.__PVT__counter_26 = 0ULL;
            vlSelfRef.__PVT__counter_27 = 0ULL;
            vlSelfRef.__PVT__counter_28 = 0ULL;
            vlSelfRef.__PVT__counter_29 = 0ULL;
            vlSelfRef.__PVT__counter_30 = 0ULL;
            vlSelfRef.__PVT__counter_31 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 (1U > (IData)(vlSelfRef.__PVT__bufferTimer_0)))) {
                vlSelfRef.__PVT__counter_12 = vlSelfRef.__PVT___counter_T_13;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((1U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (2U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_13 = vlSelfRef.__PVT___counter_T_15;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((2U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (3U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_14 = vlSelfRef.__PVT___counter_T_17;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((3U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (4U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_15 = vlSelfRef.__PVT___counter_T_19;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((4U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (5U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_16 = vlSelfRef.__PVT___counter_T_21;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((5U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (6U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_17 = vlSelfRef.__PVT___counter_T_23;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((6U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (7U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_18 = vlSelfRef.__PVT___counter_T_25;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((7U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (8U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_19 = vlSelfRef.__PVT___counter_T_27;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((8U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (9U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_20 = vlSelfRef.__PVT___counter_T_29;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((9U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xaU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_21 = vlSelfRef.__PVT___counter_T_31;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xaU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xbU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_22 = vlSelfRef.__PVT___counter_T_33;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xbU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xcU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_23 = vlSelfRef.__PVT___counter_T_35;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xcU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xdU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_24 = vlSelfRef.__PVT___counter_T_37;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xdU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xeU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_25 = vlSelfRef.__PVT___counter_T_39;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xeU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0xfU > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_26 = vlSelfRef.__PVT___counter_T_41;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xfU <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x10U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_27 = vlSelfRef.__PVT___counter_T_43;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x10U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x11U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_28 = vlSelfRef.__PVT___counter_T_45;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x11U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x12U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_29 = vlSelfRef.__PVT___counter_T_47;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x12U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x13U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_30 = vlSelfRef.__PVT___counter_T_49;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0x13U <= (IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                  & (0x14U > (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
                vlSelfRef.__PVT__counter_31 = vlSelfRef.__PVT___counter_T_51;
            }
        }
        if (vlSelfRef.__PVT__helper_15_clean) {
            vlSelfRef.__PVT__counter_51 = 0ULL;
            vlSelfRef.__PVT__counter_52 = 0ULL;
            vlSelfRef.__PVT__counter_53 = 0ULL;
            vlSelfRef.__PVT__counter_54 = 0ULL;
            vlSelfRef.__PVT__counter_55 = 0ULL;
            vlSelfRef.__PVT__counter_56 = 0ULL;
            vlSelfRef.__PVT__counter_57 = 0ULL;
            vlSelfRef.__PVT__counter_58 = 0ULL;
            vlSelfRef.__PVT__counter_59 = 0ULL;
            vlSelfRef.__PVT__counter_60 = 0ULL;
            vlSelfRef.__PVT__counter_61 = 0ULL;
            vlSelfRef.__PVT__counter_62 = 0ULL;
            vlSelfRef.__PVT__counter_63 = 0ULL;
            vlSelfRef.__PVT__counter_64 = 0ULL;
            vlSelfRef.__PVT__counter_65 = 0ULL;
            vlSelfRef.__PVT__counter_66 = 0ULL;
            vlSelfRef.__PVT__counter_67 = 0ULL;
            vlSelfRef.__PVT__counter_68 = 0ULL;
            vlSelfRef.__PVT__counter_69 = 0ULL;
            vlSelfRef.__PVT__counter_70 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & (1U > (IData)(vlSelfRef.__PVT__bufferTimer_1)))) {
                vlSelfRef.__PVT__counter_51 = vlSelfRef.__PVT___counter_T_91;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((1U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (2U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_52 = vlSelfRef.__PVT___counter_T_93;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((2U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (3U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_53 = vlSelfRef.__PVT___counter_T_95;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((3U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (4U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_54 = vlSelfRef.__PVT___counter_T_97;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((4U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (5U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_55 = vlSelfRef.__PVT___counter_T_99;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((5U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (6U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_56 = vlSelfRef.__PVT___counter_T_101;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((6U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (7U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_57 = vlSelfRef.__PVT___counter_T_103;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((7U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (8U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_58 = vlSelfRef.__PVT___counter_T_105;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((8U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (9U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_59 = vlSelfRef.__PVT___counter_T_107;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((9U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xaU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_60 = vlSelfRef.__PVT___counter_T_109;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xaU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xbU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_61 = vlSelfRef.__PVT___counter_T_111;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xbU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xcU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_62 = vlSelfRef.__PVT___counter_T_113;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xcU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xdU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_63 = vlSelfRef.__PVT___counter_T_115;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xdU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xeU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_64 = vlSelfRef.__PVT___counter_T_117;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xeU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0xfU > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_65 = vlSelfRef.__PVT___counter_T_119;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xfU <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x10U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_66 = vlSelfRef.__PVT___counter_T_121;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x10U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x11U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_67 = vlSelfRef.__PVT___counter_T_123;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x11U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x12U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_68 = vlSelfRef.__PVT___counter_T_125;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x12U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x13U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_69 = vlSelfRef.__PVT___counter_T_127;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0x13U <= (IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                    & (0x14U > (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
                vlSelfRef.__PVT__counter_70 = vlSelfRef.__PVT___counter_T_129;
            }
        }
        if (vlSelfRef.__PVT__helper_18_clean) {
            vlSelfRef.__PVT__counter_90 = 0ULL;
            vlSelfRef.__PVT__counter_91 = 0ULL;
            vlSelfRef.__PVT__counter_92 = 0ULL;
            vlSelfRef.__PVT__counter_93 = 0ULL;
            vlSelfRef.__PVT__counter_94 = 0ULL;
            vlSelfRef.__PVT__counter_95 = 0ULL;
            vlSelfRef.__PVT__counter_96 = 0ULL;
            vlSelfRef.__PVT__counter_97 = 0ULL;
            vlSelfRef.__PVT__counter_98 = 0ULL;
            vlSelfRef.__PVT__counter_99 = 0ULL;
            vlSelfRef.__PVT__counter_100 = 0ULL;
            vlSelfRef.__PVT__counter_101 = 0ULL;
            vlSelfRef.__PVT__counter_102 = 0ULL;
            vlSelfRef.__PVT__counter_103 = 0ULL;
            vlSelfRef.__PVT__counter_104 = 0ULL;
            vlSelfRef.__PVT__counter_105 = 0ULL;
            vlSelfRef.__PVT__counter_106 = 0ULL;
            vlSelfRef.__PVT__counter_107 = 0ULL;
            vlSelfRef.__PVT__counter_108 = 0ULL;
            vlSelfRef.__PVT__counter_109 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & (1U > (IData)(vlSelfRef.__PVT__bufferTimer_2)))) {
                vlSelfRef.__PVT__counter_90 = vlSelfRef.__PVT___counter_T_169;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((1U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (2U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_91 = vlSelfRef.__PVT___counter_T_171;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((2U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (3U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_92 = vlSelfRef.__PVT___counter_T_173;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((3U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (4U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_93 = vlSelfRef.__PVT___counter_T_175;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((4U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (5U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_94 = vlSelfRef.__PVT___counter_T_177;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((5U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (6U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_95 = vlSelfRef.__PVT___counter_T_179;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((6U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (7U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_96 = vlSelfRef.__PVT___counter_T_181;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((7U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (8U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_97 = vlSelfRef.__PVT___counter_T_183;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((8U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (9U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_98 = vlSelfRef.__PVT___counter_T_185;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((9U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xaU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_99 = vlSelfRef.__PVT___counter_T_187;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xaU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xbU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_100 = vlSelfRef.__PVT___counter_T_189;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xbU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xcU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_101 = vlSelfRef.__PVT___counter_T_191;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xcU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xdU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_102 = vlSelfRef.__PVT___counter_T_193;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xdU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xeU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_103 = vlSelfRef.__PVT___counter_T_195;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xeU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0xfU > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_104 = vlSelfRef.__PVT___counter_T_197;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xfU <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x10U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_105 = vlSelfRef.__PVT___counter_T_199;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x10U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x11U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_106 = vlSelfRef.__PVT___counter_T_201;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x11U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x12U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_107 = vlSelfRef.__PVT___counter_T_203;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x12U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x13U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_108 = vlSelfRef.__PVT___counter_T_205;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0x13U <= (IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                    & (0x14U > (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
                vlSelfRef.__PVT__counter_109 = vlSelfRef.__PVT___counter_T_207;
            }
        }
        if (vlSelfRef.__PVT__buffer_3_valid) {
            vlSelfRef.__PVT__buffer_3_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate_3)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_3_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block_3)));
            vlSelfRef.__PVT__buffer_3_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_3_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_155)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_118));
            vlSelfRef.__PVT__buffer_3_waitMP = vlSelfRef.__PVT___GEN_400;
        } else if (vlSelfRef.__PVT__alloc) {
            if ((3U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_3_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_38)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_46)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_3_waitMS = vlSelfRef.__PVT___canFlow_T_38;
                vlSelfRef.__PVT__buffer_3_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_7) {
            vlSelfRef.__PVT__bufferTimer_3 = 0U;
        } else if (vlSelfRef.__PVT__buffer_3_valid) {
            vlSelfRef.__PVT__bufferTimer_3 = vlSelfRef.__PVT___bufferTimer_3_T_1;
        }
        if (vlSelfRef.__PVT__buffer_0_valid) {
            vlSelfRef.__PVT__buffer_0_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_0_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block)));
            vlSelfRef.__PVT__buffer_0_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_0_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_38)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_1));
            vlSelfRef.__PVT__buffer_0_waitMP = vlSelfRef.__PVT___GEN_385;
        } else if (vlSelfRef.__PVT__alloc) {
            if ((0U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_0_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_38)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_46)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_0_waitMS = vlSelfRef.__PVT___canFlow_T_38;
                vlSelfRef.__PVT__buffer_0_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_1) {
            vlSelfRef.__PVT__bufferTimer_0 = 0U;
        } else if (vlSelfRef.__PVT__buffer_0_valid) {
            vlSelfRef.__PVT__bufferTimer_0 = vlSelfRef.__PVT___bufferTimer_0_T_1;
        }
        if (vlSelfRef.__PVT__buffer_1_valid) {
            vlSelfRef.__PVT__buffer_1_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate_1)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_1_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block_1)));
            vlSelfRef.__PVT__buffer_1_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_1_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_77)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_40));
            vlSelfRef.__PVT__buffer_1_waitMP = vlSelfRef.__PVT___GEN_390;
        } else if (vlSelfRef.__PVT__alloc) {
            if ((1U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_1_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_38)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_46)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_1_waitMS = vlSelfRef.__PVT___canFlow_T_38;
                vlSelfRef.__PVT__buffer_1_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_3) {
            vlSelfRef.__PVT__bufferTimer_1 = 0U;
        } else if (vlSelfRef.__PVT__buffer_1_valid) {
            vlSelfRef.__PVT__bufferTimer_1 = vlSelfRef.__PVT___bufferTimer_1_T_1;
        }
        if (vlSelfRef.__PVT__buffer_2_valid) {
            vlSelfRef.__PVT__buffer_2_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate_2)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_2_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block_2)));
            vlSelfRef.__PVT__buffer_2_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_2_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_116)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_79));
            vlSelfRef.__PVT__buffer_2_waitMP = vlSelfRef.__PVT___GEN_395;
        } else if (vlSelfRef.__PVT__alloc) {
            if ((2U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_2_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_38)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_46)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_2_waitMS = vlSelfRef.__PVT___canFlow_T_38;
                vlSelfRef.__PVT__buffer_2_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_5) {
            vlSelfRef.__PVT__bufferTimer_2 = 0U;
        } else if (vlSelfRef.__PVT__buffer_2_valid) {
            vlSelfRef.__PVT__bufferTimer_2 = vlSelfRef.__PVT___bufferTimer_2_T_1;
        }
    }
    if (vlSelfRef.__PVT__issueArb__DOT___ctrl_validMask_grantMask_lastGrant_T) {
        vlSelfRef.__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant 
            = vlSelfRef.__PVT__issueArb_io_chosen;
    }
    vlSelfRef.__PVT__io_hasMergeA_REG_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
    vlSelfRef.__PVT__io_hasLatePF_REG_tag = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
    vlSelfRef.__PVT__io_hasMergeA_REG_set = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_set;
    vlSelfRef.__PVT__io_hasLatePF_REG_set = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_set;
    if (__VdlySet__chosenQ__DOT__ram_bits_task_mshrRetry__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_mshrRetry[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_aliasTask[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_txChannel__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_txChannel[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_snpHitReleaseWithData[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_bufIdx[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_off__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_aMergeTask_off[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_alias__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_aMergeTask_alias[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_reqSource[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_mshrId[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_sourceId[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_opcode__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_opcode[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_mergeA__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_mergeA[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_mshrTask[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_size__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_size[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_sourceId[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_channel__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_channel[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_opcode[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_tag__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_tag[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_set__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_set[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0;
    }
    vlSelfRef.__PVT__max = __Vdly__max;
    vlSelfRef.__PVT__max_1 = __Vdly__max_1;
    vlSelfRef.__PVT__max_2 = __Vdly__max_2;
    vlSelfRef.__PVT__max_3 = __Vdly__max_3;
    vlSelfRef.__PVT___counter_T_287 = (1ULL + vlSelfRef.__PVT__counter_149);
    vlSelfRef.__PVT___counter_T_289 = (1ULL + vlSelfRef.__PVT__counter_150);
    vlSelfRef.__PVT___counter_T_291 = (1ULL + vlSelfRef.__PVT__counter_151);
    vlSelfRef.__PVT___counter_T_293 = (1ULL + vlSelfRef.__PVT__counter_152);
    vlSelfRef.__PVT___counter_T_295 = (1ULL + vlSelfRef.__PVT__counter_153);
    vlSelfRef.__PVT___counter_T_297 = (1ULL + vlSelfRef.__PVT__counter_154);
    vlSelfRef.__PVT___counter_T_299 = (1ULL + vlSelfRef.__PVT__counter_155);
    vlSelfRef.__PVT___counter_T_301 = (1ULL + vlSelfRef.__PVT__counter_156);
    vlSelfRef.__PVT___counter_T_303 = (1ULL + vlSelfRef.__PVT__counter_157);
    vlSelfRef.__PVT___counter_T_305 = (1ULL + vlSelfRef.__PVT__counter_158);
    vlSelfRef.__PVT___counter_T_307 = (1ULL + vlSelfRef.__PVT__counter_159);
    vlSelfRef.__PVT___counter_T_309 = (1ULL + vlSelfRef.__PVT__counter_160);
    vlSelfRef.__PVT___counter_T_311 = (1ULL + vlSelfRef.__PVT__counter_161);
    vlSelfRef.__PVT___counter_T_313 = (1ULL + vlSelfRef.__PVT__counter_162);
    vlSelfRef.__PVT___counter_T_315 = (1ULL + vlSelfRef.__PVT__counter_163);
    vlSelfRef.__PVT___counter_T_317 = (1ULL + vlSelfRef.__PVT__counter_164);
    vlSelfRef.__PVT___counter_T_319 = (1ULL + vlSelfRef.__PVT__counter_165);
    vlSelfRef.__PVT___counter_T_321 = (1ULL + vlSelfRef.__PVT__counter_166);
    vlSelfRef.__PVT___counter_T_323 = (1ULL + vlSelfRef.__PVT__counter_167);
    vlSelfRef.__PVT___counter_T_247 = (1ULL + vlSelfRef.__PVT__counter_129);
    vlSelfRef.__PVT___counter_T_249 = (1ULL + vlSelfRef.__PVT__counter_130);
    vlSelfRef.__PVT___counter_T_251 = (1ULL + vlSelfRef.__PVT__counter_131);
    vlSelfRef.__PVT___counter_T_253 = (1ULL + vlSelfRef.__PVT__counter_132);
    vlSelfRef.__PVT___counter_T_255 = (1ULL + vlSelfRef.__PVT__counter_133);
    vlSelfRef.__PVT___counter_T_257 = (1ULL + vlSelfRef.__PVT__counter_134);
    vlSelfRef.__PVT___counter_T_259 = (1ULL + vlSelfRef.__PVT__counter_135);
    vlSelfRef.__PVT___counter_T_261 = (1ULL + vlSelfRef.__PVT__counter_136);
    vlSelfRef.__PVT___counter_T_263 = (1ULL + vlSelfRef.__PVT__counter_137);
    vlSelfRef.__PVT___counter_T_265 = (1ULL + vlSelfRef.__PVT__counter_138);
    vlSelfRef.__PVT___counter_T_267 = (1ULL + vlSelfRef.__PVT__counter_139);
    vlSelfRef.__PVT___counter_T_269 = (1ULL + vlSelfRef.__PVT__counter_140);
    vlSelfRef.__PVT___counter_T_271 = (1ULL + vlSelfRef.__PVT__counter_141);
    vlSelfRef.__PVT___counter_T_273 = (1ULL + vlSelfRef.__PVT__counter_142);
    vlSelfRef.__PVT___counter_T_275 = (1ULL + vlSelfRef.__PVT__counter_143);
    vlSelfRef.__PVT___counter_T_277 = (1ULL + vlSelfRef.__PVT__counter_144);
    vlSelfRef.__PVT___counter_T_279 = (1ULL + vlSelfRef.__PVT__counter_145);
    vlSelfRef.__PVT___counter_T_281 = (1ULL + vlSelfRef.__PVT__counter_146);
    vlSelfRef.__PVT___counter_T_283 = (1ULL + vlSelfRef.__PVT__counter_147);
    vlSelfRef.__PVT___counter_T_285 = (1ULL + vlSelfRef.__PVT__counter_148);
    vlSelfRef.__PVT__enable_REG_3 = vlSelfRef.__PVT__buffer_3_valid;
    vlSelfRef.__PVT__REG_7 = ((IData)(vlSelfRef.__PVT__REG_6) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_3_valid)));
    vlSelfRef.__PVT__REG_6 = vlSelfRef.__PVT__buffer_3_valid;
    vlSelfRef.__PVT___counter_T_53 = (1ULL + vlSelfRef.__PVT__counter_32);
    vlSelfRef.__PVT___counter_T_55 = (1ULL + vlSelfRef.__PVT__counter_33);
    vlSelfRef.__PVT___counter_T_57 = (1ULL + vlSelfRef.__PVT__counter_34);
    vlSelfRef.__PVT___counter_T_59 = (1ULL + vlSelfRef.__PVT__counter_35);
    vlSelfRef.__PVT___counter_T_61 = (1ULL + vlSelfRef.__PVT__counter_36);
    vlSelfRef.__PVT___counter_T_63 = (1ULL + vlSelfRef.__PVT__counter_37);
    vlSelfRef.__PVT___counter_T_65 = (1ULL + vlSelfRef.__PVT__counter_38);
    vlSelfRef.__PVT___counter_T_67 = (1ULL + vlSelfRef.__PVT__counter_39);
    vlSelfRef.__PVT___counter_T_69 = (1ULL + vlSelfRef.__PVT__counter_40);
    vlSelfRef.__PVT___counter_T_71 = (1ULL + vlSelfRef.__PVT__counter_41);
    vlSelfRef.__PVT___counter_T_73 = (1ULL + vlSelfRef.__PVT__counter_42);
    vlSelfRef.__PVT___counter_T_75 = (1ULL + vlSelfRef.__PVT__counter_43);
    vlSelfRef.__PVT___counter_T_77 = (1ULL + vlSelfRef.__PVT__counter_44);
    vlSelfRef.__PVT___counter_T_79 = (1ULL + vlSelfRef.__PVT__counter_45);
    vlSelfRef.__PVT___counter_T_81 = (1ULL + vlSelfRef.__PVT__counter_46);
    vlSelfRef.__PVT___counter_T_83 = (1ULL + vlSelfRef.__PVT__counter_47);
    vlSelfRef.__PVT___counter_T_85 = (1ULL + vlSelfRef.__PVT__counter_48);
    vlSelfRef.__PVT___counter_T_87 = (1ULL + vlSelfRef.__PVT__counter_49);
    vlSelfRef.__PVT___counter_T_89 = (1ULL + vlSelfRef.__PVT__counter_50);
    vlSelfRef.__PVT___counter_T_131 = (1ULL + vlSelfRef.__PVT__counter_71);
    vlSelfRef.__PVT___counter_T_133 = (1ULL + vlSelfRef.__PVT__counter_72);
    vlSelfRef.__PVT___counter_T_135 = (1ULL + vlSelfRef.__PVT__counter_73);
    vlSelfRef.__PVT___counter_T_137 = (1ULL + vlSelfRef.__PVT__counter_74);
    vlSelfRef.__PVT___counter_T_139 = (1ULL + vlSelfRef.__PVT__counter_75);
    vlSelfRef.__PVT___counter_T_141 = (1ULL + vlSelfRef.__PVT__counter_76);
    vlSelfRef.__PVT___counter_T_143 = (1ULL + vlSelfRef.__PVT__counter_77);
    vlSelfRef.__PVT___counter_T_145 = (1ULL + vlSelfRef.__PVT__counter_78);
    vlSelfRef.__PVT___counter_T_147 = (1ULL + vlSelfRef.__PVT__counter_79);
    vlSelfRef.__PVT___counter_T_149 = (1ULL + vlSelfRef.__PVT__counter_80);
    vlSelfRef.__PVT___counter_T_151 = (1ULL + vlSelfRef.__PVT__counter_81);
    vlSelfRef.__PVT___counter_T_153 = (1ULL + vlSelfRef.__PVT__counter_82);
    vlSelfRef.__PVT___counter_T_155 = (1ULL + vlSelfRef.__PVT__counter_83);
    vlSelfRef.__PVT___counter_T_157 = (1ULL + vlSelfRef.__PVT__counter_84);
    vlSelfRef.__PVT___counter_T_159 = (1ULL + vlSelfRef.__PVT__counter_85);
    vlSelfRef.__PVT___counter_T_161 = (1ULL + vlSelfRef.__PVT__counter_86);
    vlSelfRef.__PVT___counter_T_163 = (1ULL + vlSelfRef.__PVT__counter_87);
    vlSelfRef.__PVT___counter_T_165 = (1ULL + vlSelfRef.__PVT__counter_88);
    vlSelfRef.__PVT___counter_T_167 = (1ULL + vlSelfRef.__PVT__counter_89);
    vlSelfRef.__PVT___counter_T_209 = (1ULL + vlSelfRef.__PVT__counter_110);
    vlSelfRef.__PVT___counter_T_211 = (1ULL + vlSelfRef.__PVT__counter_111);
    vlSelfRef.__PVT___counter_T_213 = (1ULL + vlSelfRef.__PVT__counter_112);
    vlSelfRef.__PVT___counter_T_215 = (1ULL + vlSelfRef.__PVT__counter_113);
    vlSelfRef.__PVT___counter_T_217 = (1ULL + vlSelfRef.__PVT__counter_114);
    vlSelfRef.__PVT___counter_T_219 = (1ULL + vlSelfRef.__PVT__counter_115);
    vlSelfRef.__PVT___counter_T_221 = (1ULL + vlSelfRef.__PVT__counter_116);
    vlSelfRef.__PVT___counter_T_223 = (1ULL + vlSelfRef.__PVT__counter_117);
    vlSelfRef.__PVT___counter_T_225 = (1ULL + vlSelfRef.__PVT__counter_118);
    vlSelfRef.__PVT___counter_T_227 = (1ULL + vlSelfRef.__PVT__counter_119);
    vlSelfRef.__PVT___counter_T_229 = (1ULL + vlSelfRef.__PVT__counter_120);
    vlSelfRef.__PVT___counter_T_231 = (1ULL + vlSelfRef.__PVT__counter_121);
    vlSelfRef.__PVT___counter_T_233 = (1ULL + vlSelfRef.__PVT__counter_122);
    vlSelfRef.__PVT___counter_T_235 = (1ULL + vlSelfRef.__PVT__counter_123);
    vlSelfRef.__PVT___counter_T_237 = (1ULL + vlSelfRef.__PVT__counter_124);
    vlSelfRef.__PVT___counter_T_239 = (1ULL + vlSelfRef.__PVT__counter_125);
    vlSelfRef.__PVT___counter_T_241 = (1ULL + vlSelfRef.__PVT__counter_126);
    vlSelfRef.__PVT___counter_T_243 = (1ULL + vlSelfRef.__PVT__counter_127);
    vlSelfRef.__PVT___counter_T_245 = (1ULL + vlSelfRef.__PVT__counter_128);
    vlSelfRef.__PVT___counter_T_13 = (1ULL + vlSelfRef.__PVT__counter_12);
    vlSelfRef.__PVT___counter_T_15 = (1ULL + vlSelfRef.__PVT__counter_13);
    vlSelfRef.__PVT___counter_T_17 = (1ULL + vlSelfRef.__PVT__counter_14);
    vlSelfRef.__PVT___counter_T_19 = (1ULL + vlSelfRef.__PVT__counter_15);
    vlSelfRef.__PVT___counter_T_21 = (1ULL + vlSelfRef.__PVT__counter_16);
    vlSelfRef.__PVT___counter_T_23 = (1ULL + vlSelfRef.__PVT__counter_17);
    vlSelfRef.__PVT___counter_T_25 = (1ULL + vlSelfRef.__PVT__counter_18);
    vlSelfRef.__PVT___counter_T_27 = (1ULL + vlSelfRef.__PVT__counter_19);
    vlSelfRef.__PVT___counter_T_29 = (1ULL + vlSelfRef.__PVT__counter_20);
    vlSelfRef.__PVT___counter_T_31 = (1ULL + vlSelfRef.__PVT__counter_21);
    vlSelfRef.__PVT___counter_T_33 = (1ULL + vlSelfRef.__PVT__counter_22);
    vlSelfRef.__PVT___counter_T_35 = (1ULL + vlSelfRef.__PVT__counter_23);
    vlSelfRef.__PVT___counter_T_37 = (1ULL + vlSelfRef.__PVT__counter_24);
    vlSelfRef.__PVT___counter_T_39 = (1ULL + vlSelfRef.__PVT__counter_25);
    vlSelfRef.__PVT___counter_T_41 = (1ULL + vlSelfRef.__PVT__counter_26);
    vlSelfRef.__PVT___counter_T_43 = (1ULL + vlSelfRef.__PVT__counter_27);
    vlSelfRef.__PVT___counter_T_45 = (1ULL + vlSelfRef.__PVT__counter_28);
    vlSelfRef.__PVT___counter_T_47 = (1ULL + vlSelfRef.__PVT__counter_29);
    vlSelfRef.__PVT___counter_T_49 = (1ULL + vlSelfRef.__PVT__counter_30);
    vlSelfRef.__PVT___counter_T_51 = (1ULL + vlSelfRef.__PVT__counter_31);
    __Vdly__REG = vlSelfRef.__PVT__buffer_0_valid;
    vlSelfRef.__PVT__enable_REG = vlSelfRef.__PVT__buffer_0_valid;
    vlSelfRef.__PVT___counter_T_91 = (1ULL + vlSelfRef.__PVT__counter_51);
    vlSelfRef.__PVT___counter_T_93 = (1ULL + vlSelfRef.__PVT__counter_52);
    vlSelfRef.__PVT___counter_T_95 = (1ULL + vlSelfRef.__PVT__counter_53);
    vlSelfRef.__PVT___counter_T_97 = (1ULL + vlSelfRef.__PVT__counter_54);
    vlSelfRef.__PVT___counter_T_99 = (1ULL + vlSelfRef.__PVT__counter_55);
    vlSelfRef.__PVT___counter_T_101 = (1ULL + vlSelfRef.__PVT__counter_56);
    vlSelfRef.__PVT___counter_T_103 = (1ULL + vlSelfRef.__PVT__counter_57);
    vlSelfRef.__PVT___counter_T_105 = (1ULL + vlSelfRef.__PVT__counter_58);
    vlSelfRef.__PVT___counter_T_107 = (1ULL + vlSelfRef.__PVT__counter_59);
    vlSelfRef.__PVT___counter_T_109 = (1ULL + vlSelfRef.__PVT__counter_60);
    vlSelfRef.__PVT___counter_T_111 = (1ULL + vlSelfRef.__PVT__counter_61);
    vlSelfRef.__PVT___counter_T_113 = (1ULL + vlSelfRef.__PVT__counter_62);
    vlSelfRef.__PVT___counter_T_115 = (1ULL + vlSelfRef.__PVT__counter_63);
    vlSelfRef.__PVT___counter_T_117 = (1ULL + vlSelfRef.__PVT__counter_64);
    vlSelfRef.__PVT___counter_T_119 = (1ULL + vlSelfRef.__PVT__counter_65);
    vlSelfRef.__PVT___counter_T_121 = (1ULL + vlSelfRef.__PVT__counter_66);
    vlSelfRef.__PVT___counter_T_123 = (1ULL + vlSelfRef.__PVT__counter_67);
    vlSelfRef.__PVT___counter_T_125 = (1ULL + vlSelfRef.__PVT__counter_68);
    vlSelfRef.__PVT___counter_T_127 = (1ULL + vlSelfRef.__PVT__counter_69);
    vlSelfRef.__PVT___counter_T_129 = (1ULL + vlSelfRef.__PVT__counter_70);
    __Vdly__REG_2 = vlSelfRef.__PVT__buffer_1_valid;
    vlSelfRef.__PVT__enable_REG_1 = vlSelfRef.__PVT__buffer_1_valid;
    vlSelfRef.__PVT___counter_T_169 = (1ULL + vlSelfRef.__PVT__counter_90);
    vlSelfRef.__PVT___counter_T_171 = (1ULL + vlSelfRef.__PVT__counter_91);
    vlSelfRef.__PVT___counter_T_173 = (1ULL + vlSelfRef.__PVT__counter_92);
    vlSelfRef.__PVT___counter_T_175 = (1ULL + vlSelfRef.__PVT__counter_93);
    vlSelfRef.__PVT___counter_T_177 = (1ULL + vlSelfRef.__PVT__counter_94);
    vlSelfRef.__PVT___counter_T_179 = (1ULL + vlSelfRef.__PVT__counter_95);
    vlSelfRef.__PVT___counter_T_181 = (1ULL + vlSelfRef.__PVT__counter_96);
    vlSelfRef.__PVT___counter_T_183 = (1ULL + vlSelfRef.__PVT__counter_97);
    vlSelfRef.__PVT___counter_T_185 = (1ULL + vlSelfRef.__PVT__counter_98);
    vlSelfRef.__PVT___counter_T_187 = (1ULL + vlSelfRef.__PVT__counter_99);
    vlSelfRef.__PVT___counter_T_189 = (1ULL + vlSelfRef.__PVT__counter_100);
    vlSelfRef.__PVT___counter_T_191 = (1ULL + vlSelfRef.__PVT__counter_101);
    vlSelfRef.__PVT___counter_T_193 = (1ULL + vlSelfRef.__PVT__counter_102);
    vlSelfRef.__PVT___counter_T_195 = (1ULL + vlSelfRef.__PVT__counter_103);
    vlSelfRef.__PVT___counter_T_197 = (1ULL + vlSelfRef.__PVT__counter_104);
    vlSelfRef.__PVT___counter_T_199 = (1ULL + vlSelfRef.__PVT__counter_105);
    vlSelfRef.__PVT___counter_T_201 = (1ULL + vlSelfRef.__PVT__counter_106);
    vlSelfRef.__PVT___counter_T_203 = (1ULL + vlSelfRef.__PVT__counter_107);
    vlSelfRef.__PVT___counter_T_205 = (1ULL + vlSelfRef.__PVT__counter_108);
    vlSelfRef.__PVT___counter_T_207 = (1ULL + vlSelfRef.__PVT__counter_109);
    __Vdly__REG_4 = vlSelfRef.__PVT__buffer_2_valid;
    vlSelfRef.__PVT__enable_REG_2 = vlSelfRef.__PVT__buffer_2_valid;
    vlSelfRef.__PVT___bufferTimer_3_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_3)));
    vlSelfRef.__PVT__buffer_3_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((3U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_195))
                                            : (IData)(vlSelfRef.__PVT___GEN_195)));
    vlSelfRef.__PVT___bufferTimer_0_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_0)));
    vlSelfRef.__PVT__REG_1 = ((IData)(vlSelfRef.__PVT__REG) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_0_valid)));
    vlSelfRef.__PVT___bufferTimer_1_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_1)));
    vlSelfRef.__PVT__REG_3 = ((IData)(vlSelfRef.__PVT__REG_2) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_1_valid)));
    vlSelfRef.__PVT___bufferTimer_2_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_2)));
    vlSelfRef.__PVT__REG_5 = ((IData)(vlSelfRef.__PVT__REG_4) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_2_valid)));
    vlSelfRef.__PVT__REG = __Vdly__REG;
    vlSelfRef.__PVT__REG_2 = __Vdly__REG_2;
    vlSelfRef.__PVT__REG_4 = __Vdly__REG_4;
    vlSelfRef.__PVT__enable_3 = ((~ (IData)(vlSelfRef.__PVT__buffer_3_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_3));
    vlSelfRef.__PVT__buffer_0_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((0U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_192))
                                            : (IData)(vlSelfRef.__PVT___GEN_192)));
    vlSelfRef.__PVT__buffer_1_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((1U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_193))
                                            : (IData)(vlSelfRef.__PVT___GEN_193)));
    vlSelfRef.__PVT__buffer_2_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((2U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_194))
                                            : (IData)(vlSelfRef.__PVT___GEN_194)));
    vlSelfRef.__PVT__next_max_3 = (((IData)(vlSelfRef.__PVT__enable_3) 
                                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                                       > vlSelfRef.__PVT__max_3))
                                    ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_3))
                                    : vlSelfRef.__PVT__max_3);
    if (__VdlySet__chosenQ__DOT__ram_id__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_id[0U] = __VdlyVal__chosenQ__DOT__ram_id__v0;
    }
    vlSelfRef.__PVT__enable = ((~ (IData)(vlSelfRef.__PVT__buffer_0_valid)) 
                               & (IData)(vlSelfRef.__PVT__enable_REG));
    vlSelfRef.__PVT__enable_1 = ((~ (IData)(vlSelfRef.__PVT__buffer_1_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_1));
    vlSelfRef.__PVT___io_out_valid_T = ((3U == vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                         [0U]) ? (IData)(vlSelfRef.__PVT__buffer_3_rdy)
                                         : ((2U == 
                                             vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                             [0U]) ? (IData)(vlSelfRef.__PVT__buffer_2_rdy)
                                             : ((1U 
                                                 == 
                                                 vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                 [0U])
                                                 ? (IData)(vlSelfRef.__PVT__buffer_1_rdy)
                                                 : (IData)(vlSelfRef.__PVT__buffer_0_rdy))));
    vlSelfRef.__PVT__enable_2 = ((~ (IData)(vlSelfRef.__PVT__buffer_2_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_2));
    __PVT___cntEnable_T_4 = (7U & ((3U & ((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                          + (IData)(vlSelfRef.__PVT__buffer_1_valid))) 
                                   + (3U & ((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                            + (IData)(vlSelfRef.__PVT__buffer_3_valid)))));
    if (vlSelfRef.__PVT__buffer_0_valid) {
        if (vlSelfRef.__PVT__buffer_1_valid) {
            if (vlSelfRef.__PVT__buffer_2_valid) {
                vlSelfRef.__PVT__insertIdx = 3U;
                vlSelfRef.__PVT__full = vlSelfRef.__PVT__buffer_3_valid;
            } else {
                vlSelfRef.__PVT__insertIdx = 2U;
                vlSelfRef.__PVT__full = 0U;
            }
        } else {
            vlSelfRef.__PVT__insertIdx = 1U;
            vlSelfRef.__PVT__full = 0U;
        }
    } else {
        vlSelfRef.__PVT__insertIdx = 0U;
        vlSelfRef.__PVT__full = 0U;
    }
    vlSelfRef.__PVT__next_max = (((IData)(vlSelfRef.__PVT__enable) 
                                  & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                                     > vlSelfRef.__PVT__max))
                                  ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_0))
                                  : vlSelfRef.__PVT__max);
    vlSelfRef.__PVT__next_max_1 = (((IData)(vlSelfRef.__PVT__enable_1) 
                                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                                       > vlSelfRef.__PVT__max_1))
                                    ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_1))
                                    : vlSelfRef.__PVT__max_1);
    vlSelfRef.__PVT__next_counter_6 = (vlSelfRef.__PVT__counter_6 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.__PVT___io_out_valid_T)) 
                                                          & (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)))));
    vlSelfRef.__PVT__next_max_2 = (((IData)(vlSelfRef.__PVT__enable_2) 
                                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                                       > vlSelfRef.__PVT__max_2))
                                    ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_2))
                                    : vlSelfRef.__PVT__max_2);
    vlSelfRef.__PVT__next_counter_8 = (vlSelfRef.__PVT__counter_8 
                                       + (QData)((IData)(
                                                         (0U 
                                                          == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_9 = (vlSelfRef.__PVT__counter_9 
                                       + (QData)((IData)(
                                                         (1U 
                                                          == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_10 = (vlSelfRef.__PVT__counter_10 
                                        + (QData)((IData)(
                                                          (2U 
                                                           == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_11 = (vlSelfRef.__PVT__counter_11 
                                        + (QData)((IData)(
                                                          (3U 
                                                           == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_3 = (vlSelfRef.__PVT__counter_3 
                                       + (QData)((IData)(vlSelfRef.__PVT__full)));
}

VL_INLINE_OPT void VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf__1(VVerifyTop_RequestBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __PVT___waitMSUpdate_T;
    __PVT___waitMSUpdate_T = 0;
    // Body
    vlSelfRef.__PVT___mergeAMask_T_16 = ((6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode)) 
                                         | (7U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode)));
    vlSelfRef.__PVT___mergeAMask_T_1 = (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                         << 2U) | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_set));
    __PVT___waitMSUpdate_T = (0xfU & (~ (((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_willFree) 
                                            & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid)) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_willFree) 
                                            & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid)) 
                                           << 2U)) 
                                         | ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io___05FmsInfo_bits_willFree) 
                                              & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid)) 
                                             << 1U) 
                                            | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io_msInfo_bits_willFree) 
                                               & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid))))));
    vlSelfRef.__PVT___canFlow_T_37 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                      & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_willFree)) 
                                         & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set)) 
                                            & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag)) 
                                               | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__dirResult_tag)) 
                                                  & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_releaseack)))))));
    vlSelfRef.__PVT___canFlow_T_28 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                      & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_willFree)) 
                                         & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_set)) 
                                            & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_tag)) 
                                               | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__dirResult_tag)) 
                                                  & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_releaseack)))))));
    vlSelfRef.__PVT___waitMSUpdate_T_38 = (((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag)) 
                                                       | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_releaseack))))))) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                       == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_releaseack))))))) 
                                               << 2U)) 
                                           | ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io___05FmsInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                       == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_releaseack))))))) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                              == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_releaseack)))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_77 = (((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag)) 
                                                       | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_releaseack))))))) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                       == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_releaseack))))))) 
                                               << 2U)) 
                                           | ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io___05FmsInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                       == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_releaseack))))))) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                              == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_releaseack)))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_116 = (((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                               & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_willFree)) 
                                                  & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                      == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                         == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag)) 
                                                        | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                            == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__dirResult_tag)) 
                                                           & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_releaseack))))))) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                              == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_releaseack))))))) 
                                                << 2U)) 
                                            | ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io___05FmsInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                              == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_releaseack))))))) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io_msInfo_bits_willFree)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                         == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_set)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                            == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_tag)) 
                                                           | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_releaseack)))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_155 = (((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                               & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_willFree)) 
                                                  & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                      == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                         == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag)) 
                                                        | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                            == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__dirResult_tag)) 
                                                           & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_releaseack))))))) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                              == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_releaseack))))))) 
                                                << 2U)) 
                                            | ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io___05FmsInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                              == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_releaseack))))))) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io_msInfo_bits_willFree)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                         == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_set)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                            == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_tag)) 
                                                           | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_releaseack)))))))));
    vlSelfRef.__PVT___canFlow_T_10 = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                                      & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io_msInfo_bits_willFree)) 
                                         & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_set)) 
                                            & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_tag)) 
                                               | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__dirResult_tag)) 
                                                  & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_releaseack)))))));
    vlSelfRef.__PVT___mergeAMask_T_53 = ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                         == (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_tag) 
                                              << 2U) 
                                             | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_set)));
    vlSelfRef.__PVT___mergeAMask_T_78 = ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                         == (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag) 
                                              << 2U) 
                                             | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set)));
    vlSelfRef.__PVT___mergeAMask_T_3 = ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                        == (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_tag) 
                                             << 2U) 
                                            | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_set)));
    vlSelfRef.__PVT___mergeAMask_T_28 = ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                         == (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_tag) 
                                              << 2U) 
                                             | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_set)));
    vlSelfRef.__PVT___waitMSUpdate_T_1 = ((IData)(__PVT___waitMSUpdate_T) 
                                          & (IData)(vlSelfRef.__PVT__buffer_0_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_40 = ((IData)(__PVT___waitMSUpdate_T) 
                                           & (IData)(vlSelfRef.__PVT__buffer_1_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_79 = ((IData)(__PVT___waitMSUpdate_T) 
                                           & (IData)(vlSelfRef.__PVT__buffer_2_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_118 = ((IData)(__PVT___waitMSUpdate_T) 
                                            & (IData)(vlSelfRef.__PVT__buffer_3_waitMS));
    vlSelfRef.__VdfgRegularize_h0f5bbeb4_2_6 = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io___05FmsInfo_bits_willFree)) 
                                                     & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                         == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_set)) 
                                                        & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                            == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_tag)) 
                                                           | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                               == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_releaseack))))))) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT___canFlow_T_10));
    vlSelfRef.__PVT___mergeAMask_T_56 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_opcode)) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                            & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_msInfo_bits_willFree)) 
                                               & (IData)(vlSelfRef.__PVT___mergeAMask_T_53))));
    vlSelfRef.__PVT___mergeAMask_T_81 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_opcode)) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                            & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_msInfo_bits_willFree)) 
                                               & (IData)(vlSelfRef.__PVT___mergeAMask_T_78))));
    vlSelfRef.__PVT___mergeAMask_T_6 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_opcode)) 
                                        & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                                           & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io_msInfo_bits_willFree)) 
                                              & (IData)(vlSelfRef.__PVT___mergeAMask_T_3))));
    vlSelfRef.__PVT___mergeAMask_T_31 = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_opcode)) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
                                            & ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io___05FmsInfo_bits_willFree)) 
                                               & (IData)(vlSelfRef.__PVT___mergeAMask_T_28))));
    vlSelfRef.__PVT__waitMSUpdate = ((IData)((1U == 
                                              (3U & (IData)(vlSelfRef.__PVT__buffer_0_waitMP))))
                                      ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_38)
                                      : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_1));
    vlSelfRef.__PVT__waitMSUpdate_1 = ((IData)((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__PVT__buffer_1_waitMP))))
                                        ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_77)
                                        : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_40));
    vlSelfRef.__PVT__waitMSUpdate_2 = ((IData)((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__PVT__buffer_2_waitMP))))
                                        ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_116)
                                        : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_79));
    vlSelfRef.__PVT__waitMSUpdate_3 = ((IData)((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__PVT__buffer_3_waitMP))))
                                        ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_155)
                                        : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_118));
    vlSelfRef.__PVT___canFlow_T_38 = (((IData)(vlSelfRef.__PVT___canFlow_T_37) 
                                       << 3U) | (((IData)(vlSelfRef.__PVT___canFlow_T_28) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h0f5bbeb4_2_6)));
}

VL_INLINE_OPT void VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf__2(VVerifyTop_RequestBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___mergeAMask_T_74;
    __PVT___mergeAMask_T_74 = 0;
    CData/*0:0*/ __PVT___mergeAMask_T_99;
    __PVT___mergeAMask_T_99 = 0;
    CData/*1:0*/ __PVT__mergeAId_hi;
    __PVT__mergeAId_hi = 0;
    CData/*1:0*/ __PVT__mergeAId_lo;
    __PVT__mergeAId_lo = 0;
    // Body
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_alias__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_alias[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_needProbeAckData__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_needProbeAckData[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_useProbeData__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_useProbeData[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dirty__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_dirty[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_way__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_way[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_dirty__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_meta_dirty[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_state__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_meta_state[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_clients__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_meta_clients[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_alias__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_meta_alias[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_accessed__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_meta_accessed[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_metaWen__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_metaWen[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_tagWen__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_tagWen[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dsWen__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_dsWen[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_replTask__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_replTask[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_param__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_param[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_dirty__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_dirty[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_state__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_state[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_clients__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_clients[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_alias__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_alias[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_accessed__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_accessed[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_snpHitRelease__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_snpHitRelease[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseIdx__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_snpHitReleaseIdx[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_off__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_off[0U] 
            = vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_off__v0;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_param__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_param[0U] 
            = vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_param__v0;
    }
    __PVT___mergeAMask_T_74 = ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__dirResult_hit) 
                                   | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_s_refill))) 
                               & ((IData)(vlSelfRef.__PVT___mergeAMask_T_56) 
                                  & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__mergeA) 
                                         | ((1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_param)) 
                                            & (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_param))))) 
                                     & (IData)(vlSelfRef.__PVT___mergeAMask_T_16))));
    __PVT___mergeAMask_T_99 = ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__dirResult_hit) 
                                   | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_s_refill))) 
                               & ((IData)(vlSelfRef.__PVT___mergeAMask_T_81) 
                                  & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__mergeA) 
                                         | ((1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_param)) 
                                            & (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_param))))) 
                                     & (IData)(vlSelfRef.__PVT___mergeAMask_T_16))));
    __PVT__mergeAId_lo = ((((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__dirResult_hit) 
                                | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_s_refill))) 
                            & ((IData)(vlSelfRef.__PVT___mergeAMask_T_31) 
                               & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__mergeA) 
                                      | ((1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_param)) 
                                         & (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_param))))) 
                                  & (IData)(vlSelfRef.__PVT___mergeAMask_T_16)))) 
                           << 1U) | ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__dirResult_hit) 
                                         | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_s_refill))) 
                                     & ((IData)(vlSelfRef.__PVT___mergeAMask_T_6) 
                                        & ((~ ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__mergeA) 
                                               | ((1U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_param)) 
                                                  & (0U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_param))))) 
                                           & (IData)(vlSelfRef.__PVT___mergeAMask_T_16)))));
    vlSelfRef.__PVT__dup = ((5U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode)) 
                            & (((IData)(vlSelfRef.__PVT__buffer_3_valid) 
                                & ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                   == (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                        << 2U) | (IData)(vlSelfRef.__PVT__buffer_3_task_set)))) 
                               | (((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                   & ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                      == (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__buffer_2_task_set)))) 
                                  | (((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                      & ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                         == (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                              << 2U) 
                                             | (IData)(vlSelfRef.__PVT__buffer_1_task_set)))) 
                                     | (((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                         & ((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                            == (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__buffer_0_task_set)))) 
                                        | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                                            & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_acquire) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_opcode))) 
                                               & (IData)(vlSelfRef.__PVT___mergeAMask_T_78))) 
                                           | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_valid) 
                                               & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_acquire) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_opcode))) 
                                                  & (IData)(vlSelfRef.__PVT___mergeAMask_T_53))) 
                                              | (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_valid) 
                                                  & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_acquire) 
                                                      | (5U 
                                                         == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_opcode))) 
                                                     & (IData)(vlSelfRef.__PVT___mergeAMask_T_28))) 
                                                 | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_valid) 
                                                    & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_acquire) 
                                                        | (5U 
                                                           == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_opcode))) 
                                                       & (IData)(vlSelfRef.__PVT___mergeAMask_T_3)))))))))));
    __PVT__mergeAId_hi = (((IData)(__PVT___mergeAMask_T_99) 
                           << 1U) | (IData)(__PVT___mergeAMask_T_74));
    vlSelfRef.__PVT__mergeA = ((IData)(__PVT___mergeAMask_T_99) 
                               | ((IData)(__PVT___mergeAMask_T_74) 
                                  | (0U != (IData)(__PVT__mergeAId_lo))));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(
                                                       ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_valid) 
                                                        & (IData)(vlSelfRef.__PVT__dup)))));
    vlSelfRef.io_aMergeTask_bits_id = (((IData)((0U 
                                                 != (IData)(__PVT__mergeAId_hi))) 
                                        << 1U) | (1U 
                                                  & (((IData)(__PVT__mergeAId_hi) 
                                                      | (IData)(__PVT__mergeAId_lo)) 
                                                     >> 1U)));
    vlSelfRef.__PVT__next_counter_7 = (vlSelfRef.__PVT__counter_7 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__mergeA) 
                                                          & (((IData)(vlSelfRef.__PVT___mergeAMask_T_1) 
                                                              != 
                                                              (((IData)(vlSelfRef.__PVT__io_hasMergeA_REG_tag) 
                                                                << 2U) 
                                                               | (IData)(vlSelfRef.__PVT__io_hasMergeA_REG_set))) 
                                                             & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_valid))))));
    vlSelfRef.io_aMergeTask_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_valid) 
                                     & (IData)(vlSelfRef.__PVT__mergeA));
}

VL_INLINE_OPT void VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf__3(VVerifyTop_RequestBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___canFlow_T_46 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toReqBuf_0) 
                                               | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toReqBuf_1))));
    vlSelfRef.__PVT__canFlow = ((~ (IData)(vlSelfRef.__PVT__full)) 
                                & ((~ (IData)((0U != (IData)(vlSelfRef.__PVT___canFlow_T_38)))) 
                                   & ((~ (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
                                      & (IData)(vlSelfRef.__PVT___canFlow_T_46))));
    if (vlSelfRef.__PVT__canFlow) {
        vlSelfRef.io_out_bits_opcode = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
        vlSelfRef.io_out_bits_set = vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_set;
    } else {
        vlSelfRef.io_out_bits_opcode = vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_opcode
            [0U];
        vlSelfRef.io_out_bits_set = vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_set
            [0U];
    }
    vlSelfRef.io_out_valid = (((IData)(vlSelfRef.__PVT___io_out_valid_T) 
                               & (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
                              | ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_valid) 
                                 & (IData)(vlSelfRef.__PVT__canFlow)));
    vlSelfRef.__PVT___pipeBlockOut_T_2 = ((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_3 = ((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_4 = ((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_5 = ((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT__issueArb_io_in_0_valid = ((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_2))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_0_rdy)));
    vlSelfRef.__PVT__issueArb_io_in_1_valid = ((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_3))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_1_rdy)));
    vlSelfRef.__PVT__issueArb_io_in_2_valid = ((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_4))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_2_rdy)));
    vlSelfRef.__PVT__issueArb_io_in_3_valid = ((IData)(vlSelfRef.__PVT__buffer_3_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_5))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_3_rdy)));
    vlSelfRef.__PVT__issueArb_io_chosen = (((IData)(vlSelfRef.__PVT__issueArb_io_in_1_valid) 
                                            & (1U > (IData)(vlSelfRef.__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant)))
                                            ? 1U : 
                                           (((IData)(vlSelfRef.__PVT__issueArb_io_in_2_valid) 
                                             & (2U 
                                                > (IData)(vlSelfRef.__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant)))
                                             ? 2U : 
                                            (((IData)(vlSelfRef.__PVT__issueArb_io_in_3_valid) 
                                              & (3U 
                                                 > (IData)(vlSelfRef.__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant)))
                                              ? 3U : 
                                             ((IData)(vlSelfRef.__PVT__issueArb_io_in_0_valid)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__issueArb_io_in_1_valid)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__issueArb_io_in_2_valid)
                                                    ? 2U
                                                    : 3U))))));
}

VL_INLINE_OPT void VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf__4(VVerifyTop_RequestBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    __PVT__chosenQ_io_deq_ready = (1U & ((~ (IData)(vlSelfRef.__PVT___io_out_valid_T)) 
                                         | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_sinkA_ready)));
    __PVT___pipeBlockOut_T = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_sinkA_ready) 
                              & (IData)(vlSelfRef.io_out_valid));
    __PVT__doFlow = ((IData)(vlSelfRef.__PVT__canFlow) 
                     & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_sinkA_ready));
    vlSelfRef.__PVT__chosenQ__DOT__do_deq = ((IData)(__PVT__chosenQ_io_deq_ready) 
                                             & (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full));
    vlSelfRef.__PVT__issueArb__DOT___ctrl_validMask_grantMask_lastGrant_T 
        = (((~ (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
            | (IData)(__PVT__chosenQ_io_deq_ready)) 
           & ((3U == (IData)(vlSelfRef.__PVT__issueArb_io_chosen))
               ? (IData)(vlSelfRef.__PVT__issueArb_io_in_3_valid)
               : ((2U == (IData)(vlSelfRef.__PVT__issueArb_io_chosen))
                   ? (IData)(vlSelfRef.__PVT__issueArb_io_in_2_valid)
                   : ((1U == (IData)(vlSelfRef.__PVT__issueArb_io_chosen))
                       ? (IData)(vlSelfRef.__PVT__issueArb_io_in_1_valid)
                       : (IData)(vlSelfRef.__PVT__issueArb_io_in_0_valid)))));
    vlSelfRef.__PVT__s1_Block = (((IData)(__PVT___pipeBlockOut_T) 
                                  & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_2)) 
                                 | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_valid) 
                                    & ((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1_Block_1 = (((IData)(__PVT___pipeBlockOut_T) 
                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_3)) 
                                   | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_valid) 
                                      & ((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1_Block_2 = (((IData)(__PVT___pipeBlockOut_T) 
                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_4)) 
                                   | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_valid) 
                                      & ((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1_Block_3 = (((IData)(__PVT___pipeBlockOut_T) 
                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_5)) 
                                   | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_valid) 
                                      & ((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1Block = (((IData)(__PVT___pipeBlockOut_T) 
                                 & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                    == (IData)(vlSelfRef.io_out_bits_set))) 
                                | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_valid) 
                                   & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__next_counter_1 = (vlSelfRef.__PVT__counter_1 
                                       + (QData)((IData)(
                                                         ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_valid) 
                                                          & (IData)(__PVT__doFlow)))));
    vlSelfRef.__PVT__alloc = ((~ (IData)(vlSelfRef.__PVT__full)) 
                              & ((~ ((IData)(vlSelfRef.__PVT__dup) 
                                     | (IData)(vlSelfRef.__PVT__mergeA))) 
                                 & ((~ (IData)(__PVT__doFlow)) 
                                    & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_valid))));
    vlSelfRef.io_in_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__full)) 
                                   | ((IData)(__PVT__doFlow) 
                                      | ((IData)(vlSelfRef.__PVT__mergeA) 
                                         | (IData)(vlSelfRef.__PVT__dup)))));
    vlSelfRef.__PVT___GEN_385 = (7U & ((IData)(vlSelfRef.__PVT__s1_Block)
                                        ? (4U | ((IData)(vlSelfRef.__PVT__buffer_0_waitMP) 
                                                 >> 1U))
                                        : ((IData)(vlSelfRef.__PVT__buffer_0_waitMP) 
                                           >> 1U)));
    vlSelfRef.__PVT___GEN_390 = (7U & ((IData)(vlSelfRef.__PVT__s1_Block_1)
                                        ? (4U | ((IData)(vlSelfRef.__PVT__buffer_1_waitMP) 
                                                 >> 1U))
                                        : ((IData)(vlSelfRef.__PVT__buffer_1_waitMP) 
                                           >> 1U)));
    vlSelfRef.__PVT___GEN_395 = (7U & ((IData)(vlSelfRef.__PVT__s1_Block_2)
                                        ? (4U | ((IData)(vlSelfRef.__PVT__buffer_2_waitMP) 
                                                 >> 1U))
                                        : ((IData)(vlSelfRef.__PVT__buffer_2_waitMP) 
                                           >> 1U)));
    vlSelfRef.__PVT___GEN_400 = (7U & ((IData)(vlSelfRef.__PVT__s1_Block_3)
                                        ? (4U | ((IData)(vlSelfRef.__PVT__buffer_3_waitMP) 
                                                 >> 1U))
                                        : ((IData)(vlSelfRef.__PVT__buffer_3_waitMP) 
                                           >> 1U)));
    vlSelfRef.__PVT___buffer_waitMP_T = ((((IData)(vlSelfRef.__PVT__s1Block) 
                                           << 3U) | 
                                          ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toReqBuf_0) 
                                           << 2U)) 
                                         | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toReqBuf_1) 
                                            << 1U));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_2 
                                       + (QData)((IData)(vlSelfRef.__PVT__alloc)));
    if (vlSelfRef.__PVT__alloc) {
        vlSelfRef.__PVT___GEN_192 = ((0U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_0_valid));
        vlSelfRef.__PVT___GEN_193 = ((1U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_1_valid));
        vlSelfRef.__PVT___GEN_194 = ((2U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_2_valid));
        vlSelfRef.__PVT___GEN_195 = ((3U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_3_valid));
    } else {
        vlSelfRef.__PVT___GEN_192 = vlSelfRef.__PVT__buffer_0_valid;
        vlSelfRef.__PVT___GEN_193 = vlSelfRef.__PVT__buffer_1_valid;
        vlSelfRef.__PVT___GEN_194 = vlSelfRef.__PVT__buffer_2_valid;
        vlSelfRef.__PVT___GEN_195 = vlSelfRef.__PVT__buffer_3_valid;
    }
    __PVT___T_84 = ((IData)(vlSelfRef.io_in_ready) 
                    & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_valid));
    vlSelfRef.__PVT__next_counter_4 = (vlSelfRef.__PVT__counter_4 
                                       + (QData)((IData)(
                                                         ((IData)(__PVT___T_84) 
                                                          & (5U 
                                                             == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode))))));
    vlSelfRef.__PVT__next_counter_5 = (vlSelfRef.__PVT__counter_5 
                                       + (QData)((IData)(
                                                         ((5U 
                                                           != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode)) 
                                                          & (IData)(__PVT___T_84)))));
}
