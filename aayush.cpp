#include<iostream>
using namespace std;
int main()
{

int sum1 = 0;
int sum2 = 0;


int array[10]={0,1,2,3,4,5,6,1,1,7};

for(int i = 0; i < 10; i++){
    sum1 += array[i];
    for(int j = i+1; j < 10; j++){
        sum2 += array[j];
    }
    // sum1 = 0;
    if(sum1 == sum2){
            for(int m = 0; m < i+1; m++){
                cout<<array[m] + " ,"<<endl;
            }
            for(int n = i+1; n < 10; n++){
                cout<<array[n] + " ,";
            }
        }
    sum2 = 0;
}

return 0;
}
