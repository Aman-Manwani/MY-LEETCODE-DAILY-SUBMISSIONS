class Solution {
public:
    int minimumAverageDifference(vector<int>& nums)
    {
        int n=nums.size();
        long long int total=0;
        for(int i=0;i<nums.size();i++)
        {
            total+=nums[i];
        }
        int mini=INT_MAX,index=-1;
        long long int temp=0;
        for(int i=0;i<nums.size();i++)
        {
            temp+=nums[i];
            total-=nums[i];
            int x;
            if(i==nums.size()-1)
            {
                x=temp/(i+1);
                if(x<mini)
                {
                    mini=x;
                    index=i;
                }
                break;
            }
            x=abs((temp/(i+1))-(total/(n-1-i)));
            if(x<mini)
            {
                mini=x;
                index=i;
            }
        }
        return index;
    }
};