class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int vec=0;
        int h=pow(2,nums.size());
        vector<vector<int>>v(h,vector<int>(0,0));
        for(int i=0;i<pow(2,nums.size());i++)
        {
            int cmp=i;
            int j=0;
            while(cmp>0)
            {
                int last_bit=(cmp&1);
                if(last_bit==1)
                {
                    v[vec].push_back(nums[j]);    
                }
                j++;
                cmp=(cmp>>1);
            }
            vec++;
        }
        return v;
    }
};