#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100], result[300];
    int pos, i, j = 0;

    printf("Enter main string: ");
    gets(str1);
    printf("Enter string to insert: ");
    gets(str2);
    printf("Enter position: ");
    scanf("%d", &pos);

    for (i = 0; i < pos; i++)
        result[j++] = str1[i];

    for (i = 0; str2[i]; i++)
        result[j++] = str2[i];

    for (i = pos; str1[i]; i++)
        result[j++] = str1[i];

    result[j] = '\0';
    printf("After insertion: %s\n", result);
    return 0;
}
