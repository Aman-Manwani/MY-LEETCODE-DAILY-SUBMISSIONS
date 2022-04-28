class Solution {
public:
    int countPrimes(int n)
    {    
        int count =0;
        vector<int >v(n,1);
        if(n==0 || n==1 || n==2)
        {
            return 0;
        }
        for(int i=4;i<n;i+=2)
        {
            v[i]=0;
        }
        for(int i=3;i<n;i+=2)
        {
            if(v[i]==1)
            {
                for(int j=2*i;j<n;j+=i)
                {
                    v[j]=0;
                }
            }
        }
        v[2]=1;
        v[0]=0;
        v[1]=0;
        int ans=accumulate(v.begin(),v.end(),0);
        return ans;
    }
};