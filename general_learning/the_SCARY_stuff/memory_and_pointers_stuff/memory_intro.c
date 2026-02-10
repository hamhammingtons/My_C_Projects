#include <stdio.h>

int main()
{
    int myAge = 43;
    int *myage_pointer = &myAge; // here we create a pointer that points to myage memory adress. & is used for assigning the
    // hex value so we get actual slot in memory
    printf("%p\n", &myAge); // & is called a pointer. Returns hex here. This is the manual method

    printf("%p - val\n", myage_pointer);
    printf("%p - actual value\n -- cool stuff starts here: \n", *myage_pointer);
    int mylist[] = {1, 2, 3, 4};
    int count = sizeof(mylist) / sizeof(mylist[0]);
    for (int i = 0; i < count; i++)
    {
        printf("%p\n", &mylist[i]);
    }

    // The memory address of the first element is the same as the name of the array:
    int *toprove = &mylist[0];
    int *toprove2 = mylist;
    // NOTE: whenever youre pointing to not a specific part of a list or str or etc. DO not use the & operator.
    // use *qeufnqe... instead. thats its
    (toprove2 == toprove2) ? printf("Yes") : printf("No");

    /*
    new
    so whenever youre using a pointer, the pointer can actually work as a for loop. well not exactly a for loop,
    so because we say that its pointing to the first item of the list, we can just +1 the index and thats it.
    then it will switch to another element
    */

    printf("%p\n\n", *(toprove2 + 1)); // switches from 1 to 2. Check our list.

    for (int i = 0; i < 4; i++)
    {
        printf("%p\n", *(toprove + i)); // NOTE: whenever youre doing this kind of algorithm
        // PLEASE make sure to do NOT +1, but +(iterator var)
        // BECAUSE it wont work otherwise.
    }

    *(toprove + 1) = 1835;
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", mylist[i]);
    } // very weird
}