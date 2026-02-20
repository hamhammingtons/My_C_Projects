#include <stdio.h>

typedef struct
{
    int DD;
    int MM;
    int YY;
    char format[9];
} Time;

void format_members(Time *acces_ptr, int *array_here, int size);

int main()
{
    Time time_rnd = {.DD = 12, .MM = 7, .YY = 6};
    int arr[] = {time_rnd.DD, time_rnd.MM, time_rnd.YY};

    format_members(&time_rnd, arr, 3);
    printf("%s", time_rnd.format);
    return 0;
}

//*problem: if we do explicit or implicit method of converting data types the int will be moved to a char which we dont want

void format_members(Time *acces_ptr, int *array_here, int size)
{
    char *ptr = acces_ptr->format;
    int written = 0;
    for (int i = 0; i < size; i++)
    {
        written = sprintf(ptr, "%d%s", array_here[i], (i < size - 1 ? "/" : ""));
        ptr += written;
    }
}

// this took me like 2 hours for some reason