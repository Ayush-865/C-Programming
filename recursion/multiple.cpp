#include<iostream>
using namespace std;
void sum(int n, int k){
    if (k==0) return;
    sum(n, k-1);
    cout<<k*n<<" ";
    }
int main()
{
int a,k;
cout<<"Enter any number and its number of multiples required:";
cin>>a>>k;
sum(a,k);
return 0;
} 