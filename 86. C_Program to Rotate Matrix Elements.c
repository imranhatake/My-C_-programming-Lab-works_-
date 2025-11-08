#include <stdio.h>

int main() {
    int a[10][10], r, c, temp;
    printf("Enter rows & columns: ");
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Rotate first row right
    temp = a[0][c-1];
    for (int j = c-1; j > 0; j--)
        a[0][j] = a[0][j-1];
    a[0][0] = temp;

    printf("Matrix after rotation:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
