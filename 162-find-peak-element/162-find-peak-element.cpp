class Solution {
public:
    int findPeakElement(vector<int>& nums)
    {
        int i=0;
        int j=nums.size()-1;
        int mid,ans;
        while(i<j)
        {
            mid=(i+j)/2;
            if(nums[mid]>nums[mid+1])
            {
                j=mid;
            }else
                i=mid+1;
        }
        return i;
    }
};