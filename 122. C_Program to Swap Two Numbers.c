#include <stdio.h>

int main() {
    int a, b, temp, *p, *q;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("After swap: a=%d, b=%d\n", a, b);
    return 0;
}
