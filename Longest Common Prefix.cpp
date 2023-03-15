class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(),strs.end());
        string str1=strs[0];
        string str2=strs[strs.size()-1];
        for(int i=0;i<str1.length();i++)
        {
            if(str1[i]==str2[i])
            {
                ans=ans+str1[i];
            }
            else
            {
                break;
            }
        }
        return ans;

        // string ans;
        // for(int i=0;;i++)
        // {
        //     if(strs[0][i] == '\0')
        //     return ans;
        //     for(int j=0;j<strs.size()-1;j++)
        //     {
        //         if(strs[j][i] != strs[j+1][i])
        //         return ans;
        //     }
        //     ans+=strs[0][i];
        // }
        // return ans;
    }
};
