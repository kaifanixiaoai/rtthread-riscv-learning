# Day 1

## 今天完成了什么
- 安装并验证了基础工具：gcc、make、git、gdb、binutils、qemu、riscv64-unknown-elf-gcc
- 创建了第一周学习仓库目录
- 初始化了 Git 仓库，并将默认分支改为 main

## 遇到的问题
- apt 源出现 Hash Sum mismatch
- riscv64-unknown-elf-gcc 直接链接普通 C 程序时报缺少 crt0.o / libc / libgloss

## 我现在的理解
- 本机 x86_64 编译工具已经正常
- RISC-V 交叉编译器已经安装成功，至少能用于编译目标文件
- 后续 RT-Thread 的构建会由 BSP 和构建系统处理启动文件和链接过程

## 明天要做什么
- 写第一个 C 小程序
- 学会最基本的 gcc 编译和 git 提交流程
