#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

void printline(int n);
void messagebox(char message[]);
void display(int arr[], int size);
void insert_end(int arr[], int *size);

int main(int argc, char const *argv[])
{
    int arr[MAX], ch, size = 0;
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
            display(arr, size);
            break;
        case 2:
            insert_end(arr, &size);
            break;
        case 3:
            messagebox("Under construction ...");
            break;
        case 4:
            messagebox("Under construction ...");
            break;
        default:
            messagebox("Invalid option!");
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

void messagebox(char message[])
{
    printf("\n");
    printline(strlen(message));
    printf("%s\n", message);
    printline(strlen(message));
    printf("\n");
}

void display(int arr[], int size)
{
    if(size == 0)
    {
        messagebox("Array empty!");
        return;
    }

    printf("\nArray Contents\n");
    printline(strlen("Array empty!"));
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    printline(strlen("Array empty!"));
    printf("\n");
}

void insert_end(int arr[], int *size)
{
    printf("\nEnter value: ");
    scanf("%d", &arr[*size]);
    (*size)++;
    messagebox("Value inserted!");
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