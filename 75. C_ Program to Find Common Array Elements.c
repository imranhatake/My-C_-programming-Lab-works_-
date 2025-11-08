
#include <stdio.h>

int main() {
    int a[50], b[50], n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    for (int j = 0; j < n2; j++)
        scanf("%d", &b[j]);

    printf("Common elements: ");
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n2; j++)
            if (a[i] == b[j])
                printf("%d ", a[i]);
    return 0;
}
