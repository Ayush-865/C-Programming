#include<iostream>
using namespace std;
int main()
{
    int array[]={1,3,5,7,9,11,13,0};
    int sum=12;
    int triplets=0;
    for (int i = 0; i < 8; i++)
    {
       for (int j = i+1; j <8;j++)
       78{
         for (int k = j+1; k< 8; k++)
         {
            if (array[i]+array[j]+array[k]==sum)
          
          triplets++;
         }
        
        }
        
       }
       
    }
    cout<<triplets<<endl;
    return 0;
}