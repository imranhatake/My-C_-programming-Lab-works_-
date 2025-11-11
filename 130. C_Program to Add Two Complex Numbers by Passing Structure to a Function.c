#include <stdio.h>

struct Complex {
    float real, imag;
};

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

int main() {
    struct Complex x, y, result;

    scanf("%f %f", &x.real, &x.imag);
    scanf("%f %f", &y.real, &y.imag);

    result = add(x, y);

    printf("Sum = %.1f + %.1fi", result.real, result.imag);

    return 0;
}
