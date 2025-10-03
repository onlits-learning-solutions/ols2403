#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;


//----------------- common.c -------------------
void printline(int n);
void messagebox(char *message);
void display(NODE *head);