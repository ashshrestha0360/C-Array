#include <stdio.h>
void main()
{
    int n, i;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int a[n];
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

        for (int i = 0; i <= n / 2 && n > 0; i++)
    {

        if (a[i] == a[n - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}