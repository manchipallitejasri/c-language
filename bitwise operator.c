#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter a and b values: ");
    scanf("%d %d", &a, &b);

    printf("\n*** BITWISE OPERATORS ***");

    printf("\nUsing bitwise AND (&) on %d & %d: %d", a, b, a & b);
    printf("\nUsing bitwise OR (|) on %d | %d: %d", a, b, a | b);
    printf("\nUsing bitwise XOR (^) on %d ^ %d: %d", a, b, a ^ b);
    printf("\nUsing bitwise LEFT SHIFT (<<) on %d << %d: %d", a, b, a << b);
    printf("\nUsing bitwise RIGHT SHIFT (>>) on %d >> %d: %d", a, b, a >> b);
    printf("\nUsing bitwise NOT (~) on %d: %d", a, ~a);

    return 0;
}
