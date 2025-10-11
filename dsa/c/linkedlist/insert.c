#include "linkedlist.h"

void insertend(NODE **head) // **head - pointer to pointer
{
    head = malloc(sizeof(NODE));
    printf("Enter value: ");
    // scanf("%d", &head->data);
    // head->next = NULL;
    messagebox("Data inserted!");
}