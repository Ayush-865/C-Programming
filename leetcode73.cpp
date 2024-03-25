#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> v[3][4]={0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 4; j++)
        {
            cout<<v[i][j];
        }
        
    }
    

return 0;
}
