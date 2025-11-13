#include <stdio.h>

int main()
{
    int a[100][100], b[100][100], c[100][100];
    int r, col, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &col);

    printf("\nEnter elements of first matrix (a):\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("Enter value at a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix (b):\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("Enter value at b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Calculate sum
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of the two matrices (c = a + b):\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
