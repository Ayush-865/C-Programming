#include<iostream>
using namespace std;
int main()
{
    int num = 12;
long long sum=0;
        while(num/10 > 0){
            while(num/10 >0){
            sum+= num%10;
            num/10;
            }
            num=sum;
            sum=0;
        }
        cout<<"hii";
        return num;
}
