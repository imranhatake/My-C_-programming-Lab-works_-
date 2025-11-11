#include <stdio.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student s1 = {"Rahim", 10}, s2;
    FILE *f;

    f = fopen("student.dat", "wb");
    fwrite(&s1, sizeof(s1), 1, f);
    fclose(f);

    f = fopen("student.dat", "rb");
    fread(&s2, sizeof(s2), 1, f);
    fclose(f);

    printf("Name: %s, Roll: %d", s2.name, s2.roll);
    return 0;
}
