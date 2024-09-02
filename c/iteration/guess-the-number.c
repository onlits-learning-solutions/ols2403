#include <stdio.h>
int main(void)
{
    int low = 1, high = 100, mid, attempt = 1;
    char response;
    printf("Guess a number between 1 and 100, then, press enter to continue...");
    getchar();
    mid = (low + high) / 2;
    printf("Is the number %d (y/n)? ", mid);
    response = getchar();
    if (response == 'y')
    {
        printf("Wow! I have guessed your number in %d attempt(s).\n", attempt);
    }
    return 0;
}