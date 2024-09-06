#include <stdio.h>

#define SIZE 10

int main(int argc, char const *argv[])
{
    int age[SIZE] = {10, 9, 8, 5, 13, 15, 14, 16, 11, 9};

    printf("Array content before sorting:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", age[i]);
    }

    //Sorting algorithm
    
    printf("\nArray content after sorting:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", age[i]);
    }

    return 0;
}