bool areIsomorphic(string &str1, string &str2)
{
    // Write your code here
    int n=str1.size();
    int m=str2.size();
    if(n!=m)
    {
        return false;
    }
    int m1[256]={0};
    int m2[256]={0};
    for(int i=0;i<n;i++)
    {
        if(!m1[str1[i]] and !m2[str2[i]])
        {
            m1[str1[i]]=str2[i];
            m2[str2[i]]=str1[i];
        }
        else if(m1[str1[i]]!=str2[i])
        {
            return false;
        }
    }
    return true;
}
