// =================================================================
// LUMI-DESIGN-EXC | 需求: LUMI-EXC-001~003 | 承接: design/exception-handling.html §2-2.6
// 模块: lumi_exception — 异常/中断处理 (精确异常 + 委托 + NMI)
// 阶段: M3 Batch-3 完整功能实现
// 作者: Qoder Agent | 日期: 2026-07-07
// =================================================================

module lumi_exception #(
    parameter int IW = lumi_pkg::ISSUE_WIDTH
) (
    input  logic                    clk_core,
    input  logic                    reset_n,

    // ── 异常输入 (来自各级流水线) ─────────────────────────────
    input  logic [1:0]              exc_fetch,      // 取指异常: 00=none, 01=misaligned, 10=access_fault, 11=page_fault
    input  logic [3:0]              exc_decode,     // 解码异常: 0000=none, 0001=illegal, 0010=ecall, 0011=ebreak, 0100=ecall_s, 0101=ecall_m
    input  logic [2:0]              exc_exec,       // 执行异常: 000=none, 001=load_misalign, 010=store_misalign, 011=load_access, 100=store_access
    input  logic [31:0]             exc_addr,       // 异常地址 (mtval: 失败地址)
    input  logic [31:0]             exc_insn,       // 异常指令字 (mtval: 非法指令)
    input  logic [31:0]             exc_pc,         // 异常指令 PC

    // ── NMI / 中断输入 ────────────────────────────────────────
    input  logic                    nmi_signal,     // 外部 NMI 信号
    input  logic                    irq_request,    // 中断请求 (来自 CLIC)
    input  logic [7:0]              irq_id,         // 中断 ID
    output logic                   irq_ack,        // → CLIC 应答

    // ── CSR 输入 ──────────────────────────────────────────────
    input  logic [31:0]             mtvec_in,       // mtvec (trap 入口地址)
    input  logic [31:0]             mstatus_in,     // mstatus
    input  logic [31:0]             medeleg_in,     // 异常委托位图
    input  logic [31:0]             mideleg_in,     // 中断委托位图
    input  logic [1:0]              priv_mode_in,   // 当前特权级

    // ── NMI CSR 输入 (Smrnmi) ────────────────────────────────
    input  logic [31:0]             mnepc_in,
    input  logic [31:0]             mncause_in,
    input  logic [31:0]             mnstatus_in,

    // ── S-mode CSR 输入 ──────────────────────────────────────
    input  logic [31:0]             stvec_in,       // stvec

    // ── 指令类型输入 ──────────────────────────────────────────
    input  logic                    is_mret,        // MRET 指令
    input  logic                    is_sret,        // SRET 指令
    input  logic                    is_mnret,       // MNRET 指令
    input  logic                    commit_valid,   // W 级有指令提交

    // ── Trap 输出 (→ CSR + 流水线) ───────────────────────────
    output logic                    trap_take,      // Trap 触发 (flush 流水线)
    output logic [31:0]             trap_pc,      // Trap 目标 PC
    output logic [31:0]             trap_cause,     // Trap 原因码 (mcause)
    output logic [31:0]             trap_epc,       // 异常指令 PC (→ mepc)
    output logic [31:0]             trap_tval,      // mtval 值
    output logic                    trap_is_irq,    // 1=中断, 0=异常

    // ── Trap 信号输出 (→ CSR 单元) ──────────────────────────
    output logic                    trap_enter,     // 触发 trap_enter
    output logic                    mret_exec,      // MRET 执行
    output logic                    sret_exec,      // SRET 执行
    output logic                    nmi_enter_out,  // NMI 进入
    output logic                    mnret_exec_out, // MNRET 执行

    // ── 委托信息 ──────────────────────────────────────────────
    output logic                    delegated,      // 1=委托到 S-mode
    output logic                    flush_pipe      // flush 流水线
);

    import lumi_pkg::*;

    // ═══════════════════════════════════════════════════════════
    // 异常检测与编码 (组合逻辑)
    // ═══════════════════════════════════════════════════════════

    // ── 取指异常 ──
    logic        fetch_exc_valid;
    logic [4:0]  fetch_exc_cause;  // 5-bit to hold cause codes up to 15
    logic [31:0] fetch_exc_tval;

    always_comb begin
        fetch_exc_valid = 1'b0;
        fetch_exc_cause = 5'h0;
        fetch_exc_tval  = exc_addr;
        case (exc_fetch)
            2'b01: begin fetch_exc_valid = 1'b1; fetch_exc_cause = 5'd0;  end // misaligned
            2'b10: begin fetch_exc_valid = 1'b1; fetch_exc_cause = 5'd1;  end // access fault
            2'b11: begin fetch_exc_valid = 1'b1; fetch_exc_cause = 5'd12; end // page fault
            default: ;
        endcase
    end

    // ── 解码异常 ──
    logic        decode_exc_valid;
    logic [4:0]  decode_exc_cause;
    logic [31:0] decode_exc_tval;

    always_comb begin
        decode_exc_valid = 1'b0;
        decode_exc_cause = 5'h0;
        decode_exc_tval  = exc_insn; // 默认非法指令编码
        case (exc_decode)
            4'b0001: begin decode_exc_valid = 1'b1; decode_exc_cause = 5'd2;  end // illegal
            4'b0010: begin decode_exc_valid = 1'b1; decode_exc_cause = 5'd8;  decode_exc_tval = 32'h0; end // ecall U
            4'b0011: begin decode_exc_valid = 1'b1; decode_exc_cause = 5'd3;  end // ebreak
            4'b0100: begin decode_exc_valid = 1'b1; decode_exc_cause = 5'd9;  decode_exc_tval = 32'h0; end // ecall S
            4'b0101: begin decode_exc_valid = 1'b1; decode_exc_cause = 5'd11; decode_exc_tval = 32'h0; end // ecall M
            default: ;
        endcase
    end

    // ── 执行异常 ──
    logic        exec_exc_valid;
    logic [4:0]  exec_exc_cause;
    logic [31:0] exec_exc_tval;

    always_comb begin
        exec_exc_valid = 1'b0;
        exec_exc_cause = 5'h0;
        exec_exc_tval  = exc_addr;
        case (exc_exec)
            3'b001: begin exec_exc_valid = 1'b1; exec_exc_cause = 5'd4; end // load misalign
            3'b010: begin exec_exc_valid = 1'b1; exec_exc_cause = 5'd6; end // store misalign
            3'b011: begin exec_exc_valid = 1'b1; exec_exc_cause = 5'd5; end // load access fault
            3'b100: begin exec_exc_valid = 1'b1; exec_exc_cause = 5'd7; end // store access fault
            default: ;
        endcase
    end

    // ═══════════════════════════════════════════════════════════
    // 优先级仲裁 (同步 > NMI > 中断)
    // ═══════════════════════════════════════════════════════════

    logic        has_exception;
    logic [4:0]  exc_cause_sel;
    logic [31:0] exc_tval_sel;

    always_comb begin
        has_exception  = 1'b0;
        exc_cause_sel  = 5'h0;
        exc_tval_sel   = 32'h0;

        // 优先级 1: 取指异常 (最高)
        if (fetch_exc_valid) begin
            has_exception  = 1'b1;
            exc_cause_sel  = fetch_exc_cause;
            exc_tval_sel   = fetch_exc_tval;
        end
        // 优先级 2: 解码异常
        else if (decode_exc_valid) begin
            has_exception  = 1'b1;
            exc_cause_sel  = decode_exc_cause;
            exc_tval_sel   = decode_exc_tval;
        end
        // 优先级 3: 执行异常
        else if (exec_exc_valid) begin
            has_exception  = 1'b1;
            exc_cause_sel  = exec_exc_cause;
            exc_tval_sel   = exec_exc_tval;
        end
    end

    // ═══════════════════════════════════════════════════════════
    // Trap 决策 (同步异常 > NMI > 中断)
    // ═══════════════════════════════════════════════════════════

    // ── MIE 检查 (mstatus[3]) ──
    logic mie_enabled;
    assign mie_enabled = mstatus_in[3];

    // ── NMI 同步 (2-FF, 简化为直通) ──
    logic nmi_sync;
    assign nmi_sync = nmi_signal;

    // ── Trap PC 计算 ──
    logic [31:0] trap_target_m;   // M-mode trap PC
    logic [31:0] trap_target_s;   // S-mode trap PC

    always_comb begin
        // mtvec: BASE = mtvec[31:2]<<2, MODE = mtvec[1:0]
        // VECTORED: PC = BASE + 4 * cause_code (仅中断)
        if (mtvec_in[0] && has_exception == 1'b0) begin
            // Vectored mode + interrupt → BASE + 4 * cause
            trap_target_m = (mtvec_in & 32'hFFFF_FFFC) + {24'h0, exc_cause_sel, 2'b00};
        end else begin
            // Direct mode or exception → BASE
            trap_target_m = mtvec_in & 32'hFFFF_FFFC;
        end

        // stvec: 同样逻辑
        if (stvec_in[0] && has_exception == 1'b0) begin
            trap_target_s = (stvec_in & 32'hFFFF_FFFC) + {24'h0, exc_cause_sel, 2'b00};
        end else begin
            trap_target_s = stvec_in & 32'hFFFF_FFFC;
        end
    end

    // ── 委托判断 ──
    logic delegate_to_s;
    always_comb begin
        delegate_to_s = 1'b0;
        if (has_exception) begin
            // 同步异常委托: medeleg[cause]
            if (medeleg_in[exc_cause_sel] && priv_mode_in <= 2'b01) begin
                delegate_to_s = 1'b1;
            end
        end else if (irq_request) begin
            // 中断委托: mideleg[cause_code]
            if (mideleg_in[irq_id[4:0]] && priv_mode_in <= 2'b01) begin
                delegate_to_s = 1'b1;
            end
        end
    end

    // ═══════════════════════════════════════════════════════════
    // Trap 输出逻辑 (组合)
    // ═══════════════════════════════════════════════════════════

    // NMI 锁存 (防止丢失)
    logic nmi_latch;

    always_comb begin
        trap_take     = 1'b0;
        trap_pc       = trap_target_m;
        trap_cause      = 32'h0;
        trap_epc        = exc_pc;
        trap_tval       = 32'h0;
        trap_is_irq     = 1'b0;
        trap_enter      = 1'b0;
        mret_exec       = 1'b0;
        sret_exec       = 1'b0;
        nmi_enter_out   = 1'b0;
        mnret_exec_out  = 1'b0;
        delegated       = delegate_to_s;
        flush_pipe      = 1'b0;

        // ── MRET / SRET / MNRET (最高优先: 返回指令) ──
        if (is_mnret) begin
            trap_take     = 1'b1;
            trap_pc       = mnepc_in;  // 恢复到被中断 PC
            mnret_exec_out  = 1'b1;
            flush_pipe      = 1'b1;
        end else if (is_mret) begin
            trap_take  = 1'b1;
            trap_pc    = 32'h0; // CSR 单元提供 mepc
            mret_exec  = 1'b1;
            flush_pipe = 1'b1;
        end else if (is_sret) begin
            trap_take  = 1'b1;
            trap_pc    = 32'h0; // CSR 单元提供 sepc
            sret_exec  = 1'b1;
            flush_pipe = 1'b1;
        end
        // ── 同步异常 (优先于中断和 NMI) ──
        else if (has_exception) begin
            trap_take   = 1'b1;
            trap_cause  = {27'h0, exc_cause_sel};
            trap_epc    = exc_pc;
            trap_tval   = exc_tval_sel;
            trap_is_irq = 1'b0;
            trap_enter  = 1'b1;
            flush_pipe  = 1'b1;
            if (delegate_to_s)
                trap_pc = trap_target_s;
            else
                trap_pc = trap_target_m;
        end
        // ── NMI (优先于普通中断) ──
        else if (nmi_latch) begin
            trap_take     = 1'b1;
            trap_cause    = 32'h8000_0000; // NMI cause
            trap_epc      = exc_pc;        // 当前 PC
            trap_tval     = 32'h0;
            trap_is_irq   = 1'b1;
            nmi_enter_out = 1'b1;
            flush_pipe    = 1'b1;
            trap_pc     = trap_target_m; // NMI 用 M-mode 向量
        end
        // ── 普通中断 (最低优先) ──
        else if (irq_request && mie_enabled) begin
            trap_take   = 1'b1;
            trap_cause  = {24'h0, irq_id}; // cause code
            trap_epc    = exc_pc;          // 下一条指令 PC (当前已提交)
            trap_tval   = 32'h0;
            trap_is_irq = 1'b1;
            trap_enter  = 1'b1;
            flush_pipe  = 1'b1;
            if (delegate_to_s)
                trap_pc = trap_target_s;
            else
                trap_pc = trap_target_m;
        end
    end

    // ═══════════════════════════════════════════════════════════
    // NMI 锁存 (边沿检测, 防止丢失)
    // ═══════════════════════════════════════════════════════════
    logic nmi_prev;

    always_ff @(posedge clk_core or negedge reset_n) begin
        if (!reset_n) begin
            nmi_latch <= 1'b0;
            nmi_prev  <= 1'b0;
        end else begin
            nmi_prev <= nmi_sync;
            // 上升沿锁存, trap 处理或 mnret 时清除
            if (nmi_sync && !nmi_prev)
                nmi_latch <= 1'b1;
            else if (nmi_enter_out || mnret_exec_out)
                nmi_latch <= 1'b0;
        end
    end

    // ── IRQ 应答 ──
    assign irq_ack = trap_take && trap_is_irq && !nmi_enter_out;

endmodule
