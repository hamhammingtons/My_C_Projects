#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct TGOP // next time use typedef
{
    bool User_Admin;
};

typedef struct user
{
    char OutputStatus[30];
} user_mode;

void ToSetUpDefault_User(user_mode *c);

struct container_user
{
    struct TGOP User_Permissions; // user_perm.. is now tgop
    user_mode User_Properties;
};

int main()
{
    struct container_user person1;

    person1.User_Permissions.User_Admin = false;
    ToSetUpDefault_User(&person1.User_Properties);

    printf("Admin: %s\n", person1.User_Permissions.User_Admin ? "Yes" : "No");
    printf("Status: %s\n", person1.User_Properties.OutputStatus);

    return 0;
}

void ToSetUpDefault_User(user_mode *c)
{
    strcpy(c->OutputStatus, "MODE: User");
}