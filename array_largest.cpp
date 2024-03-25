#include<iostream>
using namespace std;
int main()
{
    int array[]={2,3,5,50,4,16,9,0};
    int big=0;
    int secondbig=0;
    for (int i = 0; i < 8; i++)
    {
        if (big<array[i])
        {
            big=array[i];
            array[i]=0;
        }
        
    }

for (int i = 0; i < 8; i++)
{
     if (secondbig<array[i])
        {
            secondbig=array[i];
        }    

}      
    cout<<"the biggest number of array is:"<<big<<endl;
    cout<<secondbig;
}