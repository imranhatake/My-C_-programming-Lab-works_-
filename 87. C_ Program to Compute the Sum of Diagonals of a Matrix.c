#include <stdio.h>

int main() {
    int a[10][10], n, sum1 = 0, sum2 = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (i == j) sum1 += a[i][j];
            if (i + j == n - 1) sum2 += a[i][j];
        }

    printf("Main diagonal sum = %d\n", sum1);
    printf("Secondary diagonal sum = %d\n", sum2);
    return 0;
}
