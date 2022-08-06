class Solution {
public:
    int ans(int i,int j,string &s,string &t,vector<vector<int>>&dp)
    {
        //base case
        if(i==0)     return j;
        if(j==0)     return i;
        if(dp[i][j]!=-1)    return dp[i][j];
        //rec case
        if(s[i-1]==t[j-1])  return dp[i][j] = ans(i-1,j-1,s,t,dp);
        else
            return dp[i][j] = min(1+ans(i-1,j,s,t,dp),min(1+ans(i,j-1,s,t,dp),1+ans(i-1,j-1,s,t,dp)));
    }
    int minDistance(string s, string t) 
    {
        vector<vector<int>>dp(s.length()+1,vector<int>(t.length()+1,-1));
        return ans(s.length(),t.length(),s,t,dp);
    }
};