class Solution {
public:
    bool isfind(int start,string nums1,string nums2)
    {
        int temp=start;
        while(start-temp<nums2.size())
        {
            if(nums1[start]!=nums2[start-temp])
            {
                return false;
            }
            start++;
        }
        return true;
    }
    int strStr(string nums1, string nums2) 
    {
        for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i]==nums2[0])
            {
                if(isfind(i,nums1,nums2))
                {
                    return i;
                }
            }
        }
        return -1;
    }
};