#include <stdio.h>
int main()
{
    int i, a[5], n;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the number:");
        scanf("%d", &a[i]);
    }
    printf("Enter the number you want to search:");
    scanf("%d", &n);
    for (i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            printf("Search found !");
            break;
        }
    }
    if (a[i] != n)
    {
        printf("Search not found!");
    }

    return 0;
}