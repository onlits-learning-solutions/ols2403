#include <stdio.h>
int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target, lb = 0, ub = 9, mid, found = 0;
    printf("Enter a number to search: ");
    scanf("%d", &target);
    for (int i = 0; i < 10; i++)
    {
        mid = (lb + ub) / 2;
        if (arr[mid] == target)
        {
            printf("%d found at index %d.\n", target, mid);
            found = 1;
            break;
        }

        if (target < arr[mid])
            ub = mid - 1;
        else
            lb = mid + 1;
    }
    if (found == 0)
        printf("%d not found in the array.\n", target);

    return 0;
}
