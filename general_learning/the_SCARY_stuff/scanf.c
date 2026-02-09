#include <stdio.h>

int mynum;
char string[4]; // make sure to use char

int main()
{
    printf("Enter a number\n");
    scanf("%d", &mynum);
    printf("you entred %d \n", mynum); // can get any items because its just regex ex. scanf("%d %s"...)

    // but in case were using string we must specify how much bytes or characters, whatever you call it,we will need so it works properly
    printf("enter a name 4 digits \n");
    // scanf("%s", string); // you dont have to use the reference operator whilst talking about strings
    // now this is where the problem lies
    // because we dont specify the ammount characters we can pass thru the scanf, it will just take em all and put them
    // in the char strings, BYPASSING its [4] bytes limiter, where the last byte is the null terminator

    // in this case because we dont want buffer overflow we limit how much the use can pass
    scanf("%3s\n", string);
    // checking
    int size = sizeof(string) / sizeof(string[0]);
    printf("%d size--- \n ", size); // correct, 4 bytes because of \0 being the last one. we got 3 things we can pass.
    // checking
    printf("%s", string);
}