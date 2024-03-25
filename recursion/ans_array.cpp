#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=2n;
    int nums[n];
    int ans[m];
    for(int z=0;z<n;z++){
        cin>>nums[z];
    }
    for(int i=0; i<n; i++)
    {
        ans[i]=nums[i];
        ans[n+i]=nums[i];
    }
    for(int j=0;j<2n;j++){
        cout<<ans[j];
    }
    return 0;
}