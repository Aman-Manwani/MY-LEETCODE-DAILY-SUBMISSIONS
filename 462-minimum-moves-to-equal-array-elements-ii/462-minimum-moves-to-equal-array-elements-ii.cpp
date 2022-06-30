class Solution {
public:
    int minMoves2(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size();
        int mid=(i+j)/2;
        int ans=0;
        for(int i=0; i < nums.size();i++)
        {
            ans=ans+abs(nums[mid]-nums[i]);
        }
        return ans;
    }
};