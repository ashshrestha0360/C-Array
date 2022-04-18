#include <stdio.h>
int main()
{
    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the number:");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 2; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}