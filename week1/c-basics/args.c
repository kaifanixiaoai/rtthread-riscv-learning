#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc == 2) {
        printf("Hello, %s\n", argv[1]);
    } else if (argc == 3) {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        printf("sum = %d\n", a + b);
    } else {
        printf("Usage:\n");
        printf("  ./args <name>\n");
        printf("  ./args <num1> <num2>\n");
    }

    return 0;
}
