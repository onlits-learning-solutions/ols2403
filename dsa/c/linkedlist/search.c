#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef struct node
{
    int data;
    struct node *next;
} NODE;

NODE *search(NODE *start, int val);

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

    NODE *ptr = search(start, 60);

    if (ptr == NULL)
        printf("Value not found!");
    else
        printf("Value found at %p.", ptr);

    return 0;
}

NODE *search(NODE *start, int val)
{
    scanf("%*c");
    NODE *pos = NULL;
    NODE *ptr = start;

    while (ptr != NULL)
    {
        if (val == ptr->data)
        {
            pos = ptr;
            break;
        }
        ptr = ptr->next;
    }
    return pos;
}