#include <stdio.h>
int main()
{
    int arr[100], n, i, min, max;
    printf("enter n size");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("in enter value at position %d", i);
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("in max value is: %d", max);
    printf("in min value is: %d", min);
    return 0;
}
