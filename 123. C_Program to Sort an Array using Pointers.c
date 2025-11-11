#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp, *p;
    printf("Enter size: ");
    scanf("%d", &n);

    p = arr;
    for (i = 0; i < n; i++)
        scanf("%d", p + i);

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (*(p + i) > *(p + j)) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }

    printf("Sorted: ");
    for (i = 0; i < n; i++)
        printf("%d ", *(p + i));

    return 0;
}
