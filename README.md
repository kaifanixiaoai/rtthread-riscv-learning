# RT-Thread RISC-V Learning

这个仓库用于记录我围绕 RT-Thread、RISC-V、QEMU、BSP 和 Linux 系统开发的学习过程。

## 当前目标
- 学习 RT-Thread BSP 的基本结构
- 学习 RISC-V QEMU BSP 的构建和运行

## 仓库结构
- `week1/`：Linux/C/Git/Makefile/readelf/objdump/gdb 基础
- `week2/`：RT-Thread `qemu-virt64-riscv` BSP 的构建、运行、日志和笔记
- `week3/`：自定义 msh 命令模块实战，包含真实 C 项目文件和 QEMU 验证结果
- `week4/`：预留

## 当前进展
- 已完成第 1 周基础训练
- 已完成第 2 周 RT-Thread RISC-V QEMU BSP 的构建与运行验证
- 已完成第 3 周实战项目：
  - 在 RT-Thread BSP 中新增真实源码文件 `week3_demo.c`
  - 实现并验证多个自定义 msh 命令
  - 完成一次更贴近 BSP/驱动方向的 UART 状态读取实验

## 代表性成果
- `week3/project-files/week3_demo.c`
- `week2/logs/day2.md`
- `week3/demo/week3_demo_result.md`
