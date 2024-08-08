#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i, fact = 1;                 //O(1)
    printf("Enter a number: ");         //O(1)
    scanf("%d", &n);                    //O(1)
    for (i = n; i >= 1; i--)            //O(n)
    {
        fact *= i; // fact = fact * i;
    }
    printf("%d! = %d\n", n, fact);      //O(1)
    return 0;                           //O(1)
}

/*
Time complexity: O(n)
*/
