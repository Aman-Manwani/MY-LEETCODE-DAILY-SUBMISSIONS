class Solution {
public:
    int ans(int i,int j,vector<vector<int>>&nums,vector<vector<int>>&dp)
    {
        //base case
        if(j<0 || j>=nums[0].size())
        {
            return 10000;
        }
        if(i==nums.size()-1)
        {
            return nums[i][j];
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        //rec case
        int op1=nums[i][j]+ans(i+1,j,nums,dp);
        int op2=nums[i][j]+ans(i+1,j-1,nums,dp);
        int op3=nums[i][j]+ans(i+1,j+1,nums,dp);
        return dp[i][j]= min(op1,min(op2,op3));
    }
    int minFallingPathSum(vector<vector<int>>&nums) 
    {
        int m=nums.size();
        int n=nums[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int temp=INT_MAX;
        for(int i=0;i<n;i++)
        {
            temp=min(temp,ans(0,i,nums,dp));
        }
        return temp; 
    }
};