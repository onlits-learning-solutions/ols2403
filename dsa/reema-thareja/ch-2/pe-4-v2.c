// 4. Write a program to find the second largest of n numbers using an array.

#include <stdio.h>

#define MAX 10

int main(void)
{
    int arr[MAX], n, largest, second_largest;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for(int i = 1; i<n; i++)
    {
        if(arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
    }

    printf("The second largest number is %d.\n", second_largest);
    return 0;
}