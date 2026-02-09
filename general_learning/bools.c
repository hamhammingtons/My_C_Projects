#include <stdbool.h>
#include <stdio.h>
bool is = true;
/*bools are just kind of lying to you because this module just adds an extension to them so its easier to read and
so you dont have magic numbers lying around,
BUT still bools are still numbers, meaning True -> 1, False -> 0
*/

int main()
{
    printf("%d", is); // returns 1
}