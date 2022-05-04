class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int max=nums[n-1]*nums[n-2]*nums[n-3];
        if(nums[0]*nums[1]*nums[n-1]>max)
        {
            return nums[0]*nums[1]*nums[n-1];
        }else
        return max;
    }
};