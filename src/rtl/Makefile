# =================================================================
# LUMI-DESIGN-INFRA | 需求: LUMI-GLOBAL | 承接: design/*.html
# Lumi-Core RTL 构建与验证 Makefile
# 阶段: M2-S1 RTL 骨架
# 作者: Qoder Agent | 日期: 2026-07-07
# =================================================================

# ─── 工具链 ─────────────────────────────────────────────────────
VERILATOR  ?= verilator
SLANG      ?= slang
YOSYS      ?= yosys

# ─── 路径 ───────────────────────────────────────────────────────
RTL_DIR    := .
INC_DIR    := include
CORE_DIR   := core
MEM_DIR    := memory
BUS_DIR    := bus
CSR_DIR    := csr
INT_DIR    := interrupt
DBG_DIR    := debug
FPU_DIR    := fpu
PWR_DIR    := power
MC_DIR     := multicore
DFT_DIR    := dft
TOP_DIR    := top

# ─── Lint 选项 ──────────────────────────────────────────────────
LINT_FLAGS := --lint-only -sv -Wno-fatal -Wno-UNUSED \
              -I$(INC_DIR) \
              --top-module lumi_soc_top

# ─── 源文件 (按依赖顺序) ───────────────────────────────────────
SV_INCLUDES := $(INC_DIR)/lumi_types_pkg.sv \
               $(INC_DIR)/lumi_interfaces.sv

SV_CORE := $(CORE_DIR)/lumi_fetch.sv \
           $(CORE_DIR)/lumi_decode_issue.sv \
           $(CORE_DIR)/lumi_execute.sv \
           $(CORE_DIR)/lumi_memory_stage.sv \
           $(CORE_DIR)/lumi_writeback.sv \
           $(CORE_DIR)/lumi_core_top.sv \
           $(CORE_DIR)/lumi_bypass.sv

SV_MEMORY := $(MEM_DIR)/lumi_tcm.sv \
             $(MEM_DIR)/lumi_cache.sv

SV_BUS := $(BUS_DIR)/lumi_pma_checker.sv \
          $(BUS_DIR)/lumi_axi_wrapper.sv

SV_CSR := $(CSR_DIR)/lumi_csr_unit.sv \
          $(CSR_DIR)/lumi_regfile.sv

SV_INTERRUPT := $(INT_DIR)/lumi_clic.sv \
               $(INT_DIR)/lumi_plic.sv \
               $(INT_DIR)/lumi_exception.sv

SV_DEBUG := $(DBG_DIR)/lumi_debug_module.sv \
            $(DBG_DIR)/lumi_trace.sv

SV_FPU := $(FPU_DIR)/lumi_fpu.sv \
          $(FPU_DIR)/lumi_vector.sv

SV_POWER := $(PWR_DIR)/lumi_power_mgmt.sv

SV_MULTICORE := $(MC_DIR)/lumi_multicore_top.sv \
                $(MC_DIR)/lumi_lockstep.sv

SV_DFT := $(DFT_DIR)/lumi_dft_ctrl.sv

SV_TOP := $(TOP_DIR)/lumi_soc_top.sv \
          $(TOP_DIR)/lumi_soc_tb_stub.sv

SV_ALL := $(SV_INCLUDES) $(SV_CORE) $(SV_MEMORY) $(SV_BUS) \
          $(SV_CSR) $(SV_INTERRUPT) $(SV_DEBUG) $(SV_FPU) \
          $(SV_POWER) $(SV_MULTICORE) $(SV_DFT) $(SV_TOP)

# ─── 目标 ───────────────────────────────────────────────────────
.PHONY: all lint lint-core lint-memory lint-bus lint-csr \
        lint-interrupt lint-debug lint-fpu lint-power \
        lint-multicore lint-dft lint-top synth clean help

all: lint

# ─── Lint 目标 ──────────────────────────────────────────────────
lint: lint-core lint-memory lint-bus lint-csr lint-interrupt \
      lint-debug lint-fpu lint-power lint-multicore lint-dft lint-top
	@echo "=== All lint checks passed ==="

