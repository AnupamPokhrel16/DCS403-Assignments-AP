// Linked List Insert After Value
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insertAfter(struct Node *head, int x, int y)
{
    while (head && head->data != x)
        head = head->next;
    if (!head)
        return;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = y;
    newNode->next = head->next;
    head->next = newNode;
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
    insertAfter(head, 20, 25);
    traverse(head);
    return 0;
}
