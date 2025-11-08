#include <stdio.h>

int main() {
    int n, a[100], val;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter value to remove: ");
    scanf("%d", &val);

    int k = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != val)
            a[k++] = a[i];

    printf("Array after removing %d:\n", val);
    for (int i = 0; i < k; i++)
        printf("%d ", a[i]);
    return 0;
}
