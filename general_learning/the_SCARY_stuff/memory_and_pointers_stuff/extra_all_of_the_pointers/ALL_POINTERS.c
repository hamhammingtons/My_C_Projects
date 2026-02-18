#include <stdio.h>
// typed pointer
// used for: reference size [basically for stepping--], stepping(ex, int *ptr = ... ptr++ [1000 -> 1004]),
// also used for structs like ptr->...

int data = 1;
int *ptr = &data;

// void pointer
// used for: telling an adress; thats about it. Also can be used to call functions (which is weird)
// honorable mentions: qsort, malloc.

void *void_ptr = &data;

typedef void (*run_function)(char[]);

void message(char bombom[12])
{
    printf("%s", bombom);
}

// the NULL pointer

int main()
{
    printf("%p -- typed pointer \n ", (void *)&ptr);
    printf("%d -- unreferenced typed pointer\n\n", *ptr);
    // ^^ shows: can hold the data type, the size.

    printf("%p -- the void pointer (VIA CASTING)\n", &void_ptr);
    // we can only do casting to get the data type.
    int *derefrenced_void_ptr = (int *)void_ptr;
    printf("%d -- unreferenced void pointer\n", *derefrenced_void_ptr);
    // ^^ shows: can only hold the memory adress but not the data type UNLESS you cast it.
    run_function mes;
    mes = message;
    mes("hello -- message from a void pointer function (typedef)");
    // ^^ this shit is way too scary just look it up
}