#include <stdio.h>
#include <stdlib.h>

struct Test {
    int size;
    int arr[];
};

int main() {
    struct Test *t = malloc(sizeof(struct Test) + 5 * sizeof(int));
    t->size = 5;

    for(int i = 0; i < t->size; i++)
        t->arr[i] = i + 1;

    for(int i = 0; i < t->size; i++)
        printf("%d ", t->arr[i]);

    free(t);
    return 0;
}
