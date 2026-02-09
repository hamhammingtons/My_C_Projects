#include <stdio.h>

int character()
{
    char c = 'c';
    printf("%c\n", c);
}

// numbers part below

int returncoolthing()
{
    float bignumber = 32e3; // if youre using e it is always a float
    printf("%f\n", bignumber);
    // better method below
    printf("%.1f", bignumber); // now we only got the first 0 in the float, after the decimal point.
}

int main()
{
    character();
    returncoolthing();
}