class Solution {
public:
    int singleNonDuplicate(vector<int>& nums)
    {
        int i=0;
        int j=nums.size()-1;
        int ans,mid;
        if(nums.size()==1)
        {
            return nums[0];
        }
        while(i<=j)
        {
            mid=(i+j)/2;
            if(mid%2==0) 
            {
                if(nums[mid]==nums[mid+1])
                {
                    i=mid+1;
                }else
                {
                    j=mid-1;    
                }
            }else
            if(mid%2==1)
            {
                if(nums[mid]==nums[mid-1])
                {
                    i=mid+1;
                }else
                    j=mid-1;
            }
        }       
        return nums[i];
    }
};