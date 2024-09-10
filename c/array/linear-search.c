#include <stdio.h>
#define SIZE 10
int main(void)
{
    int nums[SIZE] = {41, 10, 9, 101, 96, 72, 5, 31, 29, 15};
    int key;
    printf("Enter the value to search: ");
    scanf("%d", &key);

    for (int i = 0; i < SIZE; i++)
    {
        if (nums[i] == key)
        {
            printf("%d found at index %d.\n", key, i);
            return 0;
        }
    }
    printf("%d not found.\n", key);
    return 0;
}