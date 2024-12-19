#include <stdio.h>
int main(void)
{
    int num, d, rev = 0;
    printf("Enter a number: ");     //printf is a library function
    scanf("%d", &num);
    while (num > 0)
    {
        d = num % 10;
        num /= 10;  //num = num / 10;
        rev = rev * 10 + d;
    }
    printf("Reverse: %d\n", rev);
    return 0;
}