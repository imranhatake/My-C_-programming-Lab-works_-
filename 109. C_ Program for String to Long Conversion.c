#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[50];
    long num;

    printf("Enter a number as string: ");
    scanf("%s", str);

    num = atol(str);
    printf("Long: %ld\n", num);
    return 0;
}
