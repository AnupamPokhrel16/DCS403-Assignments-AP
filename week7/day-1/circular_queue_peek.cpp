// Circular Queue Peek Operation
#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
    if ((rear + 1) % SIZE == front)
    {
        printf("Queue is Full!\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = value;
}

void peek()
{
    if (front == -1)
    {
        printf("Queue is Empty!\n");
        return;
    }
    printf("Front element: %d\n", queue[front]);
}

int main()
{
    enqueue(10);
    enqueue(20);
    peek();
    return 0;
}
