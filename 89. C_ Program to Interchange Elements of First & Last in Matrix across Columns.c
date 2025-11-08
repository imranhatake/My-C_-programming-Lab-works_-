#include <stdio.h>

int main() {
    int a[10][10], r, c, temp;
    printf("Enter rows & columns: ");
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int j = 0; j < c; j++) {
        temp = a[0][j];
        a[0][j] = a[r-1][j];
        a[r-1][j] = temp;
    }

    printf("After swapping rows:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
