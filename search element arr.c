#include <stdio.h>
int main()
{
    int arr[100], n, i, found=0, search;
    printf("In enter array size:");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("In enter value at position of arr [%d]:");
        scanf("%d", &arr[i]);
    }
    printf("In enter searching element");
    scanf("%d", &search);
    for (i=0; i<n; i++)
    {
        if (search== arr[i])
        {
            printf("In searching element found at: %d", i);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("In no searching element found");
    }
    return 0;
}
