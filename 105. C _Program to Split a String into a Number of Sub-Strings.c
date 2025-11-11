#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char *token;

    printf("Enter sentence: ");
    gets(str);

    token = strtok(str, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
