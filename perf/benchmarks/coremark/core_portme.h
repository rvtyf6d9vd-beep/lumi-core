/* core_portme.h - CoreMark RISC-V bare-metal port for gem5 SE mode
 *
 * Based on EEMBC barebones template.
 * Uses mini_libc + m5 instructions for timing.
 */
#ifndef CORE_PORTME_H
#define CORE_PORTME_H

/************************/
/* Data types and settings */
/************************/

/* Configuration flags */
#ifndef HAS_FLOAT
#define HAS_FLOAT 0    /* No FP in bare-metal; CM/MHz computed externally */
#endif
#ifndef HAS_TIME_H
#define HAS_TIME_H 0
#endif
#ifndef USE_CLOCK
#define USE_CLOCK 0
#endif
#ifndef HAS_STDIO
#define HAS_STDIO 0
#endif
#ifndef HAS_PRINTF
#define HAS_PRINTF 0   /* Use ee_printf from barebones */
#endif

/* Compiler info */
#ifndef COMPILER_VERSION
#ifdef __GNUC__
#define COMPILER_VERSION "GCC " __VERSION__
#else
#define COMPILER_VERSION "riscv64-unknown-elf-gcc"
#endif
#endif
#ifndef COMPILER_FLAGS
#define COMPILER_FLAGS FLAGS_STR
#endif
#ifndef MEM_LOCATION
#define MEM_LOCATION "STATIC"
#endif

/* Data types for RISC-V 64-bit */
typedef signed short   ee_s16;
typedef unsigned short ee_u16;
typedef signed int     ee_s32;
typedef unsigned int   ee_u32;
typedef double         ee_f32;
typedef unsigned char  ee_u8;
typedef unsigned long  ee_ptr_int;  /* 64-bit pointer holder */
typedef unsigned long  ee_size_t;

#ifndef NULL
#define NULL ((void *)0)
#endif

/* align_mem: align to 64-bit boundary */
#define align_mem(x) (void *)(((ee_ptr_int)(x) + 7) & ~7)

/* Timing: use rdcycle CSR (returns CPU cycles) */
#define CORETIMETYPE ee_u32
typedef ee_u32 CORE_TICKS;

/* Seed method: volatile (no command-line or system functions) */
#ifndef SEED_METHOD
#define SEED_METHOD SEED_VOLATILE
#endif

/* Memory method: static allocation (avoids malloc issues) */
#ifndef MEM_METHOD
#define MEM_METHOD MEM_STATIC
#endif

/* Single-threaded */
#ifndef MULTITHREAD
#define MULTITHREAD 1
#define USE_PTHREAD 0
#define USE_FORK    0
#define USE_SOCKET  0
#endif

/* main() support */
#ifndef MAIN_HAS_NOARGC
#define MAIN_HAS_NOARGC 0  /* Our crt0 passes argc=0 */
#endif
#ifndef MAIN_HAS_NORETURN
#define MAIN_HAS_NORETURN 0
#endif

extern ee_u32 default_num_contexts;

typedef struct CORE_PORTABLE_S {
    ee_u8 portable_id;
} core_portable;

void portable_init(core_portable *p, int *argc, char *argv[]);
void portable_fini(core_portable *p);

/* Run type selection */
#if !defined(PROFILE_RUN) && !defined(PERFORMANCE_RUN) && !defined(VALIDATION_RUN)
#if (TOTAL_DATA_SIZE == 1200)
#define PROFILE_RUN 1
#elif (TOTAL_DATA_SIZE == 2000)
#define PERFORMANCE_RUN 1
#else
#define VALIDATION_RUN 1
#endif
#endif

/* ee_printf declaration (provided by ee_printf.c) */
int ee_printf(const char *fmt, ...);

#endif /* CORE_PORTME_H */
