#include <stdio.h>

int main() {
    int a[10][10], r, c, temp;
    printf("Enter rows & columns: ");
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < r; i++) {
        temp = a[i][0];
        a[i][0] = a[i][c-1];
        a[i][c-1] = temp;
    }

    printf("After swapping columns:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
