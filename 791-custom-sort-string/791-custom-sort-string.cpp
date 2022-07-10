class Solution {
public:
    string customSortString(string order, string s) 
    {
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        string ans="";
        for(int i=0;i<order.size();i++)
        {
            if(m[order[i]]>0)
            {
                int temp=m[order[i]];
                while(temp--)
                {
                    ans+=order[i];
                }
                m[order[i]]=0;
            }
        }
        cout<<ans;
        for(auto it:s)
        {
            if(m[it]!=0)
            {
                ans+=it;
            }
        }
        return ans;
    }
};