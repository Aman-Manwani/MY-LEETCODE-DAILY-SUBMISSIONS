class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        vector<vector<int>>ans;
        if(nums.size()<4)
        {
            return ans;
        }
        if(nums.size()==4 && target<=0)
        {
            if(nums[0]>0 && nums[1]>0 && nums[2]>0 && nums[3]>0)
            {
                return ans;
            }
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++)
        {
            for(int j=i+1;j<nums.size()-2;j++)
            {
                int low=j+1;
                int high=nums.size()-1;
                while(low<high)
                {
                    int sum1=nums[i]+nums[j];
                    int sum2=target-nums[low]-nums[high];
                    if(sum1==sum2)
                    {
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        ans.push_back(temp);
                        while(low<high && nums[low]==nums[low+1])
                        {
                            low++;
                        }
                        while(low<high && nums[high]==nums[high-1])
                        {
                            high--;
                        }
                        low++;high--;
                    }else
                    if(sum1<sum2)
                    {
                        low++;
                    }else
                        high--;
                }
                while(j+1<nums.size()-2 && nums[j]==nums[j+1])
                {
                    j++;
                }
            }
            while(i+1<nums.size()-3 && nums[i]==nums[i+1])
            {
                i++;
            }
        }
        return ans;
    }
};