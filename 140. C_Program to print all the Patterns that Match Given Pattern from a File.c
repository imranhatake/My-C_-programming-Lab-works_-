#include <stdio.h>
#include <string.h>

int main() {
    FILE *f = fopen("data.txt", "r");
    char word[50], line[200];

    scanf("%s", word);

    while (fgets(line, sizeof(line), f)) {
        if (strstr(line, word))   // if pattern found
            printf("%s", line);
    }

    fclose(f);
    return 0;
}
