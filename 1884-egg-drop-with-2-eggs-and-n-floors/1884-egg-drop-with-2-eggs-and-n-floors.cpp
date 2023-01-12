class Solution {
public:
    int solve(int eggs,int n,vector<vector<int>>&dp)
    {
        //base case
        if(n<=1 || eggs==1)
        {
            return n;
        }
        if(dp[n][eggs]!=-1)
        {
            return dp[n][eggs];
        }
        //rec case
        //if eggs got broke
        int mini=INT_MAX;
        for(int i=1;i<n;i++)
        {
            mini=min(mini,max(solve(eggs-1,i-1,dp),solve(eggs,n-i,dp))+1);
        }
        return dp[n][eggs] = mini;
    }
    int twoEggDrop(int n) 
    {
        vector<vector<int>>dp(n+1,vector<int>(3,-1));
        return solve(2,n,dp);
    }
};