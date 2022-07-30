class Solution {
public:
    int ans(int i, int j1, int j2, int n, int m, vector < vector < int >> 
& grid, vector < vector < vector < int >>> & dp) {
  if (j1 < 0 || j1 >= m || j2 < 0 || j2 >= m)
    return -1e9;

  if (i == n - 1) {
    if (j1 == j2)
      return grid[i][j1];
    else
      return grid[i][j1] + grid[i][j2];
  }

  if (dp[i][j1][j2] != -1)
    return dp[i][j1][j2];

  int maxi = INT_MIN;
  for (int di = -1; di <= 1; di++) {
    for (int dj = -1; dj <= 1; dj++) {
      int ans1;
      if (j1 == j2)
        ans1 = grid[i][j1] + ans(i + 1, j1 + di, j2 + dj, n, m, grid, dp);
      else
        ans1 = grid[i][j1] + grid[i][j2] + ans(i + 1, j1 + di, j2 + dj, n,
        m, grid, dp);
      maxi = max(maxi, ans1);
    }
  }
  return dp[i][j1][j2] = maxi;
}
    int cherryPickup(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<vector<int>>>dp(n, vector < vector < int >> (m, vector < int
  > (m, -1)));
        return ans(0, 0, m - 1, n, m, grid, dp);
    }
};