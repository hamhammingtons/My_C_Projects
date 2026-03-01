#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("helloii.txt", "w+");

    if (fptr == NULL)
    {
        perror("err");
        return 1;
    }

    fputc(78, fptr);  // fputc is used to put either int which will be converted to ascii or just a char
    fputc('b', fptr); // format - ([num/char], stream)

    rewind(fptr); // rewind is used to go back into the start of the file

    int n = 0;
    while ((n = fgetc(fptr)) != EOF) // getc is used to get 1 character from the file
    {                                // here we use it to get a character and print it out simulateniously if its not eof
        printf("%c", n);
    }
    printf("\n");

    rewind(fptr); // again..

    char bobo[4];
    fscanf(fptr, "%3s", bobo); // we use fscanf to store what we found into a variable
                               // it uses flags too, similar to scanf
                               // format: stream, flag, where to store
    printf("read %s\n", bobo);

    fprintf(fptr, "%s", bobo); // we just use fprintf() because its in the same boat as fscanf
                               // we use it for appending something into a file with flags
                               // printf works the same way but it doesnt append anything
    rewind(fptr);

    char dwqe[10];
    fgets(dwqe, sizeof(dwqe), fptr); // we use fgets to get a string from a file
                                     // format: where to store, SIZE_OF where we storing, stream
    printf("%s", dwqe);
    if (feof(fptr))               // feof is usually an error state, it means that were in the end of file
    {                             // but here we use it to check if we are in the end of the file
        printf("EOF reached!\n"); // if feof > 1 -> it is end-of-file
    }

    fclose(fptr);
    return 0;
}
