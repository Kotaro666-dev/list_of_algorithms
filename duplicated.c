#include <stdio.h>

// after listening to the answer
int main(void)
{
    // Variable
    int N = 0;
    int A[200000];
    int check[200000];
    int i, j, x, y;

    // Input the data
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // finding the duplicated number and the missing number
    x = 0;
    y = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 1; j < N + 1; j++)
        {
            if (j == A[i])
            {
                check[j] = check[j] + 1;
            }
        }
    }

    for (i = 1; i < N + 1; i++)
    {
        if (check[i] == 2)
            x = i;
        else if (check[i] == 0)
            y = i;
    }
    
    // Return the answer
    if (x == 0 && y == 0)
    {
        printf("Correct");
    }
    else
    {
        printf("%d %d", x, y);
    }    
    return (0);
}


// My solution
/* 
void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

// sorting the array by using Bubble sort

int main(void)
{
    // Variable
    int N = 0;
    int A[200000];
    int i, j, x, y;

    // Input the data
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // Sorting in ascending order  
    for (i = 0; i < N - 1; i++)
    {
        for (j = N - 1; j > i; j--)
        {
            if (A[j] < A[j - 1])
            {
                swap(&A[j], &A[j - 1]);
            }
        }
    }
    
    
    x = 0;
    y = 0;
    for (i = 0; i < N; i++)
    {
        // Finding the duplicated number(x)
        if (A[i] == A[i + 1])
        {
            x = A[i];
        }
        // Finding the missing number(y)
        if (!(A[i] == A[i + 1]) && (A[i] + 1) != A[i + 1] && i + 1 < N)
        {
            y = A[i] + 1;
        }
        // Break from the loop
        if (x != 0 && y != 0)
        {
            break;
        }
    }
    
    // Return the answer
    if (x == 0 && y == 0)
    {
        printf("Correct");
    }
    else
    {
        printf("%d %d", x, y);
    }
    return (0);
}
*/ 