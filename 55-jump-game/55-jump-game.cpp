class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxJump = nums[0], i = 0;
        while(i <= maxJump)
        {
            if(i == nums.size() - 1)
            {
                return true;
            }
            maxJump = max(maxJump, i + nums[i]);
            i++;
        }
        return false;
    }
};