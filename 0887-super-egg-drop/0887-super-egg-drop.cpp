class Solution {
public:
    int solve(int eggs,int floor,vector<vector<int>>&dp)
    {
        //base case
        if(floor<=1)
        {
            return floor;
        }
        if(eggs==1)
        {
            return floor;
        }
        if(dp[eggs][floor]!=-1)
        {
            return dp[eggs][floor];
        }
        //rec case
        int mini=INT_MAX,low=1,high=floor,mid,temp=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            int op1 = solve(eggs-1,mid-1,dp);
            int op2 = solve(eggs,floor-mid,dp);
            int temp = 1+max(op1,op2);
            if(op1<op2)
            {
                low=mid+1;
            }else
                high=mid-1;
            mini=min(mini,temp);
        }
        return dp[eggs][floor] = mini;
    }
    int superEggDrop(int k, int n) 
    {
        vector<vector<int>>dp(k+1,vector<int>(n+1,-1));
        return solve(k,n,dp);   
    }
};