#include<iostream>
using namespace std;
int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    int ans = n* factorial(n-1);
    return ans;
}
int main()
{
int n;
cin>>n;
cout<<factorial(n);
return 0;
}
