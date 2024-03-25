#include<iostream>
#include<vector>
using namespace std;
int main()
{

vector<vector<int>> v ={
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {0,1,2}
}; //the above matrix's dimenssions are 4*3 , m=4 , n=3
cout<<v.size()<<endl;
cout<<v[0].size()<<endl;
for (int i = 0; i < v.size(); i++)
{
    v[i][0]=0;
}

for (int i = 0; i < v.size(); i++)
{
    for (int j = 0; j < v[0].size(); j++)
    {
        cout<<v[i][j];
    }
    cout<<endl;
}
return 0;
}
