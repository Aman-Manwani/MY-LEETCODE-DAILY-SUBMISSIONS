class Solution {
public:
    bool checkPowersOfThree(int n)
    {
        for(int i=16;i>=0;i--)
        {
            int temp=pow(3,i);
            if(n-temp>=0)
            {
                n=n-temp;
            }
        }
        if(n==0)
        {
            return true;
        }
        return false;
    }
};