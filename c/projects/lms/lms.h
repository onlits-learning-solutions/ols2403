#include <stdio.h>

void mainMenu();

/********* Book ***************/
typedef struct book
{
    int id;
    char title[50];
    char author[50];
} BOOK;

void bookMenu();
void addBook();
void displayBooks();

/************ Member ************/