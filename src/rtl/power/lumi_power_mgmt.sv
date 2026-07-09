// =================================================================
// LUMI-DESIGN-PWR | 需求: LUMI-PWR-001~004 | 承接: design/power-reset.html §3.1~3.3
// 模块: lumi_power_mgmt — WFI/WRS + ICG 时钟门控 + 多域复位 + UPF
// 阶段: M3 Batch-4 RTL 实现 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_power_mgmt #(parameter int NUM_HARTS = lumi_pkg::NUM_HARTS) (
    input  logic clk_core, input  logic reset_n,
    input  logic wfi_req, input  logic wrs_req,
    input  logic core_active,
    output logic icg_en,        // ICG 时钟门控使能
    output logic core_sleep,    // Core 进入 sleep
    output logic [NUM_HARTS-1:0] hart_sleep,
    // 多域复位
    input  logic sys_reset_n,   // 系统复位
    input  logic debug_reset_n, // 调试复位
    output logic core_reset_n,  // 核心域复位
    output logic bus_reset_n,   // 总线域复位
    // UPF 电源域接口
    input  logic vcc_on,        // 主电源域 ON
    input  logic vcc_ret_on,    // 保持域 ON
    output logic power_state [3:0]  // RUN/IDLE/SLEEP/DEEP_SLEEP
);
    import lumi_pkg::*;

    // ─── 功耗状态枚举 ───────────────────────────────────────────
    typedef enum logic [2:0] {
        ST_RUN, ST_IDLE, ST_SLEEP, ST_DEEP_SLEEP, ST_WAKEUP
    } pwr_state_e;
    pwr_state_e state_reg, state_next;

    // ─── WRS Reservation 跟踪 ───────────────────────────────────
    logic reservation_valid;
    logic reservation_invalidate;  // 外部写入清除 reservation

    // ─── WFI/WRS 延迟计数器 (唤醒 ≤8 cycle) ────────────────────
    logic [3:0] wakeup_cnt;
    logic       wakeup_done;
    assign wakeup_done = (wakeup_cnt >= 4'd8);

    // ─── 唤醒事件检测 ───────────────────────────────────────────
    logic wake_event;
    assign wake_event = core_active || reservation_invalidate || !sys_reset_n;

    // ─── ICG 模块级门控信号 ─────────────────────────────────────
    logic icg_fpu_en, icg_vec_en, icg_tcm_en;
    logic core_idle;
    assign core_idle = !core_active;

    // 细粒度门控: 各模块空闲时关闭时钟
    assign icg_fpu_en = !core_idle;  // FPU 空闲且无 pending 时关闭
    assign icg_vec_en = !core_idle;  // Vector 空闲时关闭
    assign icg_tcm_en = 1'b1;        // TCM 默认开启 (简化)

    // ─── Deep Sleep 请求 (SoC 级) ───────────────────────────────
    logic deep_sleep_req;
    assign deep_sleep_req = !vcc_on;  // 主电源关闭时进入 deep sleep

    // ─── 状态寄存器 ─────────────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            state_reg <= ST_RUN;
        else
            state_reg <= state_next;
    end

    // ─── WFI 唤醒计数器 (≤8 cycle 保证) ─────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            wakeup_cnt <= 4'h0;
        else if (state_reg == ST_WAKEUP)
            wakeup_cnt <= wakeup_done ? 4'h0 : wakeup_cnt + 4'h1;
        else
            wakeup_cnt <= 4'h0;
    end

    // ─── WRS Reservation 跟踪 ──────────────────────────────────
    // Reservation 在 LR 指令时设置, SC 或外部写入时清除
    // 骨架简化: reservation_invalidate 由外部信号驱动
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            reservation_valid <= 1'b0;
            reservation_invalidate <= 1'b0;
        end else begin
            // WRS 请求时 reservation 有效
            if (wrs_req && state_reg == ST_RUN)
                reservation_valid <= 1'b1;
            // 外部写入或中断清除 reservation
            if (core_active || state_reg == ST_RUN)
                reservation_valid <= 1'b0;
            // reservation_invalidate 脉冲
            reservation_invalidate <= reservation_valid && core_active;
        end
    end

    // ─── Per-Hart Sleep 状态 ────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            hart_sleep <= '0;
        else begin
            for (int i = 0; i < NUM_HARTS; i++) begin
                if (state_reg inside {ST_IDLE, ST_SLEEP, ST_DEEP_SLEEP})
                    hart_sleep[i] <= 1'b1;
                else
                    hart_sleep[i] <= 1'b0;
            end
        end
    end

    // ─── UPF 电源状态映射 ───────────────────────────────────────
    always_comb begin
        case (state_reg)
            ST_RUN:        power_state = '{4{ST_RUN}};
            ST_IDLE:       power_state = '{4{ST_IDLE}};
            ST_SLEEP:      power_state = '{4{ST_SLEEP}};
            ST_DEEP_SLEEP: power_state = '{4{ST_DEEP_SLEEP}};
            ST_WAKEUP:     power_state = '{4{ST_RUN}};
            default:       power_state = '{4{ST_RUN}};
        endcase
    end

    // ─── 多域复位逻辑 ───────────────────────────────────────────
    // sys_reset_n 控制 core + bus 域
    // debug_reset_n 仅控制 debug 域 (独立)
    // Cold reset: sys_reset_n 下降
    // Warm reset: 软件触发 (保留)
    assign core_reset_n = sys_reset_n;
    assign bus_reset_n  = sys_reset_n;

    // ─── 主 FSM ─────────────────────────────────────────────────
    always_comb begin
        state_next = state_reg;
        icg_en     = 1'b0;
        core_sleep = 1'b0;

        case (state_reg)
            ST_RUN: begin
                // WFI 或 WRS 触发进入低功耗
                if (wfi_req) begin
                    // WFI: 检查是否有待处理中断
                    // 有待处理中断时 WFI 作为 NOP (不进入 sleep)
                    if (!core_active)
                        state_next = ST_IDLE;
                end else if (wrs_req) begin
                    // WRS: 等待 reservation set
                    if (reservation_valid && !core_active)
                        state_next = ST_IDLE;
                end else if (deep_sleep_req) begin
                    state_next = ST_DEEP_SLEEP;
                end
            end

            ST_IDLE: begin
                // ICG 时钟门控: Core Clock 域门控
                icg_en = 1'b1;

                // 唤醒事件检测
                if (wake_event)
                    state_next = ST_WAKEUP;
                else if (deep_sleep_req)
                    state_next = ST_DEEP_SLEEP;
            end

            ST_SLEEP: begin
                core_sleep = 1'b1;
                icg_en     = 1'b1;

                if (wake_event)
                    state_next = ST_WAKEUP;
            end

            ST_DEEP_SLEEP: begin
                core_sleep = 1'b1;
                icg_en     = 1'b1;

                // Deep Sleep: 仅 vcc_ret_on 保持 Retention 寄存器
                // 唤醒需要外部信号 (PLL 重新锁定)
                if (vcc_on && wake_event)
                    state_next = ST_WAKEUP;
            end

            ST_WAKEUP: begin
                // 唤醒序列: ≤8 cycle
                // cycle 1: clk_gate 释放
                // cycle 2~8: 流水线重新填充
                icg_en = 1'b0;  // 恢复 Core Clock

                if (wakeup_done)
                    state_next = ST_RUN;
            end

            default: state_next = ST_RUN;
        endcase
    end

endmodule
