#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student s[5], temp;
    int i, j;

    for(i = 0; i < 5; i++) {
        scanf("%s %d", s[i].name, &s[i].roll);
    }

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for(i = 0; i < 5; i++)
        printf("%s %d\n", s[i].name, s[i].roll);

    return 0;
}
