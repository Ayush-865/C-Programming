#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of array:"<<endl;
    for (int z = 0; z < n; z++)
    {
        cin>>a[z];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <n-i-1; j++)
        {
           if (a[i]>a[i+1])
           {
                swap(a[i],a[i+1]);
           }
            
        }
    }
    cout<<"Printing the sorted array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}
