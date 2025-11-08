#include <stdio.h>

int main() {
    int n, sq, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    sq = n * n;
    while (sq != 0) {
        rem = sq % 10;
        sum += rem;
        sq /= 10;
    }

    if (sum == n)
        printf("%d is a Neon number.\n", n);
    else
        printf("%d is not a Neon number.\n", n);

    return 0;
}
