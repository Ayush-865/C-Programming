#include<iostream>
using namespace std;
int main()
{
    int array[]={1,3,5,7,9};
    int sum=12;
    int pairs=0;
    for (int i = 0; i < 5; i++)
    {
       for (int j = i+1; j <5;j++)
       {
        if (array[i]+array[j]==sum)
        {
          pairs++;
        }
        
       }
       
    }
    cout<<pairs<<endl;
    return 0;
}