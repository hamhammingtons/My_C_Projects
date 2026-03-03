#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum FLAG_STR_TO_NUM
{
    NUMERATE_M = 1
};
typedef struct command_check_fill_roadmap // we use * to mention that it is a string
{
    char *comm_name;
    char flag;
    char *arg;
} command_t;

typedef void (*permitted_commands)(command_t *);

void cat(command_t *user_input)
{
    if (!user_input->arg)
        return;

    FILE *f_pointer = fopen(user_input->arg, "rb");
    if (!f_pointer)
    {
        perror("Error");
        return;
    }

    fseek(f_pointer, 0, SEEK_END);
    long sizeof_file = ftell(f_pointer); // tells us bytes
    // fseek -> the end of the file; ftell -> tell where we are right now (line for example)
    rewind(f_pointer);

    char *content = malloc(sizeof_file + 1); // +1 for the null terminator
    if (!content)
    {
        fclose(f_pointer);
        return;
    }
    size_t read_size = fread(content, 1, sizeof_file, f_pointer);
    content[read_size] = '\0';

    switch (user_input->flag)
    {
    case NUMERATE_M: // TODO: do this
        /* code */
        break;

    default:
        break;
    }
    printf("%s", content);

    free(content);
    fclose(f_pointer);
    f_pointer = NULL;
}

permitted_commands allowed_functions[] = {cat};

int main()
{
    command_t cmd = {"cat", "default", "fat.txt"};
    allowed_functions[0](&cmd);
    return 0;
}

// NOTE: re-learn file handling again
/*https://www.youtube.com/watch?v=kJ70tXVYnws&list=PLfVsf4Bjg79BOmLYBRTwqCIkGPiOWb7xj*/