class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) 
    {
        vector<int>v;
        cout<<nums.size();
        if(k*2>=nums.size())
        {
            for(int i=0;i<nums.size();i++)
            {
                v.push_back(-1);
            }
            return v;
        }
        vector<long long int>pre(nums.size()+1,0);
        for(int i=0;i<nums.size();i++)
        {
            pre[i+1]=pre[i]+nums[i];
        }
        for(int i=0;i<k;i++)
        {
            v.push_back(-1);
        }
        for(int i=k;i<nums.size()-k;i++)
        {
            v.push_back((pre[i+k+1]-pre[i-k])/(2*k+1));
        }
        for(int i=nums.size()-k;i<nums.size();i++)
        {
            v.push_back(-1);
        }
        return v;
    }
};