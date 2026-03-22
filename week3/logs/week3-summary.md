# Week 3 Summary

## 本周完成内容
- 在 RT-Thread `qemu-virt64-riscv` BSP 的 `applications/` 目录下新增了真实源码文件 `week3_demo.c`
- 实现并验证了 4 个自定义 msh 命令：
  - `hello_week3`
  - `show_build_info`
  - `mem_info_simple`
  - `uart_status`
- 重新编译 BSP 并成功生成镜像
- 使用 QEMU 启动 RT-Thread 系统
- 在 `msh />` 中成功验证命令可用
- 通过 `uart_status` 读取 UART 状态寄存器，开始接触更贴近 BSP/驱动方向的调试方式

## 本周关键成果
- 学会了在 RT-Thread BSP 中新增真实 C 源码文件
- 学会了使用 `MSH_CMD_EXPORT` 注册 shell 命令
- 学会了重新编译 BSP 并验证改动是否生效
- 学会了读取 UART 寄存器状态并解释结果
- 将真实项目文件同步到了自己的学习仓库中

## 验证结果
### 自定义命令
- `hello_week3`：成功输出自定义欢迎信息
- `show_build_info`：成功输出 BSP 名称、架构和编译时间
- `mem_info_simple`：成功输出 heap 状态提示
- `uart_status`：成功输出 UART 基地址和 LSR 状态

### 系统状态辅助验证
- `free`：成功显示系统内存使用情况
- `ps`：成功显示线程状态


## 当前理解
- `applications/` 目录下新增的源码文件会被 BSP 构建系统自动纳入编译
- RT-Thread 的 shell 命令可以通过 `MSH_CMD_EXPORT` 机制注册
- `drv_uart.h` 中的寄存器定义和读写宏可以用于实现基本的硬件状态查询
- QEMU + RT-Thread BSP 是一个很适合做最小系统/BSP实验的平台

## 当前阶段结论
我已经能够：
- 阅读并理解 RT-Thread BSP 的基本结构
- 在 BSP 中新增真实功能代码
- 使用交叉工具链重新编译 RISC-V 镜像
- 在 QEMU 中运行并验证改动
- 做最基础的 BSP/驱动方向寄存器状态调试

## 下周计划
- 继续做更贴近 BSP/驱动的小改动
- 或者整理仓库首页与成果说明，使其更适合项目申请和展示
