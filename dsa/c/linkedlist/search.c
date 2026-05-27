#include <stdio.h>
#include <stdlib.h>

#define N 5

typedef struct node
{
    int data;
    struct node *next;
} NODE;

void search(NODE *start);

int main(void)
{
    NODE *start = NULL;

    for (int i = 1, val = 10; i <= N; i++, val += 10)
    {
        NODE *newnode = malloc(sizeof(NODE));
        newnode->data = val;
        newnode->next = NULL;

        if (start == NULL)
        {
            start = newnode;
        }
        else
        {
            NODE *ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
                ptr->next = newnode;
            }
        }
    }

    return 0;
}

void search(NODE *start)
{
}