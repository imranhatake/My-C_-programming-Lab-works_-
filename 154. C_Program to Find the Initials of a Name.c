#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    scanf("%[^\n]", name);

    printf("Initials: %c", name[0]);

    for (int i = 1; i < strlen(name); i++)
        if (name[i] == ' ')
            printf("%c", name[i + 1]);

    return 0;
}
