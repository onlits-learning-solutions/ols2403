#include "lms.h"

void circulationMenu()
{
    bookIssue();
}

void bookIssue()
{
    int id;
    DATE curd;
    printf("\nEnter book id: ");
    scanf("%d", &id);
    BOOK book = getBookById(id);
    printf("\nTitle: %s\n", book.title);
    printf("Author: %s\n", book.author);

    printf("\nEnter member id: ");
    scanf("%d", &id);
    MEMBER member = getMemberById(id);
    printf("\nName: %s\n", member.name);
    printf("Contact Number: %s\n", member.contactNo);

    CIRCULATION circulation;
    FILE *fp;

    curd = current_date();
    printf("Enter circulation id: ");
    scanf("%d", &circulation.id);

    fp = fopen("circulation.csv", "a");
    fprintf(fp, "%d,%d-%d-%d,%d,%d\n", circulation.id, curd.year, curd.month, curd.day, book.id, member.id);
    fclose(fp);
}

void bookReturn()
{
}