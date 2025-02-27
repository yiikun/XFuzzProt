// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_MSHRCtl.h"

VL_ATTR_COLD void VVerifyTop_MSHRCtl___ctor_var_reset(VVerifyTop_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHRCtl___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_toReqArb_blockA_s1 = VL_RAND_RESET_I(1);
    vlSelf->io_toReqArb_blockB_s1 = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_valid = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_dirResult_hit = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_dirResult_tag = VL_RAND_RESET_I(3);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_dirResult_set = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_dirResult_way = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_dirResult_meta_dirty = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_dirResult_meta_state = VL_RAND_RESET_I(2);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_dirResult_meta_clients = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_dirResult_meta_alias = VL_RAND_RESET_I(2);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_dirResult_meta_prefetch = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_dirResult_meta_accessed = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_state_s_acquire = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_state_s_rprobe = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_state_s_pprobe = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_state_s_probeack = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_state_s_refill = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_state_w_rprobeackfirst = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_state_w_rprobeacklast = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_state_w_pprobeackfirst = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_state_w_pprobeacklast = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_state_w_pprobeack = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_state_w_grantfirst = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_state_w_grantlast = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_state_w_grant = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_state_w_replResp = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_task_channel = VL_RAND_RESET_I(3);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_task_set = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_task_tag = VL_RAND_RESET_I(3);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_task_off = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_task_alias = VL_RAND_RESET_I(2);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_task_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_task_param = VL_RAND_RESET_I(3);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_task_size = VL_RAND_RESET_I(3);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_task_sourceId = VL_RAND_RESET_I(5);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_task_needProbeAckData = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_task_aliasTask = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_task_fromL2pft = VL_RAND_RESET_I(1);
    vlSelf->io_fromMainPipe_mshr_alloc_s3_bits_task_reqSource = VL_RAND_RESET_I(4);
    vlSelf->io_toMainPipe_mshr_alloc_ptr = VL_RAND_RESET_I(8);
    vlSelf->io_mshrTask_ready = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_valid = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_channel = VL_RAND_RESET_I(3);
    vlSelf->io_mshrTask_bits_set = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_tag = VL_RAND_RESET_I(3);
    vlSelf->io_mshrTask_bits_off = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_alias = VL_RAND_RESET_I(2);
    vlSelf->io_mshrTask_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_mshrTask_bits_param = VL_RAND_RESET_I(3);
    vlSelf->io_mshrTask_bits_sourceId = VL_RAND_RESET_I(5);
    vlSelf->io_mshrTask_bits_mshrTask = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_mshrId = VL_RAND_RESET_I(8);
    vlSelf->io_mshrTask_bits_aliasTask = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_useProbeData = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_mshrRetry = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_fromL2pft = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_dirty = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_way = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_meta_dirty = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_meta_state = VL_RAND_RESET_I(2);
    vlSelf->io_mshrTask_bits_meta_clients = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_meta_alias = VL_RAND_RESET_I(2);
    vlSelf->io_mshrTask_bits_meta_prefetch = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_meta_prefetchSrc = VL_RAND_RESET_I(3);
    vlSelf->io_mshrTask_bits_meta_accessed = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_metaWen = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_tagWen = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_dsWen = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_replTask = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_reqSource = VL_RAND_RESET_I(4);
    vlSelf->io_mshrTask_bits_mergeA = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_aMergeTask_off = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_aMergeTask_alias = VL_RAND_RESET_I(2);
    vlSelf->io_mshrTask_bits_aMergeTask_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_mshrTask_bits_aMergeTask_param = VL_RAND_RESET_I(3);
    vlSelf->io_mshrTask_bits_aMergeTask_sourceId = VL_RAND_RESET_I(5);
    vlSelf->io_mshrTask_bits_aMergeTask_meta_dirty = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_aMergeTask_meta_state = VL_RAND_RESET_I(2);
    vlSelf->io_mshrTask_bits_aMergeTask_meta_clients = VL_RAND_RESET_I(1);
    vlSelf->io_mshrTask_bits_aMergeTask_meta_alias = VL_RAND_RESET_I(2);
    vlSelf->io_mshrTask_bits_aMergeTask_meta_accessed = VL_RAND_RESET_I(1);
    vlSelf->io_sourceA_ready = VL_RAND_RESET_I(1);
    vlSelf->io_sourceA_valid = VL_RAND_RESET_I(1);
    vlSelf->io_sourceA_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_sourceA_bits_param = VL_RAND_RESET_I(3);
    vlSelf->io_sourceA_bits_size = VL_RAND_RESET_I(1);
    vlSelf->io_sourceA_bits_source = VL_RAND_RESET_I(8);
    vlSelf->io_sourceA_bits_address = VL_RAND_RESET_I(5);
    vlSelf->io_sourceA_bits_mask = VL_RAND_RESET_I(1);
    vlSelf->io_sourceA_bits_data = VL_RAND_RESET_I(8);
    vlSelf->io_sourceA_bits_corrupt = VL_RAND_RESET_I(1);
    vlSelf->io_sourceB_ready = VL_RAND_RESET_I(1);
    vlSelf->io_sourceB_valid = VL_RAND_RESET_I(1);
    vlSelf->io_sourceB_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_sourceB_bits_param = VL_RAND_RESET_I(2);
    vlSelf->io_sourceB_bits_address = VL_RAND_RESET_I(5);
    vlSelf->io_sourceB_bits_data = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_0_set = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_0_tag = VL_RAND_RESET_I(3);
    vlSelf->io_grantStatus_1_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_1_set = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_1_tag = VL_RAND_RESET_I(3);
    vlSelf->io_grantStatus_2_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_2_set = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_2_tag = VL_RAND_RESET_I(3);
    vlSelf->io_grantStatus_3_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_3_set = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_3_tag = VL_RAND_RESET_I(3);
    vlSelf->io_resps_sinkC_valid = VL_RAND_RESET_I(1);
    vlSelf->io_resps_sinkC_set = VL_RAND_RESET_I(1);
    vlSelf->io_resps_sinkC_tag = VL_RAND_RESET_I(3);
    vlSelf->io_resps_sinkC_respInfo_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_resps_sinkC_respInfo_param = VL_RAND_RESET_I(3);
    vlSelf->io_resps_sinkC_respInfo_last = VL_RAND_RESET_I(1);
    vlSelf->io_resps_sinkD_valid = VL_RAND_RESET_I(1);
    vlSelf->io_resps_sinkD_mshrId = VL_RAND_RESET_I(8);
    vlSelf->io_resps_sinkD_respInfo_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_resps_sinkD_respInfo_param = VL_RAND_RESET_I(3);
    vlSelf->io_resps_sinkD_respInfo_last = VL_RAND_RESET_I(1);
    vlSelf->io_releaseBufWriteId = VL_RAND_RESET_I(8);
    vlSelf->io_nestedwb_set = VL_RAND_RESET_I(1);
    vlSelf->io_nestedwb_tag = VL_RAND_RESET_I(3);
    vlSelf->io_nestedwb_c_set_dirty = VL_RAND_RESET_I(1);
    vlSelf->io_nestedwbDataId_valid = VL_RAND_RESET_I(1);
    vlSelf->io_nestedwbDataId_bits = VL_RAND_RESET_I(8);
    vlSelf->io_pipeStatusVec_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_pipeStatusVec_1_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_channel = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_0_bits_set = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_way = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_reqTag = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_0_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_aliasTask = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_blockRefill = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_metaTag = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_0_bits_metaState = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_0_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_param = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_0_bits_mergeA = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_w_grantfirst = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_s_refill = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_w_releaseack = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_w_replResp = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_w_rprobeacklast = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_channel = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_1_bits_set = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_way = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_reqTag = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_1_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_aliasTask = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_blockRefill = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_metaTag = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_1_bits_metaState = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_1_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_param = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_1_bits_mergeA = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_w_grantfirst = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_s_refill = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_w_releaseack = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_w_replResp = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_w_rprobeacklast = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_channel = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_2_bits_set = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_way = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_reqTag = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_2_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_aliasTask = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_blockRefill = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_metaTag = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_2_bits_metaState = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_2_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_param = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_2_bits_mergeA = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_w_grantfirst = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_s_refill = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_w_releaseack = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_w_replResp = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_w_rprobeacklast = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_channel = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_3_bits_set = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_way = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_reqTag = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_3_bits_willFree = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_aliasTask = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_needRelease = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_blockRefill = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_metaTag = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_3_bits_metaState = VL_RAND_RESET_I(2);
    vlSelf->io_msInfo_3_bits_dirHit = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_isAcqOrPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_isPrefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_param = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_3_bits_mergeA = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_w_grantfirst = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_s_refill = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_w_releaseack = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_w_replResp = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_w_rprobeacklast = VL_RAND_RESET_I(1);
    vlSelf->io_aMergeTask_valid = VL_RAND_RESET_I(1);
    vlSelf->io_aMergeTask_bits_id = VL_RAND_RESET_I(8);
    vlSelf->io_aMergeTask_bits_task_off = VL_RAND_RESET_I(1);
    vlSelf->io_aMergeTask_bits_task_alias = VL_RAND_RESET_I(2);
    vlSelf->io_aMergeTask_bits_task_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_aMergeTask_bits_task_param = VL_RAND_RESET_I(3);
    vlSelf->io_aMergeTask_bits_task_sourceId = VL_RAND_RESET_I(5);
    vlSelf->io_replResp_valid = VL_RAND_RESET_I(1);
    vlSelf->io_replResp_bits_tag = VL_RAND_RESET_I(3);
    vlSelf->io_replResp_bits_way = VL_RAND_RESET_I(1);
    vlSelf->io_replResp_bits_meta_dirty = VL_RAND_RESET_I(1);
    vlSelf->io_replResp_bits_meta_state = VL_RAND_RESET_I(2);
    vlSelf->io_replResp_bits_meta_clients = VL_RAND_RESET_I(1);
    vlSelf->io_replResp_bits_meta_alias = VL_RAND_RESET_I(2);
    vlSelf->io_replResp_bits_meta_prefetch = VL_RAND_RESET_I(1);
    vlSelf->io_replResp_bits_meta_accessed = VL_RAND_RESET_I(1);
    vlSelf->io_replResp_bits_mshrId = VL_RAND_RESET_I(8);
    vlSelf->io_replResp_bits_retry = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_0_bits_channel = VL_RAND_RESET_I(3);
    vlSelf->io_msStatus_0_bits_set = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_0_bits_reqTag = VL_RAND_RESET_I(3);
    vlSelf->io_msStatus_0_bits_is_miss = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_0_bits_is_prefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_1_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_1_bits_channel = VL_RAND_RESET_I(3);
    vlSelf->io_msStatus_1_bits_set = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_1_bits_reqTag = VL_RAND_RESET_I(3);
    vlSelf->io_msStatus_1_bits_is_miss = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_1_bits_is_prefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_2_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_2_bits_channel = VL_RAND_RESET_I(3);
    vlSelf->io_msStatus_2_bits_set = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_2_bits_reqTag = VL_RAND_RESET_I(3);
    vlSelf->io_msStatus_2_bits_is_miss = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_2_bits_is_prefetch = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_3_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_3_bits_channel = VL_RAND_RESET_I(3);
    vlSelf->io_msStatus_3_bits_set = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_3_bits_reqTag = VL_RAND_RESET_I(3);
    vlSelf->io_msStatus_3_bits_is_miss = VL_RAND_RESET_I(1);
    vlSelf->io_msStatus_3_bits_is_prefetch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_0_io_alloc_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_0_io_resps_sink_d_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_0_io_aMergeTask_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_0_io_replResp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_1_io_alloc_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_1_io_resps_sink_d_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_1_io_aMergeTask_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_1_io_replResp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_2_io_alloc_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_2_io_resps_sink_d_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_2_io_aMergeTask_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_2_io_replResp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_3_io_alloc_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_3_io_resps_sink_d_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_3_io_aMergeTask_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrs_3_io_replResp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshrSelector_io_out_bits = VL_RAND_RESET_I(4);
    vlSelf->__PVT__sourceB_io_task_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshr_task_arb_io_in_0_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshr_task_arb_io_in_1_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshr_task_arb_io_in_2_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshr_task_arb_io_in_3_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__helper_clean = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_1_timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__helper_1_clean = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_1_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_2_timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__helper_2_clean = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_2_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_3_timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__helper_3_clean = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_3_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_4_timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__helper_4_clean = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_4_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_5_timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__helper_5_clean = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_5_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT___mshrFull_T_1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__counter = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__next_counter = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__next_counter_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_3 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_5 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_4 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_7 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_5 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_9 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__acquire_period = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__release_period = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__acquire_period_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__release_period_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__counter_6 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_11 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_7 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_13 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_8 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_15 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_9 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_17 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_10 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_19 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_11 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_21 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_12 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_23 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_13 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_25 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_14 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_27 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_15 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_29 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_16 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_31 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_17 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_33 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_18 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_35 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_19 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_37 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_20 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_39 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_21 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_41 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_22 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_43 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_23 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_45 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_24 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_47 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_25 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_49 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_26 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_51 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_27 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_53 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_28 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_55 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_29 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_57 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_30 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_59 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_31 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_61 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_32 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_63 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_33 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_65 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_34 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_67 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_35 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_69 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_36 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_71 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_37 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_73 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_38 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_75 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_39 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_77 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_40 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_79 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_41 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_81 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_42 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_83 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_43 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_85 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_44 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_87 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_45 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___counter_T_89 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_46 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_47 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_48 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_49 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_50 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_51 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_52 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_53 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_54 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_55 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_56 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_57 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_58 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_59 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_60 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_61 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_62 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_63 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_64 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_65 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__source_a_arb__DOT__valids = VL_RAND_RESET_I(4);
    vlSelf->__PVT__source_a_arb__DOT__rrGrantMask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__source_a_arb__DOT__pendingMask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__source_a_arb__DOT__rrSelOH = VL_RAND_RESET_I(4);
    vlSelf->__PVT__source_a_arb__DOT__chosenOH = VL_RAND_RESET_I(4);
    vlSelf->__PVT__source_a_arb__DOT___pendingMask_T_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__helper_timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sourceB__DOT__helper_clean = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__helper_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__helper_1_timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sourceB__DOT__helper_1_clean = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__helper_1_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__helper_2_timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sourceB__DOT__helper_2_clean = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__helper_2_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__helper_3_timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sourceB__DOT__helper_3_clean = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__helper_3_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__probes_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__probes_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__probes_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__probes_3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__conflictMask_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__conflictMask_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__conflictMask_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT__conflictMask_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sourceB__DOT___update_T_4 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__sourceB__DOT__counter = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sourceB__DOT__next_counter = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sourceB__DOT__counter_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sourceB__DOT__next_counter_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sourceB__DOT__counter_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sourceB__DOT__next_counter_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sourceB__DOT__counter_3 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sourceB__DOT__next_counter_3 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__source_b_arb__DOT__valids = VL_RAND_RESET_I(4);
    vlSelf->__PVT__source_b_arb__DOT__rrGrantMask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__source_b_arb__DOT__pendingMask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__source_b_arb__DOT__rrSelOH = VL_RAND_RESET_I(4);
    vlSelf->__PVT__source_b_arb__DOT__chosenOH = VL_RAND_RESET_I(4);
    vlSelf->__PVT__source_b_arb__DOT___pendingMask_T_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mshr_task_arb__DOT__valids = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mshr_task_arb__DOT__rrGrantMask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mshr_task_arb__DOT__pendingMask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mshr_task_arb__DOT__rrSelOH = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mshr_task_arb__DOT__chosenOH = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mshr_task_arb__DOT___pendingMask_T_2 = VL_RAND_RESET_I(1);
}
