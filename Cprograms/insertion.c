#include<stdio.h>
void main()
{
    int a[50];
    int i,n;
    int item,position;
    printf("enter the number of  elements of array:");
    scanf("%d",&n);
    for (i = 0; i<n; i++)
    {
       scanf("%d",&a[i]);
    }
    printf("enter the item and the position of item:");
    scanf("%d",&item);
    scanf("%d",&position);
    for (i=n ; i>= position ; i--)
    {
        a[i+1]=a[i];
    }
    a[position-1]=item;
    printf("the new array after insertion is:");
    for ( i =0; i<=n; i++)
    {
        printf("%d\t",a[i]);
    }  
}