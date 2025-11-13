#include <stdio.h>

int main()
{
    int a[100][100];
    int i, j, n;
    int lower = 1;  // assume it's a lower triangular matrix

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter value at a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Check if matrix is lower triangular
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // For upper triangular elements (above diagonal)
            if (j > i && a[i][j] != 0)
            {
                lower = 0;
                break;
            }
        }
    }

    if (lower == 1)
        printf("The given matrix is a LOWER TRIANGULAR matrix.\n");
    else
        printf("The given matrix is NOT a lower triangular matrix.\n");

    return 0;
}
