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
    printf("\n");
}

struct Node * insertAtBeginning(struct Node * head, int data){
    struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

struct Node * insertAtIndex(struct Node * head, int data, int index){
    struct Node * ptr = (struct Node * )malloc(sizeof(struct Node));
    struct Node * p = head;
    int i=0;
    while (i != index -1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    ptr->data=data;
    p->next=ptr;
    return head;
}

struct Node * insertAtEnd(struct Node * head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i=0;
    while (p->next != NULL)
    {
        p=p->next;
        i++;
    }
    ptr->next=NULL;
    ptr->data=data;
    p->next=ptr;
    return head;
}

struct Node * insertAfterNode(struct Node * head, struct Node * prevNode, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->next=prevNode->next;
    ptr->data=data;
    prevNode->next=ptr;
    return head;
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
    // head = insertAtBeginning(head, 0);
    // head = insertAtIndex(head, 100, 1);
    // head = insertAtEnd(head, 100);
    head = insertAfterNode(head,third,100);
    traversal(head);
    return 0;
}