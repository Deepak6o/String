class Solution {
public:
    string extraspace(string &S)
    {
        string result;
        bool space=false;
        for(char c: S)
        {
            if(c==' ')
            {
                if(!space){
                    result+=c;
                    space=true;
                }
            }
            else
            {
                result+=c;
                space=false;
            }
        }
        if(result.back()==' '){
            result.pop_back();
        }
        if(result[0]==' ')
        {
            result.erase(0,1);
        }
        return result;
    }
    string reverseWords(string S) {
        int a=0;
        reverse(S.begin(),S.end());
        for(int i=0;i<=S.size();i++)
        {
            if(S[i]==' ' or i==S.size())
            {
                reverse(S.begin()+a,S.begin()+i);
                a=i+1;
            }
        }
        string ans=extraspace(S);
        return ans;
    }
};
