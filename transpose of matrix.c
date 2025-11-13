#include <stdio.h>

int main()
{
    int a[100][100], b[100][100];
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of matrix A:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Enter value at a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose logic
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of the matrix is:\n");
    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
        {
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
