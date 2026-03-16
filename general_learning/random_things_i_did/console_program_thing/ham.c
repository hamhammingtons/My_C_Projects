#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

typedef struct setup
{
    char *name;
    int parameters_count;
    void (*function_to_where)(char *arguments[], int arguments_count);
} Command_SETUP;

// Function prototype
// Command_SETUP *validate_command(Command_SETUP *list, char *input, int size);

/*
Neccesary commands to run (proccesing)
*/

void ham_get_user(char *arguments[], int arguments_count)
{
    // logic
}

Command_SETUP commands[1] = {
    {"ham-user", 0, ham_get_user},
};

int main(int argc, char *argv[])
{
    int number_of_commands = sizeof(commands) / sizeof(commands[0]);

    Command_SETUP *cmd = validate_command(commands, "ham-user", 0, number_of_commands);

    if (cmd == NULL)
    {
        printf("error: the command doesnt exist.");
        return 1;
    }
    // now you can work with cmd, the struct address
}

Command_SETUP *validate_command(Command_SETUP *list, char *input_name, int arguments, int size)
{
    // checking if exists and finding the struct
    // size is the 'number_of_commands' which shows us the ammount of element we have in our list.
    for (int i = 0; i < size; i++)
    {
        if (strcmp(list[i].name, input_name) == 0)
        {
            if (list[i].parameters_count == arguments)
            {
                return &list[i];
            }
            else
            {
                arguments = 0;
                return &list[i];
            }
        }
    }
    return NULL; // command doesn't exist
}