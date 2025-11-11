#include <stdio.h>

int main() {
    int num, bin[20], i = 0;

    printf("Enter decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        bin[i++] = num % 2;
        num /= 2;
    }

    printf("Binary: ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", bin[i]);
    printf("\n");
    return 0;
}
