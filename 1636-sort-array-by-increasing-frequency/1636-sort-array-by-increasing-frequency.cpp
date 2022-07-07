class Solution {
public:
    static bool cmp(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.second==b.second)
        {
            if(a.first<b.first)
            {
                return false;
            }
            return true;
        }else
        if(a.second>b.second)
        {
            return false;
        }else
            return true;
    }
    vector<int> frequencySort(vector<int>& nums) 
    {
        map<int,int>m;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(nums[i]))
            {
                m[nums[i]]++;
            }else
                m[nums[i]]=1;
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
                v.push_back(it.first);
            }
        }
        return v;
    }
};