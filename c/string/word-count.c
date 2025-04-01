#include <stdio.h>
int main(void)
{
    int i=0, words = 1;
    char sen[100];
    printf("Enter a sentence: ");
    scanf("%[^\n]", sen);

    while (sen[i] != '\0')
    {
        if(sen[i] == ' ')
            words++;
        i++;
    }
    printf("Number of words: %d\n", words);
}