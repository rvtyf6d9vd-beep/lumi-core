// =================================================================
// LUMI-DESIGN-INFRA | 需求: LUMI-GLOBAL | 承接: design/*.html
// 模块: lumi_pkg — Lumi-Core 全局类型与参数定义包
// 阶段: M2-S1 RTL 骨架 (类型/枚举/参数定义)
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

package lumi_pkg;

  // ───────────────────────────────────────────────────────────
  // 全局架构参数
  // ───────────────────────────────────────────────────────────
  parameter int NUM_HARTS       = 1;      // 可配核数 (1=单核, N=多核)
  parameter int ISSUE_WIDTH     = 3;      // 发射宽度 (2 或 3)
  parameter int XLEN            = 32;     // RV32 数据宽度
  parameter int VLEN            = 128;    // 向量寄存器位宽 (默认 128bit, 规范声明 128/256 可配, M3 实现 256)
  parameter int FETCH_WIDTH     = 6;      // 每 cycle 取指条数 (ISSUE_WIDTH*2)
  parameter int BTB_ENTRIES     = 8192;   // BTB 条目数
  parameter int RAS_DEPTH       = 32;     // RAS 深度
  parameter int LTAGE_TABLES    = 12;     // LTAGE TAGE 表数量

  // ───────────────────────────────────────────────────────────
  // 特权级枚举
  // ───────────────────────────────────────────────────────────
  typedef enum logic [1:0] {
    PRIV_M = 2'b11,
    PRIV_S = 2'b01,
    PRIV_U = 2'b00
  } priv_e;

  // ───────────────────────────────────────────────────────────
  // FU 类型枚举 (D-009 FU 分配仲裁)
  // opClass 映射表 (DS-D1: 全部 gem5 真实名称):
  //   ALU    → IntAlu
  //   MUL    → IntMult
  //   DIV    → IntDiv
  //   MEM    → MemRead / MemWrite
  //   FP     → FloatAdd / FloatMul / FloatMultAcc / FloatDiv
  //            FloatSqrt / FloatCvt / FloatCmp
  //   VEC    → SimdFloatAdd / SimdFloatMul / SimdFloatMultAcc
  //            SimdFloatDiv / SimdFloatSqrt / SimdFloatCvt
  //   BRANCH → IntAlu (复用)
  //   MISC   → Misc
  // ───────────────────────────────────────────────────────────
  typedef enum logic [3:0] {
    FU_ALU    = 4'd0,
    FU_MUL    = 4'd1,
    FU_DIV    = 4'd2,
    FU_MEM    = 4'd3,
    FU_FP     = 4'd4,
    FU_VEC    = 4'd5,
    FU_BRANCH = 4'd6,
    FU_MISC   = 4'd7
  } fu_type_e;

  // ───────────────────────────────────────────────────────────
  // 指令包结构体 (级间传递)
  // ───────────────────────────────────────────────────────────
  typedef struct packed {
    logic        valid;
    logic [31:0] pc;
    logic [31:0] inst;
    logic [4:0]  rd;
    logic [4:0]  rs1;
    logic [4:0]  rs2;
    logic [2:0]  funct3;
    logic [6:0]  funct7;
    logic [31:0] imm;
    fu_type_e    fu_type;
    logic [3:0]  fu_id;
    priv_e       privilege;
    // 异常标志
    logic        exc_valid;
    logic [3:0]  exc_cause;
    // 原始指令 (16-bit 压缩指令保留, 32-bit 指令存低 16-bit)
    logic [15:0] inst_raw;
  } inst_pkt_t;

  // ───────────────────────────────────────────────────────────
  // 异常/中断原因枚举
  // ───────────────────────────────────────────────────────────
  typedef enum logic [3:0] {
    EXC_INST_MISALIGN  = 4'd0,
    EXC_INST_ACCESS    = 4'd1,
    EXC_ILLEGAL_INST   = 4'd2,
    EXC_BREAKPOINT     = 4'd3,
    EXC_LOAD_MISALIGN  = 4'd4,
    EXC_LOAD_ACCESS    = 4'd5,
    EXC_STORE_MISALIGN = 4'd6,
    EXC_STORE_ACCESS   = 4'd7,
    EXC_ECALL_U        = 4'd8,
    EXC_ECALL_S        = 4'd9,
    EXC_ECALL_M        = 4'd11,
    EXC_INST_PAGE      = 4'd12,
    EXC_LOAD_PAGE      = 4'd13,
    EXC_STORE_PAGE     = 4'd15
  } exc_type_e;

  // ───────────────────────────────────────────────────────────
  // PMA 属性结构体
  // ───────────────────────────────────────────────────────────
  typedef struct packed {
    logic        cacheable;
    logic        executable;
    logic        writable;
    logic        readable;
    logic        io;
    logic [1:0]  amo_type;
  } pma_attr_t;

  // ───────────────────────────────────────────────────────────
  // PMA 检查结果
  // ───────────────────────────────────────────────────────────
  typedef enum logic [1:0] {
    PMA_PASS         = 2'b00,
    PMA_FAULT        = 2'b01,
    PMA_MISALIGNED   = 2'b10
  } pma_result_e;

  // ───────────────────────────────────────────────────────────
  // AXI4 参数
  // ───────────────────────────────────────────────────────────
  parameter int AXI_ADDR_WIDTH  = 32;
  parameter int AXI_DATA_WIDTH  = 128;
  parameter int AXI_ID_WIDTH    = 4;
  parameter int AXI_USER_WIDTH  = 1;
  parameter int AXI_STRB_WIDTH  = AXI_DATA_WIDTH / 8;  // 16 bytes

  // ───────────────────────────────────────────────────────────
  // HPM 参数
  // ───────────────────────────────────────────────────────────
  parameter int HPM_COUNTERS    = 29;   // HPM 计数器数量

  // ───────────────────────────────────────────────────────────
  // TCM 参数
  // ───────────────────────────────────────────────────────────
  parameter int ITCM_SIZE       = 32 * 1024;  // 32 KiB (与 design/tcm.html 基准配置对齐)
  parameter int DTCM_SIZE       = 32 * 1024;  // 32 KiB per bank (DTCM0 + DTCM1)
  parameter int TCM_ECC_EN      = 1;          // ECC 使能

  // ───────────────────────────────────────────────────────────
  // Cache 参数
  // ───────────────────────────────────────────────────────────
  parameter int ICACHE_SIZE     = 32 * 1024;  // 32 KiB
  parameter int ICACHE_WAYS     = 8;
  parameter int ICACHE_LINE     = 64;         // 64 bytes
  parameter int DCACHE_SIZE     = 32 * 1024;  // 32 KiB
  parameter int DCACHE_WAYS     = 8;
  parameter int DCACHE_LINE     = 64;

  // ───────────────────────────────────────────────────────────
  // CLIC 参数
  // ───────────────────────────────────────────────────────────
  parameter int CLIC_INT_INPUTS = 16;         // 本地中断输入数
  parameter int CLIC_HW_LATENCY = 16;         // 硬件延时 (cycle)

endpackage
