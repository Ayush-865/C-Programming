#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void traversal (struct Node * head){
    struct Node * p = head;
    printf("%d ", p->data);
    p=p->next;
    while (p != head){
        printf("%d ", p->data);
        p=p->next;
    }
    printf("\n");
}

struct Node * insertStart(struct Node * head , int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p = head->next;
    while (p->next != head)
    {
        p=p->next;
    }
    // At this point p is at last node;
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}

int  main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    // memeory allocated in heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second= (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    // link first and second node 
    head->data=5;
    head->next=second;
    // link second and third node 
    second->data=10;
    second->next=third;
    // link third and fourth node 
    third->data=15;
    third->next=fourth;
    // link first and second node 
    fourth->data=20;
    fourth->next=head;

    traversal(head);
    head=insertStart(head, 100);
    traversal(head);
    return 0;
}