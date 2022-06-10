class Solution {
public:
    int minimumDeletions(vector<int>& nums)
    {

   int fmax,bmax,fmin,bmin;
        int maxv=INT_MIN,minv=INT_MAX,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<minv)
            {
                minv=nums[i];
                fmin=i+1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>maxv)
            {
                maxv=nums[i];
                fmax=i+1;
            }
        }
        int ct=0;
        for(int i=n-1;i>=0;i--)
        {  ct++;
            if(nums[i]==maxv)
                bmax=ct;
        }
         ct=0;
        for(int i=n-1;i>=0;i--)
        { 
            ct++;
            if(nums[i]==minv)
                bmin=ct;
        }
        int op1=max(fmax,fmin);
        int op2=max(bmax,bmin);
        int op3=fmax+bmin;
        int op4=fmin+bmax;
        
        int oneway=min(op1,op2);
        int diway=min(op3,op4);
        return min(oneway,diway);
    }
};