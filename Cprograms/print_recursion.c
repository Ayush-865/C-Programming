#include<stdio.h>
void display(int n)
{
    if(n>0)
    {
        display(n-1);
        printf("%d\n",n);
    }
    
}
int  main()
{
int n;
printf("enter no:");
scanf("%d",&n);
display(n); 
return 0;
}
