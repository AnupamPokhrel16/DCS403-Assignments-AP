// Linked List Delete by Value
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void deleteValue(struct Node **head, int x)
{
    struct Node *temp = *head;
    struct Node *prev = NULL;
    while (temp && temp->data != x)
    {
        prev = temp;
        temp = temp->next;
    }
    if (!temp)
        return;
    if (!prev)
        *head = temp->next;
    else
        prev->next = temp->next;
    free(temp);
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

void insertEnd(struct Node **head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (!*head)
    {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

int main()
{
    struct Node *head = NULL;
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    deleteValue(&head, 20);
    traverse(head);
    return 0;
}
