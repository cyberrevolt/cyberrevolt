#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main() {
    int queue[SIZE];
    int front = -1, rear = -1;
    int choice, value;

    while (1) {
        printf("\n--- Queue Operations Menu ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (rear == SIZE - 1) {
                printf("Queue Overflow! Cannot insert.\n");
            } else {
                printf("Enter value to insert: ");
                scanf("%d", &value);
                if (front == -1)
                    front = 0;
                rear++;
                queue[rear] = value;
                printf("Inserted %d\n", value);
            }
        } else if (choice == 2) {
            if (front == -1 || front > rear) {
                printf("Queue Underflow! No elements to delete.\n");
                front = rear = -1;
            } else {
                printf("Deleted: %d\n", queue[front]);
                front++;
                if (front > rear)
                    front = rear = -1;
            }
        } else if (choice == 3) {
            if (front == -1 || front > rear) {
                printf("Queue is empty\n");
            } else {
                printf("Front element: %d\n", queue[front]);
            }
        } else if (choice == 4) {
            if (front == -1 || front > rear) {
                printf("Queue is empty\n");
            } else {
                printf("Queue elements: ");
                for (int i = front; i <= rear; i++) {
                    printf("%d ", queue[i]);
                }
                printf("\n");
            }
        } else if (choice == 5) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
        return 0;
        
}