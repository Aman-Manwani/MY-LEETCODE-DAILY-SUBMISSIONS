class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) 
    {
        int min=INT_MAX;
        int index=-1;
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]<min)
                {
                    min=nums[j];
                    index=j;
                }
            }
            nums[index]=-1*nums[index];
            min=INT_MAX;
            index=-1;
        }
        return accumulate(nums.begin(),nums.end(),0);
    }
};