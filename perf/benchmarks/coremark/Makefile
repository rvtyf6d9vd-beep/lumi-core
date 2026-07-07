# Makefile for CoreMark RISC-V bare-metal port (gem5 SE mode)
#
# Usage:
#   make                    # Build with default settings (performance run)
#   make TOTAL_DATA_SIZE=2000  # Performance run
#   make TOTAL_DATA_SIZE=1200  # Profile run
#   make clean

CROSS   ?= riscv64-unknown-elf-
CC       = $(CROSS)gcc

ARCH    ?= rv64im
ABI     ?= lp64

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

LDFLAGS = -nostdlib -T $(LIBC_DIR)/$(if $(findstring ilp32,$(ABI)),lumi-se-rv32.ld,lumi-se.ld)
LDLIBS  = $(LIBC_DIR)/libmini.a $(GEM5_DIR)/libm5.a

# Source files
CORE_SRCS = core_main.c core_list_join.c core_matrix.c core_state.c core_util.c
PORT_SRCS = core_portme.c ee_printf.c
LIBC_CRT0 = $(LIBC_DIR)/crt0.o

ALL_SRCS = $(CORE_SRCS) $(PORT_SRCS)
OBJS     = $(ALL_SRCS:.c=.o)

TARGET = coremark.riscv

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(LIBC_CRT0) $(OBJS) $(LIBC_DIR)/libmini.a $(GEM5_DIR)/libm5.a
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(LDLIBS) -lgcc

%.o: %.c coremark.h core_portme.h
	$(CC) $(CFLAGS) -c $< -o $@

# Ensure mini_libc and libm5 are built
$(LIBC_DIR)/libmini.a:
	$(MAKE) -C $(LIBC_DIR) all

$(GEM5_DIR)/libm5.a:
	$(MAKE) -C $(LIBC_DIR) m5

clean:
	rm -f $(OBJS) $(TARGET) coremark.riscv.*
