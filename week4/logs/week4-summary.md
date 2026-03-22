# Week 4 Summary

## 本周完成内容
- 在已有 `week3_demo.c` 的基础上继续扩展 UART 相关调试命令
- 新增并验证了：
  - `uart_regs`
  - `uart_send_test`
- 在 QEMU 中成功读取 UART 关键寄存器：
  - IER
  - ISR
  - LCR
  - LSR
- 在 QEMU 中成功验证 UART 主动发送测试字符串

## 本周关键结果
- `uart_regs` 能稳定输出 UART0 基地址和寄存器内容
- `uart_send_test` 能稳定输出测试字符串
- 当前实验已经从“自定义 shell 命令”推进到“简单驱动状态读取与发送路径验证”

## 当前理解
- UART 调试类命令可以作为 BSP 实验中很实用的辅助工具
- 读取寄存器状态有助于把驱动初始化代码和运行时状态对应起来
- 发送测试命令能够帮助确认 UART 发送路径是否正常

## 当前阶段结果
- 已经可以围绕 RT-Thread BSP 做基础构建、运行、命令扩展和 UART 调试实验
