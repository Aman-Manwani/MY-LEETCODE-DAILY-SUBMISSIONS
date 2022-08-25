class Solution {
public:
    int ans(int n,vector<int>&dp)
    {
        //base case
        if(n<=3)
        {
            return n;            
        }
        if(dp[n]!=-1)   return dp[n];
        //rec case
        int mini=INT_MAX;
        for(int i=1;i*i<=n;i++)
        {
            mini=min(mini,1+ans(n-i*i,dp));
        }
        return dp[n] = mini;
    }
    int numSquares(int n) 
    {
        int a=sqrt(n);
        if(a*a==n)  return 1;
        vector<int>dp(n+1,-1);
        return ans(n,dp);
    }
};