class Solution {
public:
    int nthUglyNumber(int n) 
    {
        if(n<5)
        {
            return n;
        }
        vector<int>dp(n+1,-1);
        dp[1]=1;
        int p1=1;
        int p2=1;
        int p3=1;
        for(int i=2;i<=n;i++)
        {
            int op1=2*dp[p1];
            int op2=3*dp[p2];
            int op3=5*dp[p3];
            dp[i]=min(op1,min(op2,op3));
            if(op1==dp[i])
            {
                p1++;
            }
            if(op2==dp[i])
            {
                p2++;
            }
            if(op3==dp[i])
            {
                p3++;
            }   
        }
        for(int i=0;i<=n;i++)
        {
            cout<<dp[i]<<" ";
        }
        return dp[n];
    }
};