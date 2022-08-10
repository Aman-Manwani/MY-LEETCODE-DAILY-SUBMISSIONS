class Solution {
public:
    /*int ans(int index,int buy,int cap,vector<int>&prices,vector<vector<vector<int>>>&dp)
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
    }*/
    int maxProfit(vector<int>& prices)
    {
        vector<vector<vector<int>>>dp(prices.size()+1,vector<vector<int>>(2,vector<int>(3,0)));
        //base case
        long long profit=0;
        /*for(int i=0;i<=prices.size();i++)
        {
            for(int b=0;b<=1;b++)
            {
                dp[i][b][0]=0;
            }
        }
        for(int b=0;b<=1;b++)
        {
            for(int c=0;c<=2;c++)
            {
                dp[prices.size()][b][c]=0;
            }
        }*/
        //rec case
        for(int i=prices.size()-1;i>=0;i--)
        {
            for(int b=0;b<=1;b++)
            {
                for(int c=1;c<=2;c++)
                {
                    if(b==1)
                    {
                        profit=max(-prices[i]+dp[i+1][0][c],dp[i+1][1][c]);
                    }else
                        profit=max(prices[i]+dp[i+1][1][c-1],dp[i+1][0][c]);
                    dp[i][b][c] = profit;    
                }
            }
        }
        return dp[0][1][2];
    }
};