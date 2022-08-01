class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int i=0,j=0;
        if(s.length()>t.length())
        {
            return false;
        }
        if(s.length()==0)
        {
            return true;
        }
        for(i=0;i<t.size();i++)
        {
            if(j==s.size())
            {
                break;
            }
            if(t[i]==s[j])
            {
                j++;
            }
        }
        if(j==s.size())
        {
            return true;
        }
        return false;
    }
};