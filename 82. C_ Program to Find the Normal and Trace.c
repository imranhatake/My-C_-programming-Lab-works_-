#include <stdio.h>
#include <math.h>

int main() {
    int a[10][10], r, c, trace = 0;
    double sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);

            sum += a[i][j] * a[i][j];  // For normal

            if (i == j)                // Trace only if square part
                trace += a[i][j];
        }
    }

    double normal = sqrt(sum);

    printf("\nNormal of the matrix = %.2f\n", normal);

    if (r == c)
        printf("Trace of the matrix = %d\n", trace);
    else
        printf("Trace is not possible (not a square matrix)\n");

    return 0;
}
