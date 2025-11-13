#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("\nEnter elements of the matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Enter value at a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate trace (sum of diagonal elements)
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("\nTrace of the matrix: %d\n", sum);

    return 0;
}
