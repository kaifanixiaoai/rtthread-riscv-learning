#include <rtthread.h>
#include <rthw.h>
#include <finsh.h>
#include "drv_uart.h"

static void hello_week3(void)
{
    rt_kprintf("Hello from week3 demo on qemu-virt64-riscv!\n");
    rt_kprintf("Author: Zhang Lei\n");
}
MSH_CMD_EXPORT(hello_week3, say hello from week3 demo);

static void show_build_info(void)
{
    rt_kprintf("Board: qemu-virt64-riscv\n");
    rt_kprintf("Arch : RISC-V 64\n");
    rt_kprintf("Build: %s %s\n", __DATE__, __TIME__);
}
MSH_CMD_EXPORT(show_build_info, show simple build information);

static void mem_info_simple(void)
{
#ifdef RT_USING_HEAP
    rt_kprintf("Heap is enabled.\n");
#else
    rt_kprintf("Heap is not enabled.\n");
#endif

    rt_kprintf("Use built-in msh commands for more info:\n");
    rt_kprintf("  free   -> show memory usage\n");
    rt_kprintf("  ps     -> show thread status\n");
}
MSH_CMD_EXPORT(mem_info_simple, show simple memory hint);

static void uart_status(void)
{
    rt_uint8_t lsr = read8_uart0(UART_LSR);

    rt_kprintf("UART0 base : %p\n", uart0_base);
    rt_kprintf("UART_LSR   : 0x%02x\n", lsr);

    if (lsr & UART_LSR_RX_READY)
        rt_kprintf("RX status  : data ready\n");
    else
        rt_kprintf("RX status  : no data\n");

    if (lsr & UART_LSR_TX_IDLE)
        rt_kprintf("TX status  : ready\n");
    else
        rt_kprintf("TX status  : busy\n");
}
MSH_CMD_EXPORT(uart_status, show uart line status register);
