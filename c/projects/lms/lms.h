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
void addBook(BOOK book);
void displayBooks();

/************ Member ************/