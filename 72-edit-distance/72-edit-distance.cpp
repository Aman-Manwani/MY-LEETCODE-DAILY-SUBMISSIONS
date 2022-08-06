class Solution {
public:
    int ans(int i,int j,string &s,string &t,vector<vector<int>>&dp)
    {
        //base case
        if(i<0)     return j+1;
        if(j<0)     return i+1;
        if(dp[i][j]!=-1)    return dp[i][j];
        //rec case
        if(s[i]==t[j])  return dp[i][j] = ans(i-1,j-1,s,t,dp);
        else
            return dp[i][j] = min(1+ans(i-1,j,s,t,dp),min(1+ans(i,j-1,s,t,dp),1+ans(i-1,j-1,s,t,dp)));
    }
    int minDistance(string s, string t) 
    {
        vector<vector<int>>dp(s.length()+1,vector<int>(t.length()+1,-1));
        return ans(s.length()-1,t.length()-1,s,t,dp);
    }
};