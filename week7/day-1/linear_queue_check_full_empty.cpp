// Linear Queue Check Full/Empty
#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

int isEmpty() { return front == -1; }
int isFull() { return rear == SIZE - 1; }

int main() {
    printf("Is queue empty? %s\n", isEmpty() ? "Yes" : "No");
    printf("Is queue full? %s\n", isFull() ? "Yes" : "No");
    rear = SIZE - 1;
    printf("Is queue full after filling? %s\n", isFull() ? "Yes" : "No");
    return 0;
}
