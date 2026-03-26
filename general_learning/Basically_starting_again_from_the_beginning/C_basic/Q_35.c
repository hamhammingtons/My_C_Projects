#include <stdio.h>
#include <stdbool.h>

bool is_ascending(int *list, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (list[i] > list[i + 1])
            return false;
    }
    return true;
}

bool is_descending(int *list, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (list[i] < list[i + 1])
            return false;
    }
    return true;
}

int main()
{
    int l[] = {1, 2, 3};
    int n = sizeof(l) / sizeof(l[0]);

    if (is_ascending(l, n))
        printf("ascend\n");
    else if (is_descending(l, n))
        printf("descend\n");
    else
        printf("weird\n");
    return 0;
}
