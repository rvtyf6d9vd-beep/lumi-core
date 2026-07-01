# Makefile for mini_libc - minimal C library for bare-metal RISC-V benchmarks
# Builds a static library (libmini.a) that can be linked with benchmarks.

CROSS ?= riscv64-unknown-elf-
CC = $(CROSS)gcc
AR = $(CROSS)ar

ARCH ?= rv64im
ABI  ?= lp64

CFLAGS = -O2 -march=$(ARCH) -mabi=$(ABI) -ffreestanding -fno-builtin \
         -Wall -Wextra -Wno-unused-parameter

SRCS = mini_string.c mini_malloc.c mini_stdio.c mini_time.c
OBJS = $(SRCS:.c=.o)

# Startup code (linked separately, not part of the library)
CRT0 = crt0.o

# Linker script
LDSCRIPT = lumi-se.ld

# m5 library (from gem5)
GEM5_ROOT ?= ../../gem5-model/gem5
LIBM5 = $(GEM5_ROOT)/libm5.a

TARGET = libmini.a

.PHONY: all clean m5

all: $(TARGET) $(CRT0)

$(TARGET): $(OBJS)
	$(AR) rcs $@ $^

%.o: %.c mini_libc.h
	$(CC) $(CFLAGS) -c $< -o $@

crt0.o: crt0.S
	$(CC) -march=$(ARCH) -mabi=$(ABI) -c $< -o $@

m5: $(LIBM5)

$(LIBM5):
	@echo "Building libm5.a from gem5 sources..."
	cd $(GEM5_ROOT) && \
	$(CC) -c -march=$(ARCH) -mabi=$(ABI) -I include \
		-x assembler-with-cpp util/m5/src/abi/riscv/m5op.S -o m5op.o && \
	$(AR) rcs libm5.a m5op.o

clean:
	rm -f $(OBJS) $(CRT0) $(TARGET)
