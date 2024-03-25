#include<iostream>
using namespace std;
int main()
{
int array[9]={1,2,3,4,5,6,7,8,9};
int n=9;
int k;
cout<<"enter value of number of roations:"<<endl;
cin>>k;

k=k%n;
// if k=15 then the remainder will be 6 and 6th_rotation is equivalent to 15th
int newarray[9]={0,0,0,0,0,0,0,0,0};
int j=0;
for (int i =n-k; i <9; i++)
{
   newarray[j++]=array[i];   
}
for (int p = 0; p <n-k ; p++)
{
    newarray[j++]=array[p];
}
//display
for (int z = 0; z < 9; z++)
{
   cout<<newarray[z]<<" ";
}
return 0;
}