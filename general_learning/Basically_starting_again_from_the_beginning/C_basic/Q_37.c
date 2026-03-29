#include <stdio.h>
#include <stdlib.h>

void Is_InRange(int x, int y);

int main()
{
    Is_InRange(10, 13);
}

void Is_InRange(int x, int y)
{
    char *result_list = malloc(sizeof(char) * 2);
    if (result_list = NULL)
    {
        printf("failed");
        return;
    }

    printf("%s", result_list[0] + ',' + result_list[1]);
}
