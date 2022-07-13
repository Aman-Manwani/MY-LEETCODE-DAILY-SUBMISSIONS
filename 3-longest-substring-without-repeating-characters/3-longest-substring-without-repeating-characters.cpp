class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int i=0,j=0;
        map<char,int>m;
        int maxi=0;
        while(j<s.size())
        {
            m[s[j]]++;
            if(m.size()==j-i+1)
            {
                maxi=max(maxi,j-i+1);
            }else
            if(m.size()<j-i+1)
            {
                while(m.size()!=j-i+1)
                {
                    m[s[i]]--;
                    if(m[s[i]]==0)
                    {
                        m.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        return maxi;
    }
};