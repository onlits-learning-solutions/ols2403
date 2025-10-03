#include "linkedlist.h"

void printline(int n)
{
    for(int i=1; i<=n; i++)
    {
        printf("-");
    }
    printf("\n");
}

void messagebox(char *message)
{
    int n = strlen(message);
    printf("\n");
    printline(n);
    printf("%s\n", message);
    printline(n);
    printf("\n");
}

void display(NODE *head)
{
    if(head == NULL)
    {
        messagebox("List empty!");
        return;
    }

    printf("List contains following elements:\n");

    NODE *itr = head;

    while(itr != NULL)
    {
        printf("%d\n", itr->data);
        itr = itr->next;
    }
}