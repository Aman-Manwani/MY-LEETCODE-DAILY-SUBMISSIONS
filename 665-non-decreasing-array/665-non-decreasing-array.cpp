class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count=0,min=INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) {
                if(count==1) return false;
                if(min==INT_MIN) nums[i]=min;
                else if(min<=nums[i+1]) nums[i]=min;
                else{
                    nums[i+1]=nums[i];
                }
                count=1;
            }
            else min=nums[i];
        }
        return true;
    }
};