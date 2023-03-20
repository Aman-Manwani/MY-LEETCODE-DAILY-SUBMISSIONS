class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) 
    {
        if(nums.size()==1 && nums[0]==0)
        {
            return true;
        }
        int ct=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                if(i==0 && nums.size()>=2 && nums[i+1]!=1)
                {
                    ct++;
                    nums[i]=1;
                }else
                if(i==nums.size()-1 && nums.size()>=2 && nums[i-1]!=1)
                {
                    ct++;
                    nums[i]=1;
                }else
                if(i>0 && i<nums.size()-1 && nums[i+1]!=1 && nums[i-1]!=1)
                {
                    ct++;
                    nums[i]=1;
                }
            }
            if(ct>=n)
            {
                return true;
            }
        }
        return false;
    }
};