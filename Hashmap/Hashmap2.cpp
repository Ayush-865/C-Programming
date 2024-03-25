#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
cout<<"Enter no of elements"<<endl;
int n;
cin>>n;
vector<int> v(n);
map<int , int, greater<int>> freq;
for (int i = 0; i < n; i++)
{
    cin>>v[i];    
}
for (int i = 0; i < n; i++)
{
    //storing freq
    freq[v[i]]++;
}
int sum=0;
map<int, int>::iterator itr;
for (itr = freq.begin(); itr != freq.end(); itr++)
{
    if(itr->second >1)
    {
        sum += itr->first;
    }
    
}
cout<<"Sum: "<<sum;
return 0;
}