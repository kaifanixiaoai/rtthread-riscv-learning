# Day 1

## 今天完成了什么
- 继续扩展 RT-Thread `qemu-virt64-riscv` BSP 中的自定义 msh 命令模块
- 新增并验证了 `uart_regs` 命令
- 新增并验证了 `uart_send_test` 命令
- 通过 QEMU 成功观察 UART 寄存器状态和主动发送测试字符串的结果

## 本次新增命令

### uart_regs
功能：
- 读取并打印 UART 关键寄存器：
  - IER
  - ISR
  - LCR
  - LSR

验证结果：
- 成功输出 UART0 基地址和多个寄存器值
- `LCR = 0x03`
- `LSR = 0x60`

### uart_send_test
功能：
- 通过 UART 发送一段测试字符串

验证结果：
- 在 `msh />` 中执行后成功输出：
  - `UART test from week4`

## 当前理解
- 现在已经不仅能通过 shell 注册命令，还能通过命令直接读取 UART 相关寄存器
- `uart_send_test` 复用了 UART 发送路径，验证了寄存器轮询发送逻辑
- 这个方向已经比普通应用层命令更接近 BSP/驱动调试

## 下一步
- 整理第 4 周项目说明
- 更新仓库 README
- 编写 week4 总结
