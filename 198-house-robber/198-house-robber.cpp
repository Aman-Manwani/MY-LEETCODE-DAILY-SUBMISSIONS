class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>dp(n,-1);
        dp[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            int op1=nums[i];
            if(i>1)
            {
                op1+=dp[i-2];
            }
            int op2=0+dp[i-1];
            dp[i]=max(op1,op2);
        }
        return dp[n-1];
    }
};