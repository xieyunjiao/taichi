#pragma once

#include "taichi/lang_util.h"
#include "arch.h"

TLANG_NAMESPACE_BEGIN

struct CompileConfig {
  Arch arch;
  bool debug;
  bool check_out_of_bound;
  int simd_width;
  bool lazy_compilation;
  int external_optimization_level;
  int max_vector_width;
  bool print_ir;
  bool print_accessor_ir;
  bool print_evaluator_ir;
  bool print_benchmark_stat;
  bool serial_schedule;
  bool simplify_before_lower_access;
  bool lower_access;
  bool simplify_after_lower_access;
  bool demote_dense_struct_fors;
  bool advanced_optimization;
  bool use_llvm;
  bool verbose_kernel_launches;
  bool kernel_profiler;
  bool verbose;
  bool fast_math;
  bool async_mode;
  bool flatten_if;
  bool make_thread_local;
  bool make_block_local;
  DataType default_fp;
  DataType default_ip;
  std::string extra_flags;
  int default_cpu_block_dim;
  int default_gpu_block_dim;
  int ad_stack_size;

  int saturating_grid_dim;
  int max_block_dim;

  // LLVM backend options:
  bool print_struct_llvm_ir;
  bool print_kernel_llvm_ir;
  bool print_kernel_llvm_ir_optimized;
  bool print_kernel_nvptx;

  // CUDA backend options:
  bool use_unified_memory;
  float64 device_memory_GB;
  float64 device_memory_fraction;

  // C backend options:
  std::string cc_compile_cmd;
  std::string cc_link_cmd;

  CompileConfig();
};

extern CompileConfig default_compile_config;

TLANG_NAMESPACE_END
