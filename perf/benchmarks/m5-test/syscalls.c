/* syscalls.c - Linux ABI syscall stubs for newlib (RISC-V64)
 *
 * These provide the minimum syscalls needed for gem5 SE mode.
 * gem5 SE mode handles RISC-V Linux syscalls via ecall.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

extern int errno;

/* Linux RISC-V syscall numbers */
#define __NR_read       63
#define __NR_write      64
#define __NR_close      57
#define __NR_fstat      80
#define __NR_exit       93
#define __NR_exit_group 94
#define __NR_brk        214
#define __NR_ioctl      29

static inline long syscall1(long nr, long a0) {
    register long _a0 asm("a0") = a0;
    register long _a7 asm("a7") = nr;
    asm volatile("ecall" : "+r"(_a0) : "r"(_a7) : "memory");
    return _a0;
}

static inline long syscall3(long nr, long a0, long a1, long a2) {
    register long _a0 asm("a0") = a0;
    register long _a1 asm("a1") = a1;
    register long _a2 asm("a2") = a2;
    register long _a7 asm("a7") = nr;
    asm volatile("ecall" : "+r"(_a0) : "r"(_a1), "r"(_a2), "r"(_a7) : "memory");
    return _a0;
}

/* newlib syscall stubs */

ssize_t _write(int fd, const void *buf, size_t count) {
    return syscall3(__NR_write, fd, (long)buf, count);
}

ssize_t _read(int fd, void *buf, size_t count) {
    return syscall3(__NR_read, fd, (long)buf, count);
}

int _close(int fd) {
    return syscall1(__NR_close, fd);
}

int _fstat(int fd, struct stat *st) {
    /* gem5 SE mode expects fstat to return with st_mode=S_IFCHR for stdout */
    st->st_mode = S_IFCHR;
    return 0;
}

int _isatty(int fd) {
    return (fd <= 2) ? 1 : 0;
}

int _lseek(int fd, off_t offset, int whence) {
    return 0;
}

void _exit(int code) {
    syscall1(__NR_exit, code);
    while (1) {}
}

void *_sbrk(int incr) {
    extern char end;
    static char *heap_end = 0;
    char *prev;

    if (heap_end == 0) {
        heap_end = &end;
    }
    prev = heap_end;

    /* Request more heap from kernel via brk syscall */
    char *new_heap = (char *)syscall1(__NR_brk, (long)(heap_end + incr));
    if (new_heap == (char *)-1) {
        errno = ENOMEM;
        return (void *)-1;
    }
    /* If brk returns 0 or didn't change, just use our own tracking */
    if (new_heap == 0 || new_heap == heap_end) {
        heap_end += incr;
    } else {
        heap_end = new_heap;
    }

    return prev;
}

int _getpid(void) {
    return 1;
}

int _kill(int pid, int sig) {
    errno = EINVAL;
    return -1;
}
