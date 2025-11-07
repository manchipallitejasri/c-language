Program: #include <stdio.h>
#include <math.h>
int main()
{
    int n, r=0, temp, digit_count, S=0;
    printf("in enter n value: ");
    scanf("%d", &n);
    temp=n;
    digit_count = (int) log10(n) +1;
    while (n>0)
    {
        r = n%10;
        S = S + pow(r, digit_count);
        n = n/10;
    }
    if (temp==S)
    {
        printf("\n%d is an armstrong number", temp);
    }
    else
    {
        printf("\n%d is not an armstrong number", temp);
    }
    return 0;
}
