class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int>v;
        for(auto it:m)
        {
            if(it.second==2)
            {
                v.push_back(it.first);
            }
        }
        return v;
    }
};