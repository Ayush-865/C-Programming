#include<iostream>
#include<map>
using namespace std;

int main()
{
    cout << "Enter a string to check if it is a pangram: ";
    string a;
    cin >> a;
    
    map<char, int> m;
    
    for (int i = 0; i < a.length(); i++)
    {
        m[tolower(a[i])]++;
    }
    if (m.size()==26)
    {
        cout<<"Pangram";
    }
    else
        cout<<"Not Pangram";
    
    return 0;
}
