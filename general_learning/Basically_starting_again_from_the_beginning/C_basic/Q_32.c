#include <stdio.h>

int main()
{
    int what_to_divide;
    scanf("%d", &what_to_divide);
    for (int i = 0; i < 100; i++)
    {
        if ((i % what_to_divide) == 3)
        {
            printf("%d\n", i);
        }
    }
}