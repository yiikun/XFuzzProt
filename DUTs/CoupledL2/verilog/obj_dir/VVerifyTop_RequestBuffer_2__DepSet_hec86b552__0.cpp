// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_RequestBuffer_2.h"

VL_INLINE_OPT void VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf__2(VVerifyTop_RequestBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
}
