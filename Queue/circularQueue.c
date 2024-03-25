#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int front = -1, rear = -1, arr[SIZE];

void insert() {
    int data;
    printf("Enter element to be inserted ");
    scanf("%d", &data);
    
    if ((front == 0 && rear == SIZE - 1) || (rear == (front - 1) % (SIZE - 1))) {
        printf("Queue Overflow\n");
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        arr[rear] = data;
        printf("%d is inserted\n", data);
    } else if (rear == SIZE - 1 && front != 0) {
        rear = 0;
        arr[rear] = data;
        printf("%d is inserted\n", data);
    } else {
        rear++;
        arr[rear] = data;
        printf("%d is inserted\n", data);
    }
}

void delete() {
    if (front == -1) {
        printf("\nQueue Underflow \n");
    } else {
        printf("%d is deleted from queue\n", arr[front]);
        
        if (front == rear) {
            front = rear = -1;
        } else if (front == SIZE - 1) {
            front = 0;
        } else {
            front++;
        }
    }
}

void traverse() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    if (rear >= front) {
        for (int i = front; i <= rear; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        for (int i = front; i < SIZE; i++) {
            printf("%d ", arr[i]);
        }
        for (int i = 0; i <= rear; i++) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}

int main() {
    int choice = -1;
    
    while (choice != 0) {
        printf("Enter 1 to enqueue \nEnter 2 to dequeue \nEnter 3 to display \nEnter 0 to exit \n");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                traverse();
                break;
            case 0:
                break;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
