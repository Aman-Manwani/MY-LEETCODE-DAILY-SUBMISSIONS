class Solution {
public:
    int solve(vector<int>& days, vector<int>& costs,int idx,vector<int>&dp)
    {
        //base case
        if(idx>=days.size())
        {
            return 0;
        }
        if(dp[idx]!=-1)
        {
            return dp[idx];
        }
        //rec case
        int op1 = costs[0] + solve(days,costs,idx+1,dp);
        
        int i;
        for(i=idx ; i<days.size() && days[i]<days[idx]+7;i++);
        
        int op2 = costs[1]+solve(days,costs,i,dp);
        
        
        for(i=idx ; i<days.size() && days[i]<days[idx]+30;i++);
            
        int op3 = costs[2]+solve(days,costs,i,dp);
        
        return dp[idx] = min(op1,min(op2,op3));
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) 
    {
        vector<int>dp(days.size()+1,-1);
        // return solve(days,costs,0,dp);
        int n=days.size();
        dp[n]=0;
        for(int idx=n-1;idx>=0;idx--)
        {
            int op1 = costs[0] + dp[idx+1];
        
            int i;
            for(i=idx ; i<days.size() && days[i]<days[idx]+7;i++);

            int op2 = costs[1]+dp[i];


            for(i=idx ; i<days.size() && days[i]<days[idx]+30;i++);

            int op3 = costs[2]+dp[i];
            dp[idx]=min(op1,min(op2,op3));
        }
        return dp[0];
    }
};