#include <stdio.h>
int main()
{
    int n, s=0, num;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while(n > 0)
    {
        int a = n % 10;
        s = s * 10 + a;
        n = n / 10;
    }
    if (num == s)
    {
        printf("The number is a palindrome.");
    }
    else
    {
        printf("The number is not a palindrome.");
    }
    return 0;
}
