#include <stdio.h>
#include <stdlib.h>
void to_ascii(int value);

int main()
{
    char a[] = "0x72";
    int b = strtol(a, NULL, 16); // to convert hex to decimal
    printf("%d", b);
}
