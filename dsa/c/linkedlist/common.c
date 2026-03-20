#include "linkedlist.h"

void display(NODE *head)
{
    if (head == NULL)
    {
        printf("List empty!\n");
        return;
    }

    NODE *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void display_organic(NODE *head)
{
    printf("HEAD -> ");

    NODE *ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", head->data);
        ptr = ptr->next;
    }

    printf("NULL\n");
}

int count_nodes(NODE *head)
{
    
}