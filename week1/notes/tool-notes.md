# Tool Notes

## gcc
- 编译 C 程序：
  gcc args.c -o args

## make
- 之后会用 Makefile 管理编译流程

## readelf
- 查看 ELF 头：
  readelf -h args

重点关注：
- Class
- Type
- Machine
- Entry point address

## objdump
- 反汇编：
  objdump -d args
- 查找 main：
  objdump -d args | grep -n "<main>"

## gdb
最小流程：
- gdb ./args
- break main
- run Alice
- next
- print argc
- print argv[0]
- print argv[1]

## 当前理解
- C 程序会被编译为 ELF 可执行文件
- readelf 可以查看 ELF 元信息
- objdump 可以查看反汇编
- gdb 可以在运行时观察变量和执行流程
