#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void insert() {
    int data;
    printf("Enter the element to be inserted: ");
    scanf("%d", &data);

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = data;
    newNode->next = NULL;

    if (front == NULL && rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    printf("%d is inserted\n", data);
}

void delete() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct Node* temp = front;
    int deletedData = temp->data;

    if (front == rear) {
        front = rear = NULL;
    } else {
        front = front->next;
    }

    free(temp);

    printf("%d is deleted\n", deletedData);
}

void peek() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    printf("Front element: %d\n", front->data);
}

int main() {
    int choice = -1;
    while (choice != 0) {
        printf("Enter 1 to enqueue\nEnter 2 to dequeue\nEnter 3 to peek\nEnter 0 to exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                peek();
                break;
            case 0:
                break;
            default:
                printf("Invalid choice\n");
        }
    }

    // Free the remaining nodes in the queue before exiting
    while (front != NULL) {
        struct Node* temp = front;
        front = front->next;
        free(temp);
    }

    return 0;
}
