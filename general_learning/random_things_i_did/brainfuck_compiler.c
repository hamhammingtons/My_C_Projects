#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int check_if_brainfuck_code(char code[], int size);
void execute_brainfuck(char code[], int size);

int main()
{
    char input[] = "++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++.";
    int sizeof_thing = strlen(input);

    // Only execute if the check returns 0 (Success)
    if (check_if_brainfuck_code(input, sizeof_thing) == 0)
    {
        execute_brainfuck(input, sizeof_thing);
    }

    return 0;
}

int check_if_brainfuck_code(char code[], int size)
{
    const char ALLOWED_FUNC[8] = {'<',
                                  '>',
                                  '+',
                                  '-',
                                  '[',
                                  ']',
                                  ',',
                                  '.'};

    // outer loop is the code
    // inner is the ALLOWED_FUNC

    /*
    NOTE: when youre doing a for loop search: we use break; to stop the inner if what we need is found so the outer can continue
    to check if a variable actually existed use a variable which will override itself each time the loop runs
    if not variable then return 1*/
    for (int i = 0; i < size; i++)
    {
        int found = 0;
        for (int h = 0; h < 8; h++)
        {
            if (code[i] == ALLOWED_FUNC[h])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("bad st");
            return 1;
        }
    }
    return 0;
}

void execute_brainfuck(char code[], int size)
{
    if (check_if_brainfuck_code(code, size) == 1)
    {
        printf("error: check_if_brainfuck_code failed.");
        return;
    }

    unsigned char *EXEC_LIST_DEFAULT = (unsigned char *)calloc(30000, sizeof(unsigned char));
    unsigned char *CHANGE_VALUE_PTR = EXEC_LIST_DEFAULT;

    for (int cur_func_code = 0; cur_func_code < size; cur_func_code++)
    {
        switch (code[cur_func_code])
        {
        case '+':
            (*CHANGE_VALUE_PTR) += 1;
            break;
        case '-':
            (*CHANGE_VALUE_PTR) -= 1;
            break;
        case '>':
            CHANGE_VALUE_PTR++;
            break;
        case '<':
            CHANGE_VALUE_PTR--;
            break;
        case '.':
            putchar(*CHANGE_VALUE_PTR);
            break;
        case '[':
            if (*CHANGE_VALUE_PTR == 0)
            {
                int depth = 1;
                while (depth > 0)
                {
                    cur_func_code++;
                    if (code[cur_func_code] == ']')
                        depth--;
                    if (code[cur_func_code] == '[')
                        depth++;
                }
            }
            break;
        case ']':
            if (*CHANGE_VALUE_PTR != 0)
            {
                int depth = 1;
                while (depth > 0)
                {
                    cur_func_code--;
                    if (code[cur_func_code] == ']')
                        depth++;
                    if (code[cur_func_code] == '[')
                        depth--;
                }
            }
            break;
            // case ' ': -- useless if you want to do this then a space case to ALLOWED_FUNC.
            //     continue;
            //     break;
            // }
        }
    }
    printf("\n--CONCLUDED");
    free(EXEC_LIST_DEFAULT);
    EXEC_LIST_DEFAULT = NULL;
    CHANGE_VALUE_PTR = NULL;
}