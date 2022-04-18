#include <stdio.h>
int main()
{

    int i, n, even = 0, odd = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (even++ > odd++)
        {
            printf("READY FOR BATTLE");
            break;
        }
        else
        {
            printf("NOT READY");
            break;
        }
    }

    return 0;
}