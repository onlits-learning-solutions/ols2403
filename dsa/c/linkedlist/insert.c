#include "linkedlist.h"

void insert_end(NODE *head, int data)
{
    NODE *ptr = head;

    while(ptr != NULL)
    {
        ptr = ptr->next;
    }

    NODE *newnode = malloc(sizeof(NODE)); //?

    newnode->data = data;
    newnode->next = NULL;

}

void insert_middle(NODE *head, int data, int pos)
{

}