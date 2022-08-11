class Solution {
public:
    int maxi=0;
    int ans(int index,vector<int>&nums,int prev,vector<vector<int>>&dp)
    {
        //base case
        if(index==nums.size())
        {
            return 0;
        }
        if(dp[index][prev+1]!=-1) return dp[index][prev+1];
        //rec case
        int len=0+ans(index+1,nums,prev,dp);
        if(prev==-1 || nums[index]>nums[prev])
        {
            len=max(len,1+ans(index+1,nums,index,dp));
        }
        return dp[index][prev+1] = len;
    }
    int lengthOfLIS(vector<int>& nums) 
    {
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return ans(0,nums,-1,dp);
    }
};