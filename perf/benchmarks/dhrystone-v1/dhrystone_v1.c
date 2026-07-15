/* dhrystone_v1.c — Dhrystone V1 wrapper
 *
 * 通过预定义 _LUMI_DHRY_PORT_H 阻止原版 port header 被包含，
 * 然后 #include 原版 dhrystone.c (重命名 main)。
 * V1 main() 调用原版，原版最终调用 write_tohost(0) 写结果并退出。
 *
 * T-MS3-S1-7
 */

/* 阻止原版 lumi_dhry_port.h 被 dhrystone.h 包含 */
#define _LUMI_DHRY_PORT_H
#include "lumi_dhry_v1_port.h"

/* 重命名原版 main 避免冲突 */
#define main dhrystone_orig_main
#include "../dhrystone/dhrystone.c"
#undef main

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;
    return dhrystone_orig_main(0, (char **)0);
}
