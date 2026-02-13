#include <stdio.h>
float cool = 5 / 2;       // implicit, will NOT be 2.5, but 2.0 instead.
float sum = (float)5 / 2; // explicit

/*
2 main methods of type conversion
1. Implicit: it is done by the compiler, however it can be quite confusing and misleading becuase of it not being
documented well enough in your code

2. Explicit: it is when you manually assing the output of an equation for example 5/2 and it becomes 2.5, then you store it as a float
in your variable. (float) 5/2
*/
int main()
{
    printf("%f and %f", sum, cool);
    return 0;
}