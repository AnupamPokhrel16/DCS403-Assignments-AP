// Linked List Search for Element
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int search(struct Node *head, int x)
{
    int pos = 1;
    while (head)
    {
        if (head->data == x)
            return pos;
        head = head->next;
        pos++;
    }
    return -1;
}

int main()
{
    struct Node *head = NULL;
    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));
    n1->data = 10;
    n2->data = 20;
    n3->data = 30;
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;
    head = n1;
    int x = 20;
    int pos = search(head, x);
    if (pos != -1)
        printf("%d found at position %d\n", x, pos);
    else
        printf("%d not found\n", x);
    return 0;
}
