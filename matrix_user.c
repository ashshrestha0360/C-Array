#include <stdio.h>
int main()
{
    int r1, r2, c1, c2, sum;
    printf("Enter the rows & Columns for matrix 1:\n");
    scanf("%d %d", &r1, &c1);
    printf("Enter the rows & Columns for matrix 2:\n");
    scanf("%d %d", &r2, &c2);
    if (c1 == r2)
    {
        int a[r1][c1], b[r2][c2], i, j, k;
        printf("***first matrix***\n");

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("***Second matrix***\n");

        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        int prod[r1][c2];

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                for (k = 0; k < r2; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                prod[i][j] = sum;
                sum = 0;
            }
        }
        printf("\n***Resultant Matrix***\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", prod[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid input!\n");
    }
    return 0;
}