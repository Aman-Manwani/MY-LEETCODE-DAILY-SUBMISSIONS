class Solution {
public:
    int ans(int i,int j,string &s,string &t,vector<vector<int>>&dp)
    {
        //base case
        if(j<0) return 1;
        if(i<0) return 0;
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        //rec case
        if(s[i]==t[j])  return dp[i][j] = ans(i-1,j-1,s,t,dp)+ans(i-1,j,s,t,dp);
        else
            return dp[i][j] = ans(i-1,j,s,t,dp);
    }
    int numDistinct(string s, string t) 
    {
        int n=s.length();
        int m=t.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return ans(n-1,m-1,s,t,dp);
    }
};