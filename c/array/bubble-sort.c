#include <stdio.h>
#define SIZE 5

void display(int arr[]);
void bubble_sort(int arr[]);
void swap(int a, int b);

int main()
{
    int arr[SIZE] = {56, 79, 3, 32, 99};
    printf("Address of arr is %p.\n", &arr);
    printf("Unsorted array:\n");
    display(arr);
    printf("\nSorted array:\n");
    bubble_sort(arr);
    display(arr);
    return 0;
}

void display(int arr[])
{
    for (int i = 0; i < SIZE; i++)
        printf("%d\n", arr[i]);
}

void bubble_sort(int arr[])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

void swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
}