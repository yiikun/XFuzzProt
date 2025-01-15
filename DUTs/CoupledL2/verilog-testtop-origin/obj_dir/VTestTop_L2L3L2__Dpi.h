// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTESTTOP_L2L3L2__DPI_H_
#define VERILATED_VTESTTOP_L2L3L2__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at L2MPWriter.v:2:30
    extern void L2MP_write(long long metaWway, long long metaWvalid, long long mshrId, long long allocPtr, long long allocValid, long long dirWay, long long dirHit, long long sset, long long tag, long long opcode, long long channel, long long mshrTask, long long stamp, const char* site);
    // DPI import at L2PrefetchAccuracy_rolling_0Writer.v:2:30
    extern void L2PrefetchAccuracy_rolling_0_write(long long yAxisPt, long long xAxisPt, long long stamp, const char* site);
    // DPI import at L2PrefetchCoverage_rolling_0Writer.v:2:30
    extern void L2PrefetchCoverage_rolling_0_write(long long yAxisPt, long long xAxisPt, long long stamp, const char* site);
    // DPI import at L2PrefetchLate_rolling_0Writer.v:2:30
    extern void L2PrefetchLate_rolling_0_write(long long yAxisPt, long long xAxisPt, long long stamp, const char* site);
    // DPI import at TLLogWriter.v:2:30
    extern void TLLog_write(long long echo, long long user, long long data_0, long long data_1, long long data_2, long long data_3, long long address, long long sink, long long source, long long param, long long opcode, long long channel, long long stamp, const char* site);

#ifdef __cplusplus
}
#endif

#endif  // guard
