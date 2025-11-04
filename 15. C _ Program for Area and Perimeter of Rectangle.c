#include <stdio.h>
int main() {
    float a, b, area, perimeter;
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &a, &b);

    area = a * b;
    perimeter = 2 * (a + b);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
