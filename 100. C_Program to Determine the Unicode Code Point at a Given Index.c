#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int index;

    printf("Enter string: ");
    gets(str);
    printf("Enter index: ");
    scanf("%d", &index);

    if (index >= 0 && index < strlen(str))
        printf("Unicode (ASCII) value: %d\n", str[index]);
    else
        printf("Invalid index\n");

    return 0;
}
