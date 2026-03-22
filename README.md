# RT-Thread RISC-V Learning

这个仓库记录了我围绕 RT-Thread、RISC-V、QEMU、BSP 与基础系统开发所做的一系列学习与实验。

目前内容以按周推进的方式整理，包含：
- 基础工具与 C 语言练习
- RT-Thread `qemu-virt64-riscv` BSP 的构建与运行
- 基于 `msh` 的自定义命令实验
- 面向 UART 的简单调试命令扩展

## 仓库结构

- `week1/`
  - Linux/C/Git/Makefile/readelf/objdump/gdb 基础
- `week2/`
  - RT-Thread `qemu-virt64-riscv` BSP 的构建、运行、日志和笔记
- `week3/`
  - 自定义 `msh` 命令模块实验
  - 包含真实 C 源码文件与 QEMU 验证记录
- `week4/`
  - UART 调试命令扩展
  - 包含寄存器读取与发送路径验证

## 当前进展

### Week 1
完成了基础工具和最小 C 项目练习：
- 命令行参数解析
- 文件读写
- 结构体与指针
- Makefile 入门
- readelf / objdump / gdb 基础使用

### Week 2
完成了 RT-Thread `qemu-virt64-riscv` BSP 的：
- 环境配置
- 依赖补齐
- `menuconfig`
- 交叉编译
- QEMU 启动
- `msh` 基本验证

### Week 3
在 BSP 的 `applications/` 目录下新增了真实源码文件 `week3_demo.c`，并实现了：
- `hello_week3`
- `show_build_info`
- `mem_info_simple`
- `uart_status`

### Week 4
继续扩展调试命令，新增：
- `uart_regs`
- `uart_send_test`

并完成了：
- UART 关键寄存器读取
- UART 发送路径验证
- QEMU 运行结果观察


## 代表性文件

- `week3/project-files/week3_demo.c`
- `week4/project-files/week4_uart_debug_demo.c`
- `week3/demo/week3_demo_result.md`
- `week4/demo/week4_uart_debug_result.md`
- `week2/logs/day2.md`

## 说明

这里的内容以“逐步搭建、逐步验证、逐步记录”为主。  
每一周都尽量保留了：
- 真实代码
- 构建与运行记录
- 问题与处理过程
- 阶段性总结
