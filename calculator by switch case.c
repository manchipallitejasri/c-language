#include <stdio.h>

int main()
{
    char operator;
    double a, b;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);

    switch (operator)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
        break;

    case '-':
        printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
        break;

    case '*':
        printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
        break;

    case '/':
        if (b != 0)
            printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
        else
            printf("Error! Division by zero.\n");
        break;

    default:
        printf("Error! Operator is not correct.\n");
    }

    return 0;
}
