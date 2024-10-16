#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    printf("The length of %s is %ld.\n", str, strlen(str));
    
    return 0;
}