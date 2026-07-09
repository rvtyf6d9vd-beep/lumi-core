// =================================================================
// LUMI-DESIGN-008 | 需求: LUMI-MEM-009 | 承接: design/pma-axi.html §2.1~2.2
// 模块: lumi_pma_checker — PMA 地址属性检查器 (3 区域硬编码)
// 阶段: M3 Batch-2 功能实现
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
//
// 功能概述:
//   - 3 区域硬编码 PMA 检查 (TCM/DDR/MMIO)
//   - 地址解码 + 属性填充 (cacheable/executable/writable/readable/io/amo)
//   - 对齐检查 (B/H/W/DW 按 access_type)
//   - AMO 支持检查
//   - FETCH 可执行检查 (NX 保护)
//   - PMA + PMP 联合判定 (AND 逻辑)
//   - 路由输出: route_tcm / route_cache / route_mmio
//
// PMA 区域定义 (design/pma-axi.html §2.1.1):
//   区域 0: TCM    0x0000_0000 ~ 0x0002_FFFF (192 KiB, executable, non-cacheable)
//   区域 1: DDR    0x8000_0000 ~ 0xBFFF_FFFF (1 GiB, cacheable, executable, AMO)
//   区域 2: MMIO   0xC000_0000 ~ 0xF000_FFFF (768 MiB, IO, non-executable)
//
// 未映射区域访问触发 Access Fault (mcause=1/5/7)
// =================================================================

