#include "lms.h"

void bookMenu()
{
    BOOK book;
    while (1)
    {
        int ch;
        printf("\nBook Menu\n");
        printf("1. Display Books\n");
        printf("2. Display Book\n");
        printf("3. Add Book\n");
        printf("4. Edit Book\n");
        printf("Enter choice [0 to go back]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            return;
            break;
        case 1:
            displayBooks();
            break;
        case 2:
            printf("Under construction...\n");
            break;
        case 3:
            addBook();
            break;
        case 4:
            printf("Under construction...\n");
            break;
        default:
            printf("Invalid option!\n");
        }
    }
}

void addBook()
{
    BOOK book;
    FILE *fp;
    printf("Add Book\n");
    printf("Enter Id: ");
    scanf("%d%*c", &book.id);
    printf("Enter title: ");
    scanf("%[^\n]%*c", book.title);
    printf("Enter author: ");
    scanf("%[^\n]", book.author);

    fp = fopen("book.csv", "a");
    fprintf(fp, "%d,%s,%s\n", book.id, book.title, book.author);
    fclose(fp);
    printf("Data saved!\n");
}

void displayBooks()
{
    FILE *fp;
    BOOK book;
    printf("%-5s%-50s%-50s\n", "Id", "Title", "Author");
    fp = fopen("book.csv", "r");
    while (fscanf(fp, "%d,%[^,],%[^\n]", &book.id, book.title, book.author) != EOF)
    {
        printf("%-5d%-50s%-50s\n", book.id, book.title, book.author);
    }
    fclose(fp);
}