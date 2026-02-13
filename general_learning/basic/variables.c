#include <stdio.h>
/*if you want to do anything in c it pretty much must be inside a container, so
c doesnt have to think. my code:

'int myNum = 15;
printf("%d", myNum); // Outputs 15'

didnt work because of this.*/
int vo()
{
    int buha = 10, x = 2, c = 3;
    printf("%d From vo()\n", buha);
}

int multiassign()
{
    int x, y, z;
    x = y = z = 50;
    int sum = x + y + z;
    printf("%d From MultiAssign()", sum);
}

int main()
{
    int hello = 5;
    int testing_thing = 10;
    printf("%d\n", hello); // if youre printing out a value, please make sure to use format specifiers
    printf("hi, my bank account value is %d.\n", testing_thing);
    // ^ acts like regex, it caputres the thing that on the left, and then treats it as a digit. then it just puts it in there.
    vo();
    multiassign();
}
