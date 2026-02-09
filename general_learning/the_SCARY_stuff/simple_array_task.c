#include <stdio.h>
int array[] = {1, 121, 2, 5};

int bubble_sort()
{
    int newarr[] = {1214, 412125, 124128, 1244};

    int len = sizeof(newarr) / sizeof(newarr[0]);

    for (int left_index = 0; left_index < len; left_index++)
    {
        for (int right_index = left_index + 1; right_index < len; right_index++)
        {
            if (newarr[left_index] < newarr[right_index])
            {
                int temp = newarr[left_index];
                newarr[left_index] = newarr[right_index];
                newarr[right_index] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d \n", newarr[i]); // Print each element followed by a space
    }
}

int main()
{
    int minium = array[0];
    int maxium = array[0];

    int len = sizeof(array) / sizeof(array[0]);

    // i could actually make a coroutine but i dont know how to make it
    for (int i = 0; i < len; i++)
    {
        if (array[i] < minium)
        {
            minium = array[i];
        }
        else if (array[i] > maxium)
        {
            maxium = array[i];
        }
    }
    printf("%d - is the lowest number \n", minium);
    printf("%d is the biggest number\n\n", maxium);
    bubble_sort();
}