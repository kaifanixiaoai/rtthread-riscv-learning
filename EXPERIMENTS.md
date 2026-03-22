# Experiments

## RT-Thread qemu-virt64-riscv BSP
已完成：
- `scons --menuconfig`
- `scons -j$(nproc)`
- `./run.sh`
- `msh` 基本命令验证

## 自定义 msh 命令
已完成：
- `hello_week3`
- `show_build_info`
- `mem_info_simple`

验证方式：
- QEMU 启动后在 `msh />` 中直接执行命令
- 观察输出内容是否符合预期

## UART 调试命令
已完成：
- `uart_status`
- `uart_regs`
- `uart_send_test`

验证方式：
- 读取 UART 寄存器值
- 对照驱动中已有宏定义解释状态
- 主动发送测试字符串并观察终端输出
