#include <stdio.h>

#define MAX 10

int read(int arr[], int n);
int smallest(int arr[], int n);

int main(void)
{
    int arr[MAX], n;
    printf("Enter array size: ");
    scanf("%d", &n);

    read(arr, n);

    printf("The smallest number is %d.\n", smallest(arr, n));
    return 0;
}

int read(int arr[], int n)
{
    printf("Enter %d integers below:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

int smallest(int arr[], int n)
{
    int smallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
    }
}