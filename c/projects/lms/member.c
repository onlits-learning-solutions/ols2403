#include "lms.h"

void memberMenu()
{
    int ch;
    while (1)
    {
        printf("Member Menu\n");
        printf("1. Display members\n");
        printf("2. Display Member\n");
        printf("3. Add Member\n");
        printf("Enter choice [0 to go back]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            return;
            break;
        case 1:
            displayMembers();
            break;
        case 2:
            printf("Under construction...\n");
            break;
        case 3:
            addMember();
            break;
        default:
            printf("Invalid option!\n");
            break;
        }
    }
}

void addMember()
{
    MEMBER member;
    FILE *fp;
    fp = fopen("member.csv", "a");
    printf("Enter Id: ");
    scanf("%d%*c", &member.id);
    printf("Enter name: ");
    scanf("%[^\n]%*c", member.name);
    printf("Enter gender [m/f]: ");
    scanf("%c", &member.gender);
    printf("Enter contact number: ");
    scanf("%s", member.contactNo);
    fprintf(fp, "%d,%s,%c,%s\n", member.id, member.name, member.gender, member.contactNo);
    fclose(fp);
}

void displayMembers()
{
    MEMBER member;
    FILE *fp;
    fp = fopen("member.csv", "r");
    printf("%-10s%-20s%-10s%s\n", "Member Id", "Name", "Gender", "Contact No");
    while(fscanf(fp, "%d,%[^,],%c,%s", &member.id, member.name, &member.gender, member.contactNo) != EOF)
    {
        printf("%-10d%-20s%-10c%s\n", member.id, member.name, member.gender, member.contactNo);
    }
    fclose(fp);
}

void displayMemberById()
{
    
}