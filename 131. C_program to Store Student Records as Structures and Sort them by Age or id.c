#include <stdio.h>

struct Student {
    char name[50];
    int age, id;
};

int main() {
    struct Student s[5], t;
    int i, j;

    for(i = 0; i < 5; i++)
        scanf("%s %d %d", s[i].name, &s[i].age, &s[i].id);

    for(i = 0; i < 5; i++)
        for(j = i + 1; j < 5; j++)
            if(s[i].age > s[j].age) {   // change to id for sorting by ID
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }

    for(i = 0; i < 5; i++)
        printf("%s %d %d\n", s[i].name, s[i].age, s[i].id);

    return 0;
}
