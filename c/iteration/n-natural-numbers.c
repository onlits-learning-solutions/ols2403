#include <stdio.h>
int main(void)
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}