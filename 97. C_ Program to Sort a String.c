#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j;

    printf("Enter string: ");
    gets(str);

    for (i = 0; i < strlen(str); i++) {
        for (j = i + 1; j < strlen(str); j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", str);
    return 0;
}
