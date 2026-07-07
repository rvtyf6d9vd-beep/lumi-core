// =================================================================
// LUMI-DESIGN-BYP | 需求: LUMI-BYP-001~002 | 承接: design/execute-alu.html, design/writeback-csr.html
// 模块: lumi_bypass — 旁路网络 (D-017 旁路 mux 流水化分割点)
// 阶段: M2-S1 RTL 骨架 (仅含端口/FSM 骨架, 不含功能实现)
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

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

    // ─── 旁路优先级: E1 > M > W > FPU ────────────────────────
    // 骨架: 每个 query_rsX 信号与 e1_rd/m_rd/w_rd/fpu_rd 比较,
    //       匹配时输出对应 result, 无匹配时 bypass_hit=0 (需 stall)

    // ─── 流水化寄存器 (D-017) ─────────────────────────────────
    logic [31:0]                    pipe_e1_result [ISSUE_WIDTH-1:0] [BYPASS_PIPE_STAGES-1:0];

    // ─── 组合逻辑 (旁路匹配) ─────────────────────────────────
    always_comb begin
        bypass_rs1_hit  = '0;
        bypass_rs2_hit  = '0;
        bypass_rs1_data = '0;
        bypass_rs2_data = '0;

        // 骨架: TODO — 实现 3 级旁路匹配 (E1/M/W) + FPU 旁路
        // for (int i = 0; i < ISSUE_WIDTH; i++) begin
        //     // rs1 匹配
        //     for (int j = 0; j < ISSUE_WIDTH; j++) begin
        //         if (e1_valid[j] && e1_rd[j] == query_rs1[i] && query_rs1[i] != 5'h0)
        //             { bypass_rs1_hit[i], bypass_rs1_data[i] } = {1'b1, e1_result[j]};
        //         // ... M, W 级类似
        //     end
        // end
    end

endmodule
