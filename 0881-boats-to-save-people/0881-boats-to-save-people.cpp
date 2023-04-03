class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) 
    {
        if(nums.size()==1)
        {
            return 1;
        }
        sort(nums.begin(),nums.end());
        int i=0,count=0;
        int j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]+nums[j]<=limit)
            {
                count++;i++;j--;
            }else{
                count++;
                j--;
            }
        }
        if(i==j)
        {
            count++;
        }
        return count;
    }
};