class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& nums) 
    {
        vector<vector<int>>v(n+1,vector<int>(n+1,0));
        for(int i=0;i<nums.size();i++)
        {
            int row1=nums[i][0];
            int col1=nums[i][1];
            int row2=nums[i][2];
            int col2=nums[i][3];
            
            v[row1][col1]++;
            v[row2+1][col2+1]++;
            v[row1][col2+1]--;
            v[row2+1][col1]--;
        }
        
        vector<vector<int>>ans(n,vector<int>(n,0));
        ans[0][0]=v[0][0];   
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                v[i][j]+=v[i-1][j];
                ans[i][j]=v[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                v[i][j]+=v[i][j-1];
                ans[i][j]=v[i][j];
            }
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
//         vector<vector<int>> result (n, vector<int>(n, 0));
        
//         for (auto q : queries) {
//             result[q[0]][q[1]] ++;
//             if (q[2] + 1 < n) result[q[2]+1][q[1]] --;
//             if (q[3] + 1 < n) result[q[0]][q[3]+1] --;
//             if (q[2] + 1 < n && q[3] + 1 < n) result[q[2]+1][q[3]+1] ++;
//         }
        
//         for (int r = 1; r < n; r ++) {
//             for (int c = 0; c < n; c ++) result[r][c] += result[r-1][c];
//         }
//         for (int r = 0; r < n; r ++) {
//             for (int c = 1; c < n; c ++) result[r][c] += result[r][c-1];
//         }
        
//         return result;
//     }
// };