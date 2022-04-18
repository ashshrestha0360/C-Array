#include <stdio.h>
int main()
{
    int i, a[5], largest = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the number:");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (largest < a[i])
        {
            largest = a[i];
            
        }
    }
    printf("%d", a[i]);

    return 0;
}