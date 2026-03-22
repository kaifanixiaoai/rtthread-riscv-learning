# Week 3 Demo Result

## 项目名称
RT-Thread qemu-virt64-riscv 自定义 msh 命令模块

## 项目目标
在 RT-Thread BSP 中新增一个真实 C 源码文件，并通过 QEMU 运行验证自定义命令可用。

## 新增文件
- `week3/project-files/week3_demo.c`

## 实现的命令

### 1. hello_week3
功能：
- 输出自定义欢迎信息
- 用于验证最基本的命令注册和运行路径

### 2. show_build_info
功能：
- 输出 BSP 名称
- 输出架构
- 输出编译日期和时间

### 3. mem_info_simple
功能：
- 输出 heap 是否启用
- 引导用户进一步使用 `free` 和 `ps` 进行验证

## 验证方法
1. 在 `qemu-virt64-riscv` BSP 中重新编译
2. 使用 `./run.sh` 启动 QEMU
3. 在 `msh />` 中执行：
   - `hello_week3`
   - `show_build_info`
   - `mem_info_simple`
   - `free`
   - `ps`

## 验证结果
- 3 个自定义命令均可正常运行
- QEMU 启动成功
- `msh` 可交互
- 系统线程和内存状态正常

## 当前价值
这个项目证明我已经具备：
- 在 RT-Thread BSP 中新增真实源码文件的能力
- 使用交叉工具链重新编译镜像的能力
- 在 QEMU 中运行并验证改动生效的能力
