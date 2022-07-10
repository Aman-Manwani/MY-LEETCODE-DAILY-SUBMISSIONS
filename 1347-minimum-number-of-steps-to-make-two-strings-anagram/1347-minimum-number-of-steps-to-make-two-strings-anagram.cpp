class Solution {
public:
    int minSteps(string s, string t) 
    {
        map<char,int>m1;
        map<char,int>m2;
        for(int i=0;i<s.length();i++)
        {
            m1[s[i]]++;
            m2[t[i]]++;
        }
        int ans=0;
        for(auto it:m1)
        {
            if(m2.find(it.first)!=m2.end())
            {
                if(it.second>m2[it.first])
                {
                    ans+=it.second-m2[it.first];
                }
            }else
            {
                ans+=it.second;
            }
            cout<<ans<<" "; 
        }
        return ans;
    }
};