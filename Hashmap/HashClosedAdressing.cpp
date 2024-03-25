#include<iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
class Hashing{
public:
    vector<list<int>> hashtable;
    int buckets;

    Hashing(int size){
        buckets=size;
        hashtable.resize(size);
    }

    int hashvalue(int key){
        return key%buckets; //division method
    }

    void addkey(int key){
        int index = hashvalue(key);
        hashtable[index].push_back(key);
        cout<<key<<" is added"<<endl;
    }
    list<int>::iterator search(int key){
        int index = hashvalue(key);
        return find(hashtable[index].begin(), hashtable[index].end(), key);
    }

    void deletekey(int key){
        int index=hashvalue(key);
        if(search(key) != hashtable[index].end()){
        hashtable[index].erase(search(key));
        cout<<key<<" is deleated"<<endl;
        }
        else{
            cout<<key<<" not present in index"<<endl;
        }
    }
};
int main()
{
    Hashing h(10);

    h.addkey(5);
    h.addkey(10);
    h.addkey(7);
    h.deletekey(10);
return 0;
}