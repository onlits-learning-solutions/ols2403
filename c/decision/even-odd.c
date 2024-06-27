#include <stdio.h>
int main(void)
{   //function block
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 2 == 0)
    {   //if block (a group of statements)
        printf("Even Number\n");
    }
    else
    {   //else block
        printf("Odd Number\n");
    }
    return 0;
}