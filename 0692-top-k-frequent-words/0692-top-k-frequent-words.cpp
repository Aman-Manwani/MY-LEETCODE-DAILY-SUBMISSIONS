class Solution {
public:
    static bool comp(pair<int,string>a,pair<int,string>b)
    {
        if(a.first==b.first)
        {
            if(a.second<b.second)
            {
                return true;
            }
            return false;
        }
        if(a.first<b.first)
        {
            return false;
        }
        return true;
    }
    vector<string> topKFrequent(vector<string>& nums, int k) 
    {
        map<string,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<pair<int,string>>v;
        for(auto it:m)
        {
            v.push_back(make_pair(it.second,it.first));
        }
        sort(v.begin(),v.end(),comp);
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
        vector<string>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};