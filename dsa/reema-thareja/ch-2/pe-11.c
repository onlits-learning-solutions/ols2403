// Write a program to merge two unsorted arrays.

#include <stdio.h>

int main(void)
{
    int m = 5, n = 5, o = 10, j = 0;
    int arr1[] = {4, 7, 9, 3, 2};
    int arr2[] = {6, 8, 1, 5, 7};
    int arr3[o];

    for (int i = 0; i < m; i++, j++)
        arr3[j] = arr1[i];

    for (int i = 0; i < n; i++, j++)
        arr3[j] = arr2[i];

    printf("The resultant array is: ");
    for (int i = 0; i < o; i++)
    {
        printf("%d ", arr3[i]);
    }

    printf("\n");

    return 0;
}