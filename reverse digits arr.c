#include <stdio.h>
int main()
{
    int n, i, arr[100];
    printf("\n enter arry size: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("in enter Value at position arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (i=n-1; i>=0; i--)
    {
        printf("\t%d", arr[i]);
    }
    return 0;
}