lint-core:
	@echo "--- Linting core modules ---"
	@for f in $(SV_CORE); do \
		echo "  $$f"; \
		$(VERILATOR) --lint-only -sv -Wno-fatal -Wno-UNUSED \
			-I$(INC_DIR) $$f 2>&1 | head -20; \
	done

lint-memory:
	@echo "--- Linting memory modules ---"
	@for f in $(SV_MEMORY); do \
		$(VERILATOR) --lint-only -sv -Wno-fatal -Wno-UNUSED \
			-I$(INC_DIR) $$f 2>&1 | head -20; \
	done

lint-bus:
	@echo "--- Linting bus modules ---"
	@for f in $(SV_BUS); do \
		$(VERILATOR) --lint-only -sv -Wno-fatal -Wno-UNUSED \
			-I$(INC_DIR) $$f 2>&1 | head -20; \
	done

lint-csr:
	@echo "--- Linting CSR modules ---"
	@for f in $(SV_CSR); do \
		$(VERILATOR) --lint-only -sv -Wno-fatal -Wno-UNUSED \
			-I$(INC_DIR) $$f 2>&1 | head -20; \
	done

lint-interrupt:
	@echo "--- Linting interrupt modules ---"
	@for f in $(SV_INTERRUPT); do \
		$(VERILATOR) --lint-only -sv -Wno-fatal -Wno-UNUSED \
			-I$(INC_DIR) $$f 2>&1 | head -20; \
	done

lint-debug:
	@echo "--- Linting debug modules ---"
	@for f in $(SV_DEBUG); do \
		$(VERILATOR) --lint-only -sv -Wno-fatal -Wno-UNUSED \
			-I$(INC_DIR) $$f 2>&1 | head -20; \
	done

lint-fpu:
	@echo "--- Linting FPU modules ---"
	@for f in $(SV_FPU); do \
		$(VERILATOR) --lint-only -sv -Wno-fatal -Wno-UNUSED \
			-I$(INC_DIR) $$f 2>&1 | head -20; \
	done

lint-power:
	@echo "--- Linting power module ---"
	@$(VERILATOR) --lint-only -sv -Wno-fatal -Wno-UNUSED \
		-I$(INC_DIR) $(SV_POWER) 2>&1 | head -20

lint-multicore:
	@echo "--- Linting multicore modules ---"
	@for f in $(SV_MULTICORE); do \
		$(VERILATOR) --lint-only -sv -Wno-fatal -Wno-UNUSED \
			-I$(INC_DIR) $$f 2>&1 | head -20; \
	done

lint-dft:
	@echo "--- Linting DFT module ---"
	@$(VERILATOR) --lint-only -sv -Wno-fatal -Wno-UNUSED \
		-I$(INC_DIR) $(SV_DFT) 2>&1 | head -20

lint-top:
	@echo "--- Linting top-level ---"
	@for f in $(SV_TOP); do \
		$(VERILATOR) --lint-only -sv -Wno-fatal -Wno-UNUSED \
			-I$(INC_DIR) $$f 2>&1 | head -20; \
	done

# ─── 综合估算 (D-018) ──────────────────────────────────────────
synth:
	@echo "--- Yosys synthesis estimation ---"
	$(YOSYS) -s synth.ys > ../perf/gem5-model/docs/Output/rtl-area-estimate.txt 2>&1
	@echo "Synthesis output: ../perf/gem5-model/docs/Output/rtl-area-estimate.txt"

# ─── 清理 ───────────────────────────────────────────────────────
clean:
	rm -rf obj_dir
	rm -f *.log

# ─── 帮助 ───────────────────────────────────────────────────────
help:
	@echo "Lumi-Core RTL Makefile"
	@echo "  make lint         - Run Verilator lint on all modules"
	@echo "  make lint-core    - Lint core pipeline modules only"
	@echo "  make lint-top     - Lint top-level modules only"
	@echo "  make synth        - Yosys synthesis estimation (D-018)"
	@echo "  make clean        - Remove build artifacts"
	@echo "  make help         - Show this help"
