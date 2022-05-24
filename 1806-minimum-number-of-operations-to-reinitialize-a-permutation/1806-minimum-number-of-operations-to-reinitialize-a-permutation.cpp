class Solution {
public:
    int reinitializePermutation(int n) 
    {
        vector<int>perm(n,0);
        vector<int>temp(n,0);
        int operations=0;
        for(int i=0;i<n;i++)
        {
            perm[i]=i;
            temp[i]=i;
        }
        vector<int>arr(n,0);
        while(true)
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    arr[i]=perm[i/2];
                }else
                    arr[i]=perm[(n/2)+(i-1)/2];
            }
            operations++;
            if(arr==temp)
            {
                return operations;
            }else
                perm=arr;
        }
    }
};