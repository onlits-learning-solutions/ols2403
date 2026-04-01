#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

/* --------------- common.c --------------*/
void display(NODE *head);
void display_organic(NODE *head);
int count_nodes(NODE *head);

/*--------------- insert.c --------------*/
void insert_end(NODE *head, int data);
void insert_middle(NODE *head, int data, int pos);