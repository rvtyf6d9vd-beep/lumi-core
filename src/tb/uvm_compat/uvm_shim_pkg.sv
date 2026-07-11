// =================================================================
// LUMI-V1 | UVM Shim — 轻量 UVM 兼容宏与基类
// 注意: Verilator 5.048 不支持 --uvm, 此包提供 UVM 风格的 API:
//   `uvm_info / `uvm_warning / `uvm_error / `uvm_fatal
//   uvm_component / uvm_test / uvm_env / uvm_scoreboard / uvm_sequence
// 实际用 $display 替代 UVM reporting, 保留 UVM 类层次结构。
// =================================================================

package uvm_shim;

  // ─── 严重级别 ──────────────────────────────────────────────
  typedef enum int {
    UVM_NONE   = 0,
    UVM_LOW    = 100,
    UVM_MEDIUM = 200,
    UVM_HIGH   = 300,
    UVM_FULL   = 400,
    UVM_DEBUG  = 500
  } uvm_verbosity;

  typedef enum int {
    UVM_INFO    = 0,
    UVM_WARNING = 1,
    UVM_ERROR   = 2,
    UVM_FATAL   = 3
  } uvm_severity;

  // ─── 全局 Verbosity ────────────────────────────────────────
  uvm_verbosity global_verbosity = UVM_MEDIUM;

  // ─── 报告计数器 ────────────────────────────────────────────
  int unsigned uvm_info_count    = 0;
  int unsigned uvm_warning_count = 0;
  int unsigned uvm_error_count   = 0;
  int unsigned uvm_fatal_count   = 0;

  // ─── 报告函数 ──────────────────────────────────────────────
  function automatic void uvm_report(
    uvm_severity  sev,
    string        id,
    string        msg,
    uvm_verbosity verbosity = UVM_MEDIUM
  );
    if (verbosity > global_verbosity) return;
    case (sev)
      UVM_INFO: begin
        uvm_info_count++;
        $display("[UVM_INFO] %0s: %0s", id, msg);
      end
      UVM_WARNING: begin
        uvm_warning_count++;
        $display("[UVM_WARNING] %0s: %0s", id, msg);
      end
      UVM_ERROR: begin
        uvm_error_count++;
        $display("[UVM_ERROR] %0s: %0s", id, msg);
      end
      UVM_FATAL: begin
        uvm_fatal_count++;
        $display("[UVM_FATAL] %0s: %0s", id, msg);
        $finish(1);
      end
    endcase
  endfunction

  function automatic void uvm_report_summary();
    $display("===========================================");
    $display(" UVM Report Summary");
    $display("===========================================");
    $display(" Info:    %0d", uvm_info_count);
    $display(" Warning: %0d", uvm_warning_count);
    $display(" Error:   %0d", uvm_error_count);
    $display(" Fatal:   %0d", uvm_fatal_count);
    $display("===========================================");
  endfunction

  // ─── UVM 基类 ──────────────────────────────────────────────
  // uvm_object: 所有 UVM 对象的基类
  class uvm_object;
    string m_name;
    function new(string name = "");
      m_name = name;
    endfunction
    function string get_name();
      return m_name;
    endfunction
  endclass

  // uvm_component: 所有 UVM 组件的基类
  class uvm_component extends uvm_object;
    function new(string name = "");
      super.new(name);
    endfunction
    virtual function void build_phase(); endfunction
    virtual function void connect_phase(); endfunction
    virtual task run_phase(); endtask
    virtual function void report_phase(); endfunction
  endclass

  // uvm_test: 测试基类
  class uvm_test extends uvm_component;
    function new(string name = "");
      super.new(name);
    endfunction
  endclass

  // uvm_env: 环境基类
  class uvm_env extends uvm_component;
    function new(string name = "");
      super.new(name);
    endfunction
  endclass

  // uvm_scoreboard: 记分板基类
  class uvm_scoreboard extends uvm_component;
    function new(string name = "");
      super.new(name);
    endfunction
  endclass

  // uvm_monitor: 监视器基类
  class uvm_monitor extends uvm_component;
    function new(string name = "");
      super.new(name);
    endfunction
  endclass

  // uvm_sequence: 序列基类 (简化)
  class uvm_sequence extends uvm_object;
    function new(string name = "");
      super.new(name);
    endfunction
    virtual task body(); endtask
  endclass

endpackage

// ─── UVM 兼容宏 ──────────────────────────────────────────────
`define uvm_info(ID, MSG, VERB) \
  uvm_shim::uvm_report(uvm_shim::UVM_INFO, ID, MSG, VERB)

`define uvm_warning(ID, MSG) \
  uvm_shim::uvm_report(uvm_shim::UVM_WARNING, ID, MSG, uvm_shim::UVM_LOW)

`define uvm_error(ID, MSG) \
  uvm_shim::uvm_report(uvm_shim::UVM_ERROR, ID, MSG, uvm_shim::UVM_LOW)

`define uvm_fatal(ID, MSG) \
  uvm_shim::uvm_report(uvm_shim::UVM_FATAL, ID, MSG, uvm_shim::UVM_LOW)

`define UVM_LOW    uvm_shim::UVM_LOW
`define UVM_MEDIUM uvm_shim::UVM_MEDIUM
`define UVM_HIGH   uvm_shim::UVM_HIGH
`define UVM_FULL   uvm_shim::UVM_FULL
`define UVM_NONE   uvm_shim::UVM_NONE
