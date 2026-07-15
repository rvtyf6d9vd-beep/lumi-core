# Makefile for CoreMark V1 — Verilator RTL 仿真
#
# T-MS3-S1-7: CoreMark/Dhrystone V1 RTL 仿真
#
# 与 gem5 版的区别:
#   - ARCH: rv32ima (无 C 扩展, 避开 ERR-010)
#   - 链接: lumi-v1-bench.ld (TCM 0x0) + crt0_v1.S + v1_lib.c
#   - 编译: 定义 GEM5_SIMULATION 使 core_main.c 计算 CM/MHz
#   - ee_printf: 拦截捕获数据 (无 I/O ECALL)
#   - _exit: 写结果到 0x3FFE0 后 ECALL 退出

CROSS   ?= riscv64-unknown-elf-
CC       = $(CROSS)gcc

ARCH    ?= rv32imac
ABI     ?= ilp32

OPT      = -O2 -funroll-loops

# Paths
LIBC_DIR = ../libc
CORE_DIR = ../coremark
V1_DIR   = .
TB_DIR   = ../../../src/tb
ELF2HEX  = python3 ../../../tests/scripts/elf2hex.py

# CoreMark flags
FLAGS_STR = "$(OPT) -march=$(ARCH) -mabi=$(ABI) -ffreestanding"

TOTAL_DATA_SIZE ?= 2000
ITERATIONS ?= 50

CFLAGS = $(OPT) -march=$(ARCH) -mabi=$(ABI) -ffreestanding -fno-builtin \
         -Wall -Wextra -Wno-unused-parameter -Wno-implicit-fallthrough \
         -Wno-unused-function -Wno-unused-variable \
         -I$(CORE_DIR) -I$(V1_DIR) \
         -DPERFORMANCE_RUN=1 -DGEM5_SIMULATION \
         -DTOTAL_DATA_SIZE=$(TOTAL_DATA_SIZE) \
         -DITERATIONS=$(ITERATIONS) \
         -DFLAGS_STR=\"$(FLAGS_STR)\" \
         -DHAS_FLOAT=0 -DHAS_TIME_H=0 -DUSE_CLOCK=0 \
         -DHAS_STDIO=0 -DHAS_PRINTF=0 \
         -DSEED_METHOD=SEED_VOLATILE \
         -DMEM_METHOD=MEM_STATIC \
         -DMULTITHREAD=1

# Linker: V1 TCM at 0x0
LDFLAGS = -nostdlib -T $(LIBC_DIR)/lumi-v1-bench.ld

# Source files
# coremark_v1_main.c: provides ee_printf, _exit, main (includes original core_main.c)
# core_portme_v1.c:   provides timing, seeds, portable_init/fini
# v1_lib.c:           provides string/memory/stdio(no-op)/heap/timing
CORE_SRCS = $(CORE_DIR)/core_list_join.c \
            $(CORE_DIR)/core_matrix.c \
            $(CORE_DIR)/core_state.c \
            $(CORE_DIR)/core_util.c

V1_SRCS = $(V1_DIR)/coremark_v1_main.c \
          $(V1_DIR)/core_portme_v1.c \
          $(LIBC_DIR)/v1_lib.c

CRT0 = $(LIBC_DIR)/crt0_v1.S

ALL_SRCS = $(CORE_SRCS) $(V1_SRCS)
OBJS     = $(ALL_SRCS:.c=.o) $(CRT0:.S=.o)

TARGET = coremark-v1.riscv
HEX    = coremark-v1_32.hex

.PHONY: all clean hex

all: $(TARGET)

hex: $(HEX)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ -lgcc

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.S
	$(CC) $(CFLAGS) -c $< -o $@

$(HEX): $(TARGET)
	$(ELF2HEX) $(TARGET) $(HEX) --base-addr 0x0 --mem-size 0x40000 --word-width 32
	@echo "[CoreMark-V1] Hex image: $(HEX)"

clean:
	rm -f $(OBJS) $(TARGET) $(HEX)
