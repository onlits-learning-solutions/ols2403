#include "array.h"

int main(void)
{
    int ch, size = 0;
    int arr[MAX];
    do
    {
        printf("\nARRAY OPERATIONS\n");
        printline(strlen("ARRAY OPERATIONS"));
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
            display(arr, size);
            break;
        case 3:
            break;
        default:
            messagebox("Invalid option!");
            break;
        }
    } while (1);

    return 0;
}