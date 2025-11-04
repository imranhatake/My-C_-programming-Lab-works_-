#include <stdio.h>
#include <math.h>
int main() {
    int num, temp, rem, n;
    double result;

    printf("Armstrong numbers between 1 and 1000:\n");
    for (num = 1; num <= 1000; ++num) {
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
