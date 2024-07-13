#include <stdio.h>
int main(void)
{
    char days[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int i;
    printf("Enter an integer between 1 and 7: ");
    scanf("%d", &i);

    if (i >= 1 && i <= 7)
        printf("%s\n", days[i - 1]);
    else
        printf("Invalid input!\n");

    return 0;
}