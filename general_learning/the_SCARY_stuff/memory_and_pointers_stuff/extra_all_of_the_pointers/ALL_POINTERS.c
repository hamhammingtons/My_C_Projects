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

// the NULL pointer - i wont mention it because its quite easy. its just a pointer which points to nowhere.
// we use it whenever we say 'im going to assign this later in code whenever i need it'.
// also it often or always comes after free() in memory allocation so we dont create a dangling pointer.
// also we use it because if we dont assign it to null it will just point to last ram something (garbage) which crashes everything.

// the double pointer
char *strings[] = {"hello", "world"};
// printf("%c", **(strings+1));
// this will acces strings[0] and because we did **
// a string is actually an array, so were accesing the strings here using *strings and then we do ** for accesing the actual list

// or another example
// weve got a null pointer pointing to nowhere inside the int main() function
// we want to pass it into a function outside of int main()
// we make the parameters of the function ** so we can get the value.
/*ptr_to_ptr: The address of the pointer variable in main.
 *ptr_to_ptr: The "Inner Pointer" (the address of the House).
 **ptr_to_ptr: The "Furniture" inside the house (the actual data).*/

int main()
{
    printf("%p -- typed pointer \n ", (void *)ptr);
    printf("%d -- unreferenced typed pointer\n\n", *ptr);
    // ^^ shows: can hold the data type, the size.

    printf("%p -- the void pointer (VIA CASTING)\n", void_ptr);
    // we can only do casting to get the data type.
    int *derefrenced_void_ptr = (int *)void_ptr;
    printf("%d -- unreferenced void pointer\n", *derefrenced_void_ptr);
    // ^^ shows: can only hold the memory adress but not the data type UNLESS you cast it.
    run_function mes;
    mes = message;
    mes("hello -- message from a void pointer function (typedef)");
    // ^^ this shit is way too scary just look it up
}