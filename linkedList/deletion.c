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

struct Node * deleteFirstNode(struct Node * head){
    struct Node * ptr = head;
    head=(head->next);
    free(ptr);
    return head;
}

struct Node * deleteNodewithIndex(struct Node * head, int index){
    struct Node * p = head;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
    }
    p->next=(p->next)->next;
    return head;
}

struct Node * deleteLastNode(struct Node * head){
    struct Node * p = head;
    int i=0;
    while ((p->next)->next != NULL)
    {
        p=p->next;
        i++;
    }
    p->next=NULL;
    return head;
}

struct Node * deleteNodeWithData(struct Node * head, int data){
    struct Node * p = head;
    int i=0;
    while ((p->next)->data != data && (p->next)->next != NULL)
    {
        p=p->next;
        i++;
    }

    if ((p->next)->data == data)
    {
        p->next=(p->next)->next;
    }
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
    // head=deleteFirstNode(head);
    // head=deleteNodewithIndex(head,1);
    // head=deleteLastNode(head);
    head=deleteNodeWithData(head, 10);
    traversal(head);
    return 0;
}