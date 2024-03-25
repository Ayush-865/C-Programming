#include<stdio.h>
int gcd(int a , int b)
{
    if(b>a) return gcd(b,a);
    if(b==0) return a;
    return gcd(b,a%b);
}
int  main()
{
int a , b;
printf("Enter the two numbers:");
scanf("%d %d",&a,&b);
printf("The gcd of the given numbers is: %d", gcd(a,b));
return 0;
}