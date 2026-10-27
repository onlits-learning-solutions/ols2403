#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

void display(NODE *head);

int main(void)
{
    NODE *head = NULL;

    NODE *n1 = malloc(sizeof(NODE));
    n1->data = 27;
    n1->next = NULL;
    head = n1;

    NODE *n2 = malloc(sizeof(NODE));
    n2->data = 63;
    n2->next = NULL;
    n1->next = n2;

    display(head);

    return 0;
}

void display(NODE *head)
{
    NODE *ptr = head;
    if(ptr == NULL)
    {
        printf("List empty!");
        return;
    }

    printf("START->");
    while(ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}