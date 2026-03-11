#include <stdio.h>

int main(void)
{
    int arr[5];
    printf("The address of arr is %p.\n", arr);
    for(int i=0; i<5; i++)
        printf("The address of arr[%d] is %p.\n", i, &arr[i]);
    return 0;
}