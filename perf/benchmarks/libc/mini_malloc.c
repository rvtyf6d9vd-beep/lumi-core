/* mini_malloc.c - Simple bump allocator for bare-metal benchmarks
 *
 * malloc: allocates from a fixed heap (bump allocator)
 * free: no-op (benchmarks don't need real free)
 * calloc: zero-initializing allocation
 *
 * The heap starts at the 'end' symbol (linker-provided) and grows
 * via brk() syscall to the kernel (gem5 SE mode).
 */

#include "mini_libc.h"

/* Linux RISC-V brk syscall number */
#define __NR_brk 214

static inline long sys_brk(unsigned long addr) {
    register long a0 __asm__("a0") = (long)addr;
    register long a7 __asm__("a7") = __NR_brk;
    __asm__ volatile("ecall" : "+r"(a0) : "r"(a7) : "memory");
    return a0;
}

/* Heap state */
static char *heap_ptr = 0;
static char *heap_end = 0;

static void heap_init(void) {
    extern char end;
    heap_ptr = &end;
    /* Align to 16 bytes */
    heap_ptr = (char *)(((unsigned long)heap_ptr + 15) & ~15UL);
    /* Initial brk: request 1MB */
    heap_end = (char *)sys_brk((unsigned long)heap_ptr + 1024 * 1024);
    if (heap_end == 0 || (unsigned long)heap_end < (unsigned long)heap_ptr) {
        heap_end = heap_ptr + 1024 * 1024;  /* Assume success */
    }
}

/* Align allocation to 16 bytes */
void *malloc(size_t size) {
    if (size == 0) return (void *)0;

    if (!heap_ptr) heap_init();

    /* Align size to 16 bytes */
    size = (size + 15) & ~15UL;

    /* Check if we need more heap */
    if (heap_ptr + size > heap_end) {
        char *new_end = (char *)sys_brk((unsigned long)(heap_ptr + size + 4096));
        if (new_end == 0 || (unsigned long)new_end < (unsigned long)(heap_ptr + size)) {
            return (void *)0;  /* Out of memory */
        }
        heap_end = new_end;
    }

    void *ptr = heap_ptr;
    heap_ptr += size;
    return ptr;
}

void free(void *ptr) {
    /* Bump allocator: no-op */
    (void)ptr;
}

void *calloc(size_t nmemb, size_t size) {
    size_t total = nmemb * size;
    void *ptr = malloc(total);
    if (ptr) memset(ptr, 0, total);
    return ptr;
}
