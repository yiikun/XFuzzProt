// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2__Syms.h"
#include "VTestTop_L2L3L2___024unit.h"

extern "C" void L2PrefetchAccuracy_rolling_0_write(long long yAxisPt, long long xAxisPt, long long stamp, const char* site);

VL_INLINE_OPT void VTestTop_L2L3L2___024unit____Vdpiimwrap_L2PrefetchAccuracy_rolling_0_write_TOP____024unit(QData/*63:0*/ yAxisPt, QData/*63:0*/ xAxisPt, QData/*63:0*/ stamp, std::string site) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestTop_L2L3L2___024unit____Vdpiimwrap_L2PrefetchAccuracy_rolling_0_write_TOP____024unit\n"); );
    // Body
    long long yAxisPt__Vcvt;
    for (size_t yAxisPt__Vidx = 0; yAxisPt__Vidx < 1; ++yAxisPt__Vidx) yAxisPt__Vcvt = yAxisPt;
    long long xAxisPt__Vcvt;
    for (size_t xAxisPt__Vidx = 0; xAxisPt__Vidx < 1; ++xAxisPt__Vidx) xAxisPt__Vcvt = xAxisPt;
    long long stamp__Vcvt;
    for (size_t stamp__Vidx = 0; stamp__Vidx < 1; ++stamp__Vidx) stamp__Vcvt = stamp;
    const char* site__Vcvt;
    for (size_t site__Vidx = 0; site__Vidx < 1; ++site__Vidx) site__Vcvt = site.c_str();
    L2PrefetchAccuracy_rolling_0_write(yAxisPt__Vcvt, xAxisPt__Vcvt, stamp__Vcvt, site__Vcvt);
}

extern "C" void L2PrefetchLate_rolling_0_write(long long yAxisPt, long long xAxisPt, long long stamp, const char* site);

VL_INLINE_OPT void VTestTop_L2L3L2___024unit____Vdpiimwrap_L2PrefetchLate_rolling_0_write_TOP____024unit(QData/*63:0*/ yAxisPt, QData/*63:0*/ xAxisPt, QData/*63:0*/ stamp, std::string site) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestTop_L2L3L2___024unit____Vdpiimwrap_L2PrefetchLate_rolling_0_write_TOP____024unit\n"); );
    // Body
    long long yAxisPt__Vcvt;
    for (size_t yAxisPt__Vidx = 0; yAxisPt__Vidx < 1; ++yAxisPt__Vidx) yAxisPt__Vcvt = yAxisPt;
    long long xAxisPt__Vcvt;
    for (size_t xAxisPt__Vidx = 0; xAxisPt__Vidx < 1; ++xAxisPt__Vidx) xAxisPt__Vcvt = xAxisPt;
    long long stamp__Vcvt;
    for (size_t stamp__Vidx = 0; stamp__Vidx < 1; ++stamp__Vidx) stamp__Vcvt = stamp;
    const char* site__Vcvt;
    for (size_t site__Vidx = 0; site__Vidx < 1; ++site__Vidx) site__Vcvt = site.c_str();
    L2PrefetchLate_rolling_0_write(yAxisPt__Vcvt, xAxisPt__Vcvt, stamp__Vcvt, site__Vcvt);
}

extern "C" void L2MP_write(long long metaWway, long long metaWvalid, long long mshrId, long long allocPtr, long long allocValid, long long dirWay, long long dirHit, long long sset, long long tag, long long opcode, long long channel, long long mshrTask, long long stamp, const char* site);

