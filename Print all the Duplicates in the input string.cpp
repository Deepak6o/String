#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<char,int> m;
    string s;
    getline(cin,s);
    cout<<s<<endl;

    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    for(auto x: m)
    {
        if(x.second>1)
        {
            cout<<x.first<<", count = "<<x.second<<endl;
        }
    }
}
