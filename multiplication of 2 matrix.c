#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], m[100][100];
    int r1, c1, r2, c2, i, j, k;

    printf("\nEnter rows and column sizes: ");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("Enter value at position a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("\nEnter value at position b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    if(c1 != r2)
    {
        printf("\nMatrix multiplication not possible");
    }
    else
    {
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                m[i][j] = 0;
                for(k = 0; k < c1; k++)
                {
                    m[i][j] = m[i][j] + a[i][k] * b[k][j];
                }
            }
        }

        printf("\nResultant Matrix:\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                printf("\t%d", m[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
