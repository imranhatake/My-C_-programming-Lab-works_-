#include <stdio.h>
#include <stdlib.h>

int main() {
    long num;
    char str[50];

    printf("Enter a long number: ");
    scanf("%ld", &num);

    sprintf(str, "%ld", num);
    printf("String: %s\n", str);
    return 0;
}
