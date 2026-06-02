#include <stdio.h>
#include <stdlib.h>

#define N 5

typedef struct node
{
    int data;
    struct node *next;
} NODE;

NODE *insert_beginning(NODE *start, int val);
void display(NODE *start);

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
            }
            ptr->next = newnode;
        }
    }

    printf("Initial List:\n");
    display(start);

    start = insert_beginning(start, 60);

    printf("List after inserting 60 in the beginning:\n");
    display(start);

    return 0;
}

NODE *insert_beginning(NODE *start, int val)
{
    NODE *newnode = malloc(sizeof(NODE));
    newnode->data = val;
    newnode->next = start;
    start = newnode;
}

void display(NODE *start)
{
    NODE *ptr = start;
    printf("START->");
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}