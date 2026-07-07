# Makefile for Dhrystone RISC-V bare-metal port (gem5 SE mode)
#
# Usage:
#   make                       # Build with default settings
#   make NUMBER_OF_RUNS=1000   # More runs for better statistics
#   make clean

CROSS   ?= riscv64-unknown-elf-
CC       = $(CROSS)gcc

ARCH    ?= rv64im
ABI     ?= lp64

# Optimization: -O2 -funroll-loops (Phase 8: loop unrolling exposes more ILP)
OPT      = -O2 -funroll-loops

# Paths
LIBC_DIR = ../libc
GEM5_DIR = ../../gem5-model/gem5

# Number of runs (default 500, increase for better statistics)
NUMBER_OF_RUNS ?= 500

FLAGS_STR = "$(OPT) -march=$(ARCH) -mabi=$(ABI) -ffreestanding"

CFLAGS = $(OPT) -march=$(ARCH) -mabi=$(ABI) -ffreestanding -fno-builtin \
         -Wall -Wextra -Wno-unused-parameter -Wno-implicit-fallthrough \
         -Wno-implicit-function-declaration \
         -I. -I$(LIBC_DIR) \
         -DNUMBER_OF_RUNS=$(NUMBER_OF_RUNS) \
         -DFLAGS_STR=\"$(FLAGS_STR)\"

LDFLAGS = -nostdlib -T $(LIBC_DIR)/$(if $(findstring ilp32,$(ABI)),lumi-se-rv32.ld,lumi-se.ld)
LDLIBS  = $(LIBC_DIR)/libmini.a

# Source files
SRCS = dhrystone.c m5_stubs.c
OBJS = $(SRCS:.c=.o)

LIBC_CRT0 = $(LIBC_DIR)/crt0.o

TARGET = dhrystone.riscv

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(LIBC_CRT0) $(OBJS) $(LIBC_DIR)/libmini.a
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(LDLIBS) -lgcc

%.o: %.c dhrystone.h lumi_dhry_port.h
	$(CC) $(CFLAGS) -c $< -o $@

# Ensure mini_libc and libm5 are built
$(LIBC_DIR)/libmini.a:
	$(MAKE) -C $(LIBC_DIR) all

$(GEM5_DIR)/libm5.a:
	$(MAKE) -C $(LIBC_DIR) m5

clean:
	rm -f $(OBJS) $(TARGET) dhrystone.riscv.*
