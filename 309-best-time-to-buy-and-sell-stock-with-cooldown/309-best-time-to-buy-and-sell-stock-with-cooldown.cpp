class Solution {
public:
    int ans(int index,int buy,vector<int>&prices,vector<vector<int>>&dp)
    {
        //base case 
        if(index>=prices.size())    return 0;
        if(dp[index][buy]!=-1)  return dp[index][buy];
        //rec case
        long long profit=0;
        if(buy==1)
        {
            profit=max(-prices[index]+ans(index+1,0,prices,dp),0+ans(index+1,1,prices,dp));
        }else
            profit=max(prices[index]+ans(index+2,1,prices,dp),0+ans(index+1,0,prices,dp));
        return dp[index][buy] = profit;
    }
    int maxProfit(vector<int>& prices) 
    {
        vector<vector<int>>dp(prices.size()+1,vector<int>(2,-1));
        return ans(0,1,prices,dp);
    }
};