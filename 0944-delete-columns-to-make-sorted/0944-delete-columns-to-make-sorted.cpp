class Solution {
public:
    int minDeletionSize(vector<string>& nums) 
    {
        int count=0;
        for(int i=0;i<nums[0].length();i++)
        {
            char prev;
            for(int j=0;j<nums.size();j++)
            {
                if(j==0)
                {
                    prev=nums[j][i];
                }else
                {
                    if(nums[j][i]>=prev)
                    {
                        prev=nums[j][i];
                    }else
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        return count;
    }
};