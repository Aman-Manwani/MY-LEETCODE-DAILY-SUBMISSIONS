class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        int i=0;
        int j=num;
        long long int ans,mid;
        while(i<=j)
        {
            mid=(i+j)/2;
            if(mid*mid==num)
            {
                return true;
            }else
            if(mid*mid>num)
            {
                j=mid-1;
            }else
            if(mid*mid<num)
            {
                i=mid+1;
            }
        }
        return false;
    }
};