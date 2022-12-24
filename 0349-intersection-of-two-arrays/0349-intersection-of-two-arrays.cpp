class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int,int>m1;
        unordered_map<int,int>temp;
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
        {
            m1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(m1.find(nums2[i])!=m1.end())
            {
                temp[nums2[i]]++;
            }
        }
        for(auto it:temp)
        {
            v.push_back(it.first);
        }
        return v;
    }
};