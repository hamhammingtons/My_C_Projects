#include <stdio.h>

int main()
{
    //     FILE *fptr;
    //     fptr = fopen("booboogg.txt", "w");
    //     fprintf(fptr, "Hello from C");
    //     fclose(fptr);
    // FOR WRITING ^^^

    FILE *fptr;
    fptr = fopen("booboogg.txt", "r");
    char readability[100];
    fgets(readability, 100, fptr);
    printf("%s", readability);
    fclose(fptr);
}