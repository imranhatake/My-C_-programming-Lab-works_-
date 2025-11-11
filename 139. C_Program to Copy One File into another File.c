#include <stdio.h>

int main() {
    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("copy.txt", "w");
    char ch;

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.");
    fclose(src);
    fclose(dest);
    return 0;
}
