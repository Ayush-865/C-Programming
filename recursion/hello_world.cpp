#include<iostream>
using namespace std;
int display(int n)
{
    if(n<0)
    {
        return 0;
    }
    cout<<"hello "<<display(n-1)<<endl;
}
int main()
{
    int n;
    cin>>n;
    cout<<display(n);
return 0;
}
