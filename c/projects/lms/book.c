#include <stdio.h>

typedef struct book
{
    int id;
    char title[50];
    char author[50];
} BOOK;

void addBook(BOOK book);

void bookMenu()
{
    BOOK book;
    while (1)
    {
        int ch;
        printf("\nBook Menu\n");
        printf("1. Add Book\n");
        printf("2. Edit Book\n");
        printf("Enter choice [0 to go back]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            return;
            break;
        case 1:
            addBook(book);
            break;
        case 2:
            printf("Under construction...\n");
            break;
        default:
            printf("Invalid option!\n");
        }
    }
}

void addBook(BOOK book)
{
    FILE *fp;
    printf("Add Book\n");
    printf("Enter Id: ");
    scanf("%d%*c", &book.id);
    printf("Enter title: ");
    scanf("%[^\n]%*c", book.title);
    printf("Enter author: ");
    scanf("%[^\n]", book.author);

    fp = fopen("book.csv", "w");
}