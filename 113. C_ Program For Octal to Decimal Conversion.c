#include <stdio.h>

int main() {
    int oct, dec = 0, base = 1, rem;

    printf("Enter octal number: ");
    scanf("%d", &oct);

    while (oct > 0) {
        rem = oct % 10;
        dec += rem * base;
        base *= 8;
        oct /= 10;
    }

    printf("Decimal: %d\n", dec);
    return 0;
}
