class Solution {
public:
    int ans(vector<int>nums)
    {
        int n=nums.size();
        int prev=nums[0];
        int prev2=0;
        int curr;
        for(int i=1;i<n;i++)
        {
            int op1=nums[i];
            if(i>1)
            {
                op1+=prev2;
            }
            int op2=0+prev;
            curr=max(op1,op2);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
    int rob(vector<int>& nums)
    {
        if(nums.size()==1)
        {
            return nums[0];
        }
        int n=nums.size();
        vector<int>temp1;
        vector<int>temp2;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0)
            {
                temp1.push_back(nums[i]);
            }
            if(i!=n-1)
            {
                temp2.push_back(nums[i]);
            }
        }
        int ans1=ans(temp1);
        int ans2=ans(temp2);
        return max(ans1,ans2);
    }
};