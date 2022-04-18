#include <stdio.h>
int main()
{
    int i, n, a = 1, b = 1, c;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("%d\t", a);
    printf("%d\t", b);
    for (i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
    }
    return 0;
}