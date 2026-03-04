#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum n
{
    NONE_FLAG = 0,
    NUMERATE_M = 1
} FLAG_STR_TO_NUM;

typedef struct command_check_fill_roadmap // we use * to mention that it is a string
{
    char *comm_name;
    char *flag;
    char *arg;
} command_t;

void cat(command_t *user_input);
FLAG_STR_TO_NUM handle_flag_to_num(char flag[3]);

typedef void (*permitted_commands)(command_t *);

permitted_commands allowed_functions[] = {cat};

int main()
{
    command_t cmd = {"cat", "-n", "fat.txt"};
    allowed_functions[0](&cmd);
    return 0;
}

void cat(command_t *user_input)
{
    FLAG_STR_TO_NUM flag_numeric = handle_flag_to_num(user_input->flag); // fetch for switch statement

    if (!user_input->arg)
        return;

    FILE *f_pointer = fopen(user_input->arg, "rb");
    if (!f_pointer)
    {
        perror("Error");
        return;
    }
    // memory stuff

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
    // memory stuff end

    // actual logic below

    switch (flag_numeric)
    {
    case NUMERATE_M:
        char current_line = 1;
        char is_start_of_line = 1;

        for (int i = 0; i < read_size; i++)
        {
            if (is_start_of_line)
            {
                printf("%6d ", current_line++);
                is_start_of_line = 0;
            }
            putchar(content[i]);

            if (content[i] == '\n') // dont forget it must be a '\n' because its a char not a "\n"
            {
                is_start_of_line = 1;
            }
        }

        break;

    default:
        printf("%s", content);
        break;
    }

    free(content);
    fclose(f_pointer);
    f_pointer = NULL;
}

FLAG_STR_TO_NUM handle_flag_to_num(char *flag)
{
    if (flag == NULL)
        return NONE_FLAG;
    else if (strcmp(flag, "-n") == 0) // 0 is True if identical
    {
        return NUMERATE_M;
    }
}