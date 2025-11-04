#include <stdio.h>
#include <math.h>
int main() {
    int low, high, num, temp, rem, n;
    double result;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d:\n", low, high);

    for (num = low; num <= high; ++num) {
        temp = num;
        n = 0;
        result = 0;

        while (temp != 0) {
            temp /= 10;
            ++n;
        }

        temp = num;
        while (temp != 0) {
            rem = temp % 10;
            result += pow(rem, n);
            temp /= 10;
        }

        if ((int)result == num)
            printf("%d ", num);
    }
    return 0;
}
