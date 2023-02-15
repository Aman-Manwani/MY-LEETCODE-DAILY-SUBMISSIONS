class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper)
    {
        sort(nums.begin(),nums.end());
        long long int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int low = lower-nums[i];
            int high = upper-nums[i];
            int left = lower_bound(nums.begin()+i+1,nums.end(),low)-nums.begin();
            int right = upper_bound(nums.begin()+i+1,nums.end(),high)-nums.begin();
            count+=right-left;
        }
        return count;
    }
};