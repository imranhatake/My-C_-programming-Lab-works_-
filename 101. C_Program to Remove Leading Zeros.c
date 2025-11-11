#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter number string: ");
    gets(str);

    while (str[i] == '0')
        i++;

    printf("Without leading zeros: %s\n", &str[i]);
    return 0;
}
