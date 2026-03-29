#include <stdio.h>
#include <string.h>

int main()
{
    char *password = "1234";
    char user[4];

    printf("enter");
    scanf("%s", &user);

    if (strcmp(password, user) == 0)
    {
        printf("Correct");
    }
}