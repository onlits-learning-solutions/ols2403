#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        i++;
    }
    
    printf("The length of %s is %d.\n", str, i);
    
    return 0;
}