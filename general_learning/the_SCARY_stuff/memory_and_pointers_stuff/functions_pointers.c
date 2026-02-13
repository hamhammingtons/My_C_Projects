#include <stdio.h>
void hello() { printf("Hello"); }

void wrapper(void (*func)()) // it is like python decorators but cooler
// IT IS BASICALLY THIS COMBINED: int (*func_pointer)(int, int) = add;
// void - specify returns nothing (*functions_memory_addr) (parameters [if any])
{
    func();
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*func_pointer)(int, int) = add;
    int res = func_pointer(2, 3);
    printf("%d", res);

    wrapper(hello);
}