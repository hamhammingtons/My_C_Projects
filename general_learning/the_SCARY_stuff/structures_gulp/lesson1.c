#include <stdio.h>
#include <string.h>
struct lesson1 // declaration
{
    int integer;
    char character[30];
};

int main()
{
    struct lesson1 First_Struct; // jus like a class in python we have to create a copy of it to actually use its properties
    First_Struct.integer = 5;
    /*
    problem
    we cant really assign strings in structs this way:
    ...char bobo[23];
    but what you can do is: (below)*/
    strcpy(First_Struct.character, "Hello");

    printf("%d, %s", First_Struct.integer, First_Struct.character);

    struct lesson1 Second_Struct = {13, "hello"}; // we dont need strcopy this way

    return 0;

    // we can also make a copy (not a pointer) as a struct
    struct lesson1 Copy_of_original = First_Struct;

    /*NEW
    also you can use strcut pointer so you dont have to copy the data
    ( for exampel lets say you have 100 ints in a list and you have to change a value)
    a pointer is 8 bits and it is extreemly fast for changing values */

    struct lesson1 *pointer = &First_Struct;
    // now it points to the first element of first_struct
    // we can change the value
    // BAD: (*ptr).integer =5
    // instead do
    pointer->integer = 5;
}