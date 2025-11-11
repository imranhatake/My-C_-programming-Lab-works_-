#include <stdio.h>

int main() {
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "r");
    char c1, c2;
    int pos = 0;

    while ((c1 = fgetc(f1)) != EOF && (c2 = fgetc(f2)) != EOF) {
        pos++;
        if (c1 != c2) {
            printf("Mismatch at position %d\n", pos);
            return 0;
        }
    }

    printf("Files are identical.");
    return 0;
}
