class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int n=nums.size()/2;
        for(auto it:m)
        {
            if(it.second>n)
            {
                return it.first; 
            }
        }
        return 0;
    }
};