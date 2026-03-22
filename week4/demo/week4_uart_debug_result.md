# Week 4 UART Debug Result

## 项目名称
RT-Thread qemu-virt64-riscv UART 调试命令扩展

## 项目目标
在已有自定义 msh 命令模块基础上，进一步实现更贴近 BSP/驱动调试方向的 UART 查询和发送能力。

## 相关文件
- `week3/project-files/week3_demo.c`
- `week4/project-files/week4_uart_debug_demo.c`

## 本周新增能力

### 1. uart_regs
功能：
- 读取 UART0 的关键寄存器
- 输出：
  - IER
  - ISR
  - LCR
  - LSR

价值：
- 能将驱动初始化代码中的配置与运行时寄存器状态对应起来
- 更接近真实 BSP/驱动调试方式

### 2. uart_send_test
功能：
- 直接通过 UART 发送测试字符串

价值：
- 不只是读取状态，还验证了 UART 发送路径
- 说明能够利用寄存器轮询方式完成基本发送测试

## 验证方法
1. 修改 BSP 中的源码文件
2. 重新编译 BSP
3. 使用 `./run.sh` 启动 QEMU
4. 在 `msh />` 中执行：
   - `uart_regs`
   - `uart_send_test`

## 验证结果
- `uart_regs` 成功输出 UART 基地址和寄存器内容
- `uart_send_test` 成功输出：
  - `UART test from week4`

## 当前价值
这个阶段证明我已经具备：
- 基于 RT-Thread BSP 增量开发调试命令的能力
- 读取驱动相关寄存器状态的能力
- 使用 QEMU 验证 UART 发送路径的能力
- 将 shell 命令、BSP 驱动宏、寄存器状态和运行结果串起来分析的能力
