#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, found;

    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i]; i++) {
        found = 0;
        for (j = 0; str[j]; j++) {
            if (str[i] == str[j] && i != j) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found\n");
    return 0;
}
