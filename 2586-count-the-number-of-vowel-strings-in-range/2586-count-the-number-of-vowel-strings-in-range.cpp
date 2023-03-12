class Solution {
public:
    bool is_vowel(char ch)
    {
        if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' )
        {
            return true;
        }else
            return false;
    }
    int vowelStrings(vector<string>& nums, int left, int right) 
    {
        int ans=0;
        for(int i=left;i<=right;i++)
        {
            if(is_vowel(nums[i][0]) && is_vowel(nums[i][nums[i].length()-1]))
            {
                ans++;
            }
        }
        return ans;
    }
};