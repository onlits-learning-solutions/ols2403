#include <stdio.h>

void mainMenu();
void bookMenu();

int main(void)
{
    printf("LIBRARY MANAGEMENT SYSTEM\n");
    mainMenu();
    return 0;
}

void mainMenu()
{
    int ch;
    while (1)
    {
        printf("\nMain Menu\n");
        printf("1. Book\n");
        printf("2. Member\n");
        printf("Enter choice [0 to exit]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            return;
            break;
        case 1:
            bookMenu();
            break;
        case 2:
            printf("Under construction...\n");
            break;
        default:
            printf("Invalid option!\n");
        }
    }
}