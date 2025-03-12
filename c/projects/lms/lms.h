#include <stdio.h>
#include <time.h>

void mainMenu();

/********* Utility *************/
typedef struct date
{
    int day;
    int month;
    int year;
} DATE;

DATE current_date();
char* day_name(int day_num);
char* month_name(int month_num);

/********* Book ***************/
typedef struct book
{
    int id;
    char title[50];
    char author[50];
} BOOK;

void bookMenu();
void addBook();
BOOK getBookById(int id);
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
MEMBER getMemberById(int id);
void displayMembers();

/************* Circulation **********/

typedef struct circulation
{
    int id;
    int bookId;
    int MemberId;
} CIRCULATION;

void circulationMenu();
void bookIssue();
void bookReturn();