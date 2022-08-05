class Solution {
public:
    int ans(vector<int>&nums,int target,int sum,vector<int>&dp)
    {
        //base case
        if(sum>target)     return 0;   
        if(sum==target)    return 1;
        if(dp[sum]!=-1) return dp[sum];
        //rec case
        int ways=0;
        for(int i=0;i<nums.size();i++)
        {
            if(sum+nums[i]<=target)
            {
                ways+=ans(nums,target,sum+nums[i],dp);
            }
        }
        return dp[sum]= ways;
    }
    int combinationSum4(vector<int>& nums, int target) 
    {
        vector<int>dp(1300,-1);
        return ans(nums,target,0,dp);
    }
};