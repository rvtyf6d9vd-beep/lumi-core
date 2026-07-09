// =================================================================
// LUMI-DESIGN-LS | 需求: LUMI-LS-001~002 | 承接: design/multicore-lockstep.html §3.2
// 模块: lumi_lockstep — 锁步比较器 (D-011 双级比较 + commit_valid)
// 阶段: M3 Batch-4 RTL 实现 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_lockstep #(parameter int IW = lumi_pkg::ISSUE_WIDTH) (
    input  logic clk_core, input  logic reset_n,
    input  logic [IW-1:0] commit_valid_a, input  logic [IW-1:0] commit_valid_b,
    input  logic [31:0]   commit_pc_a [IW-1:0],   input  logic [31:0]   commit_pc_b [IW-1:0],
    input  logic [31:0]   commit_result_a [IW-1:0], input  logic [31:0] commit_result_b [IW-1:0],
    output logic          lockstep_match, output logic lockstep_error,
    output logic [31:0]   error_pc, output logic [3:0] error_slot,
    // 扩展接口 (预留)
    input  logic          lockstep_enable,
    input  logic [1:0]    lockstep_error_mode,  // 00=NMI, 01=Reset, 10=Log
    output logic          lockstep_nmi,
    output logic          lockstep_reset,
    output logic [63:0]   lockstep_log  // PC[31:0] + error_code[3:0] + timestamp[27:0]
);
    import lumi_pkg::*;

    // ─── FSM 状态 ───────────────────────────────────────────────
    typedef enum logic [1:0] {
        ST_IDLE, ST_COMPARE, ST_MISMATCH, ST_RECOVER
    } ls_state_e;
    ls_state_e state_reg, state_next;

    // ─── W 级比较信号 (D-011 双级比较) ──────────────────────────
    logic [IW-1:0] valid_mismatch;
    logic [IW-1:0] pc_mismatch;
    logic [IW-1:0] result_mismatch;
    logic          any_mismatch;
    logic [3:0]    error_code;
    logic [$clog2(IW)-1:0] mismatch_slot;

    // ─── 逐 slot 比较 (IW 参数化) ──────────────────────────────
    always_comb begin
        valid_mismatch   = '0;
        pc_mismatch      = '0;
        result_mismatch  = '0;
        any_mismatch     = 1'b0;
        mismatch_slot    = 0;

        for (int i = 0; i < IW; i++) begin
            // 1. commit_valid 一致性
            if (commit_valid_a[i] != commit_valid_b[i])
                valid_mismatch[i] = 1'b1;

            // 2. PC 比较 (仅当两边都 valid 时)
            if (commit_valid_a[i] && commit_valid_b[i]) begin
                if (commit_pc_a[i] != commit_pc_b[i])
                    pc_mismatch[i] = 1'b1;
                // 3. Result (rd_data) 比较
                if (commit_result_a[i] != commit_result_b[i])
                    result_mismatch[i] = 1'b1;
            end

            // 记录首个 mismatch 的 slot
            if ((valid_mismatch[i] || pc_mismatch[i] || result_mismatch[i]) && !any_mismatch) begin
                any_mismatch  = 1'b1;
                mismatch_slot = i[$clog2(IW)-1:0];
            end
        end
    end

    // ─── Error Code 编码 ────────────────────────────────────────
    always_comb begin
        error_code = 4'h0;
        error_code[0] = |valid_mismatch;   // commit_valid 不一致
        error_code[1] = |pc_mismatch;      // PC 不一致
        error_code[2] = |result_mismatch;  // Result 不一致
        error_code[3] = 1'b0;              // M 级扩展预留 (mem_mismatch)
    end

    // ─── 时间戳计数器 ───────────────────────────────────────────
    logic [27:0] timestamp;
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            timestamp <= 28'h0;
        else
            timestamp <= timestamp + 28'h1;
    end

    // ─── 错误日志寄存器 ─────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            lockstep_log <= 64'h0;
        else if (state_reg == ST_MISMATCH)
            lockstep_log <= {error_pc, error_code, timestamp};
    end

    // ─── 错误处理策略输出 ───────────────────────────────────────
    always_comb begin
        lockstep_nmi   = 1'b0;
        lockstep_reset = 1'b0;

        if (state_reg == ST_MISMATCH) begin
            case (lockstep_error_mode)
                2'b00: lockstep_nmi   = 1'b1;  // NMI (默认)
                2'b01: lockstep_reset = 1'b1;  // 系统复位
                2'b10: ;                        // 仅日志 (不触发 NMI/Reset)
                default: lockstep_nmi = 1'b1;
            endcase
        end
    end

    // ─── 状态寄存器 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            state_reg <= ST_IDLE;
        else
            state_reg <= state_next;
    end

    // ─── 错误 PC 锁存 ───────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            error_pc   <= 32'h0;
            error_slot <= 4'h0;
        end else if (state_reg == ST_COMPARE && any_mismatch) begin
            error_pc   <= commit_pc_a[mismatch_slot];
            error_slot <= {2'h0, mismatch_slot};
        end
    end

    // ─── 输出信号 ───────────────────────────────────────────────
    assign lockstep_match = !any_mismatch;

    // ─── 主 FSM ─────────────────────────────────────────────────
    always_comb begin
        state_next     = state_reg;
        lockstep_error = 1'b0;

        case (state_reg)
            ST_IDLE: begin
                if (lockstep_enable)
                    state_next = ST_COMPARE;
            end

            ST_COMPARE: begin
                // 持续比较 W 级输出
                if (!lockstep_enable)
                    state_next = ST_IDLE;
                else if (any_mismatch)
                    state_next = ST_MISMATCH;
            end

            ST_MISMATCH: begin
                lockstep_error = 1'b1;
                // 进入恢复状态 (等待外部 NMI/Reset 处理)
                state_next = ST_RECOVER;
            end

            ST_RECOVER: begin
                // 等待外部恢复信号 (NMI 处理完成或系统复位)
                if (!lockstep_enable)
                    state_next = ST_IDLE;
                else if (reset_n && !any_mismatch)
                    state_next = ST_COMPARE;  // 重新同步后继续比较
            end

            default: state_next = ST_IDLE;
        endcase
    end

endmodule
