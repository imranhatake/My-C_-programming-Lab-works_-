#include <stdio.h>

int main() {
    int a[50], b[50], c[100], n1, n2, i, j;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    for (j = 0; j < n2; j++)
        scanf("%d", &b[j]);

    for (i = 0; i < n1; i++)
        c[i] = a[i];
    for (j = 0; j < n2; j++)
        c[i + j] = b[j];

    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);
    return 0;
}
