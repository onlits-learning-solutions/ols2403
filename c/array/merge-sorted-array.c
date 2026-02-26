#include <stdio.h>

int main(void)
{
    int m = 5, n = 5, in1 = 0, in2 = 0, i = 0;
    int arr1[] = {2, 3, 4, 7, 9};
    int arr2[] = {1, 5, 6, 7, 8};
    int arr3[m + n];

    while (in1 < m && in2 < n)
    {
        if (arr1[in1] <= arr2[in2])
        {
            arr3[i] = arr1[in1];
            in1++;
        }
        else
        {
            arr3[i] = arr2[in2];
            in2++;
        }

        i++;
    }

    if(in1 == m)
    {
        arr3[i-1] = arr1[in1-1];
    }

    if(in2 == n)
    {
        arr3[i-1] = arr1[in2-1];
    }

    printf("The resultant array is: ");
    for (int i = 0; i < m + n - 1; i++)
    {
        printf("%d ", arr3[i]);
    }

    printf("\n");

    return 0;
}