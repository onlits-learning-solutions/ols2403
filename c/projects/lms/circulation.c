#include "lms.h"

void circulationMenu()
{
    bookIssue();
}

void bookIssue()
{
    int id;

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

    printf("Enter circulation id: ");
    scanf("%d", circulation.id);

    fp = fopen("circulation.csv", "a");
    fprintf("%d", circulation.id);
    fclose(fp);
}

void bookReturn()
{
}