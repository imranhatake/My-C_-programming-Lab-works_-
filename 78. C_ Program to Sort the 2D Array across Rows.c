#include <stdio.h>

int main() {
    int a[10][10], r, c, temp;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c - 1; j++)
            for (int k = j + 1; k < c; k++)
                if (a[i][j] > a[i][k]) {
                    temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }

    printf("Sorted 2D array (row-wise):\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
