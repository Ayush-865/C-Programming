#include<stdio.h>
int sum( int n)
{
    if(n>=1)
    {
    return n + sum(n-1);
    }
}
int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    return n*factorial(n-1);
    
}
void  main()
{
    int n;
    printf("Enter the no:");
    scanf("%d",&n);
    printf("The sum of Numbers is: %d\n", sum(n));
    printf("The factorial of number is: %d",factorial(n));
}
