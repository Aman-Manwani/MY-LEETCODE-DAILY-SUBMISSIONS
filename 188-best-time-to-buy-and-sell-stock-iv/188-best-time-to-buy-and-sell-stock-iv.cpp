class Solution {
public:
    int ans(int index,int buy,int cap,vector<int>&prices,vector<vector<vector<int>>>&dp)
    {
        //base case
        if(cap==0)  return 0;
        if(index==prices.size())    return 0;
        if(dp[index][buy][cap]!=-1)  return dp[index][buy][cap];
        //rec case
        long long profit=0;
        if(buy==1)
        {
            profit=max(-prices[index]+ans(index+1,0,cap,prices,dp),0+ans(index+1,1,cap,prices,dp));
        }else
            profit=max(prices[index]+ans(index+1,1,cap-1,prices,dp),0+ans(index+1,0,cap,prices,dp));
        return dp[index][buy][cap] = profit;
    }
    int maxProfit(int k, vector<int>& prices)
    {
        vector<vector<vector<int>>>dp(prices.size()+1,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return ans(0,1,k,prices,dp);
    }
};