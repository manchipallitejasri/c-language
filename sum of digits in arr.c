#include <stdio.h>
int main()
{
    int arr[100], n, i, sum=0;
    printf("enter n size: ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        printf("in enter value at position arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    printf("in the sum of array values %d", sum);
    return 0;
}
