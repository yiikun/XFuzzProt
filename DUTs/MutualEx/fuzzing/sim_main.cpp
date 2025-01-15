#include "common.h"
#include "dut.h"

#include <iostream>
#include <vector>
#include <cstdlib>
#include <getopt.h>
#include "Vmutual.h"

static inline long long int atoll_strict(const char *str, const char *arg) {
  if (strspn(str, " +-0123456789") != strlen(str)) {
    printf("[ERROR] --%s=NUM only accept numeric argument\n", arg);
    exit(EINVAL);
  }
  return atoll(str);
}

struct FuzzerArgs {
  uint32_t reset_cycles = 50;
  uint32_t seed = 0;
  uint64_t max_iters = -1;
  uint64_t fork_interval = 1000;
  uint64_t max_instr = -1;
  uint64_t warmup_instr = -1;
  uint64_t stat_cycles = -1;
  uint64_t log_begin = 0, log_end = -1;
  uint64_t overwrite_nbytes = 0xe00;
  const char *dramsim3_ini = nullptr;
#ifdef DEBUG_REFILL
  uint64_t track_instr = 0;
#endif
#ifdef ENABLE_IPC
  uint64_t ipc_interval;
  FILE *ipc_file;
  uint64_t ipc_last_instr;
  uint64_t ipc_last_cycle;
  uint64_t ipc_times;
#endif
  const char *image = nullptr;
  const char *gcpt_restore = nullptr;
  const char *snapshot_path = nullptr;
  const char *wave_path = nullptr;
  const char *ram_size = nullptr;
  const char *flash_bin = nullptr;
  const char *select_db = nullptr;
  const char *trace_name = nullptr;
  const char *footprints_name = nullptr;
  const char *linearized_name = nullptr;
  bool enable_waveform = false;
  bool enable_waveform_full = false;
  bool enable_ref_trace = false;
  bool enable_commit_trace = false;
  bool enable_snapshot = true;
  bool force_dump_result = false;
  bool enable_diff = true;
  bool enable_fork = false;
  bool enable_runahead = false;
  bool dump_db = false;
  bool trace_is_read = true;
  bool dump_coverage = false;
  bool image_as_footprints = false;
  bool overwrite_nbytes_autoset = false;
};

