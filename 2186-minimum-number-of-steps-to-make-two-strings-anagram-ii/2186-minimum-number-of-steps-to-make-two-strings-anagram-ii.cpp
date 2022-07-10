class Solution {
public:
    int minSteps(string s, string t) 
    {
        map<char,int>m1;
        map<char,int>m2;
        for(int i=0;i<s.length();i++)
        {
            m1[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            m2[t[i]]++;
        }
        int same_num=0;
        for(auto it:m1)
        {
            if(m2.find(it.first)!=m2.end())
            {
                same_num+=min(it.second,m2[it.first]);
            }
        }
        return s.length()+t.length()-2*same_num;
    }
};