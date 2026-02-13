#include <stdio.h>
// int add(int x, int y);

// int main()
// {
//     int result = add(5, 3);
//     printf("%d", result);
//     return 0;
// }

// int add(int x, int y)
// {
//     return x + y;
// }

// // very weird format of doing this, but its better i think

int max_num(int *arr, int length);
int sum(int *arr, int length);

int main()
{
    int array[] = {2, 3, 141, 1458};
    int length_one = sizeof(array) / sizeof(array[0]);

    int res = max_num(array, length_one);

    printf("%d", res);
    int d = sum(array, length_one);
    for (int i = 0; i < length_one; i++)
    {
        printf("%d\n", array[i]);
    }
}

int max_num(int *arr, int length)
{
    int max = *arr;

    for (int i = 0; i < length; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    return max;
}

int sum(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        *arr += 2;
        arr++;
    }
}