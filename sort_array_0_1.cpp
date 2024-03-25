#include<iostream>
using namespace std;
int main()
{
int array[10]={1,0,0,0,1,1,0,1,0,1};
int count=0;
for (int i = 0; i < 10; i++)
{
    if (array[i]<1)
    {
       count++;
    }
    
}
for (int j = 0; j < count; j++)
{
    array[j]=0;
}
for (int k = count+1 ; k <10; k++)
{
    array[k]=1;
}
//display
for (int l = 0; l < 10; l++)
{
    cout<<array[l]<<" ";
}
cout<<endl;
return 0;
}
