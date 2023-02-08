class Solution {
public:
    int jump(vector<int>& nums)
    {
        if(nums.size()==1)
        {
            return 0;
        }
        int farthest=0;
        int jumps=0;
        int current=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(i+nums[i]>farthest)
            {
                farthest=i+nums[i];
            }
            if(i==current)
            {
                jumps++;
                current=farthest;
            }
        }
        return jumps;
    }
};