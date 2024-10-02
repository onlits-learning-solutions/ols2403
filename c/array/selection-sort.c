#include <stdio.h>

int main(void)
{
    int arr[] = {79, 13, 69, 51, 5};

    printf("Array content before sorting:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    printf("Array content after sorting:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}