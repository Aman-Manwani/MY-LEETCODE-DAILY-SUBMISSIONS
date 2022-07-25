class Solution {
public:
    int ans(int n,vector<int>&dp)
    {
        if(n==0 || n==1)
        {
            return 1;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        dp[n-1]=ans(n-1,dp);
        dp[n-2]=ans(n-2,dp);
        return dp[n-1]+dp[n-2];
    }
    int climbStairs(int n)
    {
        vector<int>dp(n+1,-1);
        return ans(n,dp);
    }
};