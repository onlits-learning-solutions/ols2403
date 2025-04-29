#include "array.h"

int main()
{
    int ch;
    int arr[MAX];
    do
    {
        printf("ARRAY OPERATIONS\n");
        printf("\nMAIN MENU\n");
        printf("1. Display\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("Enter choice [0 to exit]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("Bye!\n\n");
            return 0;
            break;
        
        default:
            printf("\nInvalid option\n\n");
            break;
        }
    } while (1);

    return 0;
}