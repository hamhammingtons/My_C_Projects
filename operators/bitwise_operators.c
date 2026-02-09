#include <stdio.h>
int fat = 1;

int main()
{
    fat <<= 3;            // move it 3 spaces right in bitwise in binary
    printf("%d \n", fat); // now its 8
    // ... 00000001 -- initial value
    // ... 00001000
    // so we acutally go 4 steps! becuase for human readability we start from 'slot 0'
    // so 00000001 - the 1 is slot 0
    // so slot 0: 1 step to slot 1 [slot 0 doesnt really count, it wont be a part of our <<= 3]
    // then the actual thing starts.

    // OR operator
    fat |= 2;
    printf("%d\n", fat);
    /*a bit complicated but easy as well
    imagine if we have 2 columns:
    0 1 0 1
    1 0 1 0
    those are binary columns, so basically how this works is:
    if in the comparisons at least 1 row has the number 1, then it keeps it in the result, and places it there
    so for example if i had "1 row: 0" and "2 row: 1" and we are comparing it with this operator, it will inherit the 1 for the first row.

    so then in our first example, the binary number will be 1111, which will correspond to 15 in decimal.

    */

    // AND operator
    fat &= 8;
    printf("%d", fat);
    // basically, check in binary if the current row == the number[binary of the num] you want, and changes the results based of it
    /*
    for example:
    0 1 1 1
    1 0 0 1
    this will go for each row so
    if 0 = 0 then keep 0
    if 1 = 1 then keep 1
    BUT
    if the combo is 0 = 1 then it keeps 0-"False" because 0 doesnt equal to 1

    so our example[not the actual example but the one on top] would be
    0001 which is 1 in decimal*/

    fat ^= 8;
    /*same thing as 'and' but if it is true then it switches them to 0 if the bits are the same
    and 1 if theyre not.
    */
    // 1000 (8)
    // 1000 (8)
    // ----
    // 0000 (0)
    printf("%d", fat); // Outputs 0
}

/*MORE IMPORTANT
whenever youre comparing something like
something &= 8
it means that youre looking for the bit in the position that carries the weight of 8
ex
Bit Position	Bit 7	Bit 6	Bit 5	Bit 4	Bit 3	Bit 2	Bit 1	Bit 0
Value	        128	    64	    32	    16	    8	    4	    2	    1

you find the value of 8 which is bit 3
then you only recive the value of 8 and its binary number
so if your fat was 10
=0000 1010
and if your value was bit 3
=0000 1000

then it is like for looped by bits
bit 0 in value[0] = bit 0 in fat[0] = return 0
bit 1 in value[0] = bit 1 in fat[1] = return 0

also if you want something like fat &= 9
then there isnt a slot 9 in bit values, so it would equal to
bit 0 + bit 3 = 9

*/