// =================================================================
// LUMI-DESIGN-DEC | 需求: LUMI-DEC-001~005 | 承接: design/decode-issue.html §3.1~3.2
// 模块: lumi_decode_issue — D/I 级解码与发射
// 阶段: M2-S1 RTL 骨架 (仅含端口/FSM 骨架, 不含功能实现)
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

module lumi_decode_issue #(
    parameter int ISSUE_WIDTH = lumi_pkg::ISSUE_WIDTH
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── D 级输入 (← F2, FETCH_WIDTH wide) ─────────────────────
    input  logic [31:0]             d_instructions [ISSUE_WIDTH*2-1:0],
    input  logic [ISSUE_WIDTH*2-1:0] d_inst_valid,

    // ── D 级输出 (→ I) ────────────────────────────────────────
    output logic [31:0]             d_rs1_data [ISSUE_WIDTH-1:0],
    output logic [31:0]             d_rs2_data [ISSUE_WIDTH-1:0],

    // ── RegFile 读端口 (D-009 仲裁: 3R 端口) ──────────────────
    output logic [4:0]              regfile_rs1_addr [ISSUE_WIDTH-1:0],
    output logic [4:0]              regfile_rs2_addr [ISSUE_WIDTH-1:0],
    input  logic [31:0]             regfile_rs1_data [ISSUE_WIDTH-1:0],
    input  logic [31:0]             regfile_rs2_data [ISSUE_WIDTH-1:0],

    // ── I 级输出 (→ Execute FU) ───────────────────────────────
    output lumi_pkg::inst_pkt_t     i_issue [ISSUE_WIDTH-1:0],
    output logic [ISSUE_WIDTH-1:0]  i_issue_valid,
    output logic [3:0]              i_fu_id [ISSUE_WIDTH-1:0],

    // ── 旁路数据 (← E1/M/W) ──────────────────────────────────
    input  logic [31:0]             bypass_e1_data [ISSUE_WIDTH-1:0],
    input  logic [31:0]             bypass_m_data  [ISSUE_WIDTH-1:0],
    input  logic [31:0]             bypass_w_data  [ISSUE_WIDTH-1:0],
    input  logic [63:0]             bypass_fpu_data,

    // ── FU 忙信号 (← FU Pool) ────────────────────────────────
    input  logic [9:0]              fu_busy,

    // ── 控制 ─────────────────────────────────────────────────
    output logic                    stall_out,
    input  logic                    flush
);

    import lumi_pkg::*;

    // ─── 内部信号 ─────────────────────────────────────────────
    inst_pkt_t                      decoded [ISSUE_WIDTH-1:0];
    logic [ISSUE_WIDTH-1:0]         issue_grant;
    logic                           skip_stalled;

    // ─── FSM 骨架 ─────────────────────────────────────────────
    typedef enum logic [1:0] {
        ST_IDLE,
        ST_DECODE,
        ST_ISSUE,
        ST_STALL
    } dec_state_e;

    dec_state_e state_reg, state_next;

    // ─── 时序逻辑 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg <= ST_IDLE;
        end else begin
            state_reg <= state_next;
        end
    end

    // ─── 组合逻辑 ─────────────────────────────────────────────
    always_comb begin
        state_next     = state_reg;
        stall_out      = 1'b0;
        i_issue_valid  = '0;
        skip_stalled   = 1'b0;

        case (state_reg)
            ST_IDLE:   state_next = ST_DECODE;
            ST_DECODE: ; // 骨架: TODO — 指令解码 + 寄存器读请求
            ST_ISSUE:  ; // 骨架: TODO — FU 分配 + bypass mux + skip-stalled
            ST_STALL:  ; // 骨架: TODO — stall 处理
        endcase
    end

endmodule
