class Solution {
public:
    int ans(vector<int>&nums,vector<int>&dp,int index)
    {
        //base case
        if(index==0)
        {
            return nums[0];
        }
        if(index<0)
        {
            return 0;
        }
        if(dp[index]!=-1)
        {
            return dp[index];    
        }
        //rec case
        int pick=nums[index]+ans(nums,dp,index-2);
        int not_pick=0+ans(nums,dp,index-1);
        return dp[index]=max(pick,not_pick);
    }
    int rob(vector<int>& nums)
    {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return ans(nums,dp,n-1);
    }
};