class Solution {
public:
    bool divideArray(vector<int>& nums) 
    {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.count(nums[i]))
            {
                m[nums[i]]++;
            }else
                m[nums[i]]=1;
        }
        for(auto it:m)
        {
            if(it.second%2!=0)
            {
                return false;
            }
        }
        return true;
    }
};