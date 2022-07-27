class Solution {
public:
    int ans(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<int>>& dp)
    {
        //base case
        if(i==m-1 && j==n-1)
        {
            return grid[i][j];
        }
        if(i>m-1 || j>n-1)
        {
            return 1000;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        //rec case
        int op1=grid[i][j]+ans(i+1,j,m,n,grid,dp);
        int op2=grid[i][j]+ans(i,j+1,m,n,grid,dp);
        cout<<op1<<" "<<op2;
        return dp[i][j]= min(op1,op2);
    }
    int minPathSum(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return ans(0,0,m,n,grid,dp); 
    }
}; 