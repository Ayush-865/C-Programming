#include<stdio.h>
#include<stdio.h>
struct address
{
    char city[10];
    int pin;
};
typedef struct student 
{
    char name[10];
    int roll;
    char div;
    float marks;
    struct address add;
}stud;
stud s[5];

void main()
{
    int i;
    printf("Enter the data of structure:\n");
    printf("Name \t Roll_no \t division \t marks \t city \t pin \n");
    for ( i = 0; i <3; i++)
    {
        scanf("%c\t%d\t%c\t%f\t%s\t%d\n",s[i].name,s[i].roll,s[i].div,s[i].marks,s[i].add.city,s[i].add.pin);
    }   

     printf("data of structure:\n");
    printf("Name \t Roll_no \t division \t marks \t city \t pin \n");
    for ( i = 0; i <3; i++)
    {
        printf("%c\t%d\t%c\t%f\t%s\t%d\n",s[i].name,s[i].roll,s[i].div,s[i].marks,s[i].add.city,s[i].add.pin);
    }   
}


