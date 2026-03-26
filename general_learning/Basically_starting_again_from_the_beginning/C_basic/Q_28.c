#include <stdio.h>

int main()
{
    int list[5];

    for (int i = 0; i < 5; i++)
    {
        if (scanf("%d", &list[i]) == 1)
        {
            printf("success\n");
        }
        else
        {
            printf("err\n");
            return 1;
        }
    }

    int xi = 0; // make sure to declare vairables with a 0 if youre going to use them like a 0
    int ni = 0; // otherwise they will become garbage. i couldnt solve i came across this, i was using it undeclared.

    for (int i = 0; i < 5; i++)
    {
        if (list[i] > 0)
        {
            ni++;
            xi += list[i];
        }
        else
        {
            ni--;
        }
    }

    float avr = (float)xi / ni;
    printf("%2f", avr);
}