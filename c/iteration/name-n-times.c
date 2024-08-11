#include <stdio.h>
int main(void)
{
    char name[50];
    int n, i;

    printf("Enter your name: ");
    scanf("%[^\n]", name);
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%d. %s\n", i, name);
    }
    return 0;
}