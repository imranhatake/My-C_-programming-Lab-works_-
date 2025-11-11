#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, letters[26] = {0}, flag = 0;

    printf("Enter a sentence: ");
    gets(str);

    for (i = 0; str[i]; i++) {
        if (isalpha(str[i]))
            letters[tolower(str[i]) - 'a'] = 1;
    }

    for (i = 0; i < 26; i++) {
        if (letters[i] == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Pangram\n");
    else
        printf("Not Pangram\n");

    return 0;
}
