#include "linkedlist.h"

int main(void)
{
    int ch;
    NODE *head = NULL;
    
    do
    {
        printf("\nLINKED LIST OPERATIONS\n");
        printline(strlen("LINKED LIST OPERATIONS"));
        printf("\nMAIN MENU\n");
        printline(strlen("MAIN MENU"));
        printf("1. Display(Traverse)\n");
        printf("2. Search\n");
        printf("3. Insert\n");
        printf("4. Delete\n");
        printf("5. Sort\n");
        printf("6. Merge\n");
        printf("Enter choice [0 to exit]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            messagebox("Bye!");
            return 0;
            break;
        case 1:
            display(head);
            break;
        default:
            printf("\nInvalid option\n\n");
            break;
        }
    } while (1);

    return 0;
}