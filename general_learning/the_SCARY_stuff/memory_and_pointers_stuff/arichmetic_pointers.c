#include <stdio.h>

// Pointer arithmetic means changing the value of a pointer to make it point to a different element in memory.

int main()
{
    int myNumbers[3] = {10, 20, 30};
    int *p = myNumbers; // myNumbers[0]

    printf("%d\n", *p); // 10
    p++;                // move to myNumbers[1]
    printf("%d\n", *p); // 20
    p--;                // back to myNumbers[0]
    printf("%d\n", *p); // 10

    p += 2;             // jump to myNumbers[2]
    printf("%d\n", *p); // 30

    int *pointer1 = &myNumbers[0];
    int *pointer2 = &myNumbers[2];

    printf("%ld\n", pointer2 - pointer1); // NOT BYTES- THIS IS LENGTH

    /*
    little observation
    pointers actually behave not the same way as they intend to
    they depend on the size of the object
    so if the array is an int array, it will be 4 bits
    example: we start at 1000 bits, and then we do
    pointer++
    then it actually moves by 4 bytes
    so it will be 1004
    same with char-> 1 byte -> 1000 + 1 = 1001
    */
    p = myNumbers; // remember
    for (int i = 0; i < 3; i++)
    {
        printf("%p\n", *p);
        p++;
        // why do this
        // we used *(p+i) but here we dont need it at all.
    }
}