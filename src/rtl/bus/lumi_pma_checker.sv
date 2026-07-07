// =================================================================
// LUMI-DESIGN-PMA | 需求: LUMI-PMA-001~003 | 承接: design/pma-axi.html §3.1
// 模块: lumi_pma_checker — PMA 地址属性检查器 (3 区域硬编码)
// 阶段: M2-S1 RTL 骨架 (仅含端口/FSM 骨架, 不含功能实现)
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

module lumi_pma_checker (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── PMA 检查接口 (← Core M 级) ───────────────────────────
    input  logic [31:0]             pma_addr,
    input  logic [2:0]              pma_access_type,   // FETCH/LOAD/STORE/AMO
    input  logic [1:0]              pma_privilege,     // M/S/U
    output logic [1:0]              pma_result,        // PASS/FAULT/MISALIGNED
    output lumi_pkg::pma_attr_t     pma_attrs,

    // ── PMP 检查接口 (→ privilege-pmp) ───────────────────────
    output logic                    pmp_check_req,
    output logic [31:0]             pmp_check_addr,
    output logic [2:0]              pmp_check_type,    // R/W/X
    input  logic [1:0]              pmp_result,        // PASS/FAULT

    // ── 区域选择输出 (→ TCM/Cache/AXI 仲裁) ──────────────────
    output logic                    route_tcm,         // TCM 区域
    output logic                    route_cache,       // Cacheable 区域
    output logic                    route_mmio         // MMIO 区域
);

    import lumi_pkg::*;

    // ─── PMA 区域定义 (硬编码) ────────────────────────────────
    // 区域 0: TCM    0x3000_0000 ~ 0x3002_0000 (128 KiB)
    // 区域 1: DDR    0x0000_0000 ~ 0x2000_0000 (512 MiB, cacheable)
    // 区域 2: MMIO   0xC000_0000 ~ 0xFFFF_FFFF (1 GiB, non-cacheable IO)

    localparam logic [31:0] TCM_BASE  = 32'h3000_0000;
    localparam logic [31:0] TCM_END   = 32'h3002_0000;
    localparam logic [31:0] DDR_BASE  = 32'h0000_0000;
    localparam logic [31:0] DDR_END   = 32'h2000_0000;
    localparam logic [31:0] MMIO_BASE = 32'hC000_0000;

    // ─── 组合逻辑 (PMA 检查, 纯组合无需 FSM) ─────────────────
    always_comb begin
        pma_result    = PMA_FAULT;
        pma_attrs     = '0;
        route_tcm     = 1'b0;
        route_cache   = 1'b0;
        route_mmio    = 1'b0;
        pmp_check_req = 1'b0;
        pmp_check_addr = pma_addr;
        pmp_check_type = pma_access_type;

        // 骨架: TODO — 地址解码 + 属性赋值
        if (pma_addr >= DDR_BASE && pma_addr < DDR_END) begin
            pma_result  = PMA_PASS;
            pma_attrs.cacheable  = 1'b1;
            pma_attrs.executable = 1'b1;
            pma_attrs.readable   = 1'b1;
            pma_attrs.writable   = 1'b1;
            route_cache = 1'b1;
        end else if (pma_addr >= TCM_BASE && pma_addr < TCM_END) begin
            pma_result  = PMA_PASS;
            pma_attrs.cacheable  = 1'b0;  // TCM 非 cache
            pma_attrs.executable = 1'b1;
            pma_attrs.readable   = 1'b1;
            pma_attrs.writable   = 1'b1;
            route_tcm   = 1'b1;
        end else if (pma_addr >= MMIO_BASE) begin
            pma_result  = PMA_PASS;
            pma_attrs.io         = 1'b1;
            pma_attrs.readable   = 1'b1;
            pma_attrs.writable   = 1'b1;
            route_mmio  = 1'b1;
        end

        // PMP 检查叠加
        pmp_check_req = 1'b1;
        // 骨架: TODO — 合并 PMA + PMP 结果
    end

endmodule
