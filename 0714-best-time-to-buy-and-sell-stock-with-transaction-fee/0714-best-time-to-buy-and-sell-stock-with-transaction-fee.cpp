class Solution {
public:
    /*int ans(int index,int buy,int fee,vector<int>&prices,vector<vector<int>>&dp)
    {
        //base case
        if(index==prices.size())    return 0;
        if(dp[index][buy]!=-1)  return dp[index][buy];
        //rec case
        long long profit=0;
        if(buy==1)
        {
            profit=max(-prices[index]+ans(index+1,0,fee,prices,dp),0+ans(index+1,1,fee,prices,dp));
        }else
            profit=max(prices[index]-fee+ans(index+1,1,fee,prices,dp),0+ans(index+1,0,fee,prices,dp));
        return dp[index][buy] = profit;
    }*/
    int maxProfit(vector<int>& prices, int fee) 
    {
        long long int profit=0;
        vector<vector<int>>dp(prices.size()+1,vector<int>(2,-1));
        dp[prices.size()][0]=dp[prices.size()][1]=0;
        for(int index=prices.size()-1;index>=0;index--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                if(buy==1)
                {
                    profit=max(-prices[index]+dp[index+1][0],dp[index+1][1]);
                }else
                    profit=max(prices[index]-fee+dp[index+1][1],dp[index+1][0]);
                dp[index][buy] = profit;
            }
        }
        return dp[0][1];        
    }
};