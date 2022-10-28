class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums)
    {
        int i=0,j=nums.size()-1,mid;
        while(i<=j)
        {
            mid=i+(j-i)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
            {
                return mid;
            }
            if(nums[mid]<nums[mid+1])
            {
                i=mid+1;
            }else
                j=mid;
        }
        return mid;
    }
};