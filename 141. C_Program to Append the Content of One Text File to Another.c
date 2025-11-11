#include <stdio.h>

int main() {
    FILE *f1 = fopen("a.txt", "r");
    FILE *f2 = fopen("b.txt", "a");
    char ch;

    while ((ch = fgetc(f1)) != EOF)
        fputc(ch, f2);

    printf("Content appended successfully.");
    fclose(f1);
    fclose(f2);
    return 0;
}
