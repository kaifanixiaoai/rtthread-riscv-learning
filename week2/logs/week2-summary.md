# Week 2 Summary

## 本周完成内容
- 拉取了 RT-Thread 主仓库
- 定位并阅读了 `bsp/qemu-virt64-riscv` 的 README 和目录结构
- 确认了该 BSP 的构建系统是 SCons
- 确认了标准版工具链为 `riscv64-unknown-elf-gcc`
- 配置了 RT-Thread 构建环境变量
- 安装并验证了 SCons
- 通过 Python venv + `kconfiglib` 解决了 `menuconfig` 依赖问题
- 成功运行 `scons --menuconfig`
- 成功运行 `scons -j$(nproc)` 构建出：
  - `rtthread.elf`
  - `rtthread.bin`
- 成功执行 `./run.sh`
- 成功进入 RT-Thread 的 `msh />`
- 成功执行 `help` 和 `ps`
- 阅读并初步理解了：
  - `run.sh`
  - `driver/board.c`
  - `driver/drv_uart.c`
- 安装了 `mkfs.fat` 所需工具
## 目前已经掌握的内容
- 能在本机环境中构建 RT-Thread 的 `qemu-virt64-riscv` BSP
- 能通过 QEMU 启动 RT-Thread 系统
- 能进入 `msh` 并做最基础的功能验证
- 能理解 `run.sh` 在启动链路中的作用
- 能理解 `board.c` 在 BSP 初始化中的作用
- 能理解 `drv_uart.c` 与控制台输出、shell 交互之间的关系
- 能处理 Python venv、SCons、工具链和构建依赖问题

## 遇到的主要问题
- apt 源和 Hash Sum mismatch
- `kconfiglib` 缺失导致 `menuconfig` 无法运行
- Python 包安装受 Ubuntu 24.04 外部管理机制限制
- 需要通过 venv + `PYTHONPATH` 让 `scons --menuconfig` 正常工作
- `run.sh` 执行时缺少 `mkfs.fat`

## 当前阶段结论
我已经具备：
- 基本的 RT-Thread BSP 阅读能力
- 基本的 RISC-V QEMU BSP 构建能力
- 基本的运行验证和日志分析能力
- 初步的 BSP / 驱动代码阅读能力

## 下周计划
- 做一个最小改动并验证效果
- 继续阅读 BSP 相关代码
- 逐步从“能构建运行”过渡到“能修改并验证”
