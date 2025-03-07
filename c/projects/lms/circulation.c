#include "lms.h"

void circulationMenu()
{
    bookIssue();
}

void bookIssue()
{
    BOOK book;
    MEMBER memeber;
    CIRCULATION circulation;
    FILE *fp;
    int id;

    printf("Enter book id: ");
    scanf("%d", &id);
    fp = fopen("book.csv", "r");
    while (fscanf(fp, "%d,%[^,],%[^\n]", &book.id, book.title, book.author) != EOF)
    {
        if (book.id == id)
            break;
    }
    fclose(fp);
    printf("\nTitle: %s\n", book.title);
    printf("Author: %s\n", book.author);

    
}

void bookReturn()
{
}