#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

void printline(int n);
void display();
void insert_end();

int main(int argc, char const *argv[])
{
    int arr[MAX], ch;
    int const longest_item = strlen("4. Insert at the given index");
    while (1)
    {
        printf("\nMAIN MENU\n");
        printline(longest_item);
        printf("1. Display array (traverse)\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at the beginning.\n");
        printf("4. Insert at the given index\n");
        printf("0. Exit\n");
        printline(longest_item);
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("\nBye!\n");
            exit(0);
            break;
        case 1:
            display();
            break;
        case 2:
            insert_end();
            break;
        default:
            printf("\nInvalid option\n");
            break;
        }
    }
    return 0;
}

void printline(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("-");
    }
    printf("\n");
}

void display()
{
}

void insert_end()
{
}

void insert_beginning()
{
}

void insert_index()
{
}

void delete()
{
}

void linear_search()
{
}

void binary_search()
{
}

void selection_sort()
{
}

void bubble_sort()
{
}

void insertion_sort()
{
}