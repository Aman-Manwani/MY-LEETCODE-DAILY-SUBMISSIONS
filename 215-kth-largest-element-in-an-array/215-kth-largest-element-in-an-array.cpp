class Solution {
public:
    int findKthLargest(vector<int>& nums, int k)
    {
        int r=nums.size()-k;
        sort(nums.begin(),nums.end());
        return nums[r];
        
        
    }
};