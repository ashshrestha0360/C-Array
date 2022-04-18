#include <stdio.h>
int main()
{
    int i, low, mid, high, size, search;
    printf("Enter the size of array:");
    scanf("%d", &size);
    int a[size];
    printf("Enter the number:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number you want to search:\n");
    scanf("%d", &search);
    low = 0;
    high = size - 1;
    mid = (low + high) / 2;

    while (low <= high)
    {

        if (search < a[mid])
        {
            high = mid - 1;
        }

        else if (search == a[mid])
        {
            printf("Search found!");
            break;
        }
        else
        {
            high = mid + 1;
        }
    }
    if (low > high)
    {
        printf("Search not found!");
    }

    return 0;
}