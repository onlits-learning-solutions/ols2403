#include "linkedlist.h"

int main(void)
{
    NODE *head = NULL;
    printf("Learning linked list!\n");

    printf("Displaying List Content:\n");
    display_organic(head);

    printf("Adding a node to list at the end!\n");
    insert_end(head, 10);

    printf("Displaying List Content after inserting 10:\n");
    display_organic(head);

    printf("Size of head->next: %ld bytes.\n", sizeof(head->next));
    printf("Size of head->data: %ld bytes.\n", sizeof(head->data));
    printf("Size of NODE: %ld bytes.\n", sizeof(NODE));
    return 0;
}
