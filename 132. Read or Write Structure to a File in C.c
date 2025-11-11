#include <stdio.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student s1 = {"Meera", 20}, s2;

    FILE *f = fopen("data.txt", "wb");
    fwrite(&s1, sizeof(s1), 1, f);
    fclose(f);

    f = fopen("data.txt", "rb");
    fread(&s2, sizeof(s2), 1, f);
    fclose(f);

    printf("%s %d", s2.name, s2.roll);

    return 0;
}
