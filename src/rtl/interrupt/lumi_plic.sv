// =================================================================
// LUMI-DESIGN-PLIC | 需求: LUMI-PLIC-001~002 | 承接: design/clic-plic.html §2.2
// 模块: lumi_plic — PLIC 外部中断控制器 (32 源 + 7 级优先级 + Claim/Complete)
// 阶段: M3 Batch-3 完整功能实现
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_plic #(
    parameter int NUM_SRC  = 32,
    parameter int NUM_HART = lumi_pkg::NUM_HARTS
) (
    input  logic clk_core, input  logic reset_n,

    // ── 外部中断输入 ─────────────────────────────────────────
    input  logic [NUM_SRC-1:0]  ext_irq_in,    // 中断源 [31:0]

    // ── 中断输出 (→ CLIC) ────────────────────────────────────
    output logic [NUM_HART-1:0] meip,          // M-mode 外部中断 pending
    output logic [NUM_HART*5-1:0] irq_id,      // 中断 ID per hart (5-bit)
    input  logic [NUM_HART-1:0] irq_claim,     // Claim 应答

    // ── PLIC MMIO 接口 (AXI4-Lite, 简化 12-bit 地址) ────────
    input  logic [11:0]         plic_addr,
    input  logic [31:0]         plic_wdata,
    output logic [31:0]         plic_rdata,
    input  logic                plic_we
);
    import lumi_pkg::*;

    // ═══════════════════════════════════════════════════════════
    // MMIO 地址映射 (简化, 12-bit 地址空间)
    // ═══════════════════════════════════════════════════════════
    // 0x000 ~ 0x07F: priority[1..31] (源 0 保留, 每源 4B, 低 3-bit)
    // 0x080 ~ 0x083: pending (位图, 每 32 源 4B)
    // 0x084 ~ 0x087: enable  (位图, per-context)
    // 0x100:          threshold (3-bit)
    // 0x104:          claim/complete (读=claim, 写=complete)

    // ═══════════════════════════════════════════════════════════
    // 内部寄存器
    // ═══════════════════════════════════════════════════════════

    // 优先级: 3-bit per source (源 0 保留, 源 1~31)
    logic [2:0] priority_r [NUM_SRC-1:0];

    // Pending 位图
    logic [NUM_SRC-1:0] pending_r;

    // Enable 位图 (单 context 简化)
    logic [NUM_SRC-1:0] enable_r;

    // Threshold (单 context)
    logic [2:0] threshold_r;

    // Claim 锁存: 当前被 claim 的中断源 (等待 complete)
    logic [4:0] claimed_src_r;
    logic       claimed_valid_r;

    // ═══════════════════════════════════════════════════════════
    // 中断边沿检测 (电平触发: ext_irq_in 高电平 = pending)
    // ═══════════════════════════════════════════════════════════

    // Pending 更新: 中断到达时置位, claim 时清零
    // 简化为电平触发: pending = ext_irq_in (非 claim 屏蔽)

    // ═══════════════════════════════════════════════════════════
    // 优先级仲裁 (组合逻辑)
    // ═══════════════════════════════════════════════════════════

    logic [4:0]  best_id;
    logic [2:0]  best_priority;
    logic        has_irq;

    always_comb begin
        best_id       = 5'h0;
        best_priority = 3'h0;
        has_irq       = 1'b0;

        // 遍历所有中断源 (跳过源 0)
        for (int i = 1; i < NUM_SRC; i++) begin
            if (pending_r[i] && enable_r[i]) begin
                if (priority_r[i] > best_priority) begin
                    best_priority = priority_r[i];
                    best_id       = i[4:0];
                    has_irq       = 1'b1;
                end else if (priority_r[i] == best_priority && i[4:0] > best_id) begin
                    // 同优先级: 高 ID 优先
                    best_id = i[4:0];
                    has_irq = 1'b1;
                end
            end
        end
    end

    // ── Threshold 过滤 ──
    logic irq_above_threshold;
    assign irq_above_threshold = has_irq && (best_priority > threshold_r);

    // ── MEIP 输出 ──
    always_comb begin
        meip = '0;
        if (irq_above_threshold)
            meip[0] = 1'b1;
    end

    // ── IRQ ID 输出 ──
    always_comb begin
        irq_id = '0;
        if (irq_above_threshold)
            irq_id[4:0] = best_id;
    end

    // ═══════════════════════════════════════════════════════════
    // MMIO 读写逻辑
    // ═══════════════════════════════════════════════════════════

    // 组合 pending 信号 (中断源有效且未被 claim 屏蔽)
    logic [NUM_SRC-1:0] pending_next;
    always_comb begin
        pending_next = ext_irq_in;
        // Claim 屏蔽: 被 claim 的源清 pending
        if (claimed_valid_r)
            pending_next[claimed_src_r] = 1'b0;
    end

    always_comb begin
        plic_rdata = 32'h0;

        case (plic_addr) inside
            // ── Priority registers (0x000 ~ 0x07F) ──
            12'h000, 12'h004, 12'h008, 12'h00C,
            12'h010, 12'h014, 12'h018, 12'h01C,
            12'h020, 12'h024, 12'h028, 12'h02C,
            12'h030, 12'h034, 12'h038, 12'h03C,
            12'h040, 12'h044, 12'h048, 12'h04C,
            12'h050, 12'h054, 12'h058, 12'h05C,
            12'h060, 12'h064, 12'h068, 12'h06C,
            12'h070, 12'h074, 12'h078, 12'h07C: begin
                plic_rdata = {29'h0, priority_r[plic_addr[6:2]]};
            end

            // ── Pending bitmap (0x080) ──
            12'h080: plic_rdata = pending_r;

            // ── Enable bitmap (0x084) ──
            12'h084: plic_rdata = enable_r;

            // ── Threshold (0x100) ──
            12'h100: plic_rdata = {29'h0, threshold_r};

            // ── Claim (0x104): 读 = claim 最高优先级中断 ──
            12'h104: plic_rdata = {27'h0, best_id};

            default: plic_rdata = 32'h0;
        endcase
    end

    // ═══════════════════════════════════════════════════════════
    // 时序逻辑
    // ═══════════════════════════════════════════════════════════

    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            pending_r       <= '0;
            enable_r        <= '0;
            threshold_r     <= 3'h0;
            claimed_src_r   <= 5'h0;
            claimed_valid_r <= 1'b0;
            for (int i = 0; i < NUM_SRC; i++)
                priority_r[i] <= 3'h0;
        end else begin
            // ── Pending 更新 ──
            pending_r <= pending_next;

            // ── Claim 处理 ──
            if (irq_claim[0] && irq_above_threshold && !claimed_valid_r) begin
                claimed_src_r   <= best_id;
                claimed_valid_r <= 1'b1;
                // 清 pending 位
                pending_r[best_id] <= 1'b0;
            end

            // ── MMIO 写操作 ──
            if (plic_we) begin
                // Priority 写 (0x000~0x07F)
                if (plic_addr <= 12'h07C && plic_addr[1:0] == 2'b00) begin
                    priority_r[plic_addr[6:2]] <= plic_wdata[2:0];
                end

                // Enable 写 (0x084)
                if (plic_addr == 12'h084) begin
                    enable_r <= plic_wdata;
                    // 源 0 不可使能
                    enable_r[0] <= 1'b0;
                end

                // Threshold 写 (0x100)
                if (plic_addr == 12'h100) begin
                    threshold_r <= plic_wdata[2:0];
                end

                // Complete 写 (0x104): 完成中断处理, 清除 claim
                if (plic_addr == 12'h104) begin
                    claimed_valid_r <= 1'b0;
                end
            end
        end
    end

endmodule
