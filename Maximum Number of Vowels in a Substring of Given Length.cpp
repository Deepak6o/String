class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length();
        int count=0;int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                count++;
            }
            if(i-k>=0)
            {
                if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u')
                {
                    count--;
                }
            }
            if(count>ans)
            {
                ans=count;
            }
        }
        return ans;
        
    }
};
