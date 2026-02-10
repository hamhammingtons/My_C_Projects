#include <stdio.h>

void myfunction() // void is used to return nothing
{
    printf("Hello 2\n");
}

void greet_new(char name[])
{
    printf("Hello, %s\n", name);
}
void calc(int x, int y, int z)
{
    printf("sum: %d\n", (x + y + z)); // you cannot do multiassignment for some reason
}

void advanced(int array[], int length)
{
    // if ((sizeof(array) / sizeof(array[0])) == length)
    // NEVER DO THIS! ^^^
    // because the int array is now actually a pointer to the first object of the list.
    // a pointer to the list is 8 bytes, whilst the int (first element) is 4 bytes
    // 8/4 = 2. We do not need this.

    // you just have to trust the user, theres no way you can do anything about it.
    // int *control_pointer = &array;
    // again, this just creates a double pointer. DOnt do this. instead do
    int *control_pointer = array; // mentioning the thing again, do not use & when youre not mentioning a specific object inside an obj.

    for (int i = 0; i < length; i++)
    {
        printf("%d\n", *control_pointer);
        control_pointer++;
    }
}
int main()
{
    printf("Hi\n");
    myfunction();
    greet_new("Hello");
    calc(12, 4, 1);
    int list[3] = {1, 2, 3};
    advanced(list, 3);
}