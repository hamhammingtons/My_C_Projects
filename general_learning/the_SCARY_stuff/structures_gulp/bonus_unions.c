#include <stdio.h>
typedef union Something
{
    int display_int;
    float display_float;
} data_change;

int main()
{
    data_change float_typ;
    float_typ.display_float = 5.000000;
    printf("%p, %p", (void *)&float_typ.display_float, &float_typ.display_int);
    // dont worry about (void*) its just a pointer to display memory address, will be learned later.

    /*
    i used this because:
    unions are dependant on which value they currently hold.
    in our case, the int diplay_int would share the same adress as display_float because its a 'union'
    00000064399FF90C, 00000064399FF90C
    */
}