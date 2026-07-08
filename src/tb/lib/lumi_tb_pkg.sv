// =================================================================
// LUMI-TB-LIB | 需求: LUMI-TB-001 | 承接: docs/verification/
// 模块: lumi_tb_pkg — TB 公共类型/宏/配置
// 阶段: M3-S1 Task 0 | 日期: 2026-07-07
// =================================================================
// Verilator-compatible (no UVM dependency). 可后续升级为 UVM。

package lumi_tb_pkg;

  import lumi_pkg::*;

  // ─── 仿真参数 ──────────────────────────────────────────────
  parameter int unsigned CLK_PERIOD_CORE_NS = 2;   // 500 MHz (目标 1GHz, 仿真降频)
  parameter int unsigned CLK_PERIOD_BUS_NS  = 4;   // 250 MHz
  parameter int unsigned RST_DURATION_NS    = 200;
  parameter int unsigned DEFAULT_TIMEOUT_NS = 1_000_000; // 1ms

  // ─── 日志级别 ──────────────────────────────────────────────
  typedef enum int {
    LOG_NONE  = 0,
    LOG_ERROR = 1,
    LOG_WARN  = 2,
    LOG_INFO  = 3,
    LOG_DEBUG = 4,
    LOG_TRACE = 5
  } log_level_e;

  parameter log_level_e DEFAULT_LOG_LEVEL = LOG_INFO;

  // ─── AXI 事务类型 ──────────────────────────────────────────
  typedef enum logic [1:0] {
    AXI_BURST_FIXED = 2'b00,
    AXI_BURST_INCR  = 2'b01,
    AXI_BURST_WRAP  = 2'b10
  } axi_burst_e;

  typedef enum logic [1:0] {
    AXI_RESP_OKAY   = 2'b00,
    AXI_RESP_EXOKAY = 2'b01,
    AXI_RESP_SLVERR = 2'b10,
    AXI_RESP_DECERR = 2'b11
  } axi_resp_e;

  // ─── AXI 写事务结构 ────────────────────────────────────────
  typedef struct {
    logic [AXI_ID_WIDTH-1:0]   id;
    logic [AXI_ADDR_WIDTH-1:0] addr;
    logic [7:0]                len;
    logic [2:0]                size;
    axi_burst_e                burst;
    logic [AXI_DATA_WIDTH-1:0] data[$]; // queue of beats
    axi_resp_e                 resp;
  } axi_wr_txn_t;

  // ─── AXI 读事务结构 ────────────────────────────────────────
  typedef struct {
    logic [AXI_ID_WIDTH-1:0]   id;
    logic [AXI_ADDR_WIDTH-1:0] addr;
    logic [7:0]                len;
    logic [2:0]                size;
    axi_burst_e                burst;
    logic [AXI_DATA_WIDTH-1:0] data[$];
    axi_resp_e                 resp;
  } axi_rd_txn_t;

  // ─── 测试统计结构 ──────────────────────────────────────────
  typedef struct {
    int unsigned total_cycles;
    int unsigned instructions_retired;
    int unsigned branch_mispredicts;
    int unsigned cache_hits;
    int unsigned cache_misses;
    int unsigned irq_count;
    real         ipc;
    real         branch_mispredict_rate;
    real         cache_hit_rate;
  } perf_stats_t;

  // ─── 日志宏 (Verilator 兼容 $display) ─────────────────────
  // 使用 $display + severity prefix, 可后续替换为 UVM macros
  `define LUMI_LOG(level, fmt, ...) \
    if (level <= lumi_tb_pkg::DEFAULT_LOG_LEVEL) \
      $display("[%0s] %0t: " fmt, `"level`", $time, __VA_ARGS__)

  `define LUMI_ERROR(fmt, ...) \
    $display("[ERROR] %0t: " fmt, $time, __VA_ARGS__)

  `define LUMI_WARN(fmt, ...) \
    $display("[WARN]  %0t: " fmt, $time, __VA_ARGS__)

  `define LUMI_INFO(fmt, ...) \
    if (lumi_tb_pkg::DEFAULT_LOG_LEVEL >= lumi_tb_pkg::LOG_INFO) \
      $display("[INFO]  %0t: " fmt, $time, __VA_ARGS__)

  // ─── 断言宏 ────────────────────────────────────────────────
  `define LUMI_ASSERT(cond, msg) \
    if (!(cond)) begin \
      $display("[ASSERT FAIL] %0t: %s", $time, msg); \
      error_count++; \
    end

  `define LUMI_ASSERT_EQ(actual, expected, msg) \
    if ((actual) !== (expected)) begin \
      $display("[ASSERT FAIL] %0t: %s (actual=0x%0h, expected=0x%0h)", \
               $time, msg, actual, expected); \
      error_count++; \
    end

endpackage
