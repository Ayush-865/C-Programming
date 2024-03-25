#include<iostream>
using namespace std;
void increment(int a){
if(a<1) return;
increment(a-1);
cout<<a<<" ";
}
int main()
{
int n;
cout<<"Enter any number to find iteration";
cin>>n;
increment(n);
return 0;
}
