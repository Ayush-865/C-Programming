#include<iostream>
using namespace std;
int main()
{
int array[9]={1,2,3,4,5,6,7,8,9};

for (int i = 1; i < 9; i++)
{
    array[i]=array[i]+array[i-1];
}
//display
for (int i = 0; i < 9; i++)
{
    cout<<array[i]<<" ";
}
cout<<endl;
return 0;
}
