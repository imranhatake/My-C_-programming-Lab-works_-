#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];

    printf("Enter first string: ");
    gets(a);
    printf("Enter second string: ");
    gets(b);

    if (strcmp(a, b) < 0)
        printf("%s comes before %s\n", a, b);
    else if (strcmp(a, b) > 0)
        printf("%s comes after %s\n", a, b);
    else
        printf("Both strings are same\n");

    return 0;
}
