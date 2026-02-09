#include <stdio.h>
// it is almost the same thing as pyhon but here its like
// (cond) ? true_here : false_here
int main()
{
    int thing = 1;
    (thing <= 1) ? printf("goot") : printf("bad");

    int age = 20;
    (age >= 18) ? printf("\nallowed") : printf("\nnot allowed");
    return 0;
}
