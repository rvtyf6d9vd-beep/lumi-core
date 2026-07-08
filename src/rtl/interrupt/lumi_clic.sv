// =================================================================
// LUMI-DESIGN-CLIC | 需求: LUMI-CLIC-001~003 | 承接: design/clic-plic.html §3.1
// 模块: lumi_clic — CLIC 中断控制器 (N 本地中断 + 16cycle delay FSM)
// 阶段: M3-S1 Task 1 (端口修复 H-002/H-003) | 日期: 2026-07-08
// =================================================================
module lumi_clic #(
    parameter int NUM_INT = lumi_pkg::CLIC_INT_INPUTS,
    parameter int HW_LAT  = lumi_pkg::CLIC_HW_LATENCY
) (
    input  logic clk_core, input  logic reset_n,

    // ── 本地中断输入 ─────────────────────────────────────────
    input  logic [NUM_INT-1:0] irq_local,  // 本地中断输入
    input  logic [7:0]         irq_level [NUM_INT-1:0],  // 优先级

    // ── PLIC/CLINT 中断输入 (H-002 修复) ────────────────────
    input  logic               meip_in,    // 外部中断 pending (PLIC)
    input  logic               seip_in,    // S 模式外部中断
    input  logic               msip_in,    // 软件中断 (CLINT)
    input  logic               mtip_in,    // 定时器中断 (CLINT)

    // ── 中断输出 (→ Core) ───────────────────────────────────
    output logic               meip,       // 外部中断 pending (→ CSR)
    output logic [7:0]         irq_id,     // 中断 ID (H-003 修复, 原 irq_cause 重命名)
    output logic [7:0]         irq_level_out, // 中断优先级 (H-003 修复)
    output logic               irq_valid,  // 中断请求有效
    output logic               irq_preempt, // 抢占标志 (clic-plic §3.1)
    input  logic               irq_ack,    // CPU 应答

    // ── CLIC CSR 接口 ────────────────────────────────────────
    input  logic [11:0]        clic_csr_addr,
    input  logic [31:0]        clic_csr_wdata,
    output logic [31:0]        clic_csr_rdata,
    input  logic               clic_csr_we
);
    import lumi_pkg::*;

    // ─── 内部信号 ─────────────────────────────────────────────
    logic                       highest_pending;
    logic [7:0]                 highest_id;
    logic [7:0]                 highest_level;

    typedef enum logic [2:0] {
        ST_IDLE, ST_DETECT, ST_PRIORITY, ST_LATENCY, ST_PENDING, ST_ACK
    } clic_state_e;

    clic_state_e state_reg, state_next;
    logic [$clog2(HW_LAT):0] latency_cnt;

    // ─── 时序逻辑 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg   <= ST_IDLE;
            latency_cnt <= '0;
        end else begin
            state_reg <= state_next;
            if (state_next == ST_LATENCY)
                latency_cnt <= latency_cnt + 1;
            else if (state_reg == ST_LATENCY && state_next != ST_LATENCY)
                latency_cnt <= '0;
        end
    end

    // ─── 中断源聚合 (H-002: PLIC/CLINT + 本地) ───────────────
    always_comb begin
        highest_pending = 1'b0;
        highest_id      = 8'h0;
        highest_level   = 8'h0;

        // 外部中断 (PLIC) — cause = 11 (M external)
        if (meip_in) begin
            highest_pending = 1'b1;
            highest_id      = 8'd11;
            highest_level   = 8'hFF; // 最高优先级
        end

        // 定时器中断 (CLINT) — cause = 7 (M timer)
        if (mtip_in && (!highest_pending || 8'd7 > highest_id)) begin
            highest_pending = 1'b1;
            highest_id      = 8'd7;
            highest_level   = 8'hF0;
        end

        // 软件中断 (CLINT) — cause = 3 (M software)
        if (msip_in && !highest_pending) begin
            highest_pending = 1'b1;
            highest_id      = 8'd3;
            highest_level   = 8'h80;
        end

        // 本地中断 (CLIC) — 逐位扫描, 高优先级先
        for (int i = 0; i < NUM_INT; i++) begin
            if (irq_local[i] && (!highest_pending || irq_level[i] > highest_level)) begin
                highest_pending = 1'b1;
                highest_id      = i[7:0];
                highest_level   = irq_level[i];
            end
        end
    end

    // ─── FSM 组合逻辑 ─────────────────────────────────────────
    always_comb begin
        state_next    = state_reg;
        meip          = 1'b0;
        irq_valid     = 1'b0;
        irq_id        = 8'h0;
        irq_level_out = 8'h0;
        irq_preempt   = 1'b0;
        clic_csr_rdata = 32'h0;

        case (state_reg)
            ST_IDLE:     state_next = ST_DETECT;

            ST_DETECT: begin
                if (highest_pending)
                    state_next = ST_PRIORITY;
            end

            ST_PRIORITY: begin
                irq_id        = highest_id;
                irq_level_out = highest_level;
                state_next    = ST_LATENCY;
            end

            ST_LATENCY: begin
                irq_id        = highest_id;
                irq_level_out = highest_level;
                state_next    = (latency_cnt >= HW_LAT[$clog2(HW_LAT):0]) ? ST_PENDING : ST_LATENCY;
            end

            ST_PENDING: begin
                meip          = 1'b1;
                irq_valid     = 1'b1;
                irq_id        = highest_id;
                irq_level_out = highest_level;
                state_next    = irq_ack ? ST_ACK : ST_PENDING;
            end

            ST_ACK: begin
                irq_id    = highest_id;
                irq_valid = 1'b0;
                state_next = ST_IDLE;
            end
        endcase
    end

endmodule
