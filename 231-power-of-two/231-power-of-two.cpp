class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n==1)
        {
            return true;    
        }
       for(int i=1;i<=n/2;i=i*2)
       {
           if(n==2*i)
           {
               return true;
           }
       }
       return false;
    }
};