#include "array.h"

void insertend(int arr[], int *size) // O(1)
{
    if(*size >= MAX)
    {
        messagebox("Overflow!");
        return;
    }

    printf("\nEnter value: ");
    scanf("%d", &arr[*size]);
    (*size)++;

    messagebox("Value inserted!");
}