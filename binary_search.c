/*
** binary search: find x in v[0] <= v[1] <= .... <= V[n - 1]
 */

#include <stdio.h>

int binsearch(int x, int v[], int length)
{
    int low, high, mid;

    low = 0;
    high = length - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid + 1;
        else if (x > v[mid])
            low = mid + 1;
        else /* found match */
            return (mid);
    }
    printf("TEST");
    return -1; /* no match */
}

int main(void)
{
    int i, j;
    int array[10] = {1, 3, 5, 6, 9, 12, 15, 18, 20, 22};
    int num = 14;
    int found_index = binsearch(num, array, (sizeof(array) / sizeof(array[0])));
    printf("%d", found_index);
    if (found_index == -1)
    {
        printf("No match\n");
    }
    else
    {
        printf("Number is at index %d.\n", found_index);
    }
    return (0);
}