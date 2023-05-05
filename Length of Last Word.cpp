class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<char> s1;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            s1.push(s[i]);
        }
        while(s1.top()==' ')
        {
            s1.pop();
        }
        while(!s1.empty() and s1.top()!=' ')
        {
            count++;
            s1.pop();
        }
        return count;

    }
};
