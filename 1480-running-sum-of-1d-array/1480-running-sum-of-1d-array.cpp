class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        if(nums.size()==1)
        {
            return nums;
        }
        vector<int>v(nums.size(),0);
        v[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            v[i]=v[i-1]+nums[i];
        }
        return v;
    }
};