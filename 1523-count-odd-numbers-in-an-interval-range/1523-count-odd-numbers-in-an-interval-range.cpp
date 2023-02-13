class Solution {
public:
    int countOdds(int low, int high) 
    {
        if(low%2==1 && high%2==1)
        {
            if(low==high)   return 1;
            return (2+(high-low-1)/2);
        }
        if((low%2==0 && high%2==1) || (low%2==1 && high%2==0))
        {
            return (1+(high-low-1)/2);
        }
        return (high-low)/2;
    }
};