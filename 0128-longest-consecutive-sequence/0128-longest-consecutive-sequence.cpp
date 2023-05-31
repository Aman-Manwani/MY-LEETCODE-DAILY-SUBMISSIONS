class Solution {
public:
    
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size()==0)
        {
            return 0;
        }
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int maxi = 1,prev = INT_MIN,temp = 1;
        for(auto it:m)
        {
            if(prev == INT_MIN)
            {
                prev = it.first;
            }else
            if(prev == it.first-1)
            {
                prev = it.first;
                temp++;
                cout<<temp<<" "<<prev<<" "<<it.first<<endl;
                maxi = max(temp,maxi);
            }else{
                prev = it.first;
                temp = 1;
            }
        }
        return maxi;
    }
};