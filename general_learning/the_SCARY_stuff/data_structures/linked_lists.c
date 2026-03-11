#include <stdlib.h>
#include <stdio.h>
// allocate memory for each element that he wants to add to
// the list and also give it a pointer
// that is going to point to the next item in the list

typedef struct node_mumbo
{
    int value;
    struct node_mumbo *next;
} linked_list_structure;

void print_node(linked_list_structure *head);

linked_list_structure *create_node(int value);

int main()
{
    linked_list_structure n1, n2, n3;
    n1.value = 1;
    n2.value = 2;
    n3.value = 3;

    linked_list_structure *head = &n1;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    // make a space for n4 in the middle of n1 and n2;

    linked_list_structure n4;
    n4.value = 124;
    n4.next = &n3;

    n2.next = &n4;
    print_node(head);
    // LOGIC:
    /*
    We take 2 nodes:
    1 node which location WILL be changed:
    In our example: we say that "n3 will come after n4 (n4 -NEXT> n3)"
    Then we just assign it like this: n4.next = &n3

    1 node location which wont be changed but the next pointer will be changed.
    In our example: n2.next = &new_Var
        This one comes BEFORE 1 node which location WILL be changed*/
}

void print_node(linked_list_structure *head)
{
    linked_list_structure *temprorary = head;

    while (temprorary != NULL)
    {
        printf("%d\n", temprorary->value);
        temprorary = temprorary->next;
    }
}