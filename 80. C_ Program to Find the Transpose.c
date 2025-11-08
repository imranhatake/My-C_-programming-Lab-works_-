#include <stdio.h>

int main() {
    int a[10][10], b[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            b[j][i] = a[i][j];

    printf("Transpose:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    return 0;
}
