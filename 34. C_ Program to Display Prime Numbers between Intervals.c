#include <stdio.h>

int main() {
    int low, high, i, j;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    for (i = low; i <= high; i++) {
        if (i < 2)
            continue;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0)
                break;
        }
        if (j > i / 2)
            printf("%d ", i);
    }
    return 0;
}
