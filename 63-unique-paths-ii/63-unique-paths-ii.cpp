class Solution {
public:
    int ans(int i,int j,int m,int n,vector<vector<int>>&dp,vector<vector<int>>& nums)
    {
        //base case
        if(i>m-1 || j>n-1 ||nums[i][j]==1)
        {
            return 0;
        }
        if(i==m-1 && j==n-1)
        {
            return 1;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        //rec case
        int op1=ans(i+1,j,m,n,dp,nums);
        int op2=ans(i,j+1,m,n,dp,nums);
        return dp[i][j]=op1+op2;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& nums) 
    {
        int m=nums.size();
        int n=nums[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return ans(0,0,m,n,dp,nums);
    }
};