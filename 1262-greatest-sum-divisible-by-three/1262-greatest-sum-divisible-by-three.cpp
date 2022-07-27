class Solution {
public:
    int ans(int index,vector<int>&nums,vector<vector<int>>&dp,int r)
    {
        //base case
        if(index==nums.size())
        {
            if(r==0)
            {
                return 0;
            }
            return -1000000;
        }
        if(dp[index][r]!=-1)
        {
            return dp[index][r];
        }
        //rec case
        int op1=nums[index]+ans(index+1,nums,dp,(r+nums[index])%3);
        int op2=0+ans(index+1,nums,dp,r);
        
        return dp[index][r]= max(op1,op2);
    }
    int maxSumDivThree(vector<int>& nums)
    {
        vector<vector<int>>dp(nums.size(),vector<int>(4,-1));
        return ans(0,nums,dp,0);
    }
};