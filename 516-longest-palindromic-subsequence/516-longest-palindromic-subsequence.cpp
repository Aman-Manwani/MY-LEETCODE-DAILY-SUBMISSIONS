class Solution {
public:
    int longestPalindromeSubseq(string s)
    {
        int n=s.length();
        int m=n;
        string t=s;
        reverse(t.begin(),t.end());
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        //base case
        for(int i=0;i<=n;i++)   dp[0][i]=0;
        for(int i=0;i<=m;i++)   dp[i][0]=0;
        //rec case in for loops
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==t[j-1])   dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=0+max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][n];
    }
};