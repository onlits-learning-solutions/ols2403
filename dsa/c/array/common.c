#include "array.h"

void printline(int n)
{
    for(int i=1; i<=n; i++)
    {
        printf("-");
    }
    printf("\n");
}

void messagebox(char *message)
{
    int n = strlen(message);
    printf("\n");
    printline(n);
    printf("%s\n", message);
    printline(n);
    printf("\n");
}

void display(int arr[], int size)
{
    if (size == 0)
    {
        messagebox("List empty!");
        return;
    }

    printf("List contains following elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}