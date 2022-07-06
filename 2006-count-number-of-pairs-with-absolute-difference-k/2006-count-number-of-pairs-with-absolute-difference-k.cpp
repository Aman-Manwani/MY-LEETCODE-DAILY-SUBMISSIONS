class Solution {
public:
    int countKDifference(vector<int>& nums, int k) 
    {
        if(nums.size()==1)
        {
            return 0;
        }
        if(nums.size()==2)
        {
            if(abs(nums[0]-nums[1])==k)
            {
                return 1;
            }
            return 0;
        }
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(abs(nums[i]-nums[j])==k)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};