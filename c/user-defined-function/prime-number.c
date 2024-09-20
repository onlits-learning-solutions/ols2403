#include <stdio.h>              // Function declaration for library function

int countFactor(int n);         // Function declaration for user-defined function

// Function Definition
int main(int argc, char const *argv[])
{
    int n, factors;
    printf("Enter number: ");               // Function call to a library function
    scanf("%d", &n);                        // Function call to a libray function
    factors = countFactor(n);              // Function call to a user-defined function
    if(factors == 2)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}

// Function Definition
int countFactor(int n)          //Function Header
{
    int factor = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            factor++;
        }
    }
    return factor;
}

/*
Function is a self-contained block of code to carry out a specific task.
*/