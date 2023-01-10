class Solution {
public:
    int ans(int i,int n,vector<vector<int>>&dp)
    {
        //base case
        if(n==0)    return 1;
        if(i>=5)    return 0;
        if(dp[i][n]!=-1)
        {
            return dp[i][n];
        }
        //rec case
        // pick
        int pick = ans(i,n-1,dp);
        //not pick
        int not_pick = ans(i+1,n,dp);
        return dp[i][n] = pick + not_pick;
    }
    int countVowelStrings(int n) 
    {
        vector<vector<int>>dp(5,vector<int>(n+1,-1));
        string temp="aeiou";
        return ans(0,n,dp);
    }
};