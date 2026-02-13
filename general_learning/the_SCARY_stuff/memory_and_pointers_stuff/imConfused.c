#include <stdio.h>

int add(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }

void calculator(int x, int y, int (*function)(int, int))
{
    int res = function(x, y);
    printf("%d", res);
}

int main()
{
    calculator(1, 2, minus);
}