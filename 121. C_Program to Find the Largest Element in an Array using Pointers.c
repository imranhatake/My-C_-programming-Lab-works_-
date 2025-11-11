#include <stdio.h>

int main() {
    int arr[100], n, *p, max, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    p = arr;
    max = *p;

    for (i = 1; i < n; i++)
        if (*(p + i) > max)
            max = *(p + i);

    printf("Largest = %d\n", max);
    return 0;
}
