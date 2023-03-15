#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;

    string str[]= { "2",   "22",  "222", "3",   "33",   "333", "4",
                    "44",  "444", "5",   "55",  "555",  "6",   "66",
                    "666", "7",   "77",  "777", "7777", "8",   "88",
                    "888", "9",   "99",  "999", "9999"
                  };
    string ans="";
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]== ' ')
        {
            ans+='0';
        }
        else
        {
            int postion=s[i]-'A';
            ans=ans+str[postion];
        }
    }
    cout<<ans;
}
