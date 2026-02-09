#include <stdio.h>

int nots()
{
    int i, j;

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}

int main()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", i);
    }
    nots();
    return 0;
}