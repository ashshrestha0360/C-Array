#include <stdio.h>
int main()
{
    int x, y,sum;
    printf("Enter the rows & Columns:\n");
    scanf("%d %d", &x, &y);
    int a[x][y], b[x][y], prod[x][y], i, j;
    printf("Enter the first matrix:\n");

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the first matrix:\n");

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            prod[i][j] = sum; 
            sum = 0;
        }
    }
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}