#include "array.h"

int main(void)
{
    int ch, size = 0;
    int arr[MAX];
    do
    {
        printf("ARRAY OPERATIONS\n");
        printf("\nMAIN MENU\n");
        printf("1. Display(Traverse)\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Search\n");
        printf("5. Sort\n");
        printf("6. Merge\n");
        printf("Enter choice [0 to exit]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("Bye!\n\n");
            return 0;
            break;
        case 1:
            display(arr, size);
            break;
        default:
            printf("\nInvalid option\n\n");
            break;
        }
    } while (1);

    return 0;
}