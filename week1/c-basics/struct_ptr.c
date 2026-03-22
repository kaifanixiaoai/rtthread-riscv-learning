#include <stdio.h>
#include <string.h>

struct Device {
    char name[32];
    int id;
};

void print_device(struct Device *dev) {
    printf("Device name: %s\n", dev->name);
    printf("Device id: %d\n", dev->id);
}

int main() {
    struct Device dev;

    strcpy(dev.name, "uart0");
    dev.id = 1;

    print_device(&dev);

    return 0;
}
