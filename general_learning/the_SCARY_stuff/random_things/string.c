#include <string.h>
#include <stdio.h>
char string[] = "hello world";

char strin[] = {'h', 'a', '\0'}; // MUST BE IN SINGLE QUOTES

/*Whats \0? \0 is known as the "null terminating character", and must be included when creating strings using this method. ^^^
It tells C that this is the end of the string.*/

/*Besides that
Refer to do anything with strings (besides built-in methods) the same way as you do in python.
They behave as lists, so it is almost the same a list but as a list of characters*/

/*luckily enough, string.h exists, it helps us to work with strings.*/

char test_string[] = "Hello there person";

int main()
{
    printf("%s\n", string);

    printf("%zu\n", strlen(test_string)); // gets length, also deletes the null terminating character
    // remember that sizeof will return SIZE in BYTES (%zu), NOT the actual length.
    char j[20] = "hello"; // problem wit dis: char must be always be able to strore both of these strings combined
    char r[] = "world";

    char str1[20] = "Hello World!";
    char str2[20];
    strcpy(str2, str1);

    printf("%s", str2);

    strcat(j, r);
    printf("%d", strcmp(str1, j)); // to compare strings
    printf("%s", j);
};