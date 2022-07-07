class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b)
    {
        if(a.second>b.second)
        {
            return true;
        }else
        if(a.second==b.second)
        {
            if(a.first<b.first)
            {
                return true;
            }
            return false;
        }else
        {
            return false;
        }
    
    }
    string frequencySort(string s)
    {
        map<char,int>m;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(m.count(s[i]))
            {
                m[s[i]]++;
            }else
                m[s[i]]=1;
        }
        vector<pair<int,int>>temp;
        for(auto it:m)
        {
            temp.push_back(it);
        }
        sort(temp.begin(),temp.end(),cmp);
        for(auto it:temp)
        {
            while(it.second--)
            {
                ans+=it.first;
            }
        }
        return ans;
    }
};