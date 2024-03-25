#include<stdio.h>
int power(int a , int n)
{
   
     if (n!=0)
    {
        return a*power(a , n-1);
    }
    else
    return 1;
}
int  main()
{
int a , n;
printf("Enter number and its power:");
scanf("%d %d",a,n); 
printf("The ans is : %d", power(a,n));
return 0;
}
