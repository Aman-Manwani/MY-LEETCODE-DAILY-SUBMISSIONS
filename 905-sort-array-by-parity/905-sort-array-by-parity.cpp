class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                even.push_back(nums[i]);
            }else
                odd.push_back(nums[i]);
        }
        int x=even.size();
        int h=odd.size();
        vector<int>merge(nums.size(),0);
        for(int i=0;i<x;i++)
        {
            merge[i]=even[i];
        }
        for(int i=x;i<nums.size();i++)
        {
            merge[i]=odd[i-x];
        }
        return merge;
    }
};