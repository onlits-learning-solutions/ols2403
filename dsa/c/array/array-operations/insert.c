#include "array.h"  //preprocessor directive (file inclusion)
void insertmenu(int arr[], int *size)
{
    int ch;
    do
    {
        printf("\nINSERT MENU\n");
        printline(strlen("INSERT MENU"));
        printf("1. Insert (End)\n");
        printf("2. Insert (Beginning)\n");
        printf("3. Insert (Middle)\n");
        printf("Enter choice [0 to go back]: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            return;
            break;
        case 1:
            insertend(arr, &size);
            break;
        case 2:
            insertbeginning(arr, &size);
            break;
        case 3:
            insertmiddle(arr, &size);
            break;
        default:
            messagebox("Invalid option!");
            break;
        }
    } while (1);
}

void insertend(int arr[], int *size) // O(1)
{
    if (*size >= MAX)
    {
        messagebox("Overflow!");
        return;
    }

    printf("\nEnter value: ");
    scanf("%d", &arr[*size]);
    (*size)++;

    messagebox("Value inserted!");
}

void insertbeginning(int arr[], int *size)
{
}

void insertmiddle(int arr[], int *size)
{
}