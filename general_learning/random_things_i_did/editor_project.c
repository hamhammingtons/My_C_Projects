#include <stdio.h>
#include <stdlib.h>

int run_editor(FILE *fptr);

int main(int argc, char *argv[]){
    // argc 1 will always be the name of the program 
    // argv is an array of strings (char pointers) that contains the command line arguments passed to the program
    if (argc < 2) {
        printf("Not enough arguments provided: FileName not provided", argv[0]);
        return 1;
    }

    FILE *main_file = fopen(argv[1], "w");
    if (main_file == NULL) {
        printf("Error opening file: %s", argv[1]);
        return 1;
    }
    fclose(main_file);


}

int run_editor(FILE *fptr) {
    char *input = malloc(sizeof(char) * 100);
    if (input == NULL) {
        printf("Memory allocation failed");
        return 1;
    }
    

}