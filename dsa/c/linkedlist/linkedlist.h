#include <stdio.h>
typedef struct node
{
    int data;
    struct node *next;
} NODE;

/* --------------- common.c --------------*/
void display(NODE *head);
void display_organic(NODE *head);