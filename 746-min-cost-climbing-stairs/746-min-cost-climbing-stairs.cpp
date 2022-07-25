class Solution {
public:
    int ans(vector<int>&nums,vector<int>&dp,int n,int curr)
    {
        if(curr==nums.size())
        {
            return 0;
        }
        if(dp[curr]!=-1)
        {
            return dp[curr];
        }
        int op1=INT_MAX;
        int op2=INT_MAX;
        if(n-curr>=1)
        {
            op1=nums[curr]+ans(nums,dp,n,curr+1);
        }
        if(n-curr>=2)
        {
            op2=nums[curr]+ans(nums,dp,n,curr+2);
        }
        return dp[curr]=min(op1,op2);
    }
    int minCostClimbingStairs(vector<int>& cost) 
    {
        vector<int>dp(cost.size(),-1);
        int first = ans(cost,dp,cost.size(),0);
        int second = ans(cost,dp,cost.size(),1);
        return min(first,second);
    }
};