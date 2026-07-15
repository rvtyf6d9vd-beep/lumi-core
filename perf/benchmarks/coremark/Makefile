# Makefile for CoreMark RISC-V bare-metal port (gem5 SE mode)
#
# Usage:
#   make                    # Build with default settings (performance run)
#   make TOTAL_DATA_SIZE=2000  # Performance run
#   make TOTAL_DATA_SIZE=1200  # Profile run
#   make clean

CROSS   ?= riscv64-unknown-elf-
CC       = $(CROSS)gcc

ARCH    ?= rv32imac
ABI     ?= ilp32

# Optimization: -O2 -funroll-loops (Phase 8: loop unrolling exposes more ILP for in-order)
OPT      = -O2 -funroll-loops

# Paths
LIBC_DIR = ../libc
GEM5_DIR = ../../gem5-model/gem5

# CoreMark flags
FLAGS_STR = "$(OPT) -march=$(ARCH) -mabi=$(ABI) -ffreestanding"
PORT_DIR  = .

# Total data size (determines run type)
# 2000 = PERFORMANCE_RUN (for CM/MHz reporting)
# 1200 = PROFILE_RUN
# other = VALIDATION_RUN
TOTAL_DATA_SIZE ?= 2000

# 分阶段迭代配置 (默认保持 50, 调试时显式使用 quick/full):
#   make quick              → ITERATIONS=1, 快速 CRC 校验
#   make full               → ITERATIONS=15, 中等迭代回归验证
#   make eembc              → ITERATIONS=50, 正式 EEMBC 跑分
ITERATIONS ?= 50

CFLAGS = $(OPT) -march=$(ARCH) -mabi=$(ABI) -ffreestanding -fno-builtin \
         -Wall -Wextra -Wno-unused-parameter -Wno-implicit-fallthrough \
         -I. -DPERFORMANCE_RUN=1 -DGEM5_SIMULATION \
         -DTOTAL_DATA_SIZE=$(TOTAL_DATA_SIZE) \
         -DITERATIONS=$(ITERATIONS) \
         -DFLAGS_STR=\"$(FLAGS_STR)\" \
         -DHAS_FLOAT=0 -DHAS_TIME_H=0 -DUSE_CLOCK=0 \
         -DHAS_STDIO=0 -DHAS_PRINTF=0 \
         -DSEED_METHOD=SEED_VOLATILE \
         -DMEM_METHOD=MEM_STATIC \
         -DMULTITHREAD=1

# libm5.a is RV64 only; skip for RV32 builds
IS_RV64 = $(findstring rv64,$(ARCH))
M5_LIB  = $(if $(IS_RV64),$(GEM5_DIR)/libm5.a,)

LDFLAGS = -nostdlib -T $(LIBC_DIR)/$(if $(findstring ilp32,$(ABI)),lumi-se-rv32.ld,lumi-se.ld)
LDLIBS  = $(LIBC_DIR)/libmini.a $(M5_LIB)

# Source files
CORE_SRCS = core_main.c core_list_join.c core_matrix.c core_state.c core_util.c
PORT_SRCS = core_portme.c ee_printf.c
LIBC_CRT0 = $(LIBC_DIR)/crt0.o

ALL_SRCS = $(CORE_SRCS) $(PORT_SRCS)
OBJS     = $(ALL_SRCS:.c=.o)

TARGET = coremark.riscv

.PHONY: all clean quick full eembc

all: $(TARGET)

# 分阶段快捷 targets
quick:
	@$(MAKE) ITERATIONS=1 TOTAL_DATA_SIZE=2000

full:
	@$(MAKE) ITERATIONS=15 TOTAL_DATA_SIZE=2000

eembc:
	@$(MAKE) ITERATIONS=50 TOTAL_DATA_SIZE=2000

$(TARGET): $(LIBC_CRT0) $(OBJS) $(LIBC_DIR)/libmini.a
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(LDLIBS) -lgcc

%.o: %.c coremark.h core_portme.h
	$(CC) $(CFLAGS) -c $< -o $@

# Ensure mini_libc is built
$(LIBC_DIR)/libmini.a:
	$(MAKE) -C $(LIBC_DIR) all

clean:
	rm -f $(OBJS) $(TARGET) coremark.riscv.*
