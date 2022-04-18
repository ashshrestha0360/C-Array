#include <stdio.h>
int main()
{
    int i, array[10], low, high, mid, search;
    printf("Enter the number:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the number you want to search:\n");
    scanf("%d", &search);
    low = 0;
    high = 9;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (array[mid] < search)
        {
            low = mid + 1;
        }
        else if (array[mid] > search)
        {
            high = mid - 1;
        }
        else if (array[mid] == search)
        {
            printf("Search found!\n");
            break;
        }
        mid = (low + high) / 2;
    }
    if (low > high)
    {
        printf("Search not found!\n");
    }
    return 0;
}