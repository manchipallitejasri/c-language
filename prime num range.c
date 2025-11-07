#include <stdio.h>
int main()
{
    int i,j,count=0,n;
    printf("enter n value: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if (i%j == 0)
            {
                count++;
            }
        }
        if (count==2)
        {
            printf("\n%d is a prime number",i);
        }
        else
        {
            printf("\n%d is not a prime number",i);
        }
    }
    return 0;
}
