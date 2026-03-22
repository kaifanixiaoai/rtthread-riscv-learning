# qemu-virt64-riscv BSP Notes

## README 提到的关键信息

### 工具链
- 标准版：riscv64-unknown-elf-gcc
- Smart 版：riscv64-unknown-linux-musl-gcc

### 构建系统
- 使用 SCons
- 关键命令：
  - scons --menuconfig
  - scons --clean
  - scons -j$(nproc)
### 运行方式
- 直接使用脚本：
  - ./run.sh

### 环境变量
- RTT_CC=gcc
- RTT_CC_PREFIX=riscv64-unknown-elf-
- RTT_EXEC_PATH=工具链 bin 目录

## 当前观察到的目录结构
- README.md / README_cn.md：说明文档
- SConstruct / SConscript：SCons 构建入口
- Kconfig：配置入口
- driver/：板级驱动
- link*.lds：链接脚本
- run.sh / qemu-*.sh：运行脚本
## 当前理解
- qemu-virt64-riscv BSP 已经准备好了链接脚本和运行脚本
- drv_uart.c 大概率负责串口驱动和控制台输出
- run.sh 大概率负责启动 QEMU 并加载生成的镜像
- 当前优先目标是先构建 RT-Thread 标准版的镜像
## 第一次构建报错
- 当前系统自带的 riscv64-unknown-elf-gcc 缺少标准 C 头文件
- 典型报错包括：
  - sys/types.h: No such file or directory
  - stdio.h: No such file or directory
  - string.h: No such file or directory
## 下一步
- 尝试使用 RT-Thread README 推荐的完整工具链
- 重新设置 RTT_EXEC_PATH
- 清理后重新构建
