class Solution {
public:
    int ans(int i,int j,vector<vector<int>>&nums,vector<vector<int>>&dp)
    {
        if(i==nums.size()-1)
        {
            return nums[i][j];
        }
        if(j>i+1)
        {
            return -1000000;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int op1=nums[i][j]+ans(i+1,j,nums,dp);
        int op2=nums[i][j]+ans(i+1,j+1,nums,dp);
        return dp[i][j]= min(op1,op2);
    }
    int minimumTotal(vector<vector<int>>& nums)
    {
        if(nums.size()==1)
        {
            return nums[0][0];
        }
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size(),-1));
        return ans(0,0,nums,dp);
    }
};