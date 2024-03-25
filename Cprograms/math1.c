#include<stdio.h>
double power(int a , int n)
{
     if (n!=0)
    {
        return a*power(a , n-1);
    }
    else
    return 1;
}
double factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    return n*factorial(n-1);
    
}
int main()
{
    int n;
    double sum;
    int i;
    printf("Enter the number:");
    scanf("&d",&n);
    for ( i =1 ; i <= n; i++)
    {
        sum+=(power(i,i)/factorial(i));
    }
    printf("final sum: %f",sum);
    return 0; 
}