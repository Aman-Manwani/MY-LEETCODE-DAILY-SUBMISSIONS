class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        if(s1.length()>s2.length())
        {
            return false;
        }
        unordered_map<char,int>m1;
        for(int i=0;i<s1.length();i++)
        {
            m1[s1[i]]++;
        }
        int i=0,j=0;
        unordered_map<char,int>m2;
        while(j-i<s1.length())
        {
            m2[s2[j]]++;
            j++;
        }
        if(m1==m2)
        {
            return true;
        }
        while(j<s2.length())
        {
            m2[s2[i]]--;
            if(m2[s2[i]]==0)
            {
                m2.erase(s2[i]);
            }
            i++;
            m2[s2[j]]++;
            j++;
            if(m1==m2)
            {
                return true;
            }
        }
        return false;
    }
};