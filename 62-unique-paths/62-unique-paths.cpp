class Solution {
public:
    int ans(int i,int j,int m,int n,vector<vector<int>>&dp)
    {
        //base case
        if(i==m-1 && j==n-1)
        {
            return 1;
        }
        if(i>m-1 || j>n-1)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        //rec case
        int op1=ans(i+1,j,m,n,dp);
        int op2=ans(i,j+1,m,n,dp);
        return dp[i][j]=op1+op2;
    }
    int uniquePaths(int m, int n)
    {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return ans(0,0,m,n,dp);    
    }
};