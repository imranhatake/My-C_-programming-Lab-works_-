#include <stdio.h>

int main() {
    int dec, oct[20], i = 0;

    printf("Enter decimal number: ");
    scanf("%d", &dec);

    while (dec != 0) {
        oct[i++] = dec % 8;
        dec /= 8;
    }

    printf("Octal: ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", oct[i]);
    printf("\n");
    return 0;
}
