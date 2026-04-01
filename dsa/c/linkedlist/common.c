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
    printf("%d nodes\n", count_nodes(head));
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
    printf("%d nodes\n", count_nodes(head));
}

int count_nodes(NODE *head)
{
    int count = 0;

    NODE *ptr = head;
    
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}