VL_INLINE_OPT void VTestTop_L2L3L2___024unit____Vdpiimwrap_L2MP_write_TOP____024unit(QData/*63:0*/ metaWway, QData/*63:0*/ metaWvalid, QData/*63:0*/ mshrId, QData/*63:0*/ allocPtr, QData/*63:0*/ allocValid, QData/*63:0*/ dirWay, QData/*63:0*/ dirHit, QData/*63:0*/ sset, QData/*63:0*/ tag, QData/*63:0*/ opcode, QData/*63:0*/ channel, QData/*63:0*/ mshrTask, QData/*63:0*/ stamp, std::string site) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestTop_L2L3L2___024unit____Vdpiimwrap_L2MP_write_TOP____024unit\n"); );
    // Body
    long long metaWway__Vcvt;
    for (size_t metaWway__Vidx = 0; metaWway__Vidx < 1; ++metaWway__Vidx) metaWway__Vcvt = metaWway;
    long long metaWvalid__Vcvt;
    for (size_t metaWvalid__Vidx = 0; metaWvalid__Vidx < 1; ++metaWvalid__Vidx) metaWvalid__Vcvt = metaWvalid;
    long long mshrId__Vcvt;
    for (size_t mshrId__Vidx = 0; mshrId__Vidx < 1; ++mshrId__Vidx) mshrId__Vcvt = mshrId;
    long long allocPtr__Vcvt;
    for (size_t allocPtr__Vidx = 0; allocPtr__Vidx < 1; ++allocPtr__Vidx) allocPtr__Vcvt = allocPtr;
    long long allocValid__Vcvt;
    for (size_t allocValid__Vidx = 0; allocValid__Vidx < 1; ++allocValid__Vidx) allocValid__Vcvt = allocValid;
    long long dirWay__Vcvt;
    for (size_t dirWay__Vidx = 0; dirWay__Vidx < 1; ++dirWay__Vidx) dirWay__Vcvt = dirWay;
    long long dirHit__Vcvt;
    for (size_t dirHit__Vidx = 0; dirHit__Vidx < 1; ++dirHit__Vidx) dirHit__Vcvt = dirHit;
    long long sset__Vcvt;
    for (size_t sset__Vidx = 0; sset__Vidx < 1; ++sset__Vidx) sset__Vcvt = sset;
    long long tag__Vcvt;
    for (size_t tag__Vidx = 0; tag__Vidx < 1; ++tag__Vidx) tag__Vcvt = tag;
    long long opcode__Vcvt;
    for (size_t opcode__Vidx = 0; opcode__Vidx < 1; ++opcode__Vidx) opcode__Vcvt = opcode;
    long long channel__Vcvt;
    for (size_t channel__Vidx = 0; channel__Vidx < 1; ++channel__Vidx) channel__Vcvt = channel;
    long long mshrTask__Vcvt;
    for (size_t mshrTask__Vidx = 0; mshrTask__Vidx < 1; ++mshrTask__Vidx) mshrTask__Vcvt = mshrTask;
    long long stamp__Vcvt;
    for (size_t stamp__Vidx = 0; stamp__Vidx < 1; ++stamp__Vidx) stamp__Vcvt = stamp;
    const char* site__Vcvt;
    for (size_t site__Vidx = 0; site__Vidx < 1; ++site__Vidx) site__Vcvt = site.c_str();
    L2MP_write(metaWway__Vcvt, metaWvalid__Vcvt, mshrId__Vcvt, allocPtr__Vcvt, allocValid__Vcvt, dirWay__Vcvt, dirHit__Vcvt, sset__Vcvt, tag__Vcvt, opcode__Vcvt, channel__Vcvt, mshrTask__Vcvt, stamp__Vcvt, site__Vcvt);
}

extern "C" void L2PrefetchCoverage_rolling_0_write(long long yAxisPt, long long xAxisPt, long long stamp, const char* site);

VL_INLINE_OPT void VTestTop_L2L3L2___024unit____Vdpiimwrap_L2PrefetchCoverage_rolling_0_write_TOP____024unit(QData/*63:0*/ yAxisPt, QData/*63:0*/ xAxisPt, QData/*63:0*/ stamp, std::string site) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestTop_L2L3L2___024unit____Vdpiimwrap_L2PrefetchCoverage_rolling_0_write_TOP____024unit\n"); );
    // Body
    long long yAxisPt__Vcvt;
    for (size_t yAxisPt__Vidx = 0; yAxisPt__Vidx < 1; ++yAxisPt__Vidx) yAxisPt__Vcvt = yAxisPt;
    long long xAxisPt__Vcvt;
    for (size_t xAxisPt__Vidx = 0; xAxisPt__Vidx < 1; ++xAxisPt__Vidx) xAxisPt__Vcvt = xAxisPt;
    long long stamp__Vcvt;
    for (size_t stamp__Vidx = 0; stamp__Vidx < 1; ++stamp__Vidx) stamp__Vcvt = stamp;
    const char* site__Vcvt;
    for (size_t site__Vidx = 0; site__Vidx < 1; ++site__Vidx) site__Vcvt = site.c_str();
    L2PrefetchCoverage_rolling_0_write(yAxisPt__Vcvt, xAxisPt__Vcvt, stamp__Vcvt, site__Vcvt);
}

