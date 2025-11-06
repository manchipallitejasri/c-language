#include <stdio.h>

int main()
{
    char operators;
    double a, b;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operators);
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);
    switch (operators)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", a, b, a + b);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", a, b, a - b);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", a, b, a * b);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", a, b, a / b);
            break;
        default:
            printf("Error! Operator is not correct");
    }
    return 0;
}
