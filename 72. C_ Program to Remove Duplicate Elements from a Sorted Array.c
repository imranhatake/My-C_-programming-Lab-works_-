#include <stdio.h>

int main() {
    int n, a[100], j = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n - 1; i++)
        if (a[i] != a[i + 1])
            a[j++] = a[i];
    a[j++] = a[n - 1];

    printf("Array without duplicates:\n");
    for (int i = 0; i < j; i++)
        printf("%d ", a[i]);
    return 0;
}
