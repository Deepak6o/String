class Solution {
    private:
    bool check(string &s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0;
        int maxlen=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++){
                if(check(s,i,j)){
                    if(j-i+1>maxlen){
                        maxlen=j-i+1;
                        start=i;
                    }
                }
            }
        }
        return s.substr(start,maxlen);
        
    }
};
