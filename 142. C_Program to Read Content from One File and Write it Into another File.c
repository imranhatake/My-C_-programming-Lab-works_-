#include <stdio.h>

int main() {
    FILE *readF = fopen("input.txt", "r");
    FILE *writeF = fopen("output.txt", "w");
    char ch;

    while ((ch = fgetc(readF)) != EOF)
        fputc(ch, writeF);

    printf("Done writing to other file.");
    fclose(readF);
    fclose(writeF);
    return 0;
}
