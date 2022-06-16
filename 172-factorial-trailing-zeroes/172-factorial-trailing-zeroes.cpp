class Solution {
public:
    int trailingZeroes(int n) 
    {
        int r=0;
        if(n>=5)
        {
            while(n!=0)
            {
                r=r+(n/5);
                n=n/5;
            }
            return r;
        }else
            return 0;
    }
};