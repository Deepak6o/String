class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> roman={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int res=0;
        int n=s.length()-1;
        for(int i=n;i>=0;i--)
        {
            if(i>0 and roman[s[i]]>roman[s[i-1]])
            {
                res+=(roman[s[i]]-roman[s[i-1]]);
                i--;
            }
            else
            {
                res+=roman[s[i]];
            }
            
        }
        return res;
        
    }
};
