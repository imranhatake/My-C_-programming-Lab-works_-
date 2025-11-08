#include <stdio.h>

int main() {
    int a[10][10], r, c;
    printf("Enter rows & columns: ");
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Boundary elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == 0 || j == 0 || i == r-1 || j == c-1)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
