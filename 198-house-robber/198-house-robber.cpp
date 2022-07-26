class Solution {
public:
    int rob(vector<int>& nums) 
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
};