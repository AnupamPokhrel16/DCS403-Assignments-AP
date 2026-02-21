// Linked List Delete at Position
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void deletePosition(struct Node **head, int pos)
{
    if (!*head)
        return;
    struct Node *temp = *head;
    if (pos == 1)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    for (int i = 1; temp && i < pos - 1; i++)
        temp = temp->next;
    if (!temp || !temp->next)
        return;
    struct Node *del = temp->next;
    temp->next = del->next;
    free(del);
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
    deletePosition(&head, 2);
    traverse(head);
    return 0;
}
