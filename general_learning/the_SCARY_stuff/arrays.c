#include <stdio.h>

int mynums[] = {25, 100, 68}; // LISTS CANNOT BE MIXED DATA TYPES
int artificial_int_list[4];   // we say that it will consist of 4 integers but do not put anything here yet
int main()                    // index works here
{
    mynums[1] = 61; // you can change values via index
    printf("%d\n", mynums[1]);

    artificial_int_list[0] = 1;

    printf("%i", sizeof(mynums)); // formula is (type_specifier) * len(list)
    // so here weve got int, int is 4 bytes, 4 * len(list) = 4 * 3 = 12. Cool!

    // but what if we want actual length?
    int g = sizeof(mynums) / sizeof(mynums[0]);
    // how it works: if were specifying that this list is int, everything in it must be an int.
    // hence int is 4, we just take the (type_specifier) * len(list) and divide it by 1 element in the list because of ^^^
    // sizeof(mynums) is 20, thats our max value
    // sizeof(mynums[0]) is 4
    // 20/4 = 5 which is the length of the list

    int i;
    int arr[] = {1, 2, 3, 4};

    for (i = 0; i < 4; i++) // first method is unreliable, it is only when your list is a constant size.
    {
        printf("%d\n\n", arr[i]);
    }

    int length = sizeof(arr) / sizeof(arr[1]);
    for (i = 0; i < length; i++) // more reliable, it is whenever youre typing a non-constant list
    {
        printf("%d\n", arr[i]);
    }

    // or you can make a one liner

    for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        printf("works too.\n");
    }
}
