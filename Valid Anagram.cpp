class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        
       unordered_map<int,int> map;
       for(int i=0;i<s.length();i++)
       {
           map[s[i]]++;
       }
       for(int i=0;i<t.length();i++)
       {
           map[t[i]]--;
       }
      for(int i=0;i<map.size();i++)
      {
          if(map[i]!=0)
          {
              return false;
          }
      }
      return true;
    }
};
