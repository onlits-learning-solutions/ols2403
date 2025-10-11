#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    int data;   //4-bytes
    struct node *next;  //8-bytes
} NODE;


//----------------- common.c -------------------
void printline(int n);
void messagebox(char *message);
void display(NODE *head);

//----------------- insert.c --------------------
void insertend(NODE *head);