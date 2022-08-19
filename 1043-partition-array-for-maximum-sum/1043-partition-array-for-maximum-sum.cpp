class Solution {
public:
    int minimum(int a,int b)
    {
        if(a<b) return a;
        return b;
    }
    int ans(int index,vector<int>&nums,int k,vector<int>&dp)
    {
        //base case
        if(index==nums.size())
        {
            return 0;
        }
        if(dp[index]!=-1)   return dp[index];
        //rec case
        int len=0;
        int ret=0;
        int maxi=INT_MIN;
        for(int j=index;j<minimum(nums.size(),index+k);j++)
        {
            len++;
            maxi=max(maxi,nums[j]);
            ret=max(ret,len*maxi+ans(j+1,nums,k,dp));
        }
        return dp[index] = ret;
    }
    int maxSumAfterPartitioning(vector<int>& nums, int k) 
    {
        vector<int>dp(nums.size(),-1);
        return ans(0,nums,k,dp);
    }
};