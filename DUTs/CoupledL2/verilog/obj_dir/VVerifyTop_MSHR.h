// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVerifyTop.h for the primary calling header

#ifndef VERILATED_VVERIFYTOP_MSHR_H_
#define VERILATED_VVERIFYTOP_MSHR_H_  // guard

#include "verilated.h"


class VVerifyTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VVerifyTop_MSHR final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__io_id,7,0);
        VL_OUT8(__PVT__io_status_valid,0,0);
        VL_OUT8(__PVT__io_status_bits_channel,2,0);
        VL_OUT8(__PVT__io_status_bits_set,0,0);
        VL_OUT8(__PVT__io_status_bits_reqTag,2,0);
        VL_OUT8(__PVT__io_status_bits_metaTag,2,0);
        VL_OUT8(__PVT__io_status_bits_needsRepl,0,0);
        VL_OUT8(__PVT__io_status_bits_w_c_resp,0,0);
        VL_OUT8(__PVT__io_status_bits_w_d_resp,0,0);
        VL_OUT8(__PVT__io_status_bits_is_miss,0,0);
        VL_OUT8(__PVT__io_status_bits_is_prefetch,0,0);
        VL_OUT8(__PVT__io_msInfo_valid,0,0);
        VL_OUT8(__PVT__io_msInfo_bits_channel,2,0);
        VL_OUT8(__PVT__io_msInfo_bits_set,0,0);
        VL_OUT8(__PVT__io_msInfo_bits_way,0,0);
        VL_OUT8(__PVT__io_msInfo_bits_reqTag,2,0);
        VL_OUT8(__PVT__io_msInfo_bits_willFree,0,0);
        VL_OUT8(__PVT__io_msInfo_bits_aliasTask,0,0);
        VL_OUT8(__PVT__io_msInfo_bits_needRelease,0,0);
        VL_OUT8(__PVT__io_msInfo_bits_blockRefill,0,0);
        VL_OUT8(__PVT__io_msInfo_bits_metaTag,2,0);
        VL_OUT8(__PVT__io_msInfo_bits_metaState,1,0);
        VL_OUT8(__PVT__io_msInfo_bits_dirHit,0,0);
        VL_OUT8(__PVT__io_msInfo_bits_isAcqOrPrefetch,0,0);
        VL_OUT8(__PVT__io_msInfo_bits_isPrefetch,0,0);
        VL_OUT8(__PVT__io_msInfo_bits_param,2,0);
        VL_OUT8(__PVT__io_msInfo_bits_mergeA,0,0);
        VL_OUT8(__PVT__io_msInfo_bits_w_grantfirst,0,0);
        VL_OUT8(__PVT__io_msInfo_bits_s_refill,0,0);
        VL_OUT8(__PVT__io_msInfo_bits_w_releaseack,0,0);
        VL_OUT8(__PVT__io_msInfo_bits_w_replResp,0,0);
        VL_OUT8(__PVT__io_msInfo_bits_w_rprobeacklast,0,0);
        VL_IN8(__PVT__io_alloc_valid,0,0);
        VL_IN8(__PVT__io_alloc_bits_dirResult_hit,0,0);
        VL_IN8(__PVT__io_alloc_bits_dirResult_tag,2,0);
        VL_IN8(__PVT__io_alloc_bits_dirResult_set,0,0);
        VL_IN8(__PVT__io_alloc_bits_dirResult_way,0,0);
        VL_IN8(__PVT__io_alloc_bits_dirResult_meta_dirty,0,0);
        VL_IN8(__PVT__io_alloc_bits_dirResult_meta_state,1,0);
        VL_IN8(__PVT__io_alloc_bits_dirResult_meta_clients,0,0);
        VL_IN8(__PVT__io_alloc_bits_dirResult_meta_alias,1,0);
        VL_IN8(__PVT__io_alloc_bits_dirResult_meta_prefetch,0,0);
        VL_IN8(__PVT__io_alloc_bits_dirResult_meta_accessed,0,0);
        VL_IN8(__PVT__io_alloc_bits_state_s_acquire,0,0);
        VL_IN8(__PVT__io_alloc_bits_state_s_rprobe,0,0);
        VL_IN8(__PVT__io_alloc_bits_state_s_pprobe,0,0);
        VL_IN8(__PVT__io_alloc_bits_state_s_probeack,0,0);
        VL_IN8(__PVT__io_alloc_bits_state_s_refill,0,0);
        VL_IN8(__PVT__io_alloc_bits_state_w_rprobeackfirst,0,0);
        VL_IN8(__PVT__io_alloc_bits_state_w_rprobeacklast,0,0);
        VL_IN8(__PVT__io_alloc_bits_state_w_pprobeackfirst,0,0);
        VL_IN8(__PVT__io_alloc_bits_state_w_pprobeacklast,0,0);
        VL_IN8(__PVT__io_alloc_bits_state_w_pprobeack,0,0);
        VL_IN8(__PVT__io_alloc_bits_state_w_grantfirst,0,0);
        VL_IN8(__PVT__io_alloc_bits_state_w_grantlast,0,0);
        VL_IN8(__PVT__io_alloc_bits_state_w_grant,0,0);
        VL_IN8(__PVT__io_alloc_bits_state_w_replResp,0,0);
        VL_IN8(__PVT__io_alloc_bits_task_channel,2,0);
        VL_IN8(__PVT__io_alloc_bits_task_set,0,0);
        VL_IN8(__PVT__io_alloc_bits_task_tag,2,0);
        VL_IN8(__PVT__io_alloc_bits_task_off,0,0);
        VL_IN8(__PVT__io_alloc_bits_task_alias,1,0);
    };
    struct {
        VL_IN8(__PVT__io_alloc_bits_task_opcode,2,0);
        VL_IN8(__PVT__io_alloc_bits_task_param,2,0);
        VL_IN8(__PVT__io_alloc_bits_task_size,2,0);
        VL_IN8(__PVT__io_alloc_bits_task_sourceId,4,0);
        VL_IN8(__PVT__io_alloc_bits_task_needProbeAckData,0,0);
        VL_IN8(__PVT__io_alloc_bits_task_aliasTask,0,0);
        VL_IN8(__PVT__io_alloc_bits_task_fromL2pft,0,0);
        VL_IN8(__PVT__io_alloc_bits_task_reqSource,3,0);
        VL_IN8(__PVT__io_tasks_source_a_ready,0,0);
        VL_OUT8(__PVT__io_tasks_source_a_valid,0,0);
        VL_OUT8(__PVT__io_tasks_source_a_bits_tag,2,0);
        VL_OUT8(__PVT__io_tasks_source_a_bits_set,0,0);
        VL_OUT8(__PVT__io_tasks_source_a_bits_off,0,0);
        VL_OUT8(__PVT__io_tasks_source_a_bits_opcode,2,0);
        VL_OUT8(__PVT__io_tasks_source_a_bits_param,1,0);
        VL_OUT8(__PVT__io_tasks_source_a_bits_size,2,0);
        VL_OUT8(__PVT__io_tasks_source_a_bits_source,7,0);
        VL_OUT8(__PVT__io_tasks_source_a_bits_reqSource,3,0);
        VL_IN8(__PVT__io_tasks_source_b_ready,0,0);
        VL_OUT8(__PVT__io_tasks_source_b_valid,0,0);
        VL_OUT8(__PVT__io_tasks_source_b_bits_tag,2,0);
        VL_OUT8(__PVT__io_tasks_source_b_bits_set,0,0);
        VL_OUT8(__PVT__io_tasks_source_b_bits_param,1,0);
        VL_OUT8(__PVT__io_tasks_source_b_bits_alias,1,0);
        VL_IN8(__PVT__io_tasks_mainpipe_ready,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_valid,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_channel,2,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_set,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_tag,2,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_off,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_alias,1,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_opcode,2,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_param,2,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_sourceId,4,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_mshrId,7,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_aliasTask,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_useProbeData,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_mshrRetry,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_fromL2pft,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_dirty,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_way,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_meta_dirty,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_meta_state,1,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_meta_clients,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_meta_alias,1,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_meta_prefetch,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_meta_prefetchSrc,2,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_meta_accessed,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_metaWen,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_tagWen,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_dsWen,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_replTask,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_reqSource,3,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_mergeA,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_aMergeTask_off,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_aMergeTask_alias,1,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_aMergeTask_opcode,2,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_aMergeTask_param,2,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_aMergeTask_sourceId,4,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_dirty,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_state,1,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_clients,0,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_alias,1,0);
        VL_OUT8(__PVT__io_tasks_mainpipe_bits_aMergeTask_meta_accessed,0,0);
    };
    struct {
        VL_IN8(__PVT__io_resps_sink_c_valid,0,0);
        VL_IN8(__PVT__io_resps_sink_c_bits_opcode,2,0);
        VL_IN8(__PVT__io_resps_sink_c_bits_param,2,0);
        VL_IN8(__PVT__io_resps_sink_c_bits_last,0,0);
        VL_IN8(__PVT__io_resps_sink_d_valid,0,0);
        VL_IN8(__PVT__io_resps_sink_d_bits_opcode,2,0);
        VL_IN8(__PVT__io_resps_sink_d_bits_param,2,0);
        VL_IN8(__PVT__io_resps_sink_d_bits_last,0,0);
        VL_IN8(__PVT__io_nestedwb_set,0,0);
        VL_IN8(__PVT__io_nestedwb_tag,2,0);
        VL_IN8(__PVT__io_nestedwb_c_set_dirty,0,0);
        VL_OUT8(__PVT__io_nestedwbData,0,0);
        VL_IN8(__PVT__io_aMergeTask_valid,0,0);
        VL_IN8(__PVT__io_aMergeTask_bits_off,0,0);
        VL_IN8(__PVT__io_aMergeTask_bits_alias,1,0);
        VL_IN8(__PVT__io_aMergeTask_bits_opcode,2,0);
        VL_IN8(__PVT__io_aMergeTask_bits_param,2,0);
        VL_IN8(__PVT__io_aMergeTask_bits_sourceId,4,0);
        VL_IN8(__PVT__io_replResp_valid,0,0);
        VL_IN8(__PVT__io_replResp_bits_tag,2,0);
        VL_IN8(__PVT__io_replResp_bits_way,0,0);
        VL_IN8(__PVT__io_replResp_bits_meta_dirty,0,0);
        VL_IN8(__PVT__io_replResp_bits_meta_state,1,0);
        VL_IN8(__PVT__io_replResp_bits_meta_clients,0,0);
        VL_IN8(__PVT__io_replResp_bits_meta_alias,1,0);
        VL_IN8(__PVT__io_replResp_bits_meta_prefetch,0,0);
        VL_IN8(__PVT__io_replResp_bits_meta_accessed,0,0);
        VL_IN8(__PVT__io_replResp_bits_retry,0,0);
        CData/*0:0*/ __PVT__gotT;
        CData/*0:0*/ __PVT__gotGrantData;
        CData/*0:0*/ __PVT__probeDirty;
        CData/*0:0*/ __PVT__probeGotN;
        CData/*0:0*/ __PVT__req_valid;
        CData/*2:0*/ __PVT__req_channel;
        CData/*0:0*/ __PVT__req_set;
        CData/*2:0*/ __PVT__req_tag;
        CData/*0:0*/ __PVT__req_off;
        CData/*1:0*/ __PVT__req_alias;
        CData/*2:0*/ __PVT__req_opcode;
        CData/*2:0*/ __PVT__req_param;
        CData/*4:0*/ __PVT__req_sourceId;
        CData/*0:0*/ __PVT__req_needProbeAckData;
        CData/*0:0*/ __PVT__req_aliasTask;
        CData/*0:0*/ __PVT__req_fromL2pft;
        CData/*3:0*/ __PVT__req_reqSource;
        CData/*0:0*/ __PVT__dirResult_hit;
        CData/*2:0*/ __PVT__dirResult_tag;
        CData/*0:0*/ __PVT__dirResult_set;
        CData/*0:0*/ __PVT__dirResult_way;
        CData/*0:0*/ __PVT__dirResult_meta_dirty;
        CData/*1:0*/ __PVT__dirResult_meta_state;
        CData/*0:0*/ __PVT__dirResult_meta_clients;
        CData/*1:0*/ __PVT__dirResult_meta_alias;
        CData/*0:0*/ __PVT__dirResult_meta_prefetch;
        CData/*0:0*/ __PVT__dirResult_meta_accessed;
        CData/*0:0*/ __PVT__state_s_acquire;
        CData/*0:0*/ __PVT__state_s_rprobe;
        CData/*0:0*/ __PVT__state_s_pprobe;
        CData/*0:0*/ __PVT__state_s_release;
        CData/*0:0*/ __PVT__state_s_probeack;
        CData/*0:0*/ __PVT__state_s_refill;
        CData/*0:0*/ __PVT__state_s_retry;
        CData/*0:0*/ __PVT__state_w_rprobeacklast;
        CData/*0:0*/ __PVT__state_w_pprobeacklast;
    };
    struct {
        CData/*0:0*/ __PVT__state_w_pprobeack;
        CData/*0:0*/ __PVT__state_w_grantfirst;
        CData/*0:0*/ __PVT__state_w_grantlast;
        CData/*0:0*/ __PVT__state_w_grant;
        CData/*0:0*/ __PVT__state_w_releaseack;
        CData/*0:0*/ __PVT__state_w_replResp;
        CData/*0:0*/ __PVT___GEN_0;
        CData/*0:0*/ __PVT___GEN_4;
        CData/*0:0*/ __PVT___GEN_5;
        CData/*0:0*/ __PVT___GEN_6;
        CData/*0:0*/ __PVT___GEN_7;
        CData/*0:0*/ __PVT___GEN_9;
        CData/*0:0*/ __PVT___GEN_11;
        CData/*0:0*/ __PVT___GEN_12;
        CData/*0:0*/ __PVT___GEN_13;
        CData/*0:0*/ __PVT___GEN_14;
        CData/*0:0*/ __PVT___GEN_15;
        CData/*1:0*/ __PVT___GEN_23;
        CData/*0:0*/ __PVT___GEN_84;
        CData/*0:0*/ __PVT__req_needT;
        CData/*0:0*/ __PVT__req_acquire;
        CData/*0:0*/ __PVT___req_promoteT_T;
        CData/*0:0*/ __PVT__req_promoteT;
        CData/*0:0*/ __PVT__mp_release_valid;
        CData/*0:0*/ __PVT__mp_probeack_valid;
        CData/*2:0*/ __PVT___mp_probeack_task_mp_probeack_param_T_2;
        CData/*0:0*/ __PVT__mergeA;
        CData/*0:0*/ __PVT___GEN_91;
        CData/*0:0*/ __PVT___mp_grant_task_mp_grant_param_T;
        CData/*1:0*/ __PVT__mp_grant_task_aliasFinal;
        CData/*1:0*/ __PVT__mp_grant_task_merge_task_r_alias;
        CData/*2:0*/ __PVT__mp_grant_task_merge_task_r_opcode;
        CData/*2:0*/ __PVT__mp_grant_task_merge_task_r_param;
        CData/*4:0*/ __PVT__mp_grant_task_merge_task_r_sourceId;
        CData/*2:0*/ __PVT___GEN_112;
        CData/*2:0*/ __PVT___GEN_113;
        CData/*0:0*/ __PVT___T_6;
        CData/*0:0*/ __PVT___GEN_164;
        CData/*0:0*/ __PVT___T_7;
        CData/*0:0*/ __PVT___GEN_165;
        CData/*0:0*/ __PVT___GEN_166;
        CData/*0:0*/ __PVT___GEN_178;
        CData/*0:0*/ __PVT___T_19;
        CData/*0:0*/ __PVT___GEN_200;
        CData/*0:0*/ __PVT___GEN_208;
        CData/*0:0*/ __PVT___GEN_220;
        CData/*0:0*/ __PVT__io_msInfo_bits_blockRefill_REG;
        CData/*0:0*/ __PVT__io_msInfo_bits_blockRefill_REG_1;
        CData/*0:0*/ __PVT__io_msInfo_bits_blockRefill_REG_2;
        CData/*0:0*/ __PVT__nestedwb_match;
        CData/*0:0*/ __PVT___GEN_238;
        CData/*0:0*/ __PVT__acquire_ts;
        CData/*0:0*/ __PVT__release_ts;
        CData/*0:0*/ __VdfgRegularize_h47ff5784_0_7;
        CData/*0:0*/ __VdfgRegularize_h47ff5784_0_8;
        CData/*0:0*/ __VdfgRegularize_h47ff5784_0_13;
        VL_OUT64(__PVT__acquire_period,63,0);
        VL_OUT64(__PVT__probe_period,63,0);
        VL_OUT64(__PVT__release_period,63,0);
        QData/*63:0*/ __PVT__timer;
        QData/*63:0*/ __PVT___timer_T_1;
        QData/*63:0*/ __PVT___GEN_31;
        QData/*63:0*/ __PVT___GEN_33;
    };

    // INTERNAL VARIABLES
    VVerifyTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVerifyTop_MSHR(VVerifyTop__Syms* symsp, const char* v__name);
    ~VVerifyTop_MSHR();
    VL_UNCOPYABLE(VVerifyTop_MSHR);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
