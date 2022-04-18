#include <stdio.h>
int main()
{
    int i, j, a[5], x;
    for (i = 0; i < 5; i++)
    {

        scanf("%d", &a[i]);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                x = a[j];
                a[j] = a[j + 1];
                a[j + 1] = x;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}