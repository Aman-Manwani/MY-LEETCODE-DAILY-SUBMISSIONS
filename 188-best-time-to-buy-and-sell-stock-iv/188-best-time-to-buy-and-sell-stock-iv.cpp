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
    int maxProfit(int k, vector<int>& prices)
    {
        vector<vector<int>>after(2,vector<int>(k+1,0));
        vector<vector<int>>cur(2,vector<int>(k+1,0));
        long long profit=0;
        for(int i=prices.size()-1;i>=0;i--)
        {
            for(int b=0;b<=1;b++)
            {
                for(int c=1;c<=k;c++)
                {
                    if(b==1)
                    {
                        profit=max(-prices[i]+after[0][c],after[1][c]);
                    }else
                        profit=max(prices[i]+after[1][c-1],after[0][c]);
                    cur[b][c] = profit;    
                }
            }
            after=cur;
        }
        return after[1][k];
    }
};