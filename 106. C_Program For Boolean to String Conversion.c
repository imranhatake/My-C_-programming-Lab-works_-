#include <stdio.h>

int main() {
    int val;
    printf("Enter 1 for True or 0 for False: ");
    scanf("%d", &val);

    if (val)
        printf("String: True\n");
    else
        printf("String: False\n");

    return 0;
}
