class Solution {
public:
    int maxScore(vector<int>& nums)
    {
        bool pos = false;
        int no_pos=0,no_zero=0;
        long long int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                pos=true;
                no_pos++;
                sum+=nums[i];
            }
            if(nums[i]==0)
            {
                no_zero++;
            }
        }
        if(pos==false || no_pos==0)
        {
            return 0;
        }
        int ans = no_pos;
        sort(nums.begin(),nums.end());
        int index=nums.size()-no_pos-1;
        while(index>=0 && sum>abs(nums[index]))
        {
            sum=sum+nums[index];
            index--;
            ans++;
            cout<<ans<<sum<<endl;
        }
        return ans;
    }
};