class Solution {
public:
    int countNegatives(vector<vector<int>>& nums) 
    {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                if(nums[i][j]<0)
                {
                    cnt+=nums[i].size()-j;
                    break;
                }
            }
        }
        return cnt;
    }
};