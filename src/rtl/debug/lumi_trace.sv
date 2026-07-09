// =================================================================
// LUMI-DESIGN-TRC | 需求: LUMI-TRC-001~002 | 承接: design/debug-trace.html §3.3
// 模块: lumi_trace — Nexus Trace (trace_data + AXI4 写出)
// 阶段: M3 Batch-4 RTL 实现 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_trace #(
    parameter int FIFO_DEPTH = 256
) (
    input  logic clk_core, input  logic reset_n,
    input  logic [31:0] commit_pc, input  logic commit_valid, input  logic [1:0] commit_type,
    output logic        trace_enable, output logic [63:0] trace_data_out,
    output logic        trace_valid,
    output logic [31:0] trace_axi_addr, output logic [127:0] trace_axi_wdata,
    output logic        trace_axi_valid, input  logic trace_axi_ready,
    input  logic        trace_config_en  // CSR 使能 trace
);
    import lumi_pkg::*;

    // ─── Nexus Trace 消息类型 ────────────────────────────────────
    typedef enum logic [2:0] {
        MSG_SYNC       = 3'd1,  // 全量 PC 同步 (初始/异常后)
        MSG_BRANCH     = 3'd2,  // 分支目标 PC
        MSG_EXCEPTION  = 3'd3,  // 异常/中断事件
        MSG_CONTEXT    = 3'd4,  // 上下文切换 (priv 变化)
        MSG_NOP        = 3'd0   // 空闲/NOP
    } trace_msg_e;

    // ─── 状态机 ─────────────────────────────────────────────────
    typedef enum logic [1:0] {
        ST_IDLE, ST_CAPTURE, ST_ENCODE, ST_FLUSH
    } trace_state_e;
    trace_state_e state_reg, state_next;

    // ─── Trace FIFO 存储 ────────────────────────────────────────
    logic [63:0] fifo_mem [FIFO_DEPTH-1:0];
    logic [$clog2(FIFO_DEPTH)-1:0] fifo_wr_ptr, fifo_rd_ptr;
    logic [$clog2(FIFO_DEPTH):0] fifo_count;
    logic fifo_full, fifo_empty;

    // ─── 捕获寄存器 ─────────────────────────────────────────────
    logic [31:0] prev_pc;        // 上一条 PC (用于顺序检测)
    logic [31:0] cap_pc;         // 当前捕获 PC
    logic [1:0]  cap_type;       // 当前捕获类型
    logic        cap_valid;      // 捕获有效
    logic [63:0] overflow_count; // FIFO 溢出丢弃计数

    // ─── 编码寄存器 ─────────────────────────────────────────────
    logic [63:0] encoded_data;
    logic        encoded_valid;
    trace_msg_e  msg_type;

    // ─── AXI burst 缓冲 (128-bit = 2 × 64-bit entry) ───────────
    logic [63:0] burst_buf [1:0];
    logic        burst_cnt;  // 0 or 1
    logic        burst_full;
    logic [31:0] axi_base_addr;  // AXI 写出基地址

    // ─── 内部信号 ───────────────────────────────────────────────
    assign trace_enable = trace_config_en;
    assign fifo_full  = (fifo_count == FIFO_DEPTH[$clog2(FIFO_DEPTH):0]);
    assign fifo_empty = (fifo_count == 0);

    // ─── 状态寄存器 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg <= ST_IDLE;
        end else begin
            state_reg <= state_next;
        end
    end

    // ─── PC 跟踪寄存器 ─────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            prev_pc <= 32'h0;
        end else if (commit_valid && trace_enable) begin
            prev_pc <= commit_pc + 32'h4;
        end
    end

    // ─── 捕获逻辑 ───────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            cap_pc    <= 32'h0;
            cap_type  <= 2'b00;
            cap_valid <= 1'b0;
        end else if (state_reg == ST_CAPTURE && commit_valid && trace_enable) begin
            cap_pc    <= commit_pc;
            cap_type  <= commit_type;
            cap_valid <= 1'b1;
        end else begin
            cap_valid <= 1'b0;
        end
    end

    // ─── Nexus 编码 (顺序 PC 不输出, 分支/异常输出) ──────────────
    always_comb begin
        encoded_data  = 64'h0;
        encoded_valid = 1'b0;
        msg_type      = MSG_NOP;

        if (cap_valid) begin
            if (commit_pc != prev_pc || cap_type != 2'b00) begin
                // 非顺序 PC 或特殊事件: 输出 trace
                if (cap_type == 2'b01) begin
                    // 分支跳转: 输出目标 PC
                    msg_type      = MSG_BRANCH;
                    encoded_data  = {29'h0, msg_type, commit_pc};
                    encoded_valid = 1'b1;
                end else if (cap_type == 2'b10) begin
                    // 异常/中断
                    msg_type      = MSG_EXCEPTION;
                    encoded_data  = {29'h0, msg_type, commit_pc};
                    encoded_valid = 1'b1;
                end else begin
                    // 非顺序 (例如 trap return): SYNC
                    msg_type      = MSG_SYNC;
                    encoded_data  = {29'h0, msg_type, commit_pc};
                    encoded_valid = 1'b1;
                end
            end
            // 顺序 PC: 不输出 (隐含 PC+4)
        end
    end

    // ─── Trace FIFO 写入 ────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            fifo_wr_ptr   <= 0;
            fifo_count    <= 0;
            overflow_count <= 64'h0;
        end else begin
            if (state_reg == ST_ENCODE && encoded_valid) begin
                if (!fifo_full) begin
                    fifo_mem[fifo_wr_ptr] <= encoded_data;
                    fifo_wr_ptr <= fifo_wr_ptr + 1;
                    fifo_count  <= fifo_count + 1;
                end else begin
                    overflow_count <= overflow_count + 1;  // 满时丢弃 + 计数
                end
            end
            // FIFO 读出 (AXI flush)
            if (state_reg == ST_FLUSH && !fifo_empty && !(state_reg == ST_ENCODE && encoded_valid)) begin
                fifo_count <= fifo_count - 1;
            end
        end
    end

    // ─── FIFO 读出指针 ─────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            fifo_rd_ptr <= 0;
        else if (state_reg == ST_FLUSH && !fifo_empty)
            fifo_rd_ptr <= fifo_rd_ptr + 1;
    end

    // ─── AXI burst 缓冲 (2 × 64-bit → 128-bit) ─────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            burst_buf[0] <= 64'h0;
            burst_buf[1] <= 64'h0;
            burst_cnt  <= 1'b0;
            burst_full <= 1'b0;
            axi_base_addr <= 32'h8000_0000;  // 默认 trace 写出基地址
        end else begin
            if (state_reg == ST_FLUSH && !fifo_empty) begin
                burst_buf[burst_cnt] <= fifo_mem[fifo_rd_ptr];
                if (burst_cnt == 1'b1)
                    burst_full <= 1'b1;
                burst_cnt <= ~burst_cnt;
            end
            if (trace_axi_valid && trace_axi_ready) begin
                burst_full <= 1'b0;
                burst_cnt  <= 1'b0;
                axi_base_addr <= axi_base_addr + 32'h10;  // 128-bit = 16 bytes
            end
        end
    end

    // ─── Trace 输出端口 ─────────────────────────────────────────
    always_comb begin
        trace_data_out = fifo_mem[fifo_rd_ptr];
        trace_valid    = !fifo_empty;
    end

    // ─── AXI4 写出端口 ─────────────────────────────────────────
    assign trace_axi_addr  = axi_base_addr;
    assign trace_axi_wdata = {burst_buf[1], burst_buf[0]};
    assign trace_axi_valid = burst_full;

    // ─── 主 FSM ─────────────────────────────────────────────────
    always_comb begin
        state_next = state_reg;

        case (state_reg)
            ST_IDLE: begin
                state_next = trace_enable ? ST_CAPTURE : ST_IDLE;
            end

            ST_CAPTURE: begin
                // 捕获 commit 信息
                if (commit_valid && trace_enable)
                    state_next = ST_ENCODE;
                else if (!trace_enable)
                    state_next = ST_IDLE;
            end

            ST_ENCODE: begin
                // Nexus 编码完成, 尝试 flush
                if (!fifo_full || burst_full)
                    state_next = ST_FLUSH;
                else
                    state_next = ST_CAPTURE;
            end

            ST_FLUSH: begin
                // AXI4 写出或 FIFO 排空
                if (burst_full && trace_axi_ready)
                    state_next = ST_CAPTURE;
                else if (fifo_empty)
                    state_next = ST_CAPTURE;
                else if (!trace_enable)
                    state_next = ST_IDLE;
            end

            default: state_next = ST_IDLE;
        endcase
    end

endmodule
