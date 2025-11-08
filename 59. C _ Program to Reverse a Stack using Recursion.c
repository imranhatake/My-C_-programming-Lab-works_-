#include <stdio.h>
#define MAX 100

int main() {
    int stack[MAX], temp[MAX];
    int n, top = -1, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &stack[++top]);
    }

    int j = 0;
    for (i = top; i >= 0; i--) {
        temp[j++] = stack[i];
    }

    printf("Reversed stack:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
