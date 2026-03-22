# Week 1 Summary

## 本周完成内容
- 搭建了 week1 学习仓库
- 初始化 Git 仓库并完成多次提交
- 学会了最基础的 Git 工作流：init、status、add、commit、log
- 完成了 3 个 C 小程序：
  - args.c：命令行参数解析
  - file_io.c：文件读写
  - struct_ptr.c：结构体与指针
- 完成了 show_args.c，用于观察 argc/argv
- 学会了最基本的 ELF 和调试工具：
  - readelf
  - objdump
  - gdb
- 完成了第一个 Makefile 小项目

## 目前已经掌握的内容
- 能使用 gcc 编译和运行基本 C 程序
- 能使用 Git 管理学习仓库
- 能用 readelf 查看 ELF 头信息
- 能用 objdump 定位 main 并查看反汇编
- 能用 gdb 断点运行和查看变量
- 能理解 argc/argv、文件读写、结构体指针的基本用法

## 遇到的问题
- apt 源和 Hash Sum mismatch 问题
- riscv64-unknown-elf-gcc 直接链接普通 C 程序时报缺少运行时文件
- here-doc 输入时内容被截断

## 下周计划
- 开始接触 RT-Thread 仓库
- 尝试构建 qemu-virt64-riscv BSP
- 学习 QEMU 和交叉编译的基本工作流
