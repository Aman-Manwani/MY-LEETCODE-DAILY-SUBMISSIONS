class Solution {
public:
    bool ans(int n)
    {
        //base case
        if(n==0)    return false;;
        if(n==1)    return true;
        //rec case
        if(n%3==0 && ans(n/3))
        {
            return true;
        }else
            return false;
        
    }
    bool isPowerOfThree(int n) 
    {
        return ans(n);
    }
};