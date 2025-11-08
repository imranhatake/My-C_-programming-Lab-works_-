#include <stdio.h>
#include <string.h>

int main() {
    char b1[100], b2[100], result[100];
    int i, j, k = 0, carry = 0, sum;

    printf("Enter first binary: ");
    gets(b1);
    printf("Enter second binary: ");
    gets(b2);

    i = strlen(b1) - 1;
    j = strlen(b2) - 1;

    while (i >= 0 || j >= 0 || carry) {
        sum = carry;
        if (i >= 0) sum += b1[i--] - '0';
        if (j >= 0) sum += b2[j--] - '0';
        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    result[k] = '\0';

    for (i = k - 1; i >= 0; i--)
        printf("%c", result[i]);
    printf("\n");
    return 0;
}
