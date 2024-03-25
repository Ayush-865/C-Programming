#include<stdio.h>
#include<math.h>
int reverse( int n)
{
    int digit =(int) log10(n);
    if (n==0)
    {
        return 0;
    }
    else
    return (n%10*pow(10,digit)+(reverse(n/10)));
    }

int  main()
{
int n;
scanf("%d",&n);
printf("%d",reverse(n)); 
return 0;
}
