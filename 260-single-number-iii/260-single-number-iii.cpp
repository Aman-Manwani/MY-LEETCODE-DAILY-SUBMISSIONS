class Solution {
public:
    vector<int> singleNumber(vector<int>& nums)
    {
        if(nums.size()==2)
        {
            return nums;
        }
        int ans=0,temp;
        for(int i=0;i<nums.size();i++)
        {
            ans=ans^nums[i];
        }
        temp=ans;
        vector<int>a;
        vector<int>res;
        int count=0;
        while((ans&1)!=1)
        {
            count++;
            ans=ans>>1;
        }
        long int bin_num=1<<count;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]&bin_num)>0)
            {
                a.push_back(nums[i]);
            }
        }
        int num1=0,num2=0;
        for(int i=0;i<a.size();i++)
        {
            num1=num1^a[i];
        }
        num2=temp^num1;
        res.push_back(num1);
        res.push_back(num2);
        return res;
    }
};