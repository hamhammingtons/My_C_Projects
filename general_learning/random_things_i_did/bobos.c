#include <stdio.h>

void reverse_string(char *ptr_to_start)
{
    int first_Letter_int = (int)*ptr_to_start;
    while (*ptr_to_start != '\0')
    {
        ptr_to_start++;
    }
    ptr_to_start--;
    while ((int)*ptr_to_start != first_Letter_int)
    {
        putchar((int)*ptr_to_start);
        ptr_to_start--;
    }
    putchar(first_Letter_int); // replace with do while
}

int main()
{
    char string[] = "He124214llo";
    char *ptr = string;
    reverse_string(ptr);
}

// this sucks please do something else