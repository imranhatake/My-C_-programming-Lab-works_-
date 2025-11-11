#include <stdio.h>
#include <stdlib.h>

int main() {
    float num;
    char str[20];

    printf("Enter a float number: ");
    scanf("%f", &num);

    sprintf(str, "%.2f", num);
    printf("String: %s\n", str);
    return 0;
}
