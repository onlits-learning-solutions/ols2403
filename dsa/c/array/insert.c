#include "array.h"

void insertend(int arr[], int *size)
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