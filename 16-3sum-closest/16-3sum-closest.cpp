class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        int minimum=INT_MAX;
        int sum,temp;
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
                int low=i+1;
                int high=nums.size()-1;
                while(low<high)
                {
                    sum=nums[i]+nums[low]+nums[high];
                    if(sum==target)
                    {
                        return sum;
                    }else
                    if(sum>target)
                    {
                        high--;
                    }else
                        low++;
                    if(abs(sum-target)<minimum)
                    {
                        temp=sum;
                        minimum=abs(sum-target);
                    }
                }
            }
        }
        return temp;
    }
};