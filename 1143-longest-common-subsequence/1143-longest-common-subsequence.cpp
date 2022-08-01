class Solution {
public:
    /*int ans(int i,int j,string s,string t,vector<vector<int>>&dp)
    {
        //base case
        if(i==0 || j==0)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        //rec case
        if(s[i-1]==t[j-1]) return dp[i][j] = 1+ans(i-1,j-1,s,t,dp);
        else
            return dp[i][j] = 0+max(ans(i-1,j,s,t,dp),ans(i,j-1,s,t,dp));
        
    }*/
    int longestCommonSubsequence(string s, string t)
    {
        int n=s.length();
        int m=t.length();
        vector<vector<int>>dp(n+3,vector<int>(m+3,-1));
        //base case
        for(int i=0;i<=n;i++)   dp[i][0]=0;
        for(int j=0;j<=m;j++)   dp[0][j]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==t[j-1]) dp[i][j] = 1+dp[i-1][j-1];
                else
                dp[i][j] = 0+max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};