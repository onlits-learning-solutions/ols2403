#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

void traverse(NODE *start);

int main(void)      // O(1)
{
    NODE *start = NULL;

    start = malloc(sizeof(NODE));
    start->data = 10;
    start->next = NULL;

    start->next = malloc(sizeof(NODE));
    start->next->data = 20;
    start->next->next = NULL;
 
    start->next->next = malloc(sizeof(NODE));
    start->next->next->data = 30;
    start->next->next->next = NULL;

    traverse(start);

    return 0;
}

void traverse(NODE *start)   // O(n)
{
    NODE *ptr = start;
    while(ptr != NULL) 
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}