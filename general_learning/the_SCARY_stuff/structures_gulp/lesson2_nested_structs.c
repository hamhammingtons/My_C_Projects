#include <stdio.h>

struct Owner
{
    char firstName[30];
    char lastName[30];
};

struct Car // declare a main struct and then contain every sub container inside of it
{
    char brand[30];
    int year;
    struct Owner owner; // Nested structure
};

int main()
{
    struct Owner person = {"John", "Doe"};
    struct Car car1 = {"Toyota", 2010, person};
    /* here car becomes the parent and owner becomes the child */

    printf("Car: %s (%d)\n", car1.brand, car1.year);
    printf("Owner: %s %s\n", car1.owner.firstName, car1.owner.lastName);

    return 0;

    struct Car *pointer = &car1;
}
