class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSub = nums[0];
        int curSum = 0;
    
        for(auto &n: nums) {
            if(curSum < 0) {
                curSum = 0;
            }
            curSum += n;
            maxSub = max(maxSub, curSum);
        }

        return maxSub;
    }

    int maxSubarraySumCircular(vector<int>& nums) {
        int nonCircularMaxSumSub = maxSubArray(nums);
        int arraySum = accumulate(nums.begin(), nums.end(), 0);
        for(int i = 0; i < nums.size(); i++) nums[i] *= -1;
        int minSubArray = maxSubArray(nums);
        int circularMaxSumSub = arraySum + minSubArray;
        return circularMaxSumSub ? max(circularMaxSumSub, nonCircularMaxSumSub) : nonCircularMaxSumSub; 
    }
};