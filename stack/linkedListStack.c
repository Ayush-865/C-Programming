#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};


int isEmpty(struct Node * top){
    if (top==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct Node * top){
    struct Node * p = (struct Node * )malloc(sizeof(struct Node));
    if (p==NULL){
        return 1;
    }else{
        return 0;
    }
}

struct Node * push(struct Node * top){
    int data;
    if (isFull(top))
    {
        printf("Stack Overflow\n");
        return top;
    }
    else{
        struct Node * newnode = (struct Node * )malloc(sizeof(struct Node));
        printf("\nEnter the element to be pushed : ");
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=top;
        top=newnode;
        return top;
    }
    
}
struct Node * pop(struct Node * top){
    if (isEmpty(top))
    {
        printf("Stack Underflow\n");
        return top;
    }
    else{
        printf("%d is popped\n",top->data);
        top=top->next;
        return top;
    }
}
void peek (struct Node * ptr){
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int  main()
{
    struct Node * top=NULL;
    int choice=-1;
    while (choice != 0)
    {
        printf("Enter 1 to push \nEnter 2 to pop \nEnter 3 to peek \nEnter 0 to exit \n");
        scanf("%d", &choice);
        if (choice==1)
        {
            top=push(top);
        }else if (choice==2)
        {
            top=pop(top);
        }else if (choice==3)
        {
            peek(top);
        }else if (choice==0)
        {
            break;
        }
    }
return 0;
}
