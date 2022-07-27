class Solution {
public:
    /*int ans(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<int>>& dp)
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
    }*/
    int minPathSum(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0) dp[i][i]=grid[i][j];
                else
                {
                    int op1=grid[i][j];
                    if(i>0)
                    {
                        op1+=dp[i-1][j];
                    }else
                        op1+=1000;
                    int op2=grid[i][j];
                    if(j>0)
                    {
                        op2+=dp[i][j-1];
                    }else
                        op2+=1000;
                    dp[i][j]=min(op1,op2);
                }
            }
        }
        return dp[m-1][n-1];
    }
}; 