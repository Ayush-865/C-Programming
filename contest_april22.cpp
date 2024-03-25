#include<iostream>
using namespace std;
int main()
{
vector<string> v={"l","e","e","t","c","o","d","e"};
int i=0, j=v.size()-1;
int count=0;
while (i<j)
{
    if(v[i]==v[j]){
        i++;
        j--;
    }
    else{
        if(j-i==1){
            count++;
        }
        if(v[i+1]==v[j]){
            i++;
            count++;
        }
        else{
            count++;
            j--;
        }
    }
}

return count;
}
