#include <stdio.h>

enum level
{
    LOW = 10,
    MEDIUM = 750,
    HIGH = 10315
    // if you dont assign a value it will just be the last value + 1
};

int main()
{
    enum level var = MEDIUM;
    printf("%d\n", var);

    switch (var)
    {
    case 1:
        printf("bad");
        break;

    default:
        break;
    }
}