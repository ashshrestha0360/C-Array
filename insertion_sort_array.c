#include <stdio.h>
int main()
{
    int i, j, a[5], k;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                k = a[i];
                a[i] = a[j];
                k = a[i];
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}