class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums)
    {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)  
        {
            m[nums[i]]++;
        }
        for(auto it:m)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        for(auto it: m)
        {
            int temp=it.second;
            for(auto nitesh:m)
            {
                if(nitesh.first==it.first)
                {
                    continue;
                }else
                {
                    int rem=nitesh.second ^ it.second;
                    if(rem==0)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};