class Solution {
public:
    vector<int> missingRolls(vector<int>& nums, int mean, int n)
    {
        int m=nums.size();
        // vector<int>v;
        int total=n+m;
        long long int temp=total*mean;
        long long int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        long long int rem=temp-sum;
        cout<<rem<<endl;
        if(temp==0 || rem<n || (float)rem/n>6)
        {
            vector<int>v;
            return v;
        }else
        { 
            int all = rem/n;
            vector<int>v(n,all);
            int remain=rem%n;
            for(int i=0;i<remain;i++)
            {
                v[i]++;
            }
            return v;
        }
        vector<int>v;
        return v;
    }
};