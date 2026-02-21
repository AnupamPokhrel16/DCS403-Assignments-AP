// Linked List Creation and Traversal
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createList(int arr[], int n)
{
    struct Node *head = NULL;
    struct Node *tail = NULL;
    for (int i = 0; i < n; i++)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = arr[i];
        newNode->next = NULL;
        if (!head)
            head = tail = newNode;
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

void traverse(struct Node *head)
{
    while (head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    struct Node *head = createList(arr, 5);
    traverse(head);
    return 0;
}
