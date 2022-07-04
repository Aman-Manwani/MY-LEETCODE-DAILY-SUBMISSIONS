class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b)
    {
        if(a.second<b.second)
        {
            return true;    
        }
        return false;
    }
    vector<int> maxSubsequence(vector<int>& nums, int k) 
    {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(make_pair(nums[i],i));
        }
        sort(v.begin(),v.end());
        vector<pair<int,int>>temp;
        for(int i=0;i<k;i++)
        {
            temp.push_back(v[v.size()-1]);
            v.pop_back();
        }
        sort(temp.begin(),temp.end(),cmp);
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(temp[i].first);
        }
        return ans;
    }
};