#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");

    if (fp == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }

    char buf[256];

    while (fgets(buf, sizeof(buf), fp) != NULL) {
        printf("%s", buf);
    }

    fclose(fp);
    return 0;
}
