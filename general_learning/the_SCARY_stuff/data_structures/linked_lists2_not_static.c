#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} nodes;

nodes *create_dynamic_node(int value);
nodes *insert_at_head(nodes *head, int value);

void print_nodes(nodes *head);
void free_list(nodes *head);

int main()
{
    nodes *head = NULL;

    head = insert_at_head(head, 4);
    head = insert_at_head(head, 5);
    print_nodes(head);
    free_list(head);
}

nodes *create_dynamic_node(int value)
{
    nodes *result_Var = malloc(sizeof(nodes));
    result_Var->value = value;
    result_Var->next = NULL;
    return result_Var;

    // NOTE: creates a dynamic node with malloc.
    // If youre using this function manually, Becuase of result_Var->next= NULL, you have to assign a next.
    // Is supposed to be used to store the output in a variable
}

nodes *insert_at_head(nodes *head, int value)
{
    nodes *node = create_dynamic_node(value);
    node->next = head;
    return node;
    // NOTE: function used to create a node at head.
    // How it works is it takes a value which is an int then passes it into create_dynamic_node to alloc memory
    // then it just replaces the manual method of doing placement, it does node-next = head or basically Last Head.
    // Is supposed to be used to store the output in a variable
}

void print_nodes(nodes *head)
{
    nodes *temproray = head;

    while (temproray != NULL)
    {
        printf("%d\n", temproray->value);
        temproray = temproray->next;
    }
    // Is used to print out a node.
}

void free_list(nodes *head)
{
    nodes *temporary;

    while (head != NULL)
    {
        temporary = head;
        head = head->next;
        free(temporary);
    }
    printf("node freed\n");
    // Is used to free memory out of the node when you dont need it anymore.
}