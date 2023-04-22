string firstRepChar(string s)
{
    //code here.
       unordered_map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
             m[s[i]]++;
             string ans="";
            if(m[s[i]]==2)
            {
                ans+=s[i];
                return ans;
            }
        }
       
       
        return "-1";
}
