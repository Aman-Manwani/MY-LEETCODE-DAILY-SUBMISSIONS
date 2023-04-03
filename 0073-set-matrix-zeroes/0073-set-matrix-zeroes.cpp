class Solution {
public:
    void setZeroes(vector<vector<int>>& nums)
    {
        set<int>row;
        set<int>col;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                if(nums[i][j]==0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto it : row){
            for(int i=0;i<nums[0].size();i++)
            {
                nums[it][i]=0;
            }
        }
        for(auto it : col){
            for(int i=0;i<nums.size();i++)
            {
                nums[i][it]=0;
            }
        }
    }
};