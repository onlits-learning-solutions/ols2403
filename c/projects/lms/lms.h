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

typedef struct member
{
    int id;
    char name[50];
    char gender;
    char contactNo[11];
} MEMBER;

void memberMenu();
void addMember();
void displayMembers();

/************* Book Issue **********/