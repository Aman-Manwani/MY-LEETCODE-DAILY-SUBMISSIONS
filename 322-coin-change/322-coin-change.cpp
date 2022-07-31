class Solution {
public:
    int f(int index,vector<int>&nums,int target,vector<vector<int>>&dp)
    {
        //base case
        if(target<0)
        {
            return 1e9;
        }
        if(index==nums.size()-1)
        {
            if(target%nums[index]==0)
            {
                return target/nums[index];
            }
            return 1e9;
        }
        if(dp[index][target]!=-1)
        {
            return dp[index][target];
        }
        //rec case
        int op1=f(index+1,nums,target,dp);
        int op2=INT_MAX;
        if(nums[index]<=target)
        {
            op2=1+f(index,nums,target-nums[index],dp);
        }
        return dp[index][target] = min(op1,op2);
    }
    int coinChange(vector<int>& coins, int amount)
    {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        int ans= f(0,coins,amount,dp);
        if(ans>=1e9)
        {
            return -1;
        }
        return ans;
    }
};