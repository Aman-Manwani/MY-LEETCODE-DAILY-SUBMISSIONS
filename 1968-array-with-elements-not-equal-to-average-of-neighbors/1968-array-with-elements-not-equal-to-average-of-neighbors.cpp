class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<int>v;
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            v.push_back(nums[i]);
            v.push_back(nums[j]);
            i++;j--;
            if(i==j)
            {
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};