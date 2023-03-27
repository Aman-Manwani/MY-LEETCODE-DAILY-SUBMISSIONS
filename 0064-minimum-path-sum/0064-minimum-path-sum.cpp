class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& nums,vector<vector<int>>&dp)
    {
        //base case
        if(i>=nums.size() || j>=nums[0].size())
        {
            return 1000;
        }
        if(i == nums.size()-1 && j == nums[0].size()-1)
        {
            return nums[i][j];
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        //rec case
        int op1 = nums[i][j] + solve(i+1,j,nums,dp);
        int op2 = nums[i][j] + solve(i,j+1,nums,dp);
        return dp[i][j] = min(op1,op2);
    }
    int minPathSum(vector<vector<int>>& nums)
    {
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(nums[0].size()+1,-1));
        return solve(0,0,nums,dp);    
    }
};