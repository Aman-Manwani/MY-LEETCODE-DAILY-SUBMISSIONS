class Solution {
public:
    int ans(int start,int end,vector<int> &nums,vector<vector<int>>&dp)
    {
        //base case
        if(start>end) return 0;
        if(dp[start][end]!=-1)  return dp[start][end];
        //rec case
        int mini=INT_MAX;
        for(int i=start;i<=end;i++)
        {
            int cost=nums[end+1]-nums[start-1]+ans(start,i-1,nums,dp)+ans(i+1,end,nums,dp);
            mini=min(cost,mini);
        }
        return dp[start][end] = mini;
    }
    int minCost(int n, vector<int>& nums)
    {
        nums.push_back(n);
        nums.push_back(0);
        sort(nums.begin(),nums.end());
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size(),-1));
        return ans(1,nums.size()-2,nums,dp);
    }
};