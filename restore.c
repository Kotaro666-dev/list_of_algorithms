#include <stdio.h>

int main(void)
{
    int N, Q;
    char line[500];
    int i;

    // Input the data
    scanf("%d %d", &N, &Q);
    for (i = 0; i < Q; i++)
    {
        fgets(&line[i], sizeof(line[i]), stdin);
    }
    for (i = 0; i < Q; i++)
    {
        printf("%d = %s", i, line[i]);
    }



    return (0);
}