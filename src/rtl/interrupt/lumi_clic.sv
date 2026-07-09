// =================================================================
// LUMI-DESIGN-CLIC | 需求: LUMI-CLIC-001~003 | 承接: design/clic-plic.html §2.3-2.5
// 模块: lumi_clic — CLIC 中断控制器 (N 本地中断 + 优先级抢占 + CSR 集成)
// 阶段: M3 Batch-3 完整功能实现
// 作者: Qoder Agent | 日期: 2026-07-08
// =================================================================
module lumi_clic #(
    parameter int NUM_INT = lumi_pkg::CLIC_INT_INPUTS,
    parameter int HW_LAT  = lumi_pkg::CLIC_HW_LATENCY
) (
    input  logic clk_core, input  logic reset_n,

    // ── 本地中断输入 ─────────────────────────────────────────
    input  logic [NUM_INT-1:0]  irq_local,       // 本地中断输入
    input  logic [NUM_INT*8-1:0] irq_level_packed, // 优先级 packed (8-bit per source)

    // ── PLIC/CLINT 中断输入 ────────────────────────────────
    input  logic               meip_in,    // 外部中断 pending (PLIC)
    input  logic               seip_in,    // S 模式外部中断
    input  logic               msip_in,    // 软件中断 (CLINT)
    input  logic               mtip_in,    // 定时器中断 (CLINT)

    // ── MIE 门控 (← CSR mstatus) ────────────────────────────
    input  logic               mie_gate,   // mstatus.MIE

    // ── 中断输出 (→ Core) ───────────────────────────────────
    output logic               meip,       // 外部中断 pending (→ CSR mip)
    output logic [7:0]         irq_id,     // 中断 ID
    output logic [7:0]         irq_level_out, // 中断优先级
    output logic               irq_valid,  // 中断请求有效
    output logic               irq_preempt, // 抢占标志
    input  logic               irq_ack,    // CPU 应答

    // ── CLIC CSR 接口 (↔ CSR 单元) ──────────────────────────
    input  logic [11:0]        clic_csr_addr,
    input  logic [31:0]        clic_csr_wdata,
    output logic [31:0]        clic_csr_rdata,
    input  logic               clic_csr_we
);
    import lumi_pkg::*;

    // ═══════════════════════════════════════════════════════════
    // CLIC CSR 寄存器
    // ═══════════════════════════════════════════════════════════

    // mintstatus (0xFB1): mil[31:24]=当前中断级别, mpie[7]=之前MIE, mpp[12:11]=之前模式
    logic [31:0] mintstatus_r;

    // mintthresh (0x347): th[7:0]=最低响应级别
    logic [7:0]  mintthresh_r;

    // ── 中断 unpacked level (从 packed 展开) ─────────────────
    logic [7:0] irq_level [NUM_INT-1:0];
    always_comb begin
        for (int i = 0; i < NUM_INT; i++)
            irq_level[i] = irq_level_packed[i*8 +: 8];
    end

    // ═══════════════════════════════════════════════════════════
    // 中断源聚合 + 优先级仲裁
    // ═══════════════════════════════════════════════════════════

    logic        highest_pending;
    logic [7:0]  highest_id;
    logic [7:0]  highest_level;
    logic [7:0]  current_mil; // 当前中断级别 (from mintstatus)

    assign current_mil = mintstatus_r[31:24];

    always_comb begin
        highest_pending = 1'b0;
        highest_id      = 8'h0;
        highest_level   = 8'h0;

        // ── 本地中断 (CLIC) — 逐位扫描, 高级别优先, 同级别高 ID 优先 ──
        for (int i = NUM_INT - 1; i >= 0; i--) begin
            if (irq_local[i] &&
                irq_level[i] > mintthresh_r &&
                irq_level[i] > current_mil) begin
                if (!highest_pending || irq_level[i] > highest_level ||
                    (irq_level[i] == highest_level && i[7:0] > highest_id)) begin
                    highest_pending = 1'b1;
                    highest_id      = i[7:0];
                    highest_level   = irq_level[i];
                end
            end
        end

        // ── 外部中断 (PLIC) — cause = 11 (M external) ──
        if (meip_in && 8'hFF > mintthresh_r && 8'hFF > current_mil) begin
            if (!highest_pending || 8'hFF > highest_level) begin
                highest_pending = 1'b1;
                highest_id      = 8'd11;
                highest_level   = 8'hFF;
            end
        end

        // ── 定时器中断 (CLINT) — cause = 7 (M timer) ──
        if (mtip_in && 8'hF0 > mintthresh_r && 8'hF0 > current_mil) begin
            if (!highest_pending || 8'hF0 > highest_level ||
                (8'hF0 == highest_level && 8'd7 > highest_id)) begin
                highest_pending = 1'b1;
                highest_id      = 8'd7;
                highest_level   = 8'hF0;
            end
        end

        // ── 软件中断 (CLINT) — cause = 3 (M software) ──
        if (msip_in && 8'h80 > mintthresh_r && 8'h80 > current_mil) begin
            if (!highest_pending || 8'h80 > highest_level ||
                (8'h80 == highest_level && 8'd3 > highest_id)) begin
                highest_pending = 1'b1;
                highest_id      = 8'd3;
                highest_level   = 8'h80;
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // FSM
    // ═══════════════════════════════════════════════════════════

    typedef enum logic [2:0] {
        ST_IDLE, ST_DETECT, ST_PRIORITY, ST_LATENCY, ST_PENDING, ST_ACK
    } clic_state_e;

    clic_state_e state_reg, state_next;
    logic [$clog2(HW_LAT):0] latency_cnt;

    // ── 锁存的中断信息 ──
    logic [7:0] latch_id;
    logic [7:0] latch_level;

    // ── Claim 寄存器 (mclick 读返回值) ──
    logic [7:0] claim_id;
    logic       claim_valid;

    // ── 时序逻辑 ──
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            state_reg     <= ST_IDLE;
            latency_cnt   <= '0;
            latch_id      <= 8'h0;
            latch_level   <= 8'h0;
            mintstatus_r  <= 32'h0;
            mintthresh_r  <= 8'h0;
            claim_id      <= 8'h0;
            claim_valid   <= 1'b0;
        end else begin
            state_reg <= state_next;

            // latency 计数器
            if (state_next == ST_LATENCY && state_reg != ST_LATENCY)
                latency_cnt <= '0;
            else if (state_reg == ST_LATENCY)
                latency_cnt <= latency_cnt + 1;

            // 锁存中断信息 (从 PRIORITY 进入 LATENCY 时)
            if (state_reg == ST_PRIORITY && state_next == ST_LATENCY) begin
                latch_id    <= highest_id;
                latch_level <= highest_level;
            end

            // Claim: 进入 PENDING 时锁存
            if (state_next == ST_PENDING) begin
                claim_id    <= latch_id;
                claim_valid <= 1'b1;
            end

            // ACK: 清除 claim, 更新 mintstatus
            if (state_reg == ST_ACK && state_next == ST_IDLE) begin
                claim_valid <= 1'b0;
                // 更新 mintstatus.mil
                mintstatus_r[31:24] <= latch_level;
            end

            // CSR 写操作
            if (clic_csr_we) begin
                case (clic_csr_addr)
                    12'h347: mintthresh_r <= clic_csr_wdata[7:0]; // mintthresh
                    12'hFB1: mintstatus_r <= clic_csr_wdata;       // mintstatus
                    12'hFB0: begin // mclick write = complete
                        claim_valid <= 1'b0;
                        mintstatus_r[31:24] <= 8'h0; // 清除 mil
                    end
                    default: ;
                endcase
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // CSR 读路径
    // ═══════════════════════════════════════════════════════════
    always_comb begin
        clic_csr_rdata = 32'h0;
        case (clic_csr_addr)
            12'hFB1: clic_csr_rdata = mintstatus_r;   // mintstatus
            12'h347: clic_csr_rdata = {24'h0, mintthresh_r}; // mintthresh
            12'hFB0: clic_csr_rdata = claim_valid ? {24'h0, claim_id} : 32'h0; // mclick
            default: clic_csr_rdata = 32'h0;
        endcase
    end

    // ═══════════════════════════════════════════════════════════
    // FSM 组合逻辑
    // ═══════════════════════════════════════════════════════════

    // MIE 门控: MIE=0 时不响应
    logic gate_open;
    assign gate_open = mie_gate;

    always_comb begin
        state_next    = state_reg;
        meip          = 1'b0;
        irq_valid     = 1'b0;
        irq_id        = latch_id;
        irq_level_out = latch_level;
        irq_preempt   = 1'b0;

        case (state_reg)
            ST_IDLE: begin
                if (gate_open && highest_pending)
                    state_next = ST_DETECT;
                else
                    state_next = ST_IDLE;
            end

            ST_DETECT: begin
                // 确认中断仍然 pending
                if (highest_pending)
                    state_next = ST_PRIORITY;
                else
                    state_next = ST_IDLE;
            end

            ST_PRIORITY: begin
                irq_id        = highest_id;
                irq_level_out = highest_level;
                state_next    = ST_LATENCY;
            end

            ST_LATENCY: begin
                irq_id        = latch_id;
                irq_level_out = latch_level;
                if (latency_cnt >= HW_LAT[$clog2(HW_LAT):0])
                    state_next = ST_PENDING;
                else
                    state_next = ST_LATENCY;
            end

            ST_PENDING: begin
                meip          = 1'b1;
                irq_valid     = 1'b1;
                irq_id        = latch_id;
                irq_level_out = latch_level;
                // 抢占检查: 新中断级别 > 当前级别
                if (highest_pending && highest_level > latch_level) begin
                    irq_preempt = 1'b1;
                    state_next  = ST_PRIORITY; // 抢占: 切到高优先级
                end else if (irq_ack) begin
                    state_next = ST_ACK;
                end else begin
                    state_next = ST_PENDING;
                end
            end

            ST_ACK: begin
                irq_id    = latch_id;
                irq_valid = 1'b0;
                state_next = ST_IDLE;
            end

            default: state_next = ST_IDLE;
        endcase
    end

endmodule
