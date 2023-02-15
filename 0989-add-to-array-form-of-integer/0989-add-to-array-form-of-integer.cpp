class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) 
    {
        int temp=k,ct=0;
        vector<int>ans;
        while(temp!=0)
        {
            ct++;
            temp=temp/10;
        }
        if(nums.size()<=ct)
        {
            int v_sum=0;
            for(int i=nums.size()-1;i>=0;i--)
            {
                v_sum+=nums[i]*pow(10,nums.size()-1-i);
            }
            int res = v_sum + k;
            while(res!=0)
            {
                int rem = res%10;
                res=res/10;
                ans.push_back(rem);
            }
            reverse(ans.begin(),ans.end());
            return ans;
        }else
        {
            int carry=0,comp=0;
            int j=nums.size()-1;
            while(k!=0 || carry!=0)
            {
                int rem=k%10;
                k=k/10;    
                if(nums[j]+rem+carry<10)
                {
                    nums[j]=nums[j]+rem+carry;
                    carry=0;
                }else
                {
                    int temp=nums[j]+rem+carry;
                    carry=1;
                    nums[j]=temp%10;
                }
                j--;
                if(j<0 && carry!=0)
                {
                    comp=1;
                    break;
                }
            }
            if(comp==0)
            {
                return nums;
            }else
            {
                ans.push_back(carry);
                for(int i=0;i<nums.size();i++)
                {
                    ans.push_back(nums[i]);
                }
                return ans;
            }
        }
        return nums;
    }
};