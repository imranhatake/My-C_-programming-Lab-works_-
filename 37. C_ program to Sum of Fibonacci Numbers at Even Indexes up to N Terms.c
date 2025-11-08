#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;
    int sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        if (i == 0)
            nextTerm = 0;
        else if (i == 1)
            nextTerm = 1;
        else
            nextTerm = t1 + t2, t1 = t2, t2 = nextTerm;

        if (i % 2 == 0) 
            sum += nextTerm;
    }

    printf("Sum of Fibonacci numbers at even indexes up to %d terms = %d\n", n, sum);
    return 0;
}