inline FuzzerArgs parse_args(int argc, const char *argv[]) {
  FuzzerArgs args;
  int long_index = 0;

  /* clang-format off */
  const struct option long_options[] = {
    { "load-snapshot",     1, NULL,  0  },
    { "dump-wave",         0, NULL,  0  },
    { "no-snapshot",       0, NULL,  0  },
    { "force-dump-result", 0, NULL,  0  },
    { "diff",              1, NULL,  0  },
    { "no-diff",           0, NULL,  0  },
    { "enable-fork",       0, NULL,  0  },
    { "enable-jtag",       0, NULL,  0  },
    { "wave-path",         1, NULL,  0  },
    { "ram-size",          1, NULL,  0  },
    { "sim-run-ahead",     0, NULL,  0  },
    { "dump-db",           0, NULL,  0  },
    { "dump-select-db",    1, NULL,  0  },
    { "dump-coverage",     0, NULL,  0  },
    { "dump-ref-trace",    0, NULL,  0  },
    { "dump-commit-trace", 0, NULL,  0  },
    { "load-difftrace",    1, NULL,  0  },
    { "dump-difftrace",    1, NULL,  0  },
    { "dump-footprints",   1, NULL,  0  },
    { "as-footprints",     0, NULL,  0  },
    { "dump-linearized",   1, NULL,  0  },
    { "dump-wave-full",    0, NULL,  0  },
    { "overwrite-nbytes",  1, NULL,  0  },
    { "remote-jtag-port",  1, NULL,  0  },
    { "iotrace-name",      1, NULL,  0  },
    { "dramsim3-ini",      1, NULL,  0  },
    { "overwrite-auto",    1, NULL,  0  },
    { "seed",              1, NULL, 's' },
    { "max-iters",        1, NULL, 'C' },
    { "fork-interval",     1, NULL, 'X' },
    { "max-instr",         1, NULL, 'I' },
#ifdef DEBUG_REFILL
    { "track-instr",       1, NULL, 'T' },
#endif
    { "ipc-interval",      1, NULL, 'R' },
    { "warmup-instr",      1, NULL, 'W' },
    { "stat-cycles",       1, NULL, 'D' },
    { "image",             1, NULL, 'i' },
    { "gcpt-restore",      1, NULL, 'r' },
    { "log-begin",         1, NULL, 'b' },
    { "log-end",           1, NULL, 'e' },
    { "flash",             1, NULL, 'F' },
    { "help",              0, NULL, 'h' },
    { 0,                   0, NULL,  0  }
  };

  int o;
  while ((o = getopt_long(argc, const_cast<char *const *>(argv), "-s:C:X:I:T:R:W:hi:r:m:b:e:F:", long_options,
                          &long_index)) != -1) {
    switch (o) {
      case 0:
        switch (long_index) {
          case 0: args.snapshot_path = optarg; continue;
          case 1: args.enable_waveform = true; continue;
          case 2: args.enable_snapshot = false; continue;
          case 3: args.force_dump_result = true; continue;
          case 5: args.enable_diff = false; continue;
          case 6: args.enable_fork = true; continue;
          case 8: args.wave_path = optarg; continue;
          case 9: args.ram_size = optarg; continue;
          case 10:
#ifdef ENABLE_RUNHEAD
            args.enable_runahead = true;
#else
            printf("[WARN] runahead is not enabled at compile time, ignore --sim-run-ahead\n");
#endif
            continue;
#ifdef ENABLE_CHISEL_DB
          case 11: args.dump_db = true; continue;
          case 12:
            args.dump_db = true;
            args.select_db = optarg;
            continue;
#else
          case 11:
          case 12: printf("[WARN] chisel db is not enabled at compile time, ignore --dump-db\n"); continue;
#endif
          case 13:
#if VM_COVERAGE == 1
            args.dump_coverage = true;
#else
            printf("[WARN] coverage is not enabled at compile time, ignore --dump-coverage\n");
#endif // VM_COVERAGE
            continue;
          case 14: args.enable_ref_trace = true; continue;
          case 15: args.enable_commit_trace = true; continue;
          case 16:
            args.trace_name = optarg;
            args.trace_is_read = true;
            continue;
          case 17:
            args.trace_name = optarg;
            args.trace_is_read = false;
            continue;
          case 18: args.footprints_name = optarg; continue;
          case 19: args.image_as_footprints = true; continue;
          case 20: args.linearized_name = optarg; continue;
          case 21:
            args.enable_waveform = true;
            args.enable_waveform_full = true;
            continue;
          case 24:
#ifdef CONFIG_DIFFTEST_IOTRACE
            set_iotrace_name(optarg);
#else
            printf("[WARN] iotrace is not enabled at compile time, ignore --iotrace-name");
#endif // CONFIG_DIFFTEST_IOTRACE
            continue;
          case 25:
#ifdef WITH_DRAMSIM3
            args.dramsim3_ini = optarg;
            continue;
#else
            printf("Dramsim3 is not enabled, but --dramsim3-ini is specified\n");
            exit(1);
            break;
#endif
          case 26: args.overwrite_nbytes_autoset = true; continue;
        }
        // fall through
      default: exit(0);
      case 's':
        if (std::string(optarg) != "NO_SEED") {
          args.seed = atoll_strict(optarg, "seed");
          Info("Using seed = %d\n", args.seed);
        }
        break;
      case 'C': args.max_iters = atoll_strict(optarg, "max-iters"); break;
      case 'X': args.fork_interval = 1000 * atoll_strict(optarg, "fork-interval"); break;
      case 'I': args.max_instr = atoll_strict(optarg, "max-instr"); break;
#ifdef DEBUG_REFILL
      case 'T':
        args.track_instr = std::strtoll(optarg, NULL, 0);
        Info("Tracking addr 0x%lx\n", args.track_instr);
        if (args.track_instr == 0) {
          printf("Invalid track addr\n");
          exit(1);
        }
        break;
#endif
      case 'R':
        printf("[WARN] drawing ipc curve is not enabled at compile time, ignore --ipc-interval\n");
        break;
      case 'W': args.warmup_instr = atoll_strict(optarg, "warmup-instr"); break;
      case 'D': args.stat_cycles = atoll_strict(optarg, "stat-cycles"); break;
      case 'i': args.image = optarg; break;
      case 'r': args.gcpt_restore = optarg; break;
      case 'b': args.log_begin = atoll_strict(optarg, "log-begin"); break;
      case 'e': args.log_end = atoll_strict(optarg, "log-end"); break;
      case 'F': args.flash_bin = optarg; break;
    }
  }

  if (args.image == NULL) {
    Info("Hint: --image=IMAGE_FILE is not specified. Use /dev/zero instead.\n");
    args.image = "/dev/zero";
  }

  args.enable_waveform = args.enable_waveform && !args.enable_fork;

  Verilated::commandArgs(argc, argv); // Prepare extra args for TLMonitor
  return args;
}


// 模拟被测试模块的功能
void simulateModule(int io_en_a, int& io_n_out_0, int& io_n_out_1, bool& io_x_out) {
    // 根据输入信号设置输出信号
    io_n_out_0 = (io_en_a == 0) ? 1 : 0;
    io_n_out_1 = (io_en_a == 1) ? 2 : 0;
    io_x_out = (io_en_a == 2);
}


// sim_main(argc: c_int, argv: *const *const c_char) -> c_int;
extern "C" int sim_main(int argc, const char **argv);

int sim_main(int argc, const char *argv[]) { // argv 举例: --coverage=firrtl --max-iters=100 --max-runs=100 -f
  
  optind = 1;
  stats.reset();

  // FUZZER_LIB
  common_init_without_assertion(argv[0]);

  // 解析 fuzzer 收到的参数
  FuzzerArgs args = parse_args(argc, argv);

  // allow assertions only after DUT resets
  common_enable_assert();

  Vmutual *dut = new Vmutual;
  vluint64_t sim_time = 0;
  
  srand(args.seed);

  // 模拟多个时钟周期的测试
  for (int i = 0; i < args.max_iters; i++) {

      // 初始复位
      if (i <= 10){
          dut->reset = 1;
      } else {
          dut->reset = 0;
      }

      // 模拟输入信号变化
      dut->io_en_a = rand() % 8;

      // 调用模拟函数
      dut->clock = 0;
      dut->eval();

      // 上升沿触发
      dut->clock = 1; 
      dut->eval();

      // 输出信号值
      std::cout << "Iteration " << i << ": "
                << "clock: " << static_cast<int>(dut->clock) << ", "
                << "io_en_a: " << static_cast<int>(dut->io_en_a) << ", "
                << "n[0]: " << static_cast<int>(dut->io_n_out_0) << ", "
                << "n[1]: " << static_cast<int>(dut->io_n_out_1) << ", "
                << "x: " << static_cast<int>(dut->io_x_out) << std::endl; 
      
      sim_time ++;
  }

  // 随机进行反馈值
  bool is_good = rand() % 2;

  stats.accumulate();
  stats.display();

  common_finish();

  return !is_good || stats.exit_code == SimExitCode::unknown;
}
