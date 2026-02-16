#include <stdio.h>

typedef struct car_struct_generator
{
    char name[30];
    int in;
} car_gen; // aliases REALLY come in handy.

void change_in(car_gen *c);

int main()
{
    car_gen Car1 = {"Hello", 1};
    car_gen *pointer = &Car1;

    printf("%s, %d\n", pointer->name, pointer->in);
    change_in(&Car1);
    printf("%d", pointer->in);
}

void change_in(car_gen *c)
{
    c->in = 69124;
}