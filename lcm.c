#include <stdio.h>

int lcm(int a, int b);

int main()
{
    int n1, n2, result;

    printf("\n enter n1 and n2 values:");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
    {
        result = lcm(n2, n1);
    }
    else
    {
        result = lcm(n1, n2);
    }

    printf("\n LCM of %d and %d = %d", n1, n2, result);
    return 0;
}

int lcm(int a, int b)
{
    static int mul = 0;

    mul = mul + b;

    if (mul % a == 0 && mul % b == 0)
    {
        return mul;
    }
    else
    {
        lcm(a, b);
    }
}