extern "C" void TLLog_write(long long echo, long long user, long long data_0, long long data_1, long long data_2, long long data_3, long long address, long long sink, long long source, long long param, long long opcode, long long channel, long long stamp, const char* site);

VL_INLINE_OPT void VTestTop_L2L3L2___024unit____Vdpiimwrap_TLLog_write_TOP____024unit(QData/*63:0*/ echo, QData/*63:0*/ user, QData/*63:0*/ data_0, QData/*63:0*/ data_1, QData/*63:0*/ data_2, QData/*63:0*/ data_3, QData/*63:0*/ address, QData/*63:0*/ sink, QData/*63:0*/ source, QData/*63:0*/ param, QData/*63:0*/ opcode, QData/*63:0*/ channel, QData/*63:0*/ stamp, std::string site) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestTop_L2L3L2___024unit____Vdpiimwrap_TLLog_write_TOP____024unit\n"); );
    // Body
    long long echo__Vcvt;
    for (size_t echo__Vidx = 0; echo__Vidx < 1; ++echo__Vidx) echo__Vcvt = echo;
    long long user__Vcvt;
    for (size_t user__Vidx = 0; user__Vidx < 1; ++user__Vidx) user__Vcvt = user;
    long long data_0__Vcvt;
    for (size_t data_0__Vidx = 0; data_0__Vidx < 1; ++data_0__Vidx) data_0__Vcvt = data_0;
    long long data_1__Vcvt;
    for (size_t data_1__Vidx = 0; data_1__Vidx < 1; ++data_1__Vidx) data_1__Vcvt = data_1;
    long long data_2__Vcvt;
    for (size_t data_2__Vidx = 0; data_2__Vidx < 1; ++data_2__Vidx) data_2__Vcvt = data_2;
    long long data_3__Vcvt;
    for (size_t data_3__Vidx = 0; data_3__Vidx < 1; ++data_3__Vidx) data_3__Vcvt = data_3;
    long long address__Vcvt;
    for (size_t address__Vidx = 0; address__Vidx < 1; ++address__Vidx) address__Vcvt = address;
    long long sink__Vcvt;
    for (size_t sink__Vidx = 0; sink__Vidx < 1; ++sink__Vidx) sink__Vcvt = sink;
    long long source__Vcvt;
    for (size_t source__Vidx = 0; source__Vidx < 1; ++source__Vidx) source__Vcvt = source;
    long long param__Vcvt;
    for (size_t param__Vidx = 0; param__Vidx < 1; ++param__Vidx) param__Vcvt = param;
    long long opcode__Vcvt;
    for (size_t opcode__Vidx = 0; opcode__Vidx < 1; ++opcode__Vidx) opcode__Vcvt = opcode;
    long long channel__Vcvt;
    for (size_t channel__Vidx = 0; channel__Vidx < 1; ++channel__Vidx) channel__Vcvt = channel;
    long long stamp__Vcvt;
    for (size_t stamp__Vidx = 0; stamp__Vidx < 1; ++stamp__Vidx) stamp__Vcvt = stamp;
    const char* site__Vcvt;
    for (size_t site__Vidx = 0; site__Vidx < 1; ++site__Vidx) site__Vcvt = site.c_str();
    TLLog_write(echo__Vcvt, user__Vcvt, data_0__Vcvt, data_1__Vcvt, data_2__Vcvt, data_3__Vcvt, address__Vcvt, sink__Vcvt, source__Vcvt, param__Vcvt, opcode__Vcvt, channel__Vcvt, stamp__Vcvt, site__Vcvt);
}
