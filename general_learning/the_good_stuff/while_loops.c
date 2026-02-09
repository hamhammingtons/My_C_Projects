#include <stdio.h>

int main()
{
    int maintain = 389;
    int reversed = 0;

    while (maintain)
    {
        reversed = reversed * 10 + maintain % 10;
        /*idk if im dumb but it works like this
        so the main job of the modulus is to cut the last part
        so we got 389 % 10 = 9 where 9 is the remainder (modulus works like 389 / 10, 9 cannot be divided, then 9 = remainder)
        then we just make a blank in reverse to fill up the spot of 0
        then we do 0 * 10 = 0
        0 + 9 = 9 which is our new blank
        then we do the same thing again
        9 * 10 = 90
        38 % 10 = 8
        90 + 8 = 98*/
        printf("%d\n", maintain);
        maintain /= 10;
    }
    printf("%d\n NEW STARTS BELOW\n", reversed);

    int original = 919;
    int original_copy = original;
    int reversed2 = 0;

    while (original)
    {
        reversed2 = reversed2 * 10 + original % 10;
        original /= 10; // dont forget this step
    }
    printf("%d - reversed2, original [copy] = %d\n", reversed2, original_copy);
    (original_copy == reversed2) ? printf("True\n") : printf("False\n");

    return 0;
}