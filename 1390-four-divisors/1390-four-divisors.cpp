class Solution {
public:
    int sumFourDivisors(vector<int>& nums) 
    {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1 ||nums[i]==2 || nums[i]==3)
            {
                continue;
            }
            int count=0,sum=0;
            int n=sqrt(nums[i]);
            if(n*n==nums[i])
            {
                continue;
            }
            for(int j=1;j<=n;j++)
            {
                if(nums[i]%j==0)
                {
                    count++;
                    sum=sum+j+(nums[i]/j);
                }
                if(count >2)
                {
                    break;
                }
            }
            if(count==2)
            {
                v.push_back(sum);
            }
        }
        int ans=accumulate(v.begin(),v.end(),0);
        return ans;
    }
};