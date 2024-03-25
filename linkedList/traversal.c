#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void traversal (struct Node * ptr){
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
}

int  main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;

    // memeory allocated in heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second= (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));

    // link first and second node 
    head->data=5;
    head->next=second;
    // link second and third node 
    second->data=10;
    second->next=third;
    // link first and second node 
    third->data=15;
    third->next=NULL;

    traversal(head);
    return 0;
}