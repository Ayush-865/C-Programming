#include<stdio.h>
struct student
{
    char name[50];
    int r;
    int marks;
    struct subject
    {
        int phy;
        int chem;
        int maths;
    }a;

}s[50];
int  main()
{
    int i;
    printf("enter your data:\n");
    for (i=0;i<2;i++)
    {
    printf("enter your name \t roll no \t marks:\n ");
    scanf("%s%d%d",s[i].name,s[i].r,s[i].marks);
    }
    for ( i = 0; i <2; i++)
    {
       printf("%s\t%d\t%d",s[i].name,s[i].r,s[i].marks) ;
    }
    
 
return 0;
}
