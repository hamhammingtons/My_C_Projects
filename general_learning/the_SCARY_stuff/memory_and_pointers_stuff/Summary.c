/*
ive made a lot of progress in C especially in pointers but they are very confusing
theyre are physical slots for example when you need to change a variable
but i am stupid a bit i need to revise them every time
thats why im writing this
*/
#include <stdio.h>
//
int add(int x, int y) { return x + y; }
int divide(int x, int y) { return x / y; } // wrong but it has to return INT
//

void change_val(int *arr, int index, int value);

void call_func(void (*function_name)());

int calculator(int x, int y, int OPER_ID); // oper id is pretty cool look at the bottom

void template_function() { printf("Hi from template.\n"); };

int list[] = {
    2,
    3,
    4,
};

int main() // fix this plz i forgot
{
    change_val(list, 2, 1248);
    call_func(template_function);
    calculator(1, 2, 0); // feels like magic numbers but uhh cant do nothing
}

void change_val(int *arr, int index, int value)
{
    arr[index] = value;
    printf("Value changed. \n");
    for (int i = 0; i < 3; i++) // bad practice ask user for a size plz
    {
        printf("%d\n", arr[i]);
    }
}

// we use * in this case to create a pointer to the original array so we can replace data
// we DONT use *arr[index] = value because we already have got a pointer, which can point to data.
// also this arr[index] is like a slient *(arr + index)

// CALL_FUNC METHOD
//
void call_func(void (*function_name)())
{
    function_name();
    printf("Code above is executed by (address) %p\n ", (void *)function_name);
    // (void *)function_name isnt really that important, its just so %p can work correctly. Returns hex.
}

// CALCULATOR

int calculator(int x, int y, int OPER_ID)
{
    int (*OPER_ALLOWED[2])(int, int) = {add, divide}; // jump table
    /*
    so its basically like this format:

    name,   role,       adress,     content
    add,    func,       0x100,      binary num to do add
    oper[0] array slot, 0x00,       0x100 (pointer to add)

    */
    // int D = OPER_ALLOWED[0](1, 2);
    // printf("WRN: %d", D);

    if (OPER_ID >= 0 && OPER_ID < 2)
    {
        return OPER_ALLOWED[OPER_ID](x, y);
    }
    else
    {
        printf("incorrect type.\n");
        return -1;
    }
}