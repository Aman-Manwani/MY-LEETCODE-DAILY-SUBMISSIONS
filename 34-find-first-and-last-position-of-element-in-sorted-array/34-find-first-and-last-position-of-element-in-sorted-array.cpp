class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>v;
        if(nums.size()==0)
        {
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
        bool present=binary_search(nums.begin(),nums.end(),target);
        if(present)
        {
            auto it=lower_bound(nums.begin(),nums.end(),target);
            int i=it-nums.begin();
            v.push_back(i);
            auto itr=upper_bound(nums.begin(),nums.end(),target);
            int r=itr-1 -nums.begin();
            v.push_back(r);
            return v;
        }
        else
        {
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
        return v;
    }
};