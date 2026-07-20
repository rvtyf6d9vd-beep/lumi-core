// =================================================================
// LUMI-DESIGN-BYP | 需求: LUMI-BYP-001~002 | 承接: design/execute-alu.html, design/writeback-csr.html
// 模块: lumi_bypass — 旁路网络 (D-017 旁路 mux 流水化分割点)
// 阶段: M3-S1 Batch-1 | 日期: 2026-07-08
// =================================================================
// 功能: 3 级旁路匹配 (E1 > M > W) + FPU 旁路 + x0 豁免
// 优先级: E1 (最新) > M > W > FPU > 无匹配 (stall)
// RISK-011: BYPASS_PIPE_STAGES 参数控制旁路流水化级数

module lumi_bypass #(
    parameter int ISSUE_WIDTH          = lumi_pkg::ISSUE_WIDTH,
    parameter int BYPASS_PIPE_STAGES   = 1           // D-017: 旁路流水化级数
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── 旁路源 (← E1/M/W 级) ─────────────────────────────────
    input  logic [31:0]             e1_result [ISSUE_WIDTH-1:0],
    input  logic [4:0]              e1_rd     [ISSUE_WIDTH-1:0],
    input  logic [ISSUE_WIDTH-1:0]  e1_valid,

    input  logic [31:0]             m_result  [ISSUE_WIDTH-1:0],
    input  logic [4:0]              m_rd      [ISSUE_WIDTH-1:0],
    input  logic [ISSUE_WIDTH-1:0]  m_valid,

    input  logic [31:0]             w_result  [ISSUE_WIDTH-1:0],
    input  logic [4:0]              w_rd      [ISSUE_WIDTH-1:0],
    input  logic [ISSUE_WIDTH-1:0]  w_valid,

    // BUG-009-FIX2: 2nd pending write bypass (slot2_pending2)
    input  logic                    w_extra_valid,
    input  logic [4:0]              w_extra_rd,
    input  logic [31:0]             w_extra_result,

    // ── FPU 旁路 ─────────────────────────────────────────────
    input  logic [63:0]             fpu_result,
    input  logic [4:0]              fpu_rd,
    input  logic                    fpu_valid,

    // ── 旁路查询 (← I 级, rs1/rs2) ──────────────────────────
    input  logic [4:0]              query_rs1 [ISSUE_WIDTH-1:0],
    input  logic [4:0]              query_rs2 [ISSUE_WIDTH-1:0],

    // ── 旁路输出 (→ I 级) ────────────────────────────────────
    output logic [31:0]             bypass_rs1_data [ISSUE_WIDTH-1:0],
    output logic [31:0]             bypass_rs2_data [ISSUE_WIDTH-1:0],
    output logic [ISSUE_WIDTH-1:0]  bypass_rs1_hit,
    output logic [ISSUE_WIDTH-1:0]  bypass_rs2_hit
);

    import lumi_pkg::*;

    // ═══════════════════════════════════════════════════════════
    // 旁路匹配函数 (通用, 用于 rs1/rs2)
    // ═══════════════════════════════════════════════════════════
    // 对单个查询寄存器号, 在 E1/M/W 三个流水级的所有发射槽中查找匹配
    // 返回: {hit, data}
    // 优先级: E1 槽 0 > E1 槽 1 > E1 槽 2 > M 槽 > W 槽 > FPU

    function automatic logic [32:0] bypass_match(
        input logic [4:0]                   query_reg,
        input logic [31:0]                  e1_res [ISSUE_WIDTH-1:0],
        input logic [4:0]                   e1_r [ISSUE_WIDTH-1:0],
        input logic [ISSUE_WIDTH-1:0]       e1_v,
        input logic [31:0]                  m_res  [ISSUE_WIDTH-1:0],
        input logic [4:0]                   m_r    [ISSUE_WIDTH-1:0],
        input logic [ISSUE_WIDTH-1:0]       m_v,
        input logic [31:0]                  w_res  [ISSUE_WIDTH-1:0],
        input logic [4:0]                   w_r    [ISSUE_WIDTH-1:0],
        input logic [ISSUE_WIDTH-1:0]       w_v,
        input logic [63:0]                  fpu_res,
        input logic [4:0]                   fpu_r,
        input logic                         fpu_v
    );
        logic [32:0] result;
        result = 33'h0; // {hit=0, data=0}

        // x0 豁免: 零号寄存器永远不需要旁路
        if (query_reg == 5'h0) begin
            return 33'h0;
        end

        // 优先级: W 级 (最低, 先写)
        for (int j = ISSUE_WIDTH - 1; j >= 0; j--) begin
            if (w_v[j] && w_r[j] == query_reg) begin
                result = {1'b1, w_res[j]};
            end
        end

        // M 级 (中优先级, 覆盖 W)
        for (int j = ISSUE_WIDTH - 1; j >= 0; j--) begin
            if (m_v[j] && m_r[j] == query_reg) begin
                result = {1'b1, m_res[j]};
            end
        end

        // E1 级 (最高优先级, 覆盖 M/W)
        for (int j = ISSUE_WIDTH - 1; j >= 0; j--) begin
            if (e1_v[j] && e1_r[j] == query_reg) begin
                result = {1'b1, e1_res[j]};
            end
        end

        // FPU 旁路 (仅当无整数匹配时, 且查询的是 FP 寄存器)
        // 注: FPU 使用独立 FRF, 此处 fpu_rd 与整数 rd 共享命名空间 (需外部区分)
        if (!result[32] && fpu_v && fpu_r == query_reg) begin
            result = {1'b1, fpu_res[31:0]}; // 取低 32bit (单精度 FMV)
        end

        return result;
    endfunction

    // ═══════════════════════════════════════════════════════════
    // 流水化寄存器 (D-017: RISK-011 缓解)
    // ═══════════════════════════════════════════════════════════
    // 当 BYPASS_PIPE_STAGES > 0 时, 在 E1 旁路路径插入流水线寄存器
    // 降低关键路径延迟, 但增加 RAW stall 周期

    logic [31:0] pipe_e1_result [ISSUE_WIDTH-1:0] [BYPASS_PIPE_STAGES-1:0];
    logic [4:0]  pipe_e1_rd    [ISSUE_WIDTH-1:0] [BYPASS_PIPE_STAGES-1:0];
    logic [ISSUE_WIDTH-1:0] pipe_e1_valid [BYPASS_PIPE_STAGES-1:0];

    generate
        if (BYPASS_PIPE_STAGES > 1) begin : gen_pipe
            always_ff @(posedge clk_core or negedge reset_n) begin
                if (!reset_n) begin
                    for (int s = 0; s < BYPASS_PIPE_STAGES; s++) begin
                        pipe_e1_valid[s] <= '0;
                        for (int i = 0; i < ISSUE_WIDTH; i++) begin
                            pipe_e1_result[i][s] <= 32'h0;
                            pipe_e1_rd[i][s]     <= 5'h0;
                        end
                    end
                end else begin
                    // 第 0 级: 直接从 E1 采样
                    pipe_e1_valid[0] <= e1_valid;
                    for (int i = 0; i < ISSUE_WIDTH; i++) begin
                        pipe_e1_result[i][0] <= e1_result[i];
                        pipe_e1_rd[i][0]     <= e1_rd[i];
                    end
                    // 后续级: 前一级传递
                    for (int s = 1; s < BYPASS_PIPE_STAGES; s++) begin
                        pipe_e1_valid[s] <= pipe_e1_valid[s-1];
                        for (int i = 0; i < ISSUE_WIDTH; i++) begin
                            pipe_e1_result[i][s] <= pipe_e1_result[i][s-1];
                            pipe_e1_rd[i][s]     <= pipe_e1_rd[i][s-1];
                        end
                    end
                end
            end
        end
    endgenerate

    // ═══════════════════════════════════════════════════════════
    // 组合逻辑: 旁路查询 (每个发射槽的 rs1/rs2)
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        for (int i = 0; i < ISSUE_WIDTH; i++) begin
            automatic logic [32:0] rs1_match;
            automatic logic [32:0] rs2_match;

            if (BYPASS_PIPE_STAGES > 1) begin
                // 使用流水化后的 E1 数据 (最后一级)
                rs1_match = bypass_match(
                    query_rs1[i],
                    pipe_e1_result[i], pipe_e1_rd[i], pipe_e1_valid[BYPASS_PIPE_STAGES-1],
                    m_result, m_rd, m_valid,
                    w_result, w_rd, w_valid,
                    fpu_result, fpu_rd, fpu_valid
                );
                rs2_match = bypass_match(
                    query_rs2[i],
                    pipe_e1_result[i], pipe_e1_rd[i], pipe_e1_valid[BYPASS_PIPE_STAGES-1],
                    m_result, m_rd, m_valid,
                    w_result, w_rd, w_valid,
                    fpu_result, fpu_rd, fpu_valid
                );
            end else begin
                // 直接使用 E1 数据 (无流水化, 最低延迟)
                rs1_match = bypass_match(
                    query_rs1[i],
                    e1_result, e1_rd, e1_valid,
                    m_result, m_rd, m_valid,
                    w_result, w_rd, w_valid,
                    fpu_result, fpu_rd, fpu_valid
                );
                rs2_match = bypass_match(
                    query_rs2[i],
                    e1_result, e1_rd, e1_valid,
                    m_result, m_rd, m_valid,
                    w_result, w_rd, w_valid,
                    fpu_result, fpu_rd, fpu_valid
                );
            end

            bypass_rs1_hit[i]  = rs1_match[32];
            bypass_rs1_data[i] = rs1_match[31:0];
            bypass_rs2_hit[i]  = rs2_match[32];
            bypass_rs2_data[i] = rs2_match[31:0];

            // BUG-009-FIX2: 2nd pending write bypass (lowest W-level priority)
            // Only used if no higher-priority match found
            if (!rs1_match[32] && w_extra_valid && w_extra_rd == query_rs1[i]) begin
                bypass_rs1_hit[i]  = 1'b1;
                bypass_rs1_data[i] = w_extra_result;
            end
            if (!rs2_match[32] && w_extra_valid && w_extra_rd == query_rs2[i]) begin
                bypass_rs2_hit[i]  = 1'b1;
                bypass_rs2_data[i] = w_extra_result;
            end

            // ERR-024: 旁路查询已验证 (E1→E1 bypass 工作正常), 调试输出移除
        end
    end

endmodule
