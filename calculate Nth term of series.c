#include <stdio.h>

int nth_term(int n, int a, int b, int c)
{
    int sum = 0, i;

    for (i = 1; i < n; i++)
    {
        sum = a + b + c;
        a = b;
        b = c;
        c = sum;
    }
    return a;
}

int main()
{
    int a, b, c, n, result;

    printf("\n enter nth term:");
    scanf("%d", &n);

    printf("\n enter a, b & c values:");
    scanf("%d %d %d", &a, &b, &c);

    result = nth_term(n, a, b, c);

    printf("\n %d", result);
    return 0;
}
