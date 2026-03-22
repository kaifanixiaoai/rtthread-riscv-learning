# Day 2

## 今天完成了什么
- 阅读了 `bsp/qemu-virt64-riscv/README_cn.md`
- 确认了该 BSP 使用的构建系统是 SCons
- 确认了该 BSP 的标准版工具链是 `riscv64-unknown-elf-gcc`
- 配置了 RT-Thread 构建环境变量：
  - `RTT_CC=gcc`
  - `RTT_CC_PREFIX=riscv64-unknown-elf-`
  - `RTT_EXEC_PATH=/usr/bin`
- 安装并验证了 SCons
- 解决了 `menuconfig` 依赖问题：
  - 创建 Python venv
  - 安装 `kconfiglib`
  - 通过 `PYTHONPATH` 让 `scons --menuconfig` 正常工作
- 成功运行 `scons --menuconfig`
- 成功运行 `scons -j$(nproc)` 并生成：
  - `rtthread.elf`
  - `rtthread.bin`
- 成功执行 `./run.sh`
- 成功进入 RT-Thread 的 `msh />`
- 在 `msh` 中成功执行：
  - `help`
  - `ps`

## 关键命令记录

### 构建
```bash
cd ~/rt-thread/bsp/qemu-virt64-riscv
scons --menuconfig
scons --clean
scons -j$(nproc)
```

### 运行
```bash
./run.sh
```

### Python 环境
```bash
source ~/rtt-venv/bin/activate
export PYTHONPATH=$HOME/rtt-venv/lib/python3.12/site-packages:$PYTHONPATH
```

## 运行结果

成功看到：

- OpenSBI 启动信息
- RT-Thread banner
- Hello RISC-V
- `msh />`

成功执行：

- `help`
- `ps`

## 遇到的问题

### 1. `scons --menuconfig` 失败

报错：

```text
Failed to import kconfiglib, No module named 'kconfiglib'
```

解决方式：

- 安装 `python3-venv` 和 `python3-pip`
- 创建 `~/rtt-venv`
- 在虚拟环境中安装 `kconfiglib`
- 设置 `PYTHONPATH`

### 2. 直接编译时缺少标准 C 头文件

早期出现过：

```text
sys/types.h: No such file or directory
stdio.h: No such file or directory
string.h: No such file or directory
```

解决方式：

- 先正确配置并刷新 `menuconfig`
- 再重新构建后问题消失
- 后续确认当前工具链能正常完成该 BSP 的标准版构建

### 3. 运行时 `mkfs.fat: command not found`

`run.sh` 会默认尝试创建并格式化 `sd.bin`，但系统里没有 `mkfs.fat`

运行现象：

```text
mkfs.fat: command not found
[W/DFS.fs] mount / failed with file system type: elm
file system initialization fail!
```

当前状态：

- 虽然文件系统初始化失败，但系统本体已经成功启动并进入 `msh />`

## 当前理解

### `run.sh`
- 负责准备 `sd.bin`
- 负责调用 `qemu-system-riscv64`
- 负责加载 `rtthread.bin`
- 负责添加 virtio 块设备和网卡等参数

### `board.c`
- 负责板级初始化
- 初始化堆、中断、UART、tick
- 设置控制台设备
- 完成 BSP 启动过程中的核心初始化


### `drv_uart.c`
- 负责 UART 驱动
- 初始化串口寄存器
- 提供收发字符接口
- 将串口注册为 RT-Thread 设备
- 这也是启动日志和 `msh` 能正常工作的关键部分

## 当前阶段结论

我已经能够在本机环境中：

- 构建 RT-Thread 的 `qemu-virt64-riscv` BSP
- 生成可运行镜像
- 使用 QEMU 启动系统
- 进入 `msh` 并做基本验证

## 下一步计划
- 补齐 `mkfs.fat` 相关工具
- 完善第 2 周总结
- 整理“环境搭建 + 构建运行 + 踩坑记录”
- 为下一周的小改动验证做准备
