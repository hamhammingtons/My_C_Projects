#include <stdio.h>

/*
hex is called base 16
hex is very simple
if in binary we carry over when we reach to 10, for example 0010 -> 1 is carried to the left
here we just use letters
A = 10 -- (binary)1010
B = 11 -- (binary)1011
C = 12 -- (binary)1100
D = 13 -- (binary)1101
...
F = 15 -- (binary)1111

HEX REPRESENTS 4 BITS. <--------------------------

since a byte is 8 bits, for a binary number like 10101011
we just split it in half

1010 = A
1011 = B
so its 0xAB;*/

int hex_value = 0xFF;

int main()
{
    printf("%x\n", 255);
    printf("%x\n", 124);
    /*
    now about how to read hex
    so everything in hex is the power of 16 (called base 16)
    so if we have something like 7C
    we just need to times them (numbers only)

    --7c--
    7 x 16 = 112
    c = 12
    112 + 12 = 124


    --ab--
    (10*16)+(11*16)= 171
    */

    // how to use bitwise operators with hex

    int result = 0xABCD & 0x00FF;
    // this just extracts CD from 0xABCD.
    // 0x00FF - the 00 mean.. 0, so it just changes these values to 0 too.
    // Truth table example: 10 AND 0 -> 0 (false); 11 AND 0 -> 0 (false)
    // So thats why this 'filter' works. Remember to use Binary And logic [only if all are true -> true].

    // how to use shifts with hex

    int test_use = 0xAA;
    int size_of_hex = 4;

    test_use = test_use << (2 * size_of_hex); // RIGHT
    /*
    it works like this: you are telling every bit to take a step to the left (4 bit - 1 step)
    before - _ _ A B;
    after  - _ A B 0;
    */

    // >> will be Deleting Last Slot And Replacing It by The Thing that comes BEFORE last slot.
    // And That deleted last slot will become 0.

    // SLOT 1 - SLOT 2 ->
    // 0 - SLOT 1;
    /*
    youre telling each bit to go right by 1 step (4 bit = 1 step)
    before: A B
    after: SWAP HERE: A B -> (A comes before B -> A is kept, B is thrown out) -> 0A */
    int swap = 0xAB;
    swap = swap >> 4;
    printf("%x -- swap\n", swap);

    printf("%x\n", test_use);

    // how to use bitwise OR with hex

    int use_case = 0xAB;
    int what_We_want_to_add = 0xCD;

    use_case = use_case << (2 * size_of_hex);
    int result_2 = use_case | what_We_want_to_add;
    printf("%x\n", result_2);

    // truth table: 12 OR 0 = 12; 13 OR 0 = 13
    // thats why ABCD is created. We shift AB to make a result.
}