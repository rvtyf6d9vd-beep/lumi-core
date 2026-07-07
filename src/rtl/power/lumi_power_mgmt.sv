// =================================================================
// LUMI-DESIGN-PWR | 需求: LUMI-PWR-001~004 | 承接: design/power-reset.html §3.1~3.3
// 模块: lumi_power_mgmt — WFI/WRS + ICG 时钟门控 + 多域复位 + UPF
// 阶段: M2-S1 RTL 骨架 | 作者: Qoder Agent | 日期: 2026-07-07
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
    typedef enum logic [2:0] {
        ST_RUN, ST_IDLE, ST_SLEEP, ST_DEEP_SLEEP, ST_WAKEUP
    } pwr_state_e;
    pwr_state_e state_reg, state_next;
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) state_reg <= ST_RUN; else state_reg <= state_next;
    end
    always_comb begin
        state_next = state_reg; icg_en = 1'b0; core_sleep = 1'b0; hart_sleep = '0;
        core_reset_n = sys_reset_n; bus_reset_n = sys_reset_n;
        power_state = '{4{ST_RUN}};
        case (state_reg)
            ST_RUN:        if (wfi_req || wrs_req) state_next = ST_IDLE;
            ST_IDLE:       begin icg_en = 1'b1; if (core_active) state_next = ST_WAKEUP; end
            ST_SLEEP:      begin core_sleep = 1'b1; icg_en = 1'b1; end
            ST_DEEP_SLEEP: begin core_sleep = 1'b1; icg_en = 1'b1; end
            ST_WAKEUP:     state_next = ST_RUN;
        endcase
    end
endmodule
