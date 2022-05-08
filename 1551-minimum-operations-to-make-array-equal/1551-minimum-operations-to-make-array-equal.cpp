class Solution {
public:
    int minOperations(int n)
    {
        int equals=n,operations=0;
        for(int i=1;i<=n;i+=2)
        {
            operations+=n-i;
        }
        return operations;
    }
};