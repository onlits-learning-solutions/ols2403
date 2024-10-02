#include <stdio.h>

void display(int arr[], int size);
void sort(int arr[], int size);

int main(void)
{
    int arr[] = {79, 13, 69, 51, 5, 99};
    int size = 6;

    printf("Array content before sorting:\n");
    display(arr, size);

    sort(arr, size);

    printf("Array content after sorting:\n");
    display(arr, size);

    return 0;
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}