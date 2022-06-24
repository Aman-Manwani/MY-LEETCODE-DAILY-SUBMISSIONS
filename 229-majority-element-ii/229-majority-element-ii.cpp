class Solution {
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>m;
        vector<int>v;
        int l=nums.size()/3;
        for(auto it:nums)
        {
            m[it]++;
        }
        for(auto it:m)
        {
            if(it.second>l)
            {
                v.push_back(it.first);
            }
        }
    return v;
    }
};