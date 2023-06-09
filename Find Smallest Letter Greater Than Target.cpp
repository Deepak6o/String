class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        // char ans;
        // for(int i=0;i<letters.size();i++)
        // {
        //     if(letters[i]>target)
        //     {
        //         ans = letters[i];
        //         break;
        //     }
        //     else
        //     {
        //         ans = letters[0];
        //     }
        // }
        // return ans;
        int l=0;
        int h=letters.size()-1;
        while(l<h)
        {
            int mid=l+(h-l)/2;
            if(letters[mid]<=target)
            {
                l=mid+1;
            }
            else
            {
                h=mid;
            }
        }
        return letters[l]>target ? letters[l]: letters[0];

    }
};
