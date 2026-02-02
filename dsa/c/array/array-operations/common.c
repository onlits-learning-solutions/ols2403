#include "array.h"

void printline(int n) // O(n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("-");
    }
    printf("\n");
}

void messagebox(char *message) // O(1)
{
    int n = strlen(message);
    printf("\n");
    printline(n);
    printf("%s\n", message);
    printline(n);
    printf("\n");
}

// ----- Array Traversing -------------
void display(int arr[], int size) // O(1)
{
    if (size == 0)
    {
        messagebox("List empty!");
        return;
    }

    printf("\nList contains following elements:\n");
    printline(strlen("List contains following elements:"));
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    printline(strlen("List contains following elements:"));
}
