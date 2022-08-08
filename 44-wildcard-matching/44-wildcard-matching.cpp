class Solution {
public:
    bool ans(int i,int j,string &s,string &p,vector<vector<int>>&dp)
    {
        //base case
        if(i<0 && j<0)  return true;
        if(i<0 && j>=0)  return false;
        if(i>=0 && j<0)
        {
            for(int temp=0;temp<=i;temp++)
            {
                if(s[temp]!='*')
                {
                    return false;
                }
            }
            return true;
        }
        if(dp[i][j]!=-1)    return dp[i][j];
        //rec case
        if(s[i]==p[j] || s[i]=='?')
        {
            return dp[i][j] = ans(i-1,j-1,s,p,dp);
        }
        if(s[i]=='*')
        {
            return dp[i][j] = ans(i-1,j,s,p,dp) | ans(i,j-1,s,p,dp);
        }
        return dp[i][j] = false;
    }
    bool isMatch(string p, string s)
    {
        int n=s.length();
        int m=p.length();
        vector<vector<int>>dp(s.length()+1,vector<int>(p.length()+1,-1));
        return ans(n-1,m-1,s,p,dp);
    }
};