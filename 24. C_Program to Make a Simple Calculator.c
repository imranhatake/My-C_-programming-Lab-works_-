#include <stdio.h>
int main() {
    char op;
    double a, b;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (op) {
        case '+': printf("%.2lf + %.2lf = %.2lf", a, b, a + b); break;
        case '-': printf("%.2lf - %.2lf = %.2lf", a, b, a - b); break;
        case '*': printf("%.2lf * %.2lf = %.2lf", a, b, a * b); break;
        case '/': 
            if (b != 0)
                printf("%.2lf / %.2lf = %.2lf", a, b, a / b);
            else
                printf("Division by zero not possible");
            break;
        default: printf("Invalid operator");
    }
    return 0;
}
