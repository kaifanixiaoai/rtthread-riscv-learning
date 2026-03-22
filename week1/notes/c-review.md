# C Review

## main 的参数

常见写法：

```c
int main(int argc, char *argv[])
```

- argc: 命令行参数个数
- argv: 命令行参数字符串数组

## 命令行参数示例

运行：

```bash
./args zhanglei
```

对应：

- argc = 2
- argv[0] = "./args"
- argv[1] = "zhanglei"

运行：

```bash
./args 8 6
```

对应：

- argc = 3
- argv[0] = "./args"
- argv[1] = "8"
- argv[2] = "6"

## atoi

`atoi` 可以把字符串转换成整数，例如把 `"8"` 转成 `8`。

## 当前进度

- 已完成第一个命令行参数解析程序 `args.c`
- 已学会用 `gcc` 编译并运行程序
