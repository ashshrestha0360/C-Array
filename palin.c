#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    gets(a);
    char x[50];
    strcpy(x,a);
    strrev(a);
    int res = strcmp(a,x);
    if(res==0)
    {
        printf("Palindrome!");
    }
    else
    {
        printf("Not a palindrome!");
    }
    return 0;
}