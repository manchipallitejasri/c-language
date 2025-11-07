#include<stdio.h>
int main()
{
    int n, r, s=0;
    printf("enter n value");
    scanf("%d", &n);
    while (n>0)
    {
        r = n%10;
        s = s+r;
        n = n/10;
    }
    printf("\n sum of five digits:%d", s);
    return 0;
}
