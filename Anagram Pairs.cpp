#include<bits/stdc++.h>
bool isAnagram(string str1, string str2)
{
    //Write your code here
    int n=str1.size();
    int m=str2.size();
    if(n!=m)
    {
        return false;
    }
    // sort(str1.begin(),str1.end());
    // sort(str2.begin(),str2.end());
    // if(str1!=str2)
    // {
    //     return false;
    // }
    // return true;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[str1[i]]++;
    }
    for(int j=0;j<m;j++)
    {
        mp[str2[j]]--;
    }
    for(int i=0;i<mp.size();i++)
    {
        if(mp[i]!=0)
        {
            return false;
        }
    }
    return true;
}
