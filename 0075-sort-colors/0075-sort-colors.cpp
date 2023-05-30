class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int ct_1=0,ct_2=0,ct_3=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)  ct_1++;
            else if(nums[i]==1)  ct_2++;
            else if(nums[i]==2)  ct_3++;
        }
        int index = 0;
        while(index<nums.size())
        {
            while(ct_1--)
            {
                nums[index] = 0;
                index++;
            }
            while(ct_2--)
            {
                nums[index] = 1;
                index++;
            }
            while(ct_3--)
            {
                nums[index] = 2;
                index++;
            }
        }
    }
};