#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,long long, greater<string>> directory;

    directory["Ayush"]=9834016627;
    directory["Dhruv"]=8080890941;
    directory["Shivam"]=8799836952;
            directory["Dhruv"]=808089;
            directory.insert({"Ayush", 11111});
            directory.insert(make_pair("vaibhavi",7999568826)); //O(logn)

    for(auto element:directory){
        cout<<"name - "<<element.first<<endl;
        cout<<"Phone no - "<<element.second<<endl;
    }
    

return 0;
}
