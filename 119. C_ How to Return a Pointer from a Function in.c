#include <stdio.h>

int* getNumber() {
    static int num = 42;
    return &num;
}

int main() {
    int *ptr = getNumber();
    printf("Value from function: %d\n", *ptr);
    return 0;
}
