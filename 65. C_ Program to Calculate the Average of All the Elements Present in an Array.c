#include <stdio.h>

int main() {
    int n, a[100], sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Average = %.2f\n", (float)sum / n);
    return 0;
}
