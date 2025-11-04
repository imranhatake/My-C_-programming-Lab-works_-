#include <stdio.h>
int main() {
    int n, reversed = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n /= 10;
    }
    printf("Reversed number = %d", reversed);
    return 0;
}
