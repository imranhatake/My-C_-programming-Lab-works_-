#include <stdio.h>
int main() {
    float a, b, result;
    printf("Enter two  numbers: ");
    scanf("%f %f", &a, &b);
    result = a * b;
    printf("Result = %.2f\n", result);
    return 0;
}
