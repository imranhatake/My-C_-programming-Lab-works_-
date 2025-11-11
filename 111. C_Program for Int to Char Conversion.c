#include <stdio.h>

int main() {
    int n;
    char ch;

    printf("Enter an integer (0–255): ");
    scanf("%d", &n);

    ch = (char)n;
    printf("Character: %c\n", ch);
    return 0;
}
