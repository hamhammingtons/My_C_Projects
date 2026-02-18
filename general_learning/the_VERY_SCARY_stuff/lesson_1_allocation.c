// The process of reserving memory is called allocation
// C has two types of memory: Static memory and Dynamic memory
#include <stdio.h>
#include <stdlib.h>

int students[20]; // static memory
// We tell C that this memory space of 80 bytes (20*4) should be allocated in memory BEFORE the program runs.
// again, BEFORE.

/*
Whats the deal with static?
So look, we say that static is something that will be allocated before the program runs;
meaning if you have an array of students which will have 20 slots,
if you only use 12 of these slots, you will be wasting 8 slots, which is 32 bytes.

So if you do it like this, your code will be running slower than expected, OF COURSE ONLY if youre practicing static memory a lot.*/

// CODE ---- CODE ---- FOR DYNAMIC MEMORY ------------ CODE ----- CODE ----

// int LENGTH;
// printf("Enter length: ");
// scanf("%d", &LENGTH);

// char *Allocation = (char*)malloc(LENGTH * sizeof(char));

// if (Allocation == NULL) {
//     return 1;
// }

// for (int i = 0; i < LENGTH; i++) {
//     Allocation[i] = 'A' + i; // Fills with A, B, C
// }

// for (int i = 0; i < LENGTH; i++) {
//     printf("%c ", Allocation[i]);
// }

// free(Allocation);
// Allocation = NULL;

// CODE ---- CODE ----

/*
Dynamic memory is memory that is allocated after the program starts running.

Why do we usually use it?
you have full control over how much memory is being used at any time;
you can write code to determine how much memory you need and allocate it

Why its hard:
it can only be accessed with pointers using either malloc or calloc

GOTO C:\Users\Admin\OneDrive\Изображения\Снимки экрана\malloc_help.png OR 'malloc_help.png' for short to get more info
*/
main()
{
}