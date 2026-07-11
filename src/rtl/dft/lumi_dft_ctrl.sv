// =================================================================
// LUMI-DESIGN-DFT | 需求: LUMI-DFT-001~003 | 承接: design/dft-security.html §3.1
// 模块: lumi_dft_ctrl — Scan 链控制 + MBIST + JTAG TAP 复用
// 阶段: M3 Batch-4 RTL 实现 | 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================
module lumi_dft_ctrl (
    input  logic clk_core, input  logic reset_n,
    // Scan 链接口 (T-MS3-S2-1.4h: 4-bit scan chain)
    input  logic scan_enable, input  logic [3:0] scan_in, output logic [3:0] scan_out,
    output logic scan_mode,
    // MBIST 控制器接口
    input  logic mbist_enable, output logic mbist_start, output logic mbist_done,
    output logic mbist_fail, output logic [31:0] mbist_error_count,
    output logic [63:0] mbist_diag,  // T-MS3-S2-1.4i: MBIST 诊断输出
    // JTAG TAP 复用
    input  logic tck, input  logic tms, input  logic tdi, output logic tdo,
    output logic jtag_select,  // 1=JTAG mode, 0=normal
    // 安全接口
    input  logic tamper_detect, output logic secure_lock
);
    import lumi_pkg::*;

    // ─── DFT 主控状态机 ─────────────────────────────────────────
    typedef enum logic [2:0] {
        ST_NORMAL, ST_SCAN, ST_MBIST, ST_JTAG, ST_SECURE
    } dft_state_e;
    dft_state_e state_reg, state_next;

    // ─── MBIST 子状态机 ─────────────────────────────────────────
    // March C- 算法: M0(全写0) → M1(升序读0写1) → M2(升序读1写0)
    //               → M3(降序读0写1) → M4(降序读1写0) → M5(升序读0)
    typedef enum logic [3:0] {
        MB_IDLE, MB_M0, MB_M1, MB_M2, MB_M3, MB_M4, MB_M5, MB_DONE, MB_FAIL
    } mbist_state_e;
    mbist_state_e mb_state_reg, mb_state_next;

    // MBIST 地址计数器
    logic [15:0] mb_addr;
    logic [15:0] mb_addr_max;   // 内存深度 (简化: 64K words)
    logic        mb_phase_done;
    logic [31:0] mb_err_cnt;
    logic        mb_error_found;
    logic        mb_ecc_bypass;  // MBIST 期间禁用 ECC

    assign mb_addr_max = 16'hFFFF;  // 简化: 64K 地址空间
    assign mb_phase_done = (mb_addr >= mb_addr_max);

    // ─── JTAG TAP 控制器 (IEEE 1149.1) ──────────────────────────
    typedef enum logic [3:0] {
        TAP_RESET, TAP_IDLE, TAP_DR_SEL, TAP_DR_CAP, TAP_DR_SHIFT,
        TAP_DR_EXIT1, TAP_DR_PAUSE, TAP_DR_EXIT2, TAP_DR_UPD,
        TAP_IR_SEL, TAP_IR_CAP, TAP_IR_SHIFT, TAP_IR_EXIT1,
        TAP_IR_PAUSE, TAP_IR_EXIT2, TAP_IR_UPD
    } tap_state_e;
    tap_state_e tap_state_reg, tap_state_next;

    // JTAG 指令寄存器 (5-bit)
    logic [4:0] ir_reg;
    logic [31:0] dr_reg;  // 数据寄存器 (IDCODE/BYPASS)
    logic        jtag_tdo_int;
    logic        jtag_mode;  // 1=边界扫描模式, 0=Debug 模式

    // JTAG 指令定义
    localparam logic [4:0] IR_BYPASS  = 5'b11111;
    localparam logic [4:0] IR_IDCODE  = 5'b00001;
    localparam logic [4:0] IR_EXTEST  = 5'b00010;
    localparam logic [4:0] IR_INTEST  = 5'b00011;
    localparam logic [4:0] IR_SAMPLE  = 5'b00100;
    localparam logic [4:0] IR_PRELOAD = 5'b00101;

    // IDCODE: 厂商 ID + 器件型号 + 版本号
    localparam logic [31:0] DEVICE_IDCODE = 32'h10E3_1901;

    // ─── TAP 状态寄存器 (tck 时钟域) ────────────────────────────
    always_ff @(posedge tck or negedge reset_n) begin
        if (!reset_n)
            tap_state_reg <= TAP_RESET;
        else
            tap_state_reg <= tap_state_next;
    end

    // ─── TAP 状态转移 (IEEE 1149.1) ─────────────────────────────
    always_comb begin
        case (tap_state_reg)
            TAP_RESET:    tap_state_next = tms ? TAP_RESET : TAP_IDLE;
            TAP_IDLE:     tap_state_next = tms ? TAP_DR_SEL : TAP_IDLE;
            TAP_DR_SEL:   tap_state_next = tms ? TAP_IR_SEL : TAP_DR_CAP;
            TAP_DR_CAP:   tap_state_next = tms ? TAP_DR_EXIT1 : TAP_DR_SHIFT;
            TAP_DR_SHIFT: tap_state_next = tms ? TAP_DR_EXIT1 : TAP_DR_SHIFT;
            TAP_DR_EXIT1: tap_state_next = tms ? TAP_DR_UPD : TAP_DR_PAUSE;
            TAP_DR_PAUSE: tap_state_next = tms ? TAP_DR_EXIT2 : TAP_DR_PAUSE;
            TAP_DR_EXIT2: tap_state_next = tms ? TAP_DR_UPD : TAP_DR_SHIFT;
            TAP_DR_UPD:   tap_state_next = tms ? TAP_DR_SEL : TAP_IDLE;
            TAP_IR_SEL:   tap_state_next = tms ? TAP_RESET : TAP_IR_CAP;
            TAP_IR_CAP:   tap_state_next = tms ? TAP_IR_EXIT1 : TAP_IR_SHIFT;
            TAP_IR_SHIFT: tap_state_next = tms ? TAP_IR_EXIT1 : TAP_IR_SHIFT;
            TAP_IR_EXIT1: tap_state_next = tms ? TAP_IR_UPD : TAP_IR_PAUSE;
            TAP_IR_PAUSE: tap_state_next = tms ? TAP_IR_EXIT2 : TAP_IR_PAUSE;
            TAP_IR_EXIT2: tap_state_next = tms ? TAP_IR_UPD : TAP_IR_SHIFT;
            TAP_IR_UPD:   tap_state_next = tms ? TAP_DR_SEL : TAP_IDLE;
            default:      tap_state_next = TAP_RESET;
        endcase
    end

    // ─── JTAG IR/DR 寄存器 (tck 域) ─────────────────────────────
    always_ff @(posedge tck or negedge reset_n) begin
        if (!reset_n) begin
            ir_reg <= IR_IDCODE;
            dr_reg <= DEVICE_IDCODE;
        end else begin
            // IR 移位
            if (tap_state_reg == TAP_IR_SHIFT)
                ir_reg <= {tdi, ir_reg[4:1]};
            else if (tap_state_reg == TAP_IR_UPD)
                ; // IR 更新完成

            // DR 移位
            if (tap_state_reg == TAP_DR_SHIFT)
                dr_reg <= {tdi, dr_reg[31:1]};
            else if (tap_state_reg == TAP_DR_CAP) begin
                case (ir_reg)
                    IR_IDCODE: dr_reg <= DEVICE_IDCODE;
                    IR_BYPASS: dr_reg <= 32'h1;  // BYPASS: 1-bit
                    default:   dr_reg <= 32'h0;
                endcase
            end
        end
    end

    // JTAG TDO 输出
    assign jtag_tdo_int = (tap_state_reg == TAP_IR_SHIFT) ? ir_reg[0] : dr_reg[0];

    // 边界扫描模式判断
    assign jtag_mode = (ir_reg == IR_EXTEST) || (ir_reg == IR_INTEST) ||
                       (ir_reg == IR_SAMPLE) || (ir_reg == IR_PRELOAD);

    // ─── 主 DFT 状态寄存器 ──────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            state_reg <= ST_NORMAL;
        else
            state_reg <= state_next;
    end

    // ─── MBIST 子状态寄存器 ─────────────────────────────────────
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            mb_state_reg <= MB_IDLE;
            mb_addr      <= 16'h0;
            mb_err_cnt   <= 32'h0;
            mb_error_found <= 1'b0;
        end else begin
            mb_state_reg <= mb_state_next;

            // 地址计数
            if (mb_state_reg inside {MB_M0, MB_M1, MB_M2, MB_M3, MB_M4, MB_M5})
                mb_addr <= mb_phase_done ? 16'h0 : mb_addr + 16'h1;

            // 错误计数 (简化: 模拟检测)
            if (mb_state_reg inside {MB_M1, MB_M2, MB_M3, MB_M4, MB_M5} && mb_error_found)
                mb_err_cnt <= mb_err_cnt + 32'h1;
        end
    end

    // MBIST 错误检测 (简化模型: 实际需与 SRAM BIST 接口交互)
    assign mb_error_found = 1'b0;  // 实际由 SRAM 比较器驱动
    assign mb_ecc_bypass = (mb_state_reg != MB_IDLE);

    // ─── MBIST 子 FSM (March C- 算法) ───────────────────────────
    always_comb begin
        mb_state_next = mb_state_reg;

        case (mb_state_reg)
            MB_IDLE: begin
                if (state_reg == ST_MBIST)
                    mb_state_next = MB_M0;
            end
            MB_M0:   if (mb_phase_done) mb_state_next = MB_M1;  // ↑(w0)
            MB_M1:   if (mb_phase_done) mb_state_next = MB_M2;  // ↑(r0,w1)
            MB_M2:   if (mb_phase_done) mb_state_next = MB_M3;  // ↑(r1,w0)
            MB_M3:   if (mb_phase_done) mb_state_next = MB_M4;  // ↓(r0,w1)
            MB_M4:   if (mb_phase_done) mb_state_next = MB_M5;  // ↓(r1,w0)
            MB_M5:   if (mb_phase_done) begin
                        // M5 完成: 检查是否有错误
                        mb_state_next = (mb_err_cnt > 32'h0) ? MB_FAIL : MB_DONE;
                     end
            MB_DONE: if (state_reg != ST_MBIST) mb_state_next = MB_IDLE;
            MB_FAIL: if (state_reg != ST_MBIST) mb_state_next = MB_IDLE;
            default: mb_state_next = MB_IDLE;
        endcase
    end

    // ─── 安全锁定 (tamper_detect → secure_lock) ─────────────────
    logic secure_lock_reg;
    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n)
            secure_lock_reg <= 1'b0;
        else if (tamper_detect)
            secure_lock_reg <= 1'b1;  // 一旦检测到篡改, 永久锁定
        // 不可通过软件清除 (需硬件复位)
    end
    assign secure_lock = secure_lock_reg;

    // ─── 主 DFT FSM ─────────────────────────────────────────────
    always_comb begin
        state_next  = state_reg;
        scan_mode   = 1'b0;
        scan_out    = scan_in;  // 默认 pass-through (4-bit)
        mbist_start = 1'b0;
        mbist_done  = 1'b0;
        mbist_fail  = 1'b0;
        mbist_error_count = mb_err_cnt;
        mbist_diag  = {32'h0, mb_err_cnt};  // T-MS3-S2-1.4i: 诊断信息
        jtag_select = 1'b0;

        // TDO 多路选择
        if (state_reg == ST_JTAG)
            ; // tdo 由 JTAG TAP 控制
        else
            ; // tdo 由 scan chain 或 normal 模式控制

        case (state_reg)
            ST_NORMAL: begin
                if (secure_lock_reg)
                    state_next = ST_SECURE;
                else if (scan_enable)
                    state_next = ST_SCAN;
                else if (mbist_enable)
                    state_next = ST_MBIST;
                else if (jtag_mode)
                    state_next = ST_JTAG;
            end

            ST_SCAN: begin
                scan_mode = 1'b1;
                scan_out  = scan_in;  // Scan chain shift
                if (!scan_enable)
                    state_next = ST_NORMAL;
            end

            ST_MBIST: begin
                mbist_start = (mb_state_reg == MB_M0);
                mbist_done  = (mb_state_reg == MB_DONE);
                mbist_fail  = (mb_state_reg == MB_FAIL);
                if (!mbist_enable || mb_state_reg inside {MB_DONE, MB_FAIL})
                    state_next = ST_NORMAL;
            end

            ST_JTAG: begin
                jtag_select = 1'b1;
                if (!jtag_mode)
                    state_next = ST_NORMAL;
            end

            ST_SECURE: begin
                // 安全锁定: 不可退出 (除非硬件复位)
                if (!secure_lock_reg)
                    state_next = ST_NORMAL;
            end

            default: state_next = ST_NORMAL;
        endcase
    end

    // ─── TDO 最终输出多路选择 ───────────────────────────────────
    assign tdo = (state_reg == ST_JTAG) ? jtag_tdo_int :
                 (state_reg == ST_SCAN) ? scan_out[0] :  // T-MS3-S2-1.4h: 4-bit scan, TDO 取 bit[0]
                 1'b0;

endmodule
