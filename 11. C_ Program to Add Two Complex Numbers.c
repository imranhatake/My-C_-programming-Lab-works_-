#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex a, b, sum;

    printf("Enter real and imaginary parts of first and second complex numbers: ");
    scanf("%f %f %f %f", &a.real, &a.imag, &b.real, &b.imag);

    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;

    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}
