# Day 1

## 今天完成了什么
- 在 RT-Thread `qemu-virt64-riscv` BSP 的 `applications/` 目录下新增了真实源码文件 `week3_demo.c`
- 实现了 4 个自定义 msh 命令：
  - `hello_week3`
  - `show_build_info`
  - `mem_info_simple`
  - `uart_status`
- 重新编译 BSP 并成功生成镜像
- 使用 QEMU 启动系统并进入 `msh />`
- 在 `msh` 中成功验证了自定义命令输出
- 额外使用 `free` 和 `ps` 验证系统状态正常

## 关键验证结果
- `hello_week3` 输出自定义欢迎信息
- `show_build_info` 输出 BSP 名称、架构和编译时间
- `mem_info_simple` 输出 heap 状态提示和后续建议命令
- `uart_status` 成功输出 UART 基地址和 LSR 状态
- `free` 能正常显示内存使用情况
- `ps` 能正常显示线程状态

## 当前理解
- 自定义命令通过 `MSH_CMD_EXPORT` 注册到 RT-Thread shell
- 新增的 C 文件已经被 BSP 构建系统自动编译进镜像
- `uart_status` 通过 `drv_uart.h` 中已有的寄存器定义和读寄存器宏读取 UART 状态
- QEMU 中成功执行命令，说明改动已经完成“编写-编译-运行-验证”的闭环

## 下一步
- 整理 week3 项目说明
- 提交最新项目文件到学习仓库
- 编写 week3 总结