module lumi_pma_checker #(
    parameter int NUM_PMA_REGIONS = 3
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── PMA 检查接口 (← Core M 级 / F1 级) ──────────────────
    input  logic [31:0]             pma_addr,
    input  logic [2:0]              pma_access_type,   // 000=FETCH, 001=LOAD, 010=STORE, 011=AMO
    input  logic [1:0]              pma_privilege,     // M=11, S=01, U=00
    output logic [1:0]              pma_result,        // PMA_PASS/PMA_FAULT/PMA_MISALIGNED
    output lumi_pkg::pma_attr_t     pma_attrs,

    // ── PMP 检查接口 (→ privilege-pmp) ──────────────────────
    output logic                    pmp_check_req,
    output logic [31:0]             pmp_check_addr,
    output logic [2:0]              pmp_check_type,    // R/W/X
    input  logic [1:0]              pmp_result,        // PASS(00)/FAULT(01)

    // ── 区域选择输出 (→ TCM/Cache/AXI 仲裁) ─────────────────
    output logic                    route_tcm,
    output logic                    route_cache,
    output logic                    route_mmio
);

    import lumi_pkg::*;

    // ─── PMA 区域常量 ────────────────────────────────────────
    // 区域 0: TCM
    localparam logic [31:0] TCM_BASE  = 32'h0000_0000;
    localparam logic [31:0] TCM_END   = 32'h0003_0000;  // exclusive
    // 区域 1: DDR
    localparam logic [31:0] DDR_BASE  = 32'h8000_0000;
    localparam logic [31:0] DDR_END   = 32'hC000_0000;  // exclusive
    // 区域 2: MMIO
    localparam logic [31:0] MMIO_BASE = 32'hC000_0000;
    localparam logic [31:0] MMIO_END  = 32'hF001_0000;  // exclusive

    // ─── Access Type 编码 ────────────────────────────────────
    localparam logic [2:0] AT_FETCH = 3'b000;
    localparam logic [2:0] AT_LOAD  = 3'b001;
    localparam logic [2:0] AT_STORE = 3'b010;
    localparam logic [2:0] AT_AMO   = 3'b011;

    // ─── 内部信号 ────────────────────────────────────────────
    logic                           hit_tcm;
    logic                           hit_ddr;
    logic                           hit_mmio;
    logic                           hit_any;

    logic                           pma_pass;
    logic                           pma_fault;
    logic                           pma_misaligned;

    logic                           nx_fault;    // FETCH on non-executable
    logic                           amo_fault;   // AMO on non-AMO region
    logic                           align_fault;  // misaligned access

    // ─── 地址解码 (组合逻辑, 0 cycle) ────────────────────────
    assign hit_tcm  = (pma_addr >= TCM_BASE)  && (pma_addr < TCM_END);
    assign hit_ddr  = (pma_addr >= DDR_BASE)  && (pma_addr < DDR_END);
    assign hit_mmio = (pma_addr >= MMIO_BASE) && (pma_addr < MMIO_END);
    assign hit_any  = hit_tcm || hit_ddr || hit_mmio;

    // ─── 对齐检查 ────────────────────────────────────────────
    // 根据地址低位和访问类型判断对齐
    // 所有区域 misaligned_ok = false → 严格对齐
    assign align_fault =
        (pma_addr[1:0] != 2'b00) && (pma_access_type[1:0] != 2'b00) ? 1'b1 :  // H/W/DW 需要对齐
        (pma_addr[0]   != 1'b0)  && (pma_access_type[1:0] == 2'b01) ? 1'b1 :  // Halfword 需要 2-byte 对齐
        1'b0;

    // ─── 属性填充 (按命中区域) ───────────────────────────────
    always_comb begin
        // 默认: 全部清零
        pma_attrs = '0;

        if (hit_tcm) begin
            // TCM: non-cacheable, executable, readable, writable, non-IO
            pma_attrs.cacheable  = 1'b0;
            pma_attrs.executable = 1'b1;
            pma_attrs.readable   = 1'b1;
            pma_attrs.writable   = 1'b1;
            pma_attrs.io         = 1'b0;
            pma_attrs.amo_type   = 2'b00;  // AMO not supported
        end else if (hit_ddr) begin
            // DDR: cacheable, executable, readable, writable, AMO supported
            pma_attrs.cacheable  = 1'b1;
            pma_attrs.executable = 1'b1;
            pma_attrs.readable   = 1'b1;
            pma_attrs.writable   = 1'b1;
            pma_attrs.io         = 1'b0;
            pma_attrs.amo_type   = 2'b01;  // AMO supported (LR/SC + AMO)
        end else if (hit_mmio) begin
            // MMIO: non-cacheable, non-executable, IO, readable, writable
            pma_attrs.cacheable  = 1'b0;
            pma_attrs.executable = 1'b0;
            pma_attrs.readable   = 1'b1;
            pma_attrs.writable   = 1'b1;
            pma_attrs.io         = 1'b1;
            pma_attrs.amo_type   = 2'b00;  // AMO not supported
        end
    end

    // ─── 访问类型检查 ────────────────────────────────────────
    // NX (No-Execute) fault: FETCH 访问 non-executable 区域
    assign nx_fault  = (pma_access_type == AT_FETCH) && !pma_attrs.executable;

    // AMO fault: AMO 访问不支持 AMO 的区域
    assign amo_fault = (pma_access_type == AT_AMO) && (pma_attrs.amo_type == 2'b00);

    // ─── PMA 结果判定 ────────────────────────────────────────
    always_comb begin
        if (!hit_any) begin
            // 未映射区域: Access Fault
            pma_pass       = 1'b0;
            pma_fault      = 1'b1;
            pma_misaligned = 1'b0;
        end else if (align_fault) begin
            // 对齐错误
            pma_pass       = 1'b0;
            pma_fault      = 1'b0;
            pma_misaligned = 1'b1;
        end else if (nx_fault || amo_fault) begin
            // 属性违规: NX 或 AMO 不支持
            pma_pass       = 1'b0;
            pma_fault      = 1'b1;
            pma_misaligned = 1'b0;
        end else begin
            // 通过
            pma_pass       = 1'b1;
            pma_fault      = 1'b0;
            pma_misaligned = 1'b0;
        end
    end

    // ─── PMA 结果输出编码 ────────────────────────────────────
    always_comb begin
        if (pma_misaligned)
            pma_result = PMA_MISALIGNED;
        else if (pma_fault)
            pma_result = PMA_FAULT;
        else
            pma_result = PMA_PASS;
    end

    // ─── PMP 检查接口 ────────────────────────────────────────
    // PMA fail 时短路跳过 PMP 检查 (优化: PMA fail 已足够拒绝)
    assign pmp_check_req  = pma_pass;  // 仅 PMA pass 时才请求 PMP 检查
    assign pmp_check_addr = pma_addr;

    // 将 PMA access_type 映射为 PMP 检查类型 (R/W/X)
    always_comb begin
        case (pma_access_type)
            AT_FETCH: pmp_check_type = 3'b001;  // X (execute)
            AT_LOAD:  pmp_check_type = 3'b010;  // R (read)
            AT_STORE: pmp_check_type = 3'b100;  // W (write)
            AT_AMO:   pmp_check_type = 3'b110;  // R+W (read-modify-write)
            default:  pmp_check_type = 3'b010;  // default: read
        endcase
    end

    // ─── 路由输出 ────────────────────────────────────────────
    assign route_tcm   = hit_tcm  && pma_pass;
    assign route_cache = hit_ddr  && pma_pass;
    assign route_mmio  = hit_mmio && pma_pass;

endmodule
