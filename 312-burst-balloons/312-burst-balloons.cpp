class Solution {
public:
    /*int ans(int start,int end,vector<int>&nums,vector<vector<int>>&dp)
    {
        //base case
        if(start>end)   return 0;
        if(dp[start][end]!=-1)  return dp[start][end];
        //rec case
        int maxi=INT_MIN;
        for(int i=start;i<=end;i++)
        {
            int cost=nums[start-1]*nums[i]*nums[end+1]+ans(start,i-1,nums,dp)+ans(i+1,end,nums,dp);
            maxi=max(maxi,cost);
        }
        return dp[start][end] = maxi;
    }*/
    int maxCoins(vector<int>& nums)
    {
        nums.push_back(1);
        nums.insert(nums.begin(),1);
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,0));
        for(int start=nums.size()-2;start>=1;start--)
        {
            for(int end=1;end<=nums.size()-2;end++)
            {
                if(start>end)   continue;
                int maxi=INT_MIN;
                for(int i=start;i<=end;i++)
                {
                    int cost=nums[start-1]*nums[i]*nums[end+1]+dp[start][i-1]+dp[i+1][end];
                    maxi=max(maxi,cost);
                }
                dp[start][end] = maxi;
            }
        }
        return dp[1][nums.size()-2];
    }
};