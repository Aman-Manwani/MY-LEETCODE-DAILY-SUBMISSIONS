class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) 
    {
        int maxi=1;
        int len=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]>nums[i])
            {
                len++;
                maxi=max(maxi,len);
            }else
            {
                len=0;
                len++;
            }
        }
        return maxi;
    }
};