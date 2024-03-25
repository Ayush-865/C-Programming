#include<stdio.h>
#include<conio.h>
int prime(int n)
{
    int i;
    for ( i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            return 1;
            break;
        }
        else
        return 0;
        
    }
}

void main()
{
    int a , b , i ,j ,count=0 ;
    printf("Enter the domain numbers: \n");
    scanf("%d %d", &a, &b);

    printf("Following are prime no:");
    for( i = a +1 ; i < b ; i++)
    {
        count=prime(i);
        if (count==0)
        {
            printf("%d\n",i);
        }
        
    }
